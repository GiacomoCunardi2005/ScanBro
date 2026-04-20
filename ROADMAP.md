# ScanBro Roadmap

## Obiettivo

Costruire un'app locale Windows con GUI via browser per controllare Canon CanoScan 5600F, con focus su negativi 35mm e controllo operativo superiore al software Canon.

## Stato repository verificato (2026-04-19)

- `ScanBro.slnx` include oggi:
  - `src/ScanBro.Api` (`net10.0`)
  - `src/ScanBro.Contracts` (`netstandard2.0`)
  - `src/ScanBro.Scanner.Worker` (`net48`, `x86`, `NTwain`)
- Esiste un percorso USB spike separato:
  - `src/ScanBro.UsbDriver` (C/libusb)
  - `tools/device_test` (harness replay/probe)
- `global.json` pinna SDK `.NET` a `10.0.104`.
- La UI corrente e` statica (`src/ScanBro.Api/wwwroot`), non c'e` un progetto React nel solution attuale.

## Decisione architetturale principale

Direzione confermata:

- backend locale + UI browser
- separazione tra API/UI e backend scanner
- percorso primario verso controllo scanner custom via core USB user-space
- fallback operativo TWAIN mantenuto finche' il gate USB non e' chiuso positivamente

Chiarezza importante:

- `libusb-win32` e` una opzione di spike gia` usata nel repo, ma non e` una decisione definitiva di prodotto.
- decisione aperta da chiudere a gate: `WinUSB` vs `libusb-win32` (o altra opzione libusb-compatibile) su Windows.

## Distinzione esplicita

### Stato corrente (repo)

- App locale funzionante tramite worker TWAIN (`/api/probe`, `/api/scan`).
- Spike USB separato in Phase 0 con test harness e capture analysis.

### Architettura target

- UI browser + API locale + worker isolato con backend scanner sostituibile.
- Core protocollo USB del 5600F in user-space, con fallback TWAIN mantenuto.

### Assunzioni da spike (non ancora decisioni)

- binding/driver strategy Windows del percorso USB custom
- timing/state machine completa necessaria per preview custom stabile
- integrazione del percorso USB nel worker di produzione

## Roadmap a fasi

## Fase 0 - Technical Spike USB (corrente)

Obiettivo:

dimostrare preview low-res ripetibile con stack USB custom.

Deliverable:

- catture USB Canon + documentazione protocollo
- sequenza minima affidabile (init, transizioni stato, read trigger, bulk read)
- evidenza ripetibile di preview acquisita senza pipeline Canon attiva

Fatti gia` confermati:

- endpoint map e vendor transfer base sono documentati
- test harness `device_test` e` operativo
- ultimo profilo `--preview-attempt-03` resta bloccato su gate di transizione (`bytes saved before failure: 0`)

Exit criteria:

- preview low-res salvata con successo su run consecutivi
- errore e recovery osservabili e documentati

Decision gate:

- gate positivo -> integrazione progressiva USB custom nel path applicativo
- gate negativo -> percorso operativo TWAIN come fallback ufficiale (stessa API/UI)

## Fase 1 - Core Scanner Engine

- consolidare session management e watchdog
- mantenere endpoint minimi (`/api/health`, `/api/probe`, `/api/scan`)
- introdurre backend scanner pluggable (TWAIN e USB custom)

## Fase 2 - Web GUI MVP

- consolidare dashboard locale per stato scanner e scan request
- esecuzione probe/dry-run/scan da browser locale senza tool esterni

## Fase 3 - Workflow Negativi

- strip mode, crop per frame, batch naming, preset base

## Fase 4 - Controlli Avanzati

- 48-bit/16-bit, exposure lock, inversione e correzioni avanzate

## Fase 5 - Stabilita' e Recovery

- isolamento processo scanner, heartbeat, retry controllati, diagnostica estesa

## Fase 6 - Packaging

- installer Windows e setup locale standardizzato

## Rischi principali

1. reverse engineering USB piu` complesso del previsto
2. stato hardware non convergente nella finestra pre-preview
3. fragilita` driver stack durante switch tra path Canon e path custom
4. costo integrazione superiore al previsto per percorso USB production-grade

## Prossimo passo immediato

Chiudere il gap di stato della Fase 0 (transizione readiness/bulk) e formalizzare la decisione transport Windows con evidenza tecnica ripetibile.

## Aggiornamento documentazione

- 2026-04-19: documentazione riallineata al repository e al deep research report; separati stato corrente, target architecture e assunzioni di spike.
- 2026-04-19: refactor strutturale di `tools/device_test` completato (split di `main.c` in moduli `cli`, `usb_device`, `probe_modes` + entrypoint ridotto); log canonico invariato sul blocker Phase 0 (`0x6C22` resta `8355`, nessun `f155/f055`, `bytes saved before failure: 0`).
- 2026-04-19 (passo micro-window): fase-1 `preview-attempt-03` ora blocca `0140` finche' non convergono i controlli post-`6cf0`; evidenza locale ripetibile del nuovo blocker stretto: `2647` (`C0 01 ...`) in `LIBUSB_ERROR_PIPE (-9)` + `0x4122=4855` (atteso `c455`), con `0x6C22` fermo a `8355` e `bytes saved before failure: 0`.
- 2026-04-19 (passo trigger-legality): individuata divergenza di trigger locale nel micro-window (`6cf0` emesso anche con `0x6C22=8355`, fuori dal pattern catturato). Patch applicata: `6cf0` consentito solo con stato corrente `0x6C22=f155/f055` + logging esplicito `waiting for 6cf0` prima del gate post-`6cf0`. Run canonica aggiornata: nessun `2647/4122` post-`6cf0` tentato, `0140:no`, blocker esplicito invariato su transizione mancante `0x6C22:8355 -> f155/f055`, `bytes saved before failure: 0`.
- 2026-04-20 (passo direction+upstream): log verbose USB con direzione esplicita (`[OUT][PC->scanner]`, `[IN][scanner->PC]`). Esteso replay pre-`6cf0` e preamble (`1093..1173`, `1639..1647`) senza convergenza: `0x6C22` resta `8355`, nessun `f155/f055`, `6cf0` non eleggibile, `0140:no`, failure invariata a iteration cap con `bytes saved before failure: 0`.
- 2026-04-20 (passo upstream-gpio-profile): individuato gap concreto nel path locale pre-`6cf0`: ladder write GL847 (`6eff/6c00/6b02/6cf9/6d20/6eff/6f00`) definita ma non eseguita in fase-1. Patch applicata in `preview_attempt_phase1.c` con emissione esplicita della ladder e snapshot immediato `0x0B22/0x6B22/0x6C22`. Validazione hardware di questa patch non ancora disponibile nel log canonico corrente per blocco ambiente a `libusb_open` (`LIBUSB_ERROR_NOT_SUPPORTED`) prima della fase-1.
- 2026-04-20 (passo open-path-recovery): root cause dell'open failure confermato come stato driver Windows, non regressione fase-1: scanner su `usbscan`/`oem14.inf` (classe `Image`) con `oem206.inf` libwdi solo staged. Tentativi non distruttivi (`pnputil /add-driver ... /install`) non cambiano binding; tentativi force-rebind/restart falliscono senza elevazione (`Access denied`/SetupAPI). Aggiunto helper `tools/device_test/check-active-binding.ps1` per preflight binding e tentativo force-rebind in shell elevata.
