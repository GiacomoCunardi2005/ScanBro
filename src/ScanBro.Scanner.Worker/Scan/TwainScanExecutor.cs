using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading;
using Newtonsoft.Json;
using NTwain;
using NTwain.Data;
using ScanBro.Contracts;

namespace ScanBro.Scanner.Worker.Scan;

internal sealed class TwainScanExecutor
{
    public ScanResult Execute(string requestPath)
    {
        var startedAt = DateTimeOffset.UtcNow;
        var stopwatch = Stopwatch.StartNew();
        var request = LoadRequest(requestPath);
        var result = new ScanResult
        {
            DryRun = request.DryRun,
            SourceName = request.SourceName,
            RequestedOutputPath = request.OutputPath,
            RequestedTransferMode = request.TransferMode,
            RequestedOutputFileFormat = request.OutputFileFormat,
            ResolutionDpi = request.ResolutionDpi,
            BitDepth = request.BitDepth,
            ColorMode = request.ColorMode,
            StartedAtUtc = startedAt,
        };

        TwainSession? session = null;
        DataSource? source = null;

        using var transferCompleted = new ManualResetEventSlim(false);
        var memoryTransfer = new MemoryTransferImageBuilder(request, result);

        try
        {
            ValidateRequest(request, result);

            PlatformInfo.Current.PreferNewDSM = !request.PreferLegacyDsm;

            var appIdentity = TWIdentity.CreateFromAssembly(DataGroups.Image, Assembly.GetExecutingAssembly());
            session = new TwainSession(appIdentity)
            {
                StopOnTransferError = true,
            };

            session.TransferReady += (_, args) => memoryTransfer.RegisterPendingImageInfo(args.PendingImageInfo);

            session.DataTransferred += (_, args) =>
            {
                result.TransferCompleted = true;
                result.TransferType = args.TransferType.ToString();

                if (args.TransferType == XferMech.Memory)
                {
                    result.OutputFormat = ScanFileFormat.Tiff.ToString();
                    memoryTransfer.Append(args);
                    return;
                }

                result.OutputFormat = args.ImageFileFormat.ToString();

                if (!string.IsNullOrWhiteSpace(args.FileDataPath))
                {
                    result.ResolvedOutputPath = args.FileDataPath;
                }

                transferCompleted.Set();
            };

            session.TransferError += (_, args) =>
            {
                if (string.IsNullOrWhiteSpace(result.ErrorMessage))
                {
                    var exceptionMessage = args.Exception?.Message;
                    if (!string.IsNullOrWhiteSpace(exceptionMessage))
                    {
                        result.ErrorMessage = exceptionMessage!;
                    }
                    else
                    {
                        result.ErrorMessage = $"Transfer error: {args.ReturnCode} / {args.SourceStatus?.ConditionCode}";
                    }
                }

                result.Messages.Add(new DiagnosticMessage
                {
                    Severity = "error",
                    Message = result.ErrorMessage ?? "Transfer error sconosciuto.",
                });

                transferCompleted.Set();
            };

            session.TransferCanceled += (_, _) =>
            {
                if (string.IsNullOrWhiteSpace(result.ErrorMessage))
                {
                    result.ErrorMessage = "Trasferimento annullato dal driver o dallo scanner.";
                }

                result.Messages.Add(new DiagnosticMessage
                {
                    Severity = "warning",
                    Message = result.ErrorMessage,
                });

                transferCompleted.Set();
            };

            session.SourceDisabled += (_, _) => transferCompleted.Set();

            AddOperation(result, "session.open", "running", "Apro il DSM TWAIN.");
            var sessionCode = session.Open();
            result.SessionOpened = session.IsDsmOpen;
            AddOperation(result, "session.open", ReturnCodeToStatus(sessionCode), sessionCode.ToString());

            if (!session.IsDsmOpen)
            {
                Fail(result, $"Impossibile aprire la sessione TWAIN ({sessionCode}).");
                return FinalizeResult(result, stopwatch);
            }

            source = FindSource(session, request.SourceName);
            if (source is null)
            {
                Fail(result, $"Sorgente TWAIN non trovata: {request.SourceName}");
                return FinalizeResult(result, stopwatch);
            }

            result.SourceName = source.Name;

            AddOperation(result, "source.open", "running", $"Apro la sorgente {source.Name}.");
            var sourceCode = source.Open();
            result.SourceOpened = source.IsOpen;
            AddOperation(result, "source.open", ReturnCodeToStatus(sourceCode), sourceCode.ToString());

            if (!source.IsOpen)
            {
                Fail(result, $"Impossibile aprire la sorgente {source.Name} ({sourceCode}).");
                return FinalizeResult(result, stopwatch);
            }

            var negotiatedScan = NegotiateScan(source, request, result);
            result.ResolvedOutputPath = negotiatedScan.OutputPath;
            result.NegotiatedTransferMode = negotiatedScan.TransferMode;
            result.NegotiatedOutputFileFormat = negotiatedScan.FileFormat;
            result.OutputFormat = negotiatedScan.FileFormat.ToString();
            result.NegotiationSummary = $"Transfer={negotiatedScan.TransferMode}, FileFormat={negotiatedScan.FileFormat}";

            ApplyBaseCapabilities(source, request, negotiatedScan, result);
            if (negotiatedScan.TransferMode == ScanTransferMode.File)
            {
                ConfigureFileTransfer(source, negotiatedScan, result);
            }

            if (request.DryRun)
            {
                result.Success = true;
                result.Messages.Add(new DiagnosticMessage
                {
                    Severity = "info",
                    Message = "Dry run completato: sorgente aperta e capability impostati senza acquisizione.",
                });
                return FinalizeResult(result, stopwatch);
            }

            var previousCurrentDirectory = PrepareAcquisitionDirectory(negotiatedScan, result);
            try
            {
                if (negotiatedScan.TransferMode == ScanTransferMode.File)
                {
                    var acquisitionPath = GetAcquisitionOutputPath(negotiatedScan);
                    if (File.Exists(acquisitionPath))
                    {
                        File.Delete(acquisitionPath);
                    }

                    if (!string.Equals(acquisitionPath, negotiatedScan.OutputPath, StringComparison.OrdinalIgnoreCase) &&
                        File.Exists(negotiatedScan.OutputPath))
                    {
                        File.Delete(negotiatedScan.OutputPath);
                    }
                }
                else if (File.Exists(negotiatedScan.OutputPath))
                {
                    File.Delete(negotiatedScan.OutputPath);
                }

                var enableDetail = negotiatedScan.TransferMode == ScanTransferMode.Memory
                    ? "Avvio acquisizione memory transfer senza UI."
                    : "Avvio acquisizione file transfer senza UI.";
                AddOperation(result, "source.enable", "running", enableDetail);
                var enableCode = source.Enable(SourceEnableMode.NoUI, modal: false, IntPtr.Zero);
                result.SourceEnabled = enableCode == ReturnCode.Success;
                AddOperation(result, "source.enable", ReturnCodeToStatus(enableCode), enableCode.ToString());

                if (enableCode != ReturnCode.Success)
                {
                    Fail(result, $"Enable fallito: {enableCode}");
                    return FinalizeResult(result, stopwatch);
                }

                if (!transferCompleted.Wait(TimeSpan.FromSeconds(request.TimeoutSeconds)))
                {
                    Fail(result, $"Timeout dopo {request.TimeoutSeconds} secondi in attesa del completamento scansione.");
                    return FinalizeResult(result, stopwatch);
                }

                if (!string.IsNullOrWhiteSpace(result.ErrorMessage))
                {
                    return FinalizeResult(result, stopwatch);
                }

                if (negotiatedScan.TransferMode == ScanTransferMode.Memory)
                {
                    FinalizeMemoryTransfer(memoryTransfer, negotiatedScan, result);
                }
                else if (negotiatedScan.UsesDriverDefaultFileName)
                {
                    FinalizeDriverManagedOutput(negotiatedScan, result);
                }

                if (!File.Exists(result.ResolvedOutputPath))
                {
                    Fail(result, "La scansione e` terminata ma il file di output non e` stato trovato sul disco.");
                    return FinalizeResult(result, stopwatch);
                }
            }
            finally
            {
                RestoreCurrentDirectory(previousCurrentDirectory);
            }

            result.Success = true;
            result.Messages.Add(new DiagnosticMessage
            {
                Severity = "info",
                Message = $"Scansione completata: {result.ResolvedOutputPath}",
            });
            return FinalizeResult(result, stopwatch);
        }
        catch (Exception exception)
        {
            Fail(result, exception.ToString());
            return FinalizeResult(result, stopwatch);
        }
        finally
        {
            try
            {
                if (source?.IsOpen == true)
                {
                    source.Close();
                }
            }
            catch
            {
                // best effort
            }

            try
            {
                if (session?.IsDsmOpen == true)
                {
                    session.Close();
                }
            }
            catch
            {
                // best effort
            }
        }
    }

    private static ScanRequest LoadRequest(string requestPath)
    {
        if (string.IsNullOrWhiteSpace(requestPath))
        {
            throw new InvalidOperationException("Percorso request mancante.");
        }

        if (!File.Exists(requestPath))
        {
            throw new FileNotFoundException("File request non trovato.", requestPath);
        }

        var json = File.ReadAllText(requestPath);
        var request = JsonConvert.DeserializeObject<ScanRequest>(json);
        if (request is null)
        {
            throw new InvalidOperationException("Request JSON non valido.");
        }

        return request;
    }

    private static void ValidateRequest(ScanRequest request, ScanResult result)
    {
        if (request.ResolutionDpi < 25 || request.ResolutionDpi > 9600)
        {
            throw new InvalidOperationException("ResolutionDpi deve essere compreso tra 25 e 9600.");
        }

        if (request.BitDepth <= 0)
        {
            throw new InvalidOperationException("BitDepth deve essere positivo.");
        }

        if (request.TimeoutSeconds < 15 || request.TimeoutSeconds > 1800)
        {
            throw new InvalidOperationException("TimeoutSeconds deve essere compreso tra 15 e 1800.");
        }

        if (string.IsNullOrWhiteSpace(request.SourceName))
        {
            request.SourceName = "CanoScan 5600F";
        }

        switch (request.ColorMode)
        {
            case ScanColorMode.Color when request.BitDepth is not 24 and not 48:
                throw new InvalidOperationException("Color supporta solo 24-bit o 48-bit.");
            case ScanColorMode.Grayscale when request.BitDepth is not 8 and not 16:
                throw new InvalidOperationException("Grayscale supporta solo 8-bit o 16-bit.");
            case ScanColorMode.BlackWhite when request.BitDepth != 1:
                throw new InvalidOperationException("BlackWhite supporta solo 1-bit.");
        }

        result.Messages.Add(new DiagnosticMessage
        {
            Severity = "info",
            Message =
                $"Richiesta: {request.ColorMode}, {request.BitDepth}-bit, {request.ResolutionDpi} dpi, transfer={request.TransferMode}, format={request.OutputFileFormat}, dryRun={request.DryRun}",
        });
    }

    private static DataSource? FindSource(TwainSession session, string sourceName)
    {
        var sources = session.GetSources().ToList();

        return sources.FirstOrDefault(source =>
                   string.Equals(source.Name, sourceName, StringComparison.OrdinalIgnoreCase)) ??
               sources.FirstOrDefault(source =>
                   source.Name.IndexOf(sourceName, StringComparison.OrdinalIgnoreCase) >= 0) ??
               sources.FirstOrDefault(source =>
                   source.Name.IndexOf("5600F", StringComparison.OrdinalIgnoreCase) >= 0);
    }

    private static NegotiatedScanSettings NegotiateScan(DataSource source, ScanRequest request, ScanResult result)
    {
        var requestedFileFormat = ResolveRequestedOutputFileFormat(request);
        result.RequestedOutputFileFormat = requestedFileFormat;

        var supportedTransferMechanisms = ReadCapabilityIntegers(source, CapabilityId.ICapXferMech);
        var supportedFileFormatValues = ReadCapabilityIntegers(source, CapabilityId.ICapImageFileFormat);
        var negotiatedTransferMode = ChooseTransferMode(
            request,
            requestedFileFormat,
            supportedTransferMechanisms,
            supportedFileFormatValues,
            result);
        var negotiatedFileFormat = negotiatedTransferMode == ScanTransferMode.Memory
            ? ChooseMemoryOutputFileFormat(requestedFileFormat, result)
            : ChooseNegotiatedFileFormat(requestedFileFormat, supportedFileFormatValues, result);

        ValidateNegotiatedScan(request, negotiatedTransferMode, negotiatedFileFormat, result);

        var outputPath = ResolveOutputPath(request, negotiatedFileFormat);

        result.Messages.Add(new DiagnosticMessage
        {
            Severity = "info",
            Message = $"Negoziazione driver: transfer={negotiatedTransferMode}, format={negotiatedFileFormat}.",
        });

        return new NegotiatedScanSettings
        {
            TransferMode = negotiatedTransferMode,
            FileFormat = negotiatedFileFormat,
            OutputPath = outputPath,
        };
    }

    private static ScanFileFormat ResolveRequestedOutputFileFormat(ScanRequest request)
    {
        if (request.OutputFileFormat != ScanFileFormat.Auto)
        {
            return request.OutputFileFormat;
        }

        var extension = Path.GetExtension(request.OutputPath)?.ToLowerInvariant();
        return extension switch
        {
            ".bmp" => ScanFileFormat.Bmp,
            ".tif" => ScanFileFormat.Tiff,
            ".tiff" => ScanFileFormat.Tiff,
            _ => ScanFileFormat.Auto,
        };
    }

    private static ScanTransferMode ChooseTransferMode(
        ScanRequest request,
        ScanFileFormat requestedFileFormat,
        IReadOnlyCollection<int> supportedTransferMechanisms,
        IReadOnlyCollection<int> supportedFileFormatValues,
        ScanResult result)
    {
        var supportsFile = supportedTransferMechanisms.Contains((int)XferMech.File);
        var supportsMemory = supportedTransferMechanisms.Contains((int)XferMech.Memory);
        var appSupportsMemory = IsMemoryTransferSupportedByApplication(request);
        var fileCanHonorRequestedFormat = CanFileTransferHonorRequestedFormat(requestedFileFormat, supportedFileFormatValues);
        var shouldPreferMemory = appSupportsMemory && supportsMemory && (
            RequiresMemoryTransferForBitDepth(request) ||
            (requestedFileFormat == ScanFileFormat.Tiff && !fileCanHonorRequestedFormat));

        if (request.TransferMode == ScanTransferMode.Auto && shouldPreferMemory)
        {
            var reason = RequiresMemoryTransferForBitDepth(request)
                ? $"{request.BitDepth}-bit richiede memory transfer per output affidabile."
                : "TIFF richiesto ma il file transfer del driver non lo supporta.";
            result.Messages.Add(new DiagnosticMessage
            {
                Severity = "info",
                Message = $"Auto seleziona Memory: {reason}",
            });
        }

        return request.TransferMode switch
        {
            ScanTransferMode.Auto when shouldPreferMemory => ScanTransferMode.Memory,
            ScanTransferMode.Auto when supportsFile => ScanTransferMode.File,
            ScanTransferMode.Auto when supportsMemory && appSupportsMemory => ScanTransferMode.Memory,
            ScanTransferMode.File when supportsFile => ScanTransferMode.File,
            ScanTransferMode.Memory when supportsMemory && appSupportsMemory => ScanTransferMode.Memory,
            ScanTransferMode.Memory when !supportsMemory =>
                throw new InvalidOperationException("Il driver Canon non espone il memory transfer TWAIN."),
            ScanTransferMode.Memory =>
                throw new InvalidOperationException(
                    "Il memory transfer dell'app supporta solo Color 24/48-bit e Grayscale 8/16-bit."),
            ScanTransferMode.File =>
                throw new InvalidOperationException("Il driver Canon non espone il file transfer TWAIN."),
            _ => throw new InvalidOperationException($"TransferMode non supportato: {request.TransferMode}"),
        };
    }

    private static ScanFileFormat ChooseNegotiatedFileFormat(
        ScanFileFormat requestedFileFormat,
        IReadOnlyCollection<int> supportedFileFormatValues,
        ScanResult result)
    {
        var supportedFormats = supportedFileFormatValues
            .Select(TryMapFileFormat)
            .Where(format => format.HasValue)
            .Select(format => format!.Value)
            .Distinct()
            .ToList();

        if (supportedFormats.Count == 0)
        {
            throw new InvalidOperationException(
                "Il driver non ha restituito un elenco utilizzabile di formati file TWAIN.");
        }

        result.Messages.Add(new DiagnosticMessage
        {
            Severity = "info",
            Message = $"Formati file driver: {string.Join(", ", supportedFormats)}",
        });

        if (requestedFileFormat == ScanFileFormat.Auto)
        {
            if (supportedFormats.Contains(ScanFileFormat.Tiff))
            {
                return ScanFileFormat.Tiff;
            }

            if (supportedFormats.Contains(ScanFileFormat.Bmp))
            {
                return ScanFileFormat.Bmp;
            }

            return supportedFormats[0];
        }

        if (supportedFormats.Contains(requestedFileFormat))
        {
            return requestedFileFormat;
        }

        if (requestedFileFormat == ScanFileFormat.Tiff && supportedFormats.Contains(ScanFileFormat.Bmp))
        {
            result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message = "Il driver Canon non accetta TIFF in file transfer; fallback automatico a BMP.",
            });
            return ScanFileFormat.Bmp;
        }

        if (requestedFileFormat == ScanFileFormat.Bmp && supportedFormats.Contains(ScanFileFormat.Tiff))
        {
            result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message = "BMP richiesto ma non supportato dal driver; fallback automatico a TIFF.",
            });
            return ScanFileFormat.Tiff;
        }

        throw new InvalidOperationException(
            $"Formato file richiesto non supportato dal driver: {requestedFileFormat}. Supportati: {string.Join(", ", supportedFormats)}");
    }

    private static ScanFileFormat ChooseMemoryOutputFileFormat(
        ScanFileFormat requestedFileFormat,
        ScanResult result)
    {
        if (requestedFileFormat == ScanFileFormat.Bmp)
        {
            result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message = "Memory transfer selezionato: l'output viene scritto come TIFF non compresso, non BMP.",
            });
        }

        return ScanFileFormat.Tiff;
    }

    private static void ValidateNegotiatedScan(
        ScanRequest request,
        ScanTransferMode negotiatedTransferMode,
        ScanFileFormat negotiatedFileFormat,
        ScanResult result)
    {
        if (negotiatedTransferMode == ScanTransferMode.Memory)
        {
            if (!IsMemoryTransferSupportedByApplication(request))
            {
                throw new InvalidOperationException(
                    "Il memory transfer dell'app supporta solo Color 24/48-bit e Grayscale 8/16-bit.");
            }

            return;
        }

        if (negotiatedFileFormat != ScanFileFormat.Bmp)
        {
            return;
        }

        if (request.BitDepth is 1 or 8 or 24)
        {
            return;
        }

        const string message =
            "Il driver Canon espone solo BMP nel file transfer. 16-bit/48-bit richiedono memory transfer per output affidabile.";

        if (request.DryRun)
        {
            result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message = message,
            });
            return;
        }

        throw new InvalidOperationException(message);
    }

    private static bool RequiresMemoryTransferForBitDepth(ScanRequest request)
    {
        return request.BitDepth is 16 or 48;
    }

    private static bool IsMemoryTransferSupportedByApplication(ScanRequest request)
    {
        return request.ColorMode switch
        {
            ScanColorMode.Color when request.BitDepth is 24 or 48 => true,
            ScanColorMode.Grayscale when request.BitDepth is 8 or 16 => true,
            _ => false,
        };
    }

    private static bool CanFileTransferHonorRequestedFormat(
        ScanFileFormat requestedFileFormat,
        IReadOnlyCollection<int> supportedFileFormatValues)
    {
        if (requestedFileFormat == ScanFileFormat.Auto)
        {
            return true;
        }

        return supportedFileFormatValues
            .Select(TryMapFileFormat)
            .Where(format => format.HasValue)
            .Select(format => format!.Value)
            .Contains(requestedFileFormat);
    }

    private static IReadOnlyCollection<int> ReadCapabilityIntegers(DataSource source, CapabilityId capabilityId)
    {
        try
        {
            return ExtractIntegers(source.Capabilities.GetValues(capabilityId))
                .Distinct()
                .ToList();
        }
        catch
        {
            return Array.Empty<int>();
        }
    }

    private static IEnumerable<int> ExtractIntegers(object? value)
    {
        if (value is null)
        {
            yield break;
        }

        if (value is string stringValue)
        {
            foreach (var segment in stringValue.Split(','))
            {
                if (int.TryParse(segment.Trim(), NumberStyles.Integer, CultureInfo.InvariantCulture, out var parsed))
                {
                    yield return parsed;
                }
            }

            yield break;
        }

        if (value is Enum enumValue)
        {
            yield return Convert.ToInt32(enumValue, CultureInfo.InvariantCulture);
            yield break;
        }

        if (value is IEnumerable enumerable && value is not byte[])
        {
            foreach (var item in enumerable)
            {
                foreach (var parsed in ExtractIntegers(item))
                {
                    yield return parsed;
                }
            }

            yield break;
        }

        var type = value.GetType();

        var valueProperty = type.GetProperty("Value", BindingFlags.Public | BindingFlags.Instance);
        if (valueProperty is not null)
        {
            foreach (var parsed in ExtractIntegers(valueProperty.GetValue(value, null)))
            {
                yield return parsed;
            }

            yield break;
        }

        var itemsProperty = type.GetProperty("Items", BindingFlags.Public | BindingFlags.Instance);
        if (itemsProperty?.GetValue(value, null) is IEnumerable items)
        {
            foreach (var parsed in ExtractIntegers(items))
            {
                yield return parsed;
            }

            yield break;
        }

        int parsedValue;
        try
        {
            parsedValue = Convert.ToInt32(value, CultureInfo.InvariantCulture);
        }
        catch
        {
            yield break;
        }

        yield return parsedValue;
    }

    private static ScanFileFormat? TryMapFileFormat(int rawFormat)
    {
        return rawFormat switch
        {
            (int)FileFormat.Tiff => ScanFileFormat.Tiff,
            (int)FileFormat.Bmp => ScanFileFormat.Bmp,
            _ => null,
        };
    }

    private static string ResolveOutputPath(ScanRequest request, ScanFileFormat negotiatedFileFormat)
    {
        var requestedPath = string.IsNullOrWhiteSpace(request.OutputPath)
            ? Path.Combine("data", "scans", $"scanbro-{DateTime.Now:yyyyMMdd-HHmmss}")
            : request.OutputPath.Trim();

        var extension = negotiatedFileFormat == ScanFileFormat.Bmp ? ".bmp" : ".tif";
        return Path.GetFullPath(Path.ChangeExtension(requestedPath, extension));
    }

    private static void ApplyBaseCapabilities(
        DataSource source,
        ScanRequest request,
        NegotiatedScanSettings negotiatedScan,
        ScanResult result)
    {
        RequireSuccess(result, "cap.transfer-mechanism",
            () => source.Capabilities.ICapXferMech.SetValue(ToTwainTransferMechanism(negotiatedScan.TransferMode)));
        if (negotiatedScan.TransferMode == ScanTransferMode.File)
        {
            RequireSuccess(result, "cap.file-format",
                () => source.Capabilities.ICapImageFileFormat.SetValue(ToTwainFileFormat(negotiatedScan.FileFormat)));
        }
        RequireSuccess(result, "cap.units", () => source.Capabilities.ICapUnits.SetValue(Unit.Inches));
        RequireSuccess(result, "cap.pixel-type",
            () => source.Capabilities.ICapPixelType.SetValue(MapPixelType(request.ColorMode)));
        RequireSuccess(result, "cap.bit-depth", () => source.Capabilities.ICapBitDepth.SetValue(request.BitDepth));
        RequireSuccess(result, "cap.x-resolution",
            () => source.Capabilities.ICapXResolution.SetValue((TWFix32)request.ResolutionDpi));
        RequireSuccess(result, "cap.y-resolution",
            () => source.Capabilities.ICapYResolution.SetValue((TWFix32)request.ResolutionDpi));
        RequireSuccess(result, "cap.transfer-count", () => source.Capabilities.CapXferCount.SetValue(1));

        if (request.HideIndicators)
        {
            TryApplyCapability(result, "cap.indicators",
                () => source.Capabilities.CapIndicators.SetValue(BoolType.False));
        }
    }

    private static void ConfigureFileTransfer(
        DataSource source,
        NegotiatedScanSettings negotiatedScan,
        ScanResult result)
    {
        var defaultSetup = ReadSetupFileTransfer(
            result,
            "setup.file-transfer.get-default",
            (out TWSetupFileXfer setupFileXfer) => source.DGControl.SetupFileXfer.GetDefault(out setupFileXfer));
        var currentSetup = ReadSetupFileTransfer(
            result,
            "setup.file-transfer.get-current",
            (out TWSetupFileXfer setupFileXfer) => source.DGControl.SetupFileXfer.Get(out setupFileXfer));

        var seedSetup = currentSetup.Code == ReturnCode.Success
            ? currentSetup.SetupFileXfer
            : defaultSetup.SetupFileXfer;

        TrySetupFileTransferOperation(
            result,
            "setup.file-transfer.reset",
            (out TWSetupFileXfer setupFileXfer) => source.DGControl.SetupFileXfer.Reset(out setupFileXfer));

        var setupFileXfer = new TWSetupFileXfer
        {
            FileName = negotiatedScan.OutputPath,
            Format = ToTwainFileFormat(negotiatedScan.FileFormat),
            VRefNum = seedSetup.VRefNum,
        };

        var setAttempt = TryExecuteOperation(result, "setup.file-transfer",
            () => source.DGControl.SetupFileXfer.Set(setupFileXfer));
        if (setAttempt.Code == ReturnCode.Success)
        {
            return;
        }

        var driverDefaultFileName = !string.IsNullOrWhiteSpace(currentSetup.SetupFileXfer.FileName)
            ? currentSetup.SetupFileXfer.FileName
            : defaultSetup.SetupFileXfer.FileName;

        if (!string.IsNullOrWhiteSpace(driverDefaultFileName))
        {
            negotiatedScan.UsesDriverDefaultFileName = true;
            negotiatedScan.DriverDefaultFileName = driverDefaultFileName;
            result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message =
                    $"Il driver rifiuta il path personalizzato nel file transfer. Uso il file temporaneo {driverDefaultFileName} e lo rinomino a fine scansione.",
            });
            return;
        }

        throw new InvalidOperationException($"setup.file-transfer fallito: {setAttempt.Code}");
    }

    private static PixelType MapPixelType(ScanColorMode colorMode)
    {
        return colorMode switch
        {
            ScanColorMode.BlackWhite => PixelType.BlackWhite,
            ScanColorMode.Grayscale => PixelType.Gray,
            _ => PixelType.RGB,
        };
    }

    private static XferMech ToTwainTransferMechanism(ScanTransferMode transferMode)
    {
        return transferMode switch
        {
            ScanTransferMode.File => XferMech.File,
            ScanTransferMode.Memory => XferMech.Memory,
            _ => throw new InvalidOperationException($"TransferMode non supportato: {transferMode}"),
        };
    }

    private static FileFormat ToTwainFileFormat(ScanFileFormat fileFormat)
    {
        return fileFormat switch
        {
            ScanFileFormat.Tiff => FileFormat.Tiff,
            ScanFileFormat.Bmp => FileFormat.Bmp,
            _ => throw new InvalidOperationException($"Formato file non supportato: {fileFormat}"),
        };
    }

    private static void RequireSuccess(ScanResult result, string step, Func<ReturnCode> operation)
    {
        var code = ExecuteOperation(result, step, operation);
        if (code != ReturnCode.Success)
        {
            throw new InvalidOperationException($"{step} fallito: {code}");
        }
    }

    private static void TryApplyCapability(ScanResult result, string step, Func<ReturnCode> operation)
    {
        try
        {
            var code = operation();
            AddOperation(result, step, ReturnCodeToStatus(code), code.ToString());
        }
        catch (Exception exception)
        {
            AddOperation(result, step, "error", exception.Message);
        }
    }

    private static ReturnCode ExecuteOperation(ScanResult result, string step, Func<ReturnCode> operation)
    {
        try
        {
            var code = operation();
            AddOperation(result, step, ReturnCodeToStatus(code), code.ToString());
            return code;
        }
        catch (Exception exception)
        {
            AddOperation(result, step, "error", exception.Message);
            throw;
        }
    }

    private static OperationAttempt TryExecuteOperation(ScanResult result, string step, Func<ReturnCode> operation)
    {
        try
        {
            var code = operation();
            AddOperation(result, step, ReturnCodeToStatus(code), code.ToString());
            return new OperationAttempt
            {
                Code = code,
            };
        }
        catch (Exception exception)
        {
            AddOperation(result, step, "error", exception.Message);
            return new OperationAttempt
            {
                Code = ReturnCode.Failure,
                ErrorMessage = exception.Message,
            };
        }
    }

    private static SetupFileTransferSnapshot ReadSetupFileTransfer(
        ScanResult result,
        string step,
        SetupFileTransferOperation operation)
    {
        var setupFileXfer = new TWSetupFileXfer();

        try
        {
            var code = operation(out setupFileXfer);
            AddOperation(result, step, ReturnCodeToStatus(code),
                $"{code} | {DescribeSetupFileTransfer(setupFileXfer)}");
            return new SetupFileTransferSnapshot
            {
                Code = code,
                SetupFileXfer = setupFileXfer,
            };
        }
        catch (Exception exception)
        {
            AddOperation(result, step, "error", exception.Message);
            return new SetupFileTransferSnapshot
            {
                Code = ReturnCode.Failure,
                SetupFileXfer = setupFileXfer,
            };
        }
    }

    private static void TrySetupFileTransferOperation(
        ScanResult result,
        string step,
        SetupFileTransferOperation operation)
    {
        var setupFileXfer = new TWSetupFileXfer();

        try
        {
            var code = operation(out setupFileXfer);
            AddOperation(result, step, ReturnCodeToStatus(code),
                $"{code} | {DescribeSetupFileTransfer(setupFileXfer)}");
        }
        catch (Exception exception)
        {
            AddOperation(result, step, "error", exception.Message);
        }
    }

    private static string DescribeSetupFileTransfer(TWSetupFileXfer setupFileXfer)
    {
        return $"FileName={setupFileXfer.FileName}, Format={setupFileXfer.Format}, VRefNum={setupFileXfer.VRefNum}";
    }

    private static string PrepareAcquisitionDirectory(NegotiatedScanSettings negotiatedScan, ScanResult result)
    {
        var outputDirectory = Path.GetDirectoryName(negotiatedScan.OutputPath);
        if (string.IsNullOrWhiteSpace(outputDirectory))
        {
            throw new InvalidOperationException("Directory di output non valida.");
        }

        Directory.CreateDirectory(outputDirectory);

        if (!negotiatedScan.UsesDriverDefaultFileName)
        {
            return string.Empty;
        }

        var previousCurrentDirectory = Environment.CurrentDirectory;
        Environment.CurrentDirectory = outputDirectory;
        result.Messages.Add(new DiagnosticMessage
        {
            Severity = "info",
            Message =
                $"Working directory impostata a {outputDirectory} per permettere al driver di scrivere {negotiatedScan.DriverDefaultFileName}.",
        });
        return previousCurrentDirectory;
    }

    private static void RestoreCurrentDirectory(string previousCurrentDirectory)
    {
        if (string.IsNullOrWhiteSpace(previousCurrentDirectory))
        {
            return;
        }

        Environment.CurrentDirectory = previousCurrentDirectory;
    }

    private static string GetAcquisitionOutputPath(NegotiatedScanSettings negotiatedScan)
    {
        if (!negotiatedScan.UsesDriverDefaultFileName || string.IsNullOrWhiteSpace(negotiatedScan.DriverDefaultFileName))
        {
            return negotiatedScan.OutputPath;
        }

        if (Path.IsPathRooted(negotiatedScan.DriverDefaultFileName))
        {
            return negotiatedScan.DriverDefaultFileName;
        }

        var outputDirectory = Path.GetDirectoryName(negotiatedScan.OutputPath);
        if (string.IsNullOrWhiteSpace(outputDirectory))
        {
            throw new InvalidOperationException("Directory di output non valida.");
        }

        return Path.Combine(outputDirectory, negotiatedScan.DriverDefaultFileName);
    }

    private static void FinalizeDriverManagedOutput(NegotiatedScanSettings negotiatedScan, ScanResult result)
    {
        var acquisitionPath = GetAcquisitionOutputPath(negotiatedScan);
        if (!File.Exists(acquisitionPath))
        {
            throw new FileNotFoundException("Il driver non ha scritto il file temporaneo atteso.", acquisitionPath);
        }

        if (!string.Equals(acquisitionPath, negotiatedScan.OutputPath, StringComparison.OrdinalIgnoreCase))
        {
            if (File.Exists(negotiatedScan.OutputPath))
            {
                File.Delete(negotiatedScan.OutputPath);
            }

            File.Move(acquisitionPath, negotiatedScan.OutputPath);
        }

        result.ResolvedOutputPath = negotiatedScan.OutputPath;
        result.Messages.Add(new DiagnosticMessage
        {
            Severity = "info",
            Message = $"File temporaneo driver rinominato in {negotiatedScan.OutputPath}.",
        });
    }

    private static void FinalizeMemoryTransfer(
        MemoryTransferImageBuilder memoryTransfer,
        NegotiatedScanSettings negotiatedScan,
        ScanResult result)
    {
        if (!memoryTransfer.HasData)
        {
            throw new InvalidOperationException("Il driver non ha restituito alcun blocco nel memory transfer.");
        }

        AddOperation(result, "memory.write-tiff", "running", "Scrivo il TIFF finale dai blocchi memoria.");
        memoryTransfer.WriteTiff(negotiatedScan.OutputPath);
        AddOperation(result, "memory.write-tiff", "ok", negotiatedScan.OutputPath);
        result.ResolvedOutputPath = negotiatedScan.OutputPath;
        result.OutputFormat = ScanFileFormat.Tiff.ToString();
    }

    private static void AddOperation(ScanResult result, string step, string status, string detail)
    {
        result.Operations.Add(new ScanOperationResult
        {
            Step = step,
            Status = status,
            Detail = detail,
        });
    }

    private static string ReturnCodeToStatus(ReturnCode code)
    {
        return code == ReturnCode.Success ? "ok" : "warning";
    }

    private static void Fail(ScanResult result, string errorMessage)
    {
        result.Success = false;
        result.ErrorMessage = errorMessage;
        result.Messages.Add(new DiagnosticMessage
        {
            Severity = "error",
            Message = errorMessage,
        });
    }

    private static ScanResult FinalizeResult(ScanResult result, Stopwatch stopwatch)
    {
        stopwatch.Stop();
        result.FinishedAtUtc = DateTimeOffset.UtcNow;
        result.ElapsedMilliseconds = stopwatch.ElapsedMilliseconds;
        return result;
    }

    private sealed class NegotiatedScanSettings
    {
        public ScanTransferMode TransferMode { get; set; }

        public ScanFileFormat FileFormat { get; set; }

        public string OutputPath { get; set; } = string.Empty;

        public bool UsesDriverDefaultFileName { get; set; }

        public string DriverDefaultFileName { get; set; } = string.Empty;
    }

    private delegate ReturnCode SetupFileTransferOperation(out TWSetupFileXfer setupFileXfer);

    private sealed class SetupFileTransferSnapshot
    {
        public ReturnCode Code { get; set; }

        public TWSetupFileXfer SetupFileXfer { get; set; } = new TWSetupFileXfer();
    }

    private sealed class OperationAttempt
    {
        public ReturnCode Code { get; set; }

        public string ErrorMessage { get; set; } = string.Empty;
    }
}
