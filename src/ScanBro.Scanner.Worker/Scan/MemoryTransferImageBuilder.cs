using System;
using System.Collections.Generic;
using NTwain;
using NTwain.Data;
using ScanBro.Contracts;

namespace ScanBro.Scanner.Worker.Scan;

internal sealed class MemoryTransferImageBuilder
{
    private readonly ScanRequest _request;
    private readonly ScanResult _result;
    private readonly List<MemoryChunk> _chunks = new List<MemoryChunk>();
    private TWImageInfo? _pendingImageInfo;
    private PixelType? _pixelType;
    private int? _bitsPerPixel;
    private int _maxChunkWidth;
    private int _maxChunkHeight;
    private int _largestReportedWidth;
    private int _largestReportedHeight;
    private float _xResolution;
    private float _yResolution;
    private long _copiedBytes;
    private bool _loggedGeometry;

    public MemoryTransferImageBuilder(ScanRequest request, ScanResult result)
    {
        _request = request;
        _result = result;
    }

    public bool HasData => _chunks.Count > 0;

    public void RegisterPendingImageInfo(TWImageInfo? imageInfo)
    {
        if (imageInfo is null)
        {
            return;
        }

        _pendingImageInfo = imageInfo;
        UpdateMetadata(imageInfo);
    }

    public void Append(DataTransferredEventArgs args)
    {
        if (args.TransferType != XferMech.Memory)
        {
            throw new InvalidOperationException($"TransferType non gestito dal builder memory: {args.TransferType}");
        }

        var memoryInfo = args.MemoryInfo ??
                         throw new InvalidOperationException("Il driver non ha fornito MemoryInfo nel memory transfer.");
        var memoryData = args.MemoryData ??
                         throw new InvalidOperationException("Il driver non ha fornito MemoryData nel memory transfer.");
        var imageInfo = args.ImageInfo ?? _pendingImageInfo;

        if (memoryInfo.BytesWritten == 0 || memoryInfo.Rows == 0 || memoryInfo.Columns == 0)
        {
            _result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message =
                    $"Memory chunk ignorato: bytes={memoryData.Length}, bytesWritten={memoryInfo.BytesWritten}, rows={memoryInfo.Rows}, cols={memoryInfo.Columns}, x={memoryInfo.XOffset}, y={memoryInfo.YOffset}.",
            });
            return;
        }

        if (imageInfo is not null)
        {
            UpdateMetadata(imageInfo);
        }

        var pixelType = ResolvePixelType(imageInfo);
        var bitsPerPixel = ResolveBitsPerPixel(imageInfo, memoryInfo, pixelType);
        var bytesPerPixel = checked(bitsPerPixel / 8);
        var columns = checked((int)memoryInfo.Columns);
        var rows = checked((int)memoryInfo.Rows);
        var xOffset = checked((int)memoryInfo.XOffset);
        var yOffset = checked((int)memoryInfo.YOffset);
        var bytesPerRow = checked((int)memoryInfo.BytesPerRow);
        var bytesWritten = checked((int)memoryInfo.BytesWritten);
        var usefulBytesPerRow = checked(columns * bytesPerPixel);
        var availableBytes = Math.Min(memoryData.Length, bytesWritten);

        if (memoryInfo.Compression != CompressionType.None)
        {
            throw new InvalidOperationException(
                $"Compressione chunk non supportata nel memory transfer: {memoryInfo.Compression}.");
        }

        if (bytesPerRow < usefulBytesPerRow)
        {
            throw new InvalidOperationException(
                $"BytesPerRow ({bytesPerRow}) minore del minimo atteso ({usefulBytesPerRow}).");
        }

        var chunkData = new byte[checked(rows * usefulBytesPerRow)];
        for (var rowIndex = 0; rowIndex < rows; rowIndex++)
        {
            var sourceOffset = checked(rowIndex * bytesPerRow);
            var destinationOffset = checked(rowIndex * usefulBytesPerRow);

            if (sourceOffset + usefulBytesPerRow > availableBytes)
            {
                throw new InvalidOperationException(
                    "Il chunk memoria ricevuto e` piu` piccolo della geometria dichiarata dal driver.");
            }

            Buffer.BlockCopy(memoryData, sourceOffset, chunkData, destinationOffset, usefulBytesPerRow);
        }

        _chunks.Add(new MemoryChunk
        {
            XOffset = xOffset,
            YOffset = yOffset,
            Columns = columns,
            Rows = rows,
            UsefulBytesPerRow = usefulBytesPerRow,
            Data = chunkData,
        });

        _maxChunkWidth = Math.Max(_maxChunkWidth, xOffset + columns);
        _maxChunkHeight = Math.Max(_maxChunkHeight, yOffset + rows);
        _copiedBytes += bytesWritten;

        if (!_loggedGeometry)
        {
            _loggedGeometry = true;
            _result.DeliveredBitDepth = bitsPerPixel;
            _result.DeliveredPixelType = pixelType.ToString();
            _result.Messages.Add(new DiagnosticMessage
            {
                Severity = "info",
                Message =
                    $"Memory transfer attivo: pixelType={pixelType}, bits={bitsPerPixel}, primo chunk={columns}x{rows}.",
            });
        }
    }

    public void WriteTiff(string outputPath)
    {
        if (!HasData)
        {
            throw new InvalidOperationException("Nessun dato memoria disponibile da scrivere su TIFF.");
        }

        if (!_pixelType.HasValue || !_bitsPerPixel.HasValue)
        {
            throw new InvalidOperationException("Metadata finali incompleti per la scrittura TIFF.");
        }

        var imageWidth = _maxChunkWidth;
        var imageHeight = _maxChunkHeight;
        if (imageWidth <= 0 || imageHeight <= 0)
        {
            throw new InvalidOperationException("Geometria finale memory transfer non valida.");
        }

        if ((_largestReportedWidth > imageWidth || _largestReportedHeight > imageHeight) &&
            (_largestReportedWidth != imageWidth || _largestReportedHeight != imageHeight))
        {
            _result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message =
                    $"Il driver ha riportato ImageInfo variabili durante il memory transfer. Uso la geometria reale dei chunk {imageWidth}x{imageHeight} invece di {_largestReportedWidth}x{_largestReportedHeight}.",
            });
        }

        _result.DeliveredBitDepth = _bitsPerPixel.Value;
        _result.DeliveredPixelType = _pixelType.Value.ToString();
        _result.DeliveredWidth = imageWidth;
        _result.DeliveredHeight = imageHeight;

        if (_bitsPerPixel.Value != _request.BitDepth)
        {
            _result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message =
                    $"Il driver ha restituito {_bitsPerPixel.Value}-bit effettivi invece dei {_request.BitDepth}-bit richiesti.",
            });
        }

        var bytesPerPixel = checked(_bitsPerPixel.Value / 8);
        var rowStride = checked(imageWidth * bytesPerPixel);
        var rasterBuffer = new byte[checked(rowStride * imageHeight)];

        foreach (var chunk in _chunks)
        {
            for (var rowIndex = 0; rowIndex < chunk.Rows; rowIndex++)
            {
                var sourceOffset = checked(rowIndex * chunk.UsefulBytesPerRow);
                var destinationOffset = checked(((chunk.YOffset + rowIndex) * rowStride) + (chunk.XOffset * bytesPerPixel));
                Buffer.BlockCopy(chunk.Data, sourceOffset, rasterBuffer, destinationOffset, chunk.UsefulBytesPerRow);
            }
        }

        RawTiffWriter.Write(
            outputPath,
            imageWidth,
            imageHeight,
            _bitsPerPixel.Value,
            _pixelType.Value,
            _request.ResolutionDpi,
            _request.ResolutionDpi,
            rasterBuffer);

        _result.Messages.Add(new DiagnosticMessage
        {
            Severity = "info",
            Message = $"Memory transfer completato: {_chunks.Count} blocchi, {_copiedBytes} byte ricevuti.",
        });
    }

    private void UpdateMetadata(TWImageInfo imageInfo)
    {
        if (imageInfo.ImageWidth > 0)
        {
            _largestReportedWidth = Math.Max(_largestReportedWidth, imageInfo.ImageWidth);
        }

        if (imageInfo.ImageLength > 0)
        {
            _largestReportedHeight = Math.Max(_largestReportedHeight, imageInfo.ImageLength);
        }

        if (imageInfo.XResolution > 0)
        {
            _xResolution = imageInfo.XResolution;
        }

        if (imageInfo.YResolution > 0)
        {
            _yResolution = imageInfo.YResolution;
        }
    }

    private PixelType ResolvePixelType(TWImageInfo? imageInfo)
    {
        var pixelType = imageInfo?.PixelType switch
        {
            PixelType.RGB => PixelType.RGB,
            PixelType.Gray => PixelType.Gray,
            _ => _request.ColorMode == ScanColorMode.Color ? PixelType.RGB : PixelType.Gray,
        };

        if (pixelType != PixelType.RGB && pixelType != PixelType.Gray)
        {
            throw new InvalidOperationException($"PixelType non supportato nel memory transfer: {pixelType}.");
        }

        if (_pixelType.HasValue && _pixelType.Value != pixelType)
        {
            throw new InvalidOperationException(
                $"Il driver ha cambiato PixelType durante il memory transfer: {_pixelType.Value} -> {pixelType}.");
        }

        _pixelType = pixelType;
        return pixelType;
    }

    private int ResolveBitsPerPixel(TWImageInfo? imageInfo, TWImageMemXfer memoryInfo, PixelType pixelType)
    {
        var reportedBitsPerPixel = imageInfo?.BitsPerPixel > 0 ? imageInfo.BitsPerPixel : 0;
        var derivedBitsPerPixel = 0;

        if (memoryInfo.Columns > 0 && memoryInfo.BytesPerRow % memoryInfo.Columns == 0)
        {
            derivedBitsPerPixel = checked((int)(memoryInfo.BytesPerRow / memoryInfo.Columns) * 8);
        }

        var bitsPerPixel = reportedBitsPerPixel;
        if (derivedBitsPerPixel > 0 && bitsPerPixel == 0)
        {
            bitsPerPixel = derivedBitsPerPixel;
        }
        else if (derivedBitsPerPixel > 0 && bitsPerPixel != derivedBitsPerPixel)
        {
            _result.Messages.Add(new DiagnosticMessage
            {
                Severity = "warning",
                Message =
                    $"Il driver ha riportato BitsPerPixel={reportedBitsPerPixel} ma i chunk memoria corrispondono a {derivedBitsPerPixel}-bit. Uso il valore derivato dal buffer.",
            });
            bitsPerPixel = derivedBitsPerPixel;
        }

        if (bitsPerPixel == 0)
        {
            bitsPerPixel = _request.BitDepth;
        }

        ValidateBitsPerPixel(pixelType, bitsPerPixel);

        if (_bitsPerPixel.HasValue && _bitsPerPixel.Value != bitsPerPixel)
        {
            throw new InvalidOperationException(
                $"Il driver ha cambiato BitsPerPixel durante il memory transfer: {_bitsPerPixel.Value} -> {bitsPerPixel}.");
        }

        _bitsPerPixel = bitsPerPixel;
        return bitsPerPixel;
    }

    private static void ValidateBitsPerPixel(PixelType pixelType, int bitsPerPixel)
    {
        switch (pixelType)
        {
            case PixelType.RGB when bitsPerPixel is 24 or 48:
                return;

            case PixelType.Gray when bitsPerPixel is 8 or 16:
                return;

            default:
                throw new InvalidOperationException(
                    $"Combinazione pixel type / bits non supportata nel memory transfer: {pixelType} {bitsPerPixel}-bit.");
        }
    }

    private sealed class MemoryChunk
    {
        public int XOffset { get; set; }

        public int YOffset { get; set; }

        public int Columns { get; set; }

        public int Rows { get; set; }

        public int UsefulBytesPerRow { get; set; }

        public byte[] Data { get; set; } = Array.Empty<byte>();
    }
}
