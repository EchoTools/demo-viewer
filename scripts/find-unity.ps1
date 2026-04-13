# Find a Unity 6000.x editor installation.
# Returns the full path to Unity.exe, or throws if not found.
# Honors UNITY_PATH env var as an override.

if ($env:UNITY_PATH) {
    if (Test-Path $env:UNITY_PATH) {
        Write-Output $env:UNITY_PATH
        exit 0
    }
    Write-Error "UNITY_PATH is set but does not exist: $env:UNITY_PATH"
    exit 1
}

$searchBases = @(
    "$env:ProgramFiles\Unity\Hub\Editor"
    "$env:LOCALAPPDATA\Unity\Hub\Editor"
    "C:\Unity\Hub\Editor"
)

foreach ($base in $searchBases) {
    if (-not (Test-Path $base)) { continue }
    $editors = Get-ChildItem $base -Filter '6000.*' -Directory -ErrorAction SilentlyContinue |
        Sort-Object Name -Descending
    foreach ($editor in $editors) {
        $exe = Join-Path $editor.FullName 'Editor\Unity.exe'
        if (Test-Path $exe) {
            Write-Output $exe
            exit 0
        }
    }
}

Write-Error "Unity 6000.x not found. Install via Unity Hub or set UNITY_PATH."
exit 1
