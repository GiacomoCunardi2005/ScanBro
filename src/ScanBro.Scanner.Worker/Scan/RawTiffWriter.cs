using System;
using System.Collections.Generic;
using System.IO;
using NTwain.Data;

namespace ScanBro.Scanner.Worker.Scan;

internal static class RawTiffWriter
{
    private const ushort TiffTypeShort = 3;
    private const ushort TiffTypeLong = 4;
    private const ushort TiffTypeRational = 5;

    public static void Write(
        string outputPath,
        int imageWidth,
        int imageLength,
        int bitsPerPixel,
        PixelType pixelType,
        float xResolution,
        float yResolution,
        byte[] rasterData)
    {
        if (string.IsNullOrWhiteSpace(outputPath))
        {
            throw new InvalidOperationException("OutputPath TIFF mancante.");
        }

        var layout = BuildLayout(imageWidth, imageLength, bitsPerPixel, pixelType, xResolution, yResolution, rasterData);
        var directory = Path.GetDirectoryName(Path.GetFullPath(outputPath));
        if (string.IsNullOrWhiteSpace(directory))
        {
            throw new InvalidOperationException("Directory di output TIFF non valida.");
        }

        Directory.CreateDirectory(directory);

        const int entryCount = 15;
        var nextDataOffset = checked((uint)(8 + 2 + (entryCount * 12) + 4));
        var extraBlocks = new List<byte[]>();

        var bitsPerSampleOffset = layout.BitsPerSample.Length > 1
            ? AddBlock(extraBlocks, ref nextDataOffset, SerializeShortArray(layout.BitsPerSample))
            : 0u;
        var sampleFormatOffset = layout.SampleFormat.Length > 1
            ? AddBlock(extraBlocks, ref nextDataOffset, SerializeShortArray(layout.SampleFormat))
            : 0u;
        var xResolutionOffset = AddBlock(extraBlocks, ref nextDataOffset, SerializeRational(layout.XResolution));
        var yResolutionOffset = AddBlock(extraBlocks, ref nextDataOffset, SerializeRational(layout.YResolution));
        var stripOffset = nextDataOffset;

        using var stream = File.Create(outputPath);
        using var writer = new BinaryWriter(stream);

        writer.Write((byte)'I');
        writer.Write((byte)'I');
        writer.Write((ushort)42);
        writer.Write((uint)8);

        writer.Write((ushort)entryCount);
        WriteEntry(writer, 256, TiffTypeLong, 1, (uint)layout.ImageWidth);
        WriteEntry(writer, 257, TiffTypeLong, 1, (uint)layout.ImageLength);
        WriteEntry(writer, 258, TiffTypeShort, (uint)layout.BitsPerSample.Length,
            layout.BitsPerSample.Length == 1 ? layout.BitsPerSample[0] : bitsPerSampleOffset);
        WriteEntry(writer, 259, TiffTypeShort, 1, 1);
        WriteEntry(writer, 262, TiffTypeShort, 1, layout.PhotometricInterpretation);
        WriteEntry(writer, 273, TiffTypeLong, 1, stripOffset);
        WriteEntry(writer, 274, TiffTypeShort, 1, 1);
        WriteEntry(writer, 277, TiffTypeShort, 1, layout.SamplesPerPixel);
        WriteEntry(writer, 278, TiffTypeLong, 1, (uint)layout.ImageLength);
        WriteEntry(writer, 279, TiffTypeLong, 1, (uint)layout.RasterData.Length);
        WriteEntry(writer, 282, TiffTypeRational, 1, xResolutionOffset);
        WriteEntry(writer, 283, TiffTypeRational, 1, yResolutionOffset);
        WriteEntry(writer, 284, TiffTypeShort, 1, 1);
        WriteEntry(writer, 296, TiffTypeShort, 1, 2);
        WriteEntry(writer, 339, TiffTypeShort, (uint)layout.SampleFormat.Length,
            layout.SampleFormat.Length == 1 ? layout.SampleFormat[0] : sampleFormatOffset);
        writer.Write((uint)0);

        foreach (var block in extraBlocks)
        {
            writer.Write(block);
            if ((block.Length & 1) != 0)
            {
                writer.Write((byte)0);
            }
        }

        writer.Write(layout.RasterData);
    }

    private static TiffLayout BuildLayout(
        int imageWidth,
        int imageLength,
        int bitsPerPixel,
        PixelType pixelType,
        float xResolution,
        float yResolution,
        byte[] rasterData)
    {
        if (imageWidth <= 0 || imageLength <= 0)
        {
            throw new InvalidOperationException("Geometria TIFF non valida.");
        }

        var samplesPerPixel = pixelType switch
        {
            PixelType.RGB => 3,
            PixelType.Gray => 1,
            _ => throw new InvalidOperationException($"PixelType TIFF non supportato: {pixelType}."),
        };

        if (bitsPerPixel % samplesPerPixel != 0)
        {
            throw new InvalidOperationException(
                $"BitsPerPixel {bitsPerPixel} non compatibile con SamplesPerPixel {samplesPerPixel}.");
        }

        var bitsPerSample = checked((ushort)(bitsPerPixel / samplesPerPixel));
        if (bitsPerSample != 8 && bitsPerSample != 16)
        {
            throw new InvalidOperationException(
                $"BitsPerSample non supportato nel writer TIFF: {bitsPerSample}.");
        }

        var expectedRowStride = checked(imageWidth * samplesPerPixel * (bitsPerSample / 8));
        var expectedRasterLength = checked(expectedRowStride * imageLength);
        if (rasterData.Length != expectedRasterLength)
        {
            throw new InvalidOperationException(
                $"Raster TIFF con lunghezza inattesa. Atteso {expectedRasterLength}, ricevuto {rasterData.Length}.");
        }

        var shortBitsPerSample = new ushort[samplesPerPixel];
        var sampleFormat = new ushort[samplesPerPixel];
        for (var index = 0; index < samplesPerPixel; index++)
        {
            shortBitsPerSample[index] = bitsPerSample;
            sampleFormat[index] = 1;
        }

        return new TiffLayout
        {
            ImageWidth = imageWidth,
            ImageLength = imageLength,
            SamplesPerPixel = (ushort)samplesPerPixel,
            BitsPerSample = shortBitsPerSample,
            SampleFormat = sampleFormat,
            PhotometricInterpretation = pixelType == PixelType.RGB ? (ushort)2 : (ushort)1,
            XResolution = xResolution > 0 ? xResolution : 72,
            YResolution = yResolution > 0 ? yResolution : 72,
            RasterData = rasterData,
        };
    }

    private static uint AddBlock(List<byte[]> blocks, ref uint nextDataOffset, byte[] data)
    {
        var currentOffset = nextDataOffset;
        blocks.Add(data);

        nextDataOffset = checked(nextDataOffset + (uint)data.Length);
        if ((nextDataOffset & 1) != 0)
        {
            nextDataOffset++;
        }

        return currentOffset;
    }

    private static byte[] SerializeShortArray(IReadOnlyList<ushort> values)
    {
        var buffer = new byte[checked(values.Count * 2)];
        for (var index = 0; index < values.Count; index++)
        {
            var offset = index * 2;
            buffer[offset] = (byte)(values[index] & 0xff);
            buffer[offset + 1] = (byte)(values[index] >> 8);
        }

        return buffer;
    }

    private static byte[] SerializeRational(float value)
    {
        var denominator = 10000u;
        var numerator = checked((uint)Math.Max(1, Math.Round(value * denominator)));
        var buffer = new byte[8];
        WriteUInt32LittleEndian(buffer, 0, numerator);
        WriteUInt32LittleEndian(buffer, 4, denominator);
        return buffer;
    }

    private static void WriteUInt32LittleEndian(byte[] buffer, int offset, uint value)
    {
        buffer[offset] = (byte)(value & 0xff);
        buffer[offset + 1] = (byte)((value >> 8) & 0xff);
        buffer[offset + 2] = (byte)((value >> 16) & 0xff);
        buffer[offset + 3] = (byte)((value >> 24) & 0xff);
    }

    private static void WriteEntry(BinaryWriter writer, ushort tag, ushort type, uint count, uint valueOrOffset)
    {
        writer.Write(tag);
        writer.Write(type);
        writer.Write(count);
        writer.Write(valueOrOffset);
    }

    private sealed class TiffLayout
    {
        public int ImageWidth { get; set; }

        public int ImageLength { get; set; }

        public ushort SamplesPerPixel { get; set; }

        public ushort[] BitsPerSample { get; set; } = Array.Empty<ushort>();

        public ushort[] SampleFormat { get; set; } = Array.Empty<ushort>();

        public ushort PhotometricInterpretation { get; set; }

        public float XResolution { get; set; }

        public float YResolution { get; set; }

        public byte[] RasterData { get; set; } = Array.Empty<byte>();
    }
}
