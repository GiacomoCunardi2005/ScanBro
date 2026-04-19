# ScanBro

Professional scanner software for Canon CanoScan 5600F.

## Project Vision

Build a reliable local Windows app with a browser UI for 5600F control, optimized for 35mm film workflows.

- Primary direction: custom scanner control path (USB protocol/user-space core).
- Mandatory fallback: TWAIN path stays available until the USB spike passes the Phase 0 gate.

## Architecture Status (grounded on repo state, 2026-04-19)

### Current repo state (implemented now)

- `src/ScanBro.Api` (`net10.0`): local ASP.NET Core API + static browser UI served from `wwwroot`.
- `src/ScanBro.Scanner.Worker` (`net48`, `x86`, `NTwain`): probe + scan worker using Canon TWAIN stack.
- `src/ScanBro.Contracts` (`netstandard2.0`): shared contracts between API and worker.
- `src/ScanBro.UsbDriver` + `tools/device_test`: Phase 0 USB reverse-engineering harness built on `libusb`.
- `ScanBro.slnx` currently includes `ScanBro.Api`, `ScanBro.Contracts`, `ScanBro.Scanner.Worker`.

### Target architecture (planned)

- Browser UI -> local API -> isolated scanner worker process.
- USB protocol core in user space for direct 5600F control.
- Reuse the same UI/API surface regardless of USB or TWAIN backend.

### Spike-only assumptions (not locked decisions)

- USB transport on Windows is a strategic decision, but final binding is not locked yet.
- The repo proves a `libusb` spike path; it does **not** yet prove that `libusb-win32` is the final production choice.
- `WinUSB` vs `libusb-win32` (or another libusb-compatible binding) remains an open decision gate.
- Phase 0 exit criterion is still a repeatable custom-USB preview scan.

## Current Repo Structure

```text
ScanBro/
|-- ScanBro.slnx
|-- global.json
|-- src/
|   |-- ScanBro.Api/
|   |-- ScanBro.Contracts/
|   |-- ScanBro.Scanner.Worker/
|   `-- ScanBro.UsbDriver/
|-- tools/
|   `-- device_test/
|-- docs/
|   `-- reverse_engineering/
`-- ROADMAP.md
```

Planned modules from older documentation (for example dedicated React frontend and additional pipeline projects) are target architecture items, not current solution structure.

## Phase Status

Phase 0 (USB technical spike) is in progress.

What is already grounded:

- USB captures are documented in `docs/reverse_engineering/protocol_analysis.md`.
- Native USB test harness and replay modes exist in `tools/device_test`.
- Working local app path exists today via TWAIN worker (`/api/probe`, `/api/scan`).

Gate condition remains unchanged:

- If custom USB reaches repeatable preview criteria, continue USB-first integration.
- If not, keep TWAIN as operational path while preserving API/UI continuity.

## Prerequisites

### Runtime

- Windows 10/11
- Canon CanoScan 5600F

### Development

- .NET SDK `10.0.104` (pinned in `global.json`)
- Visual Studio 2022 (or equivalent MSBuild toolchain)
- .NET Framework 4.8 targeting pack (for `ScanBro.Scanner.Worker`)
- CMake `3.20+` (matches `src/ScanBro.UsbDriver/CMakeLists.txt`)
- `libusb` x64 package for USB spike work
- Canon TWAIN driver for current worker-based scan path

## Build and Run (current app path)

```powershell
dotnet restore ScanBro.slnx
dotnet build ScanBro.slnx
dotnet run --project src/ScanBro.Api
```

Then open:

- `http://localhost:5094`

Current API endpoints:

- `GET /api/health`
- `GET /api/probe`
- `POST /api/scan`

## Build USB Spike Harness (Phase 0)

```powershell
cmake -S tools/device_test -B tools/device_test/build-x64 -G "Visual Studio 17 2022" -A x64 -DLIBUSB_ROOT="C:/path/to/libusb-x64"
cmake --build tools/device_test/build-x64 --config Debug
tools/device_test/build-x64/Debug/device_test.exe --safe-probe
```

For runtime DLL and mode details, see `tools/device_test/README.md`.

## Documentation

- `ROADMAP.md`
- `data/deep-research-report.md`
- `docs/reverse_engineering/protocol_analysis.md`
- `docs/reverse_engineering/genesys_architecture_interaction_map.md`
- `docs/reverse_engineering/genesys_devices_full_architecture_map.md`
- `docs/reverse_engineering/usb_captures/README.md`
- `tools/device_test/README.md`

## Notes

- Windows-only scope is intentional for this phase.
- This is experimental software; keep Canon driver restore path available during USB tests.
