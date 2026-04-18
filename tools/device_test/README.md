# `device_test` (Phase 0)

Minimal `libusb` utility for the Canon 5600F reverse-engineering spike.

Current scope:

- enumerate USB devices
- locate scanner by VID/PID (`04A9:1906`)
- open the device
- print descriptors/configuration/interface/endpoint details
- attempt interface claim with clear error reporting

It does **not** execute preview replay yet.

## Build

```powershell
cmake -S tools/device_test -B tools/device_test/build -DLIBUSB_ROOT="C:/path/to/libusb"
cmake --build tools/device_test/build --config Debug
```

If `LIBUSB_ROOT` is not enough for your local package layout, set both:

- `-DLIBUSB_INCLUDE_DIR=...`
- `-DLIBUSB_LIBRARY=...`

## Run

```powershell
tools/device_test/build/Debug/device_test.exe
```

Optional overrides:

```powershell
tools/device_test/build/Debug/device_test.exe --vid 04A9 --pid 1906
```

## Driver-State Workflow (Do Not Mix)

### State A: Canon Driver + USBPcap (capture mode)

Use this state when you want to **observe official traffic**:

- Canon scanner driver installed/active
- USBPcap + Wireshark capture running
- run Canon software (Scanner, MP Navigator, etc.) and capture protocol behavior

### State B: Zadig/libusb driver (active-control mode)

Use this state when you want to **send commands with `libusb`**:

- bind scanner to WinUSB/libusb driver via Zadig
- run `tools/device_test` or custom replay tools
- Canon apps are expected to stop controlling the scanner in this state

### Why states must not be mixed in one validation session

- only one driver stack controls device I/O at a time
- captures from Canon-driver state are not equivalent to active-control behavior under libusb binding
- switching mid-session can leave stale handles/session state and create false negatives

Recommended practice:

1. run a full capture session in State A
2. unplug/replug scanner (or reboot if needed)
3. switch driver binding
4. run active-control validation in State B
