# Demo Viewer — EchoTools fork
# Unity 6 replay viewer for EchoVR / nEVR telemetry

unity := env("UNITY_PATH", env("HOME", "/home") / "Unity/Hub/Editor/6000.3.4f1/Editor/Unity")
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

[private]
unity-build platform target: proto
    mkdir -p "$(dirname "{{target}}")"
    "{{unity}}" -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -buildTarget "{{platform}}" \
        -executeMethod BuildScript.PerformBuild \
        -logFile - \
        "--output={{target}}" \
        "--platform={{platform}}"

# Build for Linux
build-linux: (unity-build "StandaloneLinux64" (project / "Build/Linux/ReplayViewer"))

# Build for Windows
build-windows: (unity-build "StandaloneWindows64" (project / "Build/Windows/ReplayViewer.exe"))

# Build for macOS
build-macos: (unity-build "StandaloneOSX" (project / "Build/macOS/ReplayViewer.app"))

# Build all platforms
build-all: build-linux build-windows build-macos

# ── Editor ────────────────────────────────────────────────

# Open project in Unity editor
edit:
    "{{unity}}" -projectPath "{{project}}" &

# Run Unity tests
test:
    "{{unity}}" -quit -batchmode -nographics \
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
    @echo "Unity:  $("{{unity}}" -version 2>/dev/null || echo 'NOT FOUND — set UNITY_PATH')"
    @echo "buf:    $(buf --version 2>/dev/null || echo 'NOT FOUND — install from buf.build')"
    @echo "just:   $(just --version)"
    @echo "git:    $(git --version)"
    @echo "git-lfs: $(git lfs version 2>/dev/null || echo 'NOT FOUND')"
