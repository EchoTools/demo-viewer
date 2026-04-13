# Demo Viewer — EchoTools fork
# Unity 6 replay viewer for EchoVR / nEVR telemetry

set windows-shell := ["powershell.exe", "-NoLogo", "-Command"]

# Unity auto-detection: UNITY_PATH env var overrides.
# Unix: ~/Unity/Hub/Editor/6000.*/Editor/Unity
# Windows: scans Program Files and AppData\Local for Unity 6000.x
unity_unix := env("UNITY_PATH", env("HOME", "/home") / "Unity/Hub/Editor/6000.3.4f1/Editor/Unity")
project := justfile_directory()

# Inline PowerShell Unity detection (avoids .ps1 execution policy issues).
# Assigns $unity and fails fast if not found.
_find_unity_win := "if ($env:UNITY_PATH) { $unity = $env:UNITY_PATH } else { $search = @(); foreach ($base in @(\"$env:ProgramFiles\\Unity\\Hub\\Editor\", \"$env:LOCALAPPDATA\\Unity\\Hub\\Editor\")) { if (Test-Path $base) { $search += Get-ChildItem $base -Filter '6000.*' -Directory -EA 0 } }; $pick = $search | Sort-Object Name -Descending | Select-Object -First 1; if ($pick) { $unity = Join-Path $pick.FullName 'Editor\\Unity.exe' } else { $unity = $null } }; if (-not $unity -or -not (Test-Path $unity)) { throw 'Unity 6000.x not found. Install via Unity Hub or set UNITY_PATH.' }; Write-Host \"Using Unity: $unity\" -ForegroundColor Cyan"

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
    "{{unity_unix}}" -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -buildTarget "{{platform}}" \
        -executeMethod BuildScript.PerformBuild \
        -logFile - \
        "--output={{target}}" \
        "--platform={{platform}}"

[windows, private]
unity-build platform target: proto
    $ErrorActionPreference = 'Stop'; \
    {{_find_unity_win}}; \
    New-Item -ItemType Directory -Force -Path (Split-Path "{{target}}") | Out-Null; \
    $log = "{{project}}\Logs\build.log"; \
    & $unity -quit -batchmode -nographics -projectPath "{{project}}" -buildTarget "{{platform}}" -executeMethod BuildScript.PerformBuild -logFile $log "--output={{target}}" "--platform={{platform}}"; \
    if (Test-Path $log) { Get-Content $log -Tail 50 }; \
    if ($LASTEXITCODE -ne 0) { throw "Unity build failed with exit code $LASTEXITCODE. Full log: $log" }

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
    "{{unity_unix}}" -projectPath "{{project}}" &

# Open project in Unity editor
[windows]
edit:
    {{_find_unity_win}}; \
    Start-Process $unity "-projectPath", "{{project}}"

# Run Unity tests
[unix]
test:
    "{{unity_unix}}" -quit -batchmode -nographics \
        -projectPath "{{project}}" \
        -runTests \
        -testResults "{{project}}/TestResults.xml" \
        -logFile -

# Run Unity tests
[windows]
test:
    {{_find_unity_win}}; \
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
    @echo "Unity:  $("{{unity_unix}}" -version 2>/dev/null || echo 'NOT FOUND — set UNITY_PATH')"
    @echo "buf:    $(buf --version 2>/dev/null || echo 'NOT FOUND — install from buf.build')"
    @echo "just:   $(just --version)"
    @echo "git:    $(git --version)"
    @echo "git-lfs: $(git lfs version 2>/dev/null || echo 'NOT FOUND')"

# Check that required tools are installed
[windows]
doctor:
    try { {{_find_unity_win}}; \
      try { $v = & $unity -version 2>$null; Write-Host "Unity:   $v" } \
      catch { Write-Host "Unity:   $unity (version unknown)" } } \
    catch { Write-Host "Unity:   NOT FOUND - install via Unity Hub or set UNITY_PATH" }
    try { $v = buf --version 2>$null; Write-Host "buf:     $v" } catch { Write-Host "buf:     NOT FOUND - install from buf.build" }
    Write-Host "just:    $(just --version)"
    Write-Host "git:     $(git --version)"
    try { $v = git lfs version 2>$null; Write-Host "git-lfs: $v" } catch { Write-Host "git-lfs: NOT FOUND" }
