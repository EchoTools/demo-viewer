# Known Bugs

## Critical

### BUG-1: Null dereference of `lastFrame` in all ButterReplays decompressors

**Files:** `Decompressor_v1.cs`, `Decompressor_v2.cs`, `Decompressor_v3.cs`

On keyframes, `lastFrame` is set to `null` (e.g. `Decompressor_v3.cs:141`), but
subsequent code dereferences it without null checks. The code inconsistently mixes
safe (`lastFrame?.field`) and unsafe (`lastFrame.field`) access within the same
method.

Examples in v3:

- Line 209: `f.left_shoulder_pressed = lastFrame.left_shoulder_pressed` — unsafe
- Line 232: `f.pause = lastFrame.pause` — unsafe
- Line 437: `p.ping = lastFrame.GetPlayer(p.userid).ping` — double unsafe (both
  `lastFrame` and `GetPlayer()` can be null)

Lines 195–199 use `lastFrame?.field` (safe), proving the author knew `lastFrame`
could be null but didn't apply the pattern consistently.

**Impact:** NullReferenceException crash when loading any replay that begins with a
keyframe (which is all of them).

---

## High

### BUG-2: `frames[0]` accessed unconditionally in NetworkFrameManager.cs

**File:** `NetworkFrameManager.cs:73-75`

```csharp
if (frames.Count < 1) Debug.LogError("Didn't get a frame", this);
if (frames.Count > 1) Debug.LogError("Got too many frames", this);
frame = frames[0];  // no early return after the error log
```

The `Debug.LogError` does not stop execution. When `frames` is empty, line 75
throws `ArgumentOutOfRangeException`.

### BUG-3: Off-by-one in Replay.cs playspace position copy

**File:** `Replay.cs:461`

```csharp
if (lastPlayers.Count <= p + 1) continue;
Player lastPlayer = lastPlayers[p];
```

The guard should be `lastPlayers.Count <= p`. As written, it skips the last valid
player (when `Count == p + 1`, index `p` is valid but the guard triggers `continue`).
This silently drops playspace‐position interpolation for the last player on each team.

### BUG-4: ZipArchive resource leak in EchoReplay.cs

**File:** `EchoReplay.cs:122-124`

```csharp
ZipArchive archive = new ZipArchive(reader.BaseStream);
StreamReader ret = new StreamReader(archive.Entries[0].Open());
return ret;
```

The `ZipArchive` is never stored or disposed. When the returned `StreamReader` is
eventually disposed, the archive's entry stream is closed but the archive object
itself leaks, holding open the underlying file handle until GC finalization.

---

## Medium

### BUG-5: Mixed safe/unsafe null access pattern in Decompressor_v3.cs

**File:** `Decompressor_v3.cs:414,437-442`

`lastFrame?.GetPlayer(p.userid)?.stats` (safe) appears alongside
`lastFrame.GetPlayer(p.userid).ping` (unsafe) in the same else-branch, just a few
lines apart. The unsafe variant crashes if the player left between frames.

### BUG-6: build.py references wrong scene name

**File:** `build.py:56`

```python
def build(platform, output_path, scene_name="Assets/Scenes/MainScene"):
```

The actual scene is `Assets/Scenes/Game Scene.unity`. The `scene_name` parameter is
defined but never passed to the Unity build command, so it's inert — but misleading
if anyone tries to use it.
