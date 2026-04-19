# Genesys Devices Full Architecture And Interaction Map

## Scope and intent

This document maps the full `genesys_devices` folder as reverse-engineering documentation.
It is written to answer practical questions quickly:

- which file owns which phase of scanner lifecycle
- where control flow moves from model selection to real scan data
- which functions actively drive hardware state transitions vs only observe status
- where the GL841/GL847 paths differ in ways that matter during protocol debugging

Covered files:

- `genesys_devices/genesys.h`
- `genesys_devices/genesys_low.h`
- `genesys_devices/genesys_devices.c`
- `genesys_devices/genesys_gl841.h`
- `genesys_devices/genesys_gl841.c`
- `genesys_devices/genesys_gl847.h`
- `genesys_devices/genesys_gl847.c`

## High-level backend layering

### Layer 1: Frontend/session contract

File: `genesys.h`

Responsibility:

- SANE option IDs and session container (`Genesys_Scanner`)
- frontend-visible state and option plumbing

It does not drive registers directly. It feeds intent into lower layers.

### Layer 2: Core low-level contract and dispatch interface

File: `genesys_low.h`

Responsibility:

- common structs (`Genesys_Device`, register sets, buffers, calibration cache)
- command-set vtable (`Genesys_Command_Set`) used as runtime dispatch
- shared flags and register-access helper declarations

Important definition note:

- Most `sanei_genesys_*` functions declared here are implemented in upstream backend core files (`genesys_low.c` / `genesys.c`) not present in this local subset.
- ASIC init binders declared here are implemented in this folder for active paths:
  - `sanei_gl841_init_cmd_set` -> `genesys_gl841.c`
  - `sanei_gl847_init_cmd_set` -> `genesys_gl847.c`

### Layer 3: Static model database and VID:PID routing

File: `genesys_devices.c`

Responsibility:

- static tables for sensor/frontend/gpio/motor profiles
- `Genesys_Model` descriptors
- USB VID:PID -> model mapping (`genesys_usb_device_list`)

Critical dependency:

- Runtime backend path is selected here first.
- If a VID:PID maps to GL847 model, all later lifecycle callbacks come from `genesys_gl847.c`.

### Layer 4: ASIC-specific implementation (runtime state machine)

Files:

- `genesys_gl841.c` (+ constants/tables in `genesys_gl841.h`)
- `genesys_gl847.c` (+ constants/tables in `genesys_gl847.h`)

Responsibility:

- translate lifecycle actions to ordered register writes/polls
- motor ramp tables and movement logic
- scan begin/stop/homing transitions
- calibration/shading routines
- data path reads/uploads

## End-to-end control flow (probe to first data)

1. Probe resolves VID:PID in `genesys_devices.c`.
2. Selected `Genesys_Model` defines chipset type and profile IDs.
3. ASIC cmd set is bound (`sanei_gl841_init_cmd_set` or `sanei_gl847_init_cmd_set`).
4. `init` callback runs ASIC bootstrap:
   - default registers
   - FE setup
   - GPIO/memory map setup (especially explicit in GL847)
   - homing / readiness setup
5. Per-operation scan setup runs:
   - `*_init_regs_for_scan()` -> `*_init_scan_regs()`
   - optical + motor register synthesis
6. Start edge is emitted:
   - `*_begin_scan()`
7. Data path activates:
   - `*_bulk_read_data()` or shared read helper flow

## File responsibility map by lifecycle phase

### Scan start

Primary drivers:

- GL841: `gl841_init_scan_regs`, `gl841_begin_scan`
- GL847: `gl847_init_scan_regs`, `gl847_begin_scan`

Why these are drivers:

- they emit ordered writes that transition hardware FSM into scan-active mode (`REG01`, `REG0D`, `REG0F`, model-specific GPIO steps)

### Motor/GPIO state transitions

Primary drivers:

- GL841:
  - `gl841_init_motor_regs_scan`
  - `gl841_feed`
  - `gl841_slow_back_home`
- GL847:
  - `gl847_init_motor_regs_scan`
  - `gl847_init_gpio`
  - `gl847_homsnr_gpio`
  - `gl847_feed`
  - `gl847_slow_back_home`

Key dependency:

- GPIO polarity and motor mode must be coherent with model profile IDs from `genesys_devices.c`.

### Lamp / optical preparation

Primary drivers:

- GL841: `gl841_set_fe`, `gl841_init_optical_regs_scan`
- GL847: `gl847_set_fe`, `gl847_set_ad_fe`, `gl847_init_optical_regs_scan`

Why ordering matters:

- FE programming and lamp-control bits must be stable before start edges or early lines are invalid/noisy.

### Shading / calibration

Primary drivers:

- GL841:
  - `gl841_init_regs_for_shading`
  - `gl841_send_shading_data`
  - `gl841_led_calibration`
  - `gl841_offset_calibration`
  - `gl841_coarse_gain_calibration`
- GL847:
  - `gl847_init_regs_for_shading`
  - `gl847_send_shading_data`
  - `gl847_led_calibration`
  - `gl847_offset_calibration`
  - `gl847_coarse_gain_calibration`

Dependency chain:

- coarse offset/gain alignment -> shading coefficients -> reliable first real read.

### Readiness gating / status observation

Mostly observers:

- `sanei_genesys_get_status` and register polls (`REG40/REG41/...`) used in stop/home/feed loops

Important distinction:

- observers confirm state
- they do not create missing transitions

### First real read / data path

Primary path functions:

- GL841: `gl841_bulk_read_data`
- GL847: `gl847_bulk_read_data`
- shared orchestration: `sanei_genesys_read_data_from_scanner` (declared in `genesys_low.h`, implemented upstream)

Dependency:

- data read correctness assumes prior memory-layout and scan register synthesis were correct.

## GL841 vs GL847 differences relevant to debugging

### GL847-specific behavior hotspots

- explicit GPIO profile install (`gl847_init_gpio`)
- explicit memory map programming (`gl847_init_memory_layout`)
- begin-scan path with `REG6C` edge semantics in `gl847_begin_scan`

### GL841-specific behavior hotspots

- wider legacy model handling with multiple FE branches
- sheetfed hooks present in cmd set
- warmup and legacy profile paths in `gl841_init` and related helpers

## Drivers vs observers quick reference

Likely state drivers:

- register write emitters in:
  - `*_init_*regs*`
  - `*_begin_scan`
  - `*_stop_action` / `*_end_scan`
  - `*_feed` / `*_slow_back_home`
  - calibration + shading upload functions

Likely observers:

- status polling loops
- helper bit-tests (`*_test_*bit`, `*_get_*bit`) that read register values only

## Function location index for active debug path

### GL847 path (Canon 5600F current target)

- model routing: `genesys_devices.c` (`canon_5600f_model`, VID:PID entry `04a9:1906`)
- scan synthesis: `gl847_init_scan_regs`, `gl847_init_motor_regs_scan`
- scan edge: `gl847_begin_scan`
- FE and optical prep: `gl847_set_fe`, `gl847_init_optical_regs_scan`
- GPIO/sideband state: `gl847_init_gpio`, `gl847_homsnr_gpio`
- data path: `gl847_bulk_read_data`

### GL841 reference path

- scan synthesis: `gl841_init_scan_regs`, `gl841_init_motor_regs_scan`
- scan edge: `gl841_begin_scan`
- FE and optical prep: `gl841_set_fe`, `gl841_init_optical_regs_scan`
- movement/homing: `gl841_feed`, `gl841_slow_back_home`
- data path: `gl841_bulk_read_data`

## Practical assumptions and invariants to preserve

- The active model selected in `genesys_devices.c` is the root truth for all downstream behavior.
- Register image coherence is more important than single-register correctness.
- Start/stop transitions are ordered protocols, not independent writes.
- Calibration/shading stages are part of readiness, not optional decoration.
- Memory layout and data window registers must match read-size/accounting fields.
