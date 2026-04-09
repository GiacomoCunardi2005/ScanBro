using System;
using System.Collections.Generic;

namespace ScanBro.Contracts;

public enum ScanColorMode
{
    Color = 0,
    Grayscale = 1,
    BlackWhite = 2,
}

public enum ScanTransferMode
{
    Auto = 0,
    File = 1,
    Memory = 2,
}

public enum ScanFileFormat
{
    Auto = 0,
    Tiff = 1,
    Bmp = 2,
}

public sealed class ScanRequest
{
    public string SourceName { get; set; } = "CanoScan 5600F";

    public string OutputPath { get; set; } = string.Empty;

    public int ResolutionDpi { get; set; } = 2400;

    public int BitDepth { get; set; } = 48;

    public ScanColorMode ColorMode { get; set; } = ScanColorMode.Color;

    public ScanTransferMode TransferMode { get; set; } = ScanTransferMode.Auto;

    public ScanFileFormat OutputFileFormat { get; set; } = ScanFileFormat.Auto;

    public bool DryRun { get; set; }

    public bool HideIndicators { get; set; } = true;

    public bool PreferLegacyDsm { get; set; } = true;

    public int TimeoutSeconds { get; set; } = 180;
}

public sealed class ScanResult
{
    public bool Success { get; set; }

    public bool DryRun { get; set; }

    public string SourceName { get; set; } = string.Empty;

    public string RequestedOutputPath { get; set; } = string.Empty;

    public string ResolvedOutputPath { get; set; } = string.Empty;

    public string TransferType { get; set; } = string.Empty;

    public string OutputFormat { get; set; } = string.Empty;

    public int ResolutionDpi { get; set; }

    public int BitDepth { get; set; }

    public ScanColorMode ColorMode { get; set; }

    public int DeliveredBitDepth { get; set; }

    public string DeliveredPixelType { get; set; } = string.Empty;

    public int DeliveredWidth { get; set; }

    public int DeliveredHeight { get; set; }

    public ScanTransferMode RequestedTransferMode { get; set; }

    public ScanTransferMode NegotiatedTransferMode { get; set; }

    public ScanFileFormat RequestedOutputFileFormat { get; set; }

    public ScanFileFormat NegotiatedOutputFileFormat { get; set; }

    public bool SessionOpened { get; set; }

    public bool SourceOpened { get; set; }

    public bool SourceEnabled { get; set; }

    public bool TransferCompleted { get; set; }

    public long ElapsedMilliseconds { get; set; }

    public DateTimeOffset StartedAtUtc { get; set; } = DateTimeOffset.UtcNow;

    public DateTimeOffset FinishedAtUtc { get; set; } = DateTimeOffset.UtcNow;

    public string ErrorMessage { get; set; } = string.Empty;

    public string NegotiationSummary { get; set; } = string.Empty;

    public List<ScanOperationResult> Operations { get; set; } = new List<ScanOperationResult>();

    public List<DiagnosticMessage> Messages { get; set; } = new List<DiagnosticMessage>();
}

public sealed class ScanOperationResult
{
    public string Step { get; set; } = string.Empty;

    public string Status { get; set; } = string.Empty;

    public string Detail { get; set; } = string.Empty;
}
