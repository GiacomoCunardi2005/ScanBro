using System.Text.Json;
using System.Text.Json.Serialization;
using ScanBro.Api.Services;
using ScanBro.Contracts;

var builder = WebApplication.CreateBuilder(args);

builder.Services.AddSingleton<ScannerWorkerClient>();
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

app.MapGet("/api/probe", async (ScannerWorkerClient workerClient, CancellationToken cancellationToken) =>
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
});

app.MapPost("/api/scan", async (ScanRequest request, ScannerWorkerClient workerClient, CancellationToken cancellationToken) =>
{
    var invocation = await workerClient.RunScanAsync(request, cancellationToken);

    if (!invocation.WorkerPathFound)
    {
        return Results.Problem(
            title: "Worker scanner mancante",
            detail: invocation.StandardError,
            statusCode: StatusCodes.Status503ServiceUnavailable);
    }

    if (string.IsNullOrWhiteSpace(invocation.StandardOutput))
    {
        return Results.Problem(
            title: "Worker scanner senza output",
            detail: string.IsNullOrWhiteSpace(invocation.StandardError) ? "Nessun output disponibile." : invocation.StandardError,
            statusCode: StatusCodes.Status500InternalServerError);
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
});

app.Run();
