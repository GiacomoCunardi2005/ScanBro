using System;
using System.Collections.Generic;

namespace ScanBro.Contracts;

public sealed class ProbeReport
{
    public DateTimeOffset GeneratedAtUtc { get; set; } = DateTimeOffset.UtcNow;

    public ProcessSnapshot Process { get; set; } = new ProcessSnapshot();

    public CanonDriverSnapshot CanonDriver { get; set; } = new CanonDriverSnapshot();

    public List<DeviceSnapshot> PnpDevices { get; set; } = new List<DeviceSnapshot>();

    public List<WiaDeviceSnapshot> WiaDevices { get; set; } = new List<WiaDeviceSnapshot>();

    public TwainSnapshot Twain { get; set; } = new TwainSnapshot();

    public List<DiagnosticMessage> Messages { get; set; } = new List<DiagnosticMessage>();
}

public sealed class ProcessSnapshot
{
    public string MachineName { get; set; } = string.Empty;

    public string UserName { get; set; } = string.Empty;

    public string FrameworkDescription { get; set; } = string.Empty;

    public string OsDescription { get; set; } = string.Empty;

    public string OsArchitecture { get; set; } = string.Empty;

    public string ProcessArchitecture { get; set; } = string.Empty;

    public bool Is64BitProcess { get; set; }

    public bool Is64BitOperatingSystem { get; set; }

    public string CurrentDirectory { get; set; } = string.Empty;
}

public sealed class DeviceSnapshot
{
    public string Name { get; set; } = string.Empty;

    public string DeviceId { get; set; } = string.Empty;

    public string Status { get; set; } = string.Empty;

    public string Manufacturer { get; set; } = string.Empty;

    public string Service { get; set; } = string.Empty;

    public string DriverProvider { get; set; } = string.Empty;

    public string DriverVersion { get; set; } = string.Empty;

    public string DriverDate { get; set; } = string.Empty;

    public string InfPath { get; set; } = string.Empty;
}

public sealed class PropertySnapshot
{
    public string Name { get; set; } = string.Empty;

    public string Value { get; set; } = string.Empty;
}

public sealed class RegistryKeySnapshot
{
    public string Path { get; set; } = string.Empty;

    public List<PropertySnapshot> Values { get; set; } = new List<PropertySnapshot>();
}

public sealed class TwainFileSnapshot
{
    public string Name { get; set; } = string.Empty;

    public string Extension { get; set; } = string.Empty;

    public long Length { get; set; }

    public string Architecture { get; set; } = string.Empty;
}

public sealed class CanonDriverSnapshot
{
    public string DeviceName { get; set; } = string.Empty;

    public string DeviceId { get; set; } = string.Empty;

    public string DriverProvider { get; set; } = string.Empty;

    public string DriverVersion { get; set; } = string.Empty;

    public string DriverDate { get; set; } = string.Empty;

    public string InfPath { get; set; } = string.Empty;

    public string Service { get; set; } = string.Empty;

    public string TwainInstallDirectory { get; set; } = string.Empty;

    public string DsmPath { get; set; } = string.Empty;

    public string DsmArchitecture { get; set; } = string.Empty;

    public List<RegistryKeySnapshot> RegistryKeys { get; set; } = new List<RegistryKeySnapshot>();

    public List<TwainFileSnapshot> TwainFiles { get; set; } = new List<TwainFileSnapshot>();
}

public sealed class WiaDeviceSnapshot
{
    public string Name { get; set; } = string.Empty;

    public string DeviceId { get; set; } = string.Empty;

    public string Type { get; set; } = string.Empty;

    public List<PropertySnapshot> Properties { get; set; } = new List<PropertySnapshot>();
}

public sealed class TwainSourceSnapshot
{
    public string Name { get; set; } = string.Empty;

    public string Manufacturer { get; set; } = string.Empty;

    public string ProductFamily { get; set; } = string.Empty;

    public string Version { get; set; } = string.Empty;

    public string ProtocolVersion { get; set; } = string.Empty;

    public string DataGroup { get; set; } = string.Empty;

    public bool Opened { get; set; }
}

public sealed class TwainCapabilitySnapshot
{
    public string Id { get; set; } = string.Empty;

    public string Support { get; set; } = string.Empty;

    public string Current { get; set; } = string.Empty;

    public string Default { get; set; } = string.Empty;

    public string Values { get; set; } = string.Empty;
}

public sealed class TwainSnapshot
{
    public bool PreferLegacyDsm { get; set; }

    public string CanonSourceName { get; set; } = string.Empty;

    public bool CanonSourceOpenSucceeded { get; set; }

    public string ProbeError { get; set; } = string.Empty;

    public List<TwainSourceSnapshot> Sources { get; set; } = new List<TwainSourceSnapshot>();

    public List<TwainCapabilitySnapshot> CanonCapabilities { get; set; } = new List<TwainCapabilitySnapshot>();

    public TwainNegotiationSnapshot CanonNegotiation { get; set; } = new TwainNegotiationSnapshot();
}

public sealed class TwainNegotiationSnapshot
{
    public int DefaultResolutionDpi { get; set; }

    public int NativeResolutionDpi { get; set; }

    public int MaxResolutionDpi { get; set; }

    public string DefaultFrame { get; set; } = string.Empty;

    public string CurrentLightPath { get; set; } = string.Empty;

    public List<int> RecommendedDpiValues { get; set; } = new List<int>();

    public List<string> TransferModes { get; set; } = new List<string>();

    public List<string> FileFormats { get; set; } = new List<string>();

    public List<string> PixelTypes { get; set; } = new List<string>();

    public List<int> BitDepths { get; set; } = new List<int>();

    public List<string> SupportedSizes { get; set; } = new List<string>();

    public List<string> LightPaths { get; set; } = new List<string>();
}

public sealed class DiagnosticMessage
{
    public string Severity { get; set; } = string.Empty;

    public string Message { get; set; } = string.Empty;
}
