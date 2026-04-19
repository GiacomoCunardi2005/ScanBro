# `device_test` (Phase 0)

Minimal `libusb` utility for the Canon 5600F reverse-engineering spike.

Current scope:

- enumerate USB devices
- locate scanner by VID/PID (`04A9:1906`)
- open the device
- print descriptors/configuration/interface/endpoint details
- attempt interface claim with clear error reporting

It also contains experimental replay modes, including `--preview-attempt` and `--preview-attempt-03` / `--preview-attempt-lamp-window`.

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

## Runtime log files (stdout + stderr tee)

`device_test` now keeps normal console output and mirrors the same output to repo-local log files.

- Stable latest log: `tools/device_test/logs/device_test.latest.log`
- Timestamped history log (one per run): `tools/device_test/logs/device_test.YYYYMMDD-HHMMSS.log`
- Scope: both `stdout` and `stderr` lines emitted by `device_test`/`scanbro_usb`
- The `tools/device_test/logs` directory is created automatically on run.

Debug workflow for `--preview-attempt-03`:

1. Run `.\tools\device_test\build-x64\Debug\device_test.exe --preview-attempt-03`
2. Read `tools/device_test/logs/device_test.latest.log` first
3. Analyze from that exact saved output before forming hypotheses

## Experimental replay notes (`--preview-attempt-03`)

- The mode was rewritten as a clean state-machine path (not layered prepend replay).
- Active phase order is now explicit in code/logs:
  - setup/preamble
  - transition drivers
  - readiness observation
  - read trigger
  - bulk read
- Confirmed hardware finding: repeating `6cf0` does **not** move `0x6C22` from `8355` to `f055` in the failing state.
- Confirmed finding from the older layered attempt: the prepended "`pre-6c upstream prime`" block can fail immediately because first poll may read `0x6B22 -> 0055` instead of expected `8755`.
- Conclusion now enforced in workflow: blindly prepending older capture blocks is not a trustworthy strategy.
- Initial run result with rewritten mode:
  - preamble completes
  - phase-1 repeatedly observes `0x6B22=0055`, `0x0122=4055`, `0x0D22=0055`, `0x6C22=8355`
  - only `0c00` is emitted (its precondition is met); `6b87/0141/0d01/0fff/0140` are not emitted because `0x6B22` never reaches `8755`
  - failure is explicit at phase-1 gate with full state snapshot and `bytes saved before failure: 0`
  - latest logged run after tee-log instrumentation reproduces the same phase-1 failure profile; use `tools/device_test/logs/device_test.latest.log` as the canonical run artifact.
- Latest targeted phase-1 patch outcome:
  - `0d01` pre-kickoff eligibility was added (`0c00` already emitted + `0x0D22=0055` -> write `0d01` at frame hint `2635`)
  - confirmed in latest log: `writes=[0c00:yes,0d01-pre:yes,6b87:no,0141:no,0d01:no,0fff:no,0140:no,6cf0:no]`
  - interpretation: the first post-`0c00` causal edge is now represented in harness behavior, but `0x6B22` still remains `0055`, so kickoff-path writes never become eligible.
- Follow-up targeted phase-1 patch outcome:
  - `0141` eligibility was decoupled from `6b87` and tied to the `0d01-pre` edge plus `0x0122=4055` (to mirror the `REG0D -> REG01_SCAN -> REG0F` start ordering from `gl847_begin_scan` semantics).
  - confirmed in latest log: `writes=[0c00:yes,0d01-pre:yes,6b87:no,0141:yes,0d01:yes,0fff:yes,0140:yes,6cf0:no]` while observed state remains `0x6B22=0055` and `0x6C22=8355`.
  - interpretation: start-sequence writes can be issued without `6b87`, but they are still not sufficient to lift the upstream `0x6B22/0x6C22` transition on real hardware.
- Follow-up targeted phase-1 patch outcome:
  - `6b87` eligibility was changed from "`0x6B22` must already be `8755`" to a phase-1 driver gate (`0d01-pre` done, `0x6B22` in `0055` or `8755`).
  - confirmed in latest log: `iter=1 frame=2747 action=write 6b87 payload=6b87`, then from iter 2 onward `0x6B22` reports `8755`.
  - confirmed latest failing summary: `writes=[0c00:yes,0d01-pre:yes,6b87:yes,0141:yes,0d01:yes,0fff:yes,0140:yes,6cf0:no]` with `0x6C22=8355` and no `f155/f055`, so phase-1 still ends at iteration cap.
  - interpretation: the first real upstream hardware transition now occurs (`0x6B22: 0055 -> 8755`), but `REG6C` progression remains blocked and is now the primary phase-1 blocker.
- Follow-up targeted phase-1 patch outcome:
  - `6cf0` eligibility was widened from "`0x6C22` already `f155`" to a one-shot driver edge that can also fire when `0d01-pre` is complete and `0x6C22` is still `8355`.
  - rationale: this matches `gl847_begin_scan` semantics where `REG6C` (`GPIO10`) is driven as part of scan start sequencing, not only after observing `f155`.
  - confirmed in the latest real run (`tools/device_test/logs/device_test.latest.log`): `iter=1 frame=2645 action=write 6cf0 payload=6cf0` and phase-1 summaries now report `writes=[...,6cf0:yes]`.
  - confirmed remaining blocker: `0x6C22` still stays `8355` for all iterations, `seen_6c22_f155=no`, `seen_6c22_f055=no`, and phase-1 still fails at iteration cap with `bytes saved before failure: 0`.
- Next-phase direction: continue state-machine reconstruction upstream of kickoff readiness and `0x6C22` transition before revisiting pointer/bulk stages.

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
