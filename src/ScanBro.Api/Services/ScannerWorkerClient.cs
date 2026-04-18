using System.Diagnostics;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;
using ScanBro.Contracts;

namespace ScanBro.Api.Services;

public sealed class ScannerWorkerClient
{
    private readonly ILogger<ScannerWorkerClient> _logger;
    private readonly JsonSerializerOptions _jsonOptions = new(JsonSerializerDefaults.Web)
    {
        WriteIndented = true,
    };

    public ScannerWorkerClient(ILogger<ScannerWorkerClient> logger)
    {
        _logger = logger;
        _jsonOptions.Converters.Add(new JsonStringEnumConverter());
    }

    public async Task<WorkerInvocationResult> RunProbeAsync(CancellationToken cancellationToken)
    {
        return await ExecuteWorkerAsync(new[] { "probe" }, TimeSpan.FromSeconds(45), cancellationToken);
    }

    public async Task<WorkerInvocationResult> RunScanAsync(ScanRequest request, CancellationToken cancellationToken)
    {
        var requestDirectory = Path.Combine(Path.GetTempPath(), "ScanBro");
        Directory.CreateDirectory(requestDirectory);

        var requestPath = Path.Combine(requestDirectory, $"scan-request-{Guid.NewGuid():N}.json");
        await File.WriteAllTextAsync(requestPath, JsonSerializer.Serialize(request, _jsonOptions), cancellationToken);

        try
        {
            var timeout = BuildScanTimeout(request);
            _logger.LogInformation(
                "Scan timeout configured to {TimeoutSeconds}s (dryRun: {DryRun}, requestedTimeout: {RequestedTimeoutSeconds}s).",
                timeout.TotalSeconds,
                request.DryRun,
                request.TimeoutSeconds);
            return await ExecuteWorkerAsync(new[] { "scan", requestPath }, timeout, cancellationToken);
        }
        finally
        {
            try
            {
                if (File.Exists(requestPath))
                {
                    File.Delete(requestPath);
                }
            }
            catch
            {
                // Best effort only.
            }
        }
    }

    private async Task<WorkerInvocationResult> ExecuteWorkerAsync(
        IReadOnlyList<string> arguments,
        TimeSpan timeout,
        CancellationToken cancellationToken)
    {
        var workerPath = ResolveWorkerPath();
        if (workerPath is null)
        {
            return WorkerInvocationResult.Missing(
                "Worker scanner non trovato. Esegui prima `dotnet build ScanBro.slnx` per generare ScanBro.Scanner.Worker.exe.");
        }

        var startInfo = new ProcessStartInfo
        {
            FileName = workerPath,
            WorkingDirectory = Path.GetDirectoryName(workerPath)!,
            RedirectStandardOutput = true,
            RedirectStandardError = true,
            UseShellExecute = false,
            CreateNoWindow = true,
            StandardOutputEncoding = Encoding.UTF8,
            StandardErrorEncoding = Encoding.UTF8,
        };

        foreach (var argument in arguments)
        {
            startInfo.ArgumentList.Add(argument);
        }

        using var process = new Process { StartInfo = startInfo };

        _logger.LogInformation("Running scanner worker at {WorkerPath} with args {Args}", workerPath, string.Join(" ", arguments));
        process.Start();

        var stdoutTask = process.StandardOutput.ReadToEndAsync(cancellationToken);
        var stderrTask = process.StandardError.ReadToEndAsync(cancellationToken);
        var exitTask = process.WaitForExitAsync(cancellationToken);
        var timeoutTask = Task.Delay(timeout, cancellationToken);

        var completedTask = await Task.WhenAny(exitTask, timeoutTask);
        if (completedTask == timeoutTask)
        {
            try
            {
                process.Kill(entireProcessTree: true);
            }
            catch
            {
                // Best effort only.
            }

            return WorkerInvocationResult.Failed(
                workerPath,
                -1,
                string.Empty,
                $"Timeout del worker scanner dopo {timeout.TotalSeconds:0} secondi.",
                timedOut: true,
                timeoutSeconds: timeout.TotalSeconds);
        }

        await Task.WhenAll(stdoutTask, stderrTask);

        return new WorkerInvocationResult(
            workerPath,
            process.ExitCode,
            await stdoutTask,
            await stderrTask,
            WorkerPathFound: true,
            TimedOut: false,
            TimeoutSeconds: timeout.TotalSeconds);
    }

    private static TimeSpan BuildScanTimeout(ScanRequest request)
    {
        var requestedTimeoutSeconds = Math.Clamp(request.TimeoutSeconds, 15, 1800);

        if (request.DryRun)
        {
            var dryRunTimeoutSeconds = Math.Clamp(requestedTimeoutSeconds + 20, 30, 180);
            return TimeSpan.FromSeconds(dryRunTimeoutSeconds);
        }

        var overheadSeconds = Math.Max(90, requestedTimeoutSeconds / 2);
        var fullScanTimeoutSeconds = Math.Clamp(requestedTimeoutSeconds + overheadSeconds, 180, 3600);
        return TimeSpan.FromSeconds(fullScanTimeoutSeconds);
    }

    private static string? ResolveWorkerPath()
    {
        var candidatePaths = new[]
        {
            Path.GetFullPath(Path.Combine(
                AppContext.BaseDirectory,
                "..", "..", "..", "..",
                "ScanBro.Scanner.Worker",
                "bin", "Debug", "net48",
                "ScanBro.Scanner.Worker.exe")),
            Path.GetFullPath(Path.Combine(
                AppContext.BaseDirectory,
                "..", "..", "..", "..",
                "ScanBro.Scanner.Worker",
                "bin", "Release", "net48",
                "ScanBro.Scanner.Worker.exe")),
        };

        return candidatePaths.FirstOrDefault(File.Exists);
    }
}

public sealed record WorkerInvocationResult(
    string WorkerPath,
    int ExitCode,
    string StandardOutput,
    string StandardError,
    bool WorkerPathFound,
    bool TimedOut,
    double TimeoutSeconds)
{
    public static WorkerInvocationResult Missing(string error) =>
        new(
            string.Empty,
            -1,
            string.Empty,
            error,
            WorkerPathFound: false,
            TimedOut: false,
            TimeoutSeconds: 0);

    public static WorkerInvocationResult Failed(
        string workerPath,
        int exitCode,
        string stdout,
        string stderr,
        bool timedOut = false,
        double timeoutSeconds = 0) =>
        new(
            workerPath,
            exitCode,
            stdout,
            stderr,
            WorkerPathFound: true,
            TimedOut: timedOut,
            TimeoutSeconds: timeoutSeconds);
}
