#!/usr/bin/env python3
"""
Build script for EchoVR Replay Viewer Unity project.
Requires Unity 2021.3.1 or later to be installed.

Usage:
    python build.py [--platform=PLATFORM] [--output=PATH]

Supported platforms:
    - StandaloneLinux64
    - StandaloneWindows64
    - StandaloneOSX (macOS)

Examples:
    python build.py --platform=StandaloneWindows64 --output="./Build/Windows/"
    python build.py --platform=StandaloneLinux64 --output="./Build/Linux/"
"""

import subprocess
import sys
import os
import argparse
from pathlib import Path


def find_unity_executable():
    """Find the Unity executable in common installation paths."""
    common_paths = [
        # Linux
        "/opt/Unity/Editor/Unity",
        "/home/*/Unity/Hub/Editor/*/Editor/Unity",
        # macOS
        "/Applications/Unity/Hub/Editor/*/Unity/Contents/MacOS/Unity",
        # Windows
        "C:\\Program Files\\Unity\\Hub\\Editor\\*\\Editor\\Unity.exe",
    ]

    # Try to find Unity in PATH first
    result = subprocess.run(["which", "unity"], capture_output=True)
    if result.returncode == 0:
        return result.stdout.decode().strip()

    # Check if UNITY_PATH environment variable is set
    unity_path = os.environ.get("UNITY_PATH")
    if unity_path and os.path.exists(unity_path):
        return unity_path

    print("ERROR: Unity not found in PATH.")
    print("Please either:")
    print("  1. Set UNITY_PATH environment variable to your Unity executable")
    print("  2. Ensure Unity is installed and added to PATH")
    print("  3. Install Unity 2021.3.1 or later from https://unity.com/download")
    sys.exit(1)


def build(platform, output_path, scene_name="Assets/Scenes/MainScene"):
    """Build the project for the specified platform."""

    project_path = Path(__file__).parent / "Demo Viewer"

    if not project_path.exists():
        print(f"ERROR: Project path not found: {project_path}")
        sys.exit(1)

    output_path = Path(output_path)
    output_path.mkdir(parents=True, exist_ok=True)

    # Determine the executable name based on platform
    if platform == "StandaloneWindows64":
        executable_name = "ReplayViewer.exe"
    elif platform == "StandaloneOSX":
        executable_name = "ReplayViewer.app"
    else:  # StandaloneLinux64
        executable_name = "ReplayViewer"

    output_file = output_path / executable_name

    unity_executable = find_unity_executable()

    print(f"\n{'=' * 60}")
    print(f"Building for {platform}")
    print(f"{'=' * 60}")
    print(f"Project: {project_path}")
    print(f"Output: {output_file}")
    print(f"Unity: {unity_executable}")
    print(f"{'=' * 60}\n")

    # Build command
    command = [
        unity_executable,
        "-quit",
        "-batchmode",
        "-nographics",
        "-projectPath",
        str(project_path.absolute()),
        "-buildTarget",
        platform,
        "-executeMethod",
        "BuildScript.PerformBuild",
        f"--output={output_file}",
        f"--platform={platform}",
    ]

    # Prepare environment variables
    env = os.environ.copy()

    # Check for local libs directory (fix for missing libncurses.so.6 on some systems)
    libs_dir = Path.cwd() / "libs"
    if platform == "StandaloneLinux64" and libs_dir.exists():
        print(f"Adding local libs directory to LD_LIBRARY_PATH: {libs_dir}")
        current_ld_path = env.get("LD_LIBRARY_PATH", "")
        env["LD_LIBRARY_PATH"] = f"{libs_dir}:{current_ld_path}"

    try:
        result = subprocess.run(
            command, check=False, capture_output=False, text=True, env=env
        )

        if result.returncode == 0:
            print(f"\n✓ Build succeeded!")
            print(f"Output: {output_file}")
            return True
        else:
            print(f"\n✗ Build failed with return code {result.returncode}")
            return False

    except FileNotFoundError:
        print(f"ERROR: Could not find Unity executable at: {unity_executable}")
        sys.exit(1)
    except Exception as e:
        print(f"ERROR: Build failed with error: {e}")
        sys.exit(1)


def main():
    parser = argparse.ArgumentParser(
        description="Build EchoVR Replay Viewer for different platforms"
    )
    parser.add_argument(
        "--platform",
        choices=["StandaloneLinux64", "StandaloneWindows64", "StandaloneOSX"],
        default="StandaloneLinux64",
        help="Target platform for build",
    )
    parser.add_argument(
        "--output",
        default="./Build/",
        help="Output directory for built executable",
    )

    args = parser.parse_args()

    success = build(args.platform, args.output)
    sys.exit(0 if success else 1)


if __name__ == "__main__":
    main()
