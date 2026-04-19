# Genesys GL847 Architecture And Interaction Map (5600F-focused)

## Scope of this map

This document covers the Genesys files used in the current `0x6C22` transition debugging path:

- `genesys_devices/genesys_devices.c`
- `genesys_devices/genesys_gl847.c`

It explains how model selection and GL847 scan control interact, with emphasis on the register-transition window around `REG6B/REG6C/REG0D/REG01/REG0F`.

## File responsibilities

### `genesys_devices.c` (model identity and static capabilities)

Primary role:

- maps USB VID:PID to one `Genesys_Model`
- declares per-model static capabilities and profile IDs
- chooses chipset family (`GENESYS_GL847` for Canon 5600F)

Why it matters:

- this file decides which backend lifecycle implementation is active
- for 5600F (`04a9:1906`), it routes execution to GL847 functions in `genesys_gl847.c`
- profile IDs (`CIS_*`, `DAC_*`, `GPO_*`, `MOTOR_*`) define downstream GPIO/motor/calibration behavior

### `genesys_gl847.c` (runtime state machine for GL847 devices)

Primary role:

- performs register programming, scan start/stop sequencing, motor setup, calibration, and reads
- provides the command-set implementation used once a GL847 model is selected

Why it matters:

- this file contains the ordered state transitions that must be mirrored (or at least respected) in low-level replay harnesses
- the startup and motor/GPIO edges here are likely drivers of status changes (not just passive observers)

## Control flow: from probe to first read

1. Device probe resolves VID:PID in `genesys_devices.c` list.
2. Matching `Genesys_Model` selects chipset and command set (`GENESYS_GL847` -> GL847 backend functions).
3. GL847 init/config path prepares registers and model-specific GPIO profile.
4. `gl847_init_scan_regs()` computes scan geometry/timing; it delegates motor timing setup to `gl847_init_motor_regs_scan()`.
5. Prepared register set is sent to hardware via bulk register writes.
6. `gl847_begin_scan()` performs ordered scan-start edge sequence (`REG6C`, `REG0D`, `REG01`, `REG0F`).
7. Data path reads through GL847 bulk-read helpers and generic scanner read routines.

Key dependency:

- The begin-scan sequence assumes prior motor/GPIO preconditioning from init functions; if the precondition is missing, status bits may never transition to data-ready states.

## Function map by lifecycle concern

### Scan start (driver functions)

- `gl847_init_scan_regs()`
- `gl847_init_motor_regs_scan()`
- `gl847_begin_scan()`
- `gl847_start_action()`

These functions actively create scan state, not just observe it.

### Motor and GPIO state transitions (driver functions)

- `gl847_init_motor_regs_scan()`:
  - computes slope/step/feed/timing registers
  - manipulates `REG6C` GPIO bits (including GPIO10 effective-scan pre-arm)
- `gl847_init_gpio()`:
  - applies model-specific GPIO/GPOE profile (`REG6B/REG6C/REG6D/...`)
- `gl847_homsnr_gpio()`:
  - restores model-specific GPIO10 polarity for reliable home-sensor behavior after scan operations

### Lamp / optical prep (mostly driver functions)

- `gl847_set_fe()`
- `gl847_led_calibration()`
- model/profile-driven register writes in init paths

These steps affect exposure path and analog frontend readiness.

### Shading / calibration (driver functions with read/compute loops)

- `gl847_init_regs_for_shading()`
- `gl847_send_shading_data()`
- `gl847_offset_calibration()`
- `gl847_led_calibration()`

These are not optional cosmetic stages; they can gate whether first useful pixel data appears.

### Readiness gating (mixed driver/observer)

Observers:

- status polls (`sanei_genesys_get_status()`, selected register reads)

Drivers used around gates:

- `gl847_begin_scan()` (edge-trigger writes)
- scan-stop/home functions when recovering

Important distinction:

- status reads only report state; they do not create the missing state transition.

### First real read / data path

- `gl847_bulk_read_data()` (GL847 bulk-IN helper)
- `sanei_genesys_read_data_from_scanner()` (called by higher-level flows)

These consume data once earlier lifecycle stages have moved hardware into data-producing mode.

## Causal map for the current debug target (`0x6C22`)

Observed harness issue: `0x6C22` remains `8355` despite eligible writes.

GL847 causal hints from code:

- `gl847_init_motor_regs_scan()` explicitly sets `REG6C.GPIO10` as part of effective-scan preparation.
- `gl847_begin_scan()` then clears `REG6C.GPIO10` first, before `REG0D` clears, `REG01_SCAN` set, and `REG0F` motor command.
- This implies a pre-arm then edge-consume pattern on `REG6C`, not an arbitrary standalone write at any time.

Implication for replay/harness logic:

- `REG6C` writes should be treated as transition drivers that depend on upstream state convergence (not merely as writes that become valid once "eligible").
- If `REG6C` clear is emitted before the state represented by `REG6B`/scan-ready path has latched, the write can be accepted but causally ineffective.

## Drivers vs observers quick reference

Likely state drivers:

- `gl847_init_motor_regs_scan()`
- `gl847_begin_scan()`
- `gl847_init_gpio()`
- calibration/shading init/send functions

Likely observers/status checks:

- register polling helpers
- `sanei_genesys_get_status()` loops
- scan-window readback checks used for readiness confirmation

## Where to look first for this bug class

1. `genesys_gl847.c`:
   - `gl847_init_motor_regs_scan()`
   - `gl847_begin_scan()`
   - `gl847_init_gpio()`
2. `genesys_devices.c`:
   - `canon_5600f_model`
   - VID:PID mapping row for `04a9:1906`

These locations define both the active backend and the critical startup ordering that controls `REG6C` progression.
