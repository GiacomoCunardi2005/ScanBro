# ScanBro

**Professional film scanner software for Canon CanoScan 5600F**

A modern, web-based scanning application for Windows that gives you full control over your film scanning workflow without relying on Canon's official software.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows%2010%2F11-blue.svg)](https://www.microsoft.com/windows)
[![Scanner: Canon 5600F](https://img.shields.io/badge/Scanner-Canon%205600F-red.svg)](https://www.usa.canon.com/shop/p/canoscan-5600f)

---

## 🎯 Project Goal

Create a reliable, local Windows application with browser-based UI to control the **Canon CanoScan 5600F** scanner with better control than Canon's official software, specifically optimized for **35mm film negatives**.

## 🏗️ Architecture

ScanBro uses a **custom USB driver** approach via **libusb-win32** for complete hardware control:

```
┌─────────────────────────────────────────┐
│   Browser UI (React + TypeScript)      │
│   http://localhost:5094                 │
└──────────────┬──────────────────────────┘
               │ WebSocket + REST
┌──────────────▼──────────────────────────┐
│   Backend API (ASP.NET Core 8 / C#)    │
│   - Scanner control endpoints           │
│   - Image processing pipeline           │
│   - Job queue & presets (SQLite)       │
└──────────────┬──────────────────────────┘
               │ P/Invoke
┌──────────────▼──────────────────────────┐
│   Native USB Driver (C/C++ DLL)        │
│   - libusb-1.0 wrapper                  │
│   - Canon 5600F protocol                │
│   - Calibration engine                  │
└──────────────┬──────────────────────────┘
               │ USB bulk transfer
┌──────────────▼──────────────────────────┐
│   libusb-win32.sys (filter driver)     │
│   - Open source (LGPL/GPL)              │
│   - No digital signature required       │
│   - Installed via Zadig tool            │
└──────────────┬──────────────────────────┘
               │
          ┌────▼────┐
          │ 5600F   │
          │ Scanner │
          └─────────┘
```

## ✨ Features

### Current Status: **Phase 0 - Technical Spike** 🚧

- [x] Project architecture design
- [x] Technology stack selection
- [ ] USB protocol reverse engineering
- [ ] Basic device communication
- [ ] Calibration implementation
- [ ] Preview scan (low resolution)
- [ ] Full scan (high resolution)

### Planned Features

#### Phase 1 - Core Scanner Engine
- Stable scanner session management
- Preview & scan operations
- Basic flatbed scanning
- Film scanning (positive/negative)
- Error recovery & watchdog

#### Phase 2 - Web GUI MVP
- Browser-based control interface
- Live preview viewer
- Manual crop controls
- Resolution & color mode selection
- Session health monitoring

#### Phase 3 - Film Workflow
- Negative strip mode
- Per-frame cropping
- Batch scanning
- Automatic frame naming
- Preset management (color 35mm, B&W, archival)
- Exposure locking across frames

#### Phase 4 - Advanced Controls
- Manual exposure control
- 48-bit color / 16-bit grayscale
- Custom negative inversion
- RGB curves & levels
- White balance correction
- Film profile library

## 🔧 Technology Stack

| Component | Technology | License |
|-----------|-----------|---------|
| **Backend** | .NET 8 / ASP.NET Core | MIT |
| **Frontend** | React 18 + TypeScript + Vite | MIT |
| **USB Driver** | libusb-1.0 | LGPL 2.1 |
| **Windows Driver** | libusb-win32.sys | LGPL/GPL |
| **Database** | SQLite | Public Domain |
| **Image Processing** | ImageSharp | Apache 2.0 |

### Why This Stack?

- **No licensing costs** - 100% open source
- **No driver signing required** - libusb-win32 user-mode installation
- **Full hardware control** - Direct USB communication
- **Windows-native** - Optimized for Windows 10/11 64-bit
- **Modern UI** - Web technologies for responsive interface
- **Single deployment** - Backend serves both API and frontend

## 🚀 Getting Started

### Prerequisites

#### For Users
- **Windows 10/11** (64-bit)
- **Canon CanoScan 5600F** scanner
- **USB 2.0 port**
- Modern web browser (Chrome, Edge, Firefox)

#### For Developers
- [.NET 8 SDK](https://dotnet.microsoft.com/download/dotnet/8.0)
- [Visual Studio 2022 Community](https://visualstudio.microsoft.com/vs/community/) or VS Code
- [Node.js 20+](https://nodejs.org/) (for frontend development)
- [CMake 3.28+](https://cmake.org/download/)
- [Zadig 2.8](https://zadig.akeo.ie/) (for driver installation)

### Installation (Development)

#### 1. Install libusb-win32 Driver

**⚠️ WARNING:** This will replace the Canon driver. Backup first!

```batch
# 1. Download Zadig from https://zadig.akeo.ie/

# 2. Run Zadig as Administrator

# 3. Options → List All Devices

# 4. Select "CanoScan 5600F" from dropdown

# 5. Select "libusb-win32 (v1.x.x.x)" as target driver

# 6. Click "Replace Driver"

# 7. Wait for installation to complete
```

**To restore Canon driver:** Use Device Manager → Update Driver → Browse → Select Canon driver backup folder.

#### 2. Clone Repository

```bash
git clone https://github.com/YOUR_USERNAME/ScanBro.git
cd ScanBro
```

#### 3. Build Native Driver

```bash
cd src/ScanBro.UsbDriver

# Download libusb-1.0
curl -L https://github.com/libusb/libusb/releases/download/v1.0.27/libusb-1.0.27.7z -o libusb.7z
7z x libusb.7z -olibusb

# Build with CMake
mkdir build && cd build
cmake .. -G "Visual Studio 17 2022" -A x64
cmake --build . --config Release

# Output: ScanBro.UsbDriver.dll
```

#### 4. Build Backend

```bash
cd src/ScanBro.Api
dotnet restore
dotnet build
```

#### 5. Build Frontend

```bash
cd src/ScanBro.Web
npm install
npm run build
```

#### 6. Run Application

```bash
cd src/ScanBro.Api
dotnet run

# Backend starts on http://localhost:5094
# Open browser to http://localhost:5094
```

## 📁 Project Structure

```
ScanBro/
├── src/
│   ├── ScanBro.Api/                 # ASP.NET Core backend
│   │   ├── Controllers/             # REST API endpoints
│   │   ├── Hubs/                    # SignalR WebSocket hubs
│   │   └── Program.cs
│   │
│   ├── ScanBro.Core/                # Domain logic & interfaces
│   │   ├── Models/
│   │   │   ├── ScanParameters.cs
│   │   │   ├── ScanJob.cs
│   │   │   └── Preset.cs
│   │   └── Interfaces/
│   │       └── IScannerDriver.cs
│   │
│   ├── ScanBro.UsbDriver/           # Native C/C++ driver
│   │   ├── include/
│   │   │   ├── scanner_api.h        # Public C API
│   │   │   └── protocol.h           # USB protocol definitions
│   │   ├── src/
│   │   │   ├── scanner_impl.cpp     # Main implementation
│   │   │   ├── usb_transport.cpp    # libusb wrapper
│   │   │   ├── calibration.cpp      # White/black reference
│   │   │   └── image_acquisition.cpp
│   │   ├── libusb/                  # libusb-1.0 binaries
│   │   └── CMakeLists.txt
│   │
│   ├── ScanBro.UsbDriver.Wrapper/   # C# P/Invoke wrapper
│   │   ├── NativeMethods.cs
│   │   └── UsbScannerDriver.cs
│   │
│   ├── ScanBro.ImagePipeline/       # Image processing
│   │   ├── NegativeInversion.cs
│   │   ├── ColorCorrection.cs
│   │   └── TiffExporter.cs
│   │
│   └── ScanBro.Web/                 # React frontend
│       ├── src/
│       │   ├── components/
│       │   ├── hooks/
│       │   ├── api/
│       │   └── App.tsx
│       └── vite.config.ts
│
├── tools/
│   ├── protocol_analyzer/           # USB capture analysis scripts
│   ├── device_test/                 # Minimal libusb test program
│   └── calibration_helper/          # Manual calibration tool
│
├── docs/
│   ├── reverse_engineering/
│   │   ├── protocol_analysis.md     # USB protocol documentation
│   │   ├── command_reference.md     # Known commands list
│   │   └── usb_captures/            # Wireshark .pcapng files
│   ├── hardware/
│   │   └── 5600F_chipset_notes.md
│   └── api/
│       └── endpoints.md             # REST API documentation
│
├── data/                            # Runtime data (gitignored)
│   ├── presets/
│   ├── scans/
│   └── logs/
│
├── ROADMAP.md                       # Development roadmap
├── README.md                        # This file
└── LICENSE                          # MIT License
```

## 🛠️ Development Workflow

### Phase 0: Technical Spike (Current)

**Goal:** Prove we can control the 5600F via USB without Canon drivers.

**Tasks:**
1. ✅ Choose technology stack
2. 🚧 Setup development environment
3. 🚧 Reverse engineer USB protocol:
   - Capture Canon driver traffic with Wireshark + USBPcap
   - Document init sequence
   - Document lamp control
   - Document calibration process
   - Document scan commands
4. 🚧 Implement minimal driver:
   - Device enumeration
   - Open/close session
   - Send init sequence
   - Control lamp
   - Move carriage
   - Acquire single scan line
5. 🚧 Test & document findings

**Exit Criteria:** Successfully acquire a preview scan without Canon driver.

### Recommended Tools for USB Reverse Engineering

| Tool | Purpose | Link |
|------|---------|------|
| **Wireshark + USBPcap** | Capture USB traffic on Windows | [wireshark.org](https://www.wireshark.org/) |
| **Zadig** | Install libusb-win32 driver | [zadig.akeo.ie](https://zadig.akeo.ie/) |
| **USBlyzer** | Commercial USB analyzer (33-day trial) | [usblyzer.com](https://www.usblyzer.com/) |
| **libusb test tools** | Verify device access | Included in libusb package |
| **Device Manager** | Backup original drivers | Built-in Windows |

## 📚 Documentation

- [ROADMAP.md](ROADMAP.md) - Complete development roadmap
- [docs/reverse_engineering/protocol_analysis.md](docs/reverse_engineering/protocol_analysis.md) - USB protocol documentation (WIP)
- [docs/api/endpoints.md](docs/api/endpoints.md) - REST API reference (WIP)

## 🤝 Contributing

This project is currently in **Phase 0 (Technical Spike)**. Contributions are welcome once the core protocol is documented.

### How to Contribute

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

### Areas Needing Help

- 🔍 **USB Protocol Reverse Engineering** - Help capture and document Canon 5600F USB commands
- 🧪 **Hardware Testing** - Test with different 5600F firmware versions
- 📖 **Documentation** - Improve setup guides and API docs
- 🎨 **UI/UX Design** - Design mockups for web interface

## ⚠️ Disclaimer

**Important Legal & Technical Notices:**

- This software is **not affiliated with or endorsed by Canon Inc.**
- Using this software **replaces** the official Canon driver during operation
- The USB protocol has been **reverse engineered** and may not be 100% accurate
- **No warranty** is provided - use at your own risk
- Calibration quality may differ from official Canon software
- This is **experimental software** - expect bugs and incomplete features
- **Backup important scans** - do not rely on this as your only scanning solution

### Restoring Canon Driver

To switch back to Canon's official software:

1. Open **Device Manager**
2. Find **CanoScan 5600F** under "libusb-win32 devices" or "Universal Serial Bus devices"
3. Right-click → **Update driver**
4. Choose **Browse my computer for drivers**
5. Select Canon driver folder (typically `C:\Windows\System32\DriverStore\FileRepository\cnq5600*.inf`)
6. Complete driver installation
7. Restart scanning software

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

### Third-Party Licenses

- **libusb-1.0:** LGPL 2.1 - [libusb.info](https://libusb.info/)
- **libusb-win32:** LGPL/GPL - [sourceforge.net/projects/libusb-win32](https://sourceforge.net/projects/libusb-win32/)
- **.NET:** MIT - [dotnet.microsoft.com](https://dotnet.microsoft.com/)
- **React:** MIT - [react.dev](https://react.dev/)
- **ImageSharp:** Apache 2.0 - [sixlabors.com](https://sixlabors.com/products/imagesharp/)

## 🎯 Project Status

| Phase | Status | Completion |
|-------|--------|------------|
| Phase 0 - Technical Spike | 🚧 In Progress | 20% |
| Phase 1 - Core Scanner Engine | 📅 Planned | 0% |
| Phase 2 - Web GUI MVP | 📅 Planned | 0% |
| Phase 3 - Film Workflow | 📅 Planned | 0% |
| Phase 4 - Advanced Controls | 📅 Planned | 0% |
| Phase 5 - Stability & Recovery | 📅 Planned | 0% |
| Phase 6 - Packaging | 📅 Planned | 0% |

## 🗺️ Roadmap Highlights

### Q2 2024 - Foundation
- ✅ Architecture design
- 🚧 USB protocol reverse engineering
- 🚧 Basic device communication
- ⏳ First successful scan without Canon driver

### Q3 2024 - Core Features
- ⏳ Stable scanner engine
- ⏳ Web UI with preview
- ⏳ Flatbed scanning
- ⏳ Basic film scanning

### Q4 2024 - Film Workflow
- ⏳ Negative strip mode
- ⏳ Batch scanning
- ⏳ Preset management
- ⏳ Color correction

### 2025 - Polish & Release
- ⏳ Advanced controls
- ⏳ Stability improvements
- ⏳ Windows installer
- ⏳ v1.0 release

See [ROADMAP.md](ROADMAP.md) for complete details.

## 💡 FAQ

### Why build a custom driver instead of using TWAIN?

The official Canon TWAIN driver may not expose all film scanning capabilities programmatically. A custom driver gives us:
- Complete control over all hardware features
- Better error handling and recovery
- Ability to add features not in Canon software
- Learning opportunity for USB protocol reverse engineering

**Note:** If Phase 0 proves this approach too complex, we may fall back to a TWAIN-based solution.

### Will this work on macOS/Linux?

Currently **Windows-only**. The libusb layer is cross-platform, but:
- Backend uses .NET (cross-platform, but not tested)
- Some Windows-specific APIs are used
- macOS/Linux support is not on the roadmap for v1.0

### Can I use this with other Canon scanners?

**No.** This driver is **specifically reverse-engineered for the 5600F**. Other Canon scanners use different USB protocols and would require separate reverse engineering efforts.

### Is this legal?

**Yes.** Reverse engineering for interoperability is generally legal under:
- DMCA Section 1201(f) (US)
- EU Software Directive Article 6
- Similar provisions in other jurisdictions

This project does not:
- Redistribute Canon's proprietary software
- Bypass copy protection mechanisms
- Violate Canon's patents (reverse engineering != patent infringement)

**Disclaimer:** Not legal advice. Consult a lawyer if concerned.

### How can I help?

1. **Test hardware** - Verify USB captures on your 5600F
2. **Document protocol** - Help analyze Wireshark captures
3. **Report issues** - File bugs and feature requests
4. **Spread the word** - Star the repo, share with film photography communities

## 📞 Contact & Community

- **Issues:** [GitHub Issues](https://github.com/YOUR_USERNAME/ScanBro/issues)
- **Discussions:** [GitHub Discussions](https://github.com/YOUR_USERNAME/ScanBro/discussions)
- **Email:** your.email@example.com

## 🙏 Acknowledgments

- **libusb** team for excellent USB library
- **Canon** for manufacturing the 5600F (even if we're replacing their software 😄)
- **SANE project** for inspiration on scanner driver architecture
- Film photography community for motivation

---

**Built with ❤️ for film photographers who want control over their scanning workflow.**

**Status:** 🚧 **Experimental - Phase 0 in progress** 🚧
