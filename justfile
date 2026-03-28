# Demo Viewer — EchoTools fork
# Unity 6 replay viewer for EchoVR / nEVR telemetry

unity := env("UNITY_PATH", "/opt/Unity/Editor/Unity")
project := justfile_directory()

# List available recipes
default:
    @just --list

# ── Protobuf ──────────────────────────────────────────────

# Generate C# from .proto definitions
proto:
    buf generate

# Lint proto definitions
proto-lint:
    buf lint

# Check proto for breaking changes
proto-breaking *args:
    buf breaking {{args}}

# Update buf dependencies
proto-deps:
    buf dep update

# ── Build ─────────────────────────────────────────────────

# Build for Linux
build-linux: proto
    mkdir -p Build/Linux
    {{unity}} -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -buildTarget StandaloneLinux64 \
        -executeMethod BuildScript.PerformBuild \
        "--output={{project}}/Build/Linux/ReplayViewer" \
        -logFile -

# Build for Windows
build-windows: proto
    mkdir -p Build/Windows
    {{unity}} -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -buildTarget StandaloneWindows64 \
        -executeMethod BuildScript.PerformBuild \
        "--output={{project}}/Build/Windows/ReplayViewer.exe" \
        -logFile -

# Build for macOS
build-macos: proto
    mkdir -p Build/macOS
    {{unity}} -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -buildTarget StandaloneOSX \
        -executeMethod BuildScript.PerformBuild \
        "--output={{project}}/Build/macOS/ReplayViewer.app" \
        -logFile -

# Build all platforms
build-all: build-linux build-windows build-macos

# ── Editor ────────────────────────────────────────────────

# Open project in Unity editor
edit:
    {{unity}} -projectPath "{{project}}" &

# Run Unity tests
test:
    {{unity}} -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -runTests \
        -testResults "{{project}}/TestResults.xml" \
        -logFile -

# ── Housekeeping ──────────────────────────────────────────

# Remove build artifacts and Unity cache
clean:
    rm -rf Build/ Library/ Temp/ Obj/ Logs/ MemoryCaptures/
    rm -rf Assets/Scripts/Generated/
    rm -f TestResults.xml

# Remove Unity cache only (keeps build output)
clean-cache:
    rm -rf Library/ Temp/ Obj/ Logs/

# Check that required tools are installed
doctor:
    @echo "Unity:  $({{unity}} -version 2>/dev/null || echo 'NOT FOUND — set UNITY_PATH')"
    @echo "buf:    $(buf --version 2>/dev/null || echo 'NOT FOUND — install from buf.build')"
    @echo "just:   $(just --version)"
    @echo "git:    $(git --version)"
    @echo "git-lfs: $(git lfs version 2>/dev/null || echo 'NOT FOUND')"
