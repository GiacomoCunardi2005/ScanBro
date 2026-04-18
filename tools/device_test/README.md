# `device_test` (Phase 0)

Minimal `libusb` utility for the Canon 5600F reverse-engineering spike.

Current scope:

- enumerate USB devices
- locate scanner by VID/PID (`04A9:1906`)
- open the device
- print descriptors/configuration/interface/endpoint details
- attempt interface claim with clear error reporting

It does **not** execute preview replay yet.

## Validation target (Windows x64 only)

This Phase 0 path is validated against:

- Windows x64
- x64 `device_test.exe` process
- x64 `libusb` binaries
- x64 scanner driver binding

Do not mix 32-bit and 64-bit components.

Any mismatch between:

- executable architecture
- `libusb` binary architecture
- installed device driver architecture

can cause misleading failures during validation.

## Build (Windows x64)

```powershell
cmake -S tools/device_test -B tools/device_test/build-x64 -G "Visual Studio 17 2022" -A x64 -DLIBUSB_ROOT="C:/path/to/libusb-x64"
cmake --build tools/device_test/build-x64 --config Debug
```

If `LIBUSB_ROOT` is not enough for your local package layout, set both:

- `-DLIBUSB_INCLUDE_DIR=...` (x64 include tree)
- `-DLIBUSB_LIBRARY=...` (x64 library/import library)

The build/run examples in this document assume an **x64 process + x64 libusb + x64 driver stack**.

## Runtime DLL requirement (`libusb-1.0.dll`)

Even if build succeeds, `device_test.exe` will not start if Windows cannot locate `libusb-1.0.dll` (x64).

Use one of these options:

- add the x64 `libusb` `bin` folder to the current PowerShell session `PATH`
- copy `libusb-1.0.dll` next to `tools/device_test/build-x64/Debug/device_test.exe`

Session-scoped option (recommended for first run):

```powershell
$env:PATH = "C:\path\to\libusb-x64\bin;$env:PATH"
```

## Run

```powershell
tools/device_test/build-x64/Debug/device_test.exe
```

Optional overrides:

```powershell
tools/device_test/build-x64/Debug/device_test.exe --vid 04A9 --pid 1906
```

## Driver-State Workflow (Do Not Mix)

### State A: Canon Driver + USBPcap (capture mode)

Use this state when you want to **observe official traffic**:

- Canon scanner driver installed/active
- USBPcap + Wireshark capture running
- run Canon software (Scanner, MP Navigator, etc.) and capture protocol behavior

Summary: **Canon driver + USBPcap = capture mode**.

### State B: 64-bit Zadig/libusb-compatible binding (active custom-control mode)

Use this state when you want to **send commands with `libusb`**:

- bind scanner to a **64-bit** WinUSB/libusb-compatible driver via Zadig
- run `tools/device_test` or custom replay tools
- Canon apps are expected to stop controlling the scanner in this state

Summary: **64-bit Zadig/libusb-compatible binding = active custom-control mode**.

### Why states must not be mixed in one validation session

- only one driver stack controls device I/O at a time
- captures from Canon-driver state are not equivalent to active-control behavior under libusb binding
- switching mid-session can leave stale handles/session state and create false negatives
- therefore, do not mix capture-mode and active-control steps in the same validation session

Recommended practice:

1. run a full capture session in State A
2. unplug/replug scanner (or reboot if needed)
3. switch driver binding
4. run active-control validation in State B
5. after custom tests, restore Canon driver before new capture sessions or normal scanner use
