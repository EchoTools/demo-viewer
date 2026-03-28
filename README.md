<img alt="Replay Viewer Logo" width="80px" src="Assets/Images/Icons/ReplayLogoMostTransparent.png" align="left" />

## EchoTools Demo Viewer

This is the **EchoTools fork** of the EchoVR Replay Viewer — the most actively
maintained version. It adds support for `.nevrcap` and `.tape` capture formats
produced by the [echotools](https://github.com/echotools) toolchain alongside
the original `.echoreplay` format.

### Formats

| Format        | Source                  | Container                            |
| ------------- | ----------------------- | ------------------------------------ |
| `.echoreplay` | Spark / legacy capturer | JSON + zstd (ButterReplays v1–v3)    |
| `.nevrcap`    | nEVR platform           | Protobuf v1 + zstd                   |
| `.tape`       | echotools/tapedeck CLI  | Protobuf v2 + zstd (Envelope stream) |

### Requirements

- **Unity 6000.3.x** (Unity 6)
- **buf** — protobuf toolchain (`buf generate` to regenerate C# from `.proto`)
- **just** — command runner (optional, for build shortcuts)

### Build

```bash
just doctor             # check tool availability
just proto              # generate C# from .proto
just build-linux        # or build-windows, build-macos
just build-all          # all platforms
just test               # run Unity tests
just clean              # remove build artifacts + Unity cache
```

Set `UNITY_PATH` if Unity isn't at `/opt/Unity/Editor/Unity`.

### Usage

Launch the built executable. To load a replay, open the menu (tilde key) and
select a file or paste a path. VR mode: launch with `-useVR`.

#### Keyboard

- **WASD** — camera movement
- **Q/E** — descend/ascend
- **Shift** — speed boost
- **Mouse wheel** — adjust speed

#### Controller (Xbox)

- **Left/Right stick** — movement / look
- **LB/RB** — descend/ascend
- **A** — play/pause
- **D-pad left/right** — rewind/fast-forward
- **Triggers** — analog scrub

### Project Structure

```
Assets/
  Scripts/
    GameManager.cs         Singleton entry, scene/mode management
    Game.cs                Core game-state logic
    ReplayLoader/Replay.cs Drives frame playback
    ButterReplays/         .echoreplay decompressors (v1–v3)
    NevrCap/               .nevrcap reader + frame converter
    Tape/                  .tape v2 reader + frame converter
    EchoVRAPI/             Data model (Frame, Player, Team, Disc, etc.)
    Network/               VelNet multiplayer (shared viewing)
  Scenes/
    Game Scene.unity       Primary replay scene
    Greenscreen.unity      Chroma-key compositing
  Plugins/                 Runtime DLLs (Protobuf, ZstdSharp)
  Prefabs/, Models/        3D assets
  Arena_V3/, Arena V4/     Arena environments
Packages/                  Unity package manifest
ProjectSettings/           Unity project settings
proto/                     Protobuf definitions (managed by buf)
justfile                   Build recipes (just --list)
buf.yaml                   Buf module config
buf.gen.yaml               Buf codegen config
```

### License

See [license.txt](license.txt).
