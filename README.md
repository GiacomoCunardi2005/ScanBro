# ScanBro Roadmap

## Obiettivo

Creare un'app locale per Windows con GUI via browser che controlli il `Canon CanoScan 5600F` in modo piu` affidabile e piu` manuale del software Canon, con focus su negativi 35mm.

## Vincoli reali

- Il browser non puo` parlare direttamente con TWAIN/WIA in modo affidabile.
- Il programma dovra` quindi avere un backend nativo Windows che espone una UI web su `localhost`.
- Per il `5600F`, la strada piu` promettente e` riusare il driver Canon stabile tramite `TWAIN`.
- `WIA` puo` esistere come fallback per scansioni normali, ma per il film le funzioni interessanti potrebbero vivere solo nel driver Canon/ScanGear.
- Alcune funzioni del driver potrebbero non essere esposte come capability TWAIN standard e potrebbero esistere solo nella UI Canon. Questa e` la prima incognita tecnica da verificare.

## Scelta architetturale

### Backend

Stack consigliato:

- `C# / .NET 8` su Windows
- `ASP.NET Core` per API HTTP + WebSocket locali
- accesso scanner via `TWAIN`
- `WIA` solo come fallback secondario
- `SQLite` per preset, job history e metadati

Perche` C#:

- integrazione Windows migliore di Python per TWAIN/WIA
- gestione piu` semplice di processi, message loop, finestre native e packaging
- un solo eseguibile locale puo` ospitare sia API sia frontend statico

### Frontend

Stack consigliato:

- `TypeScript`
- `React + Vite`
- rendering locale servito dal backend

Funzioni UI previste:

- selezione scanner e stato connessione
- anteprima film/flatbed
- crop manuale per fotogramma
- settaggi avanzati
- preset salvabili
- batch scan di striscia negativa
- cronologia scansioni

### Architettura logica

1. `scanner-host`
   - parla con TWAIN/WIA
   - apre/chiude sessioni scanner
   - enumera capability
   - esegue preview e scan
   - isola gli errori del driver

2. `scan-api`
   - espone endpoint REST e WebSocket su `localhost`
   - traduce le richieste UI in comandi scanner
   - salva impostazioni, preset e job

3. `web-ui`
   - interfaccia operatore
   - preview immagine
   - regolazioni e workflow negativi

4. `image-pipeline`
   - salvataggio raw TIFF
   - inversione negativo
   - correzione colore
   - export JPEG/TIFF finale

## Strategia tecnica

### Principio 1

Prima otteniamo una scansione stabile e ripetibile. Solo dopo aggiungiamo elaborazione immagine avanzata.

### Principio 2

Non riscriviamo un driver. Usiamo il driver Canon finche` regge, e costruiamo sopra.

### Principio 3

Le operazioni di scansione vanno isolate. Se il driver si blocca, l'app deve poter resettare la sessione senza perdere la UI.

## Roadmap a fasi

## Fase 0 - Spike tecnico

Obiettivo:

capire esattamente cosa il driver Canon espone via TWAIN senza usare la UI Canon.

Deliverable:

- tool interno che:
  - enumera sorgenti TWAIN
  - apre il `5600F`
  - legge capability disponibili
  - salva un dump JSON
- verifica di queste aree:
  - selezione sorgente `film` vs `reflective`
  - `resolution`
  - `bit depth`
  - `pixel type`
  - area/crop
  - preview
  - scan finale
  - presenza o meno di capability custom Canon
  - supporto reale a `ShowUI = false`

Decisione di uscita:

- se `TWAIN` senza UI controlla abbastanza il film scanner, proseguiamo con backend custom
- se il driver espone troppo poco, valutiamo una modalita` ibrida:
  - configurazione tramite UI Canon
  - acquisizione batch e post-processing nella nostra app

## Fase 1 - Core scanner locale

Obiettivo:

costruire il motore stabile minimo.

Deliverable:

- servizio locale `scanner-host`
- apertura/chiusura sessione scanner
- endpoint:
  - `GET /api/scanners`
  - `POST /api/session/open`
  - `POST /api/session/close`
  - `GET /api/capabilities`
  - `POST /api/preview`
  - `POST /api/scan`
- salvataggio scansioni su disco
- log strutturato
- watchdog e timeout per sessioni bloccate

Accettazione:

- una preview riesce in modo stabile
- una scansione flatbed semplice riesce in modo stabile
- una scansione film semplice riesce in modo stabile

## Fase 2 - Web GUI MVP

Obiettivo:

avere una pagina web usabile al posto del software Canon per il flusso base.

Deliverable:

- dashboard con stato scanner
- schermata preview
- controlli:
  - source
  - mode
  - dpi
  - color mode
  - area/crop
  - output path
  - format
- viewer per preview
- error panel leggibile
- pulsanti:
  - preview
  - scan
  - reset session

Accettazione:

- l'utente riesce a fare preview e scan senza mai aprire la UI Canon

## Fase 3 - Workflow negativi

Obiettivo:

rendere il prodotto davvero utile sul `5600F` per negativi.

Deliverable:

- modalita` `negative strip`
- crop per frame
- naming automatico dei fotogrammi
- batch scan di tutti i frame selezionati
- preset:
  - colore 35mm
  - B/N 35mm
  - archivio TIFF raw
  - export web JPEG
- profili di lavoro:
  - raw scanner output
  - inversione automatica
  - inversione con regolazione manuale
- lock esposizione tra fotogrammi dello stesso rullo

Accettazione:

- un rullo da 6 fotogrammi puo` essere previsualizzato, ritagliato e scansionato come batch

## Fase 4 - Controlli avanzati

Obiettivo:

esporre piu` controllo del software Canon e dove serve superarlo in post-processing.

Funzioni da supportare se il driver le espone:

- `manual exposure`
- `high quality`
- `48-bit color`
- `16-bit grayscale`
- calibrazione film
- auto tone on/off
- multi-crop

Funzioni da implementare lato app se il driver non basta:

- inversione negativo custom
- curve RGB
- livelli
- white balance su punto neutro
- profili pellicola base
- export non distruttivo

Accettazione:

- l'utente puo` salvare preset avanzati e riapplicarli a un intero rullo

## Fase 5 - Stabilita` e recupero errori

Obiettivo:

gestire bene il fatto che i driver scanner sono spesso fragili.

Deliverable:

- processo separato per operazioni TWAIN
- recovery automatico in caso di errore
- heartbeat sessione
- retry controllati
- diagnostica con dump capability e ultimi comandi inviati
- pagina `Health` con:
  - driver trovato
  - ultimo errore
  - sessione attiva
  - ultimo preview/scan

Accettazione:

- in caso di blocco del driver la UI resta viva e puo` tentare un reset

## Fase 6 - Packaging

Obiettivo:

installazione semplice su una macchina Windows reale.

Deliverable:

- installer Windows
- avvio automatico backend locale
- apertura browser su `http://localhost:<porta>`
- directory standard per scansioni, preset e log
- pagina settings con:
  - cartelle
  - naming
  - formato output
  - comportamento post scan

## Funzioni non MVP

- OCR
- rete multiutente
- supporto macOS/Linux
- plugin cloud
- AI cleanup
- supporto multi-scanner
- reverse engineering USB del 5600F senza driver Canon

## Rischi principali

1. Il driver Canon potrebbe non esporre via TWAIN tutte le funzioni film che vedi nella UI ufficiale.
2. Alcune capability potrebbero essere `custom` e documentate male.
3. Il driver potrebbe richiedere un message loop o una finestra parent nativa per restare stabile.
4. Preview e scan potrebbero avere percorsi diversi nel driver.
5. Il recupero da crash potrebbe richiedere kill del worker process e riapertura completa della source.

## Sprint 1 consigliato

Durata: `2-4 giorni`

Obiettivo:

validare la fattibilita` tecnica prima di investire sulla GUI.

Task:

1. creare soluzione `.NET`
2. integrare libreria TWAIN o wrapper minimo
3. enumerare scanner disponibili
4. aprire il `5600F`
5. leggere e serializzare capability
6. provare `ShowUI = false`
7. fare una preview semplice
8. salvare una scansione TIFF
9. registrare errori e tempi

Uscita attesa:

- risposta chiara alla domanda: "possiamo controllare davvero il 5600F senza la UI Canon?"

## Sprint 2 consigliato

Durata: `3-5 giorni`

Obiettivo:

MVP locale con UI web minima.

Task:

1. API locale
2. pagina web con preview
3. settaggi principali
4. scan su disco
5. reset sessione
6. persistenza preset base

## Struttura repo proposta

```text
/src
  /ScanBro.ScannerHost
  /ScanBro.Api
  /ScanBro.Core
  /ScanBro.Web
/data
  /presets
  /logs
  /scans
/docs
  scanner-notes.md
  capability-dumps/
```

## Decisione raccomandata

La scelta giusta e`:

- `Windows-only`
- backend `C#/.NET`
- UI `web locale`
- `TWAIN` come via principale
- `WIA` solo come fallback
- prima uno spike tecnico sul driver Canon
- poi MVP preview/scan
- solo dopo workflow negativi avanzato

## Prossimo passo

Il prossimo passo corretto non e` la GUI.

Il prossimo passo corretto e` costruire il `driver spike` che dica con prove reali quali controlli il `5600F` concede via `TWAIN` senza aprire la UI Canon.
