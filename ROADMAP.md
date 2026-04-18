# ScanBro Roadmap

## Obiettivo

Costruire un'app locale Windows con GUI via browser per controllare il `Canon CanoScan 5600F`, con focus su negativi 35mm e controllo superiore al software Canon.

## Direzione principale (allineata al README)

La strategia primaria del progetto e`:

- backend locale `ASP.NET Core` + UI web
- controllo scanner tramite `driver USB custom` (native C/C++)
- comunicazione USB con `libusb-1.0` su filtro `libusb-win32`
- nessuna dipendenza operativa dalla UI Canon durante la scansione

Motivazione: pieno controllo hardware, pipeline custom e possibilita` di superare i limiti delle capability TWAIN standard.

## Vincoli e fallback

- Il browser non puo` dialogare direttamente con lo scanner: serve sempre backend locale.
- I driver scanner sono intrinsecamente fragili: va previsto isolamento processo + watchdog.
- Se lo spike USB non raggiunge i criteri minimi, si abilita percorso fallback:
  - acquisizione via `TWAIN` con driver Canon
  - mantenendo pipeline, API e UI ScanBro

## Architettura target

1. `web-ui` (frontend locale servito dal backend)
2. `scan-api` (`ASP.NET Core`, REST + websocket locali)
3. `usb-driver` (DLL nativa C/C++)
4. `usb-transport` (`libusb-1.0` + `libusb-win32`)
5. `image-pipeline` (raw TIFF, inversione negativo, correzioni, export)

## Roadmap a fasi

## Fase 0 - Technical Spike USB (corrente)

Obiettivo:

dimostrare una preview acquisita senza driver Canon in controllo attivo.

Deliverable:

- cattura traffico USB Canon (`USBPcap`/`Wireshark`) e documentazione protocollo
- sequenza minima implementata nel driver custom:
  - enumerate/open device
  - init sessione
  - controllo lampada/carrello
  - acquisizione riga/blocco
- dump tecnico dei comandi noti e risultati

Exit criteria:

- preview low-res salvata su disco con stack custom USB
- stabilita` minima su piu` run consecutivi

Decision gate:

- se lo spike e` positivo: proseguire su stack USB custom
- se negativo: fallback operativo su TWAIN mantenendo stessa API/UI

## Fase 1 - Core Scanner Engine

Obiettivo:

costruire un motore locale stabile per preview/scan.

Deliverable:

- session management robusto
- endpoint minimi:
  - `GET /api/health`
  - `GET /api/probe`
  - `POST /api/scan`
- timeout, watchdog e recovery
- salvataggio output e diagnostica

Accettazione:

- preview e scan base ripetibili
- errore gestito senza blocco definitivo UI

## Fase 2 - Web GUI MVP

Obiettivo:

interfaccia usabile per workflow base da browser locale.

Deliverable:

- dashboard stato scanner
- settaggi principali (`source`, `dpi`, `bit depth`, `color mode`, `format`, `transfer`)
- vista risultato scan e pannello errori
- reset sessione e rilancio probe

Accettazione:

- utente esegue probe + dry run + scan base senza software Canon

## Fase 3 - Workflow Negativi

Obiettivo:

workflow pratico per strisce negative 35mm.

Deliverable:

- modalita` negative strip
- crop per frame
- naming automatico fotogrammi
- batch scan
- preset (raw TIFF, colore, B/N, export web)

Accettazione:

- scansione batch completa di una striscia da 6 frame

## Fase 4 - Controlli Avanzati

Obiettivo:

controlli avanzati e qualita` archivio.

Deliverable:

- 48-bit color / 16-bit grayscale
- exposure lock tra frame
- inversione negativo custom
- curve/livelli/white balance
- profili pellicola base

## Fase 5 - Stabilita` e Recovery

Obiettivo:

resilienza contro freeze/crash driver.

Deliverable:

- isolamento processo scanner
- heartbeat
- retry controllati
- diagnostica avanzata (ultimi comandi, ultimo errore, stato sessione)

## Fase 6 - Packaging

Obiettivo:

installazione semplice su macchina Windows reale.

Deliverable:

- installer Windows
- configurazione cartelle output/log/preset
- apertura UI locale su `http://localhost:<porta>`
- avvio/stop servizi locali gestito

## Milestone indicative

- Q2: spike USB + primo preview
- Q3: engine stabile + GUI MVP
- Q4: workflow negativi + preset
- Q1 successivo: hardening, packaging, release candidate

## Rischi principali

1. Reverse engineering USB piu` complesso del previsto.
2. Qualita`/stabilita` non allineata al driver Canon in tempi brevi.
3. Recovery insufficiente in caso di stati hardware bloccati.
4. Gap di performance su scan ad alta risoluzione.

## Prossimo passo immediato

Completare il pacchetto di prove della Fase 0 (catture + comandi + preview ripetibile) e chiudere formalmente il decision gate USB vs fallback TWAIN.
