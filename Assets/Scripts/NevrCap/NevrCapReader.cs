using System;
using System.IO;
using Google.Protobuf;
using Nevr.Telemetry.Protobuf;
using ZstdSharp;

namespace NevrCap
{
    /// <summary>
    /// Reads .nevrcap files which are Zstd-compressed streams of length-delimited protobuf messages.
    /// Format: TelemetryHeader (1 message) followed by LobbySessionStateFrame (multiple messages)
    /// </summary>
    public class NevrCapReader : IDisposable
    {
        private readonly FileStream _fileStream;
        private readonly DecompressionStream _decompressor;
        private bool _disposed;

        public TelemetryHeader Header { get; private set; }

        /// <summary>
        /// Opens a .nevrcap file for reading.
        /// </summary>
        /// <param name="filePath">Path to the .nevrcap file</param>
        public NevrCapReader(string filePath)
        {
            _fileStream = new FileStream(filePath, FileMode.Open, FileAccess.Read);
            _decompressor = new DecompressionStream(_fileStream);
        }

        /// <summary>
        /// Reads the telemetry header from the file.
        /// This should be called once before reading frames.
        /// </summary>
        public TelemetryHeader ReadHeader()
        {
            byte[] data = ReadDelimitedMessage();
            if (data == null)
                return null;

            Header = TelemetryHeader.Parser.ParseFrom(data);
            return Header;
        }

        /// <summary>
        /// Reads the next frame from the file.
        /// </summary>
        /// <returns>The next frame, or null if end of file</returns>
        public LobbySessionStateFrame ReadFrame()
        {
            byte[] data = ReadDelimitedMessage();
            if (data == null)
                return null;

            return LobbySessionStateFrame.Parser.ParseFrom(data);
        }

        /// <summary>
        /// Reads a length-delimited protobuf message from the stream.
        /// The length is encoded as a varint prefix.
        /// </summary>
        private byte[] ReadDelimitedMessage()
        {
            // Read varint length
            ulong length = 0;
            int shift = 0;

            while (true)
            {
                int b = _decompressor.ReadByte();
                if (b == -1)
                    return null; // End of stream

                length |= (ulong)(b & 0x7F) << shift;
                if ((b & 0x80) == 0)
                    break;

                shift += 7;
                if (shift >= 64)
                    throw new InvalidDataException("Varint is too long");
            }

            // Read message data
            byte[] data = new byte[length];
            int bytesRead = 0;
            while ((ulong)bytesRead < length)
            {
                int read = _decompressor.Read(data, bytesRead, (int)(length - (ulong)bytesRead));
                if (read == 0)
                    throw new EndOfStreamException("Unexpected end of stream while reading message");
                bytesRead += read;
            }

            return data;
        }

        public void Dispose()
        {
            if (!_disposed)
            {
                _decompressor?.Dispose();
                _fileStream?.Dispose();
                _disposed = true;
            }
        }
    }
}
