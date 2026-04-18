# Canon CanoScan 5600F USB Protocol Analysis (Phase 0)

Capture set analyzed:

- `pcapng/01_open_scanner.pcapng`
- `pcapng/02_preview_lowres_scannerwindwos.pcapng`
- `pcapng/02_scan_lowres_wjndowscanner.pcapng`

`03_scan_1200dpi_mpnavigator_ex.pcapng` is intentionally excluded in this pass.

## Observed in capture (confirmed)

### Device identity

- VID:PID = `04A9:1906`
- USB device descriptor reports:
  - `bDeviceClass = FF`
  - `bDeviceSubClass = FF`
  - `bDeviceProtocol = FF`

### Dynamic USB addresses observed from these captures

The scanner USB address is dynamic per session. It was identified by matching the device descriptor payload containing `A9 04 06 19`.

| Capture | Observed scanner bus/address |
|---|---|
| `01_open_scanner.pcapng` | bus `2`, address `18` |
| `02_preview_lowres_scannerwindwos.pcapng` | bus `2`, address `19` |
| `02_scan_lowres_wjndowscanner.pcapng` | bus `2`, address `19` |

Other addresses in the same captures belong to additional USB activity and should not be assumed to be scanner traffic.

### Interface and endpoint mapping

From full config descriptor response (`09 02 27 00 ...`) on scanner address:

- 1 configuration
- 1 interface (`FF/FF/FF`)
- 3 endpoints:
  - `0x81` Bulk IN (`wMaxPacketSize = 0x0200`)
  - `0x02` Bulk OUT (`wMaxPacketSize = 0x0200`)
  - `0x83` Interrupt IN (`wMaxPacketSize = 0x0001`, interval `8`)

### Standard enumeration/control sequence

Observed setup packets for scanner enumeration:

1. `80 06 00 01 00 00 12 00` (GET_DESCRIPTOR device)
2. `80 06 00 02 00 00 09 00` (GET_DESCRIPTOR config, 9 bytes)
3. `80 06 00 02 00 00 27 00` (GET_DESCRIPTOR config, full)
4. `00 09 01 00 00 00 00 00` (SET_CONFIGURATION 1)

Notes:

- The full sequence appears in `02_preview_lowres_scannerwindwos.pcapng`.
- `02_scan_lowres_wjndowscanner.pcapng` starts with steps 1, 3, 4 (9-byte config request not present in this capture window).

### Currently known vendor-control transfers (bytes observed)

The following packets are observed bytes only, with no semantic claim:

| Control setup (+ optional OUT payload) | Observed response data |
|---|---|
| `C0 0C 8E 00 00 00 01 00` | `00` |
| `C0 04 8E 00 22 06 02 00` | `00 55` in `01_open`/`02_preview`; `F8 55` in `02_scan_lowres` |
| `40 04 83 00 00 00 02 00` + payload `0E 01` | status stage only (zero-length response data) |

Additional repeated traffic observed:

- `40 04 83 00 00 00 02 00` with payloads like `0E 00`, `01 40`, `02 18`, ...
- `C0 04 8E 00 22 xx 02 00` polling pattern where `xx` varies (`06`, `6C`, `6D`, `A6`, ...).

### Preview path observations

For scanner address `(bus 2, addr 19)` in `02_preview_lowres_scannerwindwos.pcapng`:

- control packets (endpoint 0): high volume, interleaved with data path
- bulk OUT on `0x02`: observed (`184` packets)
- bulk IN on `0x81`: observed (`5994` packets)
  - payload size range: `0` to `60928` bytes
  - first packet `>= 8192` bytes appears at packet index `3681`
  - repeated large reads strongly suggest streamed payload phase

No interrupt-IN payload on `0x83` is observed in these three captures.

### Validation workflow boundary (capture vs active control)

- **Capture mode:** Canon driver + USBPcap/Wireshark, used to observe official command flow.
- **Active-control mode:** Zadig/libusb binding, used to run custom `libusb` tools.
- These two modes must not be mixed in one validation run because device driver ownership changes session behavior and can invalidate replay conclusions.

## Hypothesis (not confirmed)

- The high-volume bulk IN phase on `0x81` in preview capture is likely image/preview payload transfer.
- `C0 04 8E ...` requests appear to behave like status/register polling.
- `40 04 83 ...` and `40 04 82 ...` writes appear to stage operational parameters before/while data transfer.

These remain hypotheses until replayed successfully from a custom libusb stack on real hardware.

## Needs hardware validation

### Unknowns / To validate

- Minimal reproducible command chain for low-res preview from cold device state.
- Meaning of response variants (`00 55`, `F8 55`, etc.) across scanner states.
- Whether endpoint `0x83` is required in active custom-stack sessions despite being idle in captures.
- Safe sequencing/timeouts between vendor-control polling and bulk reads.
- Confirmation that the observed setup bytes are sufficient without hidden Canon-side preconditions.
