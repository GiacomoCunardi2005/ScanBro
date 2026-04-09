using System;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using ScanBro.Contracts;
using ScanBro.Scanner.Worker.Probe;
using ScanBro.Scanner.Worker.Scan;

namespace ScanBro.Scanner.Worker;

internal static class Program
{
    [STAThread]
    private static int Main(string[] args)
    {
        try
        {
            var command = args.Length > 0 ? args[0] : "probe";
            switch (command.ToLowerInvariant())
            {
                case "probe":
                {
                    var report = new ScannerProbeCollector().Collect();
                    WriteJson(report);
                    return 0;
                }

                case "scan":
                {
                    if (args.Length < 2)
                    {
                        Console.Error.WriteLine("Uso: scan <request-json-path>");
                        return 2;
                    }

                    var result = new TwainScanExecutor().Execute(args[1]);
                    WriteJson(result);
                    return result.Success ? 0 : 1;
                }

                default:
                    Console.Error.WriteLine("Comando non supportato. Usa: probe | scan <request-json-path>");
                    return 2;
            }
        }
        catch (Exception exception)
        {
            Console.Error.WriteLine(exception);
            return 1;
        }
    }

    private static void WriteJson(object payload)
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.Write(JsonConvert.SerializeObject(payload, new JsonSerializerSettings
        {
            DateFormatHandling = DateFormatHandling.IsoDateFormat,
            Formatting = Formatting.None,
            Converters = new JsonConverter[]
            {
                new StringEnumConverter(),
            },
        }));
    }
}
