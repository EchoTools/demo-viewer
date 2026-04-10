# EchoTools Demo Viewer

A Unity-based replay viewer for [EchoVR](https://en.wikipedia.org/wiki/Echo_VR) demo files.

> Originally created by **David Robidas** ([@robidasdavid](https://github.com/robidasdavid)) and Zzenith (2020).
> This is the [EchoTools](https://github.com/EchoTools) fork -- the most actively maintained version.

## Supported Formats

| Format        | Source                  | Container                            |
| ------------- | ----------------------- | ------------------------------------ |
| `.echoreplay` | Spark / legacy capturer | JSON + zstd (ButterReplays v1-v3)    |
| `.nevrcap`    | nEVR platform           | Protobuf v1 + zstd                   |
| `.tape`       | echotools/tapedeck CLI  | Protobuf v2 + zstd (Envelope stream) |

## Requirements

- **Unity 6000.3.x** (Unity 6) -- project targets 6000.3.4f1
- **buf** -- protobuf toolchain (generates C# from `.proto` definitions)
- **just** -- command runner (optional, for build shortcuts)
- **git-lfs** -- binary assets are stored with LFS

## Building

```bash
just doctor          # check tool availability
just proto           # generate C# from .proto
just build-linux     # or build-windows, build-macos
just build-all       # all platforms
just test            # run Unity tests
just clean           # remove build artifacts + Unity cache
```

Set `UNITY_PATH` if Unity is not at `~/Unity/Hub/Editor/6000.3.4f1/Editor/Unity`.

## Usage

Launch the built executable. Open the menu (tilde key) and select a replay file or paste a path. For VR mode, launch with `-useVR`.

### Keyboard

| Key         | Action           |
| ----------- | ---------------- |
| WASD        | Camera movement  |
| Q / E       | Descend / ascend |
| Shift       | Speed boost      |
| Mouse wheel | Adjust speed     |

### Controller (Xbox)

| Input              | Action                |
| ------------------ | --------------------- |
| Left / right stick | Movement / look       |
| LB / RB            | Descend / ascend      |
| A                  | Play / pause          |
| D-pad left / right | Rewind / fast-forward |
| Triggers           | Analog scrub          |

## Project Structure

```
Assets/
  Scripts/
    GameManager.cs            Singleton entry, scene/mode management
    Game.cs                   Core game-state logic
    ReplayLoader/Replay.cs    Frame playback driver
    ButterReplays/            .echoreplay decompressors (v1-v3)
    NevrCap/                  .nevrcap reader + frame converter
    Tape/                     .tape v2 reader + frame converter
    EchoVRAPI/                Data model (Frame, Player, Team, Disc, etc.)
    Network/                  VelNet multiplayer (shared viewing)
  Scenes/
    Game Scene.unity          Primary replay scene
    Greenscreen.unity         Chroma-key compositing
  Plugins/                    Runtime DLLs (Protobuf, ZstdSharp)
  Prefabs/, Models/           3D assets
  Arena_V3/, Arena V4/        Arena environments
Packages/                     Unity package manifest
ProjectSettings/              Unity project settings
proto/                        Protobuf definitions (managed by buf)
justfile                      Build recipes (just --list)
buf.yaml / buf.gen.yaml       Buf module + codegen config
```

## License

GPL-3.0 -- see [LICENSE](LICENSE).
