# ScanBro

App locale Windows per Canon CanoScan 5600F (UI browser + API locale + worker scanner).

## Decisione attuale (2026-04-29)

Per ora **non** proseguiamo con un driver USB custom di produzione: la complessita`/rischio del percorso e` troppo alto rispetto al valore immediato.

La base su cui lavoriamo adesso e` la seconda base piu` grezza ma operativa:

- pipeline `API -> worker TWAIN -> scanner Canon`
- UI web locale per probe e scan
- output file reale su disco

Il materiale USB (`src/ScanBro.UsbDriver`, `tools/device_test`, documentazione reverse engineering) resta nel repo come ricerca tecnica, non come percorso runtime principale.

## Cosa funziona oggi

- `src/ScanBro.Api` (`net10.0`): API locale + frontend statico (`wwwroot`).
- `src/ScanBro.Scanner.Worker` (`net48`, `x86`, `NTwain`): probe e scansione reale via driver Canon TWAIN.
- `src/ScanBro.Contracts` (`netstandard2.0`): contratti condivisi.
- endpoint disponibili:
  - `GET /api/health`
  - `GET /api/probe`
  - `POST /api/scan`

Comportamenti utili gia` implementati:

- lock operazioni scanner (evita probe/scan concorrenti)
- `dryRun` per validare setup senza acquisire immagine
- negoziazione transfer mode/file format (`Auto`, `File`, `Memory`)
- gestione output TIFF/BMP con fallback coerenti lato worker

## Scope attuale e non-scope

Scope attuale:

- rendere robusta la base TWAIN end-to-end
- migliorare affidabilita` operativa e UX locale

Non-scope attuale:

- integrazione del percorso USB custom nel runtime principale
- sviluppo di un driver proprietario per produzione

## Prerequisiti

Runtime:

- Windows 10/11
- Canon CanoScan 5600F
- driver Canon TWAIN installato e funzionante

Sviluppo:

- .NET SDK `10.0.104` (pinned in `global.json`)
- Visual Studio 2022 (o toolchain MSBuild equivalente)
- .NET Framework 4.8 targeting pack (necessario per `ScanBro.Scanner.Worker`)

## Avvio rapido

```powershell
dotnet restore ScanBro.slnx
dotnet build ScanBro.slnx
dotnet run --project src/ScanBro.Api
```

Apri `http://localhost:5094`.

## Esempio scan API

```powershell
$body = @{
  sourceName = "CanoScan 5600F"
  outputPath = "data/scans/scanbro-test"
  outputFileFormat = "Auto"
  transferMode = "Auto"
  resolutionDpi = 2400
  bitDepth = 48
  colorMode = "Color"
  timeoutSeconds = 180
  hideIndicators = $true
  dryRun = $true
} | ConvertTo-Json

Invoke-RestMethod -Method Post -Uri "http://localhost:5094/api/scan" -ContentType "application/json" -Body $body
```

## USB Spike (parcheggiato)

Percorso disponibile ma non prioritario:

- `src/ScanBro.UsbDriver`
- `tools/device_test`
- `docs/reverse_engineering/*`

Dettagli operativi: `tools/device_test/README.md`.

## Struttura repo (attuale)

```text
ScanBro/
|-- ScanBro.slnx
|-- src/
|   |-- ScanBro.Api/
|   |-- ScanBro.Contracts/
|   |-- ScanBro.Scanner.Worker/
|   `-- ScanBro.UsbDriver/
|-- tools/
|   `-- device_test/
|-- docs/
|   `-- reverse_engineering/
`-- ROADMAP.md
```
