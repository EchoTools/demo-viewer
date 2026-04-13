# Demo Viewer — EchoTools fork
# Unity 6 replay viewer for EchoVR / nEVR telemetry

set windows-shell := ["powershell.exe", "-NoLogo", "-Command"]

unity_default_unix := env("HOME", "/home") / "Unity/Hub/Editor/6000.3.4f1/Editor/Unity"
unity_default_win  := env("LOCALAPPDATA", "C:/Program Files") / "Unity/Hub/Editor/6000.3.4f1/Editor/Unity.exe"
unity := env("UNITY_PATH", if os() == "windows" { unity_default_win } else { unity_default_unix })
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

[unix, private]
unity-build platform target: proto
    mkdir -p "$(dirname "{{target}}")"
    "{{unity}}" -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -buildTarget "{{platform}}" \
        -executeMethod BuildScript.PerformBuild \
        -logFile - \
        "--output={{target}}" \
        "--platform={{platform}}"

[windows, private]
unity-build platform target: proto
    New-Item -ItemType Directory -Force -Path (Split-Path "{{target}}") | Out-Null
    & "{{unity}}" -quit -batchmode -nographics -projectPath "{{project}}" -buildTarget "{{platform}}" -executeMethod BuildScript.PerformBuild -logFile - "--output={{target}}" "--platform={{platform}}"

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
[unix]
edit:
    "{{unity}}" -projectPath "{{project}}" &

# Open project in Unity editor
[windows]
edit:
    Start-Process "{{unity}}" "-projectPath", "{{project}}"

# Run Unity tests
[unix]
test:
    "{{unity}}" -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -runTests \
        -testResults "{{project}}/TestResults.xml" \
        -logFile -

# Run Unity tests
[windows]
test:
    & "{{unity}}" -quit -batchmode -nographics -projectPath "{{project}}" -runTests -testResults "{{project}}/TestResults.xml" -logFile -

# ── Housekeeping ──────────────────────────────────────────

# Remove build artifacts and Unity cache
[unix]
clean:
    rm -rf Build/ Library/ Temp/ Obj/ Logs/ MemoryCaptures/
    rm -rf Assets/Scripts/Generated/
    rm -f TestResults.xml

# Remove build artifacts and Unity cache
[windows]
clean:
    Remove-Item -Recurse -Force -ErrorAction SilentlyContinue Build, Library, Temp, Obj, Logs, MemoryCaptures, Assets/Scripts/Generated, TestResults.xml

# Remove Unity cache only (keeps build output)
[unix]
clean-cache:
    rm -rf Library/ Temp/ Obj/ Logs/

# Remove Unity cache only (keeps build output)
[windows]
clean-cache:
    Remove-Item -Recurse -Force -ErrorAction SilentlyContinue Library, Temp, Obj, Logs

# Check that required tools are installed
[unix]
doctor:
    @echo "Unity:  $("{{unity}}" -version 2>/dev/null || echo 'NOT FOUND — set UNITY_PATH')"
    @echo "buf:    $(buf --version 2>/dev/null || echo 'NOT FOUND — install from buf.build')"
    @echo "just:   $(just --version)"
    @echo "git:    $(git --version)"
    @echo "git-lfs: $(git lfs version 2>/dev/null || echo 'NOT FOUND')"

# Check that required tools are installed
[windows]
doctor:
    try { $v = & "{{unity}}" -version 2>$null; Write-Host "Unity:   $v" } catch { Write-Host "Unity:   NOT FOUND - set UNITY_PATH" }
    try { $v = buf --version 2>$null; Write-Host "buf:     $v" } catch { Write-Host "buf:     NOT FOUND - install from buf.build" }
    Write-Host "just:    $(just --version)"
    Write-Host "git:     $(git --version)"
    try { $v = git lfs version 2>$null; Write-Host "git-lfs: $v" } catch { Write-Host "git-lfs: NOT FOUND" }
