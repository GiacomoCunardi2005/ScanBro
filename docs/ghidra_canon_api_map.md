# Canon 5600F - Mappa Ghidra per continuare il driver

Data: 2026-04-29

## 1) Cosa emerge da Ghidra (catena reale)

Catena chiamate osservata:

1. `tpm.dll` (livello alto ScanGear, `FG_Scanner::*`)
2. `scanintf.dll` (`ScannerInterface::*`)
3. `cnq4808c.dll` (dispatcher comandi + caricamento API Canon modello)
4. backend Canon caricato dinamicamente via `LoadLibraryW + GetProcAddress`

Quindi il flusso Canon non è “solo write raw registri”, ma passa da una macchina capability/API.

## 2) Punti chiave in `scanintf.dll`

- `ScannerInterface::GetCapabilityValue` usa comando `0x1038`  
  (`scanintf.dll_decompiled.c`, ~1900)
- `ScannerInterface::GetCapability` usa comando `0x1039`  
  (`scanintf.dll_decompiled.c`, ~1933)
- `ScannerInterface::SetCapability` usa comando `0x103A`  
  (`scanintf.dll_decompiled.c`, ~1979)
- Tabella capability inizializzata con `0x8431`  
  (`scanintf.dll_decompiled.c`, ~1022)

Nel path alto livello vengono usate spesso capability `0x8431`, `0x8420`, `0x8422`, `0x8432` (visto in `tpm.dll`).

## 3) Punti chiave in `cnq4808c.dll`

Il dispatcher interno (`FUN_10001370`) gestisce i comandi `0x1034..0x103C`.

Nello stesso modulo, la funzione di init (`FUN_10004250`) carica le API Canon reali:

- `FindScannerEx`
- `InitializeScanner`
- `TestScanner`
- `GetDataStatus`
- `GetScannerStatus`
- `SetScanParameter`
- `SetAGData`
- `GetAGData`
- `ReadScan`
- `InitialButton`
- `ReadPushButton`
- `DoCalibration`
- `GetCalibrationStatus`
- `GetCarriagePosition`
- `StartScanEx`
- `StopScanEx`
- `TerminateScanner`
- `GetScannerAbilitySize`
- `GetScannerAbilityXp`
- `SetLamp`
- `SetGamma`
- `GetCanonAPIVersionXP`
- `GetOPUMode`
- `GetLampStatus`
- `LockScanner`
- `UnlockScanner`
- `SetErrorToDevice`
- `GetCropStatus`
- `GetReadStatus`

Conclusione pratica: il driver Canon passa da questa API prima/insieme ai registri raw.

## 4) Test rifatto ora (scanner ricollegato)

Eseguito:

- binding check: `WinUSB` attivo
- `tools/device_test/build-x64/Debug/device_test.exe --preview-attempt-03`

Risultato:

- apertura/claim OK
- fallimento invariato a phase-1 gate
- stato finale stabile:
  - `0x0C22=0055`
  - `0x6B22=8755`
  - `0x0122=4055`
  - `0x0D22=0055`
  - `0x6C22=8355`
- nessuna transizione `0x6C22 -> f155/f055`
- `6cf0` resta non emesso nel run attuale (gating “capture-grounded”)
- output finale: `bytes saved before failure: 0`

Log canonico: `tools/device_test/logs/device_test.latest.log`

## 5) Cosa ci serve davvero per proseguire il nostro driver

Da questa analisi, il prossimo step corretto non è aggiungere write random, ma ricostruire il path capability/API Canon:

1. allineare il nostro stato a una sequenza equivalente a `LockScanner` + capability (`0x8431/0x8420/0x8422/0x8432`)
2. estrarre/replicare il flusso `GetScannerAbilityXp` / `SetAGData` / `SetScanParameter`
3. solo dopo rieseguire il gate `6cf0 -> 2647/4122/0122 -> 0140`

In breve: ci manca la parte di orchestrazione capability/API che prepara il cambio stato di `0x6C22`, non solo il singolo `write 6cf0`.
