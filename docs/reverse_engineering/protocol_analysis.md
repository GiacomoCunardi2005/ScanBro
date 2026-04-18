# Canon CanoScan 5600F USB Protocol Analysis (Phase 0)

Capture set analyzed:

- `pcapng/01_open_scanner.pcapng`
- `pcapng/02_preview_lowres_scannerwindwos.pcapng`
- `pcapng/02_scan_lowres_wjndowscanner.pcapng`

`pcapng/03_scan_1200dpi_mpnavigator_ex.pcapng` is intentionally out of scope for this pass.

Trace reference format used below: `pkt <index>` or `pkt <request> (request) -> pkt <response> (response)` inside the listed `.pcapng` file.

## Observed in capture

### Device identity and dynamic address assignment

| Label | Capture file | Trace reference | Transfer / endpoint | Request bytes | Response bytes |
|---|---|---|---|---|---|
| confirmed | `01_open_scanner.pcapng` | `pkt 2597` | control IN / `ep0` | n/a | `12 01 00 02 FF FF FF 40 A9 04 06 19 03 06 01 02 00 01` |
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 1051` | control IN / `ep0` | n/a | `12 01 00 02 FF FF FF 40 A9 04 06 19 03 06 01 02 00 01` |
| confirmed | `02_scan_lowres_wjndowscanner.pcapng` | `pkt 13` | control IN / `ep0` | n/a | `12 01 00 02 FF FF FF 40 A9 04 06 19 03 06 01 02 00 01` |

Observed scanner addresses in this dataset:

- `01_open_scanner.pcapng`: bus `2`, address `18`
- `02_preview_lowres_scannerwindwos.pcapng`: bus `2`, address `19`
- `02_scan_lowres_wjndowscanner.pcapng`: bus `2`, address `19`

### Interface and endpoint mapping

| Label | Capture file | Trace reference | Transfer / endpoint | Request bytes | Response bytes |
|---|---|---|---|---|---|
| confirmed | `01_open_scanner.pcapng` | `pkt 2600 (request) -> pkt 2601 (response)` | control setup+data / `ep0` | `80 06 00 02 00 00 27 00` | `09 02 27 00 01 01 00 C0 05 09 04 00 00 03 FF FF FF 00 07 05 81 02 00 02 00 07 05 02 02 00 02 00 07 05 83 03 01 00 08` |
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 1054 (request) -> pkt 1055 (response)` | control setup+data / `ep0` | `80 06 00 02 00 00 27 00` | `09 02 27 00 01 01 00 C0 05 09 04 00 00 03 FF FF FF 00 07 05 81 02 00 02 00 07 05 02 02 00 02 00 07 05 83 03 01 00 08` |

Descriptor bytes indicate:

- one configuration
- one interface (`FF/FF/FF`)
- endpoints: `0x81` Bulk IN, `0x02` Bulk OUT, `0x83` Interrupt IN

### Standard enumeration/control sequence

| Label | Capture file | Trace reference | Transfer / endpoint | Request bytes | Response bytes |
|---|---|---|---|---|---|
| confirmed | `01_open_scanner.pcapng` | `pkt 2596 (request) -> pkt 2597 (response)` | control / `ep0` | `80 06 00 01 00 00 12 00` | `12 01 00 02 FF FF FF 40 A9 04 06 19 03 06 01 02 00 01` |
| confirmed | `01_open_scanner.pcapng` | `pkt 2598 (request) -> pkt 2599 (response)` | control / `ep0` | `80 06 00 02 00 00 09 00` | `09 02 27 00 01 01 00 C0 05` |
| confirmed | `01_open_scanner.pcapng` | `pkt 2600 (request) -> pkt 2601 (response)` | control / `ep0` | `80 06 00 02 00 00 27 00` | `09 02 27 00 01 01 00 C0 05 ...` (39 bytes total) |
| confirmed | `01_open_scanner.pcapng` | `pkt 2602 (request) -> pkt 2603 (response)` | control / `ep0` | `00 09 01 00 00 00 00 00` | `<none>` (status stage only) |

`02_scan_lowres_wjndowscanner.pcapng` starts at a later point and does not include the 9-byte config request in the visible window.

### Vendor control transfers (observed bytes only)

| Label | Capture file | Trace reference | Transfer / endpoint | Request bytes | Response bytes |
|---|---|---|---|---|---|
| confirmed | `01_open_scanner.pcapng` | `pkt 2606 (request) -> pkt 2607 (response)` | vendor control IN / `ep0` | `C0 0C 8E 00 00 00 01 00` | `00` |
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 1058 (request) -> pkt 1059 (response)` | vendor control IN / `ep0` | `C0 0C 8E 00 00 00 01 00` | `00` |
| confirmed | `01_open_scanner.pcapng` | `pkt 2608 (request) -> pkt 2609 (response)` | vendor control IN / `ep0` | `C0 04 8E 00 22 06 02 00` | `00 55` |
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 1060 (request) -> pkt 1061 (response)` | vendor control IN / `ep0` | `C0 04 8E 00 22 06 02 00` | `00 55` |
| confirmed | `02_scan_lowres_wjndowscanner.pcapng` | `pkt 428 (request) -> pkt 429 (response)` | vendor control IN / `ep0` | `C0 04 8E 00 22 06 02 00` | `F8 55` |
| confirmed | `01_open_scanner.pcapng` | `pkt 2610 (request) -> pkt 2611 (response)` | vendor control OUT / `ep0` | `40 04 83 00 00 00 02 00` + payload `0E 01` | `<none>` (status stage only) |
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 1062 (request) -> pkt 1063 (response)` | vendor control OUT / `ep0` | `40 04 83 00 00 00 02 00` + payload `0E 01` | `<none>` (status stage only) |
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 1070 (request) -> pkt 1071 (response)` | vendor control OUT / `ep0` | `40 04 83 00 00 00 02 00` + payload `0E 00` | `<none>` (status stage only) |
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 1072 (request) -> pkt 1073 (response)` | vendor control OUT / `ep0` | `40 04 83 00 00 00 02 00` + payload `01 40` | `<none>` (status stage only) |
| confirmed | `02_scan_lowres_wjndowscanner.pcapng` | `pkt 4718 (request) -> pkt 4719 (response)` | vendor control OUT / `ep0` | `40 04 83 00 00 00 02 00` + payload `6C F0` | `<none>` (status stage only) |

### Preview-path transport activity

| Label | Capture file | Trace reference | Transfer / endpoint | Request bytes | Response bytes |
|---|---|---|---|---|---|
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 1878` | bulk OUT / `0x02` | `4C 1D 4C 1D 4C 1D 4C 1D ...` (128 bytes) | n/a |
| confirmed | `02_preview_lowres_scannerwindwos.pcapng` | `pkt 3681` | bulk IN / `0x81` | n/a | `E2 7D B2 E1 7C B3 E0 7A ...` (8192 bytes) |

Observed counts for scanner address in `02_preview_lowres_scannerwindwos.pcapng`:

- bulk OUT (`0x02`): `184` packets
- bulk IN (`0x81`): `5994` packets
- first bulk IN packet `>= 8192` bytes: `pkt 3681`

Interrupt-IN payload on `0x83` was not observed in these three files.

## Confirmed on hardware

Validation scope below comes from Windows x64 active custom-control runs using `tools/device_test`.

### Hardware transport checks

| Label | Validation step | Transfer / endpoint | Request bytes | Response bytes |
|---|---|---|---|---|
| confirmed | `device_test` default mode | enumerate/open/descriptors | n/a | device `04A9:1906` opened; descriptor/config/interface parsing succeeded |
| confirmed | `device_test` default mode | interface claim | n/a | interface claim succeeded |
| confirmed | `device_test` default mode | endpoint map | n/a | `0x81` bulk IN, `0x02` bulk OUT, `0x83` interrupt IN |

### Hardware probe checks

| Label | Validation step | Transfer / endpoint | Request bytes | Response bytes |
|---|---|---|---|---|
| confirmed | `device_test --safe-probe` | vendor control IN / `ep0` | `C0 0C 8E 00 00 00 01 00` | `00` |
| confirmed | repeated consecutive `device_test --sequence-probe` runs | step 1 vendor control IN / `ep0` | `C0 0C 8E 00 00 00 01 00` | `00` |
| confirmed | repeated consecutive `device_test --sequence-probe` runs | step 2 vendor control IN / `ep0` | `C0 04 8E 00 22 06 02 00` | `00 55` |
| confirmed | repeated consecutive `device_test --sequence-probe` runs | step 3 vendor control OUT / `ep0` | `40 04 83 00 00 00 02 00` + payload `0E 01` | `<none>` (completed successfully) |

## Hypothesis

- likely: repeated `C0 04 8E 00 22 xx 02 00` reads behave like status/polling reads.
- likely: high-volume bulk IN on `0x81` during preview capture is image payload.
- likely: `40 04 83 ...` and `40 04 82 ...` writes stage device parameters.

No hypothesis above is treated as confirmed protocol semantics.

## Needs hardware validation

### Unknowns / To validate

- unknown: minimal deterministic sequence to obtain low-res preview from cold start.
- unknown: semantic meaning of variant responses (`00 55`, `F8 55`, etc.).
- unknown: whether `0x83` interrupt endpoint is required in active custom-stack execution.
- unknown: timing constraints between control polling and bulk reads.
- unknown: whether capture-observed transfers are sufficient without Canon-side hidden preconditions.
