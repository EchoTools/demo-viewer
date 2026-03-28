# Demo-Viewer

EchoTools fork of the EchoVR Replay Viewer. Unity-based 3D replay viewer for
EchoVR / nEVR telemetry data. Plays back `.echoreplay`, `.nevrcap`, and `.tape`
capture files.

## Build & Run

**Unity version:** 6000.3.4f1 (Unity 6)

The repo root is the Unity project. Open it directly in Unity Hub, or use:

```bash
just doctor             # check tool availability
just proto              # regenerate C# from .proto via buf
just build-linux        # or build-windows, build-macos, build-all
just test               # run Unity tests
just clean              # remove build artifacts + Unity cache
```

The main scene is `Assets/Scenes/Game Scene.unity`.

## Architecture

```
Assets/
  Scripts/
    GameManager.cs        Singleton entry point, scene/mode management
    Game.cs               Core game-state logic
    DemoStart.cs          Bootstrap / startup
    ReplayLoader/
      Replay.cs           Loads and drives replay playback
    ButterReplays/        .echoreplay format (v1-v3 decompressors)
    NevrCap/              .nevrcap protobuf-based format (v1)
    Tape/                 .tape protobuf-based format (v2, echotools/tape)
    EchoVRAPI/            Data model (Frame, Player, Team, Disc, etc.)
    Network/              VelNet multiplayer (shared viewing sessions)
  Scenes/
    Game Scene.unity      Primary replay scene
    Greenscreen.unity     Chroma-key compositing scene
  Plugins/                Runtime DLLs (Protobuf, ZstdSharp)
  Prefabs/, Models/       3D assets
  Arena_V3/, Arena V4/    Arena environment meshes
Packages/                 Unity package manifest
ProjectSettings/          Unity project settings
proto/                    Protobuf definitions (buf-managed)
  telemetry/v2/           Envelope, Frame, EchoArena messages
  spatial/v1/             Vec3, Quat, Pose types
justfile                  Build recipes (just --list)
buf.yaml                  Buf module config
buf.gen.yaml              Buf codegen config (C# output)
```

## Key Concepts

- **Frame pipeline:** Replay files are loaded into `EchoVRAPI.Frame` objects.
  The viewer interpolates between frames and drives player transforms, disc
  position, and game-clock state each Unity update.
- **Replay formats:** `.echoreplay` (JSON + zstd, handled by ButterReplays),
  `.nevrcap` (protobuf v1 + zstd, handled by NevrCap/), and `.tape`
  (protobuf v2 + zstd, handled by Tape/). The `.tape` format is produced
  by `echotools/tape` (tapedeck CLI) and uses the `telemetry.v2.Envelope`
  wire format with `spatial.v1` float32 types.
- **Protobuf integration:** C# types are generated from `proto/` via
  `buf generate`. The runtime DLL lives in `Assets/Plugins/Google.Protobuf.dll`.
- **VR + Desktop:** The viewer runs in both flat-screen and VR modes.
  VR is activated via the `-useVR` launch flag.
- **Networking:** VelNet enables shared replay sessions where multiple
  users watch the same replay together.

## Conventions

- C# naming follows Unity defaults: `PascalCase` for types and public
  members, `camelCase` for local variables and private fields.
- One MonoBehaviour per file; filename matches class name.
- Singletons use `public static T instance` (assigned in `Awake`).
- Protobuf-generated code must not be hand-edited; run `just proto` to
  regenerate from `.proto` source.
- Indent with 4 spaces for C#; tabs appear in some legacy files.

## Dependencies

| Dependency                | Purpose                                                  |
| ------------------------- | -------------------------------------------------------- |
| Unity 6000.3.x            | Editor and runtime                                       |
| buf                       | Protobuf codegen toolchain                               |
| Google.Protobuf           | Protobuf deserialization for .nevrcap and .tape          |
| ZstdSharp                 | Zstandard decompression for .echoreplay, .nevrcap, .tape |
| Newtonsoft.Json (via UPM) | JSON parsing for .echoreplay frames                      |
| Animation Rigging         | IK for player bone rendering                             |
| Cinemachine               | Camera system                                            |
| URP                       | Rendering pipeline                                       |
| unityutilities            | Shared utility package                                   |
| VelNet                    | Multiplayer shared viewing                               |
