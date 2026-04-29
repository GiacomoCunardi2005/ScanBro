# Codex guide: how to use SANE Genesys source files for Canon 5600F / GL847 reverse engineering

## Purpose
Use the SANE Genesys source as a **reference for architecture and direction**, not as a drop-in implementation.

The immediate goal is to understand:
- how the Genesys backend classifies Canon 5600F / 700F devices
- how GL847 scanners are initialized and moved toward real acquisition
- where lamp / transparency / calibration / shading / start / read logic lives
- what parts of GL841 may still matter for CCD-specific behavior

## Source set to read
Primary files:
- `genesys_devices.c`
- `genesys_gl847.c`
- `genesys_gl841.c`

Official/authoritative places to obtain them:
- official SANE git access page
- Debian source mirrors for historical `sane-backends` versions

## Why these files matter
### 1. genesys_devices.c
Use this file to answer:
- how Canon 5600F and 700F are classified
- what model/chip/device metadata is attached to them
- whether the backend treats them as special cases or near-relatives of other GL847 scanners
- what feature flags, geometry, sensor assumptions, or transparency-related settings are associated with them

### 2. genesys_gl847.c
This is the main direction file for your case.
Search specifically for:
- `lamp`
- `transparency`
- `calibration`
- `shading`
- `start`
- `read`
- `scan`
- `warm`
- `move`
- `motor`

Use it to extract:
- initialization phases
- lamp warmup / lamp enable behavior
- transparency or TPU/light-path setup
- shading / calibration prerequisites before useful image data appears
- how the backend transitions from control/setup state into image-producing read state
- the relationship between status polling and actual data phase

### 3. genesys_gl841.c
Do not use this as the main implementation path.
Use it as a **parallel reference** for CCD-specific ideas, especially if GL847 support is biased toward CIS devices.

Look for:
- CCD-specific setup differences
- calibration/shading flow differences
- sensor/light path handling that may explain why a GL847 CCD scanner behaves differently from GL847 CIS scanners

## How to use the files in practice
### Step A — build a concept map, not a code copy
For each file, extract only these kinds of information:
- device family classification
- state machine phases
- prerequisites before scan/read
- calibration dependencies
- lamp/light-path transitions
- CCD vs CIS differences

Do **not** try to port large chunks blindly.
Do **not** rename your code around SANE semantics unless clearly justified.

### Step B — compare against your real hardware observations
You already know:
- small captures reached bulk IN but produced all-zero payloads
- the large 1200 dpi capture is the first one where the lamp actually turned on
- the large capture also shows a more meaningful pre-bulk state transition

So when reading the SANE source, always compare concepts against these checkpoints:
1. what state change likely corresponds to lamp-on / illuminated acquisition
2. what calibration or shading steps are required before useful pixels appear
3. what status/poll transitions indicate the scanner is truly ready
4. what pointer/control writes happen immediately before non-zero bulk IN

### Step C — produce hypotheses, not conclusions
For every insight from SANE, label it as one of:
- `confirmed in source`
- `consistent with our captures`
- `hypothesis to test`

Examples:
- "GL847 path performs shading calibration before useful read" -> confirmed in source
- "our all-zero bulk IN may mean calibration/light path is incomplete" -> hypothesis consistent with source + captures

## What Codex should deliver from this reading pass
I want a short technical note with these sections:

### 1. Device classification
- How 5600F / 700F appear in `genesys_devices.c`
- What this implies for our reverse-engineering direction

### 2. GL847 acquisition path
- Key stages found in `genesys_gl847.c`
- Which stages look most relevant to lamp-on / non-zero read transition

### 3. CCD-specific clues from GL841
- What `genesys_gl841.c` suggests that might matter for a CCD GL847 model like 5600F

### 4. Comparison with our captures
- Which source-code concepts best match:
  - our all-zero bulk IN replay
  - the large 03 capture where lamp-on happens
  - the state transition before first non-zero bulk data

### 5. Smallest next code change to test
- exactly one tightly scoped recommendation
- no big refactor
- no GUI/API
- no uncontrolled replay expansion

## Constraints for Codex
- use these files as guidance, not as a copy source
- stay focused on pre-bulk state transition, lamp/light path, calibration, and CCD behavior
- do not broaden into runtime integration
- do not add many speculative branches
- separate facts from hypotheses

## Expected outcome
This reading pass should help answer:
- what state is probably still missing before useful preview pixels appear
- whether the missing piece is more likely lamp/light path, calibration/shading, or CCD-specific setup
- what is the next smallest experiment worth implementing
