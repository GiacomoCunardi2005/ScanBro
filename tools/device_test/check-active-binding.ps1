param(
    [string]$HardwareId = "USB\\VID_04A9&PID_1906",
    [string]$LibwdiInf = "C:\\Windows\\INF\\oem206.inf",
    [switch]$ForceLibwdi
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

function Test-IsAdmin {
    $identity = [Security.Principal.WindowsIdentity]::GetCurrent()
    $principal = [Security.Principal.WindowsPrincipal]::new($identity)
    return $principal.IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)
}

function Get-ScannerDevice([string]$devicePattern) {
    return Get-PnpDevice -PresentOnly |
        Where-Object { $_.InstanceId -like "*$devicePattern*" } |
        Select-Object -First 1
}

function Print-ScannerSummary([object]$device) {
    Write-Host "Scanner device summary:"
    Write-Host "  Status      : $($device.Status)"
    Write-Host "  Class       : $($device.Class)"
    Write-Host "  FriendlyName: $($device.FriendlyName)"
    Write-Host "  InstanceId  : $($device.InstanceId)"
    Write-Host "  Service     : $($device.Service)"
    Write-Host "  Manufacturer: $($device.Manufacturer)"
}

function Print-MatchingDrivers([string]$instanceId) {
    Write-Host ""
    Write-Host "Matching/installed drivers from pnputil:"
    pnputil /enum-devices /instanceid $instanceId /drivers
}

function Try-ForceLibwdi([string]$hwid, [string]$infPath) {
    $code = @'
using System;
using System.Runtime.InteropServices;
public static class DriverUpdate {
  [DllImport("newdev.dll", CharSet=CharSet.Unicode, SetLastError=true)]
  public static extern bool UpdateDriverForPlugAndPlayDevices(
    IntPtr hwndParent,
    string HardwareId,
    string FullInfPath,
    int InstallFlags,
    out bool bRebootRequired);
}
'@

    if (-not (Test-Path $infPath)) {
        throw "INF path not found: $infPath"
    }

    Add-Type -TypeDefinition $code -ErrorAction Stop | Out-Null
    $reboot = $false
    $ok = [DriverUpdate]::UpdateDriverForPlugAndPlayDevices(
        [IntPtr]::Zero,
        $hwid,
        $infPath,
        0x1,
        [ref]$reboot)
    $win32 = [Runtime.InteropServices.Marshal]::GetLastWin32Error()

    Write-Host ""
    Write-Host "Force libwdi result:"
    Write-Host "  ok      : $ok"
    Write-Host "  reboot  : $reboot"
    Write-Host "  win32   : $win32"
    if (-not $ok -and $win32 -eq 5) {
        Write-Host "  note    : access denied; run elevated PowerShell."
    }
}

$pattern = "VID_04A9&PID_1906"
$scanner = Get-ScannerDevice -devicePattern $pattern
if (-not $scanner) {
    Write-Error "Scanner not present for pattern $pattern."
    exit 2
}

Print-ScannerSummary -device $scanner
Print-MatchingDrivers -instanceId $scanner.InstanceId

$activeControlServices = @("WinUSB", "libusbK", "libusb0")
$isActiveBinding = $activeControlServices -contains $scanner.Service

Write-Host ""
if ($isActiveBinding) {
    Write-Host "Binding check: ACTIVE-CONTROL ready (service=$($scanner.Service))."
} else {
    Write-Host "Binding check: NOT ready for libusb active-control (service=$($scanner.Service))."
    Write-Host "Expected one of: $($activeControlServices -join ', ')"
}

if ($ForceLibwdi) {
    if (-not (Test-IsAdmin)) {
        Write-Host ""
        Write-Host "Force-libwdi requested but current shell is not elevated."
    }
    Try-ForceLibwdi -hwid $HardwareId -infPath $LibwdiInf
}

if ($isActiveBinding) {
    exit 0
}

exit 1
