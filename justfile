# Demo Viewer — EchoTools fork
# Unity 6 replay viewer for EchoVR / nEVR telemetry

set windows-shell := ["powershell.exe", "-NoLogo", "-Command"]

# UNITY_PATH env var overrides auto-detection on both platforms.
# On Unix, auto-detect falls back to ~/Unity/Hub/Editor/6000.*/Editor/Unity.
# On Windows, auto-detect is handled by scripts/find-unity.ps1.
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

# ── Unity path helpers ────────────────────────────────────

[unix, private]
find-unity:
    #!/usr/bin/env bash
    set -euo pipefail
    if [ -n "${UNITY_PATH:-}" ]; then
        if [ -x "$UNITY_PATH" ]; then echo "$UNITY_PATH"; exit 0; fi
        echo "UNITY_PATH is set but does not exist: $UNITY_PATH" >&2; exit 1
    fi
    for d in "$HOME/Unity/Hub/Editor"/6000.*; do
        exe="$d/Editor/Unity"
        if [ -x "$exe" ]; then echo "$exe"; exit 0; fi
    done
    echo "Unity 6000.x not found. Install via Unity Hub or set UNITY_PATH." >&2
    exit 1

[windows, private]
find-unity:
    & "{{project}}/scripts/find-unity.ps1"

# ── Build ─────────────────────────────────────────────────

[unix, private]
unity-build platform target: proto
    #!/usr/bin/env bash
    set -euo pipefail
    unity="$(just find-unity)"
    mkdir -p "$(dirname "{{target}}")"
    "$unity" -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -buildTarget "{{platform}}" \
        -executeMethod BuildScript.PerformBuild \
        -logFile - \
        "--output={{target}}" \
        "--platform={{platform}}"

[windows, private]
unity-build platform target: proto
    $unity = & "{{project}}/scripts/find-unity.ps1"; \
    New-Item -ItemType Directory -Force -Path (Split-Path "{{target}}") | Out-Null; \
    & $unity -quit -batchmode -nographics -projectPath "{{project}}" -buildTarget "{{platform}}" -executeMethod BuildScript.PerformBuild -logFile - "--output={{target}}" "--platform={{platform}}"

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
    #!/usr/bin/env bash
    set -euo pipefail
    unity="$(just find-unity)"
    "$unity" -projectPath "{{project}}" &

# Open project in Unity editor
[windows]
edit:
    $unity = & "{{project}}/scripts/find-unity.ps1"; \
    Start-Process $unity "-projectPath", "{{project}}"

# Run Unity tests
[unix]
test:
    #!/usr/bin/env bash
    set -euo pipefail
    unity="$(just find-unity)"
    "$unity" -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -runTests \
        -testResults "{{project}}/TestResults.xml" \
        -logFile -

# Run Unity tests
[windows]
test:
    $unity = & "{{project}}/scripts/find-unity.ps1"; \
    & $unity -quit -batchmode -nographics -projectPath "{{project}}" -runTests -testResults "{{project}}/TestResults.xml" -logFile -

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
    #!/usr/bin/env bash
    set -euo pipefail
    if unity="$(just find-unity 2>/dev/null)"; then
        echo "Unity:   $("$unity" -version 2>/dev/null || echo "$unity (version unknown)")"
    else
        echo "Unity:   NOT FOUND — install via Unity Hub or set UNITY_PATH"
    fi
    echo "buf:     $(buf --version 2>/dev/null || echo 'NOT FOUND — install from buf.build')"
    echo "just:    $(just --version)"
    echo "git:     $(git --version)"
    echo "git-lfs: $(git lfs version 2>/dev/null || echo 'NOT FOUND')"

# Check that required tools are installed
[windows]
doctor:
    try { $u = & "{{project}}/scripts/find-unity.ps1" 2>$null; \
      try { $v = & $u -version 2>$null; Write-Host "Unity:   $v ($u)" } \
      catch { Write-Host "Unity:   $u (version unknown)" } } \
    catch { Write-Host "Unity:   NOT FOUND - install via Unity Hub or set UNITY_PATH" }
    try { $v = buf --version 2>$null; Write-Host "buf:     $v" } catch { Write-Host "buf:     NOT FOUND - install from buf.build" }
    Write-Host "just:    $(just --version)"
    Write-Host "git:     $(git --version)"
    try { $v = git lfs version 2>$null; Write-Host "git-lfs: $v" } catch { Write-Host "git-lfs: NOT FOUND" }
