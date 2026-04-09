using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Management;
using System.Reflection;
using System.Runtime.InteropServices;
using Microsoft.Win32;
using NTwain;
using NTwain.Data;
using ScanBro.Contracts;

namespace ScanBro.Scanner.Worker.Probe;

internal sealed class ScannerProbeCollector
{
    private const string CanonScanGearRegistryPath = @"SOFTWARE\Canon\ScanGear\Devices\CNQ4808";
    private const string CanonStiRegistryPath = @"SOFTWARE\Canon\ScanGear\STI";
    private const string CanonWiaRegistryPath = @"SOFTWARE\Canon\WIA\Devices\CNQ4808";
    private const string CanonWiaStiRegistryPath = @"SOFTWARE\Canon\WIA\STI";

    public ProbeReport Collect()
    {
        var report = new ProbeReport
        {
            Process = BuildProcessSnapshot(),
        };

        report.PnpDevices.AddRange(GetScannerDevices(report.Messages));
        report.WiaDevices.AddRange(GetWiaDevices(report.Messages));
        report.CanonDriver = GetCanonDriverSnapshot(report.PnpDevices, report.Messages);
        report.Twain = GetTwainSnapshot(report.Messages);

        return report;
    }

    private static ProcessSnapshot BuildProcessSnapshot()
    {
        return new ProcessSnapshot
        {
            MachineName = Environment.MachineName,
            UserName = Environment.UserName,
            FrameworkDescription = RuntimeInformation.FrameworkDescription,
            OsDescription = RuntimeInformation.OSDescription,
            OsArchitecture = RuntimeInformation.OSArchitecture.ToString(),
            ProcessArchitecture = RuntimeInformation.ProcessArchitecture.ToString(),
            Is64BitProcess = Environment.Is64BitProcess,
            Is64BitOperatingSystem = Environment.Is64BitOperatingSystem,
            CurrentDirectory = Environment.CurrentDirectory,
        };
    }

    private static IReadOnlyList<DeviceSnapshot> GetScannerDevices(List<DiagnosticMessage> messages)
    {
        var devices = new List<DeviceSnapshot>();

        try
        {
            const string pnpQuery =
                "SELECT Name, PNPDeviceID, Status, Manufacturer, Service " +
                "FROM Win32_PnPEntity " +
                "WHERE ClassGuid = '{6BDD1FC6-810F-11D0-BEC7-08002BE2092F}' " +
                "OR Name LIKE '%CanoScan%' OR Name LIKE '%Canon%'";

            using var searcher = new ManagementObjectSearcher(pnpQuery);
            foreach (ManagementObject pnpDevice in searcher.Get().OfType<ManagementObject>())
            {
                var deviceId = ReadManagementString(pnpDevice, "PNPDeviceID");
                var snapshot = new DeviceSnapshot
                {
                    Name = ReadManagementString(pnpDevice, "Name"),
                    DeviceId = deviceId,
                    Status = ReadManagementString(pnpDevice, "Status"),
                    Manufacturer = ReadManagementString(pnpDevice, "Manufacturer"),
                    Service = ReadManagementString(pnpDevice, "Service"),
                };

                MergeDriverDetails(snapshot, deviceId);
                devices.Add(snapshot);
            }
        }
        catch (Exception exception)
        {
            messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message = $"PnP probe fallito: {exception.Message}",
            });
        }

        return devices
            .OrderBy(device => device.Name, StringComparer.OrdinalIgnoreCase)
            .ToList();
    }

    private static void MergeDriverDetails(DeviceSnapshot snapshot, string deviceId)
    {
        if (string.IsNullOrWhiteSpace(deviceId))
        {
            return;
        }

        var escapedDeviceId = deviceId.Replace("\\", "\\\\");
        var query =
            "SELECT DeviceID, DriverProviderName, DriverVersion, DriverDate, InfName " +
            $"FROM Win32_PnPSignedDriver WHERE DeviceID = '{escapedDeviceId}'";

        using var searcher = new ManagementObjectSearcher(query);
        var driver = searcher.Get().OfType<ManagementObject>().FirstOrDefault();
        if (driver is null)
        {
            return;
        }

        snapshot.DriverProvider = ReadManagementString(driver, "DriverProviderName");
        snapshot.DriverVersion = ReadManagementString(driver, "DriverVersion");
        snapshot.DriverDate = FormatManagementDate(ReadManagementString(driver, "DriverDate"));
        snapshot.InfPath = ReadManagementString(driver, "InfName");
    }

    private static IReadOnlyList<WiaDeviceSnapshot> GetWiaDevices(List<DiagnosticMessage> messages)
    {
        var devices = new List<WiaDeviceSnapshot>();
        object? manager = null;

        try
        {
            var deviceManagerType = Type.GetTypeFromProgID("WIA.DeviceManager");
            if (deviceManagerType is null)
            {
                messages.Add(new DiagnosticMessage
                {
                    Severity = "warning",
                    Message = "COM WIA.DeviceManager non disponibile.",
                });
                return devices;
            }

            manager = Activator.CreateInstance(deviceManagerType);
            if (manager is null)
            {
                return devices;
            }

            dynamic dynamicManager = manager;
            foreach (var deviceInfo in dynamicManager.DeviceInfos)
            {
                var snapshot = new WiaDeviceSnapshot();
                var properties = new List<PropertySnapshot>();

                foreach (var property in deviceInfo.Properties)
                {
                    properties.Add(new PropertySnapshot
                    {
                        Name = SafeToString(property.Name),
                        Value = FormatValue(property.Value),
                    });
                }

                snapshot.Name = GetPropertyValue(properties, "Name");
                snapshot.DeviceId = GetPropertyValue(properties, "Unique Device ID");
                snapshot.Type = GetPropertyValue(properties, "Type");
                snapshot.Properties = properties
                    .OrderBy(property => property.Name, StringComparer.OrdinalIgnoreCase)
                    .ToList();

                devices.Add(snapshot);
            }
        }
        catch (Exception exception)
        {
            messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message = $"WIA probe fallito: {exception.Message}",
            });
        }
        finally
        {
            if (manager is not null && Marshal.IsComObject(manager))
            {
                Marshal.FinalReleaseComObject(manager);
            }
        }

        return devices
            .OrderBy(device => device.Name, StringComparer.OrdinalIgnoreCase)
            .ToList();
    }

    private static CanonDriverSnapshot GetCanonDriverSnapshot(
        IReadOnlyCollection<DeviceSnapshot> devices,
        List<DiagnosticMessage> messages)
    {
        var snapshot = new CanonDriverSnapshot
        {
            DeviceName = "CanoScan 5600F",
            DsmPath = @"C:\Windows\twain_32.dll",
        };

        try
        {
            using var hklm32 = RegistryKey.OpenBaseKey(RegistryHive.LocalMachine, RegistryView.Registry32);
            foreach (var path in new[]
                     {
                         CanonScanGearRegistryPath,
                         CanonStiRegistryPath,
                         CanonWiaRegistryPath,
                         CanonWiaStiRegistryPath,
                     })
            {
                var keySnapshot = ReadRegistryKey(hklm32, path);
                if (keySnapshot is not null)
                {
                    snapshot.RegistryKeys.Add(keySnapshot);
                }
            }

            var scanGearKey = snapshot.RegistryKeys.FirstOrDefault(registryKey =>
                string.Equals(registryKey.Path, CanonScanGearRegistryPath, StringComparison.OrdinalIgnoreCase));

            if (scanGearKey is not null)
            {
                snapshot.TwainInstallDirectory = GetPropertyValue(scanGearKey.Values, "InstallDirectory");
                snapshot.DriverVersion = GetPropertyValue(scanGearKey.Values, "DriverVersion");
                snapshot.DriverDate = GetPropertyValue(scanGearKey.Values, "DriverDate");
            }

            snapshot.DsmArchitecture = File.Exists(snapshot.DsmPath)
                ? ReadPortableExecutableArchitecture(snapshot.DsmPath)
                : "missing";

            if (!string.IsNullOrWhiteSpace(snapshot.TwainInstallDirectory) &&
                Directory.Exists(snapshot.TwainInstallDirectory))
            {
                snapshot.TwainFiles = Directory
                    .EnumerateFiles(snapshot.TwainInstallDirectory)
                    .Select(path => new FileInfo(path))
                    .OrderBy(file => file.Name, StringComparer.OrdinalIgnoreCase)
                    .Select(file => new TwainFileSnapshot
                    {
                        Name = file.Name,
                        Extension = file.Extension,
                        Length = file.Length,
                        Architecture = string.Equals(file.Extension, ".dll", StringComparison.OrdinalIgnoreCase) ||
                                       string.Equals(file.Extension, ".ds", StringComparison.OrdinalIgnoreCase)
                            ? ReadPortableExecutableArchitecture(file.FullName)
                            : string.Empty,
                    })
                    .ToList();
            }

            var canonDevice = devices.FirstOrDefault(device =>
                device.Name.IndexOf("5600F", StringComparison.OrdinalIgnoreCase) >= 0);

            if (canonDevice is not null)
            {
                snapshot.DeviceId = canonDevice.DeviceId;
                snapshot.DriverProvider = canonDevice.DriverProvider;
                snapshot.DriverVersion = string.IsNullOrWhiteSpace(snapshot.DriverVersion)
                    ? canonDevice.DriverVersion
                    : snapshot.DriverVersion;
                snapshot.DriverDate = string.IsNullOrWhiteSpace(snapshot.DriverDate)
                    ? canonDevice.DriverDate
                    : snapshot.DriverDate;
                snapshot.InfPath = canonDevice.InfPath;
                snapshot.Service = canonDevice.Service;
            }
        }
        catch (Exception exception)
        {
            messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message = $"Canon driver snapshot fallito: {exception.Message}",
            });
        }

        return snapshot;
    }

    private static TwainSnapshot GetTwainSnapshot(List<DiagnosticMessage> messages)
    {
        var snapshot = new TwainSnapshot
        {
            PreferLegacyDsm = true,
        };

        try
        {
            PlatformInfo.Current.PreferNewDSM = false;

            var identity = TWIdentity.CreateFromAssembly(DataGroups.Image, Assembly.GetExecutingAssembly());
            var session = new TwainSession(identity);

            try
            {
                session.Open();

                var sources = session.GetSources().ToList();
                foreach (var source in sources)
                {
                    snapshot.Sources.Add(new TwainSourceSnapshot
                    {
                        Name = source.Name,
                        Manufacturer = source.Manufacturer,
                        ProductFamily = source.ProductFamily,
                        Version = SafeToString(source.Version),
                        ProtocolVersion = SafeToString(source.ProtocolVersion),
                        DataGroup = SafeToString(source.DataGroup),
                        Opened = source.IsOpen,
                    });
                }

                var canonSource = sources.FirstOrDefault(source =>
                    source.Name.IndexOf("5600F", StringComparison.OrdinalIgnoreCase) >= 0);

                if (canonSource is null)
                {
                    messages.Add(new DiagnosticMessage
                    {
                        Severity = "warning",
                        Message = "Sorgente TWAIN Canon 5600F non trovata nella sessione.",
                    });
                    return snapshot;
                }

                snapshot.CanonSourceName = canonSource.Name;
                canonSource.Open();
                snapshot.CanonSourceOpenSucceeded = canonSource.IsOpen;

                if (!canonSource.IsOpen)
                {
                    messages.Add(new DiagnosticMessage
                    {
                        Severity = "warning",
                        Message = "La sorgente TWAIN Canon e` stata trovata ma non si e` aperta per la negoziazione capability.",
                    });
                    return snapshot;
                }

                snapshot.CanonCapabilities = ReadCapabilities(canonSource);
                snapshot.CanonNegotiation = BuildNegotiationSnapshot(snapshot.CanonCapabilities);
                canonSource.Close();
            }
            finally
            {
                if (session.IsSourceOpen && session.CurrentSource is not null)
                {
                    session.CurrentSource.Close();
                }

                if (session.IsDsmOpen)
                {
                    session.Close();
                }
            }
        }
        catch (Exception exception)
        {
            snapshot.ProbeError = exception.ToString();
            messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message = $"TWAIN probe fallito: {exception.Message}",
            });
        }

        return snapshot;
    }

    private static List<TwainCapabilitySnapshot> ReadCapabilities(DataSource source)
    {
        var capabilities = new List<TwainCapabilitySnapshot>();

        foreach (CapabilityId capabilityId in Enum.GetValues(typeof(CapabilityId)))
        {
            string support;

            try
            {
                support = SafeToString(source.Capabilities.QuerySupport(capabilityId));
            }
            catch
            {
                continue;
            }

            if (string.IsNullOrWhiteSpace(support) ||
                string.Equals(support, "None", StringComparison.OrdinalIgnoreCase))
            {
                continue;
            }

            capabilities.Add(new TwainCapabilitySnapshot
            {
                Id = capabilityId.ToString(),
                Support = support,
                Current = TryReadCapabilityValue(() => source.Capabilities.GetCurrent(capabilityId)),
                Default = TryReadCapabilityValue(() => source.Capabilities.GetDefault(capabilityId)),
                Values = TryReadCapabilityValue(() => source.Capabilities.GetValues(capabilityId)),
            });
        }

        return capabilities
            .OrderBy(capability => capability.Id, StringComparer.OrdinalIgnoreCase)
            .ToList();
    }

    private static TwainNegotiationSnapshot BuildNegotiationSnapshot(
        IReadOnlyCollection<TwainCapabilitySnapshot> capabilities)
    {
        var snapshot = new TwainNegotiationSnapshot
        {
            DefaultResolutionDpi = ParseFirstInt(GetCapabilityField(capabilities, "ICapXResolution", capability => capability.Default)),
            NativeResolutionDpi = ParseFirstInt(GetCapabilityField(capabilities, "ICapXNativeResolution", capability => capability.Current)),
            DefaultFrame = GetCapabilityField(capabilities, "ICapFrames", capability => capability.Current),
            CurrentLightPath = ParseNames(
                    GetCapabilityField(capabilities, "ICapLightPath", capability => capability.Current),
                    TryMapLightPath)
                .FirstOrDefault() ?? string.Empty,
        };

        snapshot.MaxResolutionDpi = ParseMaxInt(GetCapabilityField(capabilities, "ICapXResolution", capability => capability.Values));
        snapshot.RecommendedDpiValues = BuildRecommendedDpiValues(
            snapshot.DefaultResolutionDpi,
            snapshot.NativeResolutionDpi,
            snapshot.MaxResolutionDpi);
        snapshot.TransferModes = ParseNames(
            GetCapabilityField(capabilities, "ICapXferMech", capability => capability.Values),
            TryMapTransferMode);
        snapshot.FileFormats = ParseNames(
            GetCapabilityField(capabilities, "ICapImageFileFormat", capability => capability.Values),
            TryMapFileFormat);
        snapshot.PixelTypes = ParseNames(
            GetCapabilityField(capabilities, "ICapPixelType", capability => capability.Values),
            TryMapPixelType);
        snapshot.BitDepths = ParseInts(GetCapabilityField(capabilities, "ICapBitDepth", capability => capability.Values));
        snapshot.SupportedSizes = ParseNames(
            GetCapabilityField(capabilities, "ICapSupportedSizes", capability => capability.Values),
            TryMapSupportedSize);
        snapshot.LightPaths = ParseNames(
            GetCapabilityField(capabilities, "ICapLightPath", capability => capability.Values),
            TryMapLightPath);

        return snapshot;
    }

    private static string TryReadCapabilityValue(Func<object> getter)
    {
        try
        {
            return FormatValue(getter());
        }
        catch (Exception exception)
        {
            return $"! {exception.GetType().Name}: {exception.Message}";
        }
    }

    private static RegistryKeySnapshot? ReadRegistryKey(RegistryKey baseKey, string path)
    {
        using var key = baseKey.OpenSubKey(path);
        if (key is null)
        {
            return null;
        }

        var snapshot = new RegistryKeySnapshot
        {
            Path = path,
        };

        foreach (var valueName in key.GetValueNames().OrderBy(name => name, StringComparer.OrdinalIgnoreCase))
        {
            snapshot.Values.Add(new PropertySnapshot
            {
                Name = valueName,
                Value = FormatValue(key.GetValue(valueName)),
            });
        }

        return snapshot;
    }

    private static string GetPropertyValue(IEnumerable<PropertySnapshot> properties, string name)
    {
        return properties
            .FirstOrDefault(property => string.Equals(property.Name, name, StringComparison.OrdinalIgnoreCase))
            ?.Value ?? string.Empty;
    }

    private static string ReadManagementString(ManagementBaseObject managementObject, string propertyName)
    {
        return FormatValue(managementObject[propertyName]);
    }

    private static string FormatManagementDate(string rawValue)
    {
        if (string.IsNullOrWhiteSpace(rawValue))
        {
            return string.Empty;
        }

        try
        {
            var parsed = ManagementDateTimeConverter.ToDateTime(rawValue);
            return parsed.ToString("yyyy-MM-dd HH:mm:ss", CultureInfo.InvariantCulture);
        }
        catch
        {
            return rawValue;
        }
    }

    private static string FormatValue(object? value)
    {
        if (value is null)
        {
            return string.Empty;
        }

        if (value is string stringValue)
        {
            return stringValue;
        }

        if (value is DateTime dateTimeValue)
        {
            return dateTimeValue.ToString("yyyy-MM-dd HH:mm:ss", CultureInfo.InvariantCulture);
        }

        if (value is IEnumerable enumerable && value is not byte[])
        {
            var parts = new List<string>();
            foreach (var item in enumerable)
            {
                parts.Add(FormatValue(item));
            }

            return string.Join(", ", parts.Where(part => !string.IsNullOrWhiteSpace(part)));
        }

        var type = value.GetType();

        var valueProperty = type.GetProperty("Value", BindingFlags.Public | BindingFlags.Instance);
        if (valueProperty is not null)
        {
            return FormatValue(valueProperty.GetValue(value, null));
        }

        var itemsProperty = type.GetProperty("Items", BindingFlags.Public | BindingFlags.Instance);
        if (itemsProperty?.GetValue(value, null) is IEnumerable items)
        {
            return FormatValue(items);
        }

        return Convert.ToString(value, CultureInfo.InvariantCulture) ?? string.Empty;
    }

    private static string SafeToString(object? value)
    {
        return value is null ? string.Empty : value.ToString() ?? string.Empty;
    }

    private static string GetCapabilityField(
        IEnumerable<TwainCapabilitySnapshot> capabilities,
        string capabilityId,
        Func<TwainCapabilitySnapshot, string> selector)
    {
        return capabilities
            .FirstOrDefault(capability => string.Equals(capability.Id, capabilityId, StringComparison.OrdinalIgnoreCase))
            is { } capability
            ? selector(capability)
            : string.Empty;
    }

    private static List<int> BuildRecommendedDpiValues(int defaultResolutionDpi, int nativeResolutionDpi, int maxResolutionDpi)
    {
        var seed = defaultResolutionDpi > 0 ? defaultResolutionDpi : 75;
        var upperBound = Math.Max(seed, Math.Max(nativeResolutionDpi, maxResolutionDpi));
        var values = new SortedSet<int>();
        var current = seed;

        values.Add(seed);
        while (current > 75 && current % 2 == 0)
        {
            current /= 2;
            values.Add(current);
        }

        current = seed;
        while (current < upperBound && current <= 9600)
        {
            current *= 2;
            values.Add(current);
        }

        return values
            .Where(value => value >= 75 && value <= Math.Max(upperBound, 75))
            .OrderBy(value => value)
            .ToList();
    }

    private static List<int> ParseInts(string rawValues)
    {
        return rawValues
            .Split(new[] { ',' }, StringSplitOptions.RemoveEmptyEntries)
            .Select(segment => segment.Trim())
            .Select(segment => int.TryParse(segment, NumberStyles.Integer, CultureInfo.InvariantCulture, out var parsed) ? parsed : int.MinValue)
            .Where(parsed => parsed != int.MinValue)
            .Distinct()
            .OrderBy(value => value)
            .ToList();
    }

    private static List<string> ParseNames(string rawValues, Func<int, string?> mapper)
    {
        return ParseInts(rawValues)
            .Select(mapper)
            .Where(value => !string.IsNullOrWhiteSpace(value))
            .Distinct(StringComparer.OrdinalIgnoreCase)
            .ToList()!;
    }

    private static int ParseFirstInt(string rawValue)
    {
        return int.TryParse(rawValue, NumberStyles.Integer, CultureInfo.InvariantCulture, out var parsed)
            ? parsed
            : 0;
    }

    private static int ParseMaxInt(string rawValues)
    {
        return ParseInts(rawValues).DefaultIfEmpty().Max();
    }

    private static string? TryMapTransferMode(int rawValue)
    {
        return TryMapEnum<XferMech>(rawValue);
    }

    private static string? TryMapFileFormat(int rawValue)
    {
        return TryMapEnum<FileFormat>(rawValue);
    }

    private static string? TryMapPixelType(int rawValue)
    {
        return TryMapEnum<PixelType>(rawValue);
    }

    private static string? TryMapSupportedSize(int rawValue)
    {
        return TryMapEnum<SupportedSize>(rawValue);
    }

    private static string? TryMapLightPath(int rawValue)
    {
        return TryMapEnum<LightPath>(rawValue);
    }

    private static string? TryMapEnum<TEnum>(int rawValue)
        where TEnum : struct, Enum
    {
        var enumType = typeof(TEnum);
        var underlyingType = Enum.GetUnderlyingType(enumType);
        var convertedValue = Convert.ChangeType(rawValue, underlyingType, CultureInfo.InvariantCulture);

        return Enum.IsDefined(enumType, convertedValue)
            ? Enum.ToObject(enumType, convertedValue).ToString()
            : null;
    }

    private static string ReadPortableExecutableArchitecture(string path)
    {
        using var fileStream = File.OpenRead(path);
        using var binaryReader = new BinaryReader(fileStream);

        fileStream.Seek(0x3C, SeekOrigin.Begin);
        var peOffset = binaryReader.ReadInt32();
        fileStream.Seek(peOffset + 4, SeekOrigin.Begin);
        var machine = binaryReader.ReadUInt16();

        return machine switch
        {
            0x014c => "x86",
            0x8664 => "x64",
            0x0200 => "IA64",
            _ => $"0x{machine:X4}",
        };
    }
}
