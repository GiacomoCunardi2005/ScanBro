using System.Text.Json;
using System.Text.Json.Serialization;
using ScanBro.Api.Services;
using ScanBro.Contracts;

var builder = WebApplication.CreateBuilder(args);

builder.Services.AddSingleton<ScannerWorkerClient>();
builder.Services.AddSingleton<ScannerOperationGate>();
builder.Services.ConfigureHttpJsonOptions(options =>
{
    options.SerializerOptions.Converters.Add(new JsonStringEnumConverter());
});

var app = builder.Build();

app.UseDefaultFiles();
app.UseStaticFiles();

var jsonOptions = new JsonSerializerOptions(JsonSerializerDefaults.Web)
{
    WriteIndented = true,
};
jsonOptions.Converters.Add(new JsonStringEnumConverter());

app.MapGet("/api/health", () => Results.Json(new
{
    status = "ok",
    app = "ScanBro.Api",
    utc = DateTimeOffset.UtcNow,
}));

app.MapGet("/api/probe", async (
    ScannerWorkerClient workerClient,
    ScannerOperationGate operationGate,
    CancellationToken cancellationToken) =>
{
    var operationLease = operationGate.TryEnter("probe", out var busySnapshot);
    if (operationLease is null)
    {
        return BuildScannerBusyResult(busySnapshot);
    }

    using (operationLease)
    {
        var result = await workerClient.RunProbeAsync(cancellationToken);

        if (!result.WorkerPathFound)
        {
            return Results.Problem(
                title: "Worker scanner mancante",
                detail: result.StandardError,
                statusCode: StatusCodes.Status503ServiceUnavailable);
        }

        if (result.ExitCode != 0)
        {
            if (result.TimedOut)
            {
                return Results.Problem(
                    title: "Probe timeout",
                    detail: result.StandardError,
                    statusCode: StatusCodes.Status504GatewayTimeout);
            }

            return Results.Problem(
                title: "Worker scanner terminato con errore",
                detail: string.IsNullOrWhiteSpace(result.StandardError) ? result.StandardOutput : result.StandardError,
                statusCode: StatusCodes.Status500InternalServerError);
        }

        ProbeReport? report;
        try
        {
            report = JsonSerializer.Deserialize<ProbeReport>(result.StandardOutput, jsonOptions);
        }
        catch (JsonException jsonException)
        {
            return Results.Problem(
                title: "JSON del worker non valido",
                detail: jsonException.Message,
                statusCode: StatusCodes.Status500InternalServerError);
        }

        if (report is null)
        {
            return Results.Problem(
                title: "Probe vuoto",
                detail: "Il worker non ha restituito un report utilizzabile.",
                statusCode: StatusCodes.Status500InternalServerError);
        }

        return Results.Json(report, jsonOptions);
    }
});

app.MapPost("/api/scan", async (
    ScanRequest request,
    ScannerWorkerClient workerClient,
    ScannerOperationGate operationGate,
    CancellationToken cancellationToken) =>
{
    var operationLease = operationGate.TryEnter("scan", out var busySnapshot);
    if (operationLease is null)
    {
        return BuildScannerBusyResult(busySnapshot);
    }

    using (operationLease)
    {
        var invocation = await workerClient.RunScanAsync(request, cancellationToken);

        if (!invocation.WorkerPathFound)
        {
            return Results.Problem(
                title: "Worker scanner mancante",
                detail: invocation.StandardError,
                statusCode: StatusCodes.Status503ServiceUnavailable);
        }

        if (invocation.TimedOut)
        {
            var timeoutMessage = string.IsNullOrWhiteSpace(invocation.StandardError)
                ? $"Timeout del worker scanner dopo {invocation.TimeoutSeconds:0} secondi."
                : invocation.StandardError;
            var syntheticResult = BuildSyntheticFailureResult(request, timeoutMessage);
            syntheticResult.Messages.Add(new DiagnosticMessage
            {
                Severity = "info",
                Message = request.DryRun
                    ? "Il dry run usa un timeout backend ridotto per evitare attese lunghe."
                    : "Per scansioni molto lente prova ad aumentare timeoutSeconds oppure riduci DPI/area di acquisizione.",
            });
            return Results.Json(syntheticResult, jsonOptions, statusCode: StatusCodes.Status504GatewayTimeout);
        }

        if (string.IsNullOrWhiteSpace(invocation.StandardOutput))
        {
            var syntheticResult = BuildSyntheticFailureResult(
                request,
                string.IsNullOrWhiteSpace(invocation.StandardError) ? "Nessun output disponibile." : invocation.StandardError);
            return Results.Json(syntheticResult, jsonOptions, statusCode: StatusCodes.Status500InternalServerError);
        }

        ScanResult? scanResult;
        try
        {
            scanResult = JsonSerializer.Deserialize<ScanResult>(invocation.StandardOutput, jsonOptions);
        }
        catch (JsonException jsonException)
        {
            return Results.Problem(
                title: "JSON scan non valido",
                detail: jsonException.Message,
                statusCode: StatusCodes.Status500InternalServerError);
        }

        if (scanResult is null)
        {
            return Results.Problem(
                title: "Risultato scansione vuoto",
                detail: "Il worker non ha restituito un risultato utilizzabile.",
                statusCode: StatusCodes.Status500InternalServerError);
        }

        var statusCode = scanResult.Success
            ? StatusCodes.Status200OK
            : StatusCodes.Status500InternalServerError;

        return Results.Json(scanResult, jsonOptions, statusCode: statusCode);
    }
});

app.Run();

static ScanResult BuildSyntheticFailureResult(ScanRequest request, string errorMessage)
{
    var normalizedMessage = errorMessage.Trim();
    var result = new ScanResult
    {
        Success = false,
        DryRun = request.DryRun,
        SourceName = request.SourceName,
        RequestedOutputPath = request.OutputPath,
        RequestedTransferMode = request.TransferMode,
        RequestedOutputFileFormat = request.OutputFileFormat,
        ResolutionDpi = request.ResolutionDpi,
        BitDepth = request.BitDepth,
        ColorMode = request.ColorMode,
        ErrorMessage = normalizedMessage,
        FinishedAtUtc = DateTimeOffset.UtcNow,
    };

    result.Messages.Add(new DiagnosticMessage
    {
        Severity = "error",
        Message = normalizedMessage,
    });

    if (normalizedMessage.Contains("Timeout", StringComparison.OrdinalIgnoreCase))
    {
        result.Messages.Add(new DiagnosticMessage
        {
            Severity = "warning",
            Message =
                "La scansione e` stata interrotta dal watchdog del backend. Con 2400+ dpi sul frame intero del piano scanner il driver Canon puo` impiegare diversi minuti.",
        });
    }

    return result;
}

static IResult BuildScannerBusyResult(ScannerOperationSnapshot snapshot)
{
    var operationName = string.IsNullOrWhiteSpace(snapshot.OperationName)
        ? "scanner-operation"
        : snapshot.OperationName;
    var detail = $"E` gia` in corso un'operazione scanner ({operationName}). Attendi il completamento e riprova.";

    return Results.Json(new
    {
        title = "Scanner occupato",
        detail,
        status = StatusCodes.Status423Locked,
        currentOperation = operationName,
        startedAtUtc = snapshot.StartedAtUtc,
    }, statusCode: StatusCodes.Status423Locked);
}
