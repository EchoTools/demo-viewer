#!/bin/bash
#
# Build script for SignalHandler native plugin
# Compiles the C signal handler library for Linux
#

set -e

PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
ASSETS_DIR="$PROJECT_ROOT/Assets"
PLUGINS_DIR="$ASSETS_DIR/Plugins"
PLUGIN_SOURCE="$PLUGINS_DIR/SignalHandler.c"
OUTPUT_DIR="$PLUGINS_DIR/Linux/x86_64"
OUTPUT_LIB="$OUTPUT_DIR/libSignalHandler.so"

echo "[SignalHandler Build] Project root: $PROJECT_ROOT"
echo "[SignalHandler Build] Plugin source: $PLUGIN_SOURCE"

# Create output directory if it doesn't exist
mkdir -p "$OUTPUT_DIR"

# Check if source file exists
if [ ! -f "$PLUGIN_SOURCE" ]; then
	echo "[SignalHandler Build] ERROR: Source file not found: $PLUGIN_SOURCE"
	exit 1
fi

echo "[SignalHandler Build] Compiling SignalHandler plugin..."

# Compile the plugin with PIC (Position Independent Code) for use in a shared library
gcc -fPIC -shared \
	-O2 \
	-Wall -Wextra \
	-std=c11 \
	"$PLUGIN_SOURCE" \
	-o "$OUTPUT_LIB"

if [ -f "$OUTPUT_LIB" ]; then
	echo "[SignalHandler Build] SUCCESS: Plugin built at $OUTPUT_LIB"
	echo "[SignalHandler Build] File size: $(du -h "$OUTPUT_LIB" | cut -f1)"
	file "$OUTPUT_LIB"
else
	echo "[SignalHandler Build] ERROR: Failed to create plugin"
	exit 1
fi
