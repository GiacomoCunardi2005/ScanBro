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

## Addendum (2026-04-18): 03 capture lamp-window readiness findings

These findings come from targeted replay work against `pcapng/03_scan_1200dpi_mpnavigator_ex.pcapng` using `device_test --preview-attempt-03`.

- confirmed: a strict checkpoint gate on `0x4422==0e55` and `0x4522==7855` exposed that the replay never reached data-ready state when upstream setup was incomplete (`0x4222/0x4322/0x4422/0x4522` stayed at base `0055` in that failed run).
- confirmed: adding the later kickoff block alone (`2742..2759`) failed immediately when the first kickoff poll read `0x6B22 -> 0055` instead of `8755`; bytes saved remained `0`.
- confirmed: in the 03 capture, the immediate upstream lead-in to frame `2742` includes:
  - `2629`: IN `0x0C22 -> 0055` then `2631`: OUT `0c00`
  - `2633`: IN `0x0D22 -> 0055` then `2635`: OUT `0d01`
  - `2637/2639/2641`: IN `0x4B22/0x4C22/0x4D22 -> 0055`
  - `2643`: IN `0x6C22 -> f055` then `2645`: OUT `6cf0`
  - `2651`: IN `0x0122 -> 4055` then `2653`: OUT `0140`
  - first kickoff read appears at `2742`: IN `0x6B22 -> 8755`
- interpretation: the missing/misordered part is upstream of frame `2742`; pointer payload shape and bulk transport are not the first divergence point for this failure.
- confirmed (newer run): after adding the pre-kickoff `2629..2653` block, first mismatch moved earlier to `0x6C22`:
  - observed on hardware: `0x6C22 -> 8355`
  - expected from capture at that point: `0x6C22 -> f055`
  - failure remained explicit (`setup pre-kickoff poll response mismatch`, `bytes saved before failure: 0`)
- confirmed (03-capture timeline): `0x6C22` reaches `f055` only after `REG6C` is driven with `6cf0`.
  - first explicit transition in the relevant trace: `1833` IN `0x6C22 -> f155`, then `1836` OUT `6cf0`, then `2143` IN `0x6C22 -> f055`.
  - the same conditioning appears again in the lead-in near the failing window: `2515/2519` IN `0x6C22 -> f055` with `2517/2521` OUT `6cf0`, then `2643` IN `0x6C22 -> f055`.
- confirmed (frame-level decode detail): between `1911` and the first `2143` observation of `0x6C22 -> f055`, the capture also contains a larger control-transition region (`~1941..2142`) with repeated status/write activity (including `0d04`, `0x52..0x59`, `0x16/0x17/0x18/0x1a/0x1d`, and `0x02xx` toggles), so `6cf0` is not the only state-driving input in that span.
- confirmed (latest real run): repeated `6cf0` writes in the failing state did **not** move `0x6C22` from `8355` to `f055`; each iteration stayed at `8355`, then the run ended with transfer-cap failure and `bytes saved before failure: 0`.
- conclusion update: the "`6cf0` alone is sufficient" hypothesis is now ruled out for this state. `0x6C22` must be treated as reflecting an upstream state transition; fixing requires upstream sequencing before the `0x6C22` check.
- implementation note: replay logic was updated to stop brute-force `6cf0` retries and instead:
  - run an upstream pre-`0x6C22` prime sequence aligned with capture frames `1895..1911` (`6B22/0122/0D22/0122` polls with writes `6b87/0141/0d01/0fff/0140`),
  - then run `0x6C22` progression gate with at most one `6cf0` write, only after `f155` is observed.
- interpretation update: current first proven divergence point is now the `0x6C22` state transition (`8355` observed where `f055` is expected), so the remaining missing piece is upstream/immediately around forcing `REG6C` into `f0` state before kickoff readiness.

## Addendum (2026-04-19): clean state-machine rewrite of `--preview-attempt-03`

These findings come from the rewritten `device_test --preview-attempt-03` path that separates:

- setup/preamble
- capture-grounded transition drivers
- readiness observation
- read trigger
- bulk read

Confirmed outcomes:

- confirmed: repeated `6cf0` does **not** move `0x6C22` from `8355` to `f055` on real hardware in the failing state.
- confirmed: the earlier "`pre-6c upstream prime`" replay block failure was a state-misalignment failure (`0x6B22` observed `0055` where that block expected `8755`), not proof that the block is irrelevant.
- confirmed: blindly prepending older capture windows is no longer a trustworthy strategy for this path.
- confirmed: the active method is now state-machine reconstruction plus clean test redesign, with bounded gates and explicit state snapshots on failure.

Latest run behavior with the rewritten mode:

- preamble replay completes.
- phase-1 transition gate repeatedly observes:
  - `0x0C22 -> 0055`
  - `0x6B22 -> 0055`
  - `0x0122 -> 4055`
  - `0x0D22 -> 0055`
  - `0x6C22 -> 8355`
- only `0c00` is emitted (because its precondition is met); `6b87/0141/0d01/0fff/0140` are not emitted because `0x6B22` never reaches `8755`.
- run fails at the phase-1 iteration cap with explicit state dump and `bytes saved before failure: 0`.

Interpretation update:

- current blocker is now clearly upstream state convergence (`0x6B22` readiness + `0x6C22` transition), not pointer payload or bulk-IN mechanics.

Runtime instrumentation update (2026-04-19):

- confirmed: `tools/device_test` now mirrors runtime `stdout` + `stderr` to repo-local logs while preserving live console output.
- deterministic latest log path: `tools/device_test/logs/device_test.latest.log`.
- per-run history path pattern: `tools/device_test/logs/device_test.YYYYMMDD-HHMMSS.log`.
- workflow decision: read `device_test.latest.log` first for each debug cycle so analysis is grounded in the exact saved run output.
- latest instrumented run with `--preview-attempt-03` reproduced the same phase-1 stall (`0x6B22=0055`, `0x0122=4055`, `0x0D22=0055`, `0x6C22=8355`; only `0c00` write emitted; iteration-cap failure, `bytes saved before failure: 0`).
- follow-up targeted phase-1 patch: a pre-kickoff `0d01` edge was added (`0c00` completed + `0x0D22==0055` -> write `0d01` with frame hint `2635`).
- latest run after that patch confirms `0d01-pre` now fires (`writes=[0c00:yes,0d01-pre:yes,6b87:no,0141:no,0d01:no,0fff:no,0140:no,6cf0:no]`) while core state remains stuck (`0x6B22=0055`, `0x6C22=8355`) and still ends at phase-1 iteration cap.
- follow-up targeted phase-1 patch: `0141` eligibility was moved off the `6b87` gate and anchored to `0d01-pre + 0x0122=4055`, aligning with the `REG0D -> REG01_SCAN -> REG0F` start ordering from `gl847_begin_scan`.
- latest run after that change confirms the start-sequence writes now fire (`writes=[0c00:yes,0d01-pre:yes,6b87:no,0141:yes,0d01:yes,0fff:yes,0140:yes,6cf0:no]`), but `0x6B22` remains `0055` and `0x6C22` remains `8355`, so phase-1 still fails at iteration cap with `bytes saved before failure: 0`.
- follow-up targeted phase-1 patch: `6b87` was changed from an observation-gated write (`0x6B22` already `8755`) to a phase-1 driver write (`0d01-pre` done and `0x6B22` in `0055` or `8755`).
- latest run after that change confirms `iter=1 frame=2747 action=write 6b87 payload=6b87`, and from iter 2 onward `0x6B22` is `8755` (first real phase-1 hardware-state transition in this harness).
- failure remains explicit and upstream: `0x6C22` stays `8355`, `seen_6c22_f155=no`, `seen_6c22_f055=no`, `6cf0` stays not emitted by current gate, and phase-1 still ends at iteration cap with `bytes saved before failure: 0`.
- rationale from GL847 reference: `gl847_begin_scan()` explicitly drives `REG6C` (`GPIO10` clear) as part of scan-start sequencing, so gating `6cf0` only on observed `f155` can deadlock the driver path when the device sits at `8355`.
- follow-up targeted phase-1 patch: `6cf0` eligibility was widened from "`0x6C22` already `f155`" to a one-shot driver edge that can also fire when `0d01-pre` is done and `0x6C22` remains `8355`.
- latest real run after that patch confirms the new edge is active (`iter=1 frame=2645 action=write 6cf0 payload=6cf0`, summaries show `writes=[...,6cf0:yes]`).
- result: `0x6C22` still remains `8355` with `seen_6c22_f155=no` and `seen_6c22_f055=no`; phase-1 still fails at iteration cap with `bytes saved before failure: 0`, so the next blocker remains upstream of `REG6C` progression.
- follow-up targeted phase-1 patch: `6cf0` was deferred on the `0x6C22=8355` path until `0x6B22` is actually observed at `8755` (instead of firing in the same iteration where `6b87` is first written while `0x6B22` is still `0055`).
- latest real run after that patch confirms the sequencing change took effect:
  - iter 1 summary shows `6b22=0055` and `6cf0:no`
  - iter 2 shows `6b22=8755` then `iter=2 frame=2645 action=write 6cf0 payload=6cf0`
- result remains unchanged at the hardware state level: `0x6C22` still stays `8355`, `seen_6c22_f155=no`, `seen_6c22_f055=no`, and failure remains `phase-1 transition gate not satisfied before iteration cap` with `bytes saved before failure: 0`.
- interpretation update: making `6cf0` wait for the latched `0x6B22=8755` state was necessary for ordering correctness but still not sufficient to drive `0x6C22` progression.
- latest canonical check from `tools/device_test/logs/device_test.latest.log` confirms the same endpoint with full phase-1 write set active (`writes=[0c00:yes,0d01-pre:yes,6b87:yes,0141:yes,0d01:yes,0fff:yes,0140:yes,6cf0:yes]`), stable observed state (`0x6B22=8755`, `0x0122=4055`, `0x0D22=0055`, `0x6C22=8355`), and terminal failure unchanged (`phase-1 transition gate not satisfied before iteration cap`, `bytes saved before failure: 0`).
- uploaded canonical log used as baseline for this pass showed a stricter failure shape before the latest patch (`writes=[0c00:yes,0d01-pre:yes,gpio-profile:yes,6c10-pre:yes,6b87:yes,0141:yes,0d01:yes,0fff:yes,0140:no,6cf0:yes]`, stable late state `0x0C22=0055`, `0x6B22=8755`, `0x0122=4155`, `0x0D22=0055`, `0x6C22=8355`).
- targeted phase-1 gate fix (current `main.c`): `0140` no longer requires `seen_6c22_f055`; it now gates on `0fff` completed, `0x0122` readiness (`4055`/`4155`), and `6cf0` written, with explicit block logging when prerequisites are missing.
- rerun confirmation after patch: `iter=4 frame=2653 action=write 0140 payload=0140`; summaries now keep `0140:yes` while `0x0122` remains `4055`.
- remaining blocker unchanged after the `0140` fix: `0x6C22` still remains `8355`, `seen_6c22_f155=no`, `seen_6c22_f055=no`, and phase-1 still ends at iteration cap with `bytes saved before failure: 0`.
- post-`0140` neighborhood pass (latest): grounded ordering mismatch was confirmed and corrected in `main.c`:
  - previous gate tied `0140` to `0fff` (later kickoff window), while frame hints place `0140` in the immediate pre-kickoff neighborhood (`6cf0@2645`, `0140@2653` vs `0d01/0141/0fff@2755/2751/2759`).
  - `0140` now emits from `0d01-pre + 0x6B22=8755 + 0x0122 ready + 6cf0`, with explicit emit-reason and single-shot retry-policy logs.
- latest rerun confirms:
  - `iter=3 frame=2653 action=write 0140 payload=0140` (earlier than previous iter=4 path),
  - first 5 immediate post-`0140` snapshots (`0x6C22/0x6B22/0x0122/0x0D22`) remain stable at `8355/8755/4055/0055`,
  - `0d01`, `0141`, `0fff` still emit after that window, but `0x6C22` never reaches `f155/f055`; phase-1 failure remains unchanged (`bytes saved before failure: 0`).
- artifact-consistency pass (2026-04-19):
  - verified that the checked `tools/device_test/logs/device_test.latest.log` already contained `0140` emission and 5 post-`0140` snapshots; the conflicting `0140:no` statement was stale relative to the repo artifact.
  - rebuilt and reran `--preview-attempt-03`; `device_test.latest.log` was regenerated from the current binary in this pass.
- follow-up ordering fix after `0140`:
  - kickoff writes were reordered to align with frame hints (`0141@2751` -> `0d01@2755` -> `0fff@2759`) after the `6cf0 -> 0140` pre-kickoff window.
  - confirmed in regenerated latest log: order changed as intended, but `0x6C22` still remained `8355` with `seen_6c22_f155=no` and `seen_6c22_f055=no`; phase-1 still fails at iteration cap with `bytes saved before failure: 0`.
- follow-up REG6C consume payload alignment (latest pass):
  - grounded mismatch fixed in harness: the consume edge previously used RMW-derived payload `6c81`, but the capture-aligned write at frame `2645` is literal `6cf0`.
  - `main.c` now emits literal `6cf0` on the consume edge and logs the trigger snapshot with `mode=literal-6cf0`.
  - latest run confirms `iter=3 frame=2645 action=write 6cf0 (capture-literal consume) payload=6cf0`, plus `0140_attempts=3`, `0140_emitted_iter=3`, `post0140_snapshots=5`.
  - immediate post-`0140` diagnostics still show no first REG6C progression (`6c22=8355` across 5 snapshots, no `f155`, no `f055`), so phase-1 remains blocked at iteration cap with `bytes saved before failure: 0`.
