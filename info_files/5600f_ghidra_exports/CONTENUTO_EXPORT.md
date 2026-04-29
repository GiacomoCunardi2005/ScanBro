# Canon CanoScan 5600F - Ghidra exports / stato reverse engineering

Generato il 2026-04-29.

---

## Descrizione funzionale dei moduli

Queste descrizioni sono ipotesi operative basate su:

- riferimenti nel file `CNQ4808.INF`;
- nomi dei moduli;
- posizione nel pacchetto Canon;
- architettura WIA/TWAIN tipica per scanner Windows;
- dimensione e numero di funzioni/stringhe esportate da Ghidra.

Non vanno considerate certe finche non vengono confermate tramite stringhe, import, export, call graph e pseudo-C.

---

### `CNQ4808.INF`

File INF principale del driver.

Ruolo:

- definisce il dispositivo `USB\VID_04A9&PID_1906`;
- registra il dispositivo come classe `Image`;
- dichiara la parte WIA;
- dichiara la parte TWAIN;
- copia i moduli Canon nelle destinazioni corrette;
- registra CLSID/COM per il componente Canon USD/WIA.

Informazioni importanti gia estratte:

```text
Class=Image
ClassGUID={6bdd1fc6-810f-11d0-bec7-08002be2092f}
DriverVer=04/28/2017,14.0.7.48
USB\VID_04A9&PID_1906
TwainDS="CanoScan 5600F"
InstallDirectory="\TWAIN_32\CNQ4808\"
FriendlyName="WIA CanoScan 5600F"
```

## Obiettivo

Analisi statica del pacchetto driver Canon CanoScan 5600F per Windows, usando Ghidra da CLI.

Scopo operativo:

- capire la struttura WIA/TWAIN del driver;
- individuare i moduli principali;
- esportare assembly, funzioni, stringhe e pseudo-C;
- decidere quali DLL/DS analizzare per prime;
- evitare installazione o esecuzione del driver.

Non e presente un driver kernel Canon `.sys` nel pacchetto estratto. Il pacchetto usa moduli user-mode WIA/TWAIN.

## Panoramica

- Cartelle: 14
- File: 65
- Dimensione totale: ~41.06 MB
- Formato export: Ghidra (x86:LE:32:default, Windows)

## Struttura cartelle

- cisds.ds_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- cnq4808c.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- cnq4808i.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- cnq4808l.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- cnq4808o.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- cnq4808u.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- decompiled_c/
  - cisds.ds_decompiled.c
  - cnq4808c.dll_decompiled.c
  - cnq4808i.dll_decompiled.c
  - cnq4808l.dll_decompiled.c
  - cnq4808o.dll_decompiled.c
  - cnq4808u.dll_decompiled.c
  - iop.dll_decompiled.c
  - ipm.dll_decompiled.c
  - scanintf.dll_decompiled.c
  - sgcfltr.dll_decompiled.c
  - sgui.dll_decompiled.c
  - tpm.dll_decompiled.c
  - usip.dll_decompiled.c
- iop.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- ipm.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- scanintf.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- sgcfltr.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- sgui.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- tpm.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv
- usip.dll_x86_LE_32_default/
  - all_functions.asm
  - functions.tsv
  - metadata.txt
  - strings.tsv

## Significato dei tipi file

- `metadata.txt`: metadati base del modulo analizzato (nome programma, linguaggio, image base, range indirizzi).
- `functions.tsv`: indice funzioni con entrypoint, nome e range indirizzi.
- `strings.tsv`: stringhe estratte dal binario con indirizzo.
- `all_functions.asm`: disassembly completo in testo di tutte le funzioni.
- `decompiled_c/*.c`: decompilazione C-like completa del modulo.

## Dettaglio file per file

| File | Tipo contenuto | Dim. | Linee | Dettagli |
|---|---|---:|---:|---|
| cisds.ds_x86_LE_32_default/all_functions.asm | Disassembly completa | 523.24 KB | 18467 | blocchi funzione: 363 |
| cisds.ds_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 18.38 KB | 364 | funzioni: 363 |
| cisds.ds_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.13 KB | 6 | Program: cisds.ds; Language: x86:LE:32:default |
| cisds.ds_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 10.59 KB | 290 | stringhe: 289 |
| cnq4808c.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 1563.15 KB | 53198 | blocchi funzione: 729 |
| cnq4808c.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 35.47 KB | 730 | funzioni: 729 |
| cnq4808c.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.14 KB | 6 | Program: cnq4808c.dll; Language: x86:LE:32:default |
| cnq4808c.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 20.57 KB | 651 | stringhe: 650 |
| cnq4808i.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 569.48 KB | 19870 | blocchi funzione: 366 |
| cnq4808i.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 18.72 KB | 367 | funzioni: 366 |
| cnq4808i.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.14 KB | 6 | Program: cnq4808i.dll; Language: x86:LE:32:default |
| cnq4808i.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 8.79 KB | 289 | stringhe: 288 |
| cnq4808l.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 4076.12 KB | 120028 | blocchi funzione: 1090 |
| cnq4808l.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 54.19 KB | 1091 | funzioni: 1090 |
| cnq4808l.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.14 KB | 6 | Program: cnq4808l.dll; Language: x86:LE:32:default |
| cnq4808l.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 56.76 KB | 1426 | stringhe: 1425 |
| cnq4808o.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 1177.37 KB | 40528 | blocchi funzione: 1022 |
| cnq4808o.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 49.85 KB | 1023 | funzioni: 1022 |
| cnq4808o.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.14 KB | 6 | Program: cnq4808o.dll; Language: x86:LE:32:default |
| cnq4808o.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 18.8 KB | 563 | stringhe: 562 |
| cnq4808u.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 583.98 KB | 20143 | blocchi funzione: 392 |
| cnq4808u.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 19.66 KB | 393 | funzioni: 392 |
| cnq4808u.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.14 KB | 6 | Program: cnq4808u.dll; Language: x86:LE:32:default |
| cnq4808u.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 15.63 KB | 445 | stringhe: 444 |
| decompiled_c/cisds.ds_decompiled.c | Decompilazione C-like del modulo | 390.77 KB | 15442 | marker funzione: 363 |
| decompiled_c/cnq4808c.dll_decompiled.c | Decompilazione C-like del modulo | 1131.49 KB | 42508 | marker funzione: 729 |
| decompiled_c/cnq4808i.dll_decompiled.c | Decompilazione C-like del modulo | 422.57 KB | 16401 | marker funzione: 366 |
| decompiled_c/cnq4808l.dll_decompiled.c | Decompilazione C-like del modulo | 1735.65 KB | 56897 | marker funzione: 1088 |
| decompiled_c/cnq4808o.dll_decompiled.c | Decompilazione C-like del modulo | 994.38 KB | 38215 | marker funzione: 1022 |
| decompiled_c/cnq4808u.dll_decompiled.c | Decompilazione C-like del modulo | 438.36 KB | 16661 | marker funzione: 392 |
| decompiled_c/iop.dll_decompiled.c | Decompilazione C-like del modulo | 834.28 KB | 32059 | marker funzione: 735 |
| decompiled_c/ipm.dll_decompiled.c | Decompilazione C-like del modulo | 620.82 KB | 25619 | marker funzione: 600 |
| decompiled_c/scanintf.dll_decompiled.c | Decompilazione C-like del modulo | 675.02 KB | 26847 | marker funzione: 626 |
| decompiled_c/sgcfltr.dll_decompiled.c | Decompilazione C-like del modulo | 519.43 KB | 18988 | marker funzione: 351 |
| decompiled_c/sgui.dll_decompiled.c | Decompilazione C-like del modulo | 5409.47 KB | 210072 | marker funzione: 5562 |
| decompiled_c/tpm.dll_decompiled.c | Decompilazione C-like del modulo | 2331.11 KB | 83373 | marker funzione: 1634 |
| decompiled_c/usip.dll_decompiled.c | Decompilazione C-like del modulo | 964.89 KB | 31787 | marker funzione: 414 |
| iop.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 1140.07 KB | 39907 | blocchi funzione: 735 |
| iop.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 35.85 KB | 736 | funzioni: 735 |
| iop.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.13 KB | 6 | Program: iop.dll; Language: x86:LE:32:default |
| iop.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 21.43 KB | 610 | stringhe: 609 |
| ipm.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 976.58 KB | 35149 | blocchi funzione: 601 |
| ipm.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 28.79 KB | 602 | funzioni: 601 |
| ipm.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.13 KB | 6 | Program: ipm.dll; Language: x86:LE:32:default |
| ipm.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 17.54 KB | 512 | stringhe: 511 |
| scanintf.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 918.77 KB | 32524 | blocchi funzione: 626 |
| scanintf.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 30.63 KB | 627 | funzioni: 626 |
| scanintf.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.14 KB | 6 | Program: scanintf.dll; Language: x86:LE:32:default |
| scanintf.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 14.33 KB | 377 | stringhe: 376 |
| sgcfltr.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 633.75 KB | 21418 | blocchi funzione: 351 |
| sgcfltr.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 17.97 KB | 352 | funzioni: 351 |
| sgcfltr.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.14 KB | 6 | Program: sgcfltr.dll; Language: x86:LE:32:default |
| sgcfltr.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 9.84 KB | 235 | stringhe: 234 |
| sgui.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 7739.05 KB | 270799 | blocchi funzione: 5562 |
| sgui.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 265 KB | 5563 | funzioni: 5562 |
| sgui.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.13 KB | 6 | Program: sgui.dll; Language: x86:LE:32:default |
| sgui.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 54.41 KB | 1695 | stringhe: 1694 |
| tpm.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 3327.6 KB | 115980 | blocchi funzione: 1634 |
| tpm.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 78.89 KB | 1635 | funzioni: 1634 |
| tpm.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.13 KB | 6 | Program: tpm.dll; Language: x86:LE:32:default |
| tpm.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 52.85 KB | 1425 | stringhe: 1424 |
| usip.dll_x86_LE_32_default/all_functions.asm | Disassembly completa | 1363.5 KB | 46023 | blocchi funzione: 414 |
| usip.dll_x86_LE_32_default/functions.tsv | Tabella funzioni (entry, name, body) | 22.4 KB | 415 | funzioni: 414 |
| usip.dll_x86_LE_32_default/metadata.txt | Metadati Ghidra del binario | 0.13 KB | 6 | Program: usip.dll; Language: x86:LE:32:default |
| usip.dll_x86_LE_32_default/strings.tsv | Tabella stringhe (address, value) | 8.82 KB | 198 | stringhe: 197 |



Si. Aggiungi questa sezione nel file, subito dopo **"Struttura cartelle"** oppure dopo **"Significato dei tipi file"**.

```markdown
---

## Spiegazione delle cartelle esportate

Ogni cartella con suffisso:

```text
_x86_LE_32_default
```

indica che Ghidra ha analizzato quel modulo come binario Windows **x86 32-bit little-endian**.

Ogni cartella contiene normalmente:

```text
all_functions.asm   -> assembly completo esportato da Ghidra
functions.tsv       -> elenco funzioni con entrypoint e range
metadata.txt        -> metadati del modulo
strings.tsv         -> stringhe riconosciute nel binario
```

La cartella:

```text
decompiled_c/
```

contiene invece i file `.c` generati dal decompiler Ghidra, uno per modulo.

---

## `cisds.ds_x86_LE_32_default/`

Modulo TWAIN Data Source.

Questo e probabilmente uno dei file piu importanti dell'intero driver, perche `CISDS.DS` e il componente che una applicazione TWAIN a 32 bit puo caricare per parlare con lo scanner.

Ruolo probabile:

* entry point TWAIN;
* ponte tra applicazione TWAIN e moduli Canon;
* gestione apertura/chiusura sorgente scanner;
* negoziazione capability;
* gestione trasferimento immagine.

Da controllare prima:

```text
strings.tsv
functions.tsv
decompiled_c/cisds.ds_decompiled.c
```

Stringhe/funzioni da cercare:

```text
DS_Entry
DSM_Entry
TWAIN
DAT_CAPABILITY
DAT_IDENTITY
MSG_OPENDS
MSG_CLOSEDS
MSG_XFERREADY
DAT_IMAGENATIVEXFER
DAT_IMAGEINFO
```

Priorita: **molto alta**.

---

## `cnq4808c.dll_x86_LE_32_default/`

Modulo Canon principale legato al modello `CNQ4808`, cioe CanoScan 5600F.

E probabilmente il componente core lato WIA/Canon per questo scanner. Dal file INF risultano riferimenti a `CNQ4808C.DLL`, quindi questo modulo e centrale nella registrazione del dispositivo.

Ruolo probabile:

* componente WIA/Canon;
* gestione proprieta scanner;
* inizializzazione dispositivo;
* possibile ponte tra WIA e librerie interne Canon;
* gestione eventi o configurazione dispositivo.

Da controllare prima:

```text
strings.tsv
functions.tsv
decompiled_c/cnq4808c.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
WIA
STI
StillImage
CNQ4808
Canon
DeviceData
USB
VID_04A9
PID_1906
Button
Property
```

Priorita: **molto alta**.

---

## `cnq4808i.dll_x86_LE_32_default/`

Modulo secondario specifico del modello `CNQ4808`.

Il suffisso `i` potrebbe indicare informazioni, inizializzazione, interfaccia o gestione immagine, ma va verificato tramite stringhe e funzioni.

Ruolo probabile:

* supporto al modulo principale `cnq4808c.dll`;
* gestione dati o funzioni specifiche del modello;
* possibile componente di inizializzazione o proprieta immagine.

Da controllare:

```text
strings.tsv
decompiled_c/cnq4808i.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
Image
Init
Info
Device
CNQ4808
Property
```

Priorita: **media**.

---

## `cnq4808l.dll_x86_LE_32_default/`

Libreria grande specifica del modello `CNQ4808`.

E uno dei moduli piu importanti dopo `cnq4808c.dll`, perche contiene molte funzioni e molte stringhe. Potrebbe contenere logica condivisa usata sia dal lato WIA sia dal lato TWAIN.

Ruolo probabile:

* libreria core del modello;
* parametri dello scanner;
* routine di scansione;
* gestione configurazioni;
* supporto a calibrazione, risoluzione, colore e formati.

Da controllare:

```text
strings.tsv
functions.tsv
decompiled_c/cnq4808l.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
Resolution
DPI
Gamma
Color
Calibration
Lamp
Motor
Sensor
Flatbed
Film
Negative
Positive
CNQ4808
```

Priorita: **alta**.

---

## `cnq4808o.dll_x86_LE_32_default/`

Modulo di installazione/co-installer.

Dal file INF risulta collegato a:

```text
CoInstallers32
Coinstaller_EntryPoint
```

Quindi probabilmente non e il modulo principale per la scansione runtime, ma serve durante installazione, registrazione o rimozione del driver.

Ruolo probabile:

* co-installer;
* registrazione chiavi di registro;
* configurazione WIA/TWAIN;
* installazione/rimozione device;
* registrazione componenti COM.

Da controllare:

```text
strings.tsv
decompiled_c/cnq4808o.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
Coinstaller_EntryPoint
SetupDi
DIF_INSTALLDEVICE
DIF_REMOVE
RegCreateKey
RegSetValue
CoInstallers32
Install
Uninstall
```

Priorita: **bassa/media**.

---

## `cnq4808u.dll_x86_LE_32_default/`

Modulo Canon specifico del modello, probabilmente legato a USB/USD o al bridge tra componenti Canon.

Il suffisso `u` non va interpretato come certezza, ma e un buon candidato per cercare riferimenti a USB, device open/close e comunicazione con lo scanner.

Ruolo probabile:

* componente Canon specifico per CanoScan 5600F;
* possibile bridge con layer USB/I/O;
* possibile modulo collegato a Canon USD;
* supporto al flusso WIA/TWAIN.

Da controllare:

```text
strings.tsv
functions.tsv
decompiled_c/cnq4808u.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
USB
Canon USD
CNQ4808
Device
Open
Close
Read
Write
Command
CreateFile
DeviceIoControl
```

Priorita: **alta**.

---

## `iop.dll_x86_LE_32_default/`

Modulo probabilmente legato a I/O.

E uno dei candidati piu importanti se l'obiettivo e capire come il software comunica con lo scanner. Il nome `iop` suggerisce input/output o I/O processing.

Ruolo probabile:

* comunicazione con dispositivo;
* apertura handle;
* lettura/scrittura;
* invio comandi;
* gestione buffer e status.

Da controllare subito:

```text
strings.tsv
functions.tsv
decompiled_c/iop.dll_decompiled.c
```

Stringhe/funzioni/API da cercare:

```text
CreateFile
ReadFile
WriteFile
DeviceIoControl
CloseHandle
SetupDi
USB
Pipe
Endpoint
Command
Status
Buffer
```

Priorita: **molto alta**.

---

## `ipm.dll_x86_LE_32_default/`

Modulo probabilmente legato a image processing.

Il nome puo indicare "Image Processing Module" o qualcosa di simile. Va verificato, ma e plausibile che gestisca trasformazioni sui dati immagine acquisiti.

Ruolo probabile:

* elaborazione immagine;
* gestione buffer;
* correzione colore;
* gamma;
* conversioni formato;
* pipeline post-acquisizione.

Da controllare:

```text
strings.tsv
decompiled_c/ipm.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
Image
Process
Buffer
RGB
Gray
Gamma
Color
Filter
Line
Pixel
DPI
Resolution
```

Priorita: **media/alta**.

---

## `scanintf.dll_x86_LE_32_default/`

Modulo di interfaccia scansione.

Il nome e molto esplicito: probabilmente espone o implementa funzioni interne per avviare scansione, impostare parametri e gestire trasferimento dati.

Ruolo probabile:

* interfaccia interna di scansione;
* collegamento tra TWAIN/UI e moduli I/O;
* gestione parametri di scansione;
* gestione acquisizione e trasferimento immagine.

Da controllare subito:

```text
strings.tsv
functions.tsv
decompiled_c/scanintf.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
Scan
Start
Stop
Acquire
Transfer
ImageInfo
Resolution
Source
Flatbed
Preview
Cancel
```

Priorita: **molto alta**.

---

## `sgcfltr.dll_x86_LE_32_default/`

Probabile filtro ScanGear.

Il prefisso `sg` puo indicare ScanGear. `cfltr` sembra suggerire "Canon filter" o "color filter", ma va verificato.

Ruolo probabile:

* filtri immagine;
* correzione colore;
* post-processing;
* descreen;
* sharpening/unsharp mask;
* eventuali correzioni polvere/graffi.

Da controllare:

```text
strings.tsv
decompiled_c/sgcfltr.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
Filter
Color
Descreen
Unsharp
Mask
Dust
Scratch
Gamma
Correction
```

Priorita: **media**.

---

## `sgui.dll_x86_LE_32_default/`

Modulo UI di ScanGear.

E il modulo piu grande dell'export. Contiene moltissime funzioni, quindi probabilmente include finestre, dialoghi, risorse grafiche, testi UI e gestione dei controlli dell'interfaccia.

Ruolo probabile:

* interfaccia grafica ScanGear;
* gestione opzioni utente;
* dialoghi di scansione;
* preview;
* pulsanti e preferenze;
* mapping tra UI e funzioni interne.

Perche non analizzarlo per primo:

* e enorme;
* contiene molto codice UI;
* puo far perdere tempo se l'obiettivo e capire comunicazione scanner o protocollo.

Quando diventa utile:

* per capire quali opzioni espone il driver;
* per trovare testi/etichette;
* per collegare pulsanti UI a funzioni interne;
* per capire i parametri disponibili.

Da controllare:

```text
strings.tsv
decompiled_c/sgui.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
Preview
Scan
Cancel
Button
Resolution
Color Mode
Advanced
Preferences
Calibration
Lamp
Dialog
Window
```

Priorita: **bassa/media**.

---

## `tpm.dll_x86_LE_32_default/`

Modulo grande, probabilmente legato a pipeline, trasferimento o processing.

Il nome non e autoesplicativo, ma la dimensione e il numero di funzioni indicano un componente importante. Potrebbe contenere logica di gestione immagine, parametri TWAIN o trasferimento dati.

Ruolo probabile:

* pipeline di acquisizione;
* trasferimento dati;
* elaborazione immagine;
* gestione buffer;
* gestione capability/parametri;
* possibile supporto TWAIN interno.

Da controllare:

```text
strings.tsv
functions.tsv
decompiled_c/tpm.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
TWAIN
Transfer
Pipeline
Memory
Buffer
Image
Process
Capability
Resolution
Color
Gamma
Preview
```

Priorita: **media/alta**.

---

## `usip.dll_x86_LE_32_default/`

Modulo dal ruolo incerto, ma potenzialmente interessante.

Il nome puo suggerire USB, image processing o un layer interno Canon. Va classificato tramite stringhe, import e chiamate API.

Ruolo probabile:

* possibile layer USB;
* possibile image processing;
* possibile utility Canon;
* possibile comunicazione con device.

Diventa molto importante se contiene chiamate a:

```text
CreateFile
ReadFile
WriteFile
DeviceIoControl
SetupDi
```

Da controllare:

```text
strings.tsv
functions.tsv
decompiled_c/usip.dll_decompiled.c
```

Stringhe/funzioni da cercare:

```text
USB
Device
Command
Read
Write
Endpoint
Pipe
Image
Process
Buffer
```

Priorita: **media**, da rivalutare dopo ricerca API.

---

## `decompiled_c/`

Cartella con la decompilazione C-like esportata da Ghidra.

Contiene un file `.c` per ogni modulo:

```text
cisds.ds_decompiled.c
cnq4808c.dll_decompiled.c
cnq4808i.dll_decompiled.c
cnq4808l.dll_decompiled.c
cnq4808o.dll_decompiled.c
cnq4808u.dll_decompiled.c
iop.dll_decompiled.c
ipm.dll_decompiled.c
scanintf.dll_decompiled.c
sgcfltr.dll_decompiled.c
sgui.dll_decompiled.c
tpm.dll_decompiled.c
usip.dll_decompiled.c
```

Uso consigliato:

* non leggerli interamente dall'inizio alla fine;
* usare `Select-String` per cercare API, stringhe e funzioni;
* partire dai moduli ad alta priorita;
* confrontare pseudo-C con `functions.tsv` e `strings.tsv`.

Comando consigliato:

```powershell
Select-String -Path "C:\Users\giaco\Desktop\5600f_ghidra_exports\decompiled_c\*.c" `
    -Pattern "CreateFile|ReadFile|WriteFile|DeviceIoControl|SetupDi|TWAIN|WIA|USB|Scan|Acquire|Transfer|Calibration|Lamp|Button" |
    Select-Object Path,LineNumber,Line |
    Format-List
```

Priorita: **strumento trasversale**.

Questo completa la spiegazione di **ogni cartella** che si vede nello screenshot.
