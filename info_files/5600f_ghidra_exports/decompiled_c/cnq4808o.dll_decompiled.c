/* Function: FUN_10001000 @ 10001000 */

void __cdecl FUN_10001000(char *param_1,char *param_2)

{
  _strstr(param_1,param_2);
  return;
}



/**************************************************/

/* Function: FUN_10001020 @ 10001020 */

void __cdecl
FUN_10001020(HDEVINFO param_1,PSP_DEVINFO_DATA param_2,PSP_DRVINFO_DETAIL_DATA_A param_3,
            PUINT param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  _SP_DRVINFO_DATA_V2_A local_32c;
  uint local_c;
  HINF local_8;
  
  local_c = DAT_1002696c ^ (uint)&stack0xfffffffc;
  local_32c.cbSize = 0x31c;
  BVar1 = SetupDiGetSelectedDriverA(param_1,param_2,&local_32c);
  if (BVar1 != 0) {
    param_3->cbSize = 0x31d;
    BVar1 = SetupDiGetDriverInfoDetailA(param_1,param_2,&local_32c,param_3,0x31d,(PDWORD)0x0);
    if ((BVar1 != 0) || (DVar2 = GetLastError(), DVar2 == 0x7a)) {
      local_8 = SetupOpenInfFileA(param_3->InfFileName,(PCSTR)0x0,2,param_4);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_100010d0 @ 100010d0 */

void __cdecl
FUN_100010d0(HINF param_1,HDEVINFO param_2,PSP_DEVINFO_DATA param_3,PSTR param_4,uint param_5,
            uint *param_6)

{
  BOOL BVar1;
  DWORD DVar2;
  size_t sVar3;
  SIZE_T dwBytes;
  HANDLE pvVar4;
  CHAR *_Src;
  char *pcVar5;
  _SP_DRVINFO_DATA_V2_A local_654;
  DWORD local_330;
  _SP_DRVINFO_DETAIL_DATA_A local_32c;
  uint local_c;
  char *local_8;
  
  local_c = DAT_1002696c ^ (uint)&stack0xfffffffc;
  local_330 = 0;
  local_8 = (char *)0x0;
  if ((param_2 == (HDEVINFO)0xffffffff) || (param_3 == (PSP_DEVINFO_DATA)0x0)) {
    SetLastError(0x57);
  }
  else {
    if (param_6 != (uint *)0x0) {
      *param_6 = 0;
    }
    local_654.cbSize = 0x31c;
    BVar1 = SetupDiGetSelectedDriverA(param_2,param_3,&local_654);
    if (BVar1 == 0) {
      SetLastError(6);
    }
    else {
      local_32c.cbSize = 0x31d;
      BVar1 = SetupDiGetDriverInfoDetailA(param_2,param_3,&local_654,&local_32c,0x31d,(PDWORD)0x0);
      if ((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0x7a)) {
        SetLastError(6);
      }
      else {
        sVar3 = _strlen(local_32c.SectionName);
        dwBytes = sVar3 + 1;
        DVar2 = 8;
        pvVar4 = GetProcessHeap();
        local_8 = HeapAlloc(pvVar4,DVar2,dwBytes);
        _Src = local_32c.SectionName;
        sVar3 = _strlen(local_32c.SectionName);
        _strcpy_s(local_8,sVar3 + 1,_Src);
        BVar1 = SetupDiGetActualSectionToInstallA
                          (param_1,local_8,(PSTR)0x0,0,&local_330,(PSTR *)0x0);
        if ((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0x7a)) {
          DVar2 = 0;
          pcVar5 = local_8;
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,DVar2,pcVar5);
          local_8 = (char *)0x0;
        }
        else if (param_5 < local_330) {
          if (param_6 != (uint *)0x0) {
            *param_6 = local_330;
          }
          DVar2 = 0;
          pcVar5 = local_8;
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,DVar2,pcVar5);
          local_8 = (char *)0x0;
          SetLastError(0x7a);
        }
        else if (param_4 == (PSTR)0x0) {
          DVar2 = 0;
          pcVar5 = local_8;
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,DVar2,pcVar5);
          local_8 = (char *)0x0;
          SetLastError(0x57);
        }
        else {
          BVar1 = SetupDiGetActualSectionToInstallA
                            (param_1,local_8,param_4,param_5,(PDWORD)0x0,(PSTR *)0x0);
          if (BVar1 == 0) {
            DVar2 = 0;
            pcVar5 = local_8;
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,DVar2,pcVar5);
            local_8 = (char *)0x0;
          }
          else {
            DVar2 = 0;
            pcVar5 = local_8;
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,DVar2,pcVar5);
            local_8 = (char *)0x0;
            if (param_6 != (uint *)0x0) {
              *param_6 = 0;
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_10001330 @ 10001330 */

undefined4 __cdecl FUN_10001330(HDEVINFO param_1,PSP_DEVINFO_DATA param_2,BYTE *param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  LSTATUS LVar5;
  size_t cbData;
  DWORD dwFlags;
  PBYTE pBVar6;
  HKEY local_18;
  DWORD local_14;
  HKEY local_10;
  DWORD local_c;
  PBYTE local_8;
  
  local_10 = (HKEY)0x0;
  local_18 = (HKEY)0x0;
  local_8 = (PBYTE)0x0;
  local_c = 0;
  local_14 = 0;
  SetLastError(0);
  if (param_3 == (BYTE *)0x0) {
    SetLastError(0x57);
    uVar1 = 0;
  }
  else {
    BVar2 = SetupDiGetDeviceRegistryPropertyA(param_1,param_2,9,&local_c,(PBYTE)0x0,0,&local_14);
    if ((BVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0x7a)) {
      return 0;
    }
    if (local_14 == 0) {
      SetLastError(0x7a);
      uVar1 = 0;
    }
    else {
      dwFlags = 8;
      DVar3 = local_14;
      pvVar4 = GetProcessHeap();
      local_8 = HeapAlloc(pvVar4,dwFlags,DVar3);
      if (local_8 == (PBYTE)0x0) {
        uVar1 = 0;
      }
      else {
        BVar2 = SetupDiGetDeviceRegistryPropertyA
                          (param_1,param_2,9,&local_c,local_8,local_14,(PDWORD)0x0);
        if (BVar2 == 0) {
          uVar1 = 0;
        }
        else {
          local_10 = SetupDiOpenClassRegKey((GUID *)0x0,0x20019);
          if (local_10 == (HKEY)0xffffffff) {
            uVar1 = 0;
          }
          else {
            LVar5 = RegOpenKeyA(local_10,(LPCSTR)local_8,&local_18);
            if (LVar5 == 0) {
              cbData = _strlen((char *)param_3);
              LVar5 = RegSetValueExA(local_18,"FriendlyName",0,1,param_3,cbData);
              if (LVar5 == 0) {
                RegCloseKey(local_18);
                local_18 = (HKEY)0x0;
                RegCloseKey(local_10);
                local_10 = (HKEY)0x0;
                DVar3 = 0;
                pBVar6 = local_8;
                pvVar4 = GetProcessHeap();
                HeapFree(pvVar4,DVar3,pBVar6);
                uVar1 = 1;
              }
              else {
                RegCloseKey(local_18);
                local_18 = (HKEY)0x0;
                RegCloseKey(local_10);
                local_10 = (HKEY)0x0;
                DVar3 = 0;
                pBVar6 = local_8;
                pvVar4 = GetProcessHeap();
                HeapFree(pvVar4,DVar3,pBVar6);
                uVar1 = 0;
              }
            }
            else {
              RegCloseKey(local_10);
              uVar1 = 0;
            }
          }
        }
      }
    }
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_10001510 @ 10001510 */

bool __cdecl FUN_10001510(HDEVINFO param_1,PSP_DEVINFO_DATA param_2)

{
  BOOL BVar1;
  _SP_CLASSINSTALL_HEADER local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18.cbSize = 8;
  local_18.InstallFunction = 0x12;
  local_c = 1;
  local_10 = 3;
  local_8 = 0;
  SetupDiSetClassInstallParamsA(param_1,param_2,&local_18,0x14);
  BVar1 = SetupDiCallClassInstaller(0x12,param_1,param_2);
  return BVar1 != 0;
}



/**************************************************/

/* Function: FUN_10001570 @ 10001570 */

void __cdecl FUN_10001570(int param_1,int *param_2)

{
  LPCOLESTR lpWideCharStr;
  int iVar1;
  char local_480 [20];
  int local_46c;
  char local_468 [60];
  char *local_42c;
  int local_428;
  CHAR local_424 [260];
  DWORD local_320;
  CHAR local_31c [260];
  int local_218;
  char local_214;
  undefined1 local_213 [255];
  char *local_114;
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  local_214 = '\0';
  _memset(local_213,0,0xff);
  local_42c = _malloc(0x100);
  lpWideCharStr = _malloc(0x100);
  _memset(local_424,0,0x100);
  GetPrivateProfileStringA
            ("Models","%CNC.DeviceDesc%","NONE",local_424,0x100,(LPCSTR)(param_1 + 0x118));
  iVar1 = _strcmp(local_424,"NONE");
  if (iVar1 == 0) {
    GetPrivateProfileStringA
              ("Models.NTx86.5.1","%CNC.DeviceDesc%","NONE",local_424,0x100,
               (LPCSTR)(param_1 + 0x118));
    iVar1 = _strcmp(local_424,"NONE");
    if (iVar1 == 0) {
      GetPrivateProfileStringA
                ("Models.NTamd64.5.1","%CNC.DeviceDesc%","NONE",local_424,0x100,
                 (LPCSTR)(param_1 + 0x118));
      iVar1 = _strcmp(local_424,"NONE");
      if (iVar1 == 0) {
        _free(local_42c);
        _free(lpWideCharStr);
        goto LAB_10001a3c;
      }
    }
  }
  __strupr_s(local_424,0x100);
  local_114 = (char *)FUN_10001000(local_424,"VID_");
  _strncpy_s(&local_214,0x100,local_114,0x11);
  _strcpy_s((char *)(param_2 + 0x41),0x100,&local_214);
  _memset(local_424,0,0x100);
  _strcpy_s(local_468,0x3c,"PushButtonPushed");
  local_218 = 0;
  while( true ) {
    local_218 = local_218 + 1;
    _memset(local_468,0,0x3c);
    _memset(local_42c,0,0x100);
    _memset(lpWideCharStr,0,0x100);
    _memset(local_10c,0,0x100);
    _strcpy_s(local_468,0x3c,"PushButtonPushed");
    __itoa_s(local_218,local_480,0x14,10);
    _strcat_s(local_468,0x3c,local_480);
    local_320 = GetPrivateProfileStringA
                          ("PushButton.Events_XP",local_468,"NONE",local_424,0x100,
                           (LPCSTR)(param_1 + 0x118));
    iVar1 = _strcmp(local_424,"NONE");
    if (iVar1 == 0) break;
    for (local_110 = 0; local_424[local_110] != ','; local_110 = local_110 + 1) {
    }
    local_46c = 0;
    for (local_110 = local_110 + 1; local_424[local_110] != ','; local_110 = local_110 + 1) {
      local_10c[local_46c] = local_424[local_110];
      local_46c = local_46c + 1;
    }
    local_10c[local_46c] = '\0';
    _strcpy_s(local_42c,0x100,local_10c);
    MultiByteToWideChar(0,0,local_42c,-1,lpWideCharStr,0x200);
    CLSIDFromString(lpWideCharStr,(LPCLSID)(param_2 + (local_218 + -1) * 4 + 0x81));
    if ((local_320 == 0xfe) || (local_320 == 0)) break;
  }
  local_428 = local_218 + -1;
  *param_2 = local_428;
  _memset(local_424,0,0x100);
  GetPrivateProfileStringA("Strings","ButtonApp","NONE",local_31c,0x100,(LPCSTR)(param_1 + 0x118));
  iVar1 = _strcmp(local_424,"NONE");
  if (iVar1 != 0) {
    _strcpy_s((char *)(param_2 + 1),0x100,local_31c);
    _free(local_42c);
    _free(lpWideCharStr);
  }
LAB_10001a3c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: Coinstaller_EntryPoint @ 10001a50 */

void Coinstaller_EntryPoint(int param_1,HDEVINFO param_2,PSP_DEVINFO_DATA param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  undefined3 extraout_var;
  _INFCONTEXT local_794;
  BYTE local_784 [268];
  HINF local_678;
  int local_674 [210];
  _SP_DRVINFO_DETAIL_DATA_A local_32c;
  uint local_8;
  
                    /* 0x1a50  1  Coinstaller_EntryPoint */
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  local_32c.cbSize = 0;
  _memset(&local_32c.InfDate,0,0x319);
  if ((param_1 == 2) && (*param_4 != 0)) {
    local_678 = (HINF)0xffffffff;
    FUN_10003260();
    local_678 = (HINF)FUN_10001020(param_2,param_3,&local_32c,(PUINT)0x0);
    if (local_678 == (HINF)0xffffffff) {
      GetLastError();
    }
    else {
      iVar2 = FUN_100010d0(local_678,param_2,param_3,(PSTR)local_784,0x104,(uint *)0x0);
      if (((iVar2 != 0) &&
          (BVar3 = SetupFindFirstLineA(local_678,(PCSTR)local_784,"FriendlyName",&local_794),
          BVar3 != 0)) &&
         (BVar3 = SetupGetStringFieldA(&local_794,1,(PSTR)local_784,0x104,(PDWORD)0x0), BVar3 != 0))
      {
        SetupCloseInfFile(local_678);
        local_678 = (HINF)0xffffffff;
        FUN_10001330(param_2,param_3,local_784);
        bVar1 = FUN_10001510(param_2,param_3);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          GetLastError();
        }
        else {
          FUN_100031d0();
          FUN_10001570((int)&local_32c,local_674);
          FUN_10001f90(local_674);
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_10001c30 @ 10001c30 */

undefined4 __cdecl FUN_10001c30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 0x50:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  case 0xc:
    FUN_100035fd();
    break;
  case 0x16:
  case 0x22:
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  return param_1;
}



/**************************************************/

/* Function: AtlMultiply<> @ 10001ce0 */

/* Library Function - Multiple Matches With Same Base Name
    long __cdecl ATL::AtlMultiply<unsigned int>(unsigned int *,unsigned int,unsigned int)
    long __cdecl ATL::AtlMultiply<unsigned long>(unsigned long *,unsigned long,unsigned long)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

undefined4 __cdecl AtlMultiply<>(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = (int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20);
  if (local_8 == 0) {
    local_c = (undefined4)((ulonglong)param_2 * (ulonglong)param_3);
    *param_1 = local_c;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80070057;
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_10001d20 @ 10001d20 */

void FUN_10001d20(void)

{
  (*(code *)PTR__AtlGetThreadACPThunk_10027d50)();
  return;
}



/**************************************************/

/* Function: FUN_10001d30 @ 10001d30 */

void FUN_10001d30(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x8007000e) {
    FUN_100035fd();
  }
  else {
    FUN_10003851(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10001d50 @ 10001d50 */

undefined4 * __fastcall FUN_10001d50(undefined4 *param_1)

{
  *param_1 = CMyWia::vftable;
  param_1[1] = 0;
  CoInitialize((LPVOID)0x0);
  return param_1;
}



/**************************************************/

/* Function: FUN_10001d80 @ 10001d80 */

CDocObjectServer * __thiscall FUN_10001d80(void *this,uint param_1)

{
  FUN_10001db0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10001db0 @ 10001db0 */

void __fastcall FUN_10001db0(CDocObjectServer *param_1)

{
  *(undefined ***)param_1 = CMyWia::vftable;
  CDocObjectServer::ReleaseDocSite(param_1);
  CoUninitialize();
  return;
}



/**************************************************/

/* Function: ReleaseDocSite @ 10001de0 */

/* Library Function - Single Match
    public: void __thiscall CDocObjectServer::ReleaseDocSite(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void __thiscall CDocObjectServer::ReleaseDocSite(CDocObjectServer *this)

{
  if (*(int *)(this + 4) != 0) {
    (**(code **)(**(int **)(this + 4) + 8))(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}



/**************************************************/

/* Function: FUN_10001e20 @ 10001e20 */

HRESULT __fastcall FUN_10001e20(CDocObjectServer *param_1)

{
  HRESULT HVar1;
  
  CDocObjectServer::ReleaseDocSite(param_1);
  HVar1 = CoCreateInstance((IID *)&DAT_1001e488,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_1001e498,
                           (LPVOID *)(param_1 + 4));
  return HVar1;
}



/**************************************************/

/* Function: FUN_10001e60 @ 10001e60 */

undefined4 __thiscall
FUN_10001e60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)((int)this + 4) + 0x20))
                    (*(undefined4 *)((int)this + 4),param_1,param_7,param_2,param_3,param_4,param_5,
                     param_6,this,0);
  return uVar1;
}



/**************************************************/

/* Function: FUN_10001eb0 @ 10001eb0 */

undefined4 __cdecl FUN_10001eb0(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)AtlMultiply<>(&local_8,param_1,param_2);
  if ((int)puVar1 < 0) {
    FUN_10001d30(puVar1);
  }
  return local_8;
}



/**************************************************/

/* Function: FUN_10001ef0 @ 10001ef0 */

int __fastcall FUN_10001ef0(int param_1)

{
  return param_1 + 0x10;
}



/**************************************************/

/* Function: IsLocked @ 10001f10 */

/* Library Function - Single Match
    public: bool __thiscall ATL::CStringData::IsLocked(void)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

bool __thiscall ATL::CStringData::IsLocked(CStringData *this)

{
  return *(int *)(this + 0xc) < 0;
}



/**************************************************/

/* Function: IsShared @ 10001f30 */

/* Library Function - Single Match
    public: bool __thiscall ATL::CStringData::IsShared(void)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

bool __thiscall ATL::CStringData::IsShared(CStringData *this)

{
  return 1 < *(int *)(this + 0xc);
}



/**************************************************/

/* Function: FUN_10001f50 @ 10001f50 */

void __fastcall FUN_10001f50(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 3;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(*(int *)*param_1 + 4))(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10001f90 @ 10001f90 */

void __cdecl FUN_10001f90(int *param_1)

{
  LSTATUS LVar1;
  char *pcVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD local_108 [2];
  PBYTE local_100;
  DWORD local_fc [3];
  int *local_f0;
  wchar_t *local_ec;
  wchar_t *local_e8;
  errno_t local_e4;
  HKEY local_e0;
  PFILETIME local_dc;
  _SP_DEVINFO_DATA local_d8;
  uint local_bc;
  void *local_b8;
  int local_b4;
  HKEY local_b0;
  int local_ac;
  char *local_a8;
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> local_a4 [4];
  undefined4 local_a0;
  LPSTR local_9c;
  int local_98;
  char *local_94;
  undefined4 local_90;
  HDEVINFO local_8c;
  LPSTR local_88;
  LPBYTE local_84;
  HRESULT local_80;
  char *local_7c;
  char *local_78;
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> local_74 [4];
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> local_70 [4];
  wchar_t *local_6c;
  DWORD local_68 [3];
  LPBYTE local_5c;
  DWORD local_58;
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> local_54 [4];
  wchar_t *local_50;
  DWORD local_4c;
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> local_48 [4];
  CDocObjectServer local_44 [8];
  HKEY local_3c;
  undefined4 local_38;
  LPBYTE local_34;
  void *local_30;
  undefined4 local_2c;
  HKEY local_28;
  LPBYTE local_24;
  undefined4 local_20;
  DWORD local_1c;
  wchar_t *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001d853;
  local_10 = ExceptionList;
  local_bc = DAT_1002696c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10001d50((undefined4 *)local_44);
  local_8 = 0;
  local_b0 = (HKEY)0x0;
  local_3c = (HKEY)0x0;
  local_e0 = (HKEY)0x0;
  local_28 = (HKEY)0x0;
  local_f0 = (int *)0x0;
  local_80 = 0;
  local_90 = 0;
  local_38 = 0;
  local_a0 = 0;
  local_8c = (HDEVINFO)0x0;
  local_dc = (PFILETIME)0x0;
  local_68[1] = 0;
  local_d8.cbSize = 0;
  local_d8.ClassGuid.Data1 = 0;
  local_d8.ClassGuid.Data2 = 0;
  local_d8.ClassGuid.Data3 = 0;
  local_d8.ClassGuid.Data4[0] = '\0';
  local_d8.ClassGuid.Data4[1] = '\0';
  local_d8.ClassGuid.Data4[2] = '\0';
  local_d8.ClassGuid.Data4[3] = '\0';
  local_d8.ClassGuid.Data4[4] = '\0';
  local_d8.ClassGuid.Data4[5] = '\0';
  local_d8.ClassGuid.Data4[6] = '\0';
  local_d8.ClassGuid.Data4[7] = '\0';
  local_d8.DevInst = 0;
  local_d8.Reserved = 0;
  local_ac = 0;
  local_88 = (LPSTR)0x0;
  local_9c = (LPSTR)0x0;
  local_7c = (char *)0x0;
  local_a8 = (char *)0x0;
  local_84 = (LPBYTE)0x0;
  local_34 = (LPBYTE)0x0;
  local_24 = (LPBYTE)0x0;
  local_5c = (LPBYTE)0x0;
  local_b8 = (void *)0x0;
  local_30 = (void *)0x0;
  local_78 = (char *)0x0;
  local_14 = 0;
  local_20 = 0;
  local_68[0] = 0;
  local_1c = 0;
  local_4c = 0;
  local_58 = 0;
  local_98 = 0;
  local_68[2] = 0;
  local_2c = 0;
  CStringT<>(local_54);
  local_8._0_1_ = 1;
  CStringT<>(local_74);
  local_8._0_1_ = 2;
  CStringT<>(local_70);
  local_8._0_1_ = 3;
  CStringT<>(local_a4);
  local_8._0_1_ = 4;
  CStringT<>(local_48);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_6c = (wchar_t *)0x0;
  local_ec = (wchar_t *)0x0;
  local_18 = (wchar_t *)0x0;
  local_50 = (wchar_t *)0x0;
  local_e8 = (wchar_t *)0x0;
  local_94 = "sti.dll";
  local_88 = _malloc(0x200);
  local_9c = _malloc(0x200);
  local_b8 = _malloc(0x200);
  local_30 = _malloc(0x200);
  local_78 = _malloc(0x200);
  local_7c = _malloc(0x200);
  local_84 = _malloc(0x200);
  local_34 = _malloc(0x200);
  local_24 = _malloc(0x200);
  local_5c = _malloc(0x200);
  local_a8 = _malloc(0x200);
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,
                        "SYSTEM\\CurrentControlSet\\Control\\StillImage\\Events\\STIProxyEvent",0,
                        0xf003f,&local_b0);
  if (LVar1 != 0) {
LAB_10002990:
    if ((local_3c != (HKEY)0x0) && (LVar1 = RegCloseKey(local_3c), LVar1 == 0)) {
      local_3c = (HKEY)0x0;
    }
    if ((local_e0 != (HKEY)0x0) && (LVar1 = RegCloseKey(local_e0), LVar1 == 0)) {
      local_e0 = (HKEY)0x0;
    }
    if ((local_b0 != (HKEY)0x0) && (LVar1 = RegCloseKey(local_b0), LVar1 == 0)) {
      local_b0 = (HKEY)0x0;
    }
    if (local_88 != (LPSTR)0x0) {
      _free(local_88);
    }
    if (local_9c != (LPSTR)0x0) {
      _free(local_9c);
    }
    if (local_b8 != (void *)0x0) {
      _free(local_b8);
    }
    if (local_30 != (void *)0x0) {
      _free(local_30);
    }
    if (local_78 != (char *)0x0) {
      _free(local_78);
    }
    if (local_7c != (char *)0x0) {
      _free(local_7c);
    }
    if (local_84 != (LPBYTE)0x0) {
      _free(local_84);
    }
    if (local_34 != (LPBYTE)0x0) {
      _free(local_34);
    }
    if (local_24 != (LPBYTE)0x0) {
      _free(local_24);
    }
    if (local_5c != (LPBYTE)0x0) {
      _free(local_5c);
    }
    if (local_a8 != (char *)0x0) {
      _free(local_a8);
    }
    local_8._0_1_ = 4;
    FUN_10002b70((int *)local_48);
    local_8._0_1_ = 3;
    FUN_10002b70((int *)local_a4);
    local_8._0_1_ = 2;
    FUN_10002b70((int *)local_70);
    local_8._0_1_ = 1;
    FUN_10002b70((int *)local_74);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10002b70((int *)local_54);
    local_8 = 0xffffffff;
    FUN_10001db0(local_44);
    ExceptionList = local_10;
    __security_check_cookie(local_bc ^ (uint)&stack0xfffffffc);
    return;
  }
  local_fc[2] = 0x100;
  local_fc[1] = 0x100;
  local_4c = 0;
  do {
    LVar1 = RegEnumKeyExA(local_b0,local_4c,local_88,local_fc + 2,(LPDWORD)0x0,local_9c,local_fc + 1
                          ,local_dc);
    if ((LVar1 != 0) || (LVar1 = RegOpenKeyExA(local_b0,local_88,0,0xf003f,&local_e0), LVar1 != 0))
    goto LAB_10002990;
    _strcpy_s(local_7c,0x200,local_88);
    local_68[0] = 0x100;
    local_1c = 1;
    LVar1 = RegQueryValueExA(local_e0,"Desc",(LPDWORD)0x0,&local_1c,local_34,local_68);
    if (LVar1 == 0) {
      pcVar2 = _strstr((char *)local_34,(char *)(param_1 + 1));
      if (pcVar2 == (char *)0x0) {
        local_fc[2] = 0x100;
        local_fc[1] = 0x100;
      }
      else {
        local_68[0] = 0x100;
        local_1c = 1;
        RegQueryValueExA(local_e0,"Cmdline",(LPDWORD)0x0,&local_1c,local_84,local_68);
        local_68[0] = 0x100;
        local_1c = 1;
        RegQueryValueExA(local_e0,"Icon",(LPDWORD)0x0,&local_1c,local_24,local_68);
        local_68[0] = 0x100;
        local_1c = 1;
        RegQueryValueExA(local_e0,"Name",(LPDWORD)0x0,&local_1c,local_5c,local_68);
        if ((local_e0 != (HKEY)0x0) && (LVar1 = RegCloseKey(local_e0), LVar1 == 0)) {
          local_e0 = (HKEY)0x0;
        }
        local_8c = SetupDiGetClassDevsA((GUID *)&DAT_1001f528,(PCSTR)0x0,(HWND)0x0,0x10);
        if (local_8c == (HDEVINFO)0xffffffff) goto LAB_10002990;
        local_d8.cbSize = 0x1c;
        local_58 = 0;
        while (BVar3 = SetupDiEnumDeviceInfo(local_8c,local_58,&local_d8), BVar3 != 0) {
          local_100 = (PBYTE)0x0;
          local_fc[0] = 0;
          local_108[1] = 0;
          local_108[0] = 0x100;
          local_100 = _malloc(0x100);
          while ((BVar3 = SetupDiGetDeviceRegistryPropertyA
                                    (local_8c,&local_d8,1,local_fc,local_100,local_108[0],local_108)
                 , BVar3 == 0 && (DVar4 = GetLastError(), DVar4 == 0x7a))) {
            if (local_100 != (PBYTE)0x0) {
              _free(local_100);
            }
            local_100 = _malloc(local_108[0]);
          }
          if (local_100 != (PBYTE)0x0) {
            local_e4 = __strlwr_s((char *)local_100,0x100);
            local_e4 = __strlwr_s((char *)(param_1 + 0x41),0x100);
            local_b4 = FUN_10001000((char *)local_100,(char *)(param_1 + 0x41));
            if (local_b4 != 0) {
              local_ac = 1;
              local_108[0] = 0x100;
              while ((BVar3 = SetupDiGetDeviceRegistryPropertyA
                                        (local_8c,&local_d8,9,local_fc,local_100,local_108[0],
                                         local_108), BVar3 == 0 &&
                     (DVar4 = GetLastError(), DVar4 == 0x7a))) {
                if (local_100 != (PBYTE)0x0) {
                  _free(local_100);
                }
                local_100 = _malloc(local_108[0]);
              }
              if ((local_100 != (PBYTE)0x0) &&
                 (_strcpy_s(local_a8,0x200,(char *)local_100), local_ac != 0)) {
                _strcpy_s(local_78,0x200,"SYSTEM\\CurrentControlSet\\Control\\Class");
                _strcat_s(local_78,0x200,"\\");
                _strcat_s(local_78,0x200,local_a8);
                LVar1 = RegOpenKeyExA((HKEY)0x80000002,local_78,0,0xf003f,&local_28);
                if (LVar1 == 0) {
                  local_68[0] = 0x100;
                  local_1c = 1;
                  _memset(local_100,0,local_108[0]);
                  LVar1 = RegQueryValueExA(local_28,"CreateFileName",(LPDWORD)0x0,&local_1c,
                                           local_100,local_68);
                  if (LVar1 == 0) {
                    if (*local_100 == '\0') {
                      local_68[0] = 0x100;
                      local_1c = 1;
                    }
                    else {
                      SetupDiDestroyDeviceInfoList(local_8c);
                      if ((local_3c != (HKEY)0x0) && (LVar1 = RegCloseKey(local_3c), LVar1 == 0)) {
                        local_3c = (HKEY)0x0;
                      }
                      if ((local_e0 != (HKEY)0x0) && (LVar1 = RegCloseKey(local_e0), LVar1 == 0)) {
                        local_e0 = (HKEY)0x0;
                      }
                      if ((local_b0 != (HKEY)0x0) && (LVar1 = RegCloseKey(local_b0), LVar1 == 0)) {
                        local_b0 = (HKEY)0x0;
                      }
                      MultiByteToWideChar(0,0,local_a8,-1,(LPWSTR)local_a8,0x100);
                      FUN_10002b90(local_48,local_a8);
                      local_e8 = ATL::
                                 CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
                                 ::AllocSysString(local_48);
                      MultiByteToWideChar(0,0,(LPCSTR)local_84,-1,(LPWSTR)local_84,0x100);
                      FUN_10002b90(local_54,(char *)local_84);
                      local_6c = ATL::
                                 CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
                                 ::AllocSysString(local_54);
                      MultiByteToWideChar(0,0,(LPCSTR)local_5c,-1,(LPWSTR)local_5c,0x100);
                      FUN_10002b90(local_74,(char *)local_5c);
                      local_ec = ATL::
                                 CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
                                 ::AllocSysString(local_74);
                      MultiByteToWideChar(0,0,(LPCSTR)local_34,-1,(LPWSTR)local_34,0x100);
                      FUN_10002b90(local_70,(char *)local_34);
                      local_18 = ATL::
                                 CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
                                 ::AllocSysString(local_70);
                      MultiByteToWideChar(0,0,(LPCSTR)local_24,-1,(LPWSTR)local_24,0x100);
                      FUN_10002b90(local_a4,(char *)local_24);
                      local_50 = ATL::
                                 CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
                                 ::AllocSysString(local_a4);
                      local_80 = FUN_10001e20(local_44);
                      if (-1 < local_80) {
                        for (local_98 = 1; local_98 <= *param_1; local_98 = local_98 + 1) {
                          local_f0 = param_1 + (local_98 + -1) * 4 + 0x81;
                          local_80 = FUN_10001e60(local_44,1,local_f0,local_6c,local_ec,local_18,
                                                  local_50,local_e8);
                          if ((-1 < local_80) && (local_98 == *param_1)) goto LAB_10002990;
                        }
                      }
                    }
                  }
                  else {
                    local_68[0] = 0x100;
                    local_1c = 1;
                  }
                }
              }
            }
          }
          local_58 = local_58 + 1;
        }
        SetupDiDestroyDeviceInfoList(local_8c);
      }
    }
    local_4c = local_4c + 1;
  } while( true );
}



/**************************************************/

/* Function: CStringT<> @ 10002b50 */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >(void)
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void * __fastcall CStringT<>(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10002e50();
  FUN_10002c40(param_1,piVar1);
  return param_1;
}



/**************************************************/

/* Function: FUN_10002b70 @ 10002b70 */

void __fastcall FUN_10002b70(int *param_1)

{
  ~CSimpleStringT<>(param_1);
  return;
}



/**************************************************/

/* Function: FUN_10002b90 @ 10002b90 */

void * __thiscall FUN_10002b90(void *this,char *param_1)

{
  FUN_10002cb0(this,param_1);
  return this;
}



/**************************************************/

/* Function: AllocSysString @ 10002bb0 */

/* Library Function - Single Match
    public: wchar_t * __thiscall ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >::AllocSysString(void)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

wchar_t * __thiscall
ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::AllocSysString
          (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this)

{
  int iVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  
  iVar1 = FUN_10002c10((int *)this);
  pcVar2 = (char *)FUN_10002c30((undefined4 *)this);
  pwVar3 = ChTraitsCRT<char>::AllocSysString(pcVar2,iVar1);
  if (pwVar3 == (wchar_t *)0x0) {
    FUN_10002d80();
  }
  return pwVar3;
}



/**************************************************/

/* Function: FUN_10002bf0 @ 10002bf0 */

void __thiscall FUN_10002bf0(void *this,int param_1)

{
  ATL::CSimpleStringT<char,0>::PrepareWrite(this,param_1);
  return;
}



/**************************************************/

/* Function: FUN_10002c10 @ 10002c10 */

undefined4 __fastcall FUN_10002c10(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10002d90(param_1);
  return *(undefined4 *)(iVar1 + 4);
}



/**************************************************/

/* Function: FUN_10002c30 @ 10002c30 */

undefined4 __fastcall FUN_10002c30(undefined4 *param_1)

{
  return *param_1;
}



/**************************************************/

/* Function: FUN_10002c40 @ 10002c40 */

void * __thiscall FUN_10002c40(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_10001d30((undefined4 *)0x80004005);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  FUN_10002fa0(this,iVar1);
  return this;
}



/**************************************************/

/* Function: ~CSimpleStringT<> @ 10002c90 */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall ATL::CSimpleStringT<char,0>::~CSimpleStringT<char,0>(void)
    public: __thiscall ATL::CSimpleStringT<wchar_t,0>::~CSimpleStringT<wchar_t,0>(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __fastcall ~CSimpleStringT<>(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10002d90(param_1);
  FUN_10001f50(puVar1);
  return;
}



/**************************************************/

/* Function: FUN_10002cb0 @ 10002cb0 */

CSimpleStringT<char,0> * __thiscall FUN_10002cb0(void *this,char *param_1)

{
  ATL::CSimpleStringT<char,0>::SetString(this,param_1);
  return this;
}



/**************************************************/

/* Function: Empty @ 10002cd0 */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall ATL::CSimpleStringT<char,0>::Empty(void)
    public: void __thiscall ATL::CSimpleStringT<wchar_t,0>::Empty(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void __fastcall Empty(int *param_1)

{
  int *piVar1;
  bool bVar2;
  CStringData *this;
  int iVar3;
  
  this = (CStringData *)FUN_10002d90(param_1);
  piVar1 = *(int **)this;
  if (*(int *)(this + 4) != 0) {
    bVar2 = ATL::CStringData::IsLocked(this);
    if (bVar2) {
      FUN_10002e00(param_1,0);
    }
    else {
      FUN_10001f50((undefined4 *)this);
      iVar3 = (**(code **)(*piVar1 + 0xc))();
      FUN_10002fa0(param_1,iVar3);
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_10002d40 @ 10002d40 */

void __thiscall FUN_10002d40(void *this,int param_1)

{
  FUN_10002e00(this,param_1);
  return;
}



/**************************************************/

/* Function: StringLength @ 10002d60 */

/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl ATL::CSimpleStringT<char,0>::StringLength(char const *)
    public: static int __cdecl ATL::CSimpleStringT<wchar_t,0>::StringLength(wchar_t const *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

size_t __cdecl StringLength(char *param_1)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = _strlen(param_1);
  }
  return sVar1;
}



/**************************************************/

/* Function: FUN_10002d80 @ 10002d80 */

void FUN_10002d80(void)

{
  FUN_10001d30((undefined4 *)0x8007000e);
  return;
}



/**************************************************/

/* Function: FUN_10002d90 @ 10002d90 */

int __fastcall FUN_10002d90(int *param_1)

{
  return *param_1 + -0x10;
}



/**************************************************/

/* Function: PrepareWrite @ 10002db0 */

/* Library Function - Single Match
    private: char * __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite(int)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

char * __thiscall
ATL::CSimpleStringT<char,0>::PrepareWrite(CSimpleStringT<char,0> *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10002d90((int *)this);
  if ((int)(1U - *(int *)(iVar1 + 0xc) | *(int *)(iVar1 + 8) - param_1) < 0) {
    PrepareWrite2(this,param_1);
  }
  return *(char **)this;
}



/**************************************************/

/* Function: FUN_10002e00 @ 10002e00 */

void __thiscall FUN_10002e00(void *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = FUN_10002d90(this);
    if (param_1 <= *(int *)(iVar1 + 8)) goto LAB_10002e27;
  }
  FUN_10001d30((undefined4 *)0x80070057);
LAB_10002e27:
  iVar1 = FUN_10002d90(this);
  *(int *)(iVar1 + 4) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}



/**************************************************/

/* Function: FUN_10002e50 @ 10002e50 */

void FUN_10002e50(void)

{
  FUN_10003a84();
  return;
}



/**************************************************/

/* Function: AllocSysString @ 10002e60 */

/* Library Function - Single Match
    public: static wchar_t * __cdecl ATL::ChTraitsCRT<char>::AllocSysString(char const *,int)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

wchar_t * __cdecl ATL::ChTraitsCRT<char>::AllocSysString(char *param_1,int param_2)

{
  UINT UVar1;
  BSTR pOVar2;
  UINT CodePage;
  DWORD DVar3;
  char *lpMultiByteStr;
  int cbMultiByte;
  LPWSTR lpWideCharStr;
  BSTR lpWideCharStr_00;
  int cchWideChar;
  
  cchWideChar = 0;
  lpWideCharStr = (LPWSTR)0x0;
  DVar3 = 0;
  lpMultiByteStr = param_1;
  cbMultiByte = param_2;
  UVar1 = FUN_10001d20();
  UVar1 = MultiByteToWideChar(UVar1,DVar3,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar);
  pOVar2 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
  if (pOVar2 != (BSTR)0x0) {
    DVar3 = 0;
    lpWideCharStr_00 = pOVar2;
    CodePage = FUN_10001d20();
    MultiByteToWideChar(CodePage,DVar3,param_1,param_2,lpWideCharStr_00,UVar1);
  }
  return pOVar2;
}



/**************************************************/

/* Function: SetString @ 10002ec0 */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<char,0>::SetString(char const *)
   
   Library: Visual Studio 2005 Debug */

void __thiscall ATL::CSimpleStringT<char,0>::SetString(CSimpleStringT<char,0> *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = StringLength(param_1);
  SetString(this,param_1,sVar1);
  return;
}



/**************************************************/

/* Function: SetString @ 10002ef0 */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<char,0>::SetString(char const *,int)
   
   Library: Visual Studio 2005 Debug */

void __thiscall
ATL::CSimpleStringT<char,0>::SetString(CSimpleStringT<char,0> *this,char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    Empty((int *)this);
  }
  else {
    if (param_1 == (char *)0x0) {
      FUN_10001d30((undefined4 *)0x80070057);
    }
    uVar1 = FUN_10002c10((int *)this);
    iVar2 = FUN_10002c30((undefined4 *)this);
    pcVar3 = (char *)FUN_10002bf0(this,param_2);
    if (uVar1 < (uint)((int)param_1 - iVar2)) {
      CopyCharsOverlapped(pcVar3,param_2,param_1,param_2);
    }
    else {
      CopyCharsOverlapped(pcVar3,param_2,pcVar3 + ((int)param_1 - iVar2),param_2);
    }
    FUN_10002d40(this,param_2);
  }
  return;
}



/**************************************************/

/* Function: FUN_10002fa0 @ 10002fa0 */

void __thiscall FUN_10002fa0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001ef0(param_1);
  *(int *)this = iVar1;
  return;
}



/**************************************************/

/* Function: PrepareWrite2 @ 10002fc0 */

/* Library Function - Single Match
    private: void __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite2(int)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite2(CSimpleStringT<char,0> *this,int param_1)

{
  bool bVar1;
  CStringData *this_00;
  int local_c;
  
  this_00 = (CStringData *)FUN_10002d90((int *)this);
  if (param_1 < *(int *)(this_00 + 4)) {
    param_1 = *(int *)(this_00 + 4);
  }
  bVar1 = CStringData::IsShared(this_00);
  if (bVar1) {
    Fork(this,param_1);
  }
  else if (*(int *)(this_00 + 8) < param_1) {
    local_c = *(int *)(this_00 + 8);
    if (local_c < 0x401) {
      local_c = local_c << 1;
    }
    else {
      local_c = local_c + 0x400;
    }
    if (local_c < param_1) {
      local_c = param_1;
    }
    FUN_10003160(this,local_c);
  }
  return;
}



/**************************************************/

/* Function: CopyCharsOverlapped @ 10003060 */

/* Library Function - Single Match
    public: static void __cdecl ATL::CSimpleStringT<char,0>::CopyCharsOverlapped(char *,unsigned
   int,char const *,int)
   
   Library: Visual Studio 2005 Debug */

void __cdecl
ATL::CSimpleStringT<char,0>::CopyCharsOverlapped
          (char *param_1,uint param_2,char *param_3,int param_4)

{
  _memcpy_s(param_1,param_2,param_3,param_4);
  return;
}



/**************************************************/

/* Function: CopyCharsOverlapped @ 10003080 */

/* Library Function - Single Match
    public: static void __cdecl ATL::CSimpleStringT<char,0>::CopyCharsOverlapped(char *,unsigned
   int,char const *,int)
   
   Library: Visual Studio 2005 Debug */

void __cdecl
ATL::CSimpleStringT<char,0>::CopyCharsOverlapped
          (char *param_1,uint param_2,char *param_3,int param_4)

{
  _memmove_s(param_1,param_2,param_3,param_4);
  return;
}



/**************************************************/

/* Function: Fork @ 100030a0 */

/* Library Function - Single Match
    private: void __thiscall ATL::CSimpleStringT<char,0>::Fork(int)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void __thiscall ATL::CSimpleStringT<char,0>::Fork(CSimpleStringT<char,0> *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int local_20;
  
  puVar2 = (undefined4 *)FUN_10002d90((int *)this);
  iVar1 = puVar2[1];
  puVar3 = (undefined4 *)(**(code **)(*(int *)*puVar2 + 0x10))();
  iVar4 = (**(code **)*puVar3)(param_1,1);
  if (iVar4 == 0) {
    FUN_10002d80();
  }
  local_20 = iVar1;
  if (param_1 <= iVar1) {
    local_20 = param_1;
  }
  uVar5 = local_20 + 1;
  uVar8 = uVar5;
  pcVar6 = (char *)FUN_10001ef0((int)puVar2);
  pcVar7 = (char *)FUN_10001ef0(iVar4);
  CopyCharsOverlapped(pcVar7,uVar5,pcVar6,uVar8);
  *(int *)(iVar4 + 4) = iVar1;
  FUN_10001f50(puVar2);
  FUN_10002fa0(this,iVar4);
  return;
}



/**************************************************/

/* Function: FUN_10003160 @ 10003160 */

void __thiscall FUN_10003160(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_10002d90(this);
  if (((int)puVar1[2] < param_1) && (0 < param_1)) {
    iVar2 = (**(code **)(*(int *)*puVar1 + 8))(puVar1,param_1,1);
    if (iVar2 == 0) {
      FUN_10002d80();
    }
    FUN_10002fa0(this,iVar2);
  }
  else {
    FUN_10002d80();
  }
  return;
}



/**************************************************/

/* Function: FUN_100031d0 @ 100031d0 */

bool FUN_100031d0(void)

{
  SC_HANDLE hService;
  DWORD DVar1;
  byte local_5;
  
  local_5 = 0;
  hService = FUN_10003350('\0');
  if (hService != (SC_HANDLE)0x0) {
    StartServiceA(hService,0,(LPCSTR *)0x0);
    CloseServiceHandle(hService);
  }
  do {
    DVar1 = FUN_10003300();
    if (DVar1 == 4) break;
    Sleep(1000);
    local_5 = local_5 + 1;
  } while (local_5 < 0x5a);
  return DVar1 == 4;
}



/**************************************************/

/* Function: FUN_10003260 @ 10003260 */

bool FUN_10003260(void)

{
  SC_HANDLE hService;
  DWORD DVar1;
  byte local_21;
  _SERVICE_STATUS local_20;
  
  local_21 = 0;
  hService = FUN_10003350('\x01');
  if (hService != (SC_HANDLE)0x0) {
    ControlService(hService,1,&local_20);
    CloseServiceHandle(hService);
  }
  do {
    DVar1 = FUN_10003300();
    if (DVar1 == 1) break;
    Sleep(1000);
    local_21 = local_21 + 1;
  } while (local_21 < 0x5a);
  return DVar1 == 1;
}



/**************************************************/

/* Function: FUN_10003300 @ 10003300 */

DWORD FUN_10003300(void)

{
  SC_HANDLE hService;
  BOOL BVar1;
  DWORD local_24;
  _SERVICE_STATUS local_20;
  
  hService = FUN_10003350('\x02');
  if (hService == (SC_HANDLE)0x0) {
    local_24 = 0xffffffff;
  }
  else {
    BVar1 = QueryServiceStatus(hService,&local_20);
    if (BVar1 != 0) {
      local_24 = local_20.dwCurrentState;
    }
    CloseServiceHandle(hService);
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_10003350 @ 10003350 */

SC_HANDLE __cdecl FUN_10003350(char param_1)

{
  SC_HANDLE hSCManager;
  SC_HANDLE local_c;
  
  local_c = (SC_HANDLE)0x0;
  hSCManager = OpenSCManagerA((LPCSTR)0x0,"ServicesActive",1);
  if (hSCManager != (SC_HANDLE)0x0) {
    if (param_1 == '\0') {
      local_c = OpenServiceA(hSCManager,"StiSvc",0x10);
    }
    else if (param_1 == '\x01') {
      local_c = OpenServiceA(hSCManager,"StiSvc",0x20);
    }
    else if (param_1 == '\x02') {
      local_c = OpenServiceA(hSCManager,"StiSvc",4);
    }
    CloseServiceHandle(hSCManager);
  }
  return local_c;
}



/**************************************************/

/* Function: _InternalDllMain@12 @ 100033ff */

/* Library Function - Single Match
    _InternalDllMain@12
   
   Library: Visual Studio 2005 Release */

int _InternalDllMain_12(HINSTANCE__ *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  _AFX_THREAD_STATE *p_Var3;
  int iVar4;
  AFX_MODULE_STATE *pAVar5;
  
  if (param_2 != 1) {
    if (param_2 == 0) {
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x68))();
      }
      FUN_10004ef0();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermLocalData(param_1,1);
    }
    else if (param_2 == 3) {
      FUN_10004ef0();
      AfxUnlockTempMaps(-1);
      AfxTermThread(param_1);
    }
    return 1;
  }
  param_2 = 0;
  p_Var3 = AfxGetThreadState();
  uVar1 = *(undefined4 *)(p_Var3 + 8);
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,"",0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x50))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitLocalData(param_1);
      param_2 = 1;
      goto LAB_10003464;
    }
    (**(code **)(*piVar2 + 0x68))();
  }
  AfxWinTerm();
LAB_10003464:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  return param_2;
}



/**************************************************/

/* Function: _DllMain@12 @ 100034c6 */

/* Library Function - Single Match
    _DllMain@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 _DllMain_12(HINSTANCE__ *param_1,int param_2)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  
  if (DAT_10027d84 != 0) {
    if (param_2 == 1) {
      pAVar1 = AfxGetModuleState();
      *(HINSTANCE__ **)(pAVar1 + 8) = param_1;
    }
    else if (param_2 != 0) goto LAB_100034f0;
    return 1;
  }
LAB_100034f0:
  uVar2 = _InternalDllMain_12(param_1,param_2);
  return uVar2;
}



/**************************************************/

/* Function: thunk_FUN_100035fd @ 100034f6 */

void thunk_FUN_100035fd(void)

{
  FUN_100035fd();
  return;
}



/**************************************************/

/* Function: AfxSetNewHandler @ 100034fb */

/* Library Function - Single Match
    int (__cdecl*__stdcall AfxSetNewHandler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2005 Release */

_func_int_uint * AfxSetNewHandler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  p_Var1 = (_func_int_uint *)PTR_thunk_FUN_100035fd_10026000;
  PTR_thunk_FUN_100035fd_10026000 = param_1;
  return p_Var1;
}



/**************************************************/

/* Function: operator_new @ 1000350d */

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  
  while( true ) {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    if (PTR_thunk_FUN_100035fd_10026000 == (undefined *)0x0) break;
    iVar1 = (*(code *)PTR_thunk_FUN_100035fd_10026000)(param_1);
    if (iVar1 == 0) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: _free @ 10003538 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_1002b7f8 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1001110b(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000cf60();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10029bd0,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1000e777();
      DVar4 = GetLastError();
      DVar4 = FUN_1000e73c(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1000353d @ 1000353d */

void __fastcall FUN_1000353d(int *param_1)

{
  if (0 < param_1[1]) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000354b @ 1000354b */

void __fastcall FUN_1000354b(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000354d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/**************************************************/

/* Function: ReportError @ 10003550 */

/* Library Function - Single Match
    public: virtual int __thiscall CException::ReportError(unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CException::ReportError(CException *this,uint param_1,uint param_2)

{
  int iVar1;
  uint local_20c;
  char local_208 [512];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0xc))(local_208,0x200,&local_20c);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      param_2 = 0xf020;
    }
    AfxMessageBox(param_2,param_1,local_20c);
  }
  else {
    AfxMessageBox(local_208,param_1,local_20c);
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}



/**************************************************/

/* Function: FUN_100035c2 @ 100035c2 */

undefined ** FUN_100035c2(void)

{
  return &PTR_s_CMemoryException_1001e51c;
}



/**************************************************/

/* Function: FUN_100035c8 @ 100035c8 */

undefined ** FUN_100035c8(void)

{
  return &PTR_s_CNotSupportedException_1001e538;
}



/**************************************************/

/* Function: FUN_100035ce @ 100035ce */

undefined ** FUN_100035ce(void)

{
  return &PTR_s_CInvalidArgException_1001e554;
}



/**************************************************/

/* Function: InitString @ 100035d4 */

/* Library Function - Single Match
    public: void __thiscall CSimpleException::InitString(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CSimpleException::InitString(CSimpleException *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0xc) = 1;
  iVar1 = FUN_10005ada(*(uint *)(this + 0x94),(LPSTR)(this + 0x14),0x80);
  *(uint *)(this + 0x10) = (uint)(iVar1 != 0);
  return;
}



/**************************************************/

/* Function: FUN_100035fd @ 100035fd */

void FUN_100035fd(void)

{
  undefined **local_8;
  
  local_8 = &PTR_vftable_10026170;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_8,&DAT_100221e0);
}



/**************************************************/

/* Function: FUN_10003617 @ 10003617 */

void FUN_10003617(void)

{
  undefined **local_8;
  
  local_8 = &PTR_vftable_100262a0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_8,&DAT_10022294);
}



/**************************************************/

/* Function: FUN_10003631 @ 10003631 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10003631(void)

{
  undefined4 *puVar1;
  
  puVar1 = CNoTrackObject::operator_new(0x104);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10003e0f(puVar1);
  }
  return;
}



/**************************************************/

/* Function: tcsncpy_s @ 10003660 */

/* Library Function - Single Match
    int __cdecl ATL::Checked::tcsncpy_s(char *,unsigned int,char const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl ATL::Checked::tcsncpy_s(char *param_1,uint param_2,char *param_3,uint param_4)

{
  errno_t eVar1;
  int iVar2;
  
  eVar1 = __mbsnbcpy_s((uchar *)param_1,param_2,(uchar *)param_3,param_4);
  iVar2 = FUN_10001c30(eVar1);
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000367f @ 1000367f */

void FUN_1000367f(void *param_1)

{
  _free(param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000368c @ 1000368c */

void __fastcall FUN_1000368c(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}



/**************************************************/

/* Function: FUN_10003696 @ 10003696 */

void __thiscall FUN_10003696(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}



/**************************************************/

/* Function: GetErrorMessage @ 100036a2 */

/* Library Function - Single Match
    public: virtual int __thiscall CSimpleException::GetErrorMessage(char *,unsigned int,unsigned
   int *)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall
CSimpleException::GetErrorMessage(CSimpleException *this,char *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    if (*(int *)(this + 0xc) == 0) {
      InitString(this);
    }
    if (*(int *)(this + 0x10) == 0) {
      *param_1 = '\0';
    }
    else {
      ATL::Checked::tcsncpy_s(param_1,param_2,(char *)(this + 0x14),0xffffffff);
    }
    iVar1 = *(int *)(this + 0x10);
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_100036f4 @ 100036f4 */

undefined4 * __thiscall FUN_100036f4(void *this,byte param_1)

{
  *(undefined ***)this = CMemoryException::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10003711 @ 10003711 */

undefined4 * __thiscall FUN_10003711(void *this,byte param_1)

{
  *(undefined ***)this = CNotSupportedException::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000372e @ 1000372e */

undefined4 * __thiscall FUN_1000372e(void *this,byte param_1)

{
  *(undefined ***)this = CInvalidArgException::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000374b @ 1000374b */

undefined ** FUN_1000374b(void)

{
  return &PTR_s_COleException_1001e5d4;
}



/**************************************************/

/* Function: FUN_10003751 @ 10003751 */

void __cdecl FUN_10003751(void *param_1,rsize_t param_2,void *param_3,rsize_t param_4)

{
  errno_t eVar1;
  
  eVar1 = _memcpy_s(param_1,param_2,param_3,param_4);
  FUN_10001c30(eVar1);
  return;
}



/**************************************************/

/* Function: _AtlGetStringResourceImage @ 10003770 */

/* Library Function - Single Match
    struct ATL::ATLSTRINGRESOURCEIMAGE const * __cdecl ATL::_AtlGetStringResourceImage(struct
   HINSTANCE__ *,struct HRSRC__ *,unsigned int)
   
   Library: Visual Studio 2005 Release */

ATLSTRINGRESOURCEIMAGE * __cdecl
ATL::_AtlGetStringResourceImage(HINSTANCE__ *param_1,HRSRC__ *param_2,uint param_3)

{
  HGLOBAL hResData;
  ushort *puVar1;
  DWORD DVar2;
  ushort *puVar3;
  uint uVar4;
  
  hResData = LoadResource(param_1,param_2);
  if (hResData == (HGLOBAL)0x0) {
    return (ATLSTRINGRESOURCEIMAGE *)0x0;
  }
  puVar1 = LockResource(hResData);
  if (puVar1 != (ushort *)0x0) {
    DVar2 = SizeofResource(param_1,param_2);
    puVar3 = (ushort *)(DVar2 + (int)puVar1);
    for (uVar4 = param_3 & 0xf; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar3 <= puVar1) {
        return (ATLSTRINGRESOURCEIMAGE *)0x0;
      }
      puVar1 = puVar1 + *puVar1 + 1;
    }
    if (puVar1 < puVar3) {
      return (ATLSTRINGRESOURCEIMAGE *)(-(uint)(*puVar1 != 0) & (uint)puVar1);
    }
  }
  return (ATLSTRINGRESOURCEIMAGE *)0x0;
}



/**************************************************/

/* Function: AtlGetStringResourceImage @ 100037cc */

/* Library Function - Single Match
    struct ATL::ATLSTRINGRESOURCEIMAGE const * __cdecl ATL::AtlGetStringResourceImage(struct
   HINSTANCE__ *,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

ATLSTRINGRESOURCEIMAGE * __cdecl ATL::AtlGetStringResourceImage(HINSTANCE__ *param_1,uint param_2)

{
  HRSRC pHVar1;
  ATLSTRINGRESOURCEIMAGE *pAVar2;
  
  pHVar1 = FindResourceA(param_1,(LPCSTR)((param_2 >> 4) + 1 & 0xffff),(LPCSTR)0x6);
  if (pHVar1 == (HRSRC)0x0) {
    return (ATLSTRINGRESOURCEIMAGE *)0x0;
  }
  pAVar2 = _AtlGetStringResourceImage(param_1,pHVar1,param_2);
  return pAVar2;
}



/**************************************************/

/* Function: FUN_100037fb @ 100037fb */

undefined4 * __fastcall FUN_100037fb(undefined4 *param_1)

{
  FUN_1000368c((int)param_1);
  param_1[2] = 0;
  *param_1 = COleException::vftable;
  return param_1;
}



/**************************************************/

/* Function: GetBaseTypeLength @ 10003811 */

/* Library Function - Single Match
    public: static int __cdecl ATL::ChTraitsCRT<char>::GetBaseTypeLength(wchar_t const *,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl ATL::ChTraitsCRT<char>::GetBaseTypeLength(wchar_t *param_1,int param_2)

{
  UINT CodePage;
  int iVar1;
  
  CodePage = (*(code *)PTR__AtlGetThreadACPThunk_10027d50)();
  iVar1 = WideCharToMultiByte(CodePage,0,param_1,param_2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  return iVar1;
}



/**************************************************/

/* Function: ConvertToBaseType @ 1000382e */

/* Library Function - Single Match
    public: static void __cdecl ATL::ChTraitsCRT<char>::ConvertToBaseType(char *,int,wchar_t const
   *,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl
ATL::ChTraitsCRT<char>::ConvertToBaseType(char *param_1,int param_2,wchar_t *param_3,int param_4)

{
  UINT CodePage;
  DWORD dwFlags;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  dwFlags = 0;
  CodePage = (*(code *)PTR__AtlGetThreadACPThunk_10027d50)();
  WideCharToMultiByte(CodePage,dwFlags,param_3,param_4,param_1,param_2,lpDefaultChar,
                      lpUsedDefaultChar);
  return;
}



/**************************************************/

/* Function: FUN_10003851 @ 10003851 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_10003851(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = operator_new(0xc);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_100037fb(puVar1);
  }
  puVar2[2] = param_1;
  param_1 = puVar2;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_1,&DAT_10022304);
}



/**************************************************/

/* Function: GetErrorMessage @ 10003894 */

/* Library Function - Single Match
    public: virtual int __thiscall COleException::GetErrorMessage(char *,unsigned int,unsigned int
   *)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall
COleException::GetErrorMessage(COleException *this,char *param_1,uint param_2,uint *param_3)

{
  DWORD DVar1;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  DVar1 = FormatMessageA(0x1100,(LPCVOID)0x0,*(DWORD *)(this + 8),0x800,(LPSTR)&param_3,0,
                         (va_list *)0x0);
  if (DVar1 != 0) {
    ATL::Checked::tcsncpy_s(param_1,param_2,(char *)param_3,0xffffffff);
    LocalFree(param_3);
  }
  else {
    *param_1 = '\0';
  }
  return (uint)(DVar1 != 0);
}



/**************************************************/

/* Function: FUN_100038ee @ 100038ee */

undefined4 * __thiscall FUN_100038ee(void *this,byte param_1)

{
  *(undefined ***)this = COleException::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FID_conflict:LoadStringW @ 1000390b */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::LoadStringA(struct HINSTANCE__ *,unsigned int)
    public: int __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::LoadStringW(struct HINSTANCE__ *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int FID_conflict_LoadStringW(HINSTANCE hInstance,UINT uID,LPWSTR lpBuffer,int cchBufferMax)

{
  ATLSTRINGRESOURCEIMAGE *pAVar1;
  int iVar2;
  char *pcVar3;
  CSimpleStringT<char,0> *in_ECX;
  
  pAVar1 = ATL::AtlGetStringResourceImage(hInstance,uID);
  if (pAVar1 != (ATLSTRINGRESOURCEIMAGE *)0x0) {
    iVar2 = ATL::ChTraitsCRT<char>::GetBaseTypeLength
                      ((wchar_t *)(pAVar1 + 2),(uint)*(ushort *)pAVar1);
    pcVar3 = ATL::CSimpleStringT<char,0>::PrepareWrite(in_ECX,iVar2);
    ATL::ChTraitsCRT<char>::ConvertToBaseType
              (pcVar3,iVar2,(wchar_t *)(pAVar1 + 2),(uint)*(ushort *)pAVar1);
    FUN_10002e00(in_ECX,iVar2);
  }
  return (uint)(pAVar1 != (ATLSTRINGRESOURCEIMAGE *)0x0);
}



/**************************************************/

/* Function: AppendChar @ 10003964 */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<char,0>::AppendChar(char)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CSimpleStringT<char,0>::AppendChar(CSimpleStringT<char,0> *this,char param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(*(int *)this + -0xc);
  iVar1 = iVar2 + 1;
  pcVar3 = PrepareWrite(this,iVar1);
  pcVar3[iVar2] = param_1;
  FUN_10002e00(this,iVar1);
  return;
}



/**************************************************/

/* Function: LoadStringA @ 1000398c */

/* Library Function - Single Match
    public: int __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::LoadStringA(unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::LoadStringA
          (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this,uint param_1)

{
  HINSTANCE hInstance;
  int iVar1;
  LPWSTR unaff_ESI;
  int unaff_retaddr;
  
  hInstance = (HINSTANCE)FUN_10005b31();
  iVar1 = 0;
  if (hInstance != (HINSTANCE)0x0) {
    iVar1 = FID_conflict_LoadStringW(hInstance,param_1,unaff_ESI,unaff_retaddr);
  }
  return iVar1;
}



/**************************************************/

/* Function: Append @ 100039ac */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<char,0>::Append(char const *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
ATL::CSimpleStringT<char,0>::Append(CSimpleStringT<char,0> *this,char *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(*(int *)this + -0xc);
  uVar3 = (int)param_1 - *(int *)this;
  pcVar2 = PrepareWrite(this,param_2 + uVar1);
  if (uVar3 <= uVar1) {
    param_1 = pcVar2 + uVar3;
  }
  _memcpy_s(pcVar2 + uVar1,param_2,param_1,param_2);
  FUN_10002e00(this,param_2 + uVar1);
  return;
}



/**************************************************/

/* Function: CheckImplicitLoad @ 100039fb */

/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char>
   > >::CheckImplicitLoad(void const *)
    private: bool __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::CheckImplicitLoad(void const *)
   
   Library: Visual Studio 2005 Release */

uint __thiscall CheckImplicitLoad(void *this,uint param_1)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  
  uVar1 = in_EAX & 0xffffff00;
  if ((param_1 != 0) && ((param_1 & 0xffff0000) == 0)) {
    iVar2 = ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::LoadStringA
                      (this,param_1 & 0xffff);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar1;
}



/**************************************************/

/* Function: Append @ 10003a1b */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<char,0>::Append(char const *)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CSimpleStringT<char,0>::Append(CSimpleStringT<char,0> *this,char *param_1)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = _strlen(param_1);
  }
  Append(this,param_1,sVar1);
  return;
}



/**************************************************/

/* Function: CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> @ 10003a40 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >(char const *)
   
   Library: Visual Studio 2005 Release */

CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> * __thiscall
ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::
CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
          (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this,char *param_1
          )

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = FUN_10003a84();
  FUN_10002c40(this,piVar1);
  uVar2 = CheckImplicitLoad(this,(uint)param_1);
  if ((char)uVar2 == '\0') {
    CSimpleStringT<char,0>::SetString((CSimpleStringT<char,0> *)this,param_1);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10003a84 @ 10003a84 */

undefined4 * FUN_10003a84(void)

{
  return &DAT_10027d90;
}



/**************************************************/

/* Function: Allocate @ 10003a8a */

/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall CAfxStringMgr::Allocate(int,int)
   
   Library: Visual Studio 2005 Release */

CStringData * __thiscall CAfxStringMgr::Allocate(CAfxStringMgr *this,int param_1,int param_2)

{
  CStringData *pCVar1;
  
  if ((-1 < param_1) &&
     (pCVar1 = _malloc((param_1 + 1) * param_2 + 0x10), pCVar1 != (CStringData *)0x0)) {
    *(undefined4 *)(pCVar1 + 4) = 0;
    *(CAfxStringMgr **)pCVar1 = this;
    *(undefined4 *)(pCVar1 + 0xc) = 1;
    *(int *)(pCVar1 + 8) = param_1;
    return pCVar1;
  }
  return (CStringData *)0x0;
}



/**************************************************/

/* Function: FUN_10003ac5 @ 10003ac5 */

void FUN_10003ac5(void *param_1)

{
  _free(param_1);
  return;
}



/**************************************************/

/* Function: Reallocate @ 10003ad2 */

/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall CAfxStringMgr::Reallocate(struct
   ATL::CStringData *,int,int)
   
   Library: Visual Studio 2005 Release */

CStringData * __thiscall
CAfxStringMgr::Reallocate(CAfxStringMgr *this,CStringData *param_1,int param_2,int param_3)

{
  CStringData *pCVar1;
  
  if ((-1 < param_2) &&
     (pCVar1 = _realloc(param_1,(param_2 + 1) * param_3 + 0x10), pCVar1 != (CStringData *)0x0)) {
    *(int *)(pCVar1 + 8) = param_2;
    return pCVar1;
  }
  return (CStringData *)0x0;
}



/**************************************************/

/* Function: FUN_10003b01 @ 10003b01 */

undefined4 __fastcall FUN_10003b01(undefined4 param_1)

{
  return param_1;
}



/**************************************************/

/* Function: CloneData @ 10003b04 */

/* Library Function - Single Match
    private: static struct ATL::CStringData * __cdecl ATL::CSimpleStringT<char,0>::CloneData(struct
   ATL::CStringData *)
   
   Library: Visual Studio 2005 Release */

CStringData * __cdecl ATL::CSimpleStringT<char,0>::CloneData(CStringData *param_1)

{
  undefined4 *puVar1;
  CStringData *pCVar2;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)param_1 + 0x10))();
  pCVar2 = param_1 + 0xc;
  if ((*(int *)pCVar2 < 0) || (puVar1 != *(undefined4 **)param_1)) {
    pCVar2 = (CStringData *)(**(code **)*puVar1)(*(undefined4 *)(param_1 + 4),1);
    if (pCVar2 == (CStringData *)0x0) {
      pCVar2 = (CStringData *)FUN_10002d80();
      return pCVar2;
    }
    *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(param_1 + 4);
    _memcpy_s(pCVar2 + 0x10,*(int *)(param_1 + 4) + 1U,param_1 + 0x10,*(int *)(param_1 + 4) + 1U);
  }
  else {
    LOCK();
    *(int *)pCVar2 = *(int *)pCVar2 + 1;
    UNLOCK();
    pCVar2 = param_1;
  }
  return pCVar2;
}



/**************************************************/

/* Function: CAfxStringMgr @ 10003b5f */

/* Library Function - Single Match
    public: __thiscall CAfxStringMgr::CAfxStringMgr(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CAfxStringMgr::CAfxStringMgr(CAfxStringMgr *this)

{
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(CAfxStringMgr **)(this + 4) = this;
  return;
}



/**************************************************/

/* Function: FUN_10003b82 @ 10003b82 */

undefined8 __fastcall FUN_10003b82(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x10);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return CONCAT44(iVar2,param_1 + 4);
}



/**************************************************/

/* Function: CSimpleStringT<char,0> @ 10003b90 */

/* Library Function - Single Match
    public: __thiscall ATL::CSimpleStringT<char,0>::CSimpleStringT<char,0>(char const *,int,struct
   ATL::IAtlStringMgr *)
   
   Library: Visual Studio 2005 Release */

CSimpleStringT<char,0> * __thiscall
ATL::CSimpleStringT<char,0>::CSimpleStringT<char,0>
          (CSimpleStringT<char,0> *this,char *param_1,int param_2,IAtlStringMgr *param_3)

{
  int iVar1;
  IAtlStringMgr *extraout_ECX;
  IAtlStringMgr *extraout_ECX_00;
  void *unaff_ESI;
  
  if (param_3 == (IAtlStringMgr *)0x0) {
    FUN_10001d30((undefined4 *)0x80004005);
    param_3 = extraout_ECX;
  }
  if ((param_1 == (char *)0x0) && (param_2 != 0)) {
    FUN_10001d30((undefined4 *)0x80070057);
    param_3 = extraout_ECX_00;
  }
  iVar1 = (*(code *)**(undefined4 **)param_3)(param_2,1);
  if (iVar1 == 0) {
    iVar1 = FUN_10002d80();
  }
  *(int *)this = iVar1 + 0x10;
  FUN_10002e00(this,param_2);
  _memcpy_s(*(void **)this,param_2,unaff_ESI,param_2);
  return this;
}



/**************************************************/

/* Function: FID_conflict:operator= @ 10003bf3 */

/* Library Function - Multiple Matches With Different Base Names
    public: class ATL::CSimpleStringT<char,0> & __thiscall
   ATL::CSimpleStringT<char,0>::operator=(class ATL::CSimpleStringT<char,0> const &)
    public: class ATL::CSimpleStringT<wchar_t,0> & __thiscall
   ATL::CSimpleStringT<wchar_t,0>::operator=(class ATL::CSimpleStringT<wchar_t,0> const &)
   
   Library: Visual Studio 2005 Release */

CSimpleStringT<char,0> * __thiscall FID_conflict_operator_(void *this,undefined4 *param_1)

{
  char *pcVar1;
  CStringData *pCVar2;
  CStringData *pCVar3;
  
  pcVar1 = (char *)*param_1;
  pCVar2 = (CStringData *)(pcVar1 + -0x10);
  pCVar3 = (CStringData *)(*(int *)this + -0x10);
  if (pCVar2 != pCVar3) {
    if ((*(int *)(*(int *)this + -4) < 0) || (*(int *)pCVar2 != *(int *)pCVar3)) {
      ATL::CSimpleStringT<char,0>::SetString(this,pcVar1,*(int *)(pcVar1 + -0xc));
    }
    else {
      pCVar2 = ATL::CSimpleStringT<char,0>::CloneData(pCVar2);
      FUN_10001f50((undefined4 *)pCVar3);
      *(CStringData **)this = pCVar2 + 0x10;
    }
  }
  return this;
}



/**************************************************/

/* Function: ~CThreadLocalObject @ 10003c40 */

void __thiscall CThreadLocalObject::~CThreadLocalObject(CThreadLocalObject *this)

{
  if ((*(int *)this != 0) && (DAT_10027dc4 != (CThreadSlotData *)0x0)) {
    CThreadSlotData::FreeSlot(DAT_10027dc4,*(int *)this);
  }
  *(undefined4 *)this = 0;
  return;
}



/**************************************************/

/* Function: _AfxInitContextAPI @ 10003c45 */

/* Library Function - Single Match
    void __stdcall _AfxInitContextAPI(void)
   
   Library: Visual Studio 2005 Release */

void _AfxInitContextAPI(void)

{
  if (DAT_10027db8 == (HMODULE)0x0) {
    DAT_10027db8 = GetModuleHandleA("KERNEL32");
    if (DAT_10027db8 == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
    DAT_10027da8 = GetProcAddress(DAT_10027db8,"CreateActCtxW");
    DAT_10027dac = GetProcAddress(DAT_10027db8,"ReleaseActCtx");
    DAT_10027db0 = GetProcAddress(DAT_10027db8,"ActivateActCtx");
    DAT_10027db4 = GetProcAddress(DAT_10027db8,"DeactivateActCtx");
  }
  return;
}



/**************************************************/

/* Function: AfxCreateActCtxW @ 10003cb3 */

/* Library Function - Single Match
    void * __stdcall AfxCreateActCtxW(struct tagACTCTXW const *)
   
   Library: Visual Studio 2005 Release */

void * AfxCreateActCtxW(tagACTCTXW *param_1)

{
  void *pvVar1;
  
  if (DAT_10027da8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*DAT_10027da8)();
    return pvVar1;
  }
  return (void *)0xffffffff;
}



/**************************************************/

/* Function: AfxReleaseActCtx @ 10003cc4 */

/* Library Function - Single Match
    void __stdcall AfxReleaseActCtx(void *)
   
   Library: Visual Studio 2005 Release */

void AfxReleaseActCtx(void *param_1)

{
  if (DAT_10027dac != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_10027dac)();
    return;
  }
  return;
}



/**************************************************/

/* Function: AfxActivateActCtx @ 10003cd2 */

/* Library Function - Single Match
    int __stdcall AfxActivateActCtx(void *,unsigned long *)
   
   Library: Visual Studio 2005 Release */

int AfxActivateActCtx(void *param_1,ulong *param_2)

{
  int iVar1;
  
  if (DAT_10027db0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*DAT_10027db0)();
    return iVar1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003ce2 @ 10003ce2 */

undefined4 FUN_10003ce2(void)

{
  undefined4 uVar1;
  
  if (DAT_10027db4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_10027db4)();
    return uVar1;
  }
  return 0;
}



/**************************************************/

/* Function: AfxActivateActCtxWrapper @ 10003cf2 */

/* Library Function - Single Match
    enum eActCtxResult __stdcall AfxActivateActCtxWrapper(void *,unsigned long *)
   
   Library: Visual Studio 2005 Release */

eActCtxResult AfxActivateActCtxWrapper(void *param_1,ulong *param_2)

{
  int iVar1;
  eActCtxResult eVar2;
  
  if (param_2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if (DAT_10027db0 == 0) {
    eVar2 = 2;
  }
  else {
    iVar1 = AfxActivateActCtx(param_1,param_2);
    eVar2 = (eActCtxResult)(iVar1 != 0);
  }
  return eVar2;
}



/**************************************************/

/* Function: CreateActivationContext @ 10003d22 */

/* Library Function - Single Match
    public: void __thiscall AFX_MODULE_STATE::CreateActivationContext(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall AFX_MODULE_STATE::CreateActivationContext(AFX_MODULE_STATE *this)

{
  HMODULE hModule;
  DWORD DVar1;
  void *pvVar2;
  undefined4 local_234;
  undefined4 local_230;
  WCHAR *local_22c;
  undefined4 local_220;
  HMODULE local_218;
  WCHAR local_214 [48];
  undefined1 local_1b4 [424];
  short local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)local_1b4;
  _AfxInitContextAPI();
  hModule = *(HMODULE *)(this + 8);
  local_a = 0;
  local_c = 0;
  DVar1 = GetModuleFileNameW(hModule,local_214,0x105);
  if (DVar1 != 0) {
    if (local_c == 0) {
      local_22c = local_214;
      local_234 = 0x20;
      local_230 = 0x88;
      local_220 = 2;
      local_218 = hModule;
      pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
      *(void **)(this + 0x80) = pvVar2;
      if (pvVar2 == (void *)0xffffffff) {
        local_220 = 3;
        pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
        *(void **)(this + 0x80) = pvVar2;
      }
      if (*(int *)(this + 0x80) == -1) {
        local_220 = 1;
        pvVar2 = AfxCreateActCtxW((tagACTCTXW *)&local_234);
        *(void **)(this + 0x80) = pvVar2;
        if (pvVar2 == (void *)0xffffffff) {
          *(undefined4 *)(this + 0x80) = 0;
        }
      }
    }
    else {
      SetLastError(0x6f);
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_1b4);
  return;
}



/**************************************************/

/* Function: FUN_10003e0f @ 10003e0f */

void __fastcall FUN_10003e0f(undefined4 *param_1)

{
  *param_1 = _AFX_THREAD_STATE::vftable;
  param_1[0xd] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}



/**************************************************/

/* Function: ~_AFX_THREAD_STATE @ 10003e28 */

/* Library Function - Single Match
    public: virtual __thiscall _AFX_THREAD_STATE::~_AFX_THREAD_STATE(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall _AFX_THREAD_STATE::~_AFX_THREAD_STATE(_AFX_THREAD_STATE *this)

{
  *(undefined ***)this = vftable;
  if (*(HHOOK *)(this + 0x2c) != (HHOOK)0x0) {
    UnhookWindowsHookEx(*(HHOOK *)(this + 0x2c));
  }
  if (*(HHOOK *)(this + 0x28) != (HHOOK)0x0) {
    UnhookWindowsHookEx(*(HHOOK *)(this + 0x28));
  }
  if (*(void **)(this + 0xc) != (void *)0x0) {
    _free(*(void **)(this + 0xc));
  }
  return;
}



/**************************************************/

/* Function: ~AFX_MODULE_THREAD_STATE @ 10003e5d */

/* Library Function - Single Match
    public: virtual __thiscall AFX_MODULE_THREAD_STATE::~AFX_MODULE_THREAD_STATE(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall AFX_MODULE_THREAD_STATE::~AFX_MODULE_THREAD_STATE(AFX_MODULE_THREAD_STATE *this)

{
  void *_Memory;
  int iVar1;
  
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 0x13c))();
  }
  _free(*(void **)(this + 0x48));
  if (*(undefined4 **)(this + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x14))(1);
  }
  if (*(undefined4 **)(this + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x18))(1);
  }
  if (*(undefined4 **)(this + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1c))(1);
  }
  if (*(undefined4 **)(this + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x20))(1);
  }
  if (*(undefined4 **)(this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x24))(1);
  }
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 != 0) {
    while (*(int *)(iVar1 + 0xc) != 0) {
      _Memory = CPtrList::RemoveHead(*(CPtrList **)(this + 0x38));
      _free(_Memory);
      iVar1 = *(int *)(this + 0x38);
    }
  }
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))(1);
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))(1);
  }
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))(1);
  }
  return;
}



/**************************************************/

/* Function: CSimpleStringT<char,0> @ 10003f09 */

/* Library Function - Single Match
    public: __thiscall ATL::CSimpleStringT<char,0>::CSimpleStringT<char,0>(class
   ATL::CSimpleStringT<char,0> const &)
   
   Library: Visual Studio 2005 Release */

CSimpleStringT<char,0> * __thiscall
ATL::CSimpleStringT<char,0>::CSimpleStringT<char,0>
          (CSimpleStringT<char,0> *this,CSimpleStringT<char,0> *param_1)

{
  CStringData *pCVar1;
  
  pCVar1 = CloneData((CStringData *)(*(int *)param_1 + -0x10));
  *(CStringData **)this = pCVar1 + 0x10;
  return this;
}



/**************************************************/

/* Function: `scalar_deleting_destructor' @ 10003f27 */

/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_THREAD_STATE::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void * __thiscall
_AFX_THREAD_STATE::_scalar_deleting_destructor_(_AFX_THREAD_STATE *this,uint param_1)

{
  ~_AFX_THREAD_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}



/**************************************************/

/* Function: `scalar_deleting_destructor' @ 10003f6c */

/* Library Function - Single Match
    public: virtual void * __thiscall AFX_MODULE_THREAD_STATE::`scalar deleting destructor'(unsigned
   int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall
AFX_MODULE_THREAD_STATE::_scalar_deleting_destructor_(AFX_MODULE_THREAD_STATE *this,uint param_1)

{
  ~AFX_MODULE_THREAD_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}



/**************************************************/

/* Function: AfxGetThreadState @ 10003f9c */

/* Library Function - Single Match
    class _AFX_THREAD_STATE * __stdcall AfxGetThreadState(void)
   
   Library: Visual Studio 2005 Release */

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  CNoTrackObject *pCVar1;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  return (_AFX_THREAD_STATE *)pCVar1;
}



/**************************************************/

/* Function: ~AFX_MODULE_STATE @ 10003fb5 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
  void *pvVar1;
  
  *(undefined ***)this = vftable;
  if (*(undefined4 **)(this + 0x48) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x48))(1);
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 0xc))(this + 0x4c);
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))(1);
    }
  }
  if ((undefined4 *)**(int **)(this + 0x78) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(this + 0x78))(1);
  }
  if (*(undefined4 **)(*(int *)(this + 0x78) + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(*(int *)(this + 0x78) + 4))(1);
  }
  _free(*(void **)(this + 0x78));
  pvVar1 = *(void **)(this + 0x80);
  if ((pvVar1 != (void *)0x0) && (pvVar1 != (void *)0xffffffff)) {
    AfxReleaseActCtx(pvVar1);
    *(undefined4 *)(this + 0x80) = 0xffffffff;
  }
  CThreadLocalObject::~CThreadLocalObject((CThreadLocalObject *)(this + 0x74));
  FUN_10001f50((undefined4 *)(*(int *)(this + 0x34) + -0x10));
  return;
}



/**************************************************/

/* Function: GetData @ 10004058 */

/* Library Function - Single Match
    public: class AFX_MODULE_THREAD_STATE * __thiscall CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::GetData(void)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_THREAD_STATE * __thiscall
CThreadLocal<class_AFX_MODULE_THREAD_STATE>::GetData
          (CThreadLocal<class_AFX_MODULE_THREAD_STATE> *this)

{
  CNoTrackObject *pCVar1;
  
  pCVar1 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)this,(_func_CNoTrackObject_ptr *)&LAB_10003f87);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  return (AFX_MODULE_THREAD_STATE *)pCVar1;
}



/**************************************************/

/* Function: CDllIsolationWrapperBase @ 1000406c */

/* Library Function - Single Match
    public: __thiscall CDllIsolationWrapperBase::CDllIsolationWrapperBase(class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &)
   
   Library: Visual Studio 2005 Release */

CDllIsolationWrapperBase * __thiscall
CDllIsolationWrapperBase::CDllIsolationWrapperBase
          (CDllIsolationWrapperBase *this,
          CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *param_1)

{
  *(undefined ***)this = vftable;
  ATL::CSimpleStringT<char,0>::CSimpleStringT<char,0>
            ((CSimpleStringT<char,0> *)(this + 0xc),(CSimpleStringT<char,0> *)param_1);
  *(undefined4 *)(this + 4) = 0;
  this[8] = (CDllIsolationWrapperBase)0x0;
  return this;
}



/**************************************************/

/* Function: ~CDllIsolationWrapperBase @ 1000408f */

/* Library Function - Single Match
    public: virtual __thiscall CDllIsolationWrapperBase::~CDllIsolationWrapperBase(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDllIsolationWrapperBase::~CDllIsolationWrapperBase(CDllIsolationWrapperBase *this)

{
  *(undefined ***)this = vftable;
  if (this[8] != (CDllIsolationWrapperBase)0x0) {
    FreeLibrary(*(HMODULE *)(this + 4));
  }
  FUN_10001f50((undefined4 *)(*(int *)(this + 0xc) + -0x10));
  return;
}



/**************************************************/

/* Function: CComCtlWrapper @ 100040b3 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CComCtlWrapper::CComCtlWrapper(void)
   
   Library: Visual Studio 2005 Release */

CComCtlWrapper * __thiscall CComCtlWrapper::CComCtlWrapper(CComCtlWrapper *this)

{
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100040bf;
  ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)local_14,
             "comctl32.dll");
  local_8 = 0;
  CDllIsolationWrapperBase::CDllIsolationWrapperBase
            ((CDllIsolationWrapperBase *)this,
             (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)local_14);
  FUN_10001f50((undefined4 *)(local_14[0] + -0x10));
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  return this;
}



/**************************************************/

/* Function: CCommDlgWrapper @ 100042d7 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CCommDlgWrapper::CCommDlgWrapper(void)
   
   Library: Visual Studio 2005 Release */

CCommDlgWrapper * __thiscall CCommDlgWrapper::CCommDlgWrapper(CCommDlgWrapper *this)

{
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100042e3;
  ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
            ((CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)local_14,
             "comdlg32.dll");
  local_8 = 0;
  CDllIsolationWrapperBase::CDllIsolationWrapperBase
            ((CDllIsolationWrapperBase *)this,
             (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)local_14);
  FUN_10001f50((undefined4 *)(local_14[0] + -0x10));
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  return this;
}



/**************************************************/

/* Function: FUN_1000435a @ 1000435a */

CDllIsolationWrapperBase * __thiscall FUN_1000435a(void *this,byte param_1)

{
  CDllIsolationWrapperBase::~CDllIsolationWrapperBase(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}



/**************************************************/

/* Function: AFX_MODULE_STATE @ 10004375 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(int)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_STATE * __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(AFX_MODULE_STATE *this,int param_1)

{
  void *pvVar1;
  CComCtlWrapper *this_00;
  undefined4 uVar2;
  CCommDlgWrapper *this_01;
  
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  CStringT<>((CSimpleStringT<char,0> *)(this + 0x34));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x28) = 0x20;
  *(undefined4 *)(this + 0x20) = 0x14;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x14] = param_1._0_1_;
  ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT<char,0> *)(this + 0x34),0x1000);
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x44) = 0x18;
  pvVar1 = operator_new(8);
  *(void **)(this + 0x78) = pvVar1;
  this_00 = CNoTrackObject::operator_new(0x188);
  if (this_00 == (CComCtlWrapper *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CComCtlWrapper::CComCtlWrapper(this_00);
  }
  **(undefined4 **)(this + 0x78) = uVar2;
  this_01 = CNoTrackObject::operator_new(100);
  if (this_01 == (CCommDlgWrapper *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CCommDlgWrapper::CCommDlgWrapper(this_01);
  }
  *(undefined4 *)(*(int *)(this + 0x78) + 4) = uVar2;
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined4 *)(this + 0x80) = 0;
  return this;
}



/**************************************************/

/* Function: Catch@100043e9 @ 100043e9 */

undefined1 * Catch_100043e9(void)

{
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    FUN_1000353d(*(int **)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return &LAB_10004402;
}



/**************************************************/

/* Function: _AFX_BASE_MODULE_STATE @ 1000447e */

/* Library Function - Single Match
    public: __thiscall _AFX_BASE_MODULE_STATE::_AFX_BASE_MODULE_STATE(void)
   
   Library: Visual Studio 2005 Release */

_AFX_BASE_MODULE_STATE * __thiscall
_AFX_BASE_MODULE_STATE::_AFX_BASE_MODULE_STATE(_AFX_BASE_MODULE_STATE *this)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)this,1);
  *(undefined ***)this = vftable;
  return this;
}



/**************************************************/

/* Function: FID_conflict:`scalar_deleting_destructor' @ 10004492 */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall AFX_MODULE_STATE::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall _AFX_BASE_MODULE_STATE::`scalar deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall _AFX_DLL_MODULE_STATE::`scalar deleting destructor'(unsigned
   int)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_STATE * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}



/**************************************************/

/* Function: AfxGetModuleState @ 100044dc */

/* Library Function - Single Match
    class AFX_MODULE_STATE * __stdcall AfxGetModuleState(void)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  CNoTrackObject *pCVar1;
  AFX_MODULE_STATE *pAVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 == (CNoTrackObject *)0x0) {
LAB_100044ef:
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  pAVar2 = *(AFX_MODULE_STATE **)(pCVar1 + 4);
  if (pAVar2 == (AFX_MODULE_STATE *)0x0) {
    pAVar2 = (AFX_MODULE_STATE *)
             CProcessLocalObject::GetData
                       ((CProcessLocalObject *)&DAT_10027dbc,
                        (_func_CNoTrackObject_ptr *)&LAB_100044ad);
    if (pAVar2 == (AFX_MODULE_STATE *)0x0) goto LAB_100044ef;
  }
  return pAVar2;
}



/**************************************************/

/* Function: AfxGetModuleThreadState @ 1000450f */

/* Library Function - Single Match
    class AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_THREAD_STATE * AfxGetModuleThreadState(void)

{
  AFX_MODULE_STATE *pAVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pAVar1 = AfxGetModuleState();
  pAVar2 = CThreadLocal<class_AFX_MODULE_THREAD_STATE>::GetData
                     ((CThreadLocal<class_AFX_MODULE_THREAD_STATE> *)(pAVar1 + 0x74));
  if (pAVar2 == (AFX_MODULE_THREAD_STATE *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  return pAVar2;
}



/**************************************************/

/* Function: AFX_MAINTAIN_STATE2 @ 10004528 */

/* Library Function - Single Match
    public: __thiscall AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(class AFX_MODULE_STATE *)
   
   Library: Visual Studio 2005 Release */

AFX_MAINTAIN_STATE2 * __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleState();
  if ((*(int *)(pAVar1 + 0x7c) == 0) || (*(void **)(param_1 + 0x80) == (void *)0xffffffff)) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    iVar2 = AfxActivateActCtx(*(void **)(param_1 + 0x80),(ulong *)this);
    *(int *)(this + 4) = iVar2;
  }
  return this;
}



/**************************************************/

/* Function: operator_new @ 1000455b */

/* Library Function - Single Match
    public: static void * __stdcall CNoTrackObject::operator new(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * CNoTrackObject::operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = LocalAlloc(0x40,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
    pvVar1 = (void *)FUN_100035fd();
  }
  return pvVar1;
}



/**************************************************/

/* Function: operator_delete @ 10004573 */

/* Library Function - Single Match
    public: static void __stdcall CNoTrackObject::operator delete(void *)
   
   Library: Visual Studio 2005 Release */

void CNoTrackObject::operator_delete(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000457a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LocalFree(param_1);
    return;
  }
  return;
}



/**************************************************/

/* Function: GetThreadValue @ 10004583 */

/* Library Function - Single Match
    public: void * __thiscall CThreadSlotData::GetThreadValue(int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall CThreadSlotData::GetThreadValue(CThreadSlotData *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvVar1;
  LPVOID pvVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  if ((((0 < param_1) && (param_1 < *(int *)(this + 0xc))) &&
      (pvVar2 = TlsGetValue(*(DWORD *)this), pvVar2 != (LPVOID)0x0)) &&
     (param_1 < *(int *)((int)pvVar2 + 8))) {
    pvVar1 = *(void **)(*(int *)((int)pvVar2 + 0xc) + param_1 * 4);
    LeaveCriticalSection(lpCriticalSection);
    return pvVar1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return (void *)0x0;
}



/**************************************************/

/* Function: AssignInstance @ 100045d0 */

/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::AssignInstance(struct HINSTANCE__ *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CThreadSlotData::AssignInstance(CThreadSlotData *this,HINSTANCE__ *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  iVar2 = 1;
  if (1 < *(int *)(this + 0xc)) {
    do {
      pbVar1 = (byte *)(*(int *)(this + 0x10) + iVar2 * 8);
      if ((*(int *)(pbVar1 + 4) == 0) && ((*pbVar1 & 1) != 0)) {
        *(HINSTANCE__ **)(pbVar1 + 4) = param_1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xc));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}



/**************************************************/

/* Function: GetDataNA @ 10004610 */

/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CThreadLocalObject::GetDataNA(void)
   
   Library: Visual Studio 2005 Release */

CNoTrackObject * __thiscall CThreadLocalObject::GetDataNA(CThreadLocalObject *this)

{
  CNoTrackObject *pCVar1;
  
  if ((*(int *)this != 0) && (DAT_10027dc4 != (CThreadSlotData *)0x0)) {
    pCVar1 = CThreadSlotData::GetThreadValue(DAT_10027dc4,*(int *)this);
    return pCVar1;
  }
  return (CNoTrackObject *)0x0;
}



/**************************************************/

/* Function: GetData @ 1000462a */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CProcessLocalObject::GetData(class CNoTrackObject *
   (__stdcall*)(void))
   
   Library: Visual Studio 2005 Release */

CNoTrackObject * __thiscall
CProcessLocalObject::GetData(CProcessLocalObject *this,_func_CNoTrackObject_ptr *param_1)

{
  CNoTrackObject *pCVar1;
  
  if (*(int *)this == 0) {
    AfxLockGlobals(0x10);
    if (*(int *)this == 0) {
      pCVar1 = (*param_1)();
      *(CNoTrackObject **)this = pCVar1;
    }
    AfxUnlockGlobals(0x10);
  }
  return *(CNoTrackObject **)this;
}



/**************************************************/

/* Function: Catch@10004669 @ 10004669 */

void Catch_10004669(void)

{
  AfxUnlockGlobals(0x10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: ~CProcessLocalObject @ 1000467a */

/* Library Function - Single Match
    public: __thiscall CProcessLocalObject::~CProcessLocalObject(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CProcessLocalObject::~CProcessLocalObject(CProcessLocalObject *this)

{
  if (*(int *)this != 0) {
    if (*(undefined4 **)this != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)this)(1);
    }
  }
  return;
}



/**************************************************/

/* Function: AfxInitLocalData @ 100046a1 */

/* Library Function - Single Match
    void __stdcall AfxInitLocalData(struct HINSTANCE__ *)
   
   Library: Visual Studio 2005 Release */

void AfxInitLocalData(HINSTANCE__ *param_1)

{
  if (DAT_10027dc4 != (CThreadSlotData *)0x0) {
    CThreadSlotData::AssignInstance(DAT_10027dc4,param_1);
    return;
  }
  return;
}



/**************************************************/

/* Function: FUN_100046b3 @ 100046b3 */

void FUN_100046b3(void)

{
  DAT_10027dfc = DAT_10027dfc + 1;
  return;
}



/**************************************************/

/* Function: GetNextPtr @ 100046ba */

/* Library Function - Single Match
    public: void * * __thiscall CSimpleList::GetNextPtr(void *)const 
   
   Library: Visual Studio 2005 Release */

void ** __thiscall CSimpleList::GetNextPtr(CSimpleList *this,void *param_1)

{
  if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  return (void **)(*(int *)(this + 4) + (int)param_1);
}



/**************************************************/

/* Function: AddHead @ 100046d0 */

/* Library Function - Single Match
    public: void __thiscall CSimpleList::AddHead(void *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CSimpleList::AddHead(CSimpleList *this,void *param_1)

{
  void **ppvVar1;
  
  ppvVar1 = GetNextPtr(this,param_1);
  *ppvVar1 = *(void **)this;
  *(void **)this = param_1;
  return;
}



/**************************************************/

/* Function: Remove @ 100046e9 */

/* Library Function - Single Match
    public: int __thiscall CSimpleList::Remove(void *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CSimpleList::Remove(CSimpleList *this,void *param_1)

{
  int iVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)this;
  if (pvVar4 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    if (pvVar4 == param_1) {
      ppvVar2 = GetNextPtr(this,param_1);
      *(void **)this = *ppvVar2;
    }
    else {
      do {
        ppvVar2 = GetNextPtr(this,pvVar4);
        if (*ppvVar2 == param_1) break;
        ppvVar2 = GetNextPtr(this,pvVar4);
        pvVar4 = *ppvVar2;
      } while (pvVar4 != (void *)0x0);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      ppvVar2 = GetNextPtr(this,param_1);
      ppvVar3 = GetNextPtr(this,pvVar4);
      *ppvVar3 = *ppvVar2;
    }
    iVar1 = 1;
  }
  return iVar1;
}



/**************************************************/

/* Function: AllocSlot @ 1000474f */

/* Library Function - Single Match
    public: int __thiscall CThreadSlotData::AllocSlot(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CThreadSlotData::AllocSlot(CThreadSlotData *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint *puVar2;
  SIZE_T SVar3;
  HGLOBAL pvVar4;
  int iVar5;
  LPVOID pvVar6;
  byte *pbVar7;
  int iVar8;
  UINT uFlags;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  iVar5 = *(int *)(this + 4);
  iVar8 = *(int *)(this + 8);
  if ((iVar5 <= iVar8) || ((*(byte *)(*(int *)(this + 0x10) + iVar8 * 8) & 1) != 0)) {
    iVar8 = 1;
    if (1 < iVar5) {
      pbVar7 = *(byte **)(this + 0x10);
      do {
        pbVar7 = pbVar7 + 8;
        if ((*pbVar7 & 1) == 0) break;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar5);
      if (iVar8 < iVar5) goto LAB_10004833;
    }
    uVar1 = iVar5 + 0x20;
    if (*(LPCVOID *)(this + 0x10) == (LPCVOID)0x0) {
      SVar3 = FUN_10001eb0(uVar1,8);
      pvVar4 = GlobalAlloc(2,SVar3);
    }
    else {
      pvVar4 = GlobalHandle(*(LPCVOID *)(this + 0x10));
      GlobalUnlock(pvVar4);
      uFlags = 0x2002;
      SVar3 = FUN_10001eb0(uVar1,8);
      pvVar4 = GlobalReAlloc(pvVar4,SVar3,uFlags);
    }
    if (pvVar4 == (HGLOBAL)0x0) {
      if (*(LPCVOID *)(this + 0x10) != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle(*(LPCVOID *)(this + 0x10));
        GlobalLock(pvVar4);
      }
      LeaveCriticalSection(lpCriticalSection);
      iVar5 = FUN_100035fd();
      return iVar5;
    }
    pvVar6 = GlobalLock(pvVar4);
    _memset((void *)((int)pvVar6 + *(int *)(this + 4) * 8),0,(uVar1 - *(int *)(this + 4)) * 8);
    *(uint *)(this + 4) = uVar1;
    *(LPVOID *)(this + 0x10) = pvVar6;
  }
LAB_10004833:
  if (*(int *)(this + 0xc) <= iVar8) {
    *(int *)(this + 0xc) = iVar8 + 1;
  }
  puVar2 = (uint *)(*(int *)(this + 0x10) + iVar8 * 8);
  *puVar2 = *puVar2 | 1;
  *(int *)(this + 8) = iVar8 + 1;
  LeaveCriticalSection(lpCriticalSection);
  return iVar8;
}



/**************************************************/

/* Function: CThreadSlotData @ 1000485f */

/* Library Function - Single Match
    public: __thiscall CThreadSlotData::CThreadSlotData(void)
   
   Library: Visual Studio 2005 Release */

CThreadSlotData * __thiscall CThreadSlotData::CThreadSlotData(CThreadSlotData *this)

{
  DWORD DVar1;
  CThreadSlotData *pCVar2;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 4;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  DVar1 = TlsAlloc();
  *(DWORD *)this = DVar1;
  if (DVar1 == 0xffffffff) {
    pCVar2 = (CThreadSlotData *)FUN_100035fd();
    return pCVar2;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return this;
}



/**************************************************/

/* Function: FreeSlot @ 1000489e */

/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::FreeSlot(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CThreadSlotData::FreeSlot(CThreadSlotData *this,int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  if ((0 < param_1) && (param_1 < *(int *)(this + 0xc))) {
    for (iVar3 = *(int *)(this + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      if (param_1 < *(int *)(iVar3 + 8)) {
        puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + param_1 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(*(int *)(iVar3 + 0xc) + param_1 * 4) = 0;
      }
    }
    puVar1 = (uint *)(*(int *)(this + 0x10) + param_1 * 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  }
  return;
}



/**************************************************/

/* Function: SetValue @ 10004901 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::SetValue(int,void *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CThreadSlotData::SetValue(CThreadSlotData *this,int param_1,void *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *lpTlsValue;
  SIZE_T SVar1;
  HLOCAL pvVar2;
  UINT uFlags;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  if ((param_1 < 1) || (*(int *)(this + 0xc) <= param_1)) goto LAB_10004a28;
  lpTlsValue = TlsGetValue(*(DWORD *)this);
  if (lpTlsValue == (undefined4 *)0x0) {
    lpTlsValue = CNoTrackObject::operator_new(0x10);
    if (lpTlsValue == (undefined4 *)0x0) {
      lpTlsValue = (undefined4 *)0x0;
    }
    else {
      *lpTlsValue = CThreadData::vftable;
    }
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    CSimpleList::AddHead((CSimpleList *)(this + 0x14),lpTlsValue);
LAB_10004958:
    if (lpTlsValue[3] == 0) {
      SVar1 = FUN_10001eb0(*(uint *)(this + 0xc),4);
      pvVar2 = LocalAlloc(0,SVar1);
    }
    else {
      uFlags = 2;
      SVar1 = FUN_10001eb0(*(uint *)(this + 0xc),4);
      pvVar2 = LocalReAlloc((HLOCAL)lpTlsValue[3],SVar1,uFlags);
    }
    if (pvVar2 == (HLOCAL)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      pvVar2 = (HLOCAL)FUN_100035fd();
    }
    lpTlsValue[3] = pvVar2;
    _memset((void *)((int)pvVar2 + lpTlsValue[2] * 4),0,(*(int *)(this + 0xc) - lpTlsValue[2]) * 4);
    lpTlsValue[2] = *(undefined4 *)(this + 0xc);
    TlsSetValue(*(DWORD *)this,lpTlsValue);
  }
  else if (((int)lpTlsValue[2] <= param_1) && (param_2 != (void *)0x0)) goto LAB_10004958;
  if ((lpTlsValue[3] != 0) && (param_1 < (int)lpTlsValue[2])) {
    *(void **)(lpTlsValue[3] + param_1 * 4) = param_2;
  }
LAB_10004a28:
  LeaveCriticalSection(lpCriticalSection);
  return;
}



/**************************************************/

/* Function: Catch@100049a2 @ 100049a2 */

void Catch_100049a2(void)

{
  int unaff_EBP;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x18) + 0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: FUN_10004a36 @ 10004a36 */

void * __thiscall FUN_10004a36(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}



/**************************************************/

/* Function: DeleteValues @ 10004a4c */

/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::DeleteValues(struct CThreadData *,struct HINSTANCE__ *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CThreadSlotData::DeleteValues(CThreadSlotData *this,CThreadData *param_1,HINSTANCE__ *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 1;
  bVar2 = true;
  if (1 < *(int *)(param_1 + 8)) {
    do {
      if ((param_2 == (HINSTANCE__ *)0x0) ||
         (*(HINSTANCE__ **)(*(int *)(this + 0x10) + 4 + iVar3 * 8) == param_2)) {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + iVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = 0;
      }
      else if (*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) != 0) {
        bVar2 = false;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
    if (!bVar2) {
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  CSimpleList::Remove((CSimpleList *)(this + 0x14),param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  LocalFree(*(HLOCAL *)(param_1 + 0xc));
  (*(code *)**(undefined4 **)param_1)(1);
  TlsSetValue(*(DWORD *)this,(LPVOID)0x0);
  return;
}



/**************************************************/

/* Function: DeleteValues @ 10004ae1 */

/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::DeleteValues(struct HINSTANCE__ *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CThreadSlotData::DeleteValues(CThreadSlotData *this,HINSTANCE__ *param_1,int param_2)

{
  CThreadData *pCVar1;
  CThreadData *pCVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  if (param_2 == 0) {
    pCVar2 = TlsGetValue(*(DWORD *)this);
    if (pCVar2 != (CThreadData *)0x0) {
      DeleteValues(this,pCVar2,param_1);
    }
  }
  else {
    pCVar2 = *(CThreadData **)(this + 0x14);
    while (pCVar2 != (CThreadData *)0x0) {
      pCVar1 = *(CThreadData **)(pCVar2 + 4);
      DeleteValues(this,pCVar2,param_1);
      pCVar2 = pCVar1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}



/**************************************************/

/* Function: GetData @ 10004b3a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CThreadLocalObject::GetData(class CNoTrackObject *
   (__stdcall*)(void))
   
   Library: Visual Studio 2005 Release */

CNoTrackObject * __thiscall
CThreadLocalObject::GetData(CThreadLocalObject *this,_func_CNoTrackObject_ptr *param_1)

{
  int iVar1;
  CNoTrackObject *pCVar2;
  
  if (param_1 == (_func_CNoTrackObject_ptr *)0x0) {
LAB_10004b54:
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if (*(int *)this == 0) {
    if (DAT_10027dc4 == (CThreadSlotData *)0x0) {
      DAT_10027dc4 = (CThreadSlotData *)
                     CThreadSlotData::CThreadSlotData((CThreadSlotData *)&DAT_10027dc8);
      if (DAT_10027dc4 == (CThreadSlotData *)0x0) goto LAB_10004b54;
    }
    iVar1 = CThreadSlotData::AllocSlot(DAT_10027dc4);
    *(int *)this = iVar1;
    if (iVar1 == 0) goto LAB_10004b54;
  }
  pCVar2 = CThreadSlotData::GetThreadValue(DAT_10027dc4,*(int *)this);
  if (pCVar2 == (CNoTrackObject *)0x0) {
    pCVar2 = (*param_1)();
    CThreadSlotData::SetValue(DAT_10027dc4,*(int *)this,pCVar2);
  }
  return pCVar2;
}



/**************************************************/

/* Function: ~CThreadLocalObject @ 10004bc4 */

/* Library Function - Single Match
    public: __thiscall CThreadLocalObject::~CThreadLocalObject(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CThreadLocalObject::~CThreadLocalObject(CThreadLocalObject *this)

{
  if ((*(int *)this != 0) && (DAT_10027dc4 != (CThreadSlotData *)0x0)) {
    CThreadSlotData::FreeSlot(DAT_10027dc4,*(int *)this);
  }
  *(undefined4 *)this = 0;
  return;
}



/**************************************************/

/* Function: AfxTermLocalData @ 10004be2 */

/* Library Function - Single Match
    void __stdcall AfxTermLocalData(struct HINSTANCE__ *,int)
   
   Library: Visual Studio 2005 Release */

void AfxTermLocalData(HINSTANCE__ *param_1,int param_2)

{
  if (DAT_10027dc4 != (CThreadSlotData *)0x0) {
    CThreadSlotData::DeleteValues(DAT_10027dc4,param_1,param_2);
    return;
  }
  return;
}



/**************************************************/

/* Function: ~CThreadSlotData @ 10004bf4 */

/* Library Function - Single Match
    public: __thiscall CThreadSlotData::~CThreadSlotData(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CThreadSlotData::~CThreadSlotData(CThreadSlotData *this)

{
  CThreadData *pCVar1;
  CThreadData *pCVar2;
  HGLOBAL hMem;
  
  pCVar2 = *(CThreadData **)(this + 0x14);
  while (pCVar2 != (CThreadData *)0x0) {
    pCVar1 = *(CThreadData **)(pCVar2 + 4);
    DeleteValues(this,pCVar2,(HINSTANCE__ *)0x0);
    pCVar2 = pCVar1;
  }
  if (*(DWORD *)this != 0xffffffff) {
    TlsFree(*(DWORD *)this);
  }
  if (*(LPCVOID *)(this + 0x10) != (LPCVOID)0x0) {
    hMem = GlobalHandle(*(LPCVOID *)(this + 0x10));
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}



/**************************************************/

/* Function: AfxCriticalInit @ 10004c73 */

/* Library Function - Single Match
    int __stdcall AfxCriticalInit(void)
   
   Library: Visual Studio 2005 Release */

int AfxCriticalInit(void)

{
  if (DAT_10027e00 == 0) {
    DAT_10027e00 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_10027fa0);
  }
  return DAT_10027e00;
}



/**************************************************/

/* Function: AfxCriticalTerm @ 10004c97 */

/* Library Function - Single Match
    void __stdcall AfxCriticalTerm(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void AfxCriticalTerm(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
  if (DAT_10027e00 != 0) {
    DAT_10027e00 = DAT_10027e00 + -1;
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10027fa0);
    piVar1 = &DAT_10027fb8;
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_10027e08;
    do {
      if (*piVar1 != 0) {
        DeleteCriticalSection(lpCriticalSection);
        *piVar1 = *piVar1 + -1;
      }
      lpCriticalSection = lpCriticalSection + 1;
      piVar1 = piVar1 + 1;
    } while ((int)lpCriticalSection < 0x10027fa0);
  }
  return;
}



/**************************************************/

/* Function: AfxLockGlobals @ 10004cdc */

/* Library Function - Single Match
    void __stdcall AfxLockGlobals(int)
   
   Library: Visual Studio 2005 Release */

void AfxLockGlobals(int param_1)

{
  int *piVar1;
  
  if (0x10 < (uint)param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if (DAT_10027e00 == 0) {
    AfxCriticalInit();
  }
  piVar1 = &DAT_10027fb8 + param_1;
  if (*piVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10027fa0);
    if (*piVar1 == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_10027e08 + param_1 * 0x18));
      *piVar1 = *piVar1 + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10027fa0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10027e08 + param_1 * 0x18));
  return;
}



/**************************************************/

/* Function: AfxUnlockGlobals @ 10004d49 */

/* Library Function - Single Match
    void __stdcall AfxUnlockGlobals(int)
   
   Library: Visual Studio 2005 Release */

void AfxUnlockGlobals(int param_1)

{
  if (0x10 < (uint)param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10027e08 + param_1 * 0x18));
  return;
}



/**************************************************/

/* Function: FUN_10004d69 @ 10004d69 */

undefined4 FUN_10004d69(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  return *(undefined4 *)(pAVar1 + 4);
}



/**************************************************/

/* Function: AfxInternalProcessWndProcException @ 10004d72 */

/* Library Function - Single Match
    long __stdcall AfxInternalProcessWndProcException(class CException *,struct tagMSG const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long AfxInternalProcessWndProcException(CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
  if (param_2->message == 1) {
    lVar1 = -1;
  }
  else {
    if (param_2->message == 0xf) {
      ValidateRect(param_2->hwnd,(RECT *)0x0);
    }
    lVar1 = 0;
  }
  return lVar1;
}



/**************************************************/

/* Function: AfxProcessWndProcException @ 10004d97 */

/* Library Function - Single Match
    long __stdcall AfxProcessWndProcException(class CException *,struct tagMSG const *)
   
   Library: Visual Studio 2005 Release */

long AfxProcessWndProcException(CException *param_1,tagMSG *param_2)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  long lVar2;
  
  pAVar1 = AfxGetModuleThreadState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10004da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0x6c))();
    return lVar2;
  }
  lVar2 = AfxInternalProcessWndProcException(param_1,param_2);
  return lVar2;
}



/**************************************************/

/* Function: AfxTermThread @ 10004dad */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxTermThread(struct HINSTANCE__ *)
   
   Library: Visual Studio 2005 Release */

void AfxTermThread(HINSTANCE__ *param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  FUN_10004ef0();
  AfxUnlockTempMaps(-1);
  if (param_1 == (HINSTANCE__ *)0x0) {
    pAVar1 = AfxGetModuleThreadState();
    if ((pAVar1 != (AFX_MODULE_THREAD_STATE *)0x0) && (*(int **)(pAVar1 + 0x3c) != (int *)0x0)) {
      (**(code **)(**(int **)(pAVar1 + 0x3c) + 0x60))();
      if (*(int **)(pAVar1 + 0x3c) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar1 + 0x3c) + 4))(1);
      }
      *(undefined4 *)(pAVar1 + 0x3c) = 0;
    }
  }
  if (DAT_10027dc4 != (CThreadSlotData *)0x0) {
    CThreadSlotData::DeleteValues(DAT_10027dc4,param_1,0);
  }
  return;
}



/**************************************************/

/* Function: Catch@10004e22 @ 10004e22 */

undefined4 Catch_10004e22(void)

{
  int unaff_EBP;
  
  FUN_1000353d(*(int **)(unaff_EBP + -0x14));
  return 0x10004dc9;
}



/**************************************************/

/* Function: Catch@10004e30 @ 10004e30 */

undefined4 Catch_10004e30(void)

{
  int unaff_EBP;
  
  FUN_1000353d(*(int **)(unaff_EBP + -0x18));
  return 0x10004dff;
}



/**************************************************/

/* Function: Catch@10004e3e @ 10004e3e */

undefined4 Catch_10004e3e(void)

{
  int unaff_EBP;
  
  FUN_1000353d(*(int **)(unaff_EBP + -0x1c));
  return 0x10004e1a;
}



/**************************************************/

/* Function: FUN_10004e4c @ 10004e4c */

undefined4 FUN_10004e4c(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined4 uVar2;
  
  pAVar1 = AfxGetModuleThreadState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10004e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0x74))();
    return uVar2;
  }
  return 0;
}



/**************************************************/

/* Function: AfxInitThread @ 10004ec2 */

/* Library Function - Single Match
    void __stdcall AfxInitThread(void)
   
   Library: Visual Studio 2005 Release */

void AfxInitThread(void)

{
  AFX_MODULE_STATE *pAVar1;
  _AFX_THREAD_STATE *p_Var2;
  DWORD dwThreadId;
  HHOOK pHVar3;
  
  pAVar1 = AfxGetModuleState();
  if (pAVar1[0x14] == (AFX_MODULE_STATE)0x0) {
    p_Var2 = AfxGetThreadState();
    dwThreadId = GetCurrentThreadId();
    pHVar3 = SetWindowsHookExA(-1,(HOOKPROC)&LAB_10004e60,(HINSTANCE)0x0,dwThreadId);
    *(HHOOK *)(p_Var2 + 0x2c) = pHVar3;
  }
  return;
}



/**************************************************/

/* Function: FUN_10004ef0 @ 10004ef0 */

void FUN_10004ef0(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  *(int *)(pAVar1 + 0x10) = *(int *)(pAVar1 + 0x10) + 1;
  return;
}



/**************************************************/

/* Function: CHandleMap @ 10004ef9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CHandleMap::CHandleMap(struct CRuntimeClass *,void (__stdcall*)(class CObject
   *),void (__stdcall*)(class CObject *),unsigned int,int)
   
   Library: Visual Studio 2005 Release */

CHandleMap * __thiscall
CHandleMap::CHandleMap
          (CHandleMap *this,CRuntimeClass *param_1,_func_void_CObject_ptr *param_2,
          _func_void_CObject_ptr *param_3,uint param_4,int param_5)

{
  *(undefined ***)this = vftable;
  CFixedAllocNoSync::CFixedAllocNoSync((CFixedAllocNoSync *)(this + 4),*(uint *)(param_1 + 4),0x40);
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(this + 0x1c),10);
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(this + 0x38),4);
  if ((param_2 != (_func_void_CObject_ptr *)0x0) && (param_3 != (_func_void_CObject_ptr *)0x0)) {
    CMapPtrToPtr::InitHashTable((CMapPtrToPtr *)(this + 0x38),7,0);
    *(_func_void_CObject_ptr **)(this + 0x14) = param_2;
    *(_func_void_CObject_ptr **)(this + 0x18) = param_3;
    *(uint *)(this + 0x58) = param_4;
    *(int *)(this + 0x5c) = param_5;
    *(CRuntimeClass **)(this + 0x54) = param_1;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003617();
}



/**************************************************/

/* Function: FromHandle @ 10004f82 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CObject * __thiscall CHandleMap::FromHandle(void *)
   
   Library: Visual Studio 2005 Release */

CObject * __thiscall CHandleMap::FromHandle(CHandleMap *this,void *param_1)

{
  int iVar1;
  CObject *pCVar2;
  _func_int_uint *p_Var3;
  void **ppvVar4;
  
  if (param_1 == (void *)0x0) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(this + 0x1c),param_1);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(this + 0x38),param_1);
      if (pCVar2 == (CObject *)0x0) {
        p_Var3 = AfxSetNewHandler((_func_int_uint *)&LAB_1000bda4);
        pCVar2 = CFixedAllocNoSync::Alloc((CFixedAllocNoSync *)(this + 4));
        if (pCVar2 == (CObject *)0x0) {
          FUN_100035fd();
        }
        (**(code **)(this + 0x14))(pCVar2);
        ppvVar4 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(this + 0x38),param_1);
        *ppvVar4 = pCVar2;
        AfxSetNewHandler(p_Var3);
        iVar1 = *(int *)(this + 0x58);
        *(void **)(pCVar2 + iVar1) = param_1;
        if (*(int *)(this + 0x5c) == 2) {
          *(void **)(pCVar2 + iVar1 + 4) = param_1;
        }
      }
      else {
        iVar1 = *(int *)(this + 0x58);
        *(void **)(pCVar2 + iVar1) = param_1;
        if (*(int *)(this + 0x5c) == 2) {
          *(void **)(pCVar2 + iVar1 + 4) = param_1;
        }
      }
    }
  }
  return pCVar2;
}



/**************************************************/

/* Function: Catch@10005023 @ 10005023 */

void Catch_10005023(void)

{
  int unaff_EBP;
  
  AfxSetNewHandler(*(_func_int_uint **)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: DeleteTemp @ 10005035 */

/* Library Function - Single Match
    public: void __thiscall CHandleMap::DeleteTemp(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CHandleMap::DeleteTemp(CHandleMap *this)

{
  int iVar1;
  void *local_10;
  __POSITION *local_c;
  void *local_8;
  
  if (this != (CHandleMap *)0x0) {
    local_c = (__POSITION *)-(uint)(*(int *)(this + 0x44) != 0);
    if (local_c != (__POSITION *)0x0) {
      do {
        CMapPtrToPtr::GetNextAssoc((CMapPtrToPtr *)(this + 0x38),&local_c,&local_10,&local_8);
        iVar1 = *(int *)(this + 0x58);
        *(undefined4 *)(iVar1 + (int)local_8) = 0;
        if (*(int *)(this + 0x5c) == 2) {
          ((undefined4 *)(iVar1 + (int)local_8))[1] = 0;
        }
        (**(code **)(this + 0x18))(local_8);
      } while (local_c != (__POSITION *)0x0);
    }
    CMapPtrToPtr::RemoveAll((CMapPtrToPtr *)(this + 0x38));
    CFixedAllocNoSync::FreeAll((CFixedAllocNoSync *)(this + 4));
  }
  return;
}



/**************************************************/

/* Function: ~CHandleMap @ 10005098 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CHandleMap::~CHandleMap(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CHandleMap::~CHandleMap(CHandleMap *this)

{
  *(undefined ***)this = vftable;
  DeleteTemp(this);
  FUN_10006821((CMapPtrToPtr *)(this + 0x38));
  FUN_10006821((CMapPtrToPtr *)(this + 0x1c));
  FUN_1000bc74((int)(this + 4));
  return;
}



/**************************************************/

/* Function: `scalar_deleting_destructor' @ 100050e5 */

/* Library Function - Single Match
    public: virtual void * __thiscall CHandleMap::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall CHandleMap::_scalar_deleting_destructor_(CHandleMap *this,uint param_1)

{
  ~CHandleMap(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: AfxUnlockTempMaps @ 10005101 */

/* Library Function - Single Match
    int __stdcall AfxUnlockTempMaps(int)
   
   Library: Visual Studio 2005 Release */

int AfxUnlockTempMaps(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  CNoTrackObject *pCVar4;
  size_t sVar5;
  void *pvVar6;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x10) != 0) &&
     (iVar2 = *(int *)(pAVar1 + 0x10) + -1, *(int *)(pAVar1 + 0x10) = iVar2, iVar2 == 0)) {
    if (param_1 != 0) {
      if (((param_1 != -1) && (iVar2 = FUN_10004d69(), iVar2 != 0)) &&
         (*(code **)(iVar2 + 0x3c) != (code *)0x0)) {
        (**(code **)(iVar2 + 0x3c))(0,0);
      }
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x20));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x1c));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x18));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x14));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x24));
    }
    pAVar3 = AfxGetModuleState();
    iVar2 = *(int *)(pAVar3 + 4);
    pCVar4 = CThreadLocalObject::GetDataNA((CThreadLocalObject *)&DAT_10027dc0);
    if ((((pCVar4 != (CNoTrackObject *)0x0) && (iVar2 != 0)) &&
        ((*(void **)(pCVar4 + 0xc) == (void *)0x0 ||
         (sVar5 = __msize(*(void **)(pCVar4 + 0xc)), sVar5 < *(uint *)(iVar2 + 0x98))))) &&
       (*(int *)(iVar2 + 0x98) != 0)) {
      param_1 = 0;
      if (*(void **)(pCVar4 + 0xc) != (void *)0x0) {
        param_1 = __msize(*(void **)(pCVar4 + 0xc));
        _free(*(void **)(pCVar4 + 0xc));
      }
      pvVar6 = _malloc(*(size_t *)(iVar2 + 0x98));
      *(void **)(pCVar4 + 0xc) = pvVar6;
      if ((pvVar6 == (void *)0x0) && (param_1 != 0)) {
        pvVar6 = _malloc(param_1);
        *(void **)(pCVar4 + 0xc) = pvVar6;
      }
    }
  }
  return (uint)(*(int *)(pAVar1 + 0x10) != 0);
}



/**************************************************/

/* Function: AtlAdd<int> @ 100051fa */

/* Library Function - Single Match
    long __cdecl ATL::AtlAdd<int>(int *,int,int)
   
   Library: Visual Studio 2005 Release */

long __cdecl ATL::AtlAdd<int>(int *param_1,int param_2,int param_3)

{
  if (0x7fffffff - param_2 < param_3) {
    return -0x7ff8ffa9;
  }
  *param_1 = param_2 + param_3;
  return 0;
}



/**************************************************/

/* Function: AtlAddThrow<int> @ 1000521e */

/* Library Function - Single Match
    int __cdecl ATL::AtlAddThrow<int>(int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl ATL::AtlAddThrow<int>(int param_1,int param_2)

{
  undefined4 *puVar1;
  int local_8;
  
  puVar1 = (undefined4 *)AtlAdd<int>(&local_8,param_1,param_2);
  if ((int)puVar1 < 0) {
    FUN_10001d30(puVar1);
  }
  return local_8;
}



/**************************************************/

/* Function: GetManager @ 10005243 */

/* Library Function - Single Match
    public: struct ATL::IAtlStringMgr * __thiscall ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >::GetManager(void)const 
   
   Library: Visual Studio 2005 Release */

IAtlStringMgr * __thiscall
ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::GetManager
          (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this)

{
  IAtlStringMgr *pIVar1;
  int *piVar2;
  
  if (*(int **)(*(int *)this + -0x10) == (int *)0x0) {
    pIVar1 = (IAtlStringMgr *)0x0;
  }
  else {
    pIVar1 = (IAtlStringMgr *)(**(code **)(**(int **)(*(int *)this + -0x10) + 0x10))();
  }
  if (pIVar1 == (IAtlStringMgr *)0x0) {
    piVar2 = FUN_10003a84();
                    /* WARNING: Could not recover jumptable at 0x10005262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar1 = (IAtlStringMgr *)(**(code **)(*piVar2 + 0x10))();
    return pIVar1;
  }
  return pIVar1;
}



/**************************************************/

/* Function: CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> @ 10005266 */

/* Library Function - Single Match
    public: __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >(char const *,int,struct
   ATL::IAtlStringMgr *)
   
   Library: Visual Studio 2005 Release */

CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> * __thiscall
ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::
CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
          (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this,char *param_1
          ,int param_2,IAtlStringMgr *param_3)

{
  CSimpleStringT<char,0>::CSimpleStringT<char,0>
            ((CSimpleStringT<char,0> *)this,param_1,param_2,param_3);
  return this;
}



/**************************************************/

/* Function: Mid @ 10005280 */

/* Library Function - Single Match
    public: class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::Mid(int,int)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall
ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::Mid
          (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  IAtlStringMgr *pIVar3;
  int in_stack_0000000c;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = 0;
  }
  iVar1 = *(int *)(*(int *)this + -0xc);
  iVar2 = AtlAddThrow<int>(param_2,in_stack_0000000c);
  if (iVar1 < iVar2) {
    in_stack_0000000c = *(int *)(*(int *)this + -0xc) - param_2;
  }
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (iVar2 < param_2) {
    in_stack_0000000c = 0;
  }
  if ((param_2 == 0) && (in_stack_0000000c == iVar2)) {
    CSimpleStringT<char,0>::CSimpleStringT<char,0>
              ((CSimpleStringT<char,0> *)param_1,(CSimpleStringT<char,0> *)this);
  }
  else {
    pIVar3 = GetManager(this);
    CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
              ((CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)param_1,
               (char *)(iVar1 + param_2),in_stack_0000000c,pIVar3);
  }
  return param_1;
}



/**************************************************/

/* Function: CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> @ 100052fd */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >(char const *,struct
   ATL::IAtlStringMgr *)
   
   Library: Visual Studio 2005 Release */

CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> * __thiscall
ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::
CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
          (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this,char *param_1
          ,IAtlStringMgr *param_2)

{
  undefined4 uVar1;
  
  FUN_10002c40(this,(int *)param_2);
  uVar1 = CheckImplicitLoad(this,(uint)param_1);
  if ((char)uVar1 == '\0') {
    CSimpleStringT<char,0>::SetString((CSimpleStringT<char,0> *)this,param_1);
  }
  return this;
}



/**************************************************/

/* Function: Tokenize @ 1000533c */

/* Library Function - Single Match
    public: class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::Tokenize(char const *,int &)const 
   
   Library: Visual Studio 2005 Release */

char * __thiscall
ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::Tokenize
          (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this,char *param_1
          ,int *param_2)

{
  uchar *_Str;
  int iVar1;
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this_00;
  size_t sVar2;
  size_t sVar3;
  IAtlStringMgr *pIVar4;
  int iVar5;
  uchar *puVar6;
  undefined8 uVar7;
  int *in_stack_0000000c;
  
  iVar5 = *in_stack_0000000c;
  this_00 = this;
  if (iVar5 < 0) {
    uVar7 = FUN_10001d30((undefined4 *)0x80070057);
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    this_00 = (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)uVar7;
  }
  if ((param_2 == (int *)0x0) || ((char)*param_2 == '\0')) {
    iVar1 = *(int *)this_00;
    this = this_00;
    if (iVar5 < *(int *)(iVar1 + -0xc)) {
      pIVar4 = GetManager(this_00);
      CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
                ((CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)param_1,
                 (char *)(*in_stack_0000000c + iVar1),pIVar4);
      return param_1;
    }
  }
  else {
    iVar1 = *(int *)this_00;
    _Str = (uchar *)(iVar1 + iVar5);
    puVar6 = (uchar *)(*(int *)(iVar1 + -0xc) + iVar1);
    if (_Str < puVar6) {
      sVar2 = __mbsspn(_Str,(uchar *)param_2);
      if (_Str + sVar2 < puVar6) {
        sVar3 = __mbscspn(_Str + sVar2,(uchar *)param_2);
        iVar5 = *in_stack_0000000c;
        *in_stack_0000000c = iVar5 + sVar2 + 1 + sVar3;
        Mid(this,(int)param_1,iVar5 + sVar2);
        return param_1;
      }
    }
  }
  *in_stack_0000000c = -1;
  pIVar4 = GetManager(this);
  FUN_10002c40(param_1,(int *)pIVar4);
  return param_1;
}



/**************************************************/

/* Function: AfxUnregisterWndClasses @ 100053ef */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxUnregisterWndClasses(void)
   
   Library: Visual Studio 2005 Release */

void AfxUnregisterWndClasses(void)

{
  CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *this;
  AFX_MODULE_STATE *pAVar1;
  undefined4 *puVar2;
  int local_1c [2];
  LPCSTR local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100053fb;
  pAVar1 = AfxGetModuleState();
  AfxLockGlobals(1);
  this = (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)(pAVar1 + 0x34);
  local_1c[1] = 0;
  ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::Tokenize
            (this,(char *)local_14,(int *)&DAT_1001e6e4);
  local_8 = 0;
  while (*(int *)(local_14[0] + -0xc) != 0) {
    pAVar1 = AfxGetModuleState();
    UnregisterClassA(local_14[0],*(HINSTANCE *)(pAVar1 + 8));
    puVar2 = (undefined4 *)
             ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::Tokenize
                       (this,(char *)local_1c,(int *)&DAT_1001e6e4);
    local_8._0_1_ = 1;
    FID_conflict_operator_(local_14,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10001f50((undefined4 *)(local_1c[0] + -0x10));
  }
  Empty((int *)this);
  AfxUnlockGlobals(1);
  FUN_10001f50((undefined4 *)(local_14[0] + -0x10));
  return;
}



/**************************************************/

/* Function: AfxWinTerm @ 1000548e */

/* Library Function - Single Match
    void __stdcall AfxWinTerm(void)
   
   Library: Visual Studio 2005 Release */

void AfxWinTerm(void)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  AFX_MODULE_THREAD_STATE *pAVar3;
  int iVar4;
  _AFX_THREAD_STATE *p_Var5;
  
  AfxUnregisterWndClasses();
  pAVar2 = AfxGetModuleState();
  if ((*(int *)(pAVar2 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(pAVar2 + 4) + 0x3c), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,0);
  }
  pAVar3 = AfxGetModuleThreadState();
  if ((*(int **)(pAVar3 + 0x3c) != (int *)0x0) &&
     (iVar4 = (**(code **)(**(int **)(pAVar3 + 0x3c) + 0x13c))(), iVar4 != 0)) {
    *(undefined4 *)(pAVar3 + 0x3c) = 0;
  }
  p_Var5 = AfxGetThreadState();
  pAVar2 = AfxGetModuleState();
  if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
    if (*(HHOOK *)(p_Var5 + 0x2c) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(p_Var5 + 0x2c));
      *(undefined4 *)(p_Var5 + 0x2c) = 0;
    }
    if (*(HHOOK *)(p_Var5 + 0x28) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(p_Var5 + 0x28));
      *(undefined4 *)(p_Var5 + 0x28) = 0;
    }
  }
  return;
}



/**************************************************/

/* Function: tcscpy_s @ 10005502 */

/* Library Function - Single Match
    void __cdecl ATL::Checked::tcscpy_s(char *,unsigned int,char const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl ATL::Checked::tcscpy_s(char *param_1,uint param_2,char *param_3)

{
  errno_t eVar1;
  
  eVar1 = _strcpy_s(param_1,param_2,param_3);
  FUN_10001c30(eVar1);
  return;
}



/**************************************************/

/* Function: AfxGetFileName @ 1000551d */

/* Library Function - Single Match
    unsigned int __stdcall AfxGetFileName(char const *,char *,unsigned int)
   
   Library: Visual Studio 2005 Release */

uint AfxGetFileName(char *param_1,char *param_2,uint param_3)

{
  LPSTR lpString;
  int iVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  lpString = PathFindFileNameA(param_1);
  if (param_2 == (char *)0x0) {
    iVar1 = lstrlenA(lpString);
    uVar2 = iVar1 + 1;
  }
  else {
    ATL::Checked::tcsncpy_s(param_2,param_3,lpString,0xffffffff);
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: SetCurrentHandles @ 1000555b */

/* Library Function - Single Match
    public: void __thiscall CWinApp::SetCurrentHandles(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWinApp::SetCurrentHandles(CWinApp *this)

{
  AFX_MODULE_STATE *pAVar1;
  DWORD DVar2;
  LPSTR pCVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  errno_t eVar7;
  CHAR *_Src;
  CHAR local_310 [124];
  undefined1 local_294 [132];
  char local_210 [260];
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)local_294;
  pAVar1 = AfxGetModuleState();
  *(undefined4 *)(pAVar1 + 8) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(pAVar1 + 0xc) = *(undefined4 *)(this + 0x44);
  DVar2 = GetModuleFileNameA(*(HMODULE *)(this + 0x44),local_10c,0x104);
  if ((DVar2 == 0) || (DVar2 == 0x104)) {
    FUN_1000bfa4();
  }
  pCVar3 = PathFindExtensionA(local_10c);
  if (pCVar3 == (LPSTR)0x0) {
    FUN_1000bfa4();
  }
  *pCVar3 = '\0';
  uVar4 = AfxGetFileName(local_10c,local_210,0x104);
  if (uVar4 != 0) {
    FUN_1000bfa4();
  }
  if (*(int *)(this + 0x60) == 0) {
    pcVar5 = __strdup(local_210);
    *(char **)(this + 0x60) = pcVar5;
    if (pcVar5 == (char *)0x0) goto LAB_10005607;
  }
  pcVar5 = *(char **)(this + 0x50);
  if (pcVar5 == (char *)0x0) {
    iVar6 = FUN_10005ada(0xe000,local_310,0x100);
    if (iVar6 == 0) {
      _Src = *(CHAR **)(this + 0x60);
    }
    else {
      _Src = local_310;
    }
    pcVar5 = __strdup(_Src);
    *(char **)(this + 0x50) = pcVar5;
    if (pcVar5 == (char *)0x0) goto LAB_10005607;
  }
  *(char **)(pAVar1 + 0x10) = pcVar5;
  if (*(int *)(this + 100) == 0) {
    if (*(int *)(this + 0x6c) == 1) {
      pcVar5 = ".CHM";
    }
    else {
      pcVar5 = ".HLP";
    }
    ATL::Checked::tcscpy_s(pCVar3,(int)&local_8 - (int)pCVar3,pcVar5);
    pcVar5 = __strdup(local_10c);
    *(char **)(this + 100) = pcVar5;
    if (pcVar5 == (char *)0x0) goto LAB_10005607;
    *pCVar3 = '\0';
  }
  if (*(int *)(this + 0x68) == 0) {
    eVar7 = _strcat_s(local_210,0x104,".INI");
    FUN_10001c30(eVar7);
    pcVar5 = __strdup(local_210);
    *(char **)(this + 0x68) = pcVar5;
    if (pcVar5 == (char *)0x0) {
LAB_10005607:
      FUN_100035fd();
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_294);
  return;
}



/**************************************************/

/* Function: AfxWinInit @ 100056da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __stdcall AfxWinInit(struct HINSTANCE__ *,struct HINSTANCE__ *,char *,int)
   
   Library: Visual Studio 2005 Release */

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  CWinApp *this;
  UINT UVar1;
  AFX_MODULE_STATE *pAVar2;
  HMODULE hModule;
  
  UVar1 = SetErrorMode(0);
  SetErrorMode(UVar1 | 0x8001);
  pAVar2 = AfxGetModuleState();
  *(HINSTANCE__ **)(pAVar2 + 8) = param_1;
  *(HINSTANCE__ **)(pAVar2 + 0xc) = param_1;
  AFX_MODULE_STATE::CreateActivationContext(pAVar2);
  pAVar2 = AfxGetModuleState();
  this = *(CWinApp **)(pAVar2 + 4);
  if (this != (CWinApp *)0x0) {
    *(char **)(this + 0x48) = param_3;
    *(int *)(this + 0x4c) = param_4;
    *(HINSTANCE__ **)(this + 0x44) = param_1;
    CWinApp::SetCurrentHandles(this);
  }
  pAVar2 = AfxGetModuleState();
  if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
    AfxInitThread();
  }
  hModule = GetModuleHandleA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    _DAT_10029884 = GetProcAddress(hModule,"NotifyWinEvent");
  }
  return 1;
}



/**************************************************/

/* Function: AfxClassInit @ 1000575e */

/* Library Function - Single Match
    void __stdcall AfxClassInit(struct CRuntimeClass *)
   
   Library: Visual Studio 2005 Release */

void AfxClassInit(CRuntimeClass *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  AfxLockGlobals(0);
  CSimpleList::AddHead((CSimpleList *)(pAVar1 + 0x1c),param_1);
  AfxUnlockGlobals(0);
  return;
}



/**************************************************/

/* Function: FUN_10005784 @ 10005784 */

undefined4 FUN_10005784(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
  p_Var1 = AfxGetThreadState();
  return *(undefined4 *)(p_Var1 + 0xec);
}



/**************************************************/

/* Function: AfxCtxMessageBoxA @ 10005790 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __cdecl AfxCtxMessageBoxA(struct HWND__ *,char const *,char const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl AfxCtxMessageBoxA(HWND__ *param_1,char *param_2,char *param_3,uint param_4)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10022798;
  uStack_c = 0x1000579c;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = 0;
  if (eVar2 == 0) {
    local_20 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = MessageBoxA(param_1,param_2,param_3,param_4);
    local_8 = (undefined *)0xfffffffe;
    FUN_100057f2();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_100057f2 @ 100057f2 */

void FUN_100057f2(void)

{
  uint uVar1;
  DWORD dwErrCode;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    uVar1 = (uint)(*(uint *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (uVar1 == unaff_EBX) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_10003ce2();
    if (uVar1 != unaff_EBX) {
      SetLastError(dwErrCode);
    }
  }
  return;
}



/**************************************************/

/* Function: DoEnableModeless @ 10005827 */

/* Library Function - Single Match
    public: static void __cdecl CWinApp::DoEnableModeless(int)
   
   Library: Visual Studio 2005 Release */

void __cdecl CWinApp::DoEnableModeless(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10004e4c();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x120))();
    if ((iVar2 != 0) && (piVar1[0x20] != 0)) {
      (**(code **)(*(int *)piVar1[0x20] + 100))(param_1);
    }
  }
  return;
}



/**************************************************/

/* Function: GetSafeOwner_ @ 1000585b */

/* Library Function - Single Match
    public: static struct HWND__ * __stdcall CWnd::GetSafeOwner_(struct HWND__ *,struct HWND__ * *)
   
   Library: Visual Studio 2005 Release */

HWND__ * CWnd::GetSafeOwner_(HWND__ *param_1,HWND__ **param_2)

{
  HWND hWnd;
  int iVar1;
  uint uVar2;
  HWND pHVar3;
  HWND hWnd_00;
  BOOL BVar4;
  HWND hWnd_01;
  
  hWnd_01 = param_1;
  if (param_1 != (HWND__ *)0x0) goto LAB_1000588a;
  iVar1 = FUN_10005784();
  if ((iVar1 == 0) && (iVar1 = FUN_10004e4c(), iVar1 == 0)) {
    hWnd_01 = (HWND)0x0;
    pHVar3 = hWnd_01;
    hWnd_00 = hWnd_01;
  }
  else {
    for (hWnd_01 = *(HWND *)(iVar1 + 0x20); pHVar3 = hWnd_01, hWnd_00 = hWnd_01,
        hWnd_01 != (HWND)0x0; hWnd_01 = GetParent(hWnd_01)) {
LAB_1000588a:
      uVar2 = GetWindowLongA(hWnd_01,-0x10);
      pHVar3 = hWnd_01;
      hWnd_00 = hWnd_01;
      if ((uVar2 & 0x40000000) == 0) break;
    }
  }
  while (hWnd = pHVar3, hWnd != (HWND)0x0) {
    pHVar3 = GetParent(hWnd);
    hWnd_01 = hWnd;
  }
  if ((param_1 == (HWND__ *)0x0) && (hWnd_00 != (HWND)0x0)) {
    hWnd_00 = GetLastActivePopup(hWnd_00);
  }
  if (param_2 != (HWND__ **)0x0) {
    if (((hWnd_01 == (HWND)0x0) || (BVar4 = ::IsWindowEnabled(hWnd_01), BVar4 == 0)) ||
       (hWnd_01 == hWnd_00)) {
      *param_2 = (HWND__ *)0x0;
    }
    else {
      *param_2 = hWnd_01;
      ::EnableWindow(hWnd_01,0);
    }
  }
  return hWnd_00;
}



/**************************************************/

/* Function: ShowAppMessageBox @ 100058f9 */

/* Library Function - Single Match
    public: static int __cdecl CWinApp::ShowAppMessageBox(class CWinApp *,char const *,unsigned
   int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl CWinApp::ShowAppMessageBox(CWinApp *param_1,char *param_2,uint param_3,uint param_4)

{
  HWND__ *hWnd;
  DWORD DVar1;
  CWinApp *pCVar2;
  int iVar3;
  LPSTR lpFilename;
  DWORD local_118;
  int local_114;
  HWND__ *local_110;
  CHAR local_10c [108];
  undefined1 local_a0 [151];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)local_a0;
  DoEnableModeless(0);
  hWnd = CWnd::GetSafeOwner_((HWND__ *)0x0,&local_110);
  if (hWnd != local_110) {
    EnableWindow(hWnd,1);
  }
  local_118 = 0;
  GetWindowThreadProcessId(hWnd,&local_118);
  if ((((hWnd == (HWND__ *)0x0) || (DVar1 = GetCurrentProcessId(), local_118 != DVar1)) ||
      (pCVar2 = (CWinApp *)SendMessageA(hWnd,0x376,0,0), pCVar2 == (CWinApp *)0x0)) &&
     (pCVar2 = (CWinApp *)0x0, param_1 != (CWinApp *)0x0)) {
    pCVar2 = param_1 + 0x78;
  }
  local_114 = 0;
  if ((pCVar2 != (CWinApp *)0x0) && (local_114 = *(int *)pCVar2, param_4 != 0)) {
    *(uint *)pCVar2 = param_4 + 0x30000;
  }
  if ((param_3 & 0xf0) == 0) {
    if ((param_3 & 0xf) < 2) {
      param_3 = param_3 | 0x30;
    }
    else if ((param_3 & 0xf) - 3 < 2) {
      param_3 = param_3 | 0x20;
    }
  }
  local_10c[0] = '\0';
  if (param_1 == (CWinApp *)0x0) {
    lpFilename = local_10c;
    DVar1 = GetModuleFileNameA((HMODULE)0x0,lpFilename,0x104);
    if (DVar1 == 0x104) {
      local_9 = 0;
    }
  }
  else {
    lpFilename = *(LPSTR *)(param_1 + 0x50);
  }
  AfxCtxMessageBoxA(hWnd,param_2,lpFilename,param_3);
  if (pCVar2 != (CWinApp *)0x0) {
    *(int *)pCVar2 = local_114;
  }
  if (local_110 != (HWND)0x0) {
    EnableWindow(local_110,1);
  }
  DoEnableModeless(1);
  iVar3 = __security_check_cookie(local_8 ^ (uint)local_a0);
  return iVar3;
}



/**************************************************/

/* Function: AfxMessageBox @ 10005a54 */

/* Library Function - Single Match
    int __stdcall AfxMessageBox(char const *,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10005a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0x98))();
    return iVar2;
  }
  iVar2 = CWinApp::ShowAppMessageBox((CWinApp *)0x0,param_1,param_2,param_3);
  return iVar2;
}



/**************************************************/

/* Function: AfxMessageBox @ 10005a85 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __stdcall AfxMessageBox(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int AfxMessageBox(uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10005a91;
  piVar1 = FUN_10003a84();
  FUN_10002c40(local_14,piVar1);
  local_8 = 0;
  ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::LoadStringA
            ((CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)local_14,
             param_1);
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  iVar2 = AfxMessageBox(local_14[0],param_2,param_3);
  FUN_10001f50((undefined4 *)(local_14[0] + -0x10));
  return iVar2;
}



/**************************************************/

/* Function: FUN_10005ada @ 10005ada */

int FUN_10005ada(uint param_1,LPSTR param_2,int param_3)

{
  AFX_MODULE_STATE *pAVar1;
  ATLSTRINGRESOURCEIMAGE *pAVar2;
  int iVar3;
  
  if ((param_2 != (LPSTR)0x0) && (param_3 != 0)) {
    pAVar1 = AfxGetModuleState();
    pAVar2 = ATL::AtlGetStringResourceImage(*(HINSTANCE__ **)(pAVar1 + 0xc),param_1);
    if (pAVar2 == (ATLSTRINGRESOURCEIMAGE *)0x0) {
      *param_2 = '\0';
      iVar3 = 0;
    }
    else {
      iVar3 = WideCharToMultiByte(0,0,(LPCWSTR)(pAVar2 + 2),(uint)*(ushort *)pAVar2,param_2,
                                  param_3 + -1,(LPCSTR)0x0,(LPBOOL)0x0);
      param_2[iVar3] = '\0';
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003617();
}



/**************************************************/

/* Function: FUN_10005b31 @ 10005b31 */

undefined4 FUN_10005b31(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  return *(undefined4 *)(pAVar1 + 0xc);
}



/**************************************************/

/* Function: ReleaseBuffer @ 10005b3c */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<char,0>::ReleaseBuffer(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CSimpleStringT<char,0>::ReleaseBuffer(CSimpleStringT<char,0> *this,int param_1)

{
  if ((param_1 == -1) && (param_1 = 0, *(char **)this != (char *)0x0)) {
    param_1 = _strlen(*(char **)this);
  }
  FUN_10002e00(this,param_1);
  return;
}



/**************************************************/

/* Function: GetInterface @ 10005b61 */

/* Library Function - Single Match
    public: struct IUnknown * __thiscall CCmdTarget::GetInterface(void const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

IUnknown * __thiscall CCmdTarget::GetInterface(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  pIVar1 = (IUnknown *)(**(code **)(*(int *)this + 0x44))(param_1);
  if (pIVar1 == (IUnknown *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x38))();
    if ((((DAT_1001f538 == *(int *)param_1) && (*(int *)((int)param_1 + 4) == DAT_1001f53c)) &&
        (*(int *)((int)param_1 + 8) == DAT_1001f540)) &&
       (*(int *)((int)param_1 + 0xc) == DAT_1001f544)) {
      do {
        for (piVar3 = (int *)piVar2[1]; *piVar3 != 0; piVar3 = piVar3 + 2) {
          if (*(IUnknownVtbl **)(this + piVar3[1]) != (IUnknownVtbl *)0x0) {
            return (IUnknown *)(this + piVar3[1]);
          }
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
    else {
      do {
        for (puVar4 = (undefined4 *)piVar2[1]; piVar3 = (int *)*puVar4, piVar3 != (int *)0x0;
            puVar4 = puVar4 + 2) {
          if (((*piVar3 == *(int *)param_1) && (piVar3[1] == *(int *)((int)param_1 + 4))) &&
             ((piVar3[2] == *(int *)((int)param_1 + 8) &&
              ((piVar3[3] == *(int *)((int)param_1 + 0xc) &&
               (*(IUnknownVtbl **)(this + puVar4[1]) != (IUnknownVtbl *)0x0)))))) {
            return (IUnknown *)(this + puVar4[1]);
          }
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
    pIVar1 = (IUnknown *)0x0;
  }
  return pIVar1;
}



/**************************************************/

/* Function: QueryAggregates @ 10005c0f */

/* Library Function - Single Match
    public: struct IUnknown * __thiscall CCmdTarget::QueryAggregates(void const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

IUnknown * __thiscall CCmdTarget::QueryAggregates(CCmdTarget *this,void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  CCmdTarget *local_8;
  
  local_8 = this;
  piVar2 = (int *)(**(code **)(*(int *)this + 0x38))();
  do {
    for (piVar3 = (int *)piVar2[1]; *piVar3 != 0; piVar3 = piVar3 + 2) {
    }
    for (piVar3 = piVar3 + 1; *piVar3 != -1; piVar3 = piVar3 + 2) {
      puVar1 = *(undefined4 **)(this + *piVar3);
      if (puVar1 != (undefined4 *)0x0) {
        local_8 = (CCmdTarget *)0x0;
        iVar4 = (**(code **)*puVar1)(puVar1,param_1,&local_8);
        if ((iVar4 == 0) && (local_8 != (CCmdTarget *)0x0)) {
          return (IUnknown *)local_8;
        }
      }
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      return (IUnknown *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: _IsEqualGUID @ 10005c6f */

/* Library Function - Single Match
    _IsEqualGUID
   
   Library: Visual Studio 2005 Release */

bool __cdecl _IsEqualGUID(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = _memcmp(param_1,param_2,0x10);
  return (bool)('\x01' - (iVar1 != 0));
}



/**************************************************/

/* Function: FUN_10005c87 @ 10005c87 */

void __fastcall FUN_10005c87(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_10003ce2();
  }
  return;
}



/**************************************************/

/* Function: ExternalAddRef @ 10005c97 */

/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::ExternalAddRef(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

ulong __thiscall CCmdTarget::ExternalAddRef(CCmdTarget *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = (**(code **)(**(int **)(this + 8) + 4))(*(int **)(this + 8));
    return uVar1;
  }
  uVar1 = InterlockedIncrement((LONG *)(this + 4));
  return uVar1;
}



/**************************************************/

/* Function: InternalRelease @ 10005cb2 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::InternalRelease(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

ulong __thiscall CCmdTarget::InternalRelease(CCmdTarget *this)

{
  ulong uVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10005cbe;
  if (*(int *)(this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = InterlockedDecrement((LONG *)(this + 4));
    if (uVar1 == 0) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(this + 0x1c));
      local_8 = 0;
      (**(code **)(*(int *)this + 0x10))();
      local_8 = 0xffffffff;
      if (local_14 != 0) {
        FUN_10003ce2();
      }
    }
  }
  return uVar1;
}



/**************************************************/

/* Function: ExternalRelease @ 10005d08 */

/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::ExternalRelease(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

ulong __thiscall CCmdTarget::ExternalRelease(CCmdTarget *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = (**(code **)(**(int **)(this + 8) + 8))(*(int **)(this + 8));
    return uVar1;
  }
  uVar1 = InternalRelease(this);
  return uVar1;
}



/**************************************************/

/* Function: FUN_10005d5d @ 10005d5d */

int __thiscall FUN_10005d5d(void *this,void *param_1,undefined4 *param_2)

{
  IUnknown *pIVar1;
  int iVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    iVar2 = (**(code **)**(undefined4 **)((int)this + 8))
                      (*(undefined4 **)((int)this + 8),param_1,param_2);
    return iVar2;
  }
  pIVar1 = CCmdTarget::GetInterface(this,param_1);
  *param_2 = pIVar1;
  if (pIVar1 == (IUnknown *)0x0) {
    pIVar1 = CCmdTarget::QueryAggregates(this,param_1);
    *param_2 = pIVar1;
    iVar2 = (-(uint)(pIVar1 != (IUnknown *)0x0) & 0x7fffbffe) + 0x80004002;
  }
  else {
    CCmdTarget::ExternalAddRef(this);
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: UpdateSysColors @ 10005d7b */

/* Library Function - Single Match
    public: void __thiscall AUX_DATA::UpdateSysColors(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall AUX_DATA::UpdateSysColors(AUX_DATA *this)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  
  DVar1 = GetSysColor(0xf);
  *(DWORD *)(this + 0x28) = DVar1;
  DVar1 = GetSysColor(0x10);
  *(DWORD *)(this + 0x2c) = DVar1;
  DVar1 = GetSysColor(0x14);
  *(DWORD *)(this + 0x30) = DVar1;
  DVar1 = GetSysColor(0x12);
  *(DWORD *)(this + 0x34) = DVar1;
  DVar1 = GetSysColor(6);
  *(DWORD *)(this + 0x38) = DVar1;
  pHVar2 = GetSysColorBrush(0xf);
  *(HBRUSH *)(this + 0x24) = pHVar2;
  pHVar2 = GetSysColorBrush(6);
  *(HBRUSH *)(this + 0x20) = pHVar2;
  return;
}



/**************************************************/

/* Function: UpdateSysMetrics @ 10005dbf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: void __thiscall AUX_DATA::UpdateSysMetrics(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall AUX_DATA::UpdateSysMetrics(AUX_DATA *this)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = GetSystemMetrics(0xb);
  *(int *)(this + 8) = iVar1;
  iVar1 = GetSystemMetrics(0xc);
  *(int *)(this + 0xc) = iVar1;
  _DAT_10028000 = GetSystemMetrics(2);
  _DAT_10028000 = _DAT_10028000 + 1;
  _DAT_10028004 = GetSystemMetrics(3);
  _DAT_10028004 = _DAT_10028004 + 1;
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(int *)(this + 0x18) = iVar1;
  iVar1 = GetDeviceCaps(hdc,0x5a);
  *(int *)(this + 0x1c) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}



/**************************************************/

/* Function: AUX_DATA @ 10005e19 */

/* Library Function - Single Match
    public: __thiscall AUX_DATA::AUX_DATA(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

AUX_DATA * __thiscall AUX_DATA::AUX_DATA(AUX_DATA *this)

{
  DWORD DVar1;
  HCURSOR pHVar2;
  
  DVar1 = GetVersion();
  *(DWORD *)(this + 0x54) = DVar1 >> 0x1f;
  UpdateSysMetrics(this);
  *(undefined4 *)(this + 0x24) = 0;
  UpdateSysColors(this);
  pHVar2 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  *(HCURSOR *)(this + 0x3c) = pHVar2;
  pHVar2 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  *(HCURSOR *)(this + 0x40) = pHVar2;
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  return this;
}



/**************************************************/

/* Function: FormatV @ 10005e6e */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::FormatV(char const *,char *)
    public: void __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::FormatV(wchar_t const *,char *)
   
   Library: Visual Studio 2005 Release */

void __thiscall FormatV(void *this,wchar_t *param_1,va_list param_2)

{
  int iVar1;
  char *_DstBuf;
  
  if (param_1 == (wchar_t *)0x0) {
    FUN_10001d30((undefined4 *)0x80070057);
  }
  iVar1 = FID_conflict___vscwprintf(param_1,param_2);
  _DstBuf = ATL::CSimpleStringT<char,0>::PrepareWrite(this,iVar1);
  _vsprintf_s(_DstBuf,iVar1 + 1,(char *)param_1,param_2);
  FUN_10002e00(this,iVar1);
  return;
}



/**************************************************/

/* Function: Format @ 10005ebd */

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::Format(char const *,...)
    public: void __cdecl ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::Format(wchar_t const *,...)
   
   Library: Visual Studio 2005 Release */

void __cdecl Format(void *param_1,wchar_t *param_2)

{
  FormatV(param_1,param_2,&stack0x0000000c);
  return;
}



/**************************************************/

/* Function: Catch@10005f26 @ 10005f26 */

undefined1 * Catch_10005f26(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = FUN_10003a84();
  FUN_10002c40((void *)(unaff_EBP + -0x14),piVar2);
  piVar2 = *(int **)(unaff_EBP + -0x18);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = (**(code **)(iVar3 + 0xc))();
  if (iVar3 == 0) {
    Format((void *)(unaff_EBP + -0x14),(wchar_t *)"%s (%s:%d)");
  }
  else {
    Format((void *)(unaff_EBP + -0x14),(wchar_t *)"%s (%s:%d)\n%s");
  }
  pcVar1 = *(char **)(unaff_EBP + -0x14);
  AfxMessageBox(pcVar1,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_10001f50((undefined4 *)(pcVar1 + -0x10));
  (**(code **)(*piVar2 + 4))(1);
  return &LAB_10005f03;
}



/**************************************************/

/* Function: AfxIsValidString @ 10005fb8 */

/* Library Function - Single Match
    int __stdcall AfxIsValidString(wchar_t const *,int)
   
   Library: Visual Studio 2005 Release */

int AfxIsValidString(wchar_t *param_1,int param_2)

{
  return (uint)(param_1 != (wchar_t *)0x0);
}



/**************************************************/

/* Function: memmove_s @ 10005fc4 */

/* Library Function - Single Match
    void __cdecl ATL::Checked::memmove_s(void *,unsigned int,void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __cdecl ATL::Checked::memmove_s(void *param_1,uint param_2,void *param_3,uint param_4)

{
  errno_t eVar1;
  
  eVar1 = _memmove_s(param_1,param_2,param_3,param_4);
  FUN_10001c30(eVar1);
  return;
}



/**************************************************/

/* Function: Read @ 10005fe3 */

/* Library Function - Single Match
    public: unsigned int __thiscall CArchive::Read(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int local_c;
  uint local_8;
  
  if ((param_2 == 0) || (param_1 == (void *)0x0)) {
    uVar1 = 0;
  }
  else {
    if (((byte)this[0x18] & 1) == 0) {
      FUN_100065d6(4,*(char **)(this + 0x14));
    }
    uVar1 = *(int *)(this + 0x2c) - (int)*(void **)(this + 0x28);
    if (param_2 < uVar1) {
      uVar1 = param_2;
    }
    FUN_10003751(param_1,param_2,*(void **)(this + 0x28),uVar1);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar1;
    param_1 = (void *)((int)param_1 + uVar1);
    uVar1 = param_2 - uVar1;
    if (uVar1 != 0) {
      iVar4 = uVar1 - uVar1 % *(uint *)(this + 0x20);
      local_c = 0;
      local_8 = iVar4;
      do {
        iVar2 = (**(code **)(**(int **)(this + 0x24) + 0x34))(param_1,local_8);
        param_1 = (void *)((int)param_1 + iVar2);
        local_c = local_c + iVar2;
        local_8 = local_8 - iVar2;
        if (iVar2 == 0) break;
      } while (local_8 != 0);
      uVar1 = uVar1 - local_c;
      if ((uVar1 != 0) && (local_c == iVar4)) {
        uVar5 = 0;
        if (*(int *)(this + 8) == 0) {
          if ((*(int *)(this + 0xc) != 0) ||
             (local_8 = *(uint *)(this + 0x20), *(uint *)(this + 0x20) < uVar1)) {
            local_8 = uVar1;
          }
          local_c = *(int *)(this + 0x30);
          do {
            iVar4 = (**(code **)(**(int **)(this + 0x24) + 0x34))(local_c,local_8);
            local_c = local_c + iVar4;
            local_8 = local_8 - iVar4;
            uVar5 = uVar5 + iVar4;
            if ((iVar4 == 0) || (local_8 == 0)) break;
          } while (uVar5 < uVar1);
          pvVar3 = *(void **)(this + 0x30);
          *(uint *)(this + 0x2c) = (int)pvVar3 + uVar5;
        }
        else {
          (**(code **)(**(int **)(this + 0x24) + 0x50))
                    (0,*(undefined4 *)(this + 0x20),this + 0x30,this + 0x2c);
          pvVar3 = *(void **)(this + 0x30);
        }
        *(void **)(this + 0x28) = pvVar3;
        uVar5 = *(int *)(this + 0x2c) - (int)pvVar3;
        if (uVar1 < (uint)(*(int *)(this + 0x2c) - (int)pvVar3)) {
          uVar5 = uVar1;
        }
        FUN_10003751(param_1,uVar1,pvVar3,uVar5);
        *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar5;
        uVar1 = uVar1 - uVar5;
      }
    }
    uVar1 = param_2 - uVar1;
  }
  return uVar1;
}



/**************************************************/

/* Function: Flush @ 10006112 */

/* Library Function - Single Match
    public: void __thiscall CArchive::Flush(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::Flush(CArchive *this)

{
  CArchive *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x28);
  if (((byte)this[0x18] & 1) == 0) {
    pCVar1 = this + 0x30;
    iVar2 = *(int *)pCVar1;
    if (*(int *)(this + 8) == 0) {
      if (iVar3 != iVar2) {
        (**(code **)(**(int **)(this + 0x24) + 0x38))(iVar2,iVar3 - iVar2);
      }
    }
    else {
      if (iVar3 != iVar2) {
        (**(code **)(**(int **)(this + 0x24) + 0x50))(2,iVar3 - iVar2,0,0);
      }
      (**(code **)(**(int **)(this + 0x24) + 0x50))
                (1,*(undefined4 *)(this + 0x20),pCVar1,this + 0x2c);
    }
    iVar3 = *(int *)pCVar1;
  }
  else {
    if (*(int *)(this + 0x2c) != iVar3) {
      iVar3 = iVar3 - *(int *)(this + 0x2c);
      (**(code **)(**(int **)(this + 0x24) + 0x28))(iVar3,iVar3 >> 0x1f,1);
    }
    iVar3 = *(int *)(this + 0x2c);
  }
  *(int *)(this + 0x28) = iVar3;
  return;
}



/**************************************************/

/* Function: FillBuffer @ 10006189 */

/* Library Function - Single Match
    public: void __thiscall CArchive::FillBuffer(unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::FillBuffer(CArchive *this,uint param_1)

{
  CArchive *pCVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  CArchive *unaff_ESI;
  int iVar6;
  undefined4 uVar7;
  CArchive *in_stack_ffffffe4;
  uint local_8;
  
  if (((byte)this[0x18] & 1) != 0) goto LAB_100061a3;
  in_stack_ffffffe4 = *(CArchive **)(this + 0x14);
  uVar7 = 4;
  do {
    FUN_100065d6(uVar7,(char *)in_stack_ffffffe4);
LAB_100061a3:
    pvVar2 = *(void **)(this + 0x28);
    pCVar1 = this + 0x2c;
    local_8 = *(int *)pCVar1 - (int)pvVar2;
    uVar3 = param_1 + local_8;
    if (*(int *)(this + 8) == 0) {
      pvVar4 = *(void **)(this + 0x30);
      if (pvVar4 < pvVar2) {
        if (0 < (int)local_8) {
          ATL::Checked::memmove_s(pvVar4,*(int *)pCVar1 - (int)pvVar4,pvVar2,local_8);
          pvVar4 = *(void **)(this + 0x30);
          *(void **)(this + 0x28) = pvVar4;
          *(uint *)pCVar1 = (int)pvVar4 + local_8;
        }
        if (*(int *)(this + 0xc) == 0) {
          param_1 = *(uint *)(this + 0x20);
        }
        param_1 = param_1 - local_8;
        iVar6 = local_8 + (int)pvVar4;
        do {
          in_stack_ffffffe4 = (CArchive *)param_1;
          iVar5 = (**(code **)(**(int **)(this + 0x24) + 0x34))(iVar6);
          local_8 = local_8 + iVar5;
          param_1 = param_1 - iVar5;
          iVar6 = iVar6 + iVar5;
          if ((iVar5 == 0) || (param_1 == 0)) break;
        } while (local_8 < uVar3);
        *(int *)(this + 0x28) = *(int *)(this + 0x30);
        *(uint *)pCVar1 = *(int *)(this + 0x30) + local_8;
      }
    }
    else {
      if (local_8 != 0) {
        (**(code **)(**(int **)(this + 0x24) + 0x28))(-local_8,(int)-local_8 >> 0x1f,1);
      }
      in_stack_ffffffe4 = pCVar1;
      (**(code **)(**(int **)(this + 0x24) + 0x50))(0,*(undefined4 *)(this + 0x20),this + 0x30);
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x30);
    }
    if (uVar3 <= (uint)(*(int *)pCVar1 - *(int *)(this + 0x28))) {
      return;
    }
    uVar7 = 3;
    this = unaff_ESI;
  } while( true );
}



/**************************************************/

/* Function: operator<< @ 10006276 */

/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator<<(unsigned short)
   
   Library: Visual Studio 2005 Release */

CArchive * __thiscall CArchive::operator<<(CArchive *this,ushort param_1)

{
  CArchive *extraout_ECX;
  CArchive *this_00;
  
  this_00 = this;
  if ((~*(uint *)(this + 0x18) & 1) == 0) {
    FUN_100065d6(2,*(char **)(this + 0x14));
    this_00 = extraout_ECX;
  }
  if (*(uint *)(this + 0x2c) < *(int *)(this + 0x28) + 2U) {
    Flush(this_00);
  }
  **(ushort **)(this + 0x28) = param_1;
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 2;
  return this;
}



/**************************************************/

/* Function: operator<< @ 100062b0 */

/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator<<(unsigned long)
   
   Library: Visual Studio 2005 Release */

CArchive * __thiscall CArchive::operator<<(CArchive *this,ulong param_1)

{
  CArchive *extraout_ECX;
  CArchive *this_00;
  
  this_00 = this;
  if ((~*(uint *)(this + 0x18) & 1) == 0) {
    FUN_100065d6(2,*(char **)(this + 0x14));
    this_00 = extraout_ECX;
  }
  if (*(uint *)(this + 0x2c) < *(int *)(this + 0x28) + 4U) {
    Flush(this_00);
  }
  **(ulong **)(this + 0x28) = param_1;
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 4;
  return this;
}



/**************************************************/

/* Function: operator>> @ 100062e9 */

/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator>>(unsigned short &)
   
   Library: Visual Studio 2005 Release */

CArchive * __thiscall CArchive::operator>>(CArchive *this,ushort *param_1)

{
  if (((byte)this[0x18] & 1) == 0) {
    FUN_100065d6(4,*(char **)(this + 0x14));
  }
  if (*(uint *)(this + 0x2c) < *(int *)(this + 0x28) + 2U) {
    FillBuffer(this,(*(int *)(this + 0x28) - *(uint *)(this + 0x2c)) + 2);
  }
  *param_1 = **(ushort **)(this + 0x28);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 2;
  return this;
}



/**************************************************/

/* Function: operator>> @ 1000632c */

/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator>>(unsigned long &)
   
   Library: Visual Studio 2005 Release */

CArchive * __thiscall CArchive::operator>>(CArchive *this,ulong *param_1)

{
  if (((byte)this[0x18] & 1) == 0) {
    FUN_100065d6(4,*(char **)(this + 0x14));
  }
  if (*(uint *)(this + 0x2c) < *(int *)(this + 0x28) + 4U) {
    FillBuffer(this,(*(int *)(this + 0x28) - *(uint *)(this + 0x2c)) + 4);
  }
  *param_1 = **(ulong **)(this + 0x28);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 4;
  return this;
}



/**************************************************/

/* Function: Write @ 1000636e */

/* Library Function - Single Match
    public: void __thiscall CArchive::Write(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    if ((~*(uint *)(this + 0x18) & 1) == 0) {
      FUN_100065d6(2,*(char **)(this + 0x14));
    }
    uVar1 = *(int *)(this + 0x2c) - (int)*(void **)(this + 0x28);
    uVar2 = param_2;
    if (uVar1 <= param_2) {
      uVar2 = uVar1;
    }
    FUN_10003751(*(void **)(this + 0x28),uVar1,param_1,uVar2);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar2;
    uVar1 = param_2 - uVar2;
    if (uVar1 != 0) {
      Flush(this);
      iVar3 = uVar1 - uVar1 % *(uint *)(this + 0x20);
      (**(code **)(**(int **)(this + 0x24) + 0x38))((int)param_1 + uVar2,iVar3);
      uVar1 = uVar1 - iVar3;
      if (*(int *)(this + 8) != 0) {
        (**(code **)(**(int **)(this + 0x24) + 0x50))
                  (1,*(undefined4 *)(this + 0x20),this + 0x30,this + 0x2c);
        *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x30);
      }
      if ((*(uint *)(this + 0x20) <= uVar1) || (*(void **)(this + 0x28) != *(void **)(this + 0x30)))
      {
                    /* WARNING: Subroutine does not return */
        FUN_10003617();
      }
      FUN_10003751(*(void **)(this + 0x28),uVar1,(void *)((int)param_1 + uVar2 + iVar3),uVar1);
      *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar1;
    }
  }
  return;
}



/**************************************************/

/* Function: WriteCount @ 10006433 */

/* Library Function - Single Match
    public: void __thiscall CArchive::WriteCount(unsigned long)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1)

{
  if (param_1 < 0xffff) {
    operator<<(this,(ushort)param_1);
  }
  else {
    operator<<(this,0xffff);
    operator<<(this,param_1);
  }
  return;
}



/**************************************************/

/* Function: ReadCount @ 1000645f */

/* Library Function - Single Match
    public: unsigned long __thiscall CArchive::ReadCount(void)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CArchive::ReadCount(CArchive *this)

{
  CArchive *local_8;
  
  local_8 = this;
  operator>>(this,(ushort *)&local_8);
  if ((short)local_8 == -1) {
    operator>>(this,(ulong *)&local_8);
  }
  else {
    local_8 = (CArchive *)((uint)local_8 & 0xffff);
  }
  return (ulong)local_8;
}



/**************************************************/

/* Function: EnsureRead @ 1000648e */

/* Library Function - Single Match
    public: void __thiscall CArchive::EnsureRead(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::EnsureRead(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = Read(this,param_1,param_2);
  if (uVar1 != param_2) {
    FUN_100065d6(3,(char *)0x0);
  }
  return;
}



/**************************************************/

/* Function: FUN_100064ad @ 100064ad */

undefined ** FUN_100064ad(void)

{
  return &PTR_s_CArchiveException_1001e81c;
}



/**************************************************/

/* Function: GetErrorMessage @ 100064b3 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CArchiveException::GetErrorMessage(char *,unsigned int,unsigned
   int *)const 
    public: virtual int __thiscall CArchiveException::GetErrorMessage(wchar_t *,unsigned
   int,unsigned int *)const 
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall GetErrorMessage(void *this,char *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  if (param_1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)((int)this + 8) + 0xf1b0;
    }
    local_8 = 0;
    piVar1 = FUN_10003a84();
    FUN_10002c40(local_18,piVar1);
    local_8._0_1_ = 1;
    ATL::CSimpleStringT<char,0>::CSimpleStringT<char,0>
              ((CSimpleStringT<char,0> *)&param_3,(CSimpleStringT<char,0> *)((int)this + 0xc));
    local_8 = CONCAT31(local_8._1_3_,2);
    if (param_3[-3] == 0) {
      ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::LoadStringA
                ((CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)&param_3,
                 0xf006);
    }
    piVar1 = param_3;
    AfxFormatString1((CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)
                     local_18,*(int *)((int)this + 8) + 0xf1b0);
    ATL::Checked::tcsncpy_s(param_1,param_2,local_18[0],0xffffffff);
    FUN_10001f50(piVar1 + -4);
    FUN_10001f50((undefined4 *)(local_18[0] + -0x10));
    uVar2 = 1;
  }
  return uVar2;
}



/**************************************************/

/* Function: Catch@1000655a @ 1000655a */

undefined4 Catch_1000655a(void)

{
  return 0x10006560;
}



/**************************************************/

/* Function: CArchiveException @ 1000656a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CArchiveException::CArchiveException(int,char const *)
    public: __thiscall CArchiveException::CArchiveException(int,wchar_t const *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 * __thiscall CArchiveException(void *this,undefined4 param_1,char *param_2)

{
  FUN_1000368c((int)this);
  *(undefined ***)this = CArchiveException::vftable;
  CStringT<>((CSimpleStringT<char,0> *)((int)this + 0xc));
  *(undefined4 *)((int)this + 8) = param_1;
  ATL::CSimpleStringT<char,0>::SetString((CSimpleStringT<char,0> *)((int)this + 0xc),param_2);
  return this;
}



/**************************************************/

/* Function: `scalar_deleting_destructor' @ 100065ae */

/* Library Function - Single Match
    public: virtual void * __thiscall CArchiveException::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall
CArchiveException::_scalar_deleting_destructor_(CArchiveException *this,uint param_1)

{
  *(undefined ***)this = vftable;
  FUN_10001f50((undefined4 *)(*(int *)(this + 0xc) + -0x10));
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_100065d6 @ 100065d6 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_100065d6(undefined4 param_1,char *param_2)

{
  void *this;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100065e2;
  this = operator_new(0x10);
  local_14[0] = (undefined4 *)0x0;
  local_8 = 0;
  if (this != (void *)0x0) {
    local_14[0] = CArchiveException(this,param_1,param_2);
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_10022900);
}



/**************************************************/

/* Function: InitHashTable @ 10006619 */

/* Library Function - Single Match
    public: void __thiscall CMapPtrToPtr::InitHashTable(unsigned int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CMapPtrToPtr::InitHashTable(CMapPtrToPtr *this,uint param_1,int param_2)

{
  void *_Dst;
  
  if (param_1 == 0) {
    param_1 = 0x11;
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    _free(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  if (param_2 != 0) {
    _Dst = operator_new(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 4));
    *(void **)(this + 4) = _Dst;
    _memset(_Dst,0,param_1 << 2);
  }
  *(uint *)(this + 8) = param_1;
  return;
}



/**************************************************/

/* Function: RemoveAll @ 10006673 */

/* Library Function - Single Match
    public: void __thiscall CMapPtrToPtr::RemoveAll(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CMapPtrToPtr::RemoveAll(CMapPtrToPtr *this)

{
  if (*(void **)(this + 4) != (void *)0x0) {
    _free(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  CPlex::FreeDataChain(*(CPlex **)(this + 0x14));
  *(undefined4 *)(this + 0x14) = 0;
  return;
}



/**************************************************/

/* Function: FreeAssoc @ 1000669e */

/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CMapPtrToPtr::FreeAssoc(struct CMapPtrToPtr::CAssoc *)
    protected: void __thiscall CMapPtrToWord::FreeAssoc(struct CMapPtrToWord::CAssoc *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall FreeAssoc(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    CMapPtrToPtr::RemoveAll(this);
  }
  return;
}



/**************************************************/

/* Function: GetAssocAt @ 100066b7 */

/* Library Function - Multiple Matches With Same Base Name
    protected: struct CMapPtrToPtr::CAssoc * __thiscall CMapPtrToPtr::GetAssocAt(void *,unsigned int
   &,unsigned int &)const 
    protected: struct CMapPtrToWord::CAssoc * __thiscall CMapPtrToWord::GetAssocAt(void *,unsigned
   int &,unsigned int &)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined4 * __thiscall GetAssocAt(void *this,uint param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *param_3 = param_1 >> 4;
  uVar2 = (param_1 >> 4) % *(uint *)((int)this + 8);
  *param_2 = uVar2;
  if (*(int *)((int)this + 4) != 0) {
    for (puVar1 = *(undefined4 **)(*(int *)((int)this + 4) + uVar2 * 4); puVar1 != (undefined4 *)0x0
        ; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[1] == param_1) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: GetValueAt @ 100066ef */

/* Library Function - Single Match
    public: void * __thiscall CMapPtrToPtr::GetValueAt(void *)const 
   
   Library: Visual Studio 2005 Release */

void * __thiscall CMapPtrToPtr::GetValueAt(CMapPtrToPtr *this,void *param_1)

{
  undefined4 *puVar1;
  
  if (this == (CMapPtrToPtr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if (*(int *)(this + 4) != 0) {
    for (puVar1 = *(undefined4 **)
                   (*(int *)(this + 4) + (((uint)param_1 >> 4) % *(uint *)(this + 8)) * 4);
        puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((void *)puVar1[1] == param_1) {
        return (void *)puVar1[2];
      }
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: RemoveKey @ 1000672f */

/* Library Function - Single Match
    public: int __thiscall CMapPtrToPtr::RemoveKey(void *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CMapPtrToPtr::RemoveKey(CMapPtrToPtr *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + 4) != 0) {
    puVar3 = (undefined4 *)(*(int *)(this + 4) + (((uint)param_1 >> 4) % *(uint *)(this + 8)) * 4);
    puVar1 = (undefined4 *)*puVar3;
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      if ((void *)puVar2[1] == param_1) {
        *puVar3 = *puVar2;
        FreeAssoc(this,puVar2);
        return 1;
      }
      puVar3 = puVar2;
      puVar1 = (undefined4 *)*puVar2;
    }
  }
  return 0;
}



/**************************************************/

/* Function: GetNextAssoc @ 10006772 */

/* Library Function - Single Match
    public: void __thiscall CMapPtrToPtr::GetNextAssoc(struct __POSITION * &,void * &,void * &)const
   
   
   Library: Visual Studio 2005 Release */

void __thiscall
CMapPtrToPtr::GetNextAssoc(CMapPtrToPtr *this,__POSITION **param_1,void **param_2,void **param_3)

{
  int *piVar1;
  uint uVar2;
  __POSITION *p_Var3;
  uint uVar4;
  __POSITION *p_Var5;
  
  p_Var3 = *param_1;
  if (p_Var3 != (__POSITION *)0x0) {
    if (p_Var3 == (__POSITION *)0xffffffff) {
      uVar4 = 0;
      if (*(uint *)(this + 8) != 0) {
        piVar1 = *(int **)(this + 4);
        while (p_Var3 = (__POSITION *)*piVar1, p_Var3 == (__POSITION *)0x0) {
          uVar4 = uVar4 + 1;
          piVar1 = piVar1 + 1;
          if (*(uint *)(this + 8) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_10003617();
          }
        }
      }
    }
    p_Var5 = *(__POSITION **)p_Var3;
    if (p_Var5 == (__POSITION *)0x0) {
      uVar4 = *(uint *)(this + 8);
      uVar2 = (*(uint *)(p_Var3 + 4) >> 4) % uVar4 + 1;
      if (uVar2 < uVar4) {
        piVar1 = (int *)(*(int *)(this + 4) + uVar2 * 4);
        do {
          p_Var5 = (__POSITION *)*piVar1;
          if (p_Var5 != (__POSITION *)0x0) break;
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 1;
        } while (uVar2 < uVar4);
      }
    }
    *param_1 = p_Var5;
    *param_2 = *(void **)(p_Var3 + 4);
    *param_3 = *(void **)(p_Var3 + 8);
  }
  return;
}



/**************************************************/

/* Function: FUN_100067ed @ 100067ed */

undefined ** FUN_100067ed(void)

{
  return &PTR_s_CMapPtrToPtr_1001e864;
}



/**************************************************/

/* Function: CMapPtrToPtr @ 100067f3 */

/* Library Function - Single Match
    public: __thiscall CMapPtrToPtr::CMapPtrToPtr(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CMapPtrToPtr::CMapPtrToPtr(CMapPtrToPtr *this,int param_1)

{
  *(undefined ***)this = vftable;
  if (param_1 < 1) {
    param_1 = 10;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0x11;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x18) = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10006821 @ 10006821 */

void __fastcall FUN_10006821(CMapPtrToPtr *param_1)

{
  *(undefined ***)param_1 = CMapPtrToPtr::vftable;
  CMapPtrToPtr::RemoveAll(param_1);
  return;
}



/**************************************************/

/* Function: NewAssoc @ 1000682c */

/* Library Function - Single Match
    protected: struct CMapPtrToPtr::CAssoc * __thiscall CMapPtrToPtr::NewAssoc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

CAssoc * __thiscall CMapPtrToPtr::NewAssoc(CMapPtrToPtr *this)

{
  int iVar1;
  CAssoc *pCVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)(this + 0x10) == 0) {
    iVar4 = FUN_1000c9fc((undefined4 *)(this + 0x14),*(int *)(this + 0x18),0xc);
    iVar1 = *(int *)(this + 0x18);
    puVar5 = (undefined4 *)(iVar4 + -8 + iVar1 * 0xc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *puVar5 = *(undefined4 *)(this + 0x10);
      *(undefined4 **)(this + 0x10) = puVar5;
      puVar5 = puVar5 + -3;
    }
  }
  pCVar2 = *(CAssoc **)(this + 0x10);
  uVar3 = *(undefined4 *)pCVar2;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(pCVar2 + 4) = 0;
  *(undefined4 *)(pCVar2 + 8) = 0;
  return pCVar2;
}



/**************************************************/

/* Function: operator[] @ 1000687a */

/* Library Function - Single Match
    public: void * & __thiscall CMapPtrToPtr::operator[](void *)
   
   Library: Visual Studio 2005 Release */

void ** __thiscall CMapPtrToPtr::operator[](CMapPtrToPtr *this,void *param_1)

{
  void *pvVar1;
  CAssoc *pCVar2;
  CMapPtrToPtr *local_8;
  
  pvVar1 = param_1;
  local_8 = this;
  pCVar2 = (CAssoc *)GetAssocAt(this,(uint)param_1,(uint *)&param_1,(uint *)&local_8);
  if (pCVar2 == (CAssoc *)0x0) {
    if (*(int *)(this + 4) == 0) {
      InitHashTable(this,*(uint *)(this + 8),1);
    }
    pCVar2 = NewAssoc(this);
    *(void **)(pCVar2 + 4) = pvVar1;
    *(undefined4 *)pCVar2 = *(undefined4 *)((int)param_1 * 4 + *(int *)(this + 4));
    *(CAssoc **)((int)param_1 * 4 + *(int *)(this + 4)) = pCVar2;
  }
  return (void **)(pCVar2 + 8);
}



/**************************************************/

/* Function: FUN_100068cf @ 100068cf */

CMapPtrToPtr * __thiscall FUN_100068cf(void *this,byte param_1)

{
  *(undefined ***)this = CMapPtrToPtr::vftable;
  CMapPtrToPtr::RemoveAll(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: RemoveAll @ 100068f1 */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CObList::RemoveAll(void)
    public: void __thiscall CPtrList::RemoveAll(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __fastcall RemoveAll(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  CPlex::FreeDataChain(*(CPlex **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/**************************************************/

/* Function: FreeNode @ 10006911 */

/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CObList::FreeNode(struct CObList::CNode *)
    protected: void __thiscall CPtrList::FreeNode(struct CPtrList::CNode *)
   
   Library: Visual Studio 2005 Release */

void __thiscall FreeNode(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  *param_1 = *(undefined4 *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    RemoveAll((int)this);
  }
  return;
}



/**************************************************/

/* Function: RemoveHead @ 10006933 */

/* Library Function - Single Match
    public: void * __thiscall CPtrList::RemoveHead(void)
   
   Library: Visual Studio 2005 Release */

void * __thiscall CPtrList::RemoveHead(CPtrList *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  if ((this != (CPtrList *)0x0) && (piVar1 = *(int **)(this + 4), piVar1 != (int *)0x0)) {
    iVar2 = *piVar1;
    pvVar3 = (void *)piVar1[2];
    *(int *)(this + 4) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(this + 8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    FreeNode(this,piVar1);
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003617();
}



/**************************************************/

/* Function: _AfxDispatchCmdMsg @ 10006964 */

/* Library Function - Single Match
    int __stdcall _AfxDispatchCmdMsg(class CCmdTarget *,unsigned int,int,void (__thiscall
   CCmdTarget::*)(void),void *,unsigned int,struct AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 2005 Release */

int _AfxDispatchCmdMsg(CCmdTarget *param_1,uint param_2,int param_3,_func_void *param_4,
                      void *param_5,uint param_6,AFX_CMDHANDLERINFO *param_7)

{
  uint uVar1;
  
  if (param_1 == (CCmdTarget *)0x0) {
LAB_1000696e:
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  uVar1 = 1;
  if (param_7 != (AFX_CMDHANDLERINFO *)0x0) {
    *(CCmdTarget **)param_7 = param_1;
    *(_func_void **)(param_7 + 4) = param_4;
    return 1;
  }
  switch(param_6) {
  case 0x38:
    (*param_4)();
    break;
  case 0x39:
    uVar1 = (*param_4)();
    break;
  case 0x3a:
    param_5 = (void *)param_2;
    goto LAB_100069b7;
  case 0x3b:
    param_5 = (void *)param_2;
    goto LAB_10006a58;
  case 0x3c:
    if (param_5 == (void *)0x0) goto LAB_1000696e;
    (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3d:
    if (param_5 == (void *)0x0) goto LAB_1000696e;
    uVar1 = (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3e:
    if (param_5 == (void *)0x0) goto LAB_1000696e;
    (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3f:
    if (param_5 == (void *)0x0) goto LAB_1000696e;
    uVar1 = (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x40:
    if (param_5 == (void *)0x0) goto LAB_1000696e;
    (*param_4)(param_5);
    goto LAB_10006a2b;
  case 0x41:
    if (param_5 == (void *)0x0) goto LAB_1000696e;
    (*param_4)(param_5,param_2);
LAB_10006a2b:
    uVar1 = (uint)(*(int *)((int)param_5 + 0x1c) == 0);
    *(undefined4 *)((int)param_5 + 0x1c) = 0;
    break;
  case 0x42:
LAB_100069b7:
    (*param_4)(param_5);
    break;
  case 0x43:
LAB_10006a58:
    uVar1 = (*param_4)(param_5);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: OnCmdMsg @ 10006a9c */

/* Library Function - Single Match
    public: virtual int __thiscall CCmdTarget::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  void *pvVar1;
  bool bVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  int *piVar6;
  AFX_MSGMAP_ENTRY *pAVar7;
  uint uVar8;
  
  if (param_2 == -2) {
    pAVar3 = AfxGetModuleState();
    if (*(int *)(pAVar3 + 0x3c) != 0) {
      pAVar3 = AfxGetModuleState();
      iVar4 = (**(code **)(**(int **)(pAVar3 + 0x3c) + 4))(this,param_1,param_3,param_4);
      return iVar4;
    }
LAB_10006ab5:
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if (param_2 == -3) {
    param_2 = 0;
    if (param_3 != (void *)0x0) {
      pvVar1 = *(void **)((int)param_3 + 0x30);
      puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x2c))();
      do {
        if (puVar5 == (undefined4 *)0x0) {
          return param_2;
        }
        if (param_2 != 0) {
          return param_2;
        }
        piVar6 = (int *)puVar5[1];
        while (((piVar6[1] != 0 && (piVar6[2] != 0)) && (param_2 == 0))) {
          if (param_1 == piVar6[1]) {
            if (pvVar1 == (void *)0x0) {
              if (*piVar6 == 0) {
LAB_10006b37:
                *(int *)((int)param_3 + 4) = piVar6[2];
                param_2 = 1;
              }
            }
            else if (((void *)*piVar6 != (void *)0x0) &&
                    (bVar2 = _IsEqualGUID(pvVar1,(void *)*piVar6), CONCAT31(extraout_var,bVar2) != 0
                    )) goto LAB_10006b37;
          }
          piVar6 = piVar6 + 3;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while( true );
    }
    goto LAB_10006ab5;
  }
  if (param_2 != -1) {
    uVar8 = (uint)param_2 >> 0x10;
    param_2 = param_2 & 0xffff;
    if (uVar8 != 0) goto LAB_10006b70;
  }
  uVar8 = 0x111;
LAB_10006b70:
  piVar6 = (int *)(**(code **)(*(int *)this + 0x28))();
  while( true ) {
    if (*piVar6 == 0) {
      return 0;
    }
    pAVar7 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar6[1],uVar8,param_2,param_1);
    if (pAVar7 != (AFX_MSGMAP_ENTRY *)0x0) break;
    piVar6 = (int *)(*(code *)*piVar6)();
  }
  iVar4 = _AfxDispatchCmdMsg(this,param_1,param_2,*(_func_void **)(pAVar7 + 0x14),param_3,
                             *(uint *)(pAVar7 + 0x10),param_4);
  return iVar4;
}



/**************************************************/

/* Function: FUN_10006bb6 @ 10006bb6 */

undefined4 FUN_10006bb6(void)

{
  return 1;
}



/**************************************************/

/* Function: FUN_10006bbc @ 10006bbc */

undefined4 FUN_10006bbc(void)

{
  return 0x80029c4a;
}



/**************************************************/

/* Function: FUN_10006bca @ 10006bca */

undefined * FUN_10006bca(void)

{
  return &DAT_1001e8bc;
}



/**************************************************/

/* Function: FUN_10006bd0 @ 10006bd0 */

undefined * FUN_10006bd0(void)

{
  return &DAT_1001e8f4;
}



/**************************************************/

/* Function: FUN_10006bd6 @ 10006bd6 */

undefined4 FUN_10006bd6(void)

{
  return 1;
}



/**************************************************/

/* Function: FUN_10006bda @ 10006bda */

undefined * FUN_10006bda(void)

{
  return &DAT_1001e920;
}



/**************************************************/

/* Function: FUN_10006be0 @ 10006be0 */

undefined * FUN_10006be0(void)

{
  return &DAT_1001e934;
}



/**************************************************/

/* Function: CCmdUI @ 10006be6 */

/* Library Function - Single Match
    public: __thiscall CCmdUI::CCmdUI(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall CCmdUI::CCmdUI(CCmdUI *this)

{
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}



/**************************************************/

/* Function: FID_conflict:ModifyMenuW @ 10006c0c */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CMenu::ModifyMenuA(unsigned int,unsigned int,unsigned int,char const *)
    public: int __thiscall CMenu::ModifyMenuW(unsigned int,unsigned int,unsigned int,wchar_t const
   *)
   
   Library: Visual Studio 2005 Release */

BOOL FID_conflict_ModifyMenuW
               (HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCWSTR lpNewItem)

{
  BOOL BVar1;
  int in_ECX;
  
  BVar1 = ModifyMenuA(*(HMENU *)(in_ECX + 4),(UINT)hMnu,uPosition,uFlags,(LPCSTR)uIDNewItem);
  return BVar1;
}



/**************************************************/

/* Function: CCmdTarget @ 10006c28 */

/* Library Function - Single Match
    public: __thiscall CCmdTarget::CCmdTarget(void)
   
   Library: Visual Studio 2005 Release */

CCmdTarget * __thiscall CCmdTarget::CCmdTarget(CCmdTarget *this)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  *(AFX_MODULE_STATE **)(this + 0x1c) = pAVar1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



/**************************************************/

/* Function: ~CCmdTarget @ 10006c4e */

/* Library Function - Single Match
    public: virtual __thiscall CCmdTarget::~CCmdTarget(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CCmdTarget::~CCmdTarget(CCmdTarget *this)

{
  if (*(int *)(this + 0x10) != 0) {
    (**(code **)(*(int *)(this + 0x10) + 0x1c))();
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}



/**************************************************/

/* Function: BeginWaitCursor @ 10006c63 */

/* Library Function - Single Match
    public: void __thiscall CCmdTarget::BeginWaitCursor(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdTarget::BeginWaitCursor(CCmdTarget *this)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  (**(code **)(**(int **)(pAVar1 + 4) + 0x9c))(1);
  return;
}



/**************************************************/

/* Function: EndWaitCursor @ 10006c78 */

/* Library Function - Single Match
    public: void __thiscall CCmdTarget::EndWaitCursor(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdTarget::EndWaitCursor(CCmdTarget *this)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  (**(code **)(**(int **)(pAVar1 + 4) + 0x9c))(0xffffffff);
  return;
}



/**************************************************/

/* Function: Enable @ 10006c8d */

/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::Enable(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdUI::Enable(CCmdUI *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  if (*(int *)(this + 0xc) == 0) {
    if (*(int *)(this + 0x14) == 0) goto LAB_10006ca7;
    if (param_1 == 0) {
      iVar1 = *(int *)(this + 0x14);
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(iVar1 + 0x20)) {
        pHVar2 = GetParent(*(HWND *)(iVar1 + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar2);
        SendMessageA(*(HWND *)(pCVar3 + 0x20),0x28,0,0);
      }
    }
    CWnd::EnableWindow(*(CWnd **)(this + 0x14),param_1);
  }
  else {
    if (*(int *)(this + 0x10) != 0) {
      return;
    }
    if (*(uint *)(this + 0x20) <= *(uint *)(this + 8)) {
LAB_10006ca7:
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
    EnableMenuItem(*(HMENU *)(*(int *)(this + 0xc) + 4),*(uint *)(this + 8),
                   (-(uint)(param_1 != 0) & 0xfffffffd) + 3 | 0x400);
  }
  *(undefined4 *)(this + 0x18) = 1;
  return;
}



/**************************************************/

/* Function: SetCheck @ 10006d1c */

/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::SetCheck(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdUI::SetCheck(CCmdUI *this,int param_1)

{
  uint uVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    if (*(int *)(this + 0x14) == 0) {
LAB_10006d34:
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
    uVar1 = SendMessageA(*(HWND *)(*(int *)(this + 0x14) + 0x20),0x87,0,0);
    if ((uVar1 & 0x2000) != 0) {
      SendMessageA(*(HWND *)(*(int *)(this + 0x14) + 0x20),0xf1,param_1,0);
    }
  }
  else if (*(int *)(this + 0x10) == 0) {
    if (*(uint *)(this + 0x20) <= *(uint *)(this + 8)) goto LAB_10006d34;
    CheckMenuItem(*(HMENU *)(*(int *)(this + 0xc) + 4),*(uint *)(this + 8),
                  -(uint)(param_1 != 0) & 8 | 0x400);
  }
  return;
}



/**************************************************/

/* Function: SetText @ 10006d91 */

/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::SetText(char const *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdUI::SetText(CCmdUI *this,char *param_1)

{
  UINT UVar1;
  LPCWSTR unaff_EDI;
  
  if (param_1 == (char *)0x0) {
LAB_10006d9e:
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if (*(int *)(this + 0xc) == 0) {
    if (*(int *)(this + 0x14) == 0) goto LAB_10006d9e;
    AfxSetWindowText(*(HWND__ **)(*(int *)(this + 0x14) + 0x20),param_1);
  }
  else if (*(int *)(this + 0x10) == 0) {
    UVar1 = GetMenuState(*(HMENU *)(*(int *)(this + 0xc) + 4),*(UINT *)(this + 8),0x400);
    if (*(HMENU *)(this + 0x20) <= *(HMENU *)(this + 8)) goto LAB_10006d9e;
    FID_conflict_ModifyMenuW
              (*(HMENU *)(this + 8),UVar1 & 0xfffff6fb | 0x400,*(UINT *)(this + 4),(UINT_PTR)param_1
               ,unaff_EDI);
  }
  return;
}



/**************************************************/

/* Function: _AfxLoadDotBitmap @ 10006df8 */

/* Library Function - Single Match
    void __stdcall _AfxLoadDotBitmap(void)
   
   Library: Visual Studio 2005 Release */

void _AfxLoadDotBitmap(void)

{
  byte bVar1;
  LONG LVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int nWidth;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int local_94;
  int local_8c;
  undefined1 local_88 [12];
  undefined1 local_7c [116];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)local_7c;
  LVar2 = GetMenuCheckMarkDimensions();
  nWidth = (int)(short)LVar2;
  local_94 = (int)(short)((uint)LVar2 >> 0x10);
  if ((4 < nWidth) && (5 < local_94)) {
    if (0x20 < nWidth) {
      nWidth = 0x20;
    }
    iVar6 = nWidth + 0xf >> 4;
    iVar7 = ((nWidth + -4) / 2 + iVar6 * 0x10) - nWidth;
    if (0xc < iVar7) {
      iVar7 = 0xc;
    }
    if (0x20 < local_94) {
      local_94 = 0x20;
    }
    _memset(local_88,0xff,0x80);
    puVar3 = local_88 + (local_94 + -6 >> 1) * iVar6 * 2;
    pbVar4 = &DAT_1001e93c;
    local_8c = 5;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar5 = ~((ushort)bVar1 << ((byte)iVar7 & 0x1f));
      *puVar3 = (char)(uVar5 >> 8);
      puVar3[1] = (char)uVar5;
      puVar3 = puVar3 + iVar6 * 2;
      local_8c = local_8c + -1;
    } while (local_8c != 0);
    DAT_10028050 = CreateBitmap(nWidth,local_94,1,1,local_88);
    if (DAT_10028050 == (HBITMAP)0x0) {
      DAT_10028050 = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7fe3);
    }
    __security_check_cookie(local_8 ^ (uint)local_7c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003617();
}



/**************************************************/

/* Function: SetRadio @ 10006ef6 */

/* Library Function - Single Match
    public: virtual void __thiscall CCmdUI::SetRadio(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdUI::SetRadio(CCmdUI *this,int param_1)

{
  (**(code **)(*(int *)this + 4))(param_1 != 0);
  if ((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0x10) == 0)) {
    if (*(uint *)(this + 0x20) <= *(uint *)(this + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
    if ((DAT_10028050 == (HBITMAP)0x0) && (_AfxLoadDotBitmap(), DAT_10028050 == (HBITMAP)0x0)) {
      return;
    }
    SetMenuItemBitmaps(*(HMENU *)(*(int *)(this + 0xc) + 4),*(UINT *)(this + 8),0x400,(HBITMAP)0x0,
                       DAT_10028050);
  }
  return;
}



/**************************************************/

/* Function: _IsPlatformNT @ 10006f59 */

/* Library Function - Single Match
    _IsPlatformNT
   
   Library: Visual Studio 2005 Release */

void _IsPlatformNT(void)

{
  _OSVERSIONINFOA local_9c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  _memset(&local_9c.dwMajorVersion,0,0x90);
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: _InitMultipleMonitorStubs @ 10006fb1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _InitMultipleMonitorStubs
   
   Library: Visual Studio 2005 Release */

bool _InitMultipleMonitorStubs(void)

{
  HMODULE hModule;
  
  if (DAT_1002987c != 0) {
    return DAT_10029870 != (FARPROC)0x0;
  }
  _DAT_10029880 = _IsPlatformNT();
  hModule = GetModuleHandleA("USER32");
  if (((((hModule != (HMODULE)0x0) &&
        (_DAT_10029860 = GetProcAddress(hModule,"GetSystemMetrics"), _DAT_10029860 != (FARPROC)0x0))
       && (DAT_10029864 = GetProcAddress(hModule,"MonitorFromWindow"), DAT_10029864 != (FARPROC)0x0)
       ) && ((_DAT_10029868 = GetProcAddress(hModule,"MonitorFromRect"),
             _DAT_10029868 != (FARPROC)0x0 &&
             (_DAT_1002986c = GetProcAddress(hModule,"MonitorFromPoint"),
             _DAT_1002986c != (FARPROC)0x0)))) &&
     ((_DAT_10029874 = GetProcAddress(hModule,"EnumDisplayMonitors"), _DAT_10029874 != (FARPROC)0x0
      && ((DAT_10029870 = GetProcAddress(hModule,"GetMonitorInfoA"), DAT_10029870 != (FARPROC)0x0 &&
          (_DAT_10029878 = GetProcAddress(hModule,"EnumDisplayDevicesA"),
          _DAT_10029878 != (FARPROC)0x0)))))) {
    DAT_1002987c = 1;
    return true;
  }
  _DAT_10029878 = (FARPROC)0x0;
  _DAT_10029874 = (FARPROC)0x0;
  DAT_10029870 = (FARPROC)0x0;
  _DAT_1002986c = (FARPROC)0x0;
  _DAT_10029868 = (FARPROC)0x0;
  DAT_10029864 = (FARPROC)0x0;
  _DAT_10029860 = (FARPROC)0x0;
  DAT_1002987c = 1;
  return false;
}



/**************************************************/

/* Function: xMonitorFromRect @ 100070a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _xMonitorFromRect@8
   
   Library: Visual Studio 2005 Release
   __stdcall xMonitorFromRect,8 */

undefined4 xMonitorFromRect(int *param_1,byte param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = _InitMultipleMonitorStubs();
  if (CONCAT31(extraout_var,bVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x100070af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*_DAT_10029868)();
    return uVar2;
  }
  if ((param_2 & 3) == 0) {
    if ((0 < param_1[2]) && (0 < param_1[3])) {
      iVar3 = GetSystemMetrics(0);
      if (*param_1 < iVar3) {
        iVar3 = GetSystemMetrics(1);
        if (param_1[1] < iVar3) goto LAB_100070e8;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_100070e8:
    uVar2 = 0x12340042;
  }
  return uVar2;
}



/**************************************************/

/* Function: xMonitorFromWindow @ 100070f2 */

/* Library Function - Single Match
    _xMonitorFromWindow@8
   
   Library: Visual Studio 2005 Release
   __stdcall xMonitorFromWindow,8 */

undefined4 xMonitorFromWindow(HWND param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  WINDOWPLACEMENT local_30;
  
  bVar1 = _InitMultipleMonitorStubs();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((param_2 & 3) == 0) {
      BVar3 = IsIconic(param_1);
      if (BVar3 == 0) {
        iVar4 = GetWindowRect(param_1,&local_30.rcNormalPosition);
      }
      else {
        iVar4 = GetWindowPlacement(param_1,&local_30);
      }
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = xMonitorFromRect(&local_30.rcNormalPosition.left,(byte)param_2);
      }
    }
    else {
      uVar2 = 0x12340042;
    }
  }
  else {
    uVar2 = (*DAT_10029864)(param_1,param_2);
  }
  return uVar2;
}



/**************************************************/

/* Function: xGetMonitorInfo @ 1000715d */

/* Library Function - Single Match
    _xGetMonitorInfo@8
   
   Library: Visual Studio 2005 Release
   __stdcall xGetMonitorInfo,8 */

undefined4 xGetMonitorInfo(int param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  uint uVar4;
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  bVar1 = _InitMultipleMonitorStubs();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((((param_1 == 0x12340042) && (param_2 != (uint *)0x0)) && (0x27 < *param_2)) &&
       (BVar3 = SystemParametersInfoA(0x30,0,&local_14,0), BVar3 != 0)) {
      param_2[1] = 0;
      param_2[2] = 0;
      uVar4 = GetSystemMetrics(0);
      param_2[3] = uVar4;
      uVar4 = GetSystemMetrics(1);
      param_2[5] = local_14;
      param_2[6] = uStack_10;
      param_2[7] = uStack_c;
      param_2[8] = uStack_8;
      uVar2 = 1;
      param_2[4] = uVar4;
      param_2[9] = 1;
      if (0x47 < *param_2) {
        _strncpy_s((char *)(param_2 + 10),0x20,"DISPLAY",0x1f);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*DAT_10029870)(param_1,param_2);
  }
  return uVar2;
}



/**************************************************/

/* Function: AtlIAccessibleInvokeHelper @ 100071f6 */

/* Library Function - Single Match
    long __stdcall ATL::AtlIAccessibleInvokeHelper(struct IAccessible *,long,struct _GUID const
   &,unsigned long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO
   *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

long ATL::AtlIAccessibleInvokeHelper
               (IAccessible *param_1,long param_2,_GUID *param_3,ulong param_4,ushort param_5,
               tagDISPPARAMS *param_6,tagVARIANT *param_7,tagEXCEPINFO *param_8,uint *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ushort uVar27;
  IAccessible *pIVar28;
  VARIANTARG **ppVVar29;
  IAccessible *pIVar30;
  tagDISPPARAMS *ptVar31;
  VARIANTARG *pVVar32;
  _union_2685 *p_Var33;
  int iVar34;
  int *piVar35;
  undefined2 in_stack_00000016;
  _union_2683 *local_48 [4];
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  LONG LStack_2c;
  IRecordInfo *pIStack_28;
  _union_2683 local_24;
  _union_2683 local_14;
  
  ptVar31 = param_6;
  pIVar30 = param_1;
  iVar34 = 0;
  local_24.n2.vt = 0;
  if (param_1 == (IAccessible *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_6 == (tagDISPPARAMS *)0x0) {
    return -0x7ffdfff8;
  }
  pIVar28 = (IAccessible *)param_6->cArgs;
  if ((IAccessible *)0x5 < pIVar28) {
    return -0x7ffdfff2;
  }
  param_1 = (IAccessible *)0x0;
  if (param_6->cNamedArgs != 0) {
    param_6 = (tagDISPPARAMS *)param_6->rgdispidNamedArgs;
    do {
      ppVVar29 = &param_6->rgvarg;
      if (pIVar28 <= (IAccessible *)*ppVVar29) {
        return -0x7ffdfff2;
      }
      param_6 = (tagDISPPARAMS *)&param_6->rgdispidNamedArgs;
      param_1 = param_1 + 1;
      local_48[(int)*ppVVar29] = (_union_2683 *)((int)&ptVar31->rgvarg->n1 + iVar34);
      iVar34 = iVar34 + 0x10;
    } while (param_1 < (IAccessible *)ptVar31->cNamedArgs);
  }
  if (param_1 < pIVar28) {
    pVVar32 = ptVar31->rgvarg + (int)param_1;
    iVar34 = (int)pIVar28 - (int)param_1;
    piVar35 = (int *)(&stack0xffffffb4 + ((int)pIVar28 - (int)param_1) * 4);
    do {
      *piVar35 = (int)pVVar32;
      pVVar32 = pVVar32 + 1;
      piVar35 = piVar35 + -1;
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
  }
  iVar34 = -0x7ffdfffd;
  if (param_9 == (uint *)0x0) {
    param_9 = (uint *)&param_5;
  }
  if (param_7 == (tagVARIANT *)0x0) {
    param_7 = (tagVARIANT *)&local_24;
  }
  VariantInit((VARIANTARG *)&local_14.n2);
  switch(param_2) {
  case -0x139a:
    if (ptVar31->cArgs == 1) {
      uVar1._0_2_ = *(VARTYPE *)local_48[0];
      uVar1._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar2._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar2._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 100))
                         (pIVar30,uVar1,uVar2,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo);
      goto switchD_100072cc_default;
    }
    break;
  case -0x1399:
    if (ptVar31->cArgs == 2) {
      if ((local_48[0]->n2).vt != 3) {
        iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[0]->n2,0,3);
        if (iVar34 < 0) goto LAB_100074ec;
        local_48[0] = &local_14;
      }
      _param_5 = (local_48[0]->n2).n3.lVal;
      if ((local_48[1]->n2).vt != 3) {
        iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[1]->n2,0,3);
        if (iVar34 < 0) {
LAB_100076d8:
          *param_9 = 1;
          goto switchD_100072cc_default;
        }
        local_48[1] = &local_14;
      }
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x60))
                         (pIVar30,_param_5,(local_48[1]->n2).n3.lVal,param_7);
      goto switchD_100072cc_default;
    }
    break;
  case -0x1398:
    if (ptVar31->cArgs == 2) {
      if ((local_48[0]->n2).vt != 3) {
        iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[0]->n2,0,3);
        if (iVar34 < 0) goto LAB_100074ec;
        local_48[0] = &local_14;
      }
      uVar3._0_2_ = *(VARTYPE *)local_48[1];
      uVar3._2_2_ = *(WORD *)((int)local_48[1] + 2);
      uVar4._0_2_ = *(WORD *)((int)local_48[1] + 4);
      uVar4._2_2_ = *(WORD *)((int)local_48[1] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x5c))
                         (pIVar30,(local_48[0]->n2).n3.lVal,uVar3,uVar4,(local_48[1]->n2).n3.lVal,
                          (local_48[1]->n2).n3.brecVal.pRecInfo,param_7);
      goto switchD_100072cc_default;
    }
    break;
  case -0x1397:
    if (ptVar31->cArgs == 5) {
      while ((uVar27 = (local_48[0]->n2).vt, (uVar27 & 0x4000) != 0 && ((uVar27 & 0xf) != 0))) {
        if ((uVar27 & 0xc) == 0) {
          local_14._0_4_ = (local_48[0]->n2).n3.lVal;
        }
        else {
          VariantClear((VARIANTARG *)(local_48[0]->n2).n3.punkVal);
          *(local_48[0]->n2).n3.bstrVal = L'\x03';
          local_14._0_4_ = &((local_48[0]->n2).n3.parray)->cLocks;
        }
      }
      *param_9 = 0;
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x58))
                         (pIVar30,local_14._0_4_,local_14.decVal.Hi32,local_14._8_4_,local_14._12_4_
                          ,*local_38,local_38[1],local_38[2],local_38[3]);
      goto switchD_100072cc_default;
    }
    break;
  case -0x1396:
    if (ptVar31->cArgs == 2) {
      if ((local_48[0]->n2).vt != 3) {
        iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[0]->n2,0,3);
        if (iVar34 < 0) goto LAB_100074ec;
        local_48[0] = &local_14;
      }
      uVar5._0_2_ = *(VARTYPE *)local_48[1];
      uVar5._2_2_ = *(WORD *)((int)local_48[1] + 2);
      uVar6._0_2_ = *(WORD *)((int)local_48[1] + 4);
      uVar6._2_2_ = *(WORD *)((int)local_48[1] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x54))
                         (pIVar30,(local_48[0]->n2).n3.lVal,uVar5,uVar6,(local_48[1]->n2).n3.lVal,
                          (local_48[1]->n2).n3.brecVal.pRecInfo);
      goto switchD_100072cc_default;
    }
    break;
  case -0x1395:
    if (ptVar31->cArgs == 1) {
      uVar7._0_2_ = *(VARTYPE *)local_48[0];
      uVar7._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar8._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar8._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x50))
                         (pIVar30,uVar7,uVar8,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
LAB_1000768f:
      if (-1 < iVar34) {
        (param_7->n1).n2.vt = 8;
      }
      goto switchD_100072cc_default;
    }
    break;
  case -0x1394:
    iVar34 = (**(code **)(*(int *)pIVar30 + 0x4c))(pIVar30,param_7);
    goto switchD_100072cc_default;
  case -0x1393:
    iVar34 = (**(code **)(*(int *)pIVar30 + 0x48))(pIVar30,param_7);
    goto switchD_100072cc_default;
  case -0x1392:
    if (ptVar31->cArgs == 1) {
      uVar9._0_2_ = *(VARTYPE *)local_48[0];
      uVar9._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar10._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar10._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x44))
                         (pIVar30,uVar9,uVar10,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_1000768f;
    }
    break;
  case -0x1391:
    if (ptVar31->cArgs == 2) {
      uVar27 = (local_48[0]->n2).vt;
      if (((uVar27 & 0x4000) != 0) && ((uVar27 & 0xc) == 0)) {
        iVar34 = -0x7ffdfffb;
LAB_100074ec:
        *param_9 = 0;
        goto switchD_100072cc_default;
      }
      if (uVar27 == 0x400c) {
        VariantClear((VARIANTARG *)(local_48[0]->n2).n3.punkVal);
        *(local_48[0]->n2).n3.bstrVal = L'\b';
        p_Var33 = (_union_2685 *)&((local_48[0]->n2).n3.parray)->cLocks;
      }
      else if (uVar27 == 0x4008) {
        p_Var33 = (_union_2685 *)(local_48[0]->n2).n3.lVal;
      }
      else {
        VariantClear((VARIANTARG *)&local_48[0]->n2);
        p_Var33 = &(local_48[0]->n2).n3;
        (local_48[0]->n2).vt = 8;
      }
      uVar11._0_2_ = *(VARTYPE *)local_48[1];
      uVar11._2_2_ = *(WORD *)((int)local_48[1] + 2);
      uVar12._0_2_ = *(WORD *)((int)local_48[1] + 4);
      uVar12._2_2_ = *(WORD *)((int)local_48[1] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x40))
                         (pIVar30,p_Var33,uVar11,uVar12,(local_48[1]->n2).n3.lVal,
                          (local_48[1]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_10007735;
    }
    break;
  case -0x1390:
    if (ptVar31->cArgs == 1) {
      uVar13._0_2_ = *(VARTYPE *)local_48[0];
      uVar13._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar14._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar14._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x3c))
                         (pIVar30,uVar13,uVar14,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_1000768f;
    }
    break;
  case -0x138f:
    if (ptVar31->cArgs == 1) {
      uVar15._0_2_ = *(VARTYPE *)local_48[0];
      uVar15._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar16._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar16._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x38))
                         (pIVar30,uVar15,uVar16,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,param_7);
      goto switchD_100072cc_default;
    }
    break;
  case -0x138e:
    if (ptVar31->cArgs == 1) {
      uVar17._0_2_ = *(VARTYPE *)local_48[0];
      uVar17._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar18._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar18._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x34))
                         (pIVar30,uVar17,uVar18,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,param_7);
      goto switchD_100072cc_default;
    }
    break;
  case -0x138d:
    if (ptVar31->cArgs == 1) {
      uVar19._0_2_ = *(VARTYPE *)local_48[0];
      uVar19._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar20._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar20._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x30))
                         (pIVar30,uVar19,uVar20,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_1000768f;
    }
    break;
  case -0x138c:
    if ((_param_5 & 2) == 0) {
      if ((_param_5 & 4) == 0) goto switchD_100072cc_caseD_ffffec75;
      if (ptVar31->cArgs == 2) {
        local_34._0_2_ = *(VARTYPE *)local_48[0];
        local_34._2_2_ = *(WORD *)((int)local_48[0] + 2);
        uStack_30._0_2_ = *(WORD *)((int)local_48[0] + 4);
        uStack_30._2_2_ = *(WORD *)((int)local_48[0] + 6);
        LStack_2c = (local_48[0]->n2).n3.lVal;
        pIStack_28 = (local_48[0]->n2).n3.brecVal.pRecInfo;
        if ((local_48[1]->n2).vt != 8) {
          iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[1]->n2,0,3);
          if (iVar34 < 0) goto LAB_100076d8;
          local_48[1] = &local_14;
        }
        iVar34 = (**(code **)(*(int *)pIVar30 + 0x6c))
                           (pIVar30,local_34,uStack_30,LStack_2c,pIStack_28,
                            (local_48[1]->n2).n3.lVal);
        goto switchD_100072cc_default;
      }
    }
    else if (ptVar31->cArgs == 1) {
      uVar21._0_2_ = *(VARTYPE *)local_48[0];
      uVar21._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar22._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar22._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x2c))
                         (pIVar30,uVar21,uVar22,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_1000768f;
    }
    break;
  case -0x138b:
switchD_100072cc_caseD_ffffec75:
    if ((_param_5 & 2) == 0) {
      if ((_param_5 & 4) == 0) goto switchD_100072cc_caseD_ffffec76;
      if (ptVar31->cArgs == 2) {
        local_34._0_2_ = *(VARTYPE *)local_48[0];
        local_34._2_2_ = *(WORD *)((int)local_48[0] + 2);
        uStack_30._0_2_ = *(WORD *)((int)local_48[0] + 4);
        uStack_30._2_2_ = *(WORD *)((int)local_48[0] + 6);
        LStack_2c = (local_48[0]->n2).n3.lVal;
        pIStack_28 = (local_48[0]->n2).n3.brecVal.pRecInfo;
        if ((local_48[1]->n2).vt != 8) {
          iVar34 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_48[1]->n2,0,3);
          if (iVar34 < 0) goto LAB_100076d8;
          local_48[1] = &local_14;
        }
        iVar34 = (**(code **)(*(int *)pIVar30 + 0x68))
                           (pIVar30,local_34,uStack_30,LStack_2c,pIStack_28,
                            (local_48[1]->n2).n3.lVal);
        goto switchD_100072cc_default;
      }
    }
    else if (ptVar31->cArgs == 1) {
      uVar23._0_2_ = *(VARTYPE *)local_48[0];
      uVar23._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar24._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar24._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x28))
                         (pIVar30,uVar23,uVar24,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_1000768f;
    }
    break;
  case -0x138a:
switchD_100072cc_caseD_ffffec76:
    if (ptVar31->cArgs == 1) {
      uVar25._0_2_ = *(VARTYPE *)local_48[0];
      uVar25._2_2_ = *(WORD *)((int)local_48[0] + 2);
      uVar26._0_2_ = *(WORD *)((int)local_48[0] + 4);
      uVar26._2_2_ = *(WORD *)((int)local_48[0] + 6);
      iVar34 = (**(code **)(*(int *)pIVar30 + 0x24))
                         (pIVar30,uVar25,uVar26,(local_48[0]->n2).n3.lVal,
                          (local_48[0]->n2).n3.brecVal.pRecInfo,
                          (undefined1 *)((int)&param_7->n1 + 8));
      goto LAB_10007752;
    }
    break;
  case -0x1389:
    iVar34 = (**(code **)(*(int *)pIVar30 + 0x20))(pIVar30,(undefined1 *)((int)&param_7->n1 + 8));
LAB_10007735:
    if (-1 < iVar34) {
      (param_7->n1).n2.vt = 3;
    }
    goto switchD_100072cc_default;
  case -5000:
    iVar34 = (**(code **)(*(int *)pIVar30 + 0x1c))(pIVar30,(undefined1 *)((int)&param_7->n1 + 8));
LAB_10007752:
    if (-1 < iVar34) {
      (param_7->n1).n2.vt = 9;
    }
  default:
    goto switchD_100072cc_default;
  }
  iVar34 = -0x7ffdfff2;
switchD_100072cc_default:
  VariantClear((VARIANTARG *)&local_14.n2);
  return iVar34;
}



/**************************************************/

/* Function: AtlIAccessibleGetIDsOfNamesHelper @ 100077c2 */

/* Library Function - Single Match
    long __stdcall ATL::AtlIAccessibleGetIDsOfNamesHelper(struct _GUID const &,wchar_t * *,unsigned
   int,unsigned long,long *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::AtlIAccessibleGetIDsOfNamesHelper
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      bVar1 = false;
      uVar4 = 0;
      do {
        iVar2 = lstrcmpW(param_2[uVar3],*(LPCWSTR *)((int)&PTR_u_accParent_10026600 + uVar4));
        if (iVar2 == 0) {
          bVar1 = true;
          param_5[uVar3] = *(long *)((int)&DAT_100265b0 + uVar4);
        }
        uVar4 = uVar4 + 4;
      } while (uVar4 < 0x4c);
      if (!bVar1) {
        return -0x7ffdfffa;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return 0;
}



/**************************************************/

/* Function: CWnd @ 10007822 */

/* Library Function - Single Match
    private: __thiscall CWnd::CWnd(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::CWnd(CWnd *this,HWND__ *param_1)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x30) = XAccessible::vftable;
  *(undefined ***)(this + 0x34) = XAccessibleServer::vftable;
  *(HWND__ **)(this + 0x20) = param_1;
  this[0x24] = (CWnd)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return this;
}



/**************************************************/

/* Function: FUN_10007868 @ 10007868 */

void __fastcall FUN_10007868(int *param_1)

{
  if (param_1[8] != 0) {
                    /* WARNING: Could not recover jumptable at 0x10007870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10007873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x114))();
  return;
}



/**************************************************/

/* Function: FID_conflict:DefWindowProcA @ 10007879 */

/* Library Function - Multiple Matches With Different Base Names
    protected: virtual long __thiscall CWnd::DefWindowProcA(unsigned int,unsigned int,long)
    protected: virtual long __thiscall CWnd::DefWindowProcW(unsigned int,unsigned int,long)
   
   Library: Visual Studio 2005 Release */

LRESULT FID_conflict_DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  int *piVar1;
  LRESULT LVar2;
  WNDPROC lpPrevWndFunc;
  int *in_ECX;
  
  lpPrevWndFunc = (WNDPROC)in_ECX[0x10];
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0xf0))();
    lpPrevWndFunc = (WNDPROC)*piVar1;
    if (lpPrevWndFunc == (WNDPROC)0x0) {
      LVar2 = DefWindowProcA((HWND)in_ECX[8],(UINT)hWnd,Msg,wParam);
      return LVar2;
    }
  }
  LVar2 = CallWindowProcA(lpPrevWndFunc,(HWND)in_ECX[8],(UINT)hWnd,Msg,wParam);
  return LVar2;
}



/**************************************************/

/* Function: FUN_100078c0 @ 100078c0 */

int __fastcall FUN_100078c0(int param_1)

{
  return param_1 + 0x40;
}



/**************************************************/

/* Function: FUN_100078c4 @ 100078c4 */

undefined4 __thiscall FUN_100078c4(void *this,undefined4 param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  if (*(code **)(pAVar1 + 0x38) != (code *)0x0) {
    (**(code **)(pAVar1 + 0x38))(param_1,this);
  }
  return 0;
}



/**************************************************/

/* Function: OnToolHitTest @ 100078e0 */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::OnToolHitTest(class CPoint,struct tagTOOLINFOA *)const 
    public: virtual int __thiscall CWnd::OnToolHitTest(class CPoint,struct tagTOOLINFOW *)const 
   
   Library: Visual Studio 2005 Release */

uint __thiscall OnToolHitTest(void *this,LONG param_1,LONG param_2,uint *param_3)

{
  tagPOINT tVar1;
  HWND__ *hWnd;
  uint uVar2;
  uint uVar3;
  
  tVar1.y = param_2;
  tVar1.x = param_1;
  hWnd = _AfxChildWindowFromPoint(*(HWND__ **)((int)this + 0x20),tVar1);
  if (hWnd == (HWND__ *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = GetDlgCtrlID(hWnd);
    uVar2 = uVar2 & 0xffff;
    if ((param_3 != (uint *)0x0) && (0x27 < *param_3)) {
      uVar3 = *(uint *)((int)this + 0x20);
      param_3[1] = param_3[1] | 1;
      param_3[9] = 0xffffffff;
      param_3[2] = uVar3;
      param_3[3] = (uint)hWnd;
      uVar3 = SendMessageA(hWnd,0x87,0,0);
      if ((uVar3 & 0x2000) == 0) {
        param_3[1] = param_3[1] | 0x80000002;
      }
    }
  }
  return uVar2;
}



/**************************************************/

/* Function: AfxFindMessageEntry @ 10007952 */

/* Library Function - Single Match
    struct AFX_MSGMAP_ENTRY const * __stdcall AfxFindMessageEntry(struct AFX_MSGMAP_ENTRY const
   *,unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

AFX_MSGMAP_ENTRY *
AfxFindMessageEntry(AFX_MSGMAP_ENTRY *param_1,uint param_2,uint param_3,uint param_4)

{
  while( true ) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return (AFX_MSGMAP_ENTRY *)0x0;
    }
    if ((((param_2 == *(uint *)param_1) && (param_3 == *(uint *)(param_1 + 4))) &&
        (*(uint *)(param_1 + 8) <= param_4)) && (param_4 <= *(uint *)(param_1 + 0xc))) break;
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



/**************************************************/

/* Function: WindowProc @ 10007992 */

/* Library Function - Single Match
    protected: virtual long __thiscall CWnd::WindowProc(unsigned int,unsigned int,long)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  int iVar1;
  long local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x10c))(param_1,param_2,param_3,&local_8);
  if (iVar1 == 0) {
    local_8 = (**(code **)(*(int *)this + 0x110))(param_1,param_2,param_3);
  }
  return local_8;
}



/**************************************************/

/* Function: CTestCmdUI @ 100079d6 */

/* Library Function - Single Match
    public: __thiscall CTestCmdUI::CTestCmdUI(void)
   
   Library: Visual Studio 2005 Release */

CTestCmdUI * __thiscall CTestCmdUI::CTestCmdUI(CTestCmdUI *this)

{
  CCmdUI::CCmdUI((CCmdUI *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x28) = 1;
  return this;
}



/**************************************************/

/* Function: FUN_100079ef @ 100079ef */

void __thiscall FUN_100079ef(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x18) = 1;
  return;
}



/**************************************************/

/* Function: CalcWindowRect @ 10007a00 */

/* Library Function - Single Match
    public: virtual void __thiscall CWnd::CalcWindowRect(struct tagRECT *,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
  ulong dwExStyle;
  ulong dwStyle;
  BOOL bMenu;
  
  dwExStyle = GetExStyle(this);
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = GetExStyle(this);
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}



/**************************************************/

/* Function: FUN_10007a2d @ 10007a2d */

undefined ** FUN_10007a2d(void)

{
  return &PTR_DAT_1001ea10;
}



/**************************************************/

/* Function: GetIDsOfNames @ 10007a33 */

/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::GetIDsOfNames(struct _GUID const &,wchar_t *
   *,unsigned int,unsigned long,long *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long CWnd::XAccessible::GetIDsOfNames
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  long lVar1;
  long *in_stack_00000018;
  
  lVar1 = ATL::AtlIAccessibleGetIDsOfNamesHelper
                    ((_GUID *)param_2,(wchar_t **)param_3,param_4,(ulong)param_5,in_stack_00000018);
  return lVar1;
}



/**************************************************/

/* Function: FUN_10007a4e @ 10007a4e */

undefined4 FUN_10007a4e(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = 1;
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_10007a68 @ 10007a68 */

undefined4 FUN_10007a68(void)

{
  return 0x80004001;
}



/**************************************************/

/* Function: FUN_10007a70 @ 10007a70 */

undefined4 FUN_10007a70(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = 0;
    uVar1 = 0x80004001;
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_10007a8a @ 10007a8a */

HRESULT __fastcall FUN_10007a8a(int param_1)

{
  HRESULT HVar1;
  
  if ((*(void **)(param_1 + 0x28) == (void *)0x0) &&
     (HVar1 = CreateStdAccessibleObject
                        (*(HWND *)(param_1 + 0x20),-4,(IID *)&DAT_1001ee74,(void **)(param_1 + 0x28)
                        ), HVar1 < 0)) {
    return HVar1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10007aa9 @ 10007aa9 */

void __thiscall FUN_10007aa9(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x28) + 0x1c))(*(int **)((int)this + 0x28),param_1);
  return;
}



/**************************************************/

/* Function: FUN_10007ab9 @ 10007ab9 */

void __thiscall FUN_10007ab9(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x28) + 0x20))(*(int **)((int)this + 0x28),param_1);
  return;
}



/**************************************************/

/* Function: get_accChild @ 10007ac9 */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accChild(struct tagVARIANT,struct IDispatch * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accChild(CWnd *this,tagVARIANT param_1,IDispatch **param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x24))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: get_accName @ 10007aea */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accName(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accName(CWnd *this,tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x28))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: get_accValue @ 10007b0b */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accValue(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accValue(CWnd *this,tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x2c))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: get_accDescription @ 10007b2c */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accDescription(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accDescription(CWnd *this,tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x30))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: get_accRole @ 10007b4d */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accRole(struct tagVARIANT,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accRole(CWnd *this,tagVARIANT param_1,tagVARIANT *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x34))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: get_accState @ 10007b6e */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accState(struct tagVARIANT,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accState(CWnd *this,tagVARIANT param_1,tagVARIANT *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x38))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: get_accHelp @ 10007b8f */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accHelp(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accHelp(CWnd *this,tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x3c))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: get_accHelpTopic @ 10007bb0 */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accHelpTopic(wchar_t * *,struct tagVARIANT,long *)
   
   Library: Visual Studio 2005 Release */

long __thiscall
CWnd::get_accHelpTopic(CWnd *this,wchar_t **param_1,tagVARIANT param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x40))(*(int **)(this + 0x28),param_1);
  return lVar1;
}



/**************************************************/

/* Function: get_accKeyboardShortcut @ 10007bd5 */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accKeyboardShortcut(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accKeyboardShortcut(CWnd *this,tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x44))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: FUN_10007bf6 @ 10007bf6 */

void __thiscall FUN_10007bf6(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x28) + 0x48))(*(int **)((int)this + 0x28),param_1);
  return;
}



/**************************************************/

/* Function: FUN_10007c06 @ 10007c06 */

void __thiscall FUN_10007c06(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x28) + 0x4c))(*(int **)((int)this + 0x28),param_1);
  return;
}



/**************************************************/

/* Function: get_accDefaultAction @ 10007c16 */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accDefaultAction(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accDefaultAction(CWnd *this,tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x50))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}



/**************************************************/

/* Function: accSelect @ 10007c37 */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accSelect(long,struct tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::accSelect(CWnd *this,long param_1,tagVARIANT param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x54))(*(int **)(this + 0x28),param_1);
  return lVar1;
}



/**************************************************/

/* Function: accLocation @ 10007c58 */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accLocation(long *,long *,long *,long *,struct tagVARIANT)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

long __thiscall
CWnd::accLocation(CWnd *this,long *param_1,long *param_2,long *param_3,long *param_4,
                 tagVARIANT param_5)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x58))
                    (*(int **)(this + 0x28),param_1,param_2,param_3,param_4,param_5.n1._0_4_,
                     param_5.n1.decVal.Hi32,param_5.n1._8_4_,param_5.n1._12_4_);
  return lVar1;
}



/**************************************************/

/* Function: accNavigate @ 10007c84 */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accNavigate(long,struct tagVARIANT,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::accNavigate(CWnd *this,long param_1,tagVARIANT param_2,tagVARIANT *param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x5c))(*(int **)(this + 0x28),param_1);
  return lVar1;
}



/**************************************************/

/* Function: FUN_10007ca9 @ 10007ca9 */

void __thiscall FUN_10007ca9(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)((int)this + 0x28) + 0x60))
            (*(int **)((int)this + 0x28),param_1,param_2,param_3);
  return;
}



/**************************************************/

/* Function: accDoDefaultAction @ 10007cc1 */

/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accDoDefaultAction(struct tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::accDoDefaultAction(CWnd *this,tagVARIANT param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 100))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_);
  return lVar1;
}



/**************************************************/

/* Function: FUN_10007cde @ 10007cde */

void __thiscall
FUN_10007cde(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (**(code **)(**(int **)((int)this + 0x28) + 0x68))
            (*(int **)((int)this + 0x28),param_1,param_2,param_3,param_4,param_5);
  return;
}



/**************************************************/

/* Function: FUN_10007cff @ 10007cff */

undefined4 __thiscall FUN_10007cff(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2c) = param_1;
  return 0;
}



/**************************************************/

/* Function: FUN_10007d0b @ 10007d0b */

void FUN_10007d0b(void *param_1)

{
  _free(param_1);
  return;
}



/**************************************************/

/* Function: FUN_10007d18 @ 10007d18 */

uint __fastcall FUN_10007d18(int param_1)

{
  return *(uint *)(param_1 + 0x3c) & 0x10;
}



/**************************************************/

/* Function: FUN_10007d1f @ 10007d1f */

undefined4 FUN_10007d1f(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10007d24 @ 10007d24 */

undefined4 FUN_10007d24(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10007d27 @ 10007d27 */

undefined4 FUN_10007d27(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  *param_1 = 0;
  return 1;
}



/**************************************************/

/* Function: FUN_10007d3d @ 10007d3d */

undefined4 FUN_10007d3d(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  *param_2 = 0;
  return 1;
}



/**************************************************/

/* Function: FUN_10007d53 @ 10007d53 */

undefined ** FUN_10007d53(void)

{
  return &PTR_DAT_1001ea18;
}



/**************************************************/

/* Function: FID_conflict:AfxCtxRegisterClassA @ 10007d59 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    unsigned short __cdecl AfxCtxRegisterClassA(struct tagWNDCLASSA const *)
    unsigned short __cdecl AfxCtxRegisterClassW(struct tagWNDCLASSW const *)
   
   Library: Visual Studio 2005 Release */

uint __cdecl FID_conflict_AfxCtxRegisterClassA(WNDCLASSA *param_1)

{
  ATOM AVar1;
  AFX_MODULE_STATE *pAVar2;
  eActCtxResult eVar3;
  uint uVar4;
  undefined2 extraout_var;
  ulong *puVar5;
  ulong local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10022970;
  uStack_c = 0x10007d65;
  local_24 = 0;
  puVar5 = &local_24;
  pAVar2 = AfxGetModuleState();
  eVar3 = AfxActivateActCtxWrapper(*(void **)(pAVar2 + 0x80),puVar5);
  local_20 = 0;
  if (eVar3 == 0) {
    uVar4 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    AVar1 = RegisterClassA(param_1);
    local_20 = (uint)AVar1;
    local_8 = (undefined *)0xfffffffe;
    FUN_10007db5();
    uVar4 = CONCAT22(extraout_var,(undefined2)local_20);
  }
  return uVar4;
}



/**************************************************/

/* Function: FUN_10007db5 @ 10007db5 */

void FUN_10007db5(void)

{
  DWORD dwErrCode;
  int unaff_EBP;
  bool bVar1;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    bVar1 = *(short *)(unaff_EBP + -0x1c) != 0;
    if (bVar1) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_10003ce2();
    if (!bVar1) {
      SetLastError(dwErrCode);
    }
  }
  return;
}



/**************************************************/

/* Function: FID_conflict:AfxCtxGetClassInfoW @ 10007dec */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    int __cdecl AfxCtxGetClassInfoA(struct HINSTANCE__ *,char const *,struct tagWNDCLASSA *)
    int __cdecl AfxCtxGetClassInfoW(struct HINSTANCE__ *,wchar_t const *,struct tagWNDCLASSW *)
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl FID_conflict_AfxCtxGetClassInfoW(HINSTANCE param_1,LPCSTR param_2,LPWNDCLASSA param_3)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  BOOL local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10022990;
  uStack_c = 0x10007df8;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = 0;
  if (eVar2 == 0) {
    local_20 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = GetClassInfoA(param_1,param_2,param_3);
    local_8 = (undefined *)0xfffffffe;
    FUN_10007e4b();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_10007e4b @ 10007e4b */

void FUN_10007e4b(void)

{
  uint uVar1;
  DWORD dwErrCode;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    uVar1 = (uint)(*(uint *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (uVar1 == unaff_EBX) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_10003ce2();
    if (uVar1 != unaff_EBX) {
      SetLastError(dwErrCode);
    }
  }
  return;
}



/**************************************************/

/* Function: FID_conflict:AfxCtxGetClassInfoExW @ 10007e80 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    int __cdecl AfxCtxGetClassInfoA(struct HINSTANCE__ *,char const *,struct tagWNDCLASSA *)
    int __cdecl AfxCtxGetClassInfoExA(struct HINSTANCE__ *,char const *,struct tagWNDCLASSEXA *)
    int __cdecl AfxCtxGetClassInfoExW(struct HINSTANCE__ *,wchar_t const *,struct tagWNDCLASSEXW *)
    int __cdecl AfxCtxGetClassInfoW(struct HINSTANCE__ *,wchar_t const *,struct tagWNDCLASSW *)
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
FID_conflict_AfxCtxGetClassInfoExW(HINSTANCE param_1,LPCSTR param_2,LPWNDCLASSEXA param_3)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  BOOL local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_100229b0;
  uStack_c = 0x10007e8c;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = 0;
  if (eVar2 == 0) {
    local_20 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = GetClassInfoExA(param_1,param_2,param_3);
    local_8 = (undefined *)0xfffffffe;
    FUN_10007edf();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_10007edf @ 10007edf */

void FUN_10007edf(void)

{
  uint uVar1;
  DWORD dwErrCode;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    uVar1 = (uint)(*(uint *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (uVar1 == unaff_EBX) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_10003ce2();
    if (uVar1 != unaff_EBX) {
      SetLastError(dwErrCode);
    }
  }
  return;
}



/**************************************************/

/* Function: FID_conflict:AfxCtxCreateWindowExW @ 10007f14 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    struct HWND__ * __cdecl AfxCtxCreateWindowExA(unsigned long,char const *,char const *,unsigned
   long,int,int,int,int,struct HWND__ *,struct HMENU__ *,struct HINSTANCE__ *,void *)
    struct HWND__ * __cdecl AfxCtxCreateWindowExW(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,int,int,int,int,struct HWND__ *,struct HMENU__ *,struct HINSTANCE__ *,void *)
   
   Library: Visual Studio 2005 Release */

HWND __cdecl
FID_conflict_AfxCtxCreateWindowExW
          (DWORD param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4,int param_5,int param_6,
          int param_7,int param_8,HWND param_9,HMENU param_10,HINSTANCE param_11,LPVOID param_12)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  HWND local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_100229d0;
  uStack_c = 0x10007f20;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = (HWND)0x0;
  if (eVar2 == 0) {
    local_20 = (HWND)0x0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = CreateWindowExA(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11,param_12);
    local_8 = (undefined *)0xfffffffe;
    FUN_10007f8e();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_10007f8e @ 10007f8e */

void FUN_10007f8e(void)

{
  uint uVar1;
  DWORD dwErrCode;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    uVar1 = (uint)(*(uint *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (uVar1 == unaff_EBX) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_10003ce2();
    if (uVar1 != unaff_EBX) {
      SetLastError(dwErrCode);
    }
  }
  return;
}



/**************************************************/

/* Function: AfxCtxLoadLibraryA @ 10007fc3 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl AfxCtxLoadLibraryA(char const *)
   
   Library: Visual Studio 2005 Release */

HINSTANCE__ * __cdecl AfxCtxLoadLibraryA(char *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  HMODULE local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_100229f0;
  uStack_c = 0x10007fcf;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = (HMODULE)0x0;
  if (eVar2 == 0) {
    local_20 = (HINSTANCE__ *)0x0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = LoadLibraryA(param_1);
    local_8 = (undefined *)0xfffffffe;
    FUN_1000801c();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000801c @ 1000801c */

void FUN_1000801c(void)

{
  uint uVar1;
  DWORD dwErrCode;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    uVar1 = (uint)(*(uint *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (uVar1 == unaff_EBX) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_10003ce2();
    if (uVar1 != unaff_EBX) {
      SetLastError(dwErrCode);
    }
  }
  return;
}



/**************************************************/

/* Function: GetSubMenu @ 10008051 */

/* Library Function - Single Match
    public: class CMenu * __thiscall CMenu::GetSubMenu(int)const 
   
   Library: Visual Studio 2005 Release */

CMenu * __thiscall CMenu::GetSubMenu(CMenu *this,int param_1)

{
  HMENU pHVar1;
  CMenu *pCVar2;
  
  pHVar1 = ::GetSubMenu(*(HMENU *)(this + 4),param_1);
  pCVar2 = FromHandle(pHVar1);
  return pCVar2;
}



/**************************************************/

/* Function: FUN_10008067 @ 10008067 */

void __fastcall FUN_10008067(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}



/**************************************************/

/* Function: FUN_10008073 @ 10008073 */

void __fastcall FUN_10008073(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}



/**************************************************/

/* Function: FUN_1000807f @ 1000807f */

int __cdecl FUN_1000807f(PCNZCH param_1,PCNZCH param_2)

{
  int iVar1;
  
  iVar1 = CompareStringA(0x409,1,param_1,-1,param_2,-1);
  return iVar1 + -2;
}



/**************************************************/

/* Function: Lock @ 1000809b */

/* Library Function - Single Match
    public: void __thiscall CInternalGlobalLock::Lock(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CInternalGlobalLock::Lock(CInternalGlobalLock *this,int param_1)

{
  if (param_1 != 0x7fffffff) {
    if ((*(int *)this != 0x7fffffff) && (*(int *)this != param_1)) goto LAB_100080b3;
    *(int *)this = param_1;
  }
  if (*(int *)this != 0x7fffffff) {
    AfxLockGlobals(*(int *)this);
    return;
  }
LAB_100080b3:
                    /* WARNING: Subroutine does not return */
  FUN_10003617();
}



/**************************************************/

/* Function: Unlock @ 100080ca */

/* Library Function - Single Match
    public: void __thiscall CInternalGlobalLock::Unlock(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CInternalGlobalLock::Unlock(CInternalGlobalLock *this)

{
  if (*(int *)this != 0x7fffffff) {
    AfxUnlockGlobals(*(int *)this);
    *(undefined4 *)this = 0x7fffffff;
  }
  return;
}



/**************************************************/

/* Function: CWnd @ 100080e4 */

/* Library Function - Single Match
    public: __thiscall CWnd::CWnd(void)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::CWnd(CWnd *this)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x30) = XAccessible::vftable;
  *(undefined ***)(this + 0x34) = XAccessibleServer::vftable;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (CWnd)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return this;
}



/**************************************************/

/* Function: FUN_10008127 @ 10008127 */

void FUN_10008127(CWnd *param_1,LPRECT param_2,ulong *param_3)

{
  ulong uVar1;
  
  GetWindowRect(*(HWND *)(param_1 + 0x20),param_2);
  uVar1 = CWnd::GetExStyle(param_1);
  *param_3 = uVar1;
  return;
}



/**************************************************/

/* Function: CreateEx @ 1000814a */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::CreateEx(unsigned long,char const *,char const *,unsigned
   long,struct tagRECT const &,class CWnd *,unsigned int,void *)
    public: virtual int __thiscall CWnd::CreateEx(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,struct tagRECT const &,class CWnd *,unsigned int,void *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CreateEx(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
        int *param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_6 + 0x20);
  }
  (**(code **)(*(int *)this + 0x5c))
            (param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5[2] - *param_5,
             param_5[3] - param_5[1],uVar1,param_7,param_8);
  return;
}



/**************************************************/

/* Function: Create @ 10008193 */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::Create(char const *,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
    public: virtual int __thiscall CWnd::Create(wchar_t const *,wchar_t const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,struct CCreateContext *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
Create(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,int param_5,
      undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x20);
  }
  (**(code **)(*(int *)this + 0x5c))
            (0,param_1,param_2,param_3 | 0x40000000,*param_4,param_4[1],param_4[2] - *param_4,
             param_4[3] - param_4[1],uVar1,param_6,param_7);
  return;
}



/**************************************************/

/* Function: _AfxFindPopupMenuFromID @ 10008232 */

/* Library Function - Single Match
    class CMenu * __stdcall _AfxFindPopupMenuFromID(class CMenu *,unsigned int)
   
   Library: Visual Studio 2005 Release */

CMenu * _AfxFindPopupMenuFromID(CMenu *param_1,uint param_2)

{
  int iVar1;
  CMenu *pCVar2;
  UINT UVar3;
  int nPos;
  
  if (param_1 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  iVar1 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
  nPos = 0;
  if (0 < iVar1) {
    do {
      pCVar2 = CMenu::GetSubMenu(param_1,nPos);
      if (pCVar2 == (CMenu *)0x0) {
        UVar3 = GetMenuItemID(*(HMENU *)(param_1 + 4),nPos);
        if (UVar3 == param_2) goto LAB_10008294;
      }
      else {
        if (*(uint *)(pCVar2 + 4) == param_2) {
LAB_10008294:
          pCVar2 = CMenu::FromHandlePermanent(*(HMENU__ **)(param_1 + 4));
          return pCVar2;
        }
        pCVar2 = _AfxFindPopupMenuFromID(pCVar2,param_2);
        if (pCVar2 != (CMenu *)0x0) {
          return pCVar2;
        }
      }
      nPos = nPos + 1;
    } while (nPos < iVar1);
  }
  return (CMenu *)0x0;
}



/**************************************************/

/* Function: FUN_1000829e @ 1000829e */

void __fastcall FUN_1000829e(undefined4 *param_1)

{
  *param_1 = _AFX_HTMLHELP_STATE::vftable;
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
  }
  return;
}



/**************************************************/

/* Function: FUN_100082b3 @ 100082b3 */

undefined4 * __thiscall FUN_100082b3(void *this,byte param_1)

{
  FUN_1000829e(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}



/**************************************************/

/* Function: WinHelpInternal @ 100082ce */

/* Library Function - Single Match
    public: virtual void __thiscall CWnd::WinHelpInternal(unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::WinHelpInternal(CWnd *this,ulong param_1,uint param_2)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  if (*(int *)(*(int *)(pAVar1 + 4) + 0x6c) == 1) {
    if (param_2 == 1) {
      param_2 = 0xf;
    }
    else if (param_2 == 3) {
      param_2 = 1;
    }
    else if (param_2 == 0xb) {
      param_2 = 0;
    }
    (**(code **)(*(int *)this + 0x78))(param_1,param_2);
  }
  else {
    (**(code **)(*(int *)this + 0x74))(param_1,param_2);
  }
  return;
}



/**************************************************/

/* Function: AddRef @ 10008348 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall CWnd::XAccessible::AddRef(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

ulong CWnd::XAccessible::AddRef(void)

{
  ulong uVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008354;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0x14));
  local_8 = 0;
  uVar1 = CCmdTarget::ExternalAddRef((CCmdTarget *)(in_stack_00000004 + -0x30));
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return uVar1;
}



/**************************************************/

/* Function: Release @ 10008390 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall CWnd::XAccessible::Release(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

ulong CWnd::XAccessible::Release(void)

{
  ulong uVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1000839c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0x14));
  local_8 = 0;
  uVar1 = CCmdTarget::ExternalRelease((CCmdTarget *)(in_stack_00000004 + -0x30));
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return uVar1;
}



/**************************************************/

/* Function: QueryInterface @ 100083d8 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::QueryInterface(struct _GUID const &,void * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CWnd::XAccessible::QueryInterface(_GUID *param_1,void **param_2)

{
  int iVar1;
  undefined4 *in_stack_0000000c;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100083e4;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1[-2].Data4 + 4));
  local_8 = 0;
  iVar1 = FUN_10005d5d(param_1 + -3,param_2,in_stack_0000000c);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return iVar1;
}



/**************************************************/

/* Function: Invoke @ 10008426 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::Invoke(long,struct _GUID const &,unsigned
   long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO *,unsigned int
   *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::Invoke
               (long param_1,_GUID *param_2,ulong param_3,ushort param_4,tagDISPPARAMS *param_5,
               tagVARIANT *param_6,tagEXCEPINFO *param_7,uint *param_8)

{
  long lVar1;
  undefined2 in_stack_00000012;
  uint *in_stack_00000024;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008432;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  lVar1 = ATL::AtlIAccessibleInvokeHelper
                    ((IAccessible *)param_1,(long)param_2,(_GUID *)param_3,_param_4,(ushort)param_5,
                     (tagDISPPARAMS *)param_6,(tagVARIANT *)param_7,(tagEXCEPINFO *)param_8,
                     in_stack_00000024);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accParent @ 10008482 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accParent(struct IDispatch * *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accParent(IDispatch **param_1)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1000848e;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-5]);
  local_8 = 0;
  lVar1 = (*(code *)param_1[-0xc][0x23].lpVtbl)(in_stack_00000008);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accChildCount @ 100084d0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accChildCount(long *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accChildCount(long *param_1)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100084dc;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-5]);
  local_8 = 0;
  lVar1 = (**(code **)(param_1[-0xc] + 0x90))(in_stack_00000008);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accChild @ 1000851e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accChild(struct tagVARIANT,struct
   IDispatch * *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accChild(tagVARIANT param_1,IDispatch **param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1000852a;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0x94))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accName @ 10008578 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accName(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accName(tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008584;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0x98))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accValue @ 100085d2 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual long __stdcall CWnd::XAccessible::get_accChild(struct tagVARIANT,struct
   IDispatch * *)
    public: virtual long __stdcall CWnd::XAccessible::get_accValue(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CWnd::XAccessible::get_accValue(tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100085de;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0x9c))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accDescription @ 1000862c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual long __stdcall CWnd::XAccessible::get_accDescription(struct tagVARIANT,wchar_t *
   *)
    public: virtual long __stdcall CWnd::XAccessible::get_accName(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CWnd::XAccessible::get_accDescription(tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008638;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0xa0))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: FID_conflict:get_accValue @ 10008686 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual long __stdcall CWnd::XAccessible::get_accRole(struct tagVARIANT,struct
   tagVARIANT *)
    public: virtual long __stdcall CWnd::XAccessible::get_accValue(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4
FID_conflict_get_accValue
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008692;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  uVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xa4))(param_2,param_3,param_4,param_5,param_6);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return uVar1;
}



/**************************************************/

/* Function: FID_conflict:get_accDescription @ 100086e0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual long __stdcall CWnd::XAccessible::get_accDescription(struct tagVARIANT,wchar_t *
   *)
    public: virtual long __stdcall CWnd::XAccessible::get_accState(struct tagVARIANT,struct
   tagVARIANT *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4
FID_conflict_get_accDescription
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100086ec;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  uVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xa8))(param_2,param_3,param_4,param_5,param_6);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return uVar1;
}



/**************************************************/

/* Function: FID_conflict:get_accRole @ 1000873a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual long __stdcall CWnd::XAccessible::get_accHelp(struct tagVARIANT,wchar_t * *)
    public: virtual long __stdcall CWnd::XAccessible::get_accRole(struct tagVARIANT,struct
   tagVARIANT *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4
FID_conflict_get_accRole
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008746;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  uVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xac))(param_2,param_3,param_4,param_5,param_6);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return uVar1;
}



/**************************************************/

/* Function: get_accHelpTopic @ 10008794 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accHelpTopic(wchar_t * *,struct
   tagVARIANT,long *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accHelpTopic(wchar_t **param_1,tagVARIANT param_2,long *param_3)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100087a0;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-5]);
  local_8 = 0;
  lVar1 = (**(code **)(param_1[-0xc] + 0x58))
                    (in_stack_00000008,param_2.n1._0_4_,param_2.n1.decVal.Hi32,param_2.n1._8_4_,
                     param_2.n1._12_4_,param_3);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: FID_conflict:get_accHelp @ 100087f1 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual long __stdcall CWnd::XAccessible::get_accHelp(struct tagVARIANT,wchar_t * *)
    public: virtual long __stdcall CWnd::XAccessible::get_accKeyboardShortcut(struct
   tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4
FID_conflict_get_accHelp
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100087fd;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  uVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xb4))(param_2,param_3,param_4,param_5,param_6);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return uVar1;
}



/**************************************************/

/* Function: get_accFocus @ 1000884b */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accFocus(struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accFocus(tagVARIANT *param_1)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008857;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)((int)&param_1[-2].n1 + 0xc));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)&param_1[-3].n1 + 0xb8))(in_stack_00000008);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accSelection @ 10008899 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accSelection(struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accSelection(tagVARIANT *param_1)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100088a5;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)((int)&param_1[-2].n1 + 0xc));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)&param_1[-3].n1 + 0xbc))(in_stack_00000008);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accDefaultAction @ 100088e7 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accDefaultAction(struct tagVARIANT,wchar_t
   * *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accDefaultAction(tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100088f3;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0xc0))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: accSelect @ 10008941 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::accSelect(long,struct tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::accSelect(long param_1,tagVARIANT param_2)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1000894d;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xc4))
                    (in_stack_00000008,param_2.n1._0_4_,param_2.n1.decVal.Hi32,param_2.n1._8_4_,
                     param_2.n1._12_4_);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: accLocation @ 1000899b */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::accLocation(long *,long *,long *,long *,struct
   tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::accLocation
               (long *param_1,long *param_2,long *param_3,long *param_4,tagVARIANT param_5)

{
  long lVar1;
  undefined4 in_stack_00000024;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100089a7;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-5]);
  local_8 = 0;
  lVar1 = (**(code **)(param_1[-0xc] + 200))
                    (param_2,param_3,param_4,param_5.n1._0_4_,param_5.n1.decVal.Hi32,
                     param_5.n1._8_4_,param_5.n1._12_4_,in_stack_00000024);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: accNavigate @ 100089fe */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::accNavigate(long,struct tagVARIANT,struct
   tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::accNavigate(long param_1,tagVARIANT param_2,tagVARIANT *param_3)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008a0a;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xcc))
                    (in_stack_00000008,param_2.n1._0_4_,param_2.n1.decVal.Hi32,param_2.n1._8_4_,
                     param_2.n1._12_4_,param_3);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: accHitTest @ 10008a5b */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::accHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::accHitTest(long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  undefined4 in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008a67;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xd0))(param_2,param_3,in_stack_00000010);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: accDoDefaultAction @ 10008aaf */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::accDoDefaultAction(struct tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::accDoDefaultAction(tagVARIANT param_1)

{
  long lVar1;
  undefined4 in_stack_00000014;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008abb;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0xd4))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,in_stack_00000014);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: put_accName @ 10008b06 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::put_accName(struct tagVARIANT,wchar_t *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::put_accName(tagVARIANT param_1,wchar_t *param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008b12;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0xd8))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: put_accValue @ 10008b60 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::put_accValue(struct tagVARIANT,wchar_t *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::put_accValue(tagVARIANT param_1,wchar_t *param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008b6c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0xdc))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: AddRef @ 10008bba */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall CWnd::XAccessibleServer::AddRef(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

ulong CWnd::XAccessibleServer::AddRef(void)

{
  ulong uVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008bc6;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0x18));
  local_8 = 0;
  uVar1 = CCmdTarget::ExternalAddRef((CCmdTarget *)(in_stack_00000004 + -0x34));
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return uVar1;
}



/**************************************************/

/* Function: Release @ 10008c02 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall CWnd::XAccessibleServer::Release(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

ulong CWnd::XAccessibleServer::Release(void)

{
  ulong uVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008c0e;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0x18));
  local_8 = 0;
  uVar1 = CCmdTarget::ExternalRelease((CCmdTarget *)(in_stack_00000004 + -0x34));
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return uVar1;
}



/**************************************************/

/* Function: QueryInterface @ 10008c4a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessibleServer::QueryInterface(struct _GUID const &,void
   * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CWnd::XAccessibleServer::QueryInterface(_GUID *param_1,void **param_2)

{
  int iVar1;
  undefined4 *in_stack_0000000c;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008c56;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)param_1[-2].Data4);
  local_8 = 0;
  iVar1 = FUN_10005d5d(param_1[-4].Data4 + 4,param_2,in_stack_0000000c);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return iVar1;
}



/**************************************************/

/* Function: SetProxy @ 10008c98 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessibleServer::SetProxy(struct IAccessibleProxy *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessibleServer::SetProxy(IAccessibleProxy *param_1)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10008ca4;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x18));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1 + -0x34) + 0xe0))(in_stack_00000008);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_10003ce2();
  }
  return lVar1;
}



/**************************************************/

/* Function: GetHWND @ 10008ce6 */

/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessibleServer::GetHWND(struct HWND__ * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CWnd::XAccessibleServer::GetHWND(HWND__ **param_1)

{
  long lVar1;
  undefined4 *in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_c [4];
  int local_8;
  
  if (in_stack_00000008 == (undefined4 *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_c,(AFX_MODULE_STATE *)param_1[-6]);
    *in_stack_00000008 = param_1[-5];
    if (local_8 != 0) {
      FUN_10003ce2();
    }
    lVar1 = 0;
  }
  return lVar1;
}



/**************************************************/

/* Function: FUN_10008d26 @ 10008d26 */

void __fastcall FUN_10008d26(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



/**************************************************/

/* Function: CenterWindow @ 10008d33 */

/* Library Function - Single Match
    public: void __thiscall CWnd::CenterWindow(class CWnd *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  HWND pHVar5;
  uint *puVar6;
  uint local_64 [5];
  RECT local_50;
  tagRECT local_3c;
  tagRECT local_2c;
  tagRECT local_1c;
  CWnd *local_c;
  ulong local_8;
  
  local_c = this;
  local_8 = GetExStyle(this);
  if (param_1 == (CWnd *)0x0) {
    if ((local_8 & 0x40000000) == 0) {
      pHVar5 = GetWindow(*(HWND *)(this + 0x20),4);
    }
    else {
      pHVar5 = GetParent(*(HWND *)(this + 0x20));
    }
    if ((pHVar5 != (HWND)0x0) &&
       (pHVar3 = (HWND)SendMessageA(pHVar5,0x36b,0,0), pHVar3 != (HWND)0x0)) {
      pHVar5 = pHVar3;
    }
  }
  else {
    pHVar5 = *(HWND *)(param_1 + 0x20);
  }
  GetWindowRect(*(HWND *)(this + 0x20),&local_3c);
  if ((local_8 & 0x40000000) == 0) {
    if ((pHVar5 != (HWND)0x0) &&
       ((uVar1 = GetWindowLongA(pHVar5,-0x10), (uVar1 & 0x10000000) == 0 ||
        ((uVar1 & 0x20000000) != 0)))) {
      pHVar5 = (HWND)0x0;
    }
    local_64[0] = 0x28;
    if (pHVar5 == (HWND)0x0) {
      iVar2 = FUN_10004e4c();
      pHVar5 = (HWND)0x0;
      if (iVar2 != 0) {
        pHVar5 = *(HWND *)(iVar2 + 0x20);
      }
      puVar6 = local_64;
      iVar2 = xMonitorFromWindow(pHVar5,1);
      xGetMonitorInfo(iVar2,puVar6);
      CopyRect(&local_2c,&local_50);
      CopyRect(&local_1c,&local_50);
    }
    else {
      GetWindowRect(pHVar5,&local_2c);
      puVar6 = local_64;
      iVar2 = xMonitorFromWindow(pHVar5,2);
      xGetMonitorInfo(iVar2,puVar6);
      CopyRect(&local_1c,&local_50);
    }
  }
  else {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    GetClientRect(pHVar3,&local_1c);
    GetClientRect(pHVar5,&local_2c);
    MapWindowPoints(pHVar5,pHVar3,(LPPOINT)&local_2c,2);
  }
  iVar2 = (local_2c.left + local_2c.right) / 2 - (local_3c.right - local_3c.left) / 2;
  iVar4 = (local_2c.top + local_2c.bottom) / 2 - (local_3c.bottom - local_3c.top) / 2;
  if ((local_1c.left <= iVar2) &&
     (local_1c.left = iVar2, local_1c.right < (local_3c.right - local_3c.left) + iVar2)) {
    local_1c.left = (local_3c.left - local_3c.right) + local_1c.right;
  }
  if ((local_1c.top <= iVar4) &&
     (local_1c.top = iVar4, local_1c.bottom < (local_3c.bottom - local_3c.top) + iVar4)) {
    local_1c.top = (local_3c.top - local_3c.bottom) + local_1c.bottom;
  }
  SetWindowPos(local_c,(CWnd *)0x0,local_1c.left,local_1c.top,-1,-1,0x15);
  return;
}



/**************************************************/

/* Function: EndModalLoop @ 10008ef5 */

/* Library Function - Single Match
    public: virtual void __thiscall CWnd::EndModalLoop(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
  *(int *)(this + 0x44) = param_1;
  if ((*(uint *)(this + 0x3c) & 0x10) != 0) {
    *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xffffffef;
    PostMessageA(*(HWND *)(this + 0x20),0,0,0);
  }
  return;
}



/**************************************************/

/* Function: FID_conflict:GetModuleHandleA @ 10008f6e */

/* Library Function - Multiple Matches With Different Base Names
    public: struct HINSTANCE__ * __thiscall CDllIsolationWrapperBase::GetModuleHandleA(void)
    public: struct HINSTANCE__ * __thiscall CDllIsolationWrapperBase::GetModuleHandleW(void)
   
   Library: Visual Studio 2005 Release */

HMODULE FID_conflict_GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    pHVar1 = GetModuleHandleA(*(LPCSTR *)(in_ECX + 0xc));
    *(HMODULE *)(in_ECX + 4) = pHVar1;
    if (pHVar1 == (HMODULE)0x0) {
      pHVar1 = LoadLibraryA(*(LPCSTR *)(in_ECX + 0xc));
      *(HMODULE *)(in_ECX + 4) = pHVar1;
      *(bool *)(in_ECX + 8) = pHVar1 != (HMODULE)0x0;
    }
  }
  return *(HMODULE *)(in_ECX + 4);
}



/**************************************************/

/* Function: GetProcAddress_InitCommonControls @ 10008fa0 */

/* Library Function - Single Match
    public: struct CComCtlWrapper::InitCommonControls_Type __thiscall
   CComCtlWrapper::GetProcAddress_InitCommonControls(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CComCtlWrapper::GetProcAddress_InitCommonControls(CComCtlWrapper *this)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 *in_stack_00000004;
  char *lpProcName;
  
  if (*(int *)(this + 0x10) == 0) {
    lpProcName = "InitCommonControls";
    hModule = FID_conflict_GetModuleHandleA("InitCommonControls");
    pFVar1 = GetProcAddress(hModule,lpProcName);
    *(FARPROC *)(this + 0x10) = pFVar1;
  }
  *in_stack_00000004 = *(undefined4 *)(this + 0x10);
  return;
}



/**************************************************/

/* Function: _InitCommonControls @ 10008fca */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CComCtlWrapper::_InitCommonControls(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CComCtlWrapper::_InitCommonControls(CComCtlWrapper *this)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10022f60;
  uStack_c = 0x10008fd6;
  local_20[0] = 0;
  puVar3 = local_20;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  if (eVar2 != 0) {
    local_8 = (undefined *)0x0;
    GetProcAddress_InitCommonControls(this);
    if (*(code **)(this + 0x10) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
    (**(code **)(this + 0x10))();
    local_8 = (undefined *)0xfffffffe;
    FUN_1000902d();
  }
  return;
}



/**************************************************/

/* Function: FUN_1000902d @ 1000902d */

void FUN_1000902d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 2) {
    FUN_10003ce2();
  }
  return;
}



/**************************************************/

/* Function: GetProcAddress_InitCommonControlsEx @ 1000903e */

/* Library Function - Single Match
    public: struct CComCtlWrapper::InitCommonControlsEx_Type __thiscall
   CComCtlWrapper::GetProcAddress_InitCommonControlsEx(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CComCtlWrapper::GetProcAddress_InitCommonControlsEx(CComCtlWrapper *this)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 *in_stack_00000004;
  char *lpProcName;
  
  if (*(int *)(this + 0x14) == 0) {
    lpProcName = "InitCommonControlsEx";
    hModule = FID_conflict_GetModuleHandleA("InitCommonControlsEx");
    pFVar1 = GetProcAddress(hModule,lpProcName);
    *(FARPROC *)(this + 0x14) = pFVar1;
  }
  *in_stack_00000004 = *(undefined4 *)(this + 0x14);
  return;
}



/**************************************************/

/* Function: _InitCommonControlsEx @ 10009068 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CComCtlWrapper::_InitCommonControlsEx(struct tagINITCOMMONCONTROLSEX *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CComCtlWrapper::_InitCommonControlsEx(CComCtlWrapper *this,tagINITCOMMONCONTROLSEX *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10022f80;
  uStack_c = 0x10009074;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = 0;
  if (eVar2 == 0) {
    local_20 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    GetProcAddress_InitCommonControlsEx(this);
    if (*(code **)(this + 0x14) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
    local_20 = (**(code **)(this + 0x14))(param_1);
    local_8 = (undefined *)0xfffffffe;
    FUN_100090dd();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_100090dd @ 100090dd */

void FUN_100090dd(void)

{
  DWORD dwErrCode;
  int unaff_EBP;
  bool bVar1;
  
  if (*(int *)(unaff_EBP + -0x24) != 2) {
    bVar1 = *(int *)(unaff_EBP + -0x1c) != 0;
    if (bVar1) {
      dwErrCode = 0;
    }
    else {
      dwErrCode = GetLastError();
    }
    FUN_10003ce2();
    if (!bVar1) {
      SetLastError(dwErrCode);
    }
  }
  return;
}



/**************************************************/

/* Function: AfxInitCommonControlsEx @ 10009113 */

/* Library Function - Single Match
    int __stdcall AfxInitCommonControlsEx(struct tagINITCOMMONCONTROLSEX *)
   
   Library: Visual Studio 2005 Release */

int AfxInitCommonControlsEx(tagINITCOMMONCONTROLSEX *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleState();
  iVar2 = CComCtlWrapper::_InitCommonControlsEx
                    ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78),param_1);
  return iVar2;
}



/**************************************************/

/* Function: FUN_10009129 @ 10009129 */

void __fastcall FUN_10009129(int *param_1)

{
  if (*param_1 != 0x7fffffff) {
    AfxUnlockGlobals(*param_1);
    *param_1 = 0x7fffffff;
  }
  return;
}



/**************************************************/

/* Function: GetCurrentMessage @ 1000912e */

/* Library Function - Single Match
    protected: static struct tagMSG const * __stdcall CWnd::GetCurrentMessage(void)
   
   Library: Visual Studio 2005 Release */

tagMSG * CWnd::GetCurrentMessage(void)

{
  CNoTrackObject *pCVar1;
  LONG LVar2;
  DWORD DVar3;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  LVar2 = GetMessageTime();
  *(LONG *)(pCVar1 + 0x68) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(pCVar1 + 0x70) = (int)(short)(DVar3 >> 0x10);
  *(int *)(pCVar1 + 0x6c) = (int)(short)DVar3;
  return (tagMSG *)(pCVar1 + 0x58);
}



/**************************************************/

/* Function: Default @ 1000916c */

/* Library Function - Single Match
    protected: long __thiscall CWnd::Default(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::Default(CWnd *this)

{
  CNoTrackObject *pCVar1;
  long lVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  lVar2 = (**(code **)(*(int *)this + 0x110))
                    (*(undefined4 *)(pCVar1 + 0x5c),*(undefined4 *)(pCVar1 + 0x60),
                     *(undefined4 *)(pCVar1 + 100));
  return lVar2;
}



/**************************************************/

/* Function: afxMapHWND @ 1000919c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class CHandleMap * __stdcall afxMapHWND(int)
   
   Library: Visual Studio 2005 Release */

CHandleMap * afxMapHWND(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *this;
  undefined4 uVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x14) == 0) && (param_1 != 0)) {
    p_Var2 = AfxSetNewHandler((_func_int_uint *)&LAB_1000bda4);
    this = operator_new(0x60);
    if (this == (CHandleMap *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CHandleMap::CHandleMap
                        (this,(CRuntimeClass *)&PTR_DAT_1001ea18,
                         (_func_void_CObject_ptr *)&LAB_10008f47,
                         (_func_void_CObject_ptr *)&LAB_1000bfbe,0x20,1);
    }
    *(undefined4 *)(pAVar1 + 0x14) = uVar3;
    AfxSetNewHandler(p_Var2);
  }
  return *(CHandleMap **)(pAVar1 + 0x14);
}



/**************************************************/

/* Function: FromHandle @ 10009210 */

/* Library Function - Single Match
    public: static class CWnd * __stdcall CWnd::FromHandle(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CHandleMap *this;
  CObject *this_00;
  
  this = afxMapHWND(1);
  this_00 = CHandleMap::FromHandle(this,param_1);
  AttachControlSite((CWnd *)this_00,this);
  return (CWnd *)this_00;
}



/**************************************************/

/* Function: FromHandlePermanent @ 10009237 */

/* Library Function - Single Match
    public: static class CWnd * __stdcall CWnd::FromHandlePermanent(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

CWnd * CWnd::FromHandlePermanent(HWND__ *param_1)

{
  CHandleMap *pCVar1;
  CWnd *pCVar2;
  
  pCVar1 = afxMapHWND(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    return pCVar2;
  }
  return (CWnd *)0x0;
}



/**************************************************/

/* Function: Attach @ 10009251 */

/* Library Function - Single Match
    public: int __thiscall CWnd::Attach(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::Attach(CWnd *this,HWND__ *param_1)

{
  CHandleMap *pCVar1;
  void **ppvVar2;
  
  if (param_1 != (HWND__ *)0x0) {
    pCVar1 = afxMapHWND(1);
    *(HWND__ **)(this + 0x20) = param_1;
    ppvVar2 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    *ppvVar2 = this;
    AttachControlSite(this,pCVar1);
  }
  return (uint)(param_1 != (HWND__ *)0x0);
}



/**************************************************/

/* Function: Detach @ 1000928a */

/* Library Function - Single Match
    public: struct HWND__ * __thiscall CWnd::Detach(void)
   
   Library: Visual Studio 2005 Release */

HWND__ * __thiscall CWnd::Detach(CWnd *this)

{
  HWND__ *pHVar1;
  CHandleMap *pCVar2;
  
  pHVar1 = *(HWND__ **)(this + 0x20);
  if (pHVar1 != (HWND__ *)0x0) {
    pCVar2 = afxMapHWND(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x50) = 0;
  return pHVar1;
}



/**************************************************/

/* Function: AfxUnhookWindowCreate @ 100092b8 */

/* Library Function - Single Match
    int __stdcall AfxUnhookWindowCreate(void)
   
   Library: Visual Studio 2005 Release */

int AfxUnhookWindowCreate(void)

{
  CNoTrackObject *pCVar1;
  AFX_MODULE_STATE *pAVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  pAVar2 = AfxGetModuleState();
  if ((pAVar2[0x14] != (AFX_MODULE_STATE)0x0) && (*(HHOOK *)(pCVar1 + 0x28) != (HHOOK)0x0)) {
    UnhookWindowsHookEx(*(HHOOK *)(pCVar1 + 0x28));
    *(undefined4 *)(pCVar1 + 0x28) = 0;
  }
  if (*(int *)(pCVar1 + 0x14) != 0) {
    *(undefined4 *)(pCVar1 + 0x14) = 0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: OnDestroy @ 10009303 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnDestroy(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CWnd::OnDestroy(CWnd *this)

{
  int *piVar1;
  
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))(1);
  }
  piVar1 = *(int **)(this + 0x2c);
  *(undefined4 *)(this + 0x4c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0,0);
  }
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  Default(this);
  return;
}



/**************************************************/

/* Function: OnNcDestroy @ 1000933e */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnNcDestroy(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::OnNcDestroy(CWnd *this)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  LONG LVar5;
  LONG LVar6;
  int *piVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_10004d69();
  if (iVar1 == 0) goto LAB_10009389;
  if (*(CWnd **)(iVar1 + 0x20) == this) {
    pAVar2 = AfxGetModuleState();
    if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
      pAVar2 = AfxGetModuleState();
      if (iVar1 == *(int *)(pAVar2 + 4)) {
        iVar3 = AfxOleCanExitApp();
        if (iVar3 == 0) goto LAB_1000937e;
      }
      AfxPostQuitMessage(0);
    }
LAB_1000937e:
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  if (*(CWnd **)(iVar1 + 0x24) == this) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
LAB_10009389:
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 0x50))();
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))(1);
  }
  *(undefined4 *)(this + 0x4c) = 0;
  if (((byte)this[0x3c] & 1) != 0) {
    pAVar4 = AfxGetModuleThreadState();
    iVar1 = *(int *)(pAVar4 + 0x3c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
      _memset(&local_34,0,0x30);
      local_2c = *(undefined4 *)(this + 0x20);
      local_34 = 0x28;
      local_30 = 1;
      local_28 = local_2c;
      SendMessageA(*(HWND *)(iVar1 + 0x20),0x405,0,(LPARAM)&local_34);
    }
  }
  LVar5 = GetWindowLongA(*(HWND *)(this + 0x20),-4);
  Default(this);
  LVar6 = GetWindowLongA(*(HWND *)(this + 0x20),-4);
  if (LVar6 == LVar5) {
    piVar7 = (int *)(**(code **)(*(int *)this + 0xf0))();
    if (*piVar7 != 0) {
      SetWindowLongA(*(HWND *)(this + 0x20),-4,*piVar7);
    }
  }
  Detach(this);
  (**(code **)(*(int *)this + 0x114))();
  return;
}



/**************************************************/

/* Function: DestroyWindow @ 1000944f */

/* Library Function - Single Match
    public: virtual int __thiscall CWnd::DestroyWindow(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  CHandleMap *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 0x20) == 0) {
    if (*(int *)(this + 0x50) == 0) {
      return 0;
    }
  }
  else {
    pCVar1 = afxMapHWND(0);
    if (pCVar1 == (CHandleMap *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
    CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),*(void **)(this + 0x20));
  }
  if ((*(HWND *)(this + 0x20) != (HWND)0x0) || (*(int *)(this + 0x50) != 0)) {
    if (*(int *)(this + 0x50) == 0) {
      iVar2 = ::DestroyWindow(*(HWND *)(this + 0x20));
    }
    else {
      iVar2 = (**(code **)(**(int **)(this + 0x50) + 0x58))();
    }
  }
  return iVar2;
}



/**************************************************/

/* Function: OnNTCtlColor @ 100094ac */

/* Library Function - Single Match
    protected: long __thiscall CWnd::OnNTCtlColor(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::OnNTCtlColor(CWnd *this,uint param_1,long param_2)

{
  CNoTrackObject *pCVar1;
  long lVar2;
  long local_10;
  uint local_c;
  int local_8;
  
  local_c = param_1;
  local_10 = param_2;
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  local_8 = *(int *)(pCVar1 + 0x5c) + -0x132;
  lVar2 = (**(code **)(*(int *)this + 0x108))(0x19,0,&local_10);
  return lVar2;
}



/**************************************************/

/* Function: GetDescendantWindow @ 100094fb */

/* Library Function - Single Match
    public: static class CWnd * __stdcall CWnd::GetDescendantWindow(struct HWND__ *,int,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

CWnd * CWnd::GetDescendantWindow(HWND__ *param_1,int param_2,int param_3)

{
  HWND hWnd;
  HWND pHVar1;
  CWnd *pCVar2;
  HWND__ *hWnd_00;
  
  hWnd = GetDlgItem(param_1,param_2);
  if (hWnd != (HWND)0x0) {
    pHVar1 = GetTopWindow(hWnd);
    if ((pHVar1 != (HWND)0x0) &&
       (pCVar2 = GetDescendantWindow(hWnd,param_2,param_3), pCVar2 != (CWnd *)0x0)) {
      return pCVar2;
    }
    if (param_3 == 0) {
      pCVar2 = FromHandle(hWnd);
      return pCVar2;
    }
    pCVar2 = FromHandlePermanent(hWnd);
    if (pCVar2 != (CWnd *)0x0) {
      return pCVar2;
    }
  }
  hWnd_00 = GetTopWindow(param_1);
  while( true ) {
    if (hWnd_00 == (HWND__ *)0x0) {
      return (CWnd *)0x0;
    }
    pCVar2 = GetDescendantWindow(hWnd_00,param_2,param_3);
    if (pCVar2 != (CWnd *)0x0) break;
    hWnd_00 = GetWindow(hWnd_00,2);
  }
  return pCVar2;
}



/**************************************************/

/* Function: SendChildNotifyLastMsg @ 10009572 */

/* Library Function - Single Match
    public: int __thiscall CWnd::SendChildNotifyLastMsg(long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::SendChildNotifyLastMsg(CWnd *this,long *param_1)

{
  CNoTrackObject *pCVar1;
  int iVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  iVar2 = (**(code **)(*(int *)this + 0x118))
                    (*(undefined4 *)(pCVar1 + 0x5c),*(undefined4 *)(pCVar1 + 0x60),
                     *(undefined4 *)(pCVar1 + 100),param_1);
  return iVar2;
}



/**************************************************/

/* Function: FUN_100095a8 @ 100095a8 */

void __fastcall FUN_100095a8(CWnd *param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x90))(), iVar1 != 0)) {
    return;
  }
  CWnd::Default(param_1);
  return;
}



/**************************************************/

/* Function: OnHelpInfo @ 100095cb */

/* Library Function - Single Match
    protected: int __thiscall CWnd::OnHelpInfo(struct tagHELPINFO *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CWnd::OnHelpInfo(CWnd *this,tagHELPINFO *param_1)

{
  SHORT SVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  uVar2 = GetExStyle(this);
  if (((((uVar2 & 0x40000000) == 0) && (iVar3 = FUN_10004e4c(), iVar3 != 0)) &&
      (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
     ((SVar1 = GetKeyState(0x11), -1 < SVar1 && (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    SendMessageA(*(HWND *)(iVar3 + 0x20),0x111,0xe146,0);
    return 1;
  }
  lVar4 = Default(this);
  return (uint)(lVar4 != 0);
}



/**************************************************/

/* Function: OnGetObject @ 10009635 */

/* Library Function - Single Match
    protected: long __thiscall CWnd::OnGetObject(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::OnGetObject(CWnd *this,uint param_1,long param_2)

{
  long lVar1;
  int iVar2;
  CWnd *local_8;
  
  local_8 = this;
  if (this[0x24] != (CWnd)0x0) {
    local_8 = (CWnd *)0x0;
    iVar2 = (**(code **)(*(int *)this + 0xe4))(param_1,param_2,&local_8);
    if (-1 < iVar2) {
      return (long)local_8;
    }
  }
  lVar1 = Default(this);
  return lVar1;
}



/**************************************************/

/* Function: FUN_10009671 @ 10009671 */

void __thiscall FUN_10009671(void *this,undefined4 param_1,undefined4 param_2,CWnd *param_3)

{
  int iVar1;
  
  if ((param_3 != (CWnd *)0x0) &&
     (iVar1 = CWnd::SendChildNotifyLastMsg(param_3,(long *)0x0), iVar1 != 0)) {
    return;
  }
  CWnd::Default(this);
  return;
}



/**************************************************/

/* Function: OnEnterIdle @ 10009692 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnEnterIdle(unsigned int,class CWnd *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CWnd::OnEnterIdle(CWnd *this,uint param_1,CWnd *param_2)

{
  BOOL BVar1;
  MSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x121,0x121,1);
    if (BVar1 == 0) break;
    DispatchMessageA(&local_20);
  }
  Default(this);
  return;
}



/**************************************************/

/* Function: OnCtlColor @ 100096d2 */

/* Library Function - Single Match
    protected: struct HBRUSH__ * __thiscall CWnd::OnCtlColor(class CDC *,class CWnd *,unsigned int)
   
   Library: Visual Studio 2005 Release */

HBRUSH__ * __thiscall CWnd::OnCtlColor(CWnd *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = SendChildNotifyLastMsg(param_2,(long *)&param_2);
  if (iVar1 == 0) {
    param_2 = (CWnd *)Default(this);
  }
  return (HBRUSH__ *)param_2;
}



/**************************************************/

/* Function: _AfxInitCommonControls @ 100096f9 */

/* Library Function - Single Match
    long __stdcall _AfxInitCommonControls(struct tagINITCOMMONCONTROLSEX *,long)
   
   Library: Visual Studio 2005 Release */

long _AfxInitCommonControls(tagINITCOMMONCONTROLSEX *param_1,long param_2)

{
  AFX_MODULE_STATE *pAVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  pAVar1 = AfxGetModuleState();
  piVar2 = (int *)CComCtlWrapper::GetProcAddress_InitCommonControlsEx
                            ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78));
  if (*piVar2 == 0) {
    if ((param_2 & 0x3fc0U) == param_2) {
      pAVar1 = AfxGetModuleState();
      CComCtlWrapper::_InitCommonControls((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78));
      lVar4 = 0x3fc0;
    }
  }
  else {
    iVar3 = AfxInitCommonControlsEx(param_1);
    if (iVar3 != 0) {
      lVar4 = param_2;
    }
  }
  return lVar4;
}



/**************************************************/

/* Function: _AfxPostInitDialog @ 10009765 */

/* Library Function - Single Match
    void __stdcall _AfxPostInitDialog(class CWnd *,struct tagRECT const &,unsigned long)
   
   Library: Visual Studio 2005 Release */

void _AfxPostInitDialog(CWnd *param_1,tagRECT *param_2,ulong param_3)

{
  ulong uVar1;
  HWND pHVar2;
  CWnd *this;
  int iVar3;
  tagRECT local_14;
  
  if (((((param_3 & 0x10000000) == 0) &&
       (uVar1 = CWnd::GetExStyle(param_1), (uVar1 & 0x50000000) == 0)) &&
      (GetWindowRect(*(HWND *)(param_1 + 0x20),&local_14), param_2->left == local_14.left)) &&
     (param_2->top == local_14.top)) {
    pHVar2 = GetWindow(*(HWND *)(param_1 + 0x20),4);
    this = CWnd::FromHandle(pHVar2);
    if (((this == (CWnd *)0x0) || (iVar3 = CWnd::IsWindowEnabled(this), iVar3 == 0)) &&
       (iVar3 = (**(code **)(*(int *)param_1 + 0x11c))(), iVar3 != 0)) {
      CWnd::CenterWindow(param_1,(CWnd *)0x0);
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_100097e1 @ 100097e1 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_100097e1(CWnd *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  CWnd *pCVar1;
  CNoTrackObject *pCVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  CNoTrackObject *pCVar6;
  undefined4 *puVar7;
  undefined4 local_48 [7];
  tagRECT local_2c;
  CNoTrackObject *local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x100097ed;
  pCVar2 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  iVar5 = param_3;
  pCVar1 = param_1;
  local_1c = pCVar2;
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  pCVar6 = pCVar2 + 0x58;
  puVar7 = local_48;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(pCVar2 + 0x58) = param_2;
  *(undefined4 *)(pCVar2 + 0x60) = param_4;
  *(int *)(pCVar2 + 0x5c) = param_3;
  *(undefined4 *)(pCVar2 + 100) = param_5;
  local_8 = 0;
  if ((param_3 == 2) && (*(int *)(param_1 + 0x4c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x60))(0);
  }
  param_1 = (CWnd *)0x0;
  if (iVar5 == 0x110) {
    FUN_10008127(pCVar1,&local_2c,(ulong *)&param_1);
  }
  param_5 = (**(code **)(*(int *)pCVar1 + 0x108))(iVar5,param_4,param_5);
  if (iVar5 == 0x110) {
    _AfxPostInitDialog(pCVar1,&local_2c,(ulong)param_1);
    uVar3 = FUN_100098be();
    return uVar3;
  }
  puVar7 = local_48;
  pCVar2 = pCVar2 + 0x58;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    pCVar2 = pCVar2 + 4;
  }
  return param_5;
}



/**************************************************/

/* Function: Catch@10009895 @ 10009895 */

undefined * Catch_10009895(void)

{
  long lVar1;
  int unaff_EBP;
  
  lVar1 = AfxProcessWndProcException
                    (*(CException **)(unaff_EBP + -0x14),
                     (tagMSG *)(*(int *)(unaff_EBP + -0x18) + 0x58));
  *(long *)(unaff_EBP + 0x18) = lVar1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_1000353d(*(int **)(unaff_EBP + -0x14));
  }
  return &DAT_100098bb;
}



/**************************************************/

/* Function: FUN_100098be @ 100098be */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_100098be(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(undefined4 *)(unaff_EBP + 0x18);
  puVar3 = (undefined4 *)(unaff_EBP + -0x44);
  puVar4 = (undefined4 *)(unaff_EBX + 0x58);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return uVar1;
}



/**************************************************/

/* Function: AfxWndProc @ 100098d4 */

/* Library Function - Single Match
    long __stdcall AfxWndProc(struct HWND__ *,unsigned int,unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  CWnd *pCVar2;
  
  if (param_2 == 0x360) {
    lVar1 = 1;
  }
  else {
    pCVar2 = CWnd::FromHandlePermanent(param_1);
    if ((pCVar2 == (CWnd *)0x0) || (*(HWND__ **)(pCVar2 + 0x20) != param_1)) {
      lVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
    }
    else {
      lVar1 = FUN_100097e1(pCVar2,param_1,param_2,param_3,param_4);
    }
  }
  return lVar1;
}



/**************************************************/

/* Function: ~CWnd @ 1000991f */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CWnd::~CWnd(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::~CWnd(CWnd *this)

{
  int iVar1;
  
  *(undefined ***)this = vftable;
  if ((((*(int *)(this + 0x20) != 0) && (this != (CWnd *)&DAT_10029890)) &&
      (this != (CWnd *)&DAT_100298e8)) &&
     ((this != (CWnd *)&DAT_10029940 && (this != (CWnd *)&DAT_10029998)))) {
    DestroyWindow(this);
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))(1);
  }
  iVar1 = *(int *)(this + 0x50);
  if ((iVar1 != 0) && (*(CWnd **)(iVar1 + 0x28) == this)) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  CCmdTarget::~CCmdTarget((CCmdTarget *)this);
  return;
}



/**************************************************/

/* Function: FID_conflict:OnCharToItem @ 10009994 */

/* Library Function - Multiple Matches With Different Base Names
    protected: int __thiscall CWnd::OnCharToItem(unsigned int,class CListBox *,unsigned int)
    protected: int __thiscall CWnd::OnVKeyToItem(unsigned int,class CListBox *,unsigned int)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall FID_conflict_OnCharToItem(void *this,undefined4 param_1,CWnd *param_2)

{
  int iVar1;
  
  if ((param_2 == (CWnd *)0x0) ||
     (iVar1 = CWnd::SendChildNotifyLastMsg(param_2,(long *)&param_2), iVar1 == 0)) {
    param_2 = (CWnd *)CWnd::Default(this);
  }
  return param_2;
}



/**************************************************/

/* Function: FUN_100099bf @ 100099bf */

void __thiscall FUN_100099bf(void *this,undefined4 param_1,int *param_2)

{
  CNoTrackObject *pCVar1;
  HMENU__ *pHVar2;
  CMenu *pCVar3;
  CWnd *this_00;
  int iVar4;
  
  if (*param_2 != 1) {
    this_00 = CWnd::GetDescendantWindow(*(HWND__ **)((int)this + 0x20),param_2[1],1);
    if ((this_00 != (CWnd *)0x0) &&
       (iVar4 = CWnd::SendChildNotifyLastMsg(this_00,(long *)0x0), iVar4 != 0)) {
      return;
    }
LAB_10009a38:
    CWnd::Default(this);
    return;
  }
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 != (CNoTrackObject *)0x0) {
    if (*(HWND *)(pCVar1 + 0x74) == *(HWND *)((int)this + 0x20)) {
      pHVar2 = *(HMENU__ **)(pCVar1 + 0x78);
    }
    else {
      pHVar2 = GetMenu(*(HWND *)((int)this + 0x20));
    }
    pCVar3 = CMenu::FromHandle(pHVar2);
    if (pCVar3 != (CMenu *)0x0) {
      pCVar3 = _AfxFindPopupMenuFromID(pCVar3,param_2[2]);
      if (pCVar3 != (CMenu *)0x0) {
        (**(code **)(*(int *)pCVar3 + 0x10))(param_2);
      }
      goto LAB_10009a38;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003617();
}



/**************************************************/

/* Function: SendMessageToDescendants @ 10009a44 */

/* Library Function - Single Match
    public: static void __stdcall CWnd::SendMessageToDescendants(struct HWND__ *,unsigned
   int,unsigned int,long,int,int)
   
   Library: Visual Studio 2005 Release */

void CWnd::SendMessageToDescendants
               (HWND__ *param_1,uint param_2,uint param_3,long param_4,int param_5,int param_6)

{
  HWND__ *hWnd;
  CWnd *pCVar1;
  HWND pHVar2;
  
  for (hWnd = GetTopWindow(param_1); hWnd != (HWND__ *)0x0; hWnd = GetWindow(hWnd,2)) {
    if (param_6 == 0) {
      SendMessageA(hWnd,param_2,param_3,param_4);
    }
    else {
      pCVar1 = FromHandlePermanent(hWnd);
      if (pCVar1 != (CWnd *)0x0) {
        FUN_100097e1(pCVar1,*(undefined4 *)(pCVar1 + 0x20),param_2,param_3,param_4);
      }
    }
    if (param_5 != 0) {
      pHVar2 = GetTopWindow(hWnd);
      if (pHVar2 != (HWND)0x0) {
        SendMessageToDescendants(hWnd,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



/**************************************************/

/* Function: ReflectLastMsg @ 10009ac1 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: static int __stdcall CWnd::ReflectLastMsg(struct HWND__ *,long *)
   
   Library: Visual Studio 2005 Release */

int CWnd::ReflectLastMsg(HWND__ *param_1,long *param_2)

{
  CHandleMap *pCVar1;
  CWnd *this;
  HWND pHVar2;
  void *pvVar3;
  int iVar4;
  CWnd local_64 [32];
  undefined4 local_44;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x10009acd;
  pCVar1 = afxMapHWND(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    this = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    if (this != (CWnd *)0x0) {
      iVar4 = SendChildNotifyLastMsg(this,param_2);
      return iVar4;
    }
    pHVar2 = GetParent(param_1);
    pvVar3 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),pHVar2);
    if (((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x4c) != 0)) &&
       (local_14 = CMapPtrToPtr::GetValueAt
                             ((CMapPtrToPtr *)(*(int *)((int)pvVar3 + 0x4c) + 0x24),param_1),
       local_14 != (void *)0x0)) {
      CWnd(local_64,param_1);
      local_8 = 0;
      iVar4 = SendChildNotifyLastMsg(local_64,param_2);
      local_44 = 0;
      local_8 = 0xffffffff;
      ~CWnd(local_64);
      return (uint)(iVar4 != 0);
    }
  }
  return 0;
}



/**************************************************/

/* Function: OnDragList @ 10009b8e */

/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDragList(unsigned int,long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

long __thiscall CWnd::OnDragList(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
  iVar1 = ReflectLastMsg(*(HWND__ **)(param_2 + 4),&param_2);
  if (iVar1 == 0) {
    param_2 = Default(this);
  }
  return param_2;
}



/**************************************************/

/* Function: get_accParent @ 10009bb8 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accParent(struct IDispatch * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accParent(IDispatch **param_1)

{
  long lVar1;
  void **unaff_retaddr;
  IID *in_stack_00000008;
  
  if (param_1[2] == (IDispatch *)0x0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == (IID *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (*param_1[2]->lpVtbl[1].QueryInterface)(param_1[2],in_stack_00000008,unaff_retaddr);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accChildCount @ 10009be7 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accChildCount(long *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accChildCount(long *param_1)

{
  long lVar1;
  int in_stack_00000008;
  
  if (param_1[2] == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(*(int *)param_1[2] + 0x20))((int *)param_1[2]);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accChild @ 10009c16 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accChild(struct tagVARIANT,struct IDispatch * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accChild
               (tagVARIANT param_1,IDispatch **param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x24))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accName @ 10009c56 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accName(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accName
               (tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x28))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accValue @ 10009c96 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accValue(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accValue
               (tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x2c))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accDescription @ 10009cd6 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accDescription(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accDescription
               (tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x30))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accRole @ 10009d16 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accRole(struct tagVARIANT,struct tagVARIANT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accRole
               (tagVARIANT param_1,tagVARIANT *param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x34))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accState @ 10009d56 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accState(struct tagVARIANT,struct tagVARIANT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accState
               (tagVARIANT param_1,tagVARIANT *param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x38))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accHelp @ 10009d96 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accHelp(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accHelp
               (tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x3c))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accHelpTopic @ 10009dd6 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accHelpTopic(wchar_t * *,struct tagVARIANT,long *)
   
   Library: Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accHelpTopic
               (wchar_t **param_1,tagVARIANT param_2,long *param_3)

{
  long lVar1;
  int in_stack_00000008;
  
  if (param_1[2] == (wchar_t *)0x0) {
    lVar1 = -0x7ffefef8;
  }
  else if ((in_stack_00000008 == 0) || (param_3 == (long *)0x0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(*(int *)param_1[2] + 0x40))(param_1[2]);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accKeyboardShortcut @ 10009e1e */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accKeyboardShortcut(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accKeyboardShortcut
               (tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x44))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: get_accFocus @ 10009e5e */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accFocus(struct tagVARIANT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accFocus(tagVARIANT *param_1)

{
  int *piVar1;
  long lVar2;
  int in_stack_00000008;
  
  if (*(int *)((int)&param_1->n1 + 8) == 0) {
    lVar2 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == 0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    piVar1 = *(int **)((int)&param_1->n1 + 8);
    lVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
  }
  return lVar2;
}



/**************************************************/

/* Function: get_accSelection @ 10009e8d */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accSelection(struct tagVARIANT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accSelection(tagVARIANT *param_1)

{
  int *piVar1;
  long lVar2;
  int in_stack_00000008;
  
  if (*(int *)((int)&param_1->n1 + 8) == 0) {
    lVar2 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == 0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    piVar1 = *(int **)((int)&param_1->n1 + 8);
    lVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1);
  }
  return lVar2;
}



/**************************************************/

/* Function: get_accDefaultAction @ 10009ebc */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accDefaultAction(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::get_accDefaultAction
               (tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  int in_stack_00000018;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000018 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 0x50))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_,param_2);
  }
  return lVar1;
}



/**************************************************/

/* Function: accSelect @ 10009efc */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::accSelect(long,struct tagVARIANT)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::accSelect
               (long param_1,tagVARIANT param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x54))(*(int **)(param_1 + 8));
  }
  return lVar1;
}



/**************************************************/

/* Function: accLocation @ 10009f2e */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::accLocation(long *,long *,long *,long *,struct tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::accLocation
               (long *param_1,long *param_2,long *param_3,long *param_4,tagVARIANT param_5)

{
  long lVar1;
  
  if (param_1[2] == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if ((((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) || (param_4 == (long *)0x0)) ||
          (param_5.n1._0_4_ == 0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(*(int *)param_1[2] + 0x58))
                      ((int *)param_1[2],param_2,param_3,param_4,param_5.n1._0_4_,
                       param_5.n1.decVal.Hi32,param_5.n1._8_4_,param_5.n1._12_4_);
  }
  return lVar1;
}



/**************************************************/

/* Function: accNavigate @ 10009f86 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::accNavigate(long,struct tagVARIANT,struct tagVARIANT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::accNavigate
               (long param_1,tagVARIANT param_2,tagVARIANT *param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (param_3 == (tagVARIANT *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x5c))(*(int **)(param_1 + 8));
  }
  return lVar1;
}



/**************************************************/

/* Function: accHitTest @ 10009fc9 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::accHitTest(long,long,struct tagVARIANT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::accHitTest
               (long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  int in_stack_00000010;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000010 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x60))(*(int **)(param_1 + 8),param_2,param_3);
  }
  return lVar1;
}



/**************************************************/

/* Function: accDoDefaultAction @ 10009fff */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::accDoDefaultAction(struct tagVARIANT)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::accDoDefaultAction(tagVARIANT param_1)

{
  long lVar1;
  
  if (*(int *)(param_1.n1._0_4_ + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1.n1._0_4_ + 8) + 100))
                      (*(int **)(param_1.n1._0_4_ + 8),param_1.n1.decVal.Hi32,param_1.n1._8_4_,
                       param_1.n1._12_4_);
  }
  return lVar1;
}



/**************************************************/

/* Function: FUN_1000a02d @ 1000a02d */

int FUN_1000a02d(int param_1)

{
  return (-(uint)(*(int *)(param_1 + 8) != 0) & 0xffff3ef9) + 0x80010108;
}



/**************************************************/

/* Function: FUN_1000a045 @ 1000a045 */

undefined4 FUN_1000a045(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return 0;
}



/**************************************************/

/* Function: Invoke @ 1000a05c */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::Invoke(long,struct _GUID const &,unsigned long,unsigned short,struct
   tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO *,unsigned int *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::Invoke
               (long param_1,_GUID *param_2,ulong param_3,ushort param_4,tagDISPPARAMS *param_5,
               tagVARIANT *param_6,tagEXCEPINFO *param_7,uint *param_8)

{
  long lVar1;
  undefined2 in_stack_00000012;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                      (*(int **)(param_1 + 8),param_2,param_3,_param_4,param_5,param_6,param_7,
                       param_8);
  }
  return lVar1;
}



/**************************************************/

/* Function: GetIDsOfNames @ 1000a094 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::GetIDsOfNames(struct _GUID const &,wchar_t * *,unsigned int,unsigned
   long,long *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::GetIDsOfNames
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  long lVar1;
  
  if (*(int *)param_1->Data4 == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(**(int **)param_1->Data4 + 0x14))
                      (*(int **)param_1->Data4,param_2,param_3,param_4,param_5);
  }
  return lVar1;
}



/**************************************************/

/* Function: GetTypeInfoCount @ 1000a0c3 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::GetTypeInfoCount(unsigned int *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::GetTypeInfoCount(uint *param_1)

{
  long lVar1;
  
  if (param_1[2] == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2]);
  }
  return lVar1;
}



/**************************************************/

/* Function: GetTypeInfo @ 1000a0e4 */

/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::GetTypeInfo(unsigned int,unsigned long,struct ITypeInfo * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<class_ATL::CAccessibleProxy>::GetTypeInfo
               (uint param_1,ulong param_2,ITypeInfo **param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3);
  }
  return lVar1;
}



/**************************************************/

/* Function: GetOwner @ 1000a10d */

/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetOwner(void)const 
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::GetOwner(CWnd *this)

{
  HWND__ *pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = *(HWND__ **)(this + 0x38);
  if (pHVar1 == (HWND__ *)0x0) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
  }
  pCVar2 = FromHandle(pHVar1);
  return pCVar2;
}



/**************************************************/

/* Function: FID_conflict:`scalar_deleting_destructor' @ 1000a124 */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CReflectorWnd::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CSocketWnd::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CWnd::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,byte param_1)

{
  CWnd::~CWnd(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000a140 @ 1000a140 */

void __thiscall FUN_1000a140(void *this,undefined4 param_1,int *param_2)

{
  CMenu *pCVar1;
  int iVar2;
  
  if ((*param_2 == 1) &&
     (pCVar1 = CMenu::FromHandlePermanent((HMENU__ *)param_2[5]), pCVar1 != (CMenu *)0x0)) {
    (**(code **)(*(int *)pCVar1 + 0xc))(param_2);
    return;
  }
  iVar2 = CWnd::ReflectLastMsg((HWND__ *)param_2[5],(long *)0x0);
  if (iVar2 == 0) {
    CWnd::Default(this);
  }
  return;
}



/**************************************************/

/* Function: OnCompareItem @ 1000a17d */

/* Library Function - Single Match
    protected: int __thiscall CWnd::OnCompareItem(int,struct tagCOMPAREITEMSTRUCT *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CWnd::OnCompareItem(CWnd *this,int param_1,tagCOMPAREITEMSTRUCT *param_2)

{
  int iVar1;
  
  iVar1 = ReflectLastMsg(*(HWND__ **)(param_2 + 8),(long *)&param_2);
  if (iVar1 == 0) {
    param_2 = (tagCOMPAREITEMSTRUCT *)Default(this);
  }
  return (int)param_2;
}



/**************************************************/

/* Function: AfxHtmlHelp @ 1000a1c7 */

/* Library Function - Multiple Matches With Same Base Name
    struct HWND__ * __stdcall AfxHtmlHelp(struct HWND__ *,char const *,unsigned int,unsigned long)
    struct HWND__ * __stdcall AfxHtmlHelp(struct HWND__ *,wchar_t const *,unsigned int,unsigned
   long)
   
   Library: Visual Studio 2005 Release */

undefined4 AfxHtmlHelp(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CNoTrackObject *pCVar1;
  HINSTANCE__ *hModule;
  undefined4 uVar2;
  FARPROC pFVar3;
  
  AfxLockGlobals(0xc);
  pCVar1 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_100299f0,(_func_CNoTrackObject_ptr *)&LAB_10009750
                     );
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if (*(int *)(pCVar1 + 8) == 0) {
    hModule = AfxCtxLoadLibraryA("hhctrl.ocx");
    *(HINSTANCE__ **)(pCVar1 + 4) = hModule;
    if (hModule != (HINSTANCE__ *)0x0) {
      pFVar3 = GetProcAddress(hModule,"HtmlHelpA");
      *(FARPROC *)(pCVar1 + 8) = pFVar3;
      if (pFVar3 != (FARPROC)0x0) goto LAB_1000a227;
      FreeLibrary(*(HMODULE *)(pCVar1 + 4));
      *(undefined4 *)(pCVar1 + 4) = 0;
    }
    uVar2 = 0;
  }
  else {
LAB_1000a227:
    AfxUnlockGlobals(0xc);
    uVar2 = (**(code **)(pCVar1 + 8))(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



/**************************************************/

/* Function: OnCommand @ 1000a245 */

/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  CNoTrackObject *pCVar1;
  int iVar2;
  uint uVar3;
  CTestCmdUI local_30 [4];
  uint local_2c;
  int local_8;
  
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == 0) {
    if (uVar3 == 0) {
      return 0;
    }
    CTestCmdUI::CTestCmdUI(local_30);
    local_2c = uVar3;
    (**(code **)(*(int *)this + 0xc))(uVar3,0xffffffff,local_30,0);
    if (local_8 != 0) {
      param_1 = 0;
LAB_1000a2c8:
      iVar2 = (**(code **)(*(int *)this + 0xc))(uVar3,param_1,0,0);
      return iVar2;
    }
  }
  else {
    pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
    if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
    if ((*(int *)(pCVar1 + 0xdc) != *(int *)(this + 0x20)) &&
       (iVar2 = ReflectLastMsg((HWND__ *)param_2,(long *)0x0), iVar2 == 0)) {
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_1000a2c8;
    }
  }
  return 1;
}



/**************************************************/

/* Function: OnNotify @ 1000a2dc */

/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnNotify(unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  HWND hWnd;
  uint uVar1;
  CNoTrackObject *pCVar2;
  int iVar3;
  long *local_10;
  long local_c;
  uint local_8;
  
  hWnd = *(HWND *)param_2;
  local_8 = GetDlgCtrlID(hWnd);
  local_8 = local_8 & 0xffff;
  uVar1 = *(uint *)(param_2 + 8);
  pCVar2 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if ((*(int *)(pCVar2 + 0xdc) != *(int *)(this + 0x20)) &&
     (iVar3 = ReflectLastMsg(hWnd,param_3), iVar3 == 0)) {
    local_10 = param_3;
    local_c = param_2;
    iVar3 = (**(code **)(*(int *)this + 0xc))(local_8,uVar1 & 0xffff | 0x4e0000,&local_10,0);
    return iVar3;
  }
  return 1;
}



/**************************************************/

/* Function: AfxGetParentOwner @ 1000a35f */

/* Library Function - Single Match
    struct HWND__ * __stdcall AfxGetParentOwner(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

HWND__ * AfxGetParentOwner(HWND__ *param_1)

{
  CWnd *pCVar1;
  uint uVar2;
  HWND__ *pHVar3;
  
  pCVar1 = CWnd::FromHandlePermanent(param_1);
  if (pCVar1 == (CWnd *)0x0) {
    uVar2 = GetWindowLongA(param_1,-0x10);
    if ((uVar2 & 0x40000000) == 0) {
      pHVar3 = GetWindow(param_1,4);
    }
    else {
      pHVar3 = GetParent(param_1);
    }
  }
  else {
    pCVar1 = CWnd::GetOwner(pCVar1);
    pHVar3 = (HWND__ *)0x0;
    if (pCVar1 != (CWnd *)0x0) {
      pHVar3 = *(HWND__ **)(pCVar1 + 0x20);
    }
  }
  return pHVar3;
}



/**************************************************/

/* Function: GetTopLevelParent @ 1000a3a4 */

/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetTopLevelParent(void)const 
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall CWnd::GetTopLevelParent(CWnd *this)

{
  HWND__ *pHVar1;
  CWnd *pCVar2;
  HWND__ *pHVar3;
  
  if ((this != (CWnd *)0x0) &&
     (pHVar1 = *(HWND__ **)(this + 0x20), *(HWND__ **)(this + 0x20) != (HWND__ *)0x0)) {
    do {
      pHVar3 = pHVar1;
      pHVar1 = AfxGetParentOwner(pHVar3);
    } while (pHVar1 != (HWND__ *)0x0);
    pCVar2 = FromHandle(pHVar3);
    return pCVar2;
  }
  return (CWnd *)0x0;
}



/**************************************************/

/* Function: OnSysColorChange @ 1000a3cc */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnSysColorChange(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CWnd::OnSysColorChange(CWnd *this)

{
  AFX_MODULE_STATE *pAVar1;
  ulong uVar2;
  
  pAVar1 = AfxGetModuleState();
  if ((*(int *)(pAVar1 + 4) != 0) && (*(CWnd **)(*(int *)(pAVar1 + 4) + 0x20) == this)) {
    AUX_DATA::UpdateSysColors((AUX_DATA *)&DAT_10028000);
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x15,0,0,1,1);
  }
  Default(this);
  return;
}



/**************************************************/

/* Function: OnDevModeChange @ 1000a412 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnDevModeChange(char *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::OnDevModeChange(CWnd *this,char *param_1)

{
  CWinApp *this_00;
  AFX_MODULE_STATE *pAVar1;
  ulong uVar2;
  tagMSG *ptVar3;
  
  pAVar1 = AfxGetModuleState();
  this_00 = *(CWinApp **)(pAVar1 + 4);
  if ((this_00 != (CWinApp *)0x0) && (*(CWnd **)(this_00 + 0x20) == this)) {
    CWinApp::DevModeChange(this_00,param_1);
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    ptVar3 = GetCurrentMessage();
    SendMessageToDescendants
              (*(HWND__ **)(this + 0x20),ptVar3->message,ptVar3->wParam,ptVar3->lParam,1,1);
  }
  return;
}



/**************************************************/

/* Function: OnDisplayChange @ 1000a45d */

/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDisplayChange(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::OnDisplayChange(CWnd *this,uint param_1,long param_2)

{
  CWnd *pCVar1;
  ulong uVar2;
  tagMSG *ptVar3;
  long lVar4;
  
  pCVar1 = (CWnd *)FUN_10004e4c();
  if (pCVar1 == this) {
    AUX_DATA::UpdateSysMetrics((AUX_DATA *)&DAT_10028000);
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    ptVar3 = GetCurrentMessage();
    SendMessageToDescendants
              (*(HWND__ **)(this + 0x20),ptVar3->message,ptVar3->wParam,ptVar3->lParam,1,1);
  }
  lVar4 = Default(this);
  return lVar4;
}



/**************************************************/

/* Function: CMFCComObject<class_ATL::CAccessibleProxy> @ 1000a4a6 */

/* Library Function - Single Match
    public: __thiscall CMFCComObject<class ATL::CAccessibleProxy>::CMFCComObject<class
   ATL::CAccessibleProxy>(void *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

CMFCComObject<class_ATL::CAccessibleProxy> * __thiscall
CMFCComObject<class_ATL::CAccessibleProxy>::CMFCComObject<class_ATL::CAccessibleProxy>
          (CMFCComObject<class_ATL::CAccessibleProxy> *this,void *param_1)

{
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 4) = vftable;
  *(undefined ***)(this + 0x10) = vftable;
  AfxOleLockApp();
  return this;
}



/**************************************************/

/* Function: _InlineIsEqualGUID @ 1000a4d3 */

/* Library Function - Single Match
    _InlineIsEqualGUID
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl _InlineIsEqualGUID(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000a500 @ 1000a500 */

undefined4 FUN_1000a500(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_1000a505 @ 1000a505 */

undefined4 FUN_1000a505(void)

{
  return 0x80004001;
}



/**************************************************/

/* Function: FinalRelease @ 1000a50d */

/* Library Function - Single Match
    public: long __thiscall ATL::CAccessibleProxy::FinalRelease(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long __thiscall ATL::CAccessibleProxy::FinalRelease(CAccessibleProxy *this)

{
  long lVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    return 0;
  }
  lVar1 = (**(code **)(**(int **)(this + 0xc) + 0xc))(*(int **)(this + 0xc),0);
  return lVar1;
}



/**************************************************/

/* Function: InlineIsEqualUnknown @ 1000a522 */

/* Library Function - Single Match
    int __stdcall ATL::InlineIsEqualUnknown(struct _GUID const &)
   
   Library: Visual Studio 2005 Release */

int ATL::InlineIsEqualUnknown(_GUID *param_1)

{
  int iVar1;
  
  if ((((param_1->Data1 == 0) &&
       (iVar1._0_2_ = param_1->Data2, iVar1._2_2_ = param_1->Data3, iVar1 == 0)) &&
      (*(int *)param_1->Data4 == 0xc0)) && (*(int *)(param_1->Data4 + 4) == 0x46000000)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/**************************************************/

/* Function: AtlInternalQueryInterface @ 1000a54d */

/* Library Function - Single Match
    long __stdcall ATL::AtlInternalQueryInterface(void *,struct ATL::_ATL_INTMAP_ENTRY const
   *,struct _GUID const &,void * *)
   
   Library: Visual Studio 2005 Release */

long ATL::AtlInternalQueryInterface
               (void *param_1,_ATL_INTMAP_ENTRY *param_2,_GUID *param_3,void **param_4)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 == (void *)0x0) || (param_2 == (_ATL_INTMAP_ENTRY *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else if (param_4 == (void **)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    *param_4 = (void *)0x0;
    iVar3 = InlineIsEqualUnknown(param_3);
    if (iVar3 == 0) {
      for (; pcVar1 = *(code **)(param_2 + 8), pcVar1 != (code *)0x0; param_2 = param_2 + 0xc) {
        piVar4 = *(int **)param_2;
        if ((piVar4 == (int *)0x0) ||
           (iVar3 = _InlineIsEqualGUID(piVar4,(int *)param_3), iVar3 != 0)) {
          if (pcVar1 == (code *)0x1) goto LAB_1000a581;
          iVar3 = (*pcVar1)(param_1,param_3,param_4,*(undefined4 *)(param_2 + 4));
          if (iVar3 == 0) {
            return 0;
          }
          if ((piVar4 != (int *)0x0) && (iVar3 < 0)) {
            return iVar3;
          }
        }
      }
      lVar2 = -0x7fffbffe;
    }
    else {
LAB_1000a581:
      piVar4 = (int *)(*(int *)(param_2 + 4) + (int)param_1);
      (**(code **)(*piVar4 + 4))(piVar4);
      *param_4 = piVar4;
      lVar2 = 0;
    }
  }
  return lVar2;
}



/**************************************************/

/* Function: ~CMFCComObject<class_ATL::CAccessibleProxy> @ 1000a5ee */

/* Library Function - Single Match
    public: virtual __thiscall CMFCComObject<class ATL::CAccessibleProxy>::~CMFCComObject<class
   ATL::CAccessibleProxy>(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall
CMFCComObject<class_ATL::CAccessibleProxy>::~CMFCComObject<class_ATL::CAccessibleProxy>
          (CMFCComObject<class_ATL::CAccessibleProxy> *this)

{
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 4) = vftable;
  *(undefined ***)(this + 0x10) = vftable;
  *(undefined4 *)(this + 0x14) = 0xc0000001;
  ATL::CAccessibleProxy::FinalRelease((CAccessibleProxy *)this);
  AfxOleUnlockApp();
  return;
}



/**************************************************/

/* Function: FUN_1000a613 @ 1000a613 */

undefined4 FUN_1000a613(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return *(undefined4 *)(param_1 + 0x14);
}



/**************************************************/

/* Function: Release @ 1000a620 */

/* Library Function - Single Match
    public: virtual unsigned long __stdcall CMFCComObject<class
   ATL::CAccessibleProxy>::Release(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

ulong CMFCComObject<class_ATL::CAccessibleProxy>::Release(void)

{
  int *piVar1;
  ulong uVar2;
  int *in_stack_00000004;
  
  piVar1 = in_stack_00000004 + 5;
  *piVar1 = *piVar1 + -1;
  uVar2 = in_stack_00000004[5];
  if ((*piVar1 == 0) && (in_stack_00000004 != (int *)0x0)) {
    (**(code **)(*in_stack_00000004 + 0x70))(1);
  }
  return uVar2;
}



/**************************************************/

/* Function: QueryInterface @ 1000a63e */

/* Library Function - Single Match
    public: virtual long __stdcall CMFCComObject<class ATL::CAccessibleProxy>::QueryInterface(struct
   _GUID const &,void * *)
   
   Library: Visual Studio 2005 Release */

long CMFCComObject<class_ATL::CAccessibleProxy>::QueryInterface(_GUID *param_1,void **param_2)

{
  long lVar1;
  void **in_stack_0000000c;
  
  lVar1 = ATL::AtlInternalQueryInterface
                    (param_1,(_ATL_INTMAP_ENTRY *)&PTR_DAT_1001ef88,(_GUID *)param_2,
                     in_stack_0000000c);
  return lVar1;
}



/**************************************************/

/* Function: `scalar_deleting_destructor' @ 1000a657 */

/* Library Function - Single Match
    public: virtual void * __thiscall CMFCComObject<class ATL::CAccessibleProxy>::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void * __thiscall
CMFCComObject<class_ATL::CAccessibleProxy>::_scalar_deleting_destructor_
          (CMFCComObject<class_ATL::CAccessibleProxy> *this,uint param_1)

{
  ~CMFCComObject<class_ATL::CAccessibleProxy>(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000a673 @ 1000a673 */

void FUN_1000a673(void)

{
  CMFCComObject<class_ATL::CAccessibleProxy>::Release();
  return;
}



/**************************************************/

/* Function: FUN_1000a67d @ 1000a67d */

void FUN_1000a67d(int param_1)

{
  FUN_1000a613(param_1 + -0x10);
  return;
}



/**************************************************/

/* Function: FUN_1000a687 @ 1000a687 */

void FUN_1000a687(int param_1,void **param_2)

{
  CMFCComObject<class_ATL::CAccessibleProxy>::QueryInterface((_GUID *)(param_1 + -4),param_2);
  return;
}



/**************************************************/

/* Function: FUN_1000a691 @ 1000a691 */

void FUN_1000a691(void)

{
  CMFCComObject<class_ATL::CAccessibleProxy>::Release();
  return;
}



/**************************************************/

/* Function: FUN_1000a69b @ 1000a69b */

void FUN_1000a69b(int param_1)

{
  FUN_1000a613(param_1 + -4);
  return;
}



/**************************************************/

/* Function: FUN_1000a6a5 @ 1000a6a5 */

void FUN_1000a6a5(int param_1,void **param_2)

{
  CMFCComObject<class_ATL::CAccessibleProxy>::QueryInterface((_GUID *)(param_1 + -0x10),param_2);
  return;
}



/**************************************************/

/* Function: _AfxHandleActivate @ 1000a6af */

/* Library Function - Single Match
    void __stdcall _AfxHandleActivate(class CWnd *,unsigned int,class CWnd *)
   
   Library: Visual Studio 2005 Release */

void _AfxHandleActivate(CWnd *param_1,uint param_2,CWnd *param_3)

{
  ulong uVar1;
  CWnd *pCVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = CWnd::GetExStyle(param_1);
  if ((((uVar1 & 0x40000000) == 0) &&
      (pCVar2 = CWnd::GetTopLevelParent(param_1), pCVar2 != (CWnd *)0x0)) &&
     ((param_3 == (CWnd *)0x0 ||
      ((BVar3 = IsWindow(*(HWND *)(param_3 + 0x20)), BVar3 == 0 ||
       (pCVar4 = CWnd::GetTopLevelParent(param_3), pCVar2 != pCVar4)))))) {
    local_c = *(undefined4 *)(param_1 + 0x20);
    if (param_3 == (CWnd *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(param_3 + 0x20);
    }
    SendMessageA(*(HWND *)(pCVar2 + 0x20),0x36e,param_2,(LPARAM)&local_c);
  }
  return;
}



/**************************************************/

/* Function: _AfxHandleSetCursor @ 1000a725 */

/* Library Function - Single Match
    int __stdcall _AfxHandleSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int _AfxHandleSetCursor(CWnd *param_1,uint param_2,uint param_3)

{
  CWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  
  if (((param_2 == 0xfffffffe) && (((param_3 == 0x201 || (param_3 == 0x207)) || (param_3 == 0x204)))
      ) && (pCVar1 = CWnd::GetTopLevelParent(param_1), pCVar1 != (CWnd *)0x0)) {
    pHVar2 = GetLastActivePopup(*(HWND *)(pCVar1 + 0x20));
    pCVar1 = CWnd::FromHandle(pHVar2);
    if (pCVar1 != (CWnd *)0x0) {
      pHVar2 = GetForegroundWindow();
      pCVar3 = CWnd::FromHandle(pHVar2);
      if ((pCVar1 != pCVar3) && (iVar4 = CWnd::IsWindowEnabled(pCVar1), iVar4 != 0)) {
        SetForegroundWindow(*(HWND *)(pCVar1 + 0x20));
        return 1;
      }
    }
  }
  return 0;
}



/**************************************************/

/* Function: Catch@1000a8aa @ 1000a8aa */

undefined1 * Catch_1000a8aa(void)

{
  long lVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0x14);
  lVar1 = AfxProcessWndProcException
                    (*(CException **)(unaff_EBP + -0x1c),(tagMSG *)(unaff_EBP + -0x4c));
  *(long *)(unaff_EBP + -0x14) = lVar1;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1000353d(*(int **)(unaff_EBP + -0x1c));
  }
  return &LAB_1000a821;
}



/**************************************************/

/* Function: AfxHookWindowCreate @ 1000ab38 */

/* Library Function - Single Match
    void __stdcall AfxHookWindowCreate(class CWnd *)
   
   Library: Visual Studio 2005 Release */

void AfxHookWindowCreate(CWnd *param_1)

{
  CNoTrackObject *pCVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_10027dc0,FUN_10003631);
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if (*(CWnd **)(pCVar1 + 0x14) != param_1) {
    if (*(int *)(pCVar1 + 0x28) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,(HOOKPROC)&LAB_1000a8e5,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(pCVar1 + 0x28) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_100035fd();
      }
    }
    *(CWnd **)(pCVar1 + 0x14) = param_1;
  }
  return;
}



/**************************************************/

/* Function: CreateEx @ 1000ab8d */

/* Library Function - Single Match
    public: virtual int __thiscall CWnd::CreateEx(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,int,int,int,int,struct HWND__ *,struct HMENU__ *,void *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4,int param_5,
              int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  uint uVar3;
  HWND pHVar4;
  void *local_34;
  HINSTANCE local_30;
  HMENU__ *local_2c;
  HWND__ *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  ulong local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  ulong local_8;
  
  if (param_3 != (wchar_t *)0x0) {
    iVar1 = AfxIsValidString(param_3,-1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10003617();
    }
  }
  local_8 = param_1;
  local_c = param_2;
  local_14 = param_4;
  local_18 = param_5;
  local_1c = param_6;
  local_20 = param_7;
  local_24 = param_8;
  local_28 = param_9;
  local_10 = param_3;
  local_2c = param_10;
  pAVar2 = AfxGetModuleState();
  local_30 = *(HINSTANCE *)(pAVar2 + 8);
  local_34 = param_11;
  iVar1 = (**(code **)(*(int *)this + 100))(&local_34);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x114))();
    uVar3 = 0;
  }
  else {
    AfxHookWindowCreate(this);
    pHVar4 = FID_conflict_AfxCtxCreateWindowExW
                       (local_8,(LPCSTR)local_c,(LPCSTR)local_10,local_14,local_18,local_1c,local_20
                        ,local_24,local_28,local_2c,local_30,local_34);
    iVar1 = AfxUnhookWindowCreate();
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0x114))();
    }
    uVar3 = (uint)(pHVar4 != (HWND)0x0);
  }
  return uVar3;
}



/**************************************************/

/* Function: PrepareForHelp @ 1000ac6a */

/* Library Function - Single Match
    public: void __thiscall CWnd::PrepareForHelp(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::PrepareForHelp(CWnd *this)

{
  int iVar1;
  CWnd *pCVar2;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x120))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x170))();
  }
  SendMessageA(*(HWND *)(this + 0x20),0x1f,0,0);
  SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x1f,0,0,1,1);
  pCVar2 = GetTopLevelParent(this);
  if (pCVar2 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  SendMessageA(*(HWND *)(pCVar2 + 0x20),0x1f,0,0);
  SendMessageToDescendants(*(HWND__ **)(pCVar2 + 0x20),0x1f,0,0,1,1);
  hWnd = GetCapture();
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x1f,0,0);
  }
  return;
}



/**************************************************/

/* Function: OnWndMsg @ 1000ace6 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnWndMsg(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  CWnd *pCVar3;
  int *piVar4;
  void *pvVar5;
  CWnd *pCVar6;
  CWnd *pCVar7;
  CMenu *pCVar8;
  AFX_MSGMAP_ENTRY *pAVar9;
  code *pcVar10;
  short sVar11;
  short sVar12;
  CWnd local_80 [32];
  HWND__ *local_60;
  void *local_30;
  CDC local_2c [4];
  undefined4 local_28;
  uint *local_1c;
  undefined4 local_18;
  int local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  pCVar6 = (CWnd *)param_3;
  uStack_4 = 0x70;
  local_14[0] = 0;
  local_18 = 0x7fffffff;
  local_8 = 0;
  if (param_1 == 0x111) {
    iVar2 = (**(code **)(*(int *)this + 0xe8))(param_2,param_3);
    if (iVar2 == 0) goto LAB_1000aef6;
LAB_1000ad24:
    local_14[0] = 1;
    goto switchD_1000ae99_caseD_38;
  }
  if (param_1 == 0x4e) {
    if (*(int *)param_3 == 0) goto LAB_1000aef6;
    iVar2 = (**(code **)(*(int *)this + 0xec))(param_2,param_3,local_14);
LAB_1000ad52:
    if (iVar2 == 0) {
LAB_1000aef6:
      local_8 = 0xffffffff;
      CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
      return 0;
    }
    goto switchD_1000ae99_caseD_38;
  }
  if (param_1 == 6) {
    pCVar3 = FromHandle((HWND__ *)param_3);
    _AfxHandleActivate(this,param_2,pCVar3);
  }
  sVar11 = (short)param_3;
  if ((param_1 == 0x20) &&
     (iVar2 = _AfxHandleSetCursor(this,(int)sVar11,(uint)param_3 >> 0x10), iVar2 != 0))
  goto LAB_1000ad24;
  if ((((*(int *)(this + 0x4c) != 0) && (0 < *(int *)(*(int *)(this + 0x4c) + 0x74))) &&
      ((((0x1ff < param_1 && (param_1 < 0x20a)) || ((0xff < param_1 && (param_1 < 0x110)))) ||
       (param_1 - 0x281 < 0x11)))) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x4c) + 0x94))(param_1,param_2,param_3,local_14),
     iVar2 != 0)) goto switchD_1000ae99_caseD_38;
  piVar4 = (int *)(**(code **)(*(int *)this + 0x28))();
  CInternalGlobalLock::Lock((CInternalGlobalLock *)&local_18,7);
  iVar2 = (((uint)piVar4 ^ param_1) & 0x1ff) * 0xc;
  local_1c = (uint *)(&DAT_10028060 + iVar2);
  if ((param_1 != *local_1c) || (piVar4 != *(int **)(&DAT_10028068 + iVar2))) {
    *local_1c = param_1;
    *(int **)(&DAT_10028068 + iVar2) = piVar4;
    for (; *piVar4 != 0; piVar4 = (int *)(*(code *)*piVar4)()) {
      if (param_1 < 0xc000) {
        param_3 = (long)AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar4[1],param_1,0,0);
        if ((AFX_MSGMAP_ENTRY *)param_3 != (AFX_MSGMAP_ENTRY *)0x0) {
          local_1c[1] = param_3;
          CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
          goto LAB_1000ae84;
        }
      }
      else {
        pAVar9 = (AFX_MSGMAP_ENTRY *)piVar4[1];
        while (param_3 = (long)AfxFindMessageEntry(pAVar9,0xc000,0,0),
              (AFX_MSGMAP_ENTRY *)param_3 != (AFX_MSGMAP_ENTRY *)0x0) {
          if (**(uint **)(param_3 + 0x10) == param_1) {
            local_1c[1] = param_3;
            CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
            goto LAB_1000b1cf;
          }
          pAVar9 = (AFX_MSGMAP_ENTRY *)(param_3 + 0x18);
        }
      }
    }
    local_1c[1] = 0;
    CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
    goto LAB_1000aef6;
  }
  param_3 = *(long *)(&DAT_10028064 + iVar2);
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
  if ((AFX_MSGMAP_ENTRY *)param_3 == (AFX_MSGMAP_ENTRY *)0x0) goto LAB_1000aef6;
  if (0xbfff < param_1) {
LAB_1000b1cf:
    pcVar10 = *(code **)(param_3 + 0x14);
switchD_1000ae99_caseD_e:
    goto LAB_1000b1d6;
  }
LAB_1000ae84:
  pcVar10 = *(code **)(param_3 + 0x14);
  sVar12 = (short)((uint)pCVar6 >> 0x10);
  switch(*(int *)(param_3 + 0x10)) {
  case 1:
    pCVar6 = (CWnd *)::FromHandle((void *)param_2);
    goto LAB_1000af25;
  case 2:
  case 3:
  case 4:
  case 0x1b:
  case 0x1c:
    pCVar6 = (CWnd *)param_2;
    goto LAB_1000af25;
  case 5:
  case 0xc:
    pCVar8 = (CMenu *)((uint)pCVar6 >> 0x10);
    pCVar6 = (CWnd *)((uint)pCVar6 & 0xffff);
    pCVar3 = FromHandle((HWND__ *)param_2);
    goto LAB_1000af5a;
  case 6:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_1000b1d6;
  case 7:
  case 0xd:
LAB_1000af25:
    local_14[0] = (*pcVar10)(pCVar6);
    break;
  case 8:
    FUN_1000bfcc((undefined4 *)local_2c);
    local_28 = *(undefined4 *)((int)pCVar6 + 4);
    local_8._0_1_ = 1;
    CWnd(local_80);
    local_60 = *(HWND__ **)pCVar6;
    uVar1 = *(undefined4 *)((int)pCVar6 + 8);
    local_8 = CONCAT31(local_8._1_3_,2);
    pCVar6 = FromHandlePermanent(local_60);
    if (pCVar6 == (CWnd *)0x0) {
      if ((*(int *)(this + 0x4c) != 0) &&
         (pvVar5 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(*(int *)(this + 0x4c) + 0x24),local_60)
         , pvVar5 != (void *)0x0)) {
        local_30 = pvVar5;
      }
      pCVar6 = local_80;
    }
    local_14[0] = (*pcVar10)(local_2c,pCVar6,uVar1);
    local_28 = 0;
    local_60 = (HWND__ *)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    ~CWnd(local_80);
    goto LAB_1000b005;
  case 9:
    FUN_1000bfcc((undefined4 *)local_2c);
    local_28 = *(undefined4 *)((int)pCVar6 + 4);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_14[0] = (*pcVar10)(local_2c,*(undefined4 *)((int)pCVar6 + 8));
    local_28 = 0;
LAB_1000b005:
    local_8 = local_8 & 0xffffff00;
    CDC::~CDC(local_2c);
    break;
  case 10:
    pCVar8 = (CMenu *)(param_2 >> 0x10);
    pCVar6 = FromHandle((HWND__ *)pCVar6);
    goto LAB_1000b023;
  case 0xb:
    pCVar6 = (CWnd *)(param_2 >> 0x10);
    param_2 = param_2 & 0xffff;
    goto LAB_1000b1d6;
  case 0xe:
  case 0x2f:
    goto switchD_1000ae99_caseD_e;
  case 0xf:
    pCVar8 = CMenu::FromHandle((HMENU__ *)pCVar6);
    pCVar6 = (CWnd *)(param_2 >> 0x10);
LAB_1000b023:
    pCVar3 = (CWnd *)(param_2 & 0xffff);
LAB_1000af5a:
    local_14[0] = (*pcVar10)(pCVar3,pCVar6,pCVar8);
    break;
  case 0x10:
  case 0x12:
  case 0x15:
  case 0x1e:
  case 0x2d:
  case 0x32:
    pCVar3 = pCVar6;
    goto LAB_1000b14e;
  case 0x11:
  case 0x14:
    goto LAB_1000b158;
  case 0x13:
    (*pcVar10)();
    break;
  case 0x16:
    pCVar3 = (CWnd *)(param_2 >> 0x10);
    param_2 = param_2 & 0xffff;
    goto LAB_1000b14e;
  case 0x17:
    param_2 = (uint)sVar11;
    pCVar3 = (CWnd *)(int)sVar12;
    goto LAB_1000b14e;
  case 0x18:
  case 0x19:
    pCVar7 = (CWnd *)((uint)pCVar6 >> 0x10);
    pCVar3 = (CWnd *)((uint)pCVar6 & 0xffff);
    goto LAB_1000b17b;
  case 0x1a:
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    goto LAB_1000b14e;
  case 0x1d:
  case 0x28:
  case 0x31:
    local_14[0] = (*pcVar10)();
    break;
  case 0x1f:
    pCVar7 = FromHandle((HWND__ *)param_2);
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    param_2 = (uint)((CWnd *)*(int *)(this + 0x20) == pCVar6);
    goto LAB_1000b17b;
  case 0x20:
    param_2 = ::FromHandle((void *)param_2);
    goto LAB_1000b158;
  case 0x21:
    param_2 = (uint)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_1000b158;
  case 0x22:
    pCVar7 = (CWnd *)(int)sVar12;
    pCVar3 = (CWnd *)(int)sVar11;
    param_2 = (uint)CMenu::FromHandle((HMENU__ *)param_2);
    goto LAB_1000b17b;
  case 0x23:
    goto LAB_1000b0dd;
  case 0x24:
    param_2 = (uint)pCVar6;
LAB_1000b0dd:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_1000b158;
  case 0x25:
    pCVar7 = (CWnd *)((uint)pCVar6 >> 0x10);
    pCVar3 = (CWnd *)((uint)pCVar6 & 0xffff);
    goto LAB_1000b0fa;
  case 0x26:
    pCVar3 = (CWnd *)(int)sVar11;
    pCVar7 = (CWnd *)(int)sVar12;
LAB_1000b0fa:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    goto LAB_1000b17b;
  case 0x27:
    param_2 = (uint)FromHandle((HWND__ *)param_2);
    pCVar3 = pCVar6;
    goto LAB_1000b14e;
  case 0x29:
    pCVar7 = (CWnd *)(param_2 >> 0x10);
    pCVar3 = FromHandle((HWND__ *)pCVar6);
    goto LAB_1000b165;
  case 0x2a:
  case 0x2b:
    pCVar8 = (CMenu *)(int)(short)param_2;
    pCVar3 = (CWnd *)(int)(short)(param_2 >> 0x10);
    param_2 = (uint)pCVar8;
    if (*(int *)(param_3 + 0x10) == 0x2a) {
      pCVar7 = FromHandle((HWND__ *)pCVar6);
      goto LAB_1000b17b;
    }
LAB_1000b14e:
    (*pcVar10)(param_2,pCVar3);
    break;
  case 0x2c:
  case 0x33:
    param_2 = (uint)pCVar6;
LAB_1000b158:
    (*pcVar10)(param_2);
    break;
  case 0x2e:
  case 0x36:
    (*pcVar10)(param_2,pCVar6);
    goto LAB_1000ad24;
  case 0x30:
  case 0x45:
    param_2 = (uint)sVar11;
    pCVar6 = (CWnd *)(int)sVar12;
LAB_1000b1d6:
    local_14[0] = (*pcVar10)(param_2,pCVar6);
    break;
  case 0x34:
    pCVar3 = (CWnd *)(param_2 >> 0x10);
    pCVar7 = pCVar6;
LAB_1000b165:
    param_2 = param_2 & 0xffff;
    goto LAB_1000b17b;
  case 0x35:
    pCVar3 = (CWnd *)(int)sVar11;
    pCVar7 = (CWnd *)(int)sVar12;
LAB_1000b17b:
    (*pcVar10)(param_2,pCVar3,pCVar7);
    break;
  case 0x37:
    iVar2 = (*pcVar10)(param_2 & 0xffff,param_2 >> 0x10,(int)sVar11,(int)sVar12);
    local_14[0] = iVar2;
    goto LAB_1000ad52;
  case 0x44:
    local_14[0] = (*pcVar10)();
    if (local_14[0] != 0) goto LAB_1000aef6;
  }
switchD_1000ae99_caseD_38:
  if (param_4 != (long *)0x0) {
    *param_4 = local_14[0];
  }
  local_8 = 0xffffffff;
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&local_18);
  return 1;
}



/**************************************************/

/* Function: ReflectChildNotify @ 1000b312 */

/* Library Function - Single Match
    protected: int __thiscall CWnd::ReflectChildNotify(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CWnd::ReflectChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  undefined1 local_10 [4];
  long *local_c;
  long local_8;
  
  if (param_1 < 0x112) {
    if (param_1 == 0x111) {
      iVar1 = CCmdTarget::OnCmdMsg
                        ((CCmdTarget *)this,0,param_2 >> 0x10 | 0xbd110000,(void *)0x0,
                         (AFX_CMDHANDLERINFO *)0x0);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_4 != (long *)0x0) {
        *param_4 = 1;
        return 1;
      }
      return 1;
    }
    if (0x2a < param_1) {
      if ((param_1 < 0x30) || (param_1 == 0x39)) goto LAB_1000b3a6;
      if (param_1 == 0x4e) {
        local_c = param_4;
        local_8 = param_3;
        iVar1 = CCmdTarget::OnCmdMsg
                          ((CCmdTarget *)this,0,*(uint *)(param_3 + 8) & 0xffff | 0xbc4e0000,
                           &local_c,(AFX_CMDHANDLERINFO *)0x0);
        return iVar1;
      }
    }
  }
  else if ((0x113 < param_1) && ((param_1 < 0x116 || (param_1 == 0x210)))) {
LAB_1000b3a6:
    iVar1 = OnWndMsg(this,param_1 + 0xbc00,param_2,param_3,param_4);
    return iVar1;
  }
  if (param_1 - 0x132 < 7) {
    local_8 = param_1 - 0x132;
    local_c = (long *)param_2;
    iVar1 = OnWndMsg(this,0xbc19,0,(long)local_10,param_4);
    if (*param_4 != 0) {
      return iVar1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000b423 @ 1000b423 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1000b423(undefined4 *param_1)

{
  CMFCComObject<class_ATL::CAccessibleProxy> *this;
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_1 = 0;
  this = operator_new(0x18);
  if (this != (CMFCComObject<class_ATL::CAccessibleProxy> *)0x0) {
    CMFCComObject<class_ATL::CAccessibleProxy>::CMFCComObject<class_ATL::CAccessibleProxy>
              (this,(void *)0x0);
    uVar1 = FUN_1000b481();
    return uVar1;
  }
  uVar1 = FUN_1000b481();
  return uVar1;
}



/**************************************************/

/* Function: Catch@1000b46c @ 1000b46c */

undefined * Catch_1000b46c(void)

{
  int unaff_EBP;
  
  FUN_1000353d(*(int **)(unaff_EBP + -0x20));
  return &DAT_1000b47a;
}



/**************************************************/

/* Function: FUN_1000b481 @ 1000b481 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1000b481(void)

{
  int in_EAX;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    *(int *)(unaff_EBP + -0x14) = unaff_EDI;
  }
  *unaff_ESI = in_EAX;
  return *(undefined4 *)(unaff_EBP + -0x14);
}



/**************************************************/

/* Function: ~CWaitCursor @ 1000b495 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall CWaitCursor::~CWaitCursor(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWaitCursor::~CWaitCursor(CWaitCursor *this)

{
  AFX_MODULE_STATE *pAVar1;
  void *local_214;
  undefined4 local_208 [128];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)local_208;
  local_208[0] = 0xc;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}



/**************************************************/

/* Function: Catch@1000b4ed @ 1000b4ed */

undefined4 Catch_1000b4ed(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = FUN_10003a84();
  FUN_10002c40((void *)(unaff_EBP + -0x14),piVar2);
  piVar2 = *(int **)(unaff_EBP + -0x18);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = (**(code **)(iVar3 + 0xc))();
  if (iVar3 == 0) {
    Format((void *)(unaff_EBP + -0x14),(wchar_t *)"%s (%s:%d)");
  }
  else {
    Format((void *)(unaff_EBP + -0x14),(wchar_t *)"%s (%s:%d)\n%s");
  }
  pcVar1 = *(char **)(unaff_EBP + -0x14);
  AfxMessageBox(pcVar1,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_10001f50((undefined4 *)(pcVar1 + -0x10));
  (**(code **)(*piVar2 + 4))(1);
  return 0x1000b4ca;
}



/**************************************************/

/* Function: FID_conflict:WinHelpW @ 1000b585 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CWnd::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CWnd::WinHelpW(unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

BOOL FID_conflict_WinHelpW(HWND hWndMain,LPCWSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  BOOL extraout_EAX;
  CWnd *in_ECX;
  undefined4 *puVar5;
  undefined4 uStackY_34;
  
  pAVar2 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar2 + 4);
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  CWnd::PrepareForHelp(in_ECX);
  pCVar3 = CWnd::GetTopLevelParent(in_ECX);
  if (pCVar3 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  puVar5 = &uStackY_34;
  uStackY_34 = 0x1000b5d5;
  BVar4 = WinHelpA(*(HWND *)(pCVar3 + 0x20),*(LPCSTR *)(iVar1 + 100),(UINT)lpszHelp,
                   (ULONG_PTR)hWndMain);
  if (BVar4 == 0) {
    puVar5[-1] = 0xffffffff;
    puVar5[-2] = 0;
    puVar5[-3] = 0xf107;
    puVar5[-4] = 0x1000b5e6;
    AfxMessageBox(puVar5[-3],puVar5[-2],puVar5[-1]);
  }
  puVar5[-1] = 0x1000b5f2;
  CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&hWndMain + 3));
  puVar5[-1] = 0x1000b5f7;
  return extraout_EAX;
}



/**************************************************/

/* Function: FID_conflict:HtmlHelpA @ 1000b5fa */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CWnd::HtmlHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CWnd::HtmlHelpW(unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall FID_conflict_HtmlHelpA(void *this,undefined4 param_1,undefined4 param_2)

{
  AFX_MODULE_STATE *pAVar1;
  CWnd *pCVar2;
  int iVar3;
  
  pAVar1 = AfxGetModuleState();
  iVar3 = *(int *)(pAVar1 + 4);
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  CWnd::PrepareForHelp(this);
  pCVar2 = CWnd::GetTopLevelParent(this);
  if (pCVar2 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  iVar3 = AfxHtmlHelp(*(undefined4 *)(pCVar2 + 0x20),*(undefined4 *)(iVar3 + 100),param_2,param_1);
  if (iVar3 == 0) {
    AfxMessageBox(0xf107,0,0xffffffff);
  }
  CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&param_1 + 3));
  return;
}



/**************************************************/

/* Function: OnChildNotify @ 1000b66e */

/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnChildNotify(unsigned int,unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  LRESULT LVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) != 0) {
    LVar1 = SendMessageA(*(HWND *)(this + 0x20),param_1 + 0x2000,param_2,param_3);
    if ((6 < param_1 - 0x132) || (iVar2 = 0, LVar1 != 0)) {
      if (param_4 != (long *)0x0) {
        *param_4 = LVar1;
      }
      iVar2 = 1;
    }
    return iVar2;
  }
  iVar2 = ReflectChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar2;
}



/**************************************************/

/* Function: CreateAccessibleProxy @ 1000b6b9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CWnd::CreateAccessibleProxy(unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  LRESULT LVar1;
  int iVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1000b6c5;
  iVar2 = -0x7fffbffb;
  if (param_2 == -4) {
    iVar2 = (**(code **)(*(int *)this + 0x88))();
    if (-1 < iVar2) {
      if (*(LPUNKNOWN *)(this + 0x2c) == (LPUNKNOWN)0x0) {
        iVar2 = FUN_1000b423(local_14);
        if (-1 < iVar2) {
          param_2 = 0;
          local_8 = 0;
          iVar2 = (**(code **)*local_14[0])(local_14[0],&DAT_1001ee84,&param_2);
          if (-1 < iVar2) {
            *(long *)(this + 0x2c) = param_2;
            (**(code **)(*(int *)param_2 + 0xc))(param_2,this + 0x30,this + 0x34);
            LVar1 = LresultFromObject((IID *)&DAT_1001ee74,param_1,*(LPUNKNOWN *)(this + 0x2c));
            *param_3 = LVar1;
          }
          local_8 = 0xffffffff;
          iVar2 = 0;
          if (param_2 != 0) {
            (**(code **)(*(int *)param_2 + 8))(param_2);
          }
        }
      }
      else {
        LVar1 = LresultFromObject((IID *)&DAT_1001ee74,param_1,*(LPUNKNOWN *)(this + 0x2c));
        *param_3 = LVar1;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000b778 @ 1000b778 */

undefined ** FUN_1000b778(void)

{
  return &PTR_LAB_1001f028;
}



/**************************************************/

/* Function: AfxRegisterClass @ 1000b77e */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __stdcall AfxRegisterClass(struct tagWNDCLASSA *)
   
   Library: Visual Studio 2005 Release */

int AfxRegisterClass(tagWNDCLASSA *param_1)

{
  BOOL BVar1;
  uint uVar2;
  AFX_MODULE_STATE *pAVar3;
  tagWNDCLASSA local_3c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1000b78a;
  BVar1 = FID_conflict_AfxCtxGetClassInfoW(param_1->hInstance,param_1->lpszClassName,&local_3c);
  if (BVar1 == 0) {
    uVar2 = FID_conflict_AfxCtxRegisterClassA(param_1);
    if ((short)uVar2 == 0) {
      return 0;
    }
    pAVar3 = AfxGetModuleState();
    if (pAVar3[0x14] != (AFX_MODULE_STATE)0x0) {
      AfxLockGlobals(1);
      local_8 = 0;
      pAVar3 = AfxGetModuleState();
      ATL::CSimpleStringT<char,0>::Append
                ((CSimpleStringT<char,0> *)(pAVar3 + 0x34),param_1->lpszClassName);
      ATL::CSimpleStringT<char,0>::AppendChar((CSimpleStringT<char,0> *)(pAVar3 + 0x34),'\n');
      local_8 = 0xffffffff;
      AfxUnlockGlobals(1);
    }
  }
  return 1;
}



/**************************************************/

/* Function: Catch@1000b7fb @ 1000b7fb */

void Catch_1000b7fb(void)

{
  AfxUnlockGlobals(1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: _AfxRegisterWithIcon @ 1000b80c */

/* Library Function - Single Match
    int __stdcall _AfxRegisterWithIcon(struct tagWNDCLASSA *,char const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int _AfxRegisterWithIcon(tagWNDCLASSA *param_1,char *param_2,uint param_3)

{
  AFX_MODULE_STATE *pAVar1;
  HICON pHVar2;
  int iVar3;
  
  param_1->lpszClassName = param_2;
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadIconA(*(HINSTANCE *)(pAVar1 + 0xc),(LPCSTR)(param_3 & 0xffff));
  param_1->hIcon = pHVar2;
  if (pHVar2 == (HICON)0x0) {
    pHVar2 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    param_1->hIcon = pHVar2;
  }
  iVar3 = AfxRegisterClass(param_1);
  return iVar3;
}



/**************************************************/

/* Function: AfxEndDeferRegisterClass @ 1000b84d */

/* Library Function - Single Match
    int __stdcall AfxEndDeferRegisterClass(long)
   
   Library: Visual Studio 2005 Release */

int AfxEndDeferRegisterClass(long param_1)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  uint uVar4;
  tagWNDCLASSA local_38;
  undefined4 local_10;
  undefined4 local_c;
  AFX_MODULE_STATE *local_8;
  
  local_8 = AfxGetModuleState();
  param_1 = param_1 & ~*(uint *)(local_8 + 0x18);
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    _memset(&local_38,0,0x28);
    local_38.lpfnWndProc = DefWindowProcA_exref;
    pAVar2 = AfxGetModuleState();
    local_38.hInstance = *(HINSTANCE *)(pAVar2 + 8);
    local_38.hCursor = DAT_10028040;
    local_10 = 8;
    if ((param_1 & 1U) != 0) {
      local_38.style = 0xb;
      local_38.lpszClassName = "AfxWnd80s";
      iVar3 = AfxRegisterClass(&local_38);
      if (iVar3 != 0) {
        uVar1 = 1;
      }
    }
    if ((param_1 & 0x20U) != 0) {
      local_38.style = local_38.style | 0x8b;
      local_38.lpszClassName = "AfxOleControl80s";
      iVar3 = AfxRegisterClass(&local_38);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 0x20;
      }
    }
    if ((param_1 & 2U) != 0) {
      local_38.style = 0;
      local_38.lpszClassName = "AfxControlBar80s";
      local_38.hbrBackground = (HBRUSH)0x10;
      iVar3 = AfxRegisterClass(&local_38);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 2;
      }
    }
    if ((param_1 & 4U) != 0) {
      local_38.style = 8;
      local_38.hbrBackground = (HBRUSH)0x0;
      iVar3 = _AfxRegisterWithIcon(&local_38,"AfxMDIFrame80s",0x7a01);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 4;
      }
    }
    if ((param_1 & 8U) != 0) {
      local_38.style = 0xb;
      local_38.hbrBackground = (HBRUSH)0x6;
      iVar3 = _AfxRegisterWithIcon(&local_38,"AfxFrameOrView80s",0x7a02);
      if (iVar3 != 0) {
        uVar1 = uVar1 | 8;
      }
    }
    if ((param_1 & 0x10U) != 0) {
      local_c = 0xff;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x3fc0);
      uVar1 = uVar1 | uVar4;
      param_1 = param_1 & 0xffffc03f;
    }
    if ((param_1 & 0x40U) != 0) {
      local_c = 0x10;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x40);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x80U) != 0) {
      local_c = 2;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x80);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x100U) != 0) {
      local_c = 8;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x100);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x200U) != 0) {
      local_c = 0x20;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x200);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x400U) != 0) {
      local_c = 1;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x400);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x800U) != 0) {
      local_c = 0x40;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x800);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x1000U) != 0) {
      local_c = 4;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x1000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x2000U) != 0) {
      local_c = 0x80;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x2000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x4000U) != 0) {
      local_c = 0x800;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x4000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x8000U) != 0) {
      local_c = 0x400;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x8000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x10000U) != 0) {
      local_c = 0x200;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x10000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x20000U) != 0) {
      local_c = 0x100;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x20000);
      uVar1 = uVar1 | uVar4;
    }
    if ((param_1 & 0x40000U) != 0) {
      local_c = 0x8000;
      uVar4 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&local_10,0x40000);
      uVar1 = uVar1 | uVar4;
    }
    *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | uVar1;
    if ((*(uint *)(local_8 + 0x18) & 0x3fc0) == 0x3fc0) {
      *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | 0x10;
      uVar1 = uVar1 | 0x10;
    }
    uVar1 = (uint)((uVar1 & param_1) == param_1);
  }
  return uVar1;
}



/**************************************************/

/* Function: PreCreateWindow @ 1000bb20 */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::PreCreateWindow(struct tagCREATESTRUCTA &)
    public: virtual int __thiscall CWnd::PreCreateWindow(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2005 Release */

undefined4 PreCreateWindow(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    AfxEndDeferRegisterClass(1);
    *(char **)(param_1 + 0x28) = "AfxWnd80s";
  }
  return 1;
}



/**************************************************/

/* Function: FUN_1000bb40 @ 1000bb40 */

void __fastcall FUN_1000bb40(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000bb45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x58))();
  return;
}



/**************************************************/

/* Function: GetExStyle @ 1000bb48 */

/* Library Function - Single Match
    public: unsigned long __thiscall CWnd::GetExStyle(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

ulong __thiscall CWnd::GetExStyle(CWnd *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 0x50) == 0) {
    uVar1 = GetWindowLongA(*(HWND *)(this + 0x20),-0x10);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x1000bb5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(this + 0x50) + 0x78))();
  return uVar1;
}



/**************************************************/

/* Function: GetExStyle @ 1000bb62 */

/* Library Function - Single Match
    public: unsigned long __thiscall CWnd::GetExStyle(void)const 
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CWnd::GetExStyle(CWnd *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 0x50) == 0) {
    uVar1 = GetWindowLongA(*(HWND *)(this + 0x20),-0x14);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x1000bb79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(this + 0x50) + 0x7c))();
  return uVar1;
}



/**************************************************/

/* Function: IsWindowEnabled @ 1000bb7c */

/* Library Function - Single Match
    public: int __thiscall CWnd::IsWindowEnabled(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::IsWindowEnabled(CWnd *this)

{
  BOOL BVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    BVar1 = ::IsWindowEnabled(*(HWND *)(this + 0x20));
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x1000bb91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x50) + 0xa4))();
  return iVar2;
}



/**************************************************/

/* Function: EnableWindow @ 1000bb97 */

/* Library Function - Single Match
    public: int __thiscall CWnd::EnableWindow(int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    BVar1 = ::EnableWindow(*(HWND *)(this + 0x20),param_1);
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x1000bbb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x50) + 0xa8))();
  return iVar2;
}



/**************************************************/

/* Function: SetWindowPos @ 1000bbb8 */

/* Library Function - Single Match
    public: int __thiscall CWnd::SetWindowPos(class CWnd const *,int,int,int,int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  HWND hWndInsertAfter;
  BOOL BVar1;
  int iVar2;
  
  if (*(int *)(this + 0x50) == 0) {
    hWndInsertAfter = (HWND)0x0;
    if (param_1 != (CWnd *)0x0) {
      hWndInsertAfter = *(HWND *)(param_1 + 0x20);
    }
    BVar1 = ::SetWindowPos(*(HWND *)(this + 0x20),hWndInsertAfter,param_2,param_3,param_4,param_5,
                           param_6);
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x1000bbee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x50) + 0x9c))();
  return iVar2;
}



/**************************************************/

/* Function: AttachControlSite @ 1000bbf4 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::AttachControlSite(class CHandleMap *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::AttachControlSite(CWnd *this,CHandleMap *param_1)

{
  HWND pHVar1;
  void *pvVar2;
  
  if ((this != (CWnd *)0x0) && (*(int *)(this + 0x50) == 0)) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pvVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(param_1 + 0x1c),pHVar1);
    if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x4c) != 0)) {
      (**(code **)(**(int **)((int)pvVar2 + 0x4c) + 0x9c))(this,0);
    }
  }
  return;
}



/**************************************************/

/* Function: CFixedAllocNoSync @ 1000bc35 */

/* Library Function - Single Match
    public: __thiscall CFixedAllocNoSync::CFixedAllocNoSync(unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CFixedAllocNoSync::CFixedAllocNoSync(CFixedAllocNoSync *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    param_1 = 4;
  }
  if (param_2 < 2) {
    param_2 = 0x40;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  return;
}



/**************************************************/

/* Function: FreeAll @ 1000bc5f */

/* Library Function - Single Match
    public: void __thiscall CFixedAllocNoSync::FreeAll(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CFixedAllocNoSync::FreeAll(CFixedAllocNoSync *this)

{
  CPlex::FreeDataChain(*(CPlex **)(this + 8));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}



/**************************************************/

/* Function: FUN_1000bc74 @ 1000bc74 */

void __fastcall FUN_1000bc74(int param_1)

{
  CPlex::FreeDataChain(*(CPlex **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



/**************************************************/

/* Function: Alloc @ 1000bc79 */

/* Library Function - Single Match
    public: void * __thiscall CFixedAllocNoSync::Alloc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall CFixedAllocNoSync::Alloc(CFixedAllocNoSync *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(this + 0xc) == 0) {
    iVar1 = FUN_1000c9fc((undefined4 *)(this + 8),*(int *)(this + 4),*(int *)this);
    iVar3 = *(int *)(this + 4) + -1;
    puVar2 = (undefined4 *)(iVar1 + 4 + *(int *)this * iVar3);
    for (; -1 < iVar3; iVar3 = iVar3 + -1) {
      *puVar2 = *(undefined4 *)(this + 0xc);
      *(undefined4 **)(this + 0xc) = puVar2;
      puVar2 = (undefined4 *)((int)puVar2 - *(int *)this);
    }
  }
  puVar2 = *(undefined4 **)(this + 0xc);
  *(undefined4 *)(this + 0xc) = *puVar2;
  return puVar2;
}



/**************************************************/

/* Function: AfxSetWindowText @ 1000bcb9 */

/* Library Function - Single Match
    void __stdcall AfxSetWindowText(struct HWND__ *,char const *)
   
   Library: Visual Studio 2005 Release */

void AfxSetWindowText(HWND__ *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CHAR local_108;
  undefined1 local_107 [255];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  if ((param_1 == (HWND__ *)0x0) || (param_2 == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  uVar1 = lstrlenA(param_2);
  local_108 = '\0';
  _memset(local_107,0,0xff);
  if (uVar1 < 0x101) {
    uVar2 = GetWindowTextA(param_1,&local_108,0x100);
    if (uVar2 == uVar1) {
      iVar3 = lstrcmpA(&local_108,param_2);
      if (iVar3 == 0) goto LAB_1000bd3e;
    }
  }
  SetWindowTextA(param_1,param_2);
LAB_1000bd3e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_1000bd4f @ 1000bd4f */

void FUN_1000bd4f(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}



/**************************************************/

/* Function: AfxGlobalFree @ 1000bd71 */

/* Library Function - Single Match
    void __stdcall AfxGlobalFree(void *)
   
   Library: Visual Studio 2005 Release */

void AfxGlobalFree(void *param_1)

{
  UINT UVar1;
  uint uVar2;
  
  if (param_1 != (void *)0x0) {
    UVar1 = GlobalFlags(param_1);
    for (uVar2 = UVar1 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
      GlobalUnlock(param_1);
    }
    GlobalFree(param_1);
  }
  return;
}



/**************************************************/

/* Function: _AfxChildWindowFromPoint @ 1000bdf1 */

/* Library Function - Single Match
    struct HWND__ * __stdcall _AfxChildWindowFromPoint(struct HWND__ *,struct tagPOINT)
   
   Library: Visual Studio 2005 Release */

HWND__ * _AfxChildWindowFromPoint(HWND__ *param_1,tagPOINT param_2)

{
  POINT pt;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  UINT uCmd;
  tagRECT local_14;
  
  ClientToScreen(param_1,&param_2);
  uCmd = 5;
  do {
    param_1 = GetWindow(param_1,uCmd);
    if (param_1 == (HWND)0x0) {
      return (HWND__ *)0x0;
    }
    iVar1 = GetDlgCtrlID(param_1);
    if (((short)iVar1 != 0) && (uVar2 = GetWindowLongA(param_1,-0x10), (uVar2 & 0x10000000) != 0)) {
      GetWindowRect(param_1,&local_14);
      pt.y = param_2.y;
      pt.x = param_2.x;
      BVar3 = PtInRect(&local_14,pt);
      if (BVar3 != 0) {
        return param_1;
      }
    }
    uCmd = 2;
  } while( true );
}



/**************************************************/

/* Function: FUN_1000be63 @ 1000be63 */

void __thiscall FUN_1000be63(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1000be6d @ 1000be6d */

void __thiscall FUN_1000be6d(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1000be77 @ 1000be77 */

void __fastcall FUN_1000be77(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/**************************************************/

/* Function: FUN_1000be7c @ 1000be7c */

void __fastcall FUN_1000be7c(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



/**************************************************/

/* Function: SaveDC @ 1000be81 */

/* Library Function - Single Match
    public: virtual int __thiscall CDC::SaveDC(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CDC::SaveDC(CDC *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    iVar2 = ::SaveDC(*(HDC *)(this + 8));
  }
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    iVar1 = ::SaveDC(*(HDC *)(this + 4));
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}



/**************************************************/

/* Function: RestoreDC @ 1000beb2 */

/* Library Function - Single Match
    public: virtual int __thiscall CDC::RestoreDC(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CDC::RestoreDC(CDC *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = 1;
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    iVar1 = ::RestoreDC(*(HDC *)(this + 4),param_1);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    if ((iVar1 != 0) && (BVar2 = ::RestoreDC(*(HDC *)(this + 8),param_1), BVar2 != 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_1000bef0 @ 1000bef0 */

COLORREF __thiscall FUN_1000bef0(void *this,COLORREF param_1)

{
  COLORREF CVar1;
  
  CVar1 = 0xffffffff;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    CVar1 = SetBkColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    CVar1 = SetBkColor(*(HDC *)((int)this + 8),param_1);
  }
  return CVar1;
}



/**************************************************/

/* Function: FUN_1000bf1f @ 1000bf1f */

COLORREF __thiscall FUN_1000bf1f(void *this,COLORREF param_1)

{
  COLORREF CVar1;
  
  CVar1 = 0xffffffff;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    CVar1 = SetTextColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    CVar1 = SetTextColor(*(HDC *)((int)this + 8),param_1);
  }
  return CVar1;
}



/**************************************************/

/* Function: FUN_1000bf4e @ 1000bf4e */

int __thiscall FUN_1000bf4e(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    iVar1 = SetMapMode(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    iVar1 = SetMapMode(*(HDC *)((int)this + 8),param_1);
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_1000bf7c @ 1000bf7c */

void __thiscall FUN_1000bf7c(void *this,LPRECT param_1)

{
  GetClipBox(*(HDC *)((int)this + 4),param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000bf8c @ 1000bf8c */

undefined ** FUN_1000bf8c(void)

{
  return &PTR_s_CResourceException_1001f34c;
}



/**************************************************/

/* Function: FUN_1000bf92 @ 1000bf92 */

undefined ** FUN_1000bf92(void)

{
  return &PTR_s_CUserException_1001f368;
}



/**************************************************/

/* Function: FUN_1000bf98 @ 1000bf98 */

undefined ** FUN_1000bf98(void)

{
  return &PTR_DAT_1001f384;
}



/**************************************************/

/* Function: FUN_1000bf9e @ 1000bf9e */

undefined ** FUN_1000bf9e(void)

{
  return &PTR_s_CGdiObject_1001f3a0;
}



/**************************************************/

/* Function: FUN_1000bfa4 @ 1000bfa4 */

void FUN_1000bfa4(void)

{
  undefined *local_8;
  
  local_8 = &DAT_10029a90;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_8,&DAT_100232dc);
}



/**************************************************/

/* Function: FUN_1000bfcc @ 1000bfcc */

void __fastcall FUN_1000bfcc(undefined4 *param_1)

{
  *param_1 = CDC::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/**************************************************/

/* Function: FUN_1000bfe0 @ 1000bfe0 */

void __thiscall FUN_1000bfe0(void *this,int param_1,int param_2)

{
  PtVisible(*(HDC *)((int)this + 4),param_1,param_2);
  return;
}



/**************************************************/

/* Function: FUN_1000bff4 @ 1000bff4 */

void __thiscall FUN_1000bff4(void *this,RECT *param_1)

{
  RectVisible(*(HDC *)((int)this + 4),param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000c004 @ 1000c004 */

void __thiscall FUN_1000c004(void *this,int param_1,int param_2,LPCSTR param_3,int param_4)

{
  TextOutA(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4);
  return;
}



/**************************************************/

/* Function: FUN_1000c020 @ 1000c020 */

void __thiscall
FUN_1000c020(void *this,int param_1,int param_2,UINT param_3,RECT *param_4,LPCSTR param_5,
            UINT param_6,INT *param_7)

{
  ExtTextOutA(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/**************************************************/

/* Function: FUN_1000c045 @ 1000c045 */

int * __thiscall
FUN_1000c045(void *this,int *param_1,int param_2,int param_3,LPCSTR param_4,int param_5,int param_6,
            INT *param_7,int param_8)

{
  LONG LVar1;
  
  LVar1 = TabbedTextOutA(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
  param_1[1] = (int)(short)((uint)LVar1 >> 0x10);
  *param_1 = (int)(short)LVar1;
  return param_1;
}



/**************************************************/

/* Function: FUN_1000c07d @ 1000c07d */

void __thiscall FUN_1000c07d(void *this,LPCSTR param_1,int param_2,LPRECT param_3,UINT param_4)

{
  DrawTextA(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4);
  return;
}



/**************************************************/

/* Function: FUN_1000c099 @ 1000c099 */

void __thiscall
FUN_1000c099(void *this,LPSTR param_1,int param_2,LPRECT param_3,UINT param_4,
            LPDRAWTEXTPARAMS param_5)

{
  DrawTextExA(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
  return;
}



/**************************************************/

/* Function: FUN_1000c0b8 @ 1000c0b8 */

void __thiscall
FUN_1000c0b8(void *this,int param_1,GRAYSTRINGPROC param_2,LPARAM param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  HBRUSH hBrush;
  
  hBrush = (HBRUSH)0x0;
  if (param_1 != 0) {
    hBrush = *(HBRUSH *)(param_1 + 4);
  }
  GrayStringA(*(HDC *)((int)this + 4),hBrush,param_2,param_3,param_4,param_5,param_6,param_7,param_8
             );
  return;
}



/**************************************************/

/* Function: FUN_1000c0e8 @ 1000c0e8 */

void __thiscall FUN_1000c0e8(void *this,int param_1,int param_2,LPCSTR param_3,LPVOID param_4)

{
  Escape(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4);
  return;
}



/**************************************************/

/* Function: FID_conflict:OffsetWindowOrg @ 1000c104 */

/* Library Function - Multiple Matches With Different Base Names
    public: class CPoint __thiscall CDC::MoveTo(int,int)
    public: virtual class CPoint __thiscall CDC::OffsetViewportOrg(int,int)
    public: class CPoint __thiscall CDC::OffsetWindowOrg(int,int)
    public: virtual class CSize __thiscall CDC::SetViewportExt(int,int)
     7 names - too many to list
   
   Library: Visual Studio 2005 Release */

LPPOINT __thiscall FID_conflict_OffsetWindowOrg(void *this,LPPOINT param_1,int param_2,int param_3)

{
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetViewportOrgEx(*(HDC *)((int)this + 4),param_2,param_3,param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetViewportOrgEx(*(HDC *)((int)this + 8),param_2,param_3,param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FID_conflict:OffsetWindowOrg @ 1000c141 */

/* Library Function - Multiple Matches With Different Base Names
    public: class CPoint __thiscall CDC::MoveTo(int,int)
    public: virtual class CPoint __thiscall CDC::OffsetViewportOrg(int,int)
    public: class CPoint __thiscall CDC::OffsetWindowOrg(int,int)
    public: virtual class CSize __thiscall CDC::SetViewportExt(int,int)
     7 names - too many to list
   
   Library: Visual Studio 2005 Release */

LPPOINT __thiscall FID_conflict_OffsetWindowOrg(void *this,LPPOINT param_1,int param_2,int param_3)

{
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    OffsetViewportOrgEx(*(HDC *)((int)this + 4),param_2,param_3,param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    OffsetViewportOrgEx(*(HDC *)((int)this + 8),param_2,param_3,param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FID_conflict:OffsetWindowOrg @ 1000c17e */

/* Library Function - Multiple Matches With Different Base Names
    public: class CPoint __thiscall CDC::MoveTo(int,int)
    public: virtual class CPoint __thiscall CDC::OffsetViewportOrg(int,int)
    public: class CPoint __thiscall CDC::OffsetWindowOrg(int,int)
    public: virtual class CSize __thiscall CDC::SetViewportExt(int,int)
     7 names - too many to list
   
   Library: Visual Studio 2005 Release */

LPSIZE __thiscall FID_conflict_OffsetWindowOrg(void *this,LPSIZE param_1,int param_2,int param_3)

{
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetViewportExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetViewportExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FID_conflict:ScaleWindowExt @ 1000c1bb */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual class CSize __thiscall CDC::ScaleViewportExt(int,int,int,int)
    public: virtual class CSize __thiscall CDC::ScaleWindowExt(int,int,int,int)
   
   Library: Visual Studio 2005 Release */

LPSIZE __thiscall
FID_conflict_ScaleWindowExt
          (void *this,LPSIZE param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    ScaleViewportExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    ScaleViewportExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_4,param_5,param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FID_conflict:OffsetWindowOrg @ 1000c204 */

/* Library Function - Multiple Matches With Different Base Names
    public: class CPoint __thiscall CDC::MoveTo(int,int)
    public: virtual class CPoint __thiscall CDC::OffsetViewportOrg(int,int)
    public: class CPoint __thiscall CDC::OffsetWindowOrg(int,int)
    public: virtual class CSize __thiscall CDC::SetViewportExt(int,int)
     7 names - too many to list
   
   Library: Visual Studio 2005 Release */

LPSIZE __thiscall FID_conflict_OffsetWindowOrg(void *this,LPSIZE param_1,int param_2,int param_3)

{
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetWindowExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetWindowExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FID_conflict:ScaleWindowExt @ 1000c241 */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual class CSize __thiscall CDC::ScaleViewportExt(int,int,int,int)
    public: virtual class CSize __thiscall CDC::ScaleWindowExt(int,int,int,int)
   
   Library: Visual Studio 2005 Release */

LPSIZE __thiscall
FID_conflict_ScaleWindowExt
          (void *this,LPSIZE param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    ScaleWindowExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    ScaleWindowExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_4,param_5,param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_1000c2f6 @ 1000c2f6 */

undefined4 * __thiscall FUN_1000c2f6(void *this,byte param_1)

{
  *(undefined ***)this = CResourceException::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000c313 @ 1000c313 */

undefined4 * __thiscall FUN_1000c313(void *this,byte param_1)

{
  *(undefined ***)this = CUserException::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: afxMapHDC @ 1000c330 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class CHandleMap * __stdcall afxMapHDC(int)
   
   Library: Visual Studio 2005 Release */

CHandleMap * afxMapHDC(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *this;
  undefined4 uVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x1c) == 0) && (param_1 != 0)) {
    p_Var2 = AfxSetNewHandler((_func_int_uint *)&LAB_1000bda4);
    this = operator_new(0x60);
    if (this == (CHandleMap *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CHandleMap::CHandleMap
                        (this,(CRuntimeClass *)&PTR_DAT_1001f384,
                         (_func_void_CObject_ptr *)&LAB_1000c2c5,
                         (_func_void_CObject_ptr *)&LAB_1000bfbe,4,2);
    }
    *(undefined4 *)(pAVar1 + 0x1c) = uVar3;
    AfxSetNewHandler(p_Var2);
  }
  return *(CHandleMap **)(pAVar1 + 0x1c);
}



/**************************************************/

/* Function: FromHandle @ 1000c3a4 */

/* Library Function - Multiple Matches With Same Base Name
    public: static class CDC * __stdcall CDC::FromHandle(struct HDC__ *)
    public: static class CMenu * __stdcall CMenu::FromHandle(struct HMENU__ *)
   
   Library: Visual Studio 2005 Release */

void FromHandle(void *param_1)

{
  CHandleMap *this;
  
  this = afxMapHDC(1);
  CHandleMap::FromHandle(this,param_1);
  return;
}



/**************************************************/

/* Function: Detach @ 1000c3b2 */

/* Library Function - Single Match
    public: struct HDC__ * __thiscall CDC::Detach(void)
   
   Library: Visual Studio 2005 Release */

HDC__ * __thiscall CDC::Detach(CDC *this)

{
  HDC__ *pHVar1;
  CHandleMap *pCVar2;
  
  pHVar1 = *(HDC__ **)(this + 4);
  if (pHVar1 != (HDC__ *)0x0) {
    pCVar2 = afxMapHDC(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(this + 4));
    }
  }
  (**(code **)(*(int *)this + 0x14))();
  *(undefined4 *)(this + 4) = 0;
  return pHVar1;
}



/**************************************************/

/* Function: ~CDC @ 1000c3e3 */

/* Library Function - Single Match
    public: virtual __thiscall CDC::~CDC(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDC::~CDC(CDC *this)

{
  HDC__ *hdc;
  
  *(undefined ***)this = vftable;
  if (*(int *)(this + 4) != 0) {
    hdc = Detach(this);
    DeleteDC(hdc);
  }
  return;
}



/**************************************************/

/* Function: afxMapHGDIOBJ @ 1000c3fc */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class CHandleMap * __stdcall afxMapHGDIOBJ(int)
   
   Library: Visual Studio 2005 Release */

CHandleMap * afxMapHGDIOBJ(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *this;
  undefined4 uVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x20) == 0) && (param_1 != 0)) {
    p_Var2 = AfxSetNewHandler((_func_int_uint *)&LAB_1000bda4);
    this = operator_new(0x60);
    if (this == (CHandleMap *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CHandleMap::CHandleMap
                        (this,(CRuntimeClass *)&PTR_s_CGdiObject_1001f3a0,
                         (_func_void_CObject_ptr *)&LAB_1000c2e1,
                         (_func_void_CObject_ptr *)&LAB_1000bfbe,4,1);
    }
    *(undefined4 *)(pAVar1 + 0x20) = uVar3;
    AfxSetNewHandler(p_Var2);
  }
  return *(CHandleMap **)(pAVar1 + 0x20);
}



/**************************************************/

/* Function: FromHandle @ 1000c470 */

/* Library Function - Single Match
    public: static class CGdiObject * __stdcall CGdiObject::FromHandle(void *)
   
   Library: Visual Studio 2005 Release */

CGdiObject * CGdiObject::FromHandle(void *param_1)

{
  CHandleMap *this;
  CObject *pCVar1;
  
  this = afxMapHGDIOBJ(1);
  pCVar1 = CHandleMap::FromHandle(this,param_1);
  return (CGdiObject *)pCVar1;
}



/**************************************************/

/* Function: Detach @ 1000c47e */

/* Library Function - Multiple Matches With Same Base Name
    public: void * __thiscall CGdiObject::Detach(void)
    public: struct HMENU__ * __thiscall CMenu::Detach(void)
   
   Library: Visual Studio 2005 Release */

int __fastcall Detach(int param_1)

{
  int iVar1;
  CHandleMap *pCVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    pCVar2 = afxMapHGDIOBJ(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}



/**************************************************/

/* Function: FUN_1000c4a8 @ 1000c4a8 */

BOOL __fastcall FUN_1000c4a8(int param_1)

{
  HGDIOBJ ho;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  ho = (HGDIOBJ)Detach(param_1);
  BVar1 = DeleteObject(ho);
  return BVar1;
}



/**************************************************/

/* Function: FUN_1000c4be @ 1000c4be */

CDC * __thiscall FUN_1000c4be(void *this,byte param_1)

{
  CDC::~CDC(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: SelectStockObject @ 1000c4da */

/* Library Function - Single Match
    public: virtual class CGdiObject * __thiscall CDC::SelectStockObject(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

CGdiObject * __thiscall CDC::SelectStockObject(CDC *this,int param_1)

{
  HGDIOBJ h;
  void *pvVar1;
  CGdiObject *pCVar2;
  
  h = GetStockObject(param_1);
  pvVar1 = (HGDIOBJ)0x0;
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    pvVar1 = SelectObject(*(HDC *)(this + 4),h);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    pvVar1 = SelectObject(*(HDC *)(this + 8),h);
  }
  pCVar2 = CGdiObject::FromHandle(pvVar1);
  return pCVar2;
}



/**************************************************/

/* Function: SelectObject @ 1000c516 */

/* Library Function - Multiple Matches With Same Base Name
    public: class CBrush * __thiscall CDC::SelectObject(class CBrush *)
    public: class CPen * __thiscall CDC::SelectObject(class CPen *)
    public: virtual class CFont * __thiscall CDC::SelectObject(class CFont *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

HGDIOBJ SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  CGdiObject *pCVar2;
  int in_ECX;
  
  pvVar1 = (HGDIOBJ)0x0;
  if (*(HDC *)(in_ECX + 4) != *(HDC *)(in_ECX + 8)) {
    if (hdc != (HDC)0x0) {
      pvVar1 = (HGDIOBJ)hdc[1].unused;
    }
    pvVar1 = SelectObject(*(HDC *)(in_ECX + 4),pvVar1);
  }
  if (*(HDC *)(in_ECX + 8) != (HDC)0x0) {
    if (hdc == (HDC)0x0) {
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = (HGDIOBJ)hdc[1].unused;
    }
    pvVar1 = SelectObject(*(HDC *)(in_ECX + 8),pvVar1);
  }
  pCVar2 = CGdiObject::FromHandle(pvVar1);
  return pCVar2;
}



/**************************************************/

/* Function: FUN_1000c55c @ 1000c55c */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_1000c55c(undefined4 *param_1)

{
  void *local_214;
  undefined4 local_208 [128];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)local_208;
  local_208[0] = 0xc;
  *param_1 = CGdiObject::vftable;
  FUN_1000c4a8((int)param_1);
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}



/**************************************************/

/* Function: Catch@1000c5b2 @ 1000c5b2 */

undefined4 Catch_1000c5b2(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar2 = FUN_10003a84();
  FUN_10002c40((void *)(unaff_EBP + -0x14),piVar2);
  piVar2 = *(int **)(unaff_EBP + -0x18);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = (**(code **)(iVar3 + 0xc))();
  if (iVar3 == 0) {
    Format((void *)(unaff_EBP + -0x14),(wchar_t *)"%s (%s:%d)");
  }
  else {
    Format((void *)(unaff_EBP + -0x14),(wchar_t *)"%s (%s:%d)\n%s");
  }
  pcVar1 = *(char **)(unaff_EBP + -0x14);
  AfxMessageBox(pcVar1,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_10001f50((undefined4 *)(pcVar1 + -0x10));
  (**(code **)(*piVar2 + 4))(1);
  return 0x1000c58f;
}



/**************************************************/

/* Function: FUN_1000c644 @ 1000c644 */

undefined4 * __thiscall FUN_1000c644(void *this,byte param_1)

{
  FUN_1000c55c(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000c660 @ 1000c660 */

undefined ** FUN_1000c660(void)

{
  return &PTR_s_CByteArray_100268fc;
}



/**************************************************/

/* Function: FUN_1000c67d @ 1000c67d */

void __fastcall FUN_1000c67d(undefined4 *param_1)

{
  *param_1 = CByteArray::vftable;
  _free((void *)param_1[1]);
  return;
}



/**************************************************/

/* Function: SetSize @ 1000c68d */

/* Library Function - Single Match
    public: void __thiscall CByteArray::SetSize(int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CByteArray::SetSize(CByteArray *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  iVar2 = param_1;
  pvVar5 = (void *)0x0;
  if (param_1 < 0) goto LAB_1000c69e;
  if (-1 < param_2) {
    *(int *)(this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    _free(*(void **)(this + 4));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
LAB_1000c793:
    *(void **)(this + 4) = pvVar5;
  }
  else {
    if (*(int *)(this + 4) == 0) {
      pvVar5 = operator_new(param_1);
      *(void **)(this + 4) = pvVar5;
      _memset(pvVar5,0,param_1);
      *(int *)(this + 0xc) = param_1;
    }
    else {
      iVar1 = *(int *)(this + 0xc);
      if (iVar1 < param_1) {
        iVar4 = *(int *)(this + 0x10);
        if (iVar4 == 0) {
          iVar4 = (int)(*(int *)(this + 8) + (*(int *)(this + 8) >> 0x1f & 7U)) >> 3;
          if (iVar4 < 4) {
LAB_1000c73c:
            iVar4 = 4;
          }
          else if (iVar4 < 0x401) {
            if (iVar4 < 4) goto LAB_1000c73c;
          }
          else {
            iVar4 = 0x400;
          }
        }
        iVar3 = iVar4 + iVar1;
        if (iVar4 + iVar1 <= param_1) {
          iVar3 = param_1;
        }
        param_1 = iVar3;
        if (param_1 < iVar1) {
LAB_1000c69e:
                    /* WARNING: Subroutine does not return */
          FUN_10003617();
        }
        pvVar5 = operator_new(param_1);
        FUN_10003751(pvVar5,param_1,*(void **)(this + 4),*(rsize_t *)(this + 8));
        _memset((void *)(*(int *)(this + 8) + (int)pvVar5),0,iVar2 - *(int *)(this + 8));
        _free(*(void **)(this + 4));
        *(int *)(this + 8) = iVar2;
        *(int *)(this + 0xc) = param_1;
        goto LAB_1000c793;
      }
      iVar2 = *(int *)(this + 8);
      if (iVar2 < param_1) {
        _memset((void *)(iVar2 + *(int *)(this + 4)),0,param_1 - iVar2);
      }
    }
    *(int *)(this + 8) = param_1;
  }
  return;
}



/**************************************************/

/* Function: Serialize @ 1000c79d */

/* Library Function - Single Match
    public: virtual void __thiscall CByteArray::Serialize(class CArchive &)
   
   Library: Visual Studio 2005 Release */

void __thiscall CByteArray::Serialize(CByteArray *this,CArchive *param_1)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_1);
    SetSize(this,uVar1,-1);
    pvVar3 = *(void **)(this + 4);
    for (uVar4 = *(uint *)(this + 8); uVar4 != 0; uVar4 = uVar4 - uVar2) {
      uVar2 = 0x7fffffff;
      if (uVar4 < 0x7fffffff) {
        uVar2 = uVar4;
      }
      CArchive::EnsureRead(param_1,pvVar3,uVar2);
      pvVar3 = (void *)((int)pvVar3 + uVar2);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 8));
    pvVar3 = *(void **)(this + 4);
    for (uVar4 = *(uint *)(this + 8); uVar4 != 0; uVar4 = uVar4 - uVar2) {
      uVar2 = 0x7fffffff;
      if (uVar4 < 0x7fffffff) {
        uVar2 = uVar4;
      }
      CArchive::Write(param_1,pvVar3,uVar2);
      pvVar3 = (void *)((int)pvVar3 + uVar2);
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1000c830 @ 1000c830 */

undefined4 * __thiscall FUN_1000c830(void *this,byte param_1)

{
  FUN_1000c67d(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: AfxFormatStrings @ 1000c84c */

/* Library Function - Single Match
    void __stdcall AfxFormatStrings(class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > &,char const *,char const * const *,int)
   
   Library: Visual Studio 2005 Release */

void AfxFormatStrings(CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *param_1
                     ,char *param_2,char **param_3,int param_4)

{
  char cVar1;
  LPCSTR lpString;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_2;
  if ((param_2 == (char *)0x0) || (param_3 == (char **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10003617();
  }
  param_2 = (char *)0x0;
  cVar1 = *pcVar4;
  pcVar5 = pcVar4;
  while (cVar1 != '\0') {
    if (*pcVar5 == '%') {
      cVar1 = pcVar5[1];
      if ((cVar1 < '1') || ('9' < cVar1)) {
        if ((cVar1 < 'A') || ('Z' < cVar1)) goto LAB_1000c8b7;
        if (cVar1 < ':') goto LAB_1000c897;
        iVar2 = cVar1 + -0x38;
      }
      else {
LAB_1000c897:
        iVar2 = cVar1 + -0x31;
      }
      pcVar5 = pcVar5 + 2;
      if (param_4 <= iVar2) goto LAB_1000c8ca;
      if (param_3[iVar2] != (LPCSTR)0x0) {
        iVar2 = lstrlenA(param_3[iVar2]);
        param_2 = param_2 + iVar2;
      }
    }
    else {
LAB_1000c8b7:
      iVar2 = __ismbblead((int)*pcVar5);
      if (iVar2 != 0) {
        param_2 = param_2 + 1;
        pcVar5 = pcVar5 + 1;
      }
      pcVar5 = pcVar5 + 1;
LAB_1000c8ca:
      param_2 = param_2 + 1;
    }
    cVar1 = *pcVar5;
  }
  pcVar5 = ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT<char,0> *)param_1,(int)param_2)
  ;
  cVar1 = *pcVar4;
  do {
    if (cVar1 == '\0') {
      ATL::CSimpleStringT<char,0>::ReleaseBuffer
                ((CSimpleStringT<char,0> *)param_1,(int)pcVar5 - *(int *)param_1);
      return;
    }
    if (*pcVar4 == '%') {
      cVar1 = pcVar4[1];
      if ((cVar1 < '1') || ('9' < cVar1)) {
        if ((cVar1 < 'A') || ('Z' < cVar1)) goto LAB_1000c953;
        if (cVar1 < ':') goto LAB_1000c910;
        iVar2 = cVar1 + -0x38;
      }
      else {
LAB_1000c910:
        iVar2 = cVar1 + -0x31;
      }
      pcVar4 = pcVar4 + 2;
      if (param_4 <= iVar2) {
        *pcVar5 = '?';
        goto LAB_1000c970;
      }
      lpString = param_3[iVar2];
      if (lpString != (LPCSTR)0x0) {
        iVar3 = lstrlenA(lpString);
        ATL::Checked::tcscpy_s(pcVar5,(uint)(param_2 + 1),param_3[iVar2]);
        param_2 = param_2 + -iVar3;
        pcVar5 = pcVar5 + iVar3;
      }
    }
    else {
LAB_1000c953:
      iVar2 = __ismbblead((int)*pcVar4);
      if (iVar2 != 0) {
        *pcVar5 = *pcVar4;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
        param_2 = param_2 + -1;
      }
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
LAB_1000c970:
      pcVar5 = pcVar5 + 1;
      param_2 = param_2 + -1;
    }
    cVar1 = *pcVar4;
  } while( true );
}



/**************************************************/

/* Function: AfxFormatStrings @ 1000c98e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxFormatStrings(class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > &,unsigned int,char const * const *,int)
   
   Library: Visual Studio 2005 Release */

void AfxFormatStrings(CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *param_1
                     ,uint param_2,char **param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1000c99a;
  piVar1 = FUN_10003a84();
  FUN_10002c40(local_14,piVar1);
  local_8 = 0;
  iVar2 = ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>::LoadStringA
                    ((CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)
                     local_14,param_2);
  if (iVar2 != 0) {
    AfxFormatStrings(param_1,local_14[0],param_3,param_4);
  }
  FUN_10001f50((undefined4 *)(local_14[0] + -0x10));
  return;
}



/**************************************************/

/* Function: AfxFormatString1 @ 1000c9e5 */

/* Library Function - Multiple Matches With Same Base Name
    void __stdcall AfxFormatString1(class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > &,unsigned int,char const *)
    void __stdcall AfxFormatString1(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,unsigned int,wchar_t const *)
   
   Library: Visual Studio 2005 Release */

void AfxFormatString1(CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *param_1
                     ,uint param_2)

{
  AfxFormatStrings(param_1,param_2,(char **)&stack0x0000000c,1);
  return;
}



/**************************************************/

/* Function: FUN_1000c9fc @ 1000c9fc */

void FUN_1000c9fc(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    puVar1 = operator_new(param_2 * param_3 + 4);
    *puVar1 = *param_1;
    *param_1 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003617();
}



/**************************************************/

/* Function: FreeDataChain @ 1000ca2d */

/* Library Function - Single Match
    public: void __thiscall CPlex::FreeDataChain(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CPlex::FreeDataChain(CPlex *this)

{
  CPlex *pCVar1;
  
  while (this != (CPlex *)0x0) {
    pCVar1 = *(CPlex **)this;
    _free(this);
    this = pCVar1;
  }
  return;
}



/**************************************************/

/* Function: FUN_1000ca43 @ 1000ca43 */

void FUN_1000ca43(void)

{
  return;
}



/**************************************************/

/* Function: FUN_1000ca46 @ 1000ca46 */

undefined ** FUN_1000ca46(void)

{
  return &PTR_s_CMenu_1001f4e0;
}



/**************************************************/

/* Function: afxMapHMENU @ 1000ca7b */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class CHandleMap * __stdcall afxMapHMENU(int)
   
   Library: Visual Studio 2005 Release */

CHandleMap * afxMapHMENU(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *this;
  undefined4 uVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x18) == 0) && (param_1 != 0)) {
    p_Var2 = AfxSetNewHandler((_func_int_uint *)&LAB_1000bda4);
    this = operator_new(0x60);
    if (this == (CHandleMap *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CHandleMap::CHandleMap
                        (this,(CRuntimeClass *)&PTR_s_CMenu_1001f4e0,
                         (_func_void_CObject_ptr *)&LAB_1000ca66,
                         (_func_void_CObject_ptr *)&LAB_1000bfbe,4,1);
    }
    *(undefined4 *)(pAVar1 + 0x18) = uVar3;
    AfxSetNewHandler(p_Var2);
  }
  return *(CHandleMap **)(pAVar1 + 0x18);
}



/**************************************************/

/* Function: FromHandle @ 1000caef */

/* Library Function - Single Match
    public: static class CMenu * __stdcall CMenu::FromHandle(struct HMENU__ *)
   
   Library: Visual Studio 2005 Release */

CMenu * CMenu::FromHandle(HMENU__ *param_1)

{
  CHandleMap *this;
  CObject *pCVar1;
  
  this = afxMapHMENU(1);
  pCVar1 = CHandleMap::FromHandle(this,param_1);
  return (CMenu *)pCVar1;
}



/**************************************************/

/* Function: FromHandlePermanent @ 1000cafd */

/* Library Function - Single Match
    public: static class CMenu * __stdcall CMenu::FromHandlePermanent(struct HMENU__ *)
   
   Library: Visual Studio 2005 Release */

CMenu * CMenu::FromHandlePermanent(HMENU__ *param_1)

{
  CHandleMap *pCVar1;
  CMenu *pCVar2;
  
  pCVar1 = afxMapHMENU(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    return pCVar2;
  }
  return (CMenu *)0x0;
}



/**************************************************/

/* Function: Detach @ 1000cb17 */

/* Library Function - Multiple Matches With Same Base Name
    public: void * __thiscall CGdiObject::Detach(void)
    public: struct HMENU__ * __thiscall CMenu::Detach(void)
   
   Library: Visual Studio 2005 Release */

int __fastcall Detach(int param_1)

{
  int iVar1;
  CHandleMap *pCVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    pCVar2 = afxMapHMENU(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}



/**************************************************/

/* Function: FID_conflict:DeleteObject @ 1000cb41 */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CGdiObject::DeleteObject(void)
    public: int __thiscall CMenu::DestroyMenu(void)
   
   Library: Visual Studio 2005 Release */

BOOL FID_conflict_DeleteObject(HGDIOBJ ho)

{
  HMENU hMenu;
  BOOL BVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  hMenu = (HMENU)Detach(in_ECX);
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}



/**************************************************/

/* Function: FUN_1000cb57 @ 1000cb57 */

undefined4 * __thiscall FUN_1000cb57(void *this,byte param_1)

{
  HGDIOBJ unaff_ESI;
  
  *(undefined ***)this = CMenu::vftable;
  FID_conflict_DeleteObject(unaff_ESI);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: AfxPostQuitMessage @ 1000cb79 */

/* Library Function - Single Match
    void __stdcall AfxPostQuitMessage(int)
   
   Library: Visual Studio 2005 Release */

void AfxPostQuitMessage(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004d69();
  if ((iVar1 != 0) && (*(code **)(iVar1 + 0x3c) != (code *)0x0)) {
    (**(code **)(iVar1 + 0x3c))(1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x1000cb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage();
  return;
}



/**************************************************/

/* Function: DevModeChange @ 1000cb95 */

/* Library Function - Single Match
    public: void __thiscall CWinApp::DevModeChange(char *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWinApp::DevModeChange(CWinApp *this,char *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  BOOL BVar3;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  PDEVMODEA pDevModeOutput;
  LONG LVar4;
  CWinApp *local_8;
  
  if (*(HGLOBAL *)(this + 0x74) != (HGLOBAL)0x0) {
    local_8 = this;
    pvVar1 = GlobalLock(*(HGLOBAL *)(this + 0x74));
    iVar2 = lstrcmpA((LPCSTR)((uint)*(ushort *)((int)pvVar1 + 2) + (int)pvVar1),param_1);
    if ((iVar2 == 0) &&
       (BVar3 = OpenPrinterA(param_1,&local_8,(LPPRINTER_DEFAULTSA)0x0), BVar3 != 0)) {
      if (*(void **)(this + 0x70) != (void *)0x0) {
        AfxGlobalFree(*(void **)(this + 0x70));
      }
      dwBytes = DocumentPropertiesA((HWND)0x0,local_8,param_1,(PDEVMODEA)0x0,(PDEVMODEA)0x0,0);
      hMem = GlobalAlloc(0x42,dwBytes);
      *(HGLOBAL *)(this + 0x70) = hMem;
      pDevModeOutput = GlobalLock(hMem);
      LVar4 = DocumentPropertiesA((HWND)0x0,local_8,param_1,pDevModeOutput,(PDEVMODEA)0x0,2);
      if (LVar4 != 1) {
        AfxGlobalFree(*(void **)(this + 0x70));
        *(undefined4 *)(this + 0x70) = 0;
      }
      ClosePrinter(local_8);
    }
  }
  return;
}



/**************************************************/

/* Function: AfxOleCanExitApp @ 1000cc33 */

/* Library Function - Single Match
    int __stdcall AfxOleCanExitApp(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int AfxOleCanExitApp(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  return (uint)(*(int *)(pAVar1 + 0x2c) == 0);
}



/**************************************************/

/* Function: AfxOleLockApp @ 1000cc43 */

/* Library Function - Single Match
    void __stdcall AfxOleLockApp(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void AfxOleLockApp(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  InterlockedIncrement((LONG *)(pAVar1 + 0x2c));
  return;
}



/**************************************************/

/* Function: AfxOleSetUserCtrl @ 1000cc53 */

/* Library Function - Single Match
    void __stdcall AfxOleSetUserCtrl(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void AfxOleSetUserCtrl(int param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  *(int *)(pAVar1 + 0x30) = param_1;
  return;
}



/**************************************************/

/* Function: AfxOleOnReleaseAllObjects @ 1000cc62 */

/* Library Function - Single Match
    void __stdcall AfxOleOnReleaseAllObjects(void)
   
   Library: Visual Studio 2005 Release */

void AfxOleOnReleaseAllObjects(void)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  
  pAVar2 = AfxGetModuleState();
  if (*(int *)(pAVar2 + 0x30) == 0) {
    AfxOleSetUserCtrl(1);
    pAVar2 = AfxGetModuleState();
    iVar1 = *(int *)(pAVar2 + 4);
    if ((iVar1 == 0) || (*(CWnd **)(iVar1 + 0x20) == (CWnd *)0x0)) {
      pAVar2 = AfxGetModuleState();
      if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
        AfxPostQuitMessage(0);
      }
    }
    else {
      iVar3 = CWnd::IsWindowEnabled(*(CWnd **)(iVar1 + 0x20));
      if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000cc97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(iVar1 + 0x20) + 0x60))();
        return;
      }
    }
  }
  return;
}



/**************************************************/

/* Function: AfxOleUnlockApp @ 1000ccae */

/* Library Function - Single Match
    void __stdcall AfxOleUnlockApp(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

void AfxOleUnlockApp(void)

{
  AFX_MODULE_STATE *pAVar1;
  LONG LVar2;
  
  pAVar1 = AfxGetModuleState();
  LVar2 = InterlockedDecrement((LONG *)(pAVar1 + 0x2c));
  if (LVar2 == 0) {
    AfxOleOnReleaseAllObjects();
    return;
  }
  return;
}



/**************************************************/

/* Function: _AfxInitDBCS @ 1000ccc7 */

/* Library Function - Single Match
    int __stdcall _AfxInitDBCS(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

int _AfxInitDBCS(void)

{
  UINT CodePage;
  int iVar1;
  _cpinfo *lpCPInfo;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  lpCPInfo = &local_1c;
  CodePage = GetOEMCP();
  GetCPInfo(CodePage,lpCPInfo);
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}



/**************************************************/

/* Function: ClosePrinter @ 1000ccfe */

BOOL ClosePrinter(HANDLE hPrinter)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ccfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClosePrinter(hPrinter);
  return BVar1;
}



/**************************************************/

/* Function: DocumentPropertiesA @ 1000cd04 */

LONG DocumentPropertiesA(HWND hWnd,HANDLE hPrinter,LPSTR pDeviceName,PDEVMODEA pDevModeOutput,
                        PDEVMODEA pDevModeInput,DWORD fMode)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000cd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DocumentPropertiesA(hWnd,hPrinter,pDeviceName,pDevModeOutput,pDevModeInput,fMode);
  return LVar1;
}



/**************************************************/

/* Function: OpenPrinterA @ 1000cd0a */

BOOL OpenPrinterA(LPSTR pPrinterName,LPHANDLE phPrinter,LPPRINTER_DEFAULTSA pDefault)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000cd0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenPrinterA(pPrinterName,phPrinter,pDefault);
  return BVar1;
}



/**************************************************/

/* Function: xtoa_s @ 1000cd10 */

/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2005 Release
   __stdcall xtoa_s,20 */

DWORD xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  DWORD *pDVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  DWORD DVar7;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    pDVar3 = FUN_1000e777();
    *pDVar3 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_1000cd42:
    pDVar3 = FUN_1000e777();
    DVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_1000cd42;
      pcVar6 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar6 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar2 = pcVar6;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        local_8 = local_8 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar6;
          pcVar4 = pcVar4 + -1;
          *pcVar6 = cVar5;
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    pDVar3 = FUN_1000e777();
    DVar7 = 0x22;
  }
  *pDVar3 = DVar7;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return DVar7;
}



/**************************************************/

/* Function: __itoa_s @ 1000cdeb */

/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  DWORD DVar1;
  int iVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar2 = 1;
    _Radix = 10;
  }
  else {
    iVar2 = 0;
  }
  DVar1 = xtoa_s(_Size,_Radix,iVar2);
  return DVar1;
}



/**************************************************/

/* Function: _strcat_s @ 1000ce13 */

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        pDVar2 = FUN_1000e777();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_1000ce32;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1000e777();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000ce32:
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _memset @ 1000ce90 */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_1002b800 != 0)) {
    pauVar2 = __VEC_memzero(_Dst,_Val,_Size);
    return pauVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/**************************************************/

/* Function: _free @ 1000cf0a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_1002b7f8 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1001110b(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000cf60();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10029bd0,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1000e777();
      DVar4 = GetLastError();
      DVar4 = FUN_1000e73c(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1000cf60 @ 1000cf60 */

void FUN_1000cf60(void)

{
  FUN_10010f96(4);
  return;
}



/**************************************************/

/* Function: _strncpy_s @ 1000cf98 */

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_1000cfbc:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar4 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          pDVar2 = FUN_1000e777();
          eVar5 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_1000cfcd;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_1000cfbc;
  pDVar2 = FUN_1000e777();
  eVar5 = 0x16;
  *pDVar2 = 0x16;
LAB_1000cfcd:
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: _V6_HeapAlloc @ 1000d04b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_1002b7e8) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1000d091();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000d091 @ 1000d091 */

void FUN_1000d091(void)

{
  FUN_10010f96(4);
  return;
}



/**************************************************/

/* Function: _malloc @ 1000d09a */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    pDVar3 = FUN_1000e777();
    *pDVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_10029bd0 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_10011b9e(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_1002b7f8 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_1000d10b:
      piVar1 = HeapAlloc(DAT_10029bd0,0,dwBytes);
    }
    else if ((DAT_1002b7f8 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_1000d10b;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1002a048 == 0) {
      pDVar3 = FUN_1000e777();
      *pDVar3 = 0xc;
      goto LAB_1000d139;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_1000d139:
      pDVar3 = FUN_1000e777();
      *pDVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: _strcpy_s @ 1000d15d */

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      pDVar2 = FUN_1000e777();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000d17c;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1000e777();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000d17c:
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strcmp @ 1000d1d0 */

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_1000d214;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000d1e0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1000d214;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1000d214;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000d1e0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_1000d214:
  return (uint)bVar5 * -2 + 1;
}



/**************************************************/

/* Function: _strlen @ 1000d260 */

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_1000d290;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1000d2c3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1000d290:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_1000d2c3;
}



/**************************************************/

/* Function: _strstr @ 1000d2f0 */

/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2019 */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*_SubStr == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    puVar4 = FUN_10011dc6((uint *)_Str);
    return (char *)puVar4;
  }
  do {
    cVar3 = *_Str;
    do {
      while (_Str = _Str + 1, cVar3 != *_SubStr) {
        if (cVar3 == '\0') {
          return (char *)0x0;
        }
        cVar3 = *_Str;
      }
      cVar3 = *_Str;
      pcVar6 = _Str + 1;
      pcVar5 = _SubStr;
    } while (cVar3 != _SubStr[1]);
    do {
      if (pcVar5[2] == '\0') {
LAB_1000d369:
        return _Str + -1;
      }
      if (*pcVar6 != pcVar5[2]) break;
      pcVar1 = pcVar5 + 3;
      if (*pcVar1 == '\0') goto LAB_1000d369;
      pcVar2 = pcVar6 + 1;
      pcVar5 = pcVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/**************************************************/

/* Function: __security_check_cookie @ 1000d376 */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_1002696c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/**************************************************/

/* Function: __freea @ 1000d385 */

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2005 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}



/**************************************************/

/* Function: _LocaleUpdate @ 1000d3a0 */

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_100272f8) && ((p_Var2->_ownlocale & DAT_10027214) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10027118) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10027214) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}



/**************************************************/

/* Function: _strupr_s_l_stat @ 1000d422 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _strupr_s_l_stat(char *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

int __cdecl _strupr_s_l_stat(char *param_1,uint param_2,localeinfo_struct *param_3)

{
  char cVar1;
  LPCWSTR _LocaleName;
  uint uVar2;
  DWORD *pDVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  char *unaff_EDI;
  DWORD DVar7;
  char *local_c;
  
  uVar2 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  if (unaff_EDI == (char *)0x0) {
LAB_1000d43a:
    pDVar3 = FUN_1000e777();
    DVar7 = 0x16;
  }
  else {
    pcVar4 = (char *)_strnlen(unaff_EDI,(size_t)param_1);
    if (param_1 <= pcVar4) {
      *unaff_EDI = '\0';
      goto LAB_1000d43a;
    }
    _LocaleName = *(LPCWSTR *)(*(int *)param_2 + 0x14);
    if (_LocaleName == (LPCWSTR)0x0) {
      cVar1 = *unaff_EDI;
      while (cVar1 != '\0') {
        cVar1 = *unaff_EDI;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *unaff_EDI = cVar1 + -0x20;
        }
        unaff_EDI = unaff_EDI + 1;
        cVar1 = *unaff_EDI;
      }
      goto LAB_1000d58d;
    }
    pcVar4 = (char *)___crtLCMapStringA((_locale_t)param_2,_LocaleName,0x200,unaff_EDI,-1,(LPSTR)0x0
                                        ,0,*(int *)(*(int *)param_2 + 4),1);
    if (pcVar4 == (char *)0x0) {
      pDVar3 = FUN_1000e777();
      *pDVar3 = 0x2a;
LAB_1000d4c4:
      FUN_1000e777();
      goto LAB_1000d58d;
    }
    if (pcVar4 <= param_1) {
      if (((int)pcVar4 < 1) || (0xffffffe0U / (uint)pcVar4 == 0)) {
        local_c = (char *)0x0;
      }
      else if (pcVar4 + 8 < (char *)0x401) {
        puVar5 = (undefined4 *)&stack0xffffffe8;
        local_c = &stack0xffffffe8;
        if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1000d521:
          local_c = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc((size_t)(pcVar4 + 8));
        local_c = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_1000d521;
        }
      }
      if (local_c != (char *)0x0) {
        iVar6 = ___crtLCMapStringA((_locale_t)param_2,*(LPCWSTR *)(*(int *)param_2 + 0x14),0x200,
                                   unaff_EDI,-1,local_c,(int)pcVar4,*(int *)(*(int *)param_2 + 4),1)
        ;
        if (iVar6 == 0) {
          pDVar3 = FUN_1000e777();
          *pDVar3 = 0x2a;
        }
        else {
          _strcpy_s(unaff_EDI,(rsize_t)param_1,local_c);
        }
        __freea(local_c);
        goto LAB_1000d58d;
      }
      pDVar3 = FUN_1000e777();
      *pDVar3 = 0xc;
      goto LAB_1000d4c4;
    }
    *unaff_EDI = '\0';
    pDVar3 = FUN_1000e777();
    DVar7 = 0x22;
  }
  *pDVar3 = DVar7;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1000d58d:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}



/**************************************************/

/* Function: __strupr_s_l @ 1000d59e */

/* Library Function - Single Match
    __strupr_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __strupr_s_l(char *_Str,size_t _Size,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct *unaff_EDI;
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  iVar1 = _strupr_s_l_stat((char *)_Size,(uint)local_14,unaff_EDI);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/**************************************************/

/* Function: __strupr_s @ 1000d5d1 */

/* Library Function - Single Match
    __strupr_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __strupr_s(char *_Str,size_t _Size)

{
  errno_t eVar1;
  
  eVar1 = __strupr_s_l(_Str,_Size,(_locale_t)0x0);
  return eVar1;
}



/**************************************************/

/* Function: _realloc @ 1000d5e4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  void *this;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_1002b7f8 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000d7bd;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1001110b(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_1002b7e8) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1001110b(this,(int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_10029bd0,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_1000d728();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_10029bd0,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_1002a048 == 0) {
        pDVar4 = FUN_1000e777();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1000d7ea;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1000e777();
    if (local_24 != (uint *)0x0) goto LAB_1000d7c9;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000d7bd;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_10029bd0,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_1002a048 == 0) {
        pDVar4 = FUN_1000e777();
LAB_1000d7ea:
        DVar5 = GetLastError();
        DVar5 = FUN_1000e73c(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1000e777();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_1000e73c(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_1000d7bd:
  __callnewh(_NewSize);
  pDVar4 = FUN_1000e777();
LAB_1000d7c9:
  *pDVar4 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1000d728 @ 1000d728 */

void FUN_1000d728(void)

{
  FUN_10010f96(4);
  return;
}



/**************************************************/

/* Function: ~type_info @ 1000d7ff */

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}



/**************************************************/

/* Function: `scalar_deleting_destructor' @ 1000d80d */

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: operator== @ 1000d829 */

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}



/**************************************************/

/* Function: __calloc_impl @ 1000d844 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  DWORD *pDVar1;
  int iVar2;
  uint *_Size;
  int *_Dst;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      _Dst = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_1002b7f8 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_1002b7e8)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_1000d940();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_1000d8f5;
          }
        }
        else {
LAB_1000d8f5:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_10029bd0,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_1002a048 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0xc;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: FUN_1000d940 @ 1000d940 */

void FUN_1000d940(void)

{
  FUN_10010f96(4);
  return;
}



/**************************************************/

/* Function: _memcpy_s @ 1000d962 */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  DWORD *pDVar2;
  
  if (_MaxCount == 0) {
LAB_1000d970:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_1000d979:
      pDVar2 = FUN_1000e777();
      eVar1 = 0x16;
      *pDVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_1000d970;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_1000d979;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      pDVar2 = FUN_1000e777();
      eVar1 = 0x22;
      *pDVar2 = 0x22;
    }
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}



/**************************************************/

/* Function: _memmove_s @ 1000d9dd */

/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  DWORD *pDVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_1000da32:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      pDVar1 = FUN_1000e777();
      eVar2 = 0x16;
      *pDVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_1000da32;
      }
      pDVar1 = FUN_1000e777();
      eVar2 = 0x22;
      *pDVar1 = 0x22;
    }
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar2;
}



/**************************************************/

/* Function: _strlwr_s_l_stat @ 1000da38 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _strlwr_s_l_stat(char *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

int __cdecl _strlwr_s_l_stat(char *param_1,uint param_2,localeinfo_struct *param_3)

{
  char cVar1;
  LPCWSTR _LocaleName;
  uint uVar2;
  DWORD *pDVar3;
  size_t sVar4;
  uint _CchDest;
  undefined4 *puVar5;
  int iVar6;
  DWORD DVar7;
  char *local_c;
  
  uVar2 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  if (param_1 == (char *)0x0) {
LAB_1000da54:
    pDVar3 = FUN_1000e777();
    DVar7 = 0x16;
  }
  else {
    sVar4 = _strnlen(param_1,param_2);
    if (param_2 <= sVar4) {
      *param_1 = '\0';
      goto LAB_1000da54;
    }
    _LocaleName = param_3->locinfo->lc_category[0].wlocale;
    if (_LocaleName == (LPCWSTR)0x0) {
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        cVar1 = *param_1;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *param_1 = cVar1 + ' ';
        }
        param_1 = param_1 + 1;
        cVar1 = *param_1;
      }
      goto LAB_1000dba7;
    }
    _CchDest = ___crtLCMapStringA(param_3,_LocaleName,0x100,param_1,-1,(LPSTR)0x0,0,
                                  param_3->locinfo->lc_codepage,1);
    if (_CchDest == 0) {
      pDVar3 = FUN_1000e777();
      *pDVar3 = 0x2a;
LAB_1000dade:
      FUN_1000e777();
      goto LAB_1000dba7;
    }
    if (_CchDest <= param_2) {
      if (((int)_CchDest < 1) || (0xffffffe0 / _CchDest == 0)) {
        local_c = (char *)0x0;
      }
      else if (_CchDest + 8 < 0x401) {
        puVar5 = (undefined4 *)&stack0xffffffe4;
        local_c = &stack0xffffffe4;
        if (&stack0x00000000 != (undefined1 *)0x1c) {
LAB_1000db3b:
          local_c = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_CchDest + 8);
        local_c = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_1000db3b;
        }
      }
      if (local_c != (char *)0x0) {
        iVar6 = ___crtLCMapStringA(param_3,param_3->locinfo->lc_category[0].wlocale,0x100,param_1,-1
                                   ,local_c,_CchDest,param_3->locinfo->lc_codepage,1);
        if (iVar6 == 0) {
          pDVar3 = FUN_1000e777();
          *pDVar3 = 0x2a;
        }
        else {
          _strcpy_s(param_1,param_2,local_c);
        }
        __freea(local_c);
        goto LAB_1000dba7;
      }
      pDVar3 = FUN_1000e777();
      *pDVar3 = 0xc;
      goto LAB_1000dade;
    }
    *param_1 = '\0';
    pDVar3 = FUN_1000e777();
    DVar7 = 0x22;
  }
  *pDVar3 = DVar7;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1000dba7:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}



/**************************************************/

/* Function: __strlwr_s_l @ 1000dbb9 */

/* Library Function - Single Match
    __strlwr_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __strlwr_s_l(char *_Str,size_t _Size,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  iVar1 = _strlwr_s_l_stat(_Str,_Size,&local_14);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/**************************************************/

/* Function: __strlwr_s @ 1000dbeb */

/* Library Function - Single Match
    __strlwr_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __strlwr_s(char *_Str,size_t _Size)

{
  errno_t eVar1;
  
  eVar1 = __strlwr_s_l(_Str,_Size,(_locale_t)0x0);
  return eVar1;
}



/**************************************************/

/* Function: __CRT_INIT@12 @ 1000dbfe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2005 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  LPOSVERSIONINFOA lpVersionInformation;
  BOOL BVar5;
  int iVar6;
  DWORD *_Memory;
  code *pcVar7;
  uint uVar8;
  DWORD DVar9;
  undefined4 uVar10;
  SIZE_T dwBytes;
  DWORD *pDVar11;
  
  if (param_2 == 1) {
    dwBytes = 0x94;
    DVar9 = 0;
    pvVar4 = GetProcessHeap();
    lpVersionInformation = HeapAlloc(pvVar4,DVar9,dwBytes);
    if (lpVersionInformation != (LPOSVERSIONINFOA)0x0) {
      lpVersionInformation->dwOSVersionInfoSize = 0x94;
      BVar5 = GetVersionExA(lpVersionInformation);
      DVar9 = 0;
      if (BVar5 == 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
      }
      else {
        DVar1 = lpVersionInformation->dwPlatformId;
        DVar2 = lpVersionInformation->dwMajorVersion;
        DVar3 = lpVersionInformation->dwMinorVersion;
        uVar8 = lpVersionInformation->dwBuildNumber & 0x7fff;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
        if (DVar1 != 2) {
          uVar8 = uVar8 | 0x8000;
        }
        _DAT_10029b90 = DVar2 * 0x100 + DVar3;
        DAT_10029b88 = DVar1;
        _DAT_10029b8c = uVar8;
        DAT_10029b94 = DVar2;
        _DAT_10029b98 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_1002b818 = GetCommandLineA();
            DAT_10029b6c = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_10029b68 = DAT_10029b68 + 1;
                return 1;
              }
              __ioterm();
            }
            __mtterm();
          }
          __heap_term();
        }
      }
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_10029b68) {
      DAT_10029b68 = DAT_10029b68 + -1;
      if (DAT_10029bc4 == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 1;
      }
      __freeptd((_ptiddata)0x0);
      return 1;
    }
    FUN_10012a9f();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_10027308;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_10012a28(DAT_1002a3bc);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_10012b0e((int)_Memory,0);
        DVar9 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar9;
        return 1;
      }
      _free(_Memory);
    }
  }
  return 0;
}



/**************************************************/

/* Function: ___DllMainCRTStartup @ 1000ddd7 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,HINSTANCE__ *param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_10029b68 == 0)) {
LAB_1000dec5:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_1001f570 != (undefined *)0x0) {
        local_20 = (*(code *)PTR_1001f570)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_1000dec5;
    }
    local_20 = _DllMain_12(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      _DllMain_12(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (PTR_1001f570 != (undefined *)0x0) {
        (*(code *)PTR_1001f570)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (PTR_1001f570 != (undefined *)0x0)) {
        local_20 = (*(code *)PTR_1001f570)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/**************************************************/

/* Function: entry @ 1000decd */

void entry(HINSTANCE__ *param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000deee @ 1000deee */

int __cdecl FUN_1000deee(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_10012a28(DAT_1002b80c);
  piVar2 = (int *)FUN_10012a28(DAT_1002b808);
  if (_Memory <= piVar2) {
    uVar1 = ((int)piVar2 - (int)_Memory) + 4;
    if (3 < uVar1) {
      sVar3 = __msize(_Memory);
      if (sVar3 < uVar1) {
        sVar4 = 0x800;
        if (sVar3 < 0x800) {
          sVar4 = sVar3;
        }
        if ((sVar4 + sVar3 < sVar3) ||
           (pvVar5 = __realloc_crt(_Memory,sVar4 + sVar3), pvVar5 == (void *)0x0)) {
          if (sVar3 + 0x10 < sVar3) {
            return 0;
          }
          pvVar5 = __realloc_crt(_Memory,sVar3 + 0x10);
          if (pvVar5 == (void *)0x0) {
            return 0;
          }
        }
        piVar2 = (int *)((int)pvVar5 + ((int)piVar2 - (int)_Memory >> 2) * 4);
        DAT_1002b80c = FUN_100129b1((int)pvVar5);
      }
      iVar6 = FUN_100129b1(param_1);
      *piVar2 = iVar6;
      DAT_1002b808 = FUN_100129b1((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __onexit @ 1000dfd6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_10010840();
  p_Var1 = (_onexit_t)FUN_1000deee((int)_Func);
  FUN_1000e00c();
  return p_Var1;
}



/**************************************************/

/* Function: FUN_1000e00c @ 1000e00c */

void FUN_1000e00c(void)

{
  FUN_10010849();
  return;
}



/**************************************************/

/* Function: _atexit @ 1000e012 */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/**************************************************/

/* Function: __CxxThrowException@8 @ 1000e024 */

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2005 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_1001f574;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}



/**************************************************/

/* Function: _JumpToContinuation @ 1000e06e */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000e097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/**************************************************/

/* Function: FID_conflict:_CallMemberFunction1 @ 1000e09e */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000e0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _UnwindNestedFrames @ 1000e0a5 */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000e0ce,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/**************************************************/

/* Function: FID_conflict:___CxxFrameHandler3 @ 1000e0f7 */

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}



/**************************************************/

/* Function: _CallSETranslator @ 1000e15d */

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  int local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x1000e206;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_1002696c ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}



/**************************************************/

/* Function: TranslatorGuardHandler @ 1000e232 */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1000e2c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/**************************************************/

/* Function: _GetRangeOfTrysToCheck @ 1000e2cf */

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}



/**************************************************/

/* Function: __CreateFrameInfo @ 1000e342 */

/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}



/**************************************************/

/* Function: __IsExceptionObjectToBeDestroyed @ 1000e36a */

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}



/**************************************************/

/* Function: __FindAndUnlinkFrame @ 1000e38b */

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2005 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pvVar1 = p_Var2->_pFrameInfoChain;
  do {
    pvVar3 = pvVar1;
    if (*(int *)((int)pvVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pvVar1 = *(void **)((int)pvVar3 + 4);
  } while (param_1 != *(void **)((int)pvVar3 + 4));
  *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
  return;
}



/**************************************************/

/* Function: _CallCatchBlock2 @ 1000e3d7 */

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_1002696c ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1000e12d;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/**************************************************/

/* Function: __EH_prolog3 @ 1000e435 */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1002696c ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __EH_prolog3_catch @ 1000e468 */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1002696c ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __EH_prolog3_GS @ 1000e49e */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_GS
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_GS(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1002696c ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __EH_epilog3 @ 1000e4d4 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}



/**************************************************/

/* Function: FUN_1000e4e8 @ 1000e4e8 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_1000e4e8(void)

{
  uint unaff_EBP;
  
  __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
  return;
}



/**************************************************/

/* Function: __mbsnbcpy_s @ 1000e4f7 */

/* Library Function - Single Match
    __mbsnbcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __mbsnbcpy_s(uchar *_Dst,size_t _SizeInBytes,uchar *_Src,size_t _MaxCount)

{
  errno_t eVar1;
  
  eVar1 = __mbsnbcpy_s_l(_Dst,_SizeInBytes,_Src,_MaxCount,(_locale_t)0x0);
  return eVar1;
}



/**************************************************/

/* Function: __except_handler4 @ 1000e570 */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_1002696c);
  bVar3 = false;
  local_c = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_8 = param_1;
    local_4 = param_3;
    *(int ***)((int)param_2 + -4) = &local_8;
    uVar7 = *(uint *)((int)param_2 + 0xc);
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return 1;
    }
    do {
      uVar2 = piVar8[uVar7 * 3 + 4];
      if ((undefined *)piVar8[uVar7 * 3 + 5] != (undefined *)0x0) {
        iVar4 = _EH4_CallFilterFunc((undefined *)piVar8[uVar7 * 3 + 5]);
        bVar3 = true;
        if (iVar4 < 0) {
          local_c = 0;
          goto LAB_1000e61b;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_1001fc74 != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1001fc74)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_1001fc74)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_1002696c);
          }
          *(uint *)((int)param_2 + 0xc) = uVar2;
          if (*piVar8 != -2) {
            __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
          }
          __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
          uVar6 = _EH4_TransferToHandler((undefined *)(piVar8 + uVar7 * 3 + 4)[2]);
          return uVar6;
        }
      }
      uVar7 = uVar2;
    } while (uVar2 != 0xfffffffe);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return 1;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_1002696c);
  }
LAB_1000e61b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/**************************************************/

/* Function: __alloca_probe_16 @ 1000e710 */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2005 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/**************************************************/

/* Function: __alloca_probe_8 @ 1000e726 */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/**************************************************/

/* Function: FUN_1000e73c @ 1000e73c */

int __cdecl FUN_1000e73c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10026980)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x10026984);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_1000e777 @ 1000e777 */

DWORD * FUN_1000e777(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10012bcd();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10026ae8;
  }
  return pDVar1 + 2;
}



/**************************************************/

/* Function: FUN_1000e78a @ 1000e78a */

DWORD * FUN_1000e78a(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10012bcd();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10026aec;
  }
  return pDVar1 + 3;
}



/**************************************************/

/* Function: FUN_1000e79d @ 1000e79d */

void __cdecl FUN_1000e79d(DWORD param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  pDVar1 = FUN_1000e78a();
  *pDVar1 = param_1;
  DVar2 = FUN_1000e73c(param_1);
  pDVar1 = FUN_1000e777();
  *pDVar1 = DVar2;
  return;
}



/**************************************************/

/* Function: __msize @ 1000e7bb */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __msize(void *_Memory)

{
  DWORD *pDVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_1002b7f8 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_1001110b(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_1000e855();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_10029bd0,0,_Memory);
  }
  return sVar2;
}



/**************************************************/

/* Function: FUN_1000e855 @ 1000e855 */

void FUN_1000e855(void)

{
  FUN_10010f96(4);
  return;
}



/**************************************************/

/* Function: __mbsspn_l @ 1000e85e */

/* Library Function - Single Match
    __mbsspn_l
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __mbsspn_l(uchar *_Str,uchar *_Control,_locale_t _Locale)

{
  byte bVar1;
  size_t sVar2;
  DWORD *pDVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (*(int *)(local_10 + 8) == 0) {
    sVar2 = _strspn((char *)_Str,(char *)_Control);
  }
  else {
    if ((_Str == (uchar *)0x0) || (_Control == (uchar *)0x0)) {
      pDVar3 = FUN_1000e777();
      *pDVar3 = 0x16;
      FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 0;
    }
    pbVar4 = _Str;
    pbVar6 = _Control;
    if (*_Str != '\0') {
LAB_1000e8f3:
      do {
        if (*pbVar6 != 0) {
          bVar1 = *pbVar6;
          if ((*(byte *)(bVar1 + 0x1d + local_10) & 4) == 0) {
            pbVar5 = pbVar6;
            if (bVar1 != *pbVar4) goto LAB_1000e8f2;
          }
          else if (((bVar1 != *pbVar4) || (pbVar6[1] != pbVar4[1])) &&
                  (pbVar5 = pbVar6 + 1, *pbVar5 != 0)) {
LAB_1000e8f2:
            pbVar6 = pbVar5 + 1;
            goto LAB_1000e8f3;
          }
        }
        if (((*pbVar6 == 0) ||
            (((*(byte *)(*pbVar4 + 0x1d + local_10) & 4) != 0 && (pbVar4 = pbVar4 + 1, *pbVar4 == 0)
             ))) || (pbVar4 = pbVar4 + 1, pbVar6 = _Control, *pbVar4 == 0)) break;
      } while( true );
    }
    sVar2 = (int)pbVar4 - (int)_Str;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return sVar2;
}



/**************************************************/

/* Function: __mbsspn @ 1000e923 */

/* Library Function - Single Match
    __mbsspn
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __mbsspn(uchar *_Str,uchar *_Control)

{
  size_t sVar1;
  
  sVar1 = __mbsspn_l(_Str,_Control,(_locale_t)0x0);
  return sVar1;
}



/**************************************************/

/* Function: __mbscspn_l @ 1000e936 */

/* Library Function - Single Match
    __mbscspn_l
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __mbscspn_l(uchar *_Str,uchar *_Control,_locale_t _Locale)

{
  byte bVar1;
  size_t sVar2;
  DWORD *pDVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (*(int *)(local_10 + 8) == 0) {
    sVar2 = _strcspn((char *)_Str,(char *)_Control);
  }
  else {
    if ((_Str == (uchar *)0x0) || (_Control == (uchar *)0x0)) {
      pDVar3 = FUN_1000e777();
      *pDVar3 = 0x16;
      FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 0;
    }
    pbVar4 = _Str;
    pbVar6 = _Control;
    if (*_Str != '\0') {
LAB_1000e9cb:
      do {
        if (*pbVar6 != 0) {
          bVar1 = *pbVar6;
          if ((*(byte *)(bVar1 + 0x1d + local_10) & 4) == 0) {
            pbVar5 = pbVar6;
            if (bVar1 != *pbVar4) goto LAB_1000e9ca;
          }
          else if (((bVar1 != *pbVar4) || (pbVar6[1] != pbVar4[1])) &&
                  (pbVar5 = pbVar6 + 1, *pbVar5 != 0)) {
LAB_1000e9ca:
            pbVar6 = pbVar5 + 1;
            goto LAB_1000e9cb;
          }
        }
        if (((*pbVar6 != 0) ||
            (((*(byte *)(*pbVar4 + 0x1d + local_10) & 4) != 0 && (pbVar4 = pbVar4 + 1, *pbVar4 == 0)
             ))) || (pbVar4 = pbVar4 + 1, pbVar6 = _Control, *pbVar4 == 0)) break;
      } while( true );
    }
    sVar2 = (int)pbVar4 - (int)_Str;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return sVar2;
}



/**************************************************/

/* Function: __mbscspn @ 1000e9fb */

/* Library Function - Single Match
    __mbscspn
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __mbscspn(uchar *_Str,uchar *_Control)

{
  size_t sVar1;
  
  sVar1 = __mbscspn_l(_Str,_Control,(_locale_t)0x0);
  return sVar1;
}



/**************************************************/

/* Function: __strdup @ 1000ea0e */

/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2005 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = _malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}



/**************************************************/

/* Function: __SEH_prolog4 @ 1000ea60 */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1002696c ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 1000eaa5 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



/**************************************************/

/* Function: _memcmp @ 1000eab9 */

/* Library Function - Single Match
    _memcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
LAB_10010010:
    if (uVar2 == uVar3) {
      return 0;
    }
    return (uint)(0 < (int)(uVar2 - uVar3)) * 2 + -1;
  }
  if (_Size == 2) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_10010010;
  }
  if (_Size == 3) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_10010010;
  }
  if (_Size == 4) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_10010010;
  }
  for (; 0x1f < _Size; _Size = _Size - 0x20) {
    if (*(int *)_Buf1 == *(int *)_Buf2) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)_Buf1;
      uVar2 = (uint)*(byte *)_Buf2;
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 1);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 1);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 2);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 2);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 3) != (uint)*(byte *)((int)_Buf2 + 3)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 3) - (uint)*(byte *)((int)_Buf2 + 3)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 4) == *(int *)((int)_Buf2 + 4)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 4);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 4);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 5);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 5);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 6);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 6);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 7) != (uint)*(byte *)((int)_Buf2 + 7)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 7) - (uint)*(byte *)((int)_Buf2 + 7)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 8) == *(int *)((int)_Buf2 + 8)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 8);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 8);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 9);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 9);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 10);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xb) != (uint)*(byte *)((int)_Buf2 + 0xb)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xb) -
                                (uint)*(byte *)((int)_Buf2 + 0xb))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0xc) == *(int *)((int)_Buf2 + 0xc)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xc);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xc);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xd);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xd);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xe);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xe);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xf) != (uint)*(byte *)((int)_Buf2 + 0xf)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xf) -
                                (uint)*(byte *)((int)_Buf2 + 0xf))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x10) == *(int *)((int)_Buf2 + 0x10)) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x10);
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x11);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x11);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x12);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x12);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x13) != (uint)*(byte *)((int)_Buf2 + 0x13)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x13) -
                                (uint)*(byte *)((int)_Buf2 + 0x13))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x14) == *(int *)((int)_Buf2 + 0x14)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x14);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x14);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x15);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x15);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x16);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x16);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x17) != (uint)*(byte *)((int)_Buf2 + 0x17)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x17) -
                                (uint)*(byte *)((int)_Buf2 + 0x17))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x18) == *(int *)((int)_Buf2 + 0x18)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x18);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x18);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x19);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x19);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1a);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1a);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1b) != (uint)*(byte *)((int)_Buf2 + 0x1b)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1b) -
                                (uint)*(byte *)((int)_Buf2 + 0x1b))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x1c) == *(int *)((int)_Buf2 + 0x1c)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1c);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1c);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1d);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1d);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1e);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1e);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1f) != (uint)*(byte *)((int)_Buf2 + 0x1f)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1f) -
                                (uint)*(byte *)((int)_Buf2 + 0x1f))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    _Buf1 = (void *)((int)_Buf1 + 0x20);
    _Buf2 = (void *)((int)_Buf2 + 0x20);
  }
  switch(_Size) {
  default:
    goto switchD_1000ef7e_caseD_0;
  case 1:
    goto switchD_1000ef7e_caseD_1;
  case 2:
    goto switchD_1000ef7e_caseD_2;
  case 3:
    goto switchD_1000ef7e_caseD_3;
  case 4:
    goto switchD_1000ef7e_caseD_4;
  case 5:
    goto switchD_1000ef7e_caseD_5;
  case 6:
    goto switchD_1000ef7e_caseD_6;
  case 7:
    goto switchD_1000ef7e_caseD_7;
  case 8:
    goto switchD_1000ef7e_caseD_8;
  case 9:
    goto switchD_1000ef7e_caseD_9;
  case 10:
    goto switchD_1000ef7e_caseD_a;
  case 0xb:
    goto switchD_1000ef7e_caseD_b;
  case 0xc:
    goto switchD_1000ef7e_caseD_c;
  case 0xd:
    goto switchD_1000ef7e_caseD_d;
  case 0xe:
    goto switchD_1000ef7e_caseD_e;
  case 0xf:
    goto switchD_1000ef7e_caseD_f;
  case 0x10:
    goto switchD_1000ef7e_caseD_10;
  case 0x11:
    goto switchD_1000ef7e_caseD_11;
  case 0x12:
    goto switchD_1000ef7e_caseD_12;
  case 0x13:
    goto switchD_1000ef7e_caseD_13;
  case 0x14:
    goto switchD_1000ef7e_caseD_14;
  case 0x15:
    goto switchD_1000ef7e_caseD_15;
  case 0x16:
    goto switchD_1000ef7e_caseD_16;
  case 0x17:
    goto switchD_1000ef7e_caseD_17;
  case 0x18:
    goto switchD_1000ef7e_caseD_18;
  case 0x1a:
    goto switchD_1000ef7e_caseD_1a;
  case 0x1b:
    goto switchD_1000ef7e_caseD_1b;
  case 0x1c:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1c)) == *(uint *)((int)_Buf2 + (_Size - 0x1c))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1c)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x19))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x19)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_18:
    if (*(uint *)((int)_Buf1 + (_Size - 0x18)) == *(uint *)((int)_Buf2 + (_Size - 0x18))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x18)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x15))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x15)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_14:
    if (*(uint *)((int)_Buf1 + (_Size - 0x14)) == *(uint *)((int)_Buf2 + (_Size - 0x14))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x14)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x11))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x11)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_10:
    if (*(uint *)((int)_Buf1 + (_Size - 0x10)) == *(uint *)((int)_Buf2 + (_Size - 0x10))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x10)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xd))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xd)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_c:
    if (*(int *)((int)_Buf1 + (_Size - 0xc)) == *(int *)((int)_Buf2 + (_Size - 0xc))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 9)) != (uint)*(byte *)((int)_Buf2 + (_Size - 9))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 9)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 9)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_8:
    if (*(uint *)((int)_Buf1 + (_Size - 8)) == *(uint *)((int)_Buf2 + (_Size - 8))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 8)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 5)) != (uint)*(byte *)((int)_Buf2 + (_Size - 5))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 5)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 5)))) * 2 + -1;
      }
    }
    if (iVar1 == 0) {
switchD_1000ef7e_caseD_4:
      if (*(uint *)((int)_Buf1 + (_Size - 4)) == *(uint *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = 0;
      }
      else {
        uVar3 = *(uint *)((int)_Buf1 + (_Size - 4)) & 0xff;
        uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
        if ((uVar3 == uVar2) ||
           (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
          uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
          uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
          if ((uVar3 == uVar2) ||
             (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
            uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
            uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
            if ((uVar3 == uVar2) ||
               (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
              iVar1 = 0;
              if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) !=
                  (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
                iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                                        (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
              }
            }
          }
        }
      }
      if (iVar1 == 0) {
switchD_1000ef7e_caseD_0:
        iVar1 = 0;
      }
    }
    return iVar1;
  case 0x1d:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1d)) == *(uint *)((int)_Buf2 + (_Size - 0x1d))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1d)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  case 0x19:
    if (*(uint *)((int)_Buf1 + (_Size - 0x19)) == *(uint *)((int)_Buf2 + (_Size - 0x19))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x19)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x16))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x16)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_15:
    if (*(uint *)((int)_Buf1 + (_Size - 0x15)) == *(uint *)((int)_Buf2 + (_Size - 0x15))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x15)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x12))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x12)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_11:
    if (*(uint *)((int)_Buf1 + (_Size - 0x11)) == *(uint *)((int)_Buf2 + (_Size - 0x11))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x11)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xe))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xe)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_d:
    if (*(uint *)((int)_Buf1 + (_Size - 0xd)) == *(uint *)((int)_Buf2 + (_Size - 0xd))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xd)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 10)) != (uint)*(byte *)((int)_Buf2 + (_Size - 10)))
      {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_9:
    if (*(int *)((int)_Buf1 + (_Size - 9)) == *(int *)((int)_Buf2 + (_Size - 9))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 6)) != (uint)*(byte *)((int)_Buf2 + (_Size - 6))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 6)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 6)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_5:
    if (*(uint *)((int)_Buf1 + (_Size - 5)) == *(uint *)((int)_Buf2 + (_Size - 5))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 5)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 2)) != (uint)*(byte *)((int)_Buf2 + (_Size - 2))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 2)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 2)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_1:
    if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) == (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
      return 0;
    }
    return (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
  case 0x1e:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1e)) == *(uint *)((int)_Buf2 + (_Size - 0x1e))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1e)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_1a:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1a)) == *(uint *)((int)_Buf2 + (_Size - 0x1a))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1a)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x17))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x17)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_16:
    if (*(uint *)((int)_Buf1 + (_Size - 0x16)) == *(uint *)((int)_Buf2 + (_Size - 0x16))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x16)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x13))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x13)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_12:
    if (*(uint *)((int)_Buf1 + (_Size - 0x12)) == *(uint *)((int)_Buf2 + (_Size - 0x12))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x12)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xf))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xf)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_e:
    if (*(uint *)((int)_Buf1 + (_Size - 0xe)) == *(uint *)((int)_Buf2 + (_Size - 0xe))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xe)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xb))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xb)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_a:
    if (*(int *)((int)_Buf1 + (_Size - 10)) == *(int *)((int)_Buf2 + (_Size - 10))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 7)) != (uint)*(byte *)((int)_Buf2 + (_Size - 7))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 7)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 7)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_6:
    if (*(uint *)((int)_Buf1 + (_Size - 6)) == *(uint *)((int)_Buf2 + (_Size - 6))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 6)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 3)) != (uint)*(byte *)((int)_Buf2 + (_Size - 3))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 3)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 3)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_2:
    if (*(short *)((int)_Buf1 + (_Size - 2)) != *(short *)((int)_Buf2 + (_Size - 2))) {
LAB_1000fb64:
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      goto switchD_1000ef7e_caseD_1;
    }
    goto switchD_1000ef7e_caseD_0;
  case 0x1f:
    if (*(int *)((int)_Buf1 + (_Size - 0x1f)) == *(int *)((int)_Buf2 + (_Size - 0x1f))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1f));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1f));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1e));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_1b:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1b)) == *(uint *)((int)_Buf2 + (_Size - 0x1b))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1b)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x18))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x18)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_17:
    if (*(uint *)((int)_Buf1 + (_Size - 0x17)) == *(uint *)((int)_Buf2 + (_Size - 0x17))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x17)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x14))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x14)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_13:
    if (*(uint *)((int)_Buf1 + (_Size - 0x13)) == *(uint *)((int)_Buf2 + (_Size - 0x13))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x13)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x10))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_f:
    if (*(int *)((int)_Buf1 + (_Size - 0xf)) == *(int *)((int)_Buf2 + (_Size - 0xf))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xc))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xc)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_b:
    if (*(uint *)((int)_Buf1 + (_Size - 0xb)) == *(uint *)((int)_Buf2 + (_Size - 0xb))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xb)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 8)) != (uint)*(byte *)((int)_Buf2 + (_Size - 8))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 8)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 8)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_7:
    if (*(uint *)((int)_Buf1 + (_Size - 7)) == *(uint *)((int)_Buf2 + (_Size - 7))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 7)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 4)) != (uint)*(byte *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 4)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 4)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_1000ef7e_caseD_3:
    uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
    uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
    if ((uVar3 != uVar2) &&
       (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    goto LAB_1000fb64;
  }
}



/**************************************************/

/* Function: FID_conflict:__vscprintf_helper @ 10010139 */

/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_helper
    __vscwprintf_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
FID_conflict___vscprintf_helper
          (undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == 0) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = 0x7fffffff;
    local_18 = 0x42;
    local_1c = 0;
    local_24 = 0;
    uVar2 = (*(code *)param_1)(&local_24,param_2,param_3,param_4);
  }
  return uVar2;
}



/**************************************************/

/* Function: FID_conflict:__vscwprintf @ 1001018e */

/* Library Function - Multiple Matches With Different Base Names
    __vscprintf
    __vscwprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___vscwprintf(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(&LAB_1001592d,(int)_Format,0,_ArgList);
  return iVar1;
}



/**************************************************/

/* Function: __vsnprintf_helper @ 100101a6 */

/* Library Function - Single Match
    __vsnprintf_helper
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  FILE local_24;
  
  if (param_4 == 0) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_24._cnt = param_3;
    }
    local_24._flag = 0x42;
    local_24._base = param_2;
    local_24._ptr = param_2;
    iVar2 = (*(code *)param_1)(&local_24,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < iVar2) {
        local_24._cnt = local_24._cnt - 1;
        if (-1 < local_24._cnt) {
          *local_24._ptr = '\0';
          return iVar2;
        }
        iVar3 = __flsbuf(0,&local_24);
        if (iVar3 != -1) {
          return iVar2;
        }
      }
      param_2[param_3 - 1] = '\0';
      iVar2 = (-1 < local_24._cnt) - 2;
    }
  }
  else {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}



/**************************************************/

/* Function: __vsprintf_s_l @ 10010270 */

/* Library Function - Single Match
    __vsprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (_Format == (char *)0x0) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
      pDVar1 = FUN_1000e777();
      *pDVar1 = 0x16;
    }
    else {
      iVar2 = __vsnprintf_helper(&DAT_1001630b,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
      if (iVar2 < 0) {
        *_DstBuf = '\0';
      }
      if (iVar2 != -2) {
        return iVar2;
      }
      pDVar1 = FUN_1000e777();
      *pDVar1 = 0x22;
    }
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: _vsprintf_s @ 100102f6 */

/* Library Function - Single Match
    _vsprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl _vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}



/**************************************************/

/* Function: FUN_10010311 @ 10010311 */

void FUN_10010311(void)

{
  return;
}



/**************************************************/

/* Function: __cfltcvt_init @ 10010312 */

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_10027428 = __cfltcvt;
  PTR_LAB_1002742c = &LAB_10016e44;
  PTR_LAB_10027430 = &LAB_10016e02;
  PTR_LAB_10027434 = &LAB_10016e36;
  PTR_LAB_10027438 = &LAB_10016dac;
  PTR_LAB_1002743c = __cfltcvt;
  PTR_LAB_10027440 = __cfltcvt_l;
  PTR_LAB_10027444 = __fassign_l;
  PTR_LAB_10027448 = __cropzeros_l;
  PTR_LAB_1002744c = __forcdecpt_l;
  return;
}



/**************************************************/

/* Function: __fpmath @ 10010372 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_10029b80 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



/**************************************************/

/* Function: __mbscmp_l @ 1001052a */

/* Library Function - Single Match
    __mbscmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbscmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  ushort uVar6;
  byte *pbVar7;
  _LocaleUpdate local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  
  _LocaleUpdate::_LocaleUpdate(local_18,_Locale);
  if (_Str1 == (uchar *)0x0) {
    pDVar2 = FUN_1000e777();
    *pDVar2 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    pDVar2 = FUN_1000e777();
    *pDVar2 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else if (*(int *)(local_14 + 8) == 0) {
    iVar3 = _strcmp((char *)_Str1,(char *)_Str2);
LAB_10010638:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  else {
    do {
      bVar1 = *_Str1;
      uVar6 = (ushort)bVar1;
      puVar4 = _Str1 + 1;
      if ((*(byte *)(bVar1 + 0x1d + local_14) & 4) != 0) {
        if (*puVar4 == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT11(bVar1,*puVar4);
          puVar4 = _Str1 + 2;
        }
      }
      _Str1 = puVar4;
      uVar5 = (uint)*_Str2;
      pbVar7 = _Str2 + 1;
      if ((*(byte *)(uVar5 + 0x1d + local_14) & 4) != 0) {
        bVar1 = *pbVar7;
        if (bVar1 == 0) {
          uVar5 = 0;
        }
        else {
          pbVar7 = _Str2 + 2;
          uVar5 = (uint)CONCAT11(*_Str2,bVar1);
        }
      }
      if ((ushort)uVar5 != uVar6) {
        iVar3 = (-(uint)((ushort)uVar5 < uVar6) & 2) - 1;
        goto LAB_10010638;
      }
      _Str2 = pbVar7;
    } while (uVar6 != 0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0;
  }
  return iVar3;
}



/**************************************************/

/* Function: __mbscmp @ 10010646 */

/* Library Function - Single Match
    __mbscmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbscmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbscmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __expand @ 10010659 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __expand
   
   Library: Visual Studio 2005 Release */

void * __cdecl __expand(void *_Memory,size_t _NewSize)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  LPVOID pvVar4;
  DWORD DVar5;
  void *this;
  void *local_20;
  
  if (_Memory == (void *)0x0) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (_NewSize < 0xffffffe1) {
      if (DAT_1002b7f8 == 3) {
        this = (void *)0x4;
        __lock(4);
        puVar2 = (uint *)thunk_FUN_1001110b(this,(int)_Memory);
        if (((puVar2 != (uint *)0x0) && (local_20 = (void *)0x0, _NewSize <= DAT_1002b7e8)) &&
           (iVar3 = ___sbh_resize_block(puVar2,(int)_Memory,_NewSize), iVar3 != 0)) {
          local_20 = _Memory;
        }
        FUN_1001073f();
        if (puVar2 != (uint *)0x0) {
          return local_20;
        }
        if (_NewSize == 0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
      }
      pvVar4 = HeapReAlloc(DAT_10029bd0,0x10,_Memory,_NewSize);
      if (pvVar4 != (LPVOID)0x0) {
        return pvVar4;
      }
      pDVar1 = FUN_1000e777();
      DVar5 = GetLastError();
      DVar5 = FUN_1000e73c(DVar5);
      *pDVar1 = DVar5;
      return (void *)0x0;
    }
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0xc;
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1001073f @ 1001073f */

void FUN_1001073f(void)

{
  FUN_10010f96(4);
  return;
}



/**************************************************/

/* Function: _atol @ 10010757 */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/**************************************************/

/* Function: x_ismbbtype_l @ 10010768 */

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_100107aa;
  }
  iVar2 = 1;
LAB_100107aa:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead_l @ 100107b9 */

/* Library Function - Single Match
    __ismbblead_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,4);
  return iVar1;
}



/**************************************************/

/* Function: __ismbblead @ 100107ce */

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}



/**************************************************/

/* Function: __amsg_exit @ 100107e1 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_10011b9e(param_1);
  pcVar1 = (code *)FUN_10012a28((int)PTR___exit_10026b00);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: FUN_10010805 @ 10010805 */

void __cdecl FUN_10010805(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}



/**************************************************/

/* Function: ___crtExitProcess @ 1001082b */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_10010805(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: FUN_10010840 @ 10010840 */

void FUN_10010840(void)

{
  __lock(8);
  return;
}



/**************************************************/

/* Function: FUN_10010849 @ 10010849 */

void FUN_10010849(void)

{
  FUN_10010f96(8);
  return;
}



/**************************************************/

/* Function: FUN_10010852 @ 10010852 */

void __cdecl FUN_10010852(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}



/**************************************************/

/* Function: __initterm_e @ 1001086a */

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}



/**************************************************/

/* Function: __get_osplatform @ 1001088a */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_10029b88 != 0)) {
    *param_1 = DAT_10029b88;
    return 0;
  }
  pDVar1 = FUN_1000e777();
  *pDVar1 = 0x16;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __get_winmajor @ 100108c1 */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_10029b88 != 0)) {
    *param_1 = DAT_10029b94;
    return 0;
  }
  pDVar1 = FUN_1000e777();
  *pDVar1 = 0x16;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __cinit @ 100108fd */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_1001f594 != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_1001f594), BVar1 != 0)) {
    (*(code *)PTR___fpmath_1001f594)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1001e454,(undefined4 *)&DAT_1001e46c);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_10014299);
    puVar3 = &DAT_1001e3fc;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1001e450);
    if ((DAT_1002b814 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1002b814), BVar1 != 0)) {
      (*DAT_1002b814)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1001098f @ 1001098f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10010a62) */

void __cdecl FUN_1001098f(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10029bc8 != 1) {
    DAT_10029bc4 = 1;
    DAT_10029bc0 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_10012a28(DAT_1002b80c);
      piVar3 = (int *)FUN_10012a28(DAT_1002b808);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_10012a28(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_10010852((undefined4 *)&DAT_1001e47c);
    }
    FUN_10010852((undefined4 *)&DAT_1001e484);
  }
  FUN_10010a5c();
  if (param_3 != 0) {
    return;
  }
  DAT_10029bc8 = 1;
  FUN_10010f96(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_10010a5c @ 10010a5c */

void FUN_10010a5c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_10010f96(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 10010a71 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1001098f(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 10010a82 */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1001098f(0,0,1);
  return;
}



/**************************************************/

/* Function: __init_pointers @ 10010a91 */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_10011d77(uVar1);
  FUN_10017d7b(uVar1);
  FUN_10010b0b(uVar1);
  FUN_10017909(uVar1);
  FUN_10017d71(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_10010311();
  __initp_eh_hooks();
  PTR___exit_10026b00 = (undefined *)FUN_100129b1(0x10010a71);
  return;
}



/**************************************************/

/* Function: __alloca_probe @ 10010ae0 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}



/**************************************************/

/* Function: FUN_10010b0b @ 10010b0b */

void __cdecl FUN_10010b0b(undefined4 param_1)

{
  DAT_10029bcc = param_1;
  return;
}



/**************************************************/

/* Function: __invoke_watson @ 10010b15 */

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  int iVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  iVar1 = DAT_1002696c;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_10017f42();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/**************************************************/

/* Function: FUN_10010c11 @ 10010c11 */

void __cdecl
FUN_10010c11(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_10012a28(DAT_10029bcc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10010c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_10017f42();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/**************************************************/

/* Function: __aulldvrm @ 10010c40 */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/**************************************************/

/* Function: fastzero_I @ 10010cd5 */

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}



/**************************************************/

/* Function: __VEC_memzero @ 10010d2c */

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}



/**************************************************/

/* Function: ___heap_select @ 10010dcf */

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2005 Release */

undefined4 ___heap_select(void)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = __get_osplatform(&local_8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar1 = __get_winmajor(&local_c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if ((local_8 == 2) && (4 < local_c)) {
    return 1;
  }
  return 3;
}



/**************************************************/

/* Function: __heap_init @ 10010e2a */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_10029bd0 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_10029bd0 == (HANDLE)0x0) {
    return 0;
  }
  DAT_1002b7f8 = ___heap_select();
  if ((DAT_1002b7f8 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_10029bd0);
    DAT_10029bd0 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 10010e84 */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1002b7f8 == 3) {
    iVar2 = 0;
    if (0 < DAT_1002b7e0) {
      puVar1 = (undefined4 *)((int)DAT_1002b7e4 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_10029bd0,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_1002b7e0);
    }
    HeapFree(DAT_10029bd0,0,DAT_1002b7e4);
  }
  HeapDestroy(DAT_10029bd0);
  DAT_10029bd0 = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: __mtinitlocks @ 10010ef8 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10029bd8;
  do {
    if ((&DAT_10026b1c)[iVar2 * 2] == 1) {
      (&DAT_10026b18)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10026b18)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10026b18)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 10010f41 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10026b18;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10026c38);
  puVar1 = &DAT_10026b18;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10026c38);
  return;
}



/**************************************************/

/* Function: FUN_10010f96 @ 10010f96 */

void __cdecl FUN_10010f96(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10026b18)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 10010fab */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  DWORD *pDVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_10029bd0 == 0) {
    __FF_MSGBANNER();
    FUN_10011b9e(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10026b18 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_1000e777();
      *pDVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_1000e777();
          *pDVar2 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_10011065();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_10011065 @ 10011065 */

void FUN_10011065(void)

{
  FUN_10010f96(10);
  return;
}



/**************************************************/

/* Function: __lock @ 1001106e */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10026b18)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10026b18)[_File * 2]);
  return;
}



/**************************************************/

/* Function: ___sbh_heap_init @ 1001109f */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_1002b7e4 = HeapAlloc(DAT_10029bd0,0,0x140);
  if (DAT_1002b7e4 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10029d28 = 0;
  DAT_1002b7e0 = 0;
  DAT_1002b7ec = DAT_1002b7e4;
  DAT_1002b7e8 = param_1;
  DAT_1002b7f0 = 0x10;
  return 1;
}



/**************************************************/

/* Function: thunk_FUN_1001110b @ 100110e7 */

void __thiscall thunk_FUN_1001110b(void *this,int param_1)

{
  FUN_1001110b((void *)(DAT_1002b7e0 * 0x14 + DAT_1002b7e4),param_1);
  return;
}



/**************************************************/

/* Function: FUN_1001110b @ 1001110b */

void __thiscall FUN_1001110b(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/**************************************************/

/* Function: ___sbh_free_block @ 10011112 */

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_10029d28 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1002b7f4 * 0x8000 + DAT_10029d28[3]),0x8000,0x4000);
        DAT_10029d28[2] = DAT_10029d28[2] | 0x80000000U >> ((byte)DAT_1002b7f4 & 0x1f);
        *(undefined4 *)(DAT_10029d28[4] + 0xc4 + DAT_1002b7f4 * 4) = 0;
        *(char *)(DAT_10029d28[4] + 0x43) = *(char *)(DAT_10029d28[4] + 0x43) + -1;
        if (*(char *)(DAT_10029d28[4] + 0x43) == '\0') {
          DAT_10029d28[1] = DAT_10029d28[1] & 0xfffffffe;
        }
        if (DAT_10029d28[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10029d28[3],0,0x8000);
          HeapFree(DAT_10029bd0,0,(LPVOID)DAT_10029d28[4]);
          _memmove(DAT_10029d28,DAT_10029d28 + 5,
                   (DAT_1002b7e0 * 0x14 - (int)DAT_10029d28) + -0x14 + DAT_1002b7e4);
          DAT_1002b7e0 = DAT_1002b7e0 + -1;
          if (DAT_10029d28 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1002b7ec = DAT_1002b7e4;
        }
      }
      DAT_10029d28 = param_1;
      DAT_1002b7f4 = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 10011426 */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_1002b7e0 == DAT_1002b7f0) {
    pvVar1 = HeapReAlloc(DAT_10029bd0,0,DAT_1002b7e4,(DAT_1002b7f0 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1002b7f0 = DAT_1002b7f0 + 0x10;
    DAT_1002b7e4 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_1002b7e0 * 0x14 + (int)DAT_1002b7e4);
  pvVar1 = HeapAlloc(DAT_10029bd0,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_1002b7e0 = DAT_1002b7e0 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_10029bd0,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 100114d6 */

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}



/**************************************************/

/* Function: ___sbh_resize_block @ 100115dc */

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}



/**************************************************/

/* Function: ___sbh_alloc_block @ 100118bb */

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_c;
  int local_8;
  
  puVar9 = DAT_1002b7e4 + DAT_1002b7e0 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_1002b7ec;
  if (iVar8 < 0x20) {
    uVar15 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  puVar13 = DAT_1002b7e4;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_1002b7ec && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_1002b7ec) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_1002b7e4;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_1002b7ec && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_1002b7ec) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    uVar11 = piVar5[0x31];
    while ((uVar11 & local_c) == 0 && (*puVar9 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar13 = puVar9 + 0x21;
      puVar9 = puVar9 + 1;
      uVar11 = *puVar13;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar15 = piVar5[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar12 - uVar7;
  iVar16 = (iVar10 >> 4) + -1;
  if (0x3f < iVar16) {
    iVar16 = 0x3f;
  }
  DAT_1002b7ec = param_1;
  if (iVar16 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar15 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar15;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar10 == 0) goto LAB_10011b5b;
    piVar1 = piVar3 + iVar16 * 2;
    iVar8 = piVar1[1];
    piVar12[2] = (int)piVar1;
    piVar12[1] = iVar8;
    piVar1[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar16 + 4 + (int)piVar5);
      *(char *)(iVar16 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar16;
      if (iVar16 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar12 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar12) = iVar10;
  }
LAB_10011b5b:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_10029d28)) && (local_8 == DAT_1002b7f4)) {
    DAT_10029d28 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/**************************************************/

/* Function: FUN_10011b9e @ 10011b9e */

void __cdecl FUN_10011b9e(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_10026c38)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_10029b78 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x10026c3c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10029d30,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10029e4d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10029d49,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10029d49,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10029d49);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10029d49);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x10029d0e),
                           (int)&DAT_1002a044 - (int)(sVar5 + 0x10029d0e),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10029d30,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10029d30,0x314,*(char **)(uVar6 * 8 + 0x10026c3c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_10018007(&DAT_10029d30,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 10011d3e */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_10029b78 != 1) {
      return;
    }
  }
  FUN_10011b9e(0xfc);
  FUN_10011b9e(0xff);
  return;
}



/**************************************************/

/* Function: FUN_10011d77 @ 10011d77 */

void __cdecl FUN_10011d77(undefined4 param_1)

{
  DAT_1002a044 = param_1;
  return;
}



/**************************************************/

/* Function: __callnewh @ 10011d81 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_10012a28(DAT_1002a044);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10011dc6 @ 10011dc6 */

uint * __cdecl FUN_10011dc6(uint *param_1)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  
  cVar6 = (char)in_EAX;
  while (((uint)param_1 & 3) != 0) {
    uVar7 = *param_1;
    if ((char)uVar7 == cVar6) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar7 == '\0') {
      return (uint *)0x0;
    }
  }
  uVar7 = in_EAX | in_EAX << 8;
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ (uVar7 << 0x10 | uVar7);
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == cVar6) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/**************************************************/

/* Function: ___report_gsfailure @ 10011e7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_1002a168 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1002a16c = &stack0x00000004;
  _DAT_1002a0a8 = 0x10001;
  _DAT_1002a050 = 0xc0000409;
  _DAT_1002a054 = 1;
  local_32c = DAT_1002696c;
  local_328 = DAT_10026970;
  _DAT_1002a05c = unaff_retaddr;
  _DAT_1002a134 = in_GS;
  _DAT_1002a138 = in_FS;
  _DAT_1002a13c = in_ES;
  _DAT_1002a140 = in_DS;
  _DAT_1002a144 = unaff_EDI;
  _DAT_1002a148 = unaff_ESI;
  _DAT_1002a14c = unaff_EBX;
  _DAT_1002a150 = in_EDX;
  _DAT_1002a154 = in_ECX;
  _DAT_1002a158 = in_EAX;
  _DAT_1002a15c = unaff_EBP;
  DAT_1002a160 = unaff_retaddr;
  _DAT_1002a164 = in_CS;
  _DAT_1002a170 = in_SS;
  DAT_1002a0a0 = IsDebuggerPresent();
  FUN_10017f42();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1001fb7c);
  if (DAT_1002a0a0 == 0) {
    FUN_10017f42();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: FUN_10011f82 @ 10011f82 */

undefined4 FUN_10011f82(void)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}



/**************************************************/

/* Function: setSBCS @ 10011fb1 */

/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x101;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  _memset(puVar1,0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  do {
    *puVar1 = puVar1[(int)&DAT_10026cf0 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10026cf0 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: setSBUpLow @ 10012006 */

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [52];
  undefined1 local_4a0 [408];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_1001216d:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_1001216d;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_10012114;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_10012114:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 10012190 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2005 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10027214) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10027118) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10026cf0)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10027118;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10027118;
      InterlockedIncrement((LONG *)PTR_DAT_10027118);
    }
    FUN_1001222b();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}



/**************************************************/

/* Function: FUN_1001222b @ 1001222b */

void FUN_1001222b(void)

{
  FUN_10010f96(0xd);
  return;
}



/**************************************************/

/* Function: getSystemCP @ 10012234 */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_1002a374 = 0;
  if (unaff_ESI == -2) {
    DAT_1002a374 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_1002a374 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_1002a374 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_1002a374 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: FUN_100122ae @ 100122ae */

void __cdecl FUN_100122ae(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined2 *puVar10;
  int iVar11;
  undefined4 extraout_EDX;
  BYTE *pBVar12;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_100122ea:
    if (*(uint *)((int)&DAT_10027120 + uVar5) != uVar4) goto code_r0x100122f6;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10027130 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1002711c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_10011f82();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_10027124 + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_1001241b;
  }
LAB_100122d7:
  setSBCS(unaff_EDI);
LAB_10012478:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x100122f6:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10012303;
  goto LAB_100122ea;
code_r0x10012303:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_10012478;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar12 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar12;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar12 + 1;
          pBVar12 = pBVar12 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar11 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar9 = FUN_10011f82();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1001241b:
    setSBUpLow(unaff_EDI);
    goto LAB_10012478;
  }
  if (DAT_1002a374 == 0) goto LAB_10012478;
  goto LAB_100122d7;
}



/**************************************************/

/* Function: __setmbcp @ 10012487 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  DWORD *pDVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = FUN_100122ae(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10026cf0)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10027214 & 1) == 0)) {
          __lock(0xd);
          _DAT_1002a384 = ptVar3->mbcodepage;
          _DAT_1002a388 = ptVar3->ismbcodepage;
          _DAT_1002a38c = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_1002a378)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10026f10)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10027018)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10027118);
          if ((LVar4 == 0) && (PTR_DAT_10027118 != &DAT_10026cf0)) {
            _free(PTR_DAT_10027118);
          }
          PTR_DAT_10027118 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_100125e8();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10026cf0) {
          _free(ptVar3);
        }
        pDVar5 = FUN_1000e777();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_100125e8 @ 100125e8 */

void FUN_100125e8(void)

{
  FUN_10010f96(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 10012621 */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_1002b810 == 0) {
    __setmbcp(-3);
    DAT_1002b810 = 1;
  }
  return 0;
}



/**************************************************/

/* Function: ___freetlocinfo @ 1001263f */

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10027648)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_10027588) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10027218) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar4[-1] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _free(param_1);
  return;
}



/**************************************************/

/* Function: ___addlocaleref @ 1001277f */

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar1 = param_1 + 0x14;
  iVar2 = 6;
  do {
    if (((undefined *)pLVar1[-2] != &DAT_10027218) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar1);
    }
    if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar1[1]);
    }
    pLVar1 = pLVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  InterlockedIncrement((LONG *)(param_1[0x35] + 0xb4));
  return;
}



/**************************************************/

/* Function: ___removelocaleref @ 10012805 */

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar1 = param_1 + 0x14;
    iVar2 = 6;
    do {
      if (((undefined *)pLVar1[-2] != &DAT_10027218) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar1);
      }
      if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar1[1]);
      }
      pLVar1 = pLVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    InterlockedDecrement((LONG *)(param_1[0x35] + 0xb4));
  }
  return param_1;
}



/**************************************************/

/* Function: __updatetlocinfoEx_nolock @ 10012891 */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI != (LONG *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    pLVar1 = (LONG *)*in_EAX;
    if (pLVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref(unaff_EDI);
      if (pLVar1 != (LONG *)0x0) {
        ___removelocaleref(pLVar1);
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10027220)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 100128cf */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10027214) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_10012939();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}



/**************************************************/

/* Function: FUN_10012939 @ 10012939 */

void FUN_10012939(void)

{
  FUN_10010f96(0xc);
  return;
}



/**************************************************/

/* Function: FUN_10012945 @ 10012945 */

undefined4 FUN_10012945(void)

{
  int iVar1;
  HMODULE pHVar2;
  int iVar3;
  uint uVar4;
  char *_Str2;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  __get_winmajor(&local_8);
  if (local_8 < 6) {
    pHVar2 = GetModuleHandleA((LPCSTR)0x0);
    iVar1 = pHVar2[0xf].unused;
    _Str2 = (char *)((int)&pHVar2[6].unused +
                    iVar1 + (uint)*(ushort *)((int)&pHVar2[5].unused + iVar1));
    if (*(short *)((int)&pHVar2[1].unused + iVar1 + 2) != 0) {
      do {
        iVar3 = _strcmp(".mixcrt",_Str2);
        if (iVar3 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        _Str2 = _Str2 + 0x28;
      } while (uVar4 < *(ushort *)((int)&pHVar2[1].unused + iVar1 + 2));
    }
  }
  return 1;
}



/**************************************************/

/* Function: FUN_100129b1 @ 100129b1 */

int __cdecl FUN_100129b1(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1002730c);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10027308 != -1)) {
    iVar3 = DAT_10027308;
    pcVar2 = TlsGetValue(DAT_1002730c);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_10012a0b;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10012945();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_10012a0b:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 10012a1f */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_100129b1(0);
  return;
}



/**************************************************/

/* Function: FUN_10012a28 @ 10012a28 */

int __cdecl FUN_10012a28(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1002730c);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10027308 != -1)) {
    iVar3 = DAT_10027308;
    pcVar2 = TlsGetValue(DAT_1002730c);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_10012a82;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10012945();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_10012a82:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_10012a9f @ 10012a9f */

LPVOID FUN_10012a9f(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1002730c);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_10012a28(DAT_1002a3b8);
    TlsSetValue(DAT_1002730c,lpTlsValue);
  }
  return lpTlsValue;
}



/**************************************************/

/* Function: __mtterm @ 10012ad1 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_10027308 != -1) {
    iVar2 = DAT_10027308;
    pcVar1 = (code *)FUN_10012a28(DAT_1002a3c0);
    (*pcVar1)(iVar2);
    DAT_10027308 = -1;
  }
  if (DAT_1002730c != 0xffffffff) {
    TlsFree(DAT_1002730c);
    DAT_1002730c = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: FUN_10012b0e @ 10012b0e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_10012b0e(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10027358;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_10012945();
    if (iVar1 != 0) {
      pFVar2 = GetProcAddress(hModule,"EncodePointer");
      *(FARPROC *)(param_1 + 0x1f8) = pFVar2;
      pFVar2 = GetProcAddress(hModule,"DecodePointer");
      *(FARPROC *)(param_1 + 0x1fc) = pFVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 200) = 0x43;
  *(undefined1 *)(param_1 + 0x14b) = 0x43;
  *(undefined **)(param_1 + 0x68) = &DAT_10026cf0;
  InterlockedIncrement((LONG *)&DAT_10026cf0);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_100272f8;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_10012bc4();
  return;
}



/**************************************************/

/* Function: FUN_10012bc4 @ 10012bc4 */

void FUN_10012bc4(void)

{
  FUN_10010f96(0xc);
  return;
}



/**************************************************/

/* Function: FUN_10012bcd @ 10012bcd */

DWORD * FUN_10012bcd(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_10027308;
  pcVar1 = FUN_10012a9f();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_10027308;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_10012a28(DAT_1002a3bc);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_10012b0e((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}



/**************************************************/

/* Function: __getptd @ 10012c44 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_10012bcd();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: __freefls@4 @ 10012c5c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2005 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10027358) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10026cf0)) {
        _free(pLVar1);
      }
    }
    FUN_10012d68();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_100272f8) && (pLVar1 != (LONG *)&DAT_10027220)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_10012d74();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10012d68 @ 10012d68 */

void FUN_10012d68(void)

{
  FUN_10010f96(0xd);
  return;
}



/**************************************************/

/* Function: FUN_10012d74 @ 10012d74 */

void FUN_10012d74(void)

{
  FUN_10010f96(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 10012d7d */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_10027308 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1002730c), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10027308;
      pcVar2 = TlsGetValue(DAT_1002730c);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_10027308;
    pcVar2 = (code *)FUN_10012a28(DAT_1002a3bc);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_1002730c != 0xffffffff) {
    TlsSetValue(DAT_1002730c,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: __mtinit @ 10012de6 */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  code *pcVar6;
  DWORD *pDVar7;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_1002a3b4 = GetProcAddress(hModule,"FlsAlloc");
  DAT_1002a3b8 = GetProcAddress(hModule,"FlsGetValue");
  DAT_1002a3bc = GetProcAddress(hModule,"FlsSetValue");
  DAT_1002a3c0 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_1002a3b4 == (FARPROC)0x0) || (DAT_1002a3b8 == (FARPROC)0x0)) ||
      (DAT_1002a3bc == (FARPROC)0x0)) || (DAT_1002a3c0 == (FARPROC)0x0)) {
    DAT_1002a3b8 = TlsGetValue_exref;
    DAT_1002a3b4 = (FARPROC)&LAB_10012a96;
    DAT_1002a3bc = TlsSetValue_exref;
    DAT_1002a3c0 = TlsFree_exref;
  }
  DAT_1002730c = TlsAlloc();
  if ((DAT_1002730c != 0xffffffff) && (BVar1 = TlsSetValue(DAT_1002730c,DAT_1002a3b8), BVar1 != 0))
  {
    __init_pointers();
    DAT_1002a3b4 = (FARPROC)FUN_100129b1((int)DAT_1002a3b4);
    DAT_1002a3b8 = (FARPROC)FUN_100129b1((int)DAT_1002a3b8);
    DAT_1002a3bc = (FARPROC)FUN_100129b1((int)DAT_1002a3bc);
    DAT_1002a3c0 = (FARPROC)FUN_100129b1((int)DAT_1002a3c0);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_10012a28((int)DAT_1002a3b4);
      DAT_10027308 = (*pcVar3)(pcVar6);
      if ((DAT_10027308 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_10027308;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_10012a28((int)DAT_1002a3bc);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_10012b0e((int)pDVar4,0);
          DVar5 = GetCurrentThreadId();
          pDVar4[1] = 0xffffffff;
          *pDVar4 = DVar5;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}



/**************************************************/

/* Function: __crtLCMapStringA_stat @ 10012f6a */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  undefined4 *puVar6;
  LPCWSTR lpDestStr;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPSTR lpMultiByteStr;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  if (DAT_1002a3c4 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_1002a3c4 = 2;
      }
    }
    else {
      DAT_1002a3c4 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_10012fd9;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_10012fd9:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_1002a3c4 == 2) || (DAT_1002a3c4 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_100132fa;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_100132fa;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_100132d7;
          pcVar5 = &stack0xffffffe4;
        }
        else {
          pcVar5 = _malloc(local_c + 8);
          if (pcVar5 != (char *)0x0) {
            pcVar5[0] = -0x23;
            pcVar5[1] = -0x23;
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 8;
          }
        }
        if (pcVar5 != (char *)0x0) {
          _memset(pcVar5,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pcVar5,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pcVar5,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pcVar5);
        }
      }
    }
LAB_100132d7:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_100132fa;
  }
  if (DAT_1002a3c4 != 1) goto LAB_100132fa;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_100132fa;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_10013081:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_10013081;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_100132fa;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_10013190;
          lpDestStr = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,lpDestStr,local_c);
        if (iVar3 != 0) {
          lpMultiByteStr = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            lpMultiByteStr = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,lpMultiByteStr,(int)pcVar5,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_10013190:
  __freea(local_10);
LAB_100132fa:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 1001330c */

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/**************************************************/

/* Function: _strnlen @ 1001334f */

/* Library Function - Single Match
    _strnlen
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _strnlen(char *_Str,size_t _MaxCount)

{
  uint uVar1;
  
  uVar1 = 0;
  if (_MaxCount != 0) {
    do {
      if (*_Str == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      _Str = _Str + 1;
    } while (uVar1 < _MaxCount);
  }
  return uVar1;
}



/**************************************************/

/* Function: _memcpy @ 10013370 */

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10013553_caseD_2;
        case 3:
          goto switchD_10013553_caseD_3;
        }
        goto switchD_10013553_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10013553_caseD_0;
      case 1:
        goto switchD_10013553_caseD_1;
      case 2:
        goto switchD_10013553_caseD_2;
      case 3:
        goto switchD_10013553_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10013553_caseD_2;
            case 3:
              goto switchD_10013553_caseD_3;
            }
            goto switchD_10013553_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10013553_caseD_2;
            case 3:
              goto switchD_10013553_caseD_3;
            }
            goto switchD_10013553_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10013553_caseD_2;
            case 3:
              goto switchD_10013553_caseD_3;
            }
            goto switchD_10013553_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_10013553_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10013553_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10013553_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10013553_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1002b800 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_100133cc_caseD_2;
      case 3:
        goto switchD_100133cc_caseD_3;
      }
      goto switchD_100133cc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100133cc_caseD_0;
    case 1:
      goto switchD_100133cc_caseD_1;
    case 2:
      goto switchD_100133cc_caseD_2;
    case 3:
      goto switchD_100133cc_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100133cc_caseD_2;
          case 3:
            goto switchD_100133cc_caseD_3;
          }
          goto switchD_100133cc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100133cc_caseD_2;
          case 3:
            goto switchD_100133cc_caseD_3;
          }
          goto switchD_100133cc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100133cc_caseD_2;
          case 3:
            goto switchD_100133cc_caseD_3;
          }
          goto switchD_100133cc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_100133cc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100133cc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100133cc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100133cc_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: _Type_info_dtor @ 100136d5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_1002a3cc;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_1002a3c8;
    do {
      piVar2 = piVar1;
      if (DAT_1002a3cc == (int *)0x0) goto LAB_10013719;
      piVar1 = DAT_1002a3cc;
    } while (*DAT_1002a3cc != *(int *)(param_1 + 4));
    piVar2[1] = DAT_1002a3cc[1];
    _free(_Memory);
LAB_10013719:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_1001373c();
  return;
}



/**************************************************/

/* Function: FUN_1001373c @ 1001373c */

void FUN_1001373c(void)

{
  FUN_10010f96(0xe);
  return;
}



/**************************************************/

/* Function: _memmove @ 10013750 */

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10013933_caseD_2;
        case 3:
          goto switchD_10013933_caseD_3;
        }
        goto switchD_10013933_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10013933_caseD_0;
      case 1:
        goto switchD_10013933_caseD_1;
      case 2:
        goto switchD_10013933_caseD_2;
      case 3:
        goto switchD_10013933_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10013933_caseD_2;
            case 3:
              goto switchD_10013933_caseD_3;
            }
            goto switchD_10013933_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10013933_caseD_2;
            case 3:
              goto switchD_10013933_caseD_3;
            }
            goto switchD_10013933_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10013933_caseD_2;
            case 3:
              goto switchD_10013933_caseD_3;
            }
            goto switchD_10013933_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_10013933_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10013933_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10013933_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10013933_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1002b800 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_100137ac_caseD_2;
      case 3:
        goto switchD_100137ac_caseD_3;
      }
      goto switchD_100137ac_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100137ac_caseD_0;
    case 1:
      goto switchD_100137ac_caseD_1;
    case 2:
      goto switchD_100137ac_caseD_2;
    case 3:
      goto switchD_100137ac_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100137ac_caseD_2;
          case 3:
            goto switchD_100137ac_caseD_3;
          }
          goto switchD_100137ac_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100137ac_caseD_2;
          case 3:
            goto switchD_100137ac_caseD_3;
          }
          goto switchD_100137ac_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100137ac_caseD_2;
          case 3:
            goto switchD_100137ac_caseD_3;
          }
          goto switchD_100137ac_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_100137ac_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100137ac_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100137ac_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100137ac_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __malloc_crt @ 10013ab5 */

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_1002a3d0 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1002a3d0 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __calloc_crt @ 10013af5 */

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1002a3d0 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1002a3d0 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __realloc_crt @ 10013b3d */

/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_1002a3d0 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1002a3d0 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/**************************************************/

/* Function: __ioinit @ 10013b88 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  int iVar5;
  UINT *pUVar6;
  int iVar7;
  int *piVar8;
  UINT UVar9;
  UINT UVar10;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x10013b94;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10013dbf:
    iVar7 = -1;
  }
  else {
    DAT_1002b6c8 = 0x20;
    DAT_1002b6e0 = puVar2;
    for (; puVar2 < DAT_1002b6e0 + 0x1c0; puVar2 = puVar2 + 0xe) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_68.lpReserved2;
      pUVar6 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar6 + UVar9);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      iVar7 = 1;
      while ((UVar10 = UVar9, (int)DAT_1002b6c8 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_1002b6c8, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_1002b6e0)[iVar7] = puVar2;
        DAT_1002b6c8 = DAT_1002b6c8 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_1002b6e0)[iVar7];
        }
        iVar7 = iVar7 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar10) {
        do {
          pvVar4 = *(HANDLE *)local_20;
          if ((((pvVar4 != (HANDLE)0xffffffff) && (pvVar4 != (HANDLE)0xfffffffe)) &&
              ((*pUVar6 & 1) != 0)) &&
             (((*pUVar6 & 8) != 0 || (DVar3 = GetFileType(pvVar4), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_1002b6e0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_10013dbf;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar6 = (UINT *)((int)pUVar6 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar10);
      }
    }
    iVar7 = 0;
    do {
      piVar8 = DAT_1002b6e0 + iVar7 * 0xe;
      if ((*piVar8 == -1) || (*piVar8 == -2)) {
        *(undefined1 *)(piVar8 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar7 != 1);
        }
        pvVar4 = GetStdHandle(DVar3);
        if (((pvVar4 == (HANDLE)0xffffffff) || (pvVar4 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar4), DVar3 == 0)) {
          *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          *piVar8 = -2;
        }
        else {
          *piVar8 = (int)pvVar4;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 8;
          }
          iVar5 = ___crtInitCritSecAndSpinCount(piVar8 + 3,4000);
          if (iVar5 == 0) goto LAB_10013dbf;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_1002b6c8);
    iVar7 = 0;
  }
  return iVar7;
}



/**************************************************/

/* Function: __ioterm @ 10013dc8 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_1002b6e0;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x700; uVar3 = uVar3 + 0x38) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x1002b7e0);
  return;
}



/**************************************************/

/* Function: __setenvp @ 10013e14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_1002b810 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_10029b6c;
  if (DAT_10029b6c != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_10029b6c;
    DAT_10029ba8 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_10029b6c);
          DAT_10029b6c = (char *)0x0;
          *puVar1 = 0;
          _DAT_1002b804 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10029ba8);
            DAT_10029ba8 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}



/**************************************************/

/* Function: parse_cmdline @ 10013eef */

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2005 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_10013f81;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_10013f81:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}



/**************************************************/

/* Function: __setargv @ 10014087 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_1002b810 == 0) {
    ___initmbctable();
  }
  DAT_1002a4dc = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_1002a3d8,0x104);
  _DAT_10029bb8 = &DAT_1002a3d8;
  if ((DAT_1002b818 == (char *)0x0) || (local_8 = DAT_1002b818, *DAT_1002b818 == '\0')) {
    local_8 = &DAT_1002a3d8;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_10029b9c = local_c - 1;
      _DAT_10029ba0 = puVar2;
      return 0;
    }
  }
  return -1;
}



/**************************************************/

/* Function: ___crtGetEnvironmentStringsA @ 10014140 */

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2005 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  WCHAR *pWVar5;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_1002a4e0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1002a4e0 = 1;
      goto LAB_10014192;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_1002a4e0 = 2;
    }
  }
  if (DAT_1002a4e0 != 1) {
    if ((DAT_1002a4e0 != 2) && (DAT_1002a4e0 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_10014192:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = __malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                  (LPBOOL)0x0), local_8 = lpMultiByteStr, iVar6 == 0)) {
    _free(lpMultiByteStr);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}



/**************************************************/

/* Function: __RTC_Initialize @ 10014275 */

/* WARNING: Removing unreachable block (ram,0x10014287) */
/* WARNING: Removing unreachable block (ram,0x1001428d) */
/* WARNING: Removing unreachable block (ram,0x1001428f) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/**************************************************/

/* Function: FUN_100142bd @ 100142bd */

undefined4 __cdecl FUN_100142bd(int param_1,DWORD param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  pDVar5 = FUN_10012bcd();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_100273dc * 3);
    if ((piVar1 + DAT_100273dc * 3 <= piVar6) || (*piVar6 != param_1)) {
      piVar6 = (int *)0x0;
    }
    if ((piVar6 == (int *)0x0) || (pcVar2 = (code *)piVar6[2], pcVar2 == (code *)0x0)) {
      uVar7 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar6[2] = 0;
      uVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        DVar3 = pDVar5[0x18];
        pDVar5[0x18] = param_2;
        if (piVar6[1] == 8) {
          if (DAT_100273d0 < DAT_100273d4 + DAT_100273d0) {
            iVar8 = DAT_100273d0 * 0xc;
            iVar9 = DAT_100273d0;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_100273d4 + DAT_100273d0);
          }
          iVar9 = *piVar6;
          DVar4 = pDVar5[0x19];
          if (iVar9 == -0x3fffff72) {
            pDVar5[0x19] = 0x83;
          }
          else if (iVar9 == -0x3fffff70) {
            pDVar5[0x19] = 0x81;
          }
          else if (iVar9 == -0x3fffff6f) {
            pDVar5[0x19] = 0x84;
          }
          else if (iVar9 == -0x3fffff6d) {
            pDVar5[0x19] = 0x85;
          }
          else if (iVar9 == -0x3fffff73) {
            pDVar5[0x19] = 0x82;
          }
          else if (iVar9 == -0x3fffff71) {
            pDVar5[0x19] = 0x86;
          }
          else if (iVar9 == -0x3fffff6e) {
            pDVar5[0x19] = 0x8a;
          }
          (*pcVar2)(8,pDVar5[0x19]);
          pDVar5[0x19] = DVar4;
        }
        else {
          piVar6[2] = 0;
          (*pcVar2)(piVar6[1]);
        }
        pDVar5[0x18] = DVar3;
      }
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}



/**************************************************/

/* Function: ___security_init_cookie @ 10014436 */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2005 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_1002696c == 0xbb40e64e) || ((DAT_1002696c & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1002696c = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1002696c == 0xbb40e64e) {
      DAT_1002696c = 0xbb40e64f;
    }
    else if ((DAT_1002696c & 0xffff0000) == 0) {
      DAT_1002696c = DAT_1002696c | DAT_1002696c << 0x10;
    }
  }
  DAT_10026970 = ~DAT_1002696c;
  return;
}



/**************************************************/

/* Function: FUN_100144d5 @ 100144d5 */

exception * __thiscall FUN_100144d5(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: ___TypeMatch @ 100144f7 */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1001454d:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1001452b:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1001454d;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1001452b;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: ___FrameUnwindToState @ 10014597 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2005 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_1001465d();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/**************************************************/

/* Function: FUN_1001465d @ 1001465d */

void FUN_1001465d(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}



/**************************************************/

/* Function: ___DestructExceptionObject @ 100146bd */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(param_1[7] + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    FID_conflict__CallMemberFunction1(param_1[6],UNRECOVERED_JUMPTABLE);
  }
  return;
}



/**************************************************/

/* Function: ___AdjustPointer @ 10014711 */

/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2005 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}



/**************************************************/

/* Function: IsInExceptionSpec @ 10014736 */

/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  uchar extraout_AL;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
    return extraout_AL;
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch((byte *)(unaff_EDI[1] + local_c * 0x10),(byte *)*piVar3,
                               *(uint **)(param_1 + 0x1c));
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}



/**************************************************/

/* Function: CallUnexpected @ 100147af */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __cdecl CallUnexpected(struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl CallUnexpected(_s_ESTypeList *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  unexpected();
  terminate();
  return;
}



/**************************************************/

/* Function: Catch_All@100147e0 @ 100147e0 */

void Catch_All_100147e0(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: CallCatchBlock @ 100147f8 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2005 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined4 local_40 [2];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_100236f8;
  uStack_c = 0x10014804;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_1001491e();
  return local_20;
}



/**************************************************/

/* Function: FUN_1001491e @ 1001491e */

void FUN_1001491e(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(void **)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject(unaff_ESI);
    }
  }
  return;
}



/**************************************************/

/* Function: ___BuildCatchObjectHelper @ 10014994 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2005 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  uint in_stack_ffffffd0;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar2,_Size);
          return '\0';
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) &&
           (iVar1 = _ValidateRead(*(void **)(param_4 + 0x18),in_stack_ffffffd0), iVar1 != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_10014a19;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_10014a19:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/**************************************************/

/* Function: ___BuildCatchObject @ 10014b13 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    piVar2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  return;
}



/**************************************************/

/* Function: CatchIt @ 10014ba4 */

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2005 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  uint *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int *unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject((int)param_1,(int *)unaff_ESI,unaff_EBX,(byte *)param_5);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  *(int *)(unaff_ESI + 8) = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}



/**************************************************/

/* Function: FindHandlerForForeignException @ 10014c10 */

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint extraout_var;
  uint uVar6;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var2 = __getptd();
    uVar6 = extraout_var;
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)__encoded_null();
      if (((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff4);
    if (local_8 < uVar6) {
      do {
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          pTVar1 = p_Var5->pHandlerArray[p_Var5->nCatches + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((p_Var5->pHandlerArray[p_Var5->nCatches + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)uVar6);
          }
        }
        local_8 = local_8 + 1;
        p_Var5 = p_Var5 + 1;
      } while (local_8 < uVar6);
    }
  }
  return;
}



/**************************************************/

/* Function: FindHandler @ 10014d02 */

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  uchar uVar3;
  bool bVar4;
  _ptiddata p_Var5;
  int iVar6;
  _s_TryBlockMapEntry *p_Var7;
  EHRegistrationNode *unaff_EBX;
  int iVar8;
  HandlerType *pHVar9;
  _s_FuncInfo *p_Var10;
  int unaff_ESI;
  _s_FuncInfo *p_Var11;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar12;
  undefined4 in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var10 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var11 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar6 = *(int *)(param_1 + 0x14), iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
         (iVar6 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var5 = __getptd();
      if (p_Var5->_curexception == (void *)0x0) {
        return;
      }
      p_Var5 = __getptd();
      p_Var11 = p_Var5->_curexception;
      param_1 = (EHExceptionRecord *)p_Var11;
      p_Var5 = __getptd();
      param_3 = p_Var5->_curcontext;
      iVar6 = _ValidateRead(p_Var11,1);
      if (iVar6 == 0) {
        _inconsistency();
      }
      if ((((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
           (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
          ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
           ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
         (p_Var11->pESTypeList == (ESTypeList *)0x0)) {
        _inconsistency();
      }
      p_Var5 = __getptd();
      if (p_Var5->_curexcspec != (void *)0x0) {
        p_Var5 = __getptd();
        piVar2 = p_Var5->_curexcspec;
        p_Var5 = __getptd();
        iVar6 = 0;
        p_Var5->_curexcspec = (void *)0x0;
        uVar3 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
        p_Var11 = (_s_FuncInfo *)param_1;
        if (uVar3 == '\0') {
          iVar8 = 0;
          if (0 < *piVar2) {
            do {
              bVar4 = type_info::operator==
                                (*(type_info **)(iVar8 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar4) {
                ___DestructExceptionObject((int *)param_1);
                param_1 = (EHExceptionRecord *)s_bad_exception_1001fc84;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_1002375c);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_10014e40;
        }
      }
    }
    p_Var10 = param_5;
    if (((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var7 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
        for (; local_14 < local_20; local_14 = local_14 + 1) {
          if ((p_Var7->tryLow <= local_c) && (local_c <= p_Var7->tryHigh)) {
            local_10 = p_Var7->pHandlerArray;
            for (local_1c = p_Var7->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
              pHVar9 = p_Var11->pESTypeList[1].pTypeArray;
              for (local_18 = pHVar9->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                pHVar9 = (HandlerType *)&pHVar9->pType;
                p_Var10 = *(_s_FuncInfo **)pHVar9;
                iVar6 = ___TypeMatch((byte *)local_10,(byte *)p_Var10,(uint *)p_Var11->pESTypeList);
                if (iVar6 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var11,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var10,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,(uchar)SUB41(in_stack_ffffffd0,0));
                  p_Var11 = (_s_FuncInfo *)param_1;
                  goto LAB_10014f6a;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_10014f6a:
          p_Var7 = p_Var7 + 1;
        }
      }
      p_Var10 = param_5;
      if (param_6 != '\0') {
        ___DestructExceptionObject((int *)p_Var11);
      }
      if ((((local_5 != '\0') || ((p_Var10->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var10->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar3 = IsInExceptionSpec((EHExceptionRecord *)p_Var11,(_s_ESTypeList *)unaff_EDI),
         uVar3 != '\0')) goto LAB_10015040;
      __getptd();
      __getptd();
      p_Var5 = __getptd();
      p_Var5->_curexception = p_Var11;
      p_Var5 = __getptd();
      p_Var5->_curcontext = param_3;
      pEVar12 = param_8;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar12 = param_2;
      }
      _UnwindNestedFrames(pEVar12,(EHExceptionRecord *)p_Var11);
      p_Var11 = param_5;
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
      CallUnexpected(p_Var11->pESTypeList);
      p_Var10 = param_5;
    }
  }
  if (p_Var10->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_10014e40:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_10015040:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/**************************************************/

/* Function: ___InternalCxxFrameHandler @ 10015070 */

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}



/**************************************************/

/* Function: terminate @ 10015154 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



/**************************************************/

/* Function: unexpected @ 1001518d */

/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}



/**************************************************/

/* Function: _inconsistency @ 100151a0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10012a28(DAT_1002a4e4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/**************************************************/

/* Function: __initp_eh_hooks @ 100151d7 */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_1002a4e4 = FUN_100129b1(0x10015154);
  return;
}



/**************************************************/

/* Function: __CallSettingFrame@12 @ 100151f0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}



/**************************************************/

/* Function: __mbsnbcpy_s_l @ 1001523c */

/* Library Function - Single Match
    __mbsnbcpy_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__mbsnbcpy_s_l(uchar *_Dst,size_t _DstSizeInBytes,uchar *_Src,size_t _MaxCount,_locale_t _Locale)

{
  byte *pbVar1;
  uchar uVar2;
  DWORD *pDVar3;
  errno_t eVar4;
  uchar *puVar5;
  uchar *puVar6;
  int iVar7;
  size_t sVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte *local_8;
  
  if (_MaxCount == 0) {
    if (_Dst == (uchar *)0x0) {
      if (_DstSizeInBytes == 0) {
        return 0;
      }
      goto LAB_10015267;
    }
  }
  else if (_Dst == (uchar *)0x0) goto LAB_10015267;
  if (_DstSizeInBytes == 0) {
LAB_10015267:
    pDVar3 = FUN_1000e777();
    *pDVar3 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (_MaxCount == 0) {
    *_Dst = '\0';
    return 0;
  }
  if (_Src == (uchar *)0x0) {
    *_Dst = '\0';
    pDVar3 = FUN_1000e777();
    *pDVar3 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if ((local_18.mbcinfo)->ismbcodepage == 0) {
    eVar4 = _strncpy_s((char *)_Dst,_DstSizeInBytes,(char *)_Src,_MaxCount);
    goto LAB_10015428;
  }
  puVar5 = _Dst;
  sVar8 = _DstSizeInBytes;
  if (_MaxCount == 0xffffffff) {
    do {
      uVar2 = *_Src;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      _Src = _Src + 1;
      if (uVar2 == '\0') break;
      sVar8 = sVar8 - 1;
    } while (sVar8 != 0);
  }
  else {
    do {
      puVar6 = puVar5;
      uVar2 = *_Src;
      *puVar6 = uVar2;
      puVar5 = puVar6 + 1;
      _Src = _Src + 1;
      if ((uVar2 == '\0') || (sVar8 = sVar8 - 1, sVar8 == 0)) break;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    if (_MaxCount == 0) {
      *puVar5 = '\0';
      puVar5 = puVar6 + 2;
    }
  }
  if (sVar8 != 0) {
    if ((int)puVar5 - (int)_Dst < 2) {
LAB_10015436:
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
    pbVar9 = puVar5 + -2;
    pbVar1 = pbVar9;
    while ((_Dst <= pbVar1 && (iVar7 = __ismbblead_l((uint)*pbVar1,&local_18), iVar7 != 0))) {
      pbVar1 = pbVar1 + -1;
    }
    if (((int)pbVar9 - (int)pbVar1 & 1U) == 0) goto LAB_10015436;
LAB_1001541a:
    *pbVar9 = 0;
    pDVar3 = FUN_1000e777();
    eVar4 = 0x2a;
    *pDVar3 = 0x2a;
LAB_10015428:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      return eVar4;
    }
    return eVar4;
  }
  if ((*_Src == '\0') || (_MaxCount == 1)) {
    pbVar9 = puVar5 + -1;
    local_8 = pbVar9;
    while ((_Dst <= local_8 && (iVar7 = __ismbblead_l((uint)*local_8,&local_18), iVar7 != 0))) {
      local_8 = local_8 + -1;
    }
    if (((int)pbVar9 - (int)local_8 & 1U) != 0) goto LAB_1001541a;
  }
  if (_MaxCount != 0xffffffff) {
    *_Dst = '\0';
    pDVar3 = FUN_1000e777();
    *pDVar3 = 0x22;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      return 0x22;
    }
    return 0x22;
  }
  if (1 < _DstSizeInBytes) {
    pbVar9 = _Dst + (_DstSizeInBytes - 2);
    pbVar1 = pbVar9;
    while ((_Dst <= pbVar1 && (iVar7 = __ismbblead_l((uint)*pbVar1,&local_18), iVar7 != 0))) {
      pbVar1 = pbVar1 + -1;
    }
    if (((int)pbVar9 - (int)pbVar1 & 1U) != 0) {
      *pbVar9 = 0;
      goto LAB_100153a3;
    }
  }
  _Dst[_DstSizeInBytes - 1] = '\0';
LAB_100153a3:
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return 0x50;
}



/**************************************************/

/* Function: __local_unwind4 @ 1001544c */

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_100154dc;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1002696c ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_10018c2c();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_10015522 @ 10015522 */

void FUN_10015522(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 1001553e */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



/**************************************************/

/* Function: _EH4_TransferToHandler @ 10015555 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1001556c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 1001556e */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10015583,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 10015588 */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/**************************************************/

/* Function: __ValidateImageBase @ 100155a0 */

/* Library Function - Single Match
    __ValidateImageBase
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}



/**************************************************/

/* Function: __FindPESection @ 100155d0 */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2005 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



/**************************************************/

/* Function: __IsNonwritableInCurrentImage @ 10015620 */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_1002696c ^ 0x100237f0;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10000000,(DWORD_PTR)(pTarget + -0x10000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/**************************************************/

/* Function: __flsbuf @ 100156db */

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  DWORD *pDVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint uVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar6 = _File_00->_flag;
  if ((uVar6 & 0x82) == 0) {
    pDVar2 = FUN_1000e777();
    *pDVar2 = 9;
LAB_100156ff:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    pDVar2 = FUN_1000e777();
    *pDVar2 = 0x22;
    goto LAB_100156ff;
  }
  if ((uVar6 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      _File_00->_flag = uVar6 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = _File_00->_flag;
  _File_00->_flag = uVar6 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar3 = FUN_1001950f(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_1001950f(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
      (iVar4 = __isatty((int)_File), iVar4 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108) == 0) {
    uVar6 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar6 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar6 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar5 = &DAT_10027320;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x38 + (&DAT_1002b6e0)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_10015825;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_10015825:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/**************************************************/

/* Function: _strspn @ 10015840 */

/* Library Function - Single Match
    _strspn
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl _strspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0);
  return sVar2;
}



/**************************************************/

/* Function: _strcspn @ 10015890 */

/* Library Function - Single Match
    _strcspn
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



/**************************************************/

/* Function: write_char @ 100158d6 */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}



/**************************************************/

/* Function: write_multi_char @ 10015909 */

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}



/**************************************************/

/* Function: write_string @ 100162c1 */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  DWORD *pDVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        pDVar1 = FUN_1000e777();
        if (*pDVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}



/**************************************************/

/* Function: __forcdecpt_l @ 10016cbb */

/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/**************************************************/

/* Function: __cropzeros_l @ 10016d2c */

/* Library Function - Single Match
    __cropzeros_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  char *pcVar2;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/**************************************************/

/* Function: __fassign_l @ 10016dc2 */

/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}



/**************************************************/

/* Function: __shift @ 10016e19 */

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2005 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}



/**************************************************/

/* Function: __cftoe2_l @ 10016e52 */

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  DWORD *pDVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Dst;
  DWORD DVar7;
  DWORD DVar8;
  char *pcVar9;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    pDVar1 = FUN_1000e777();
    DVar7 = 0x16;
  }
  else {
    iVar3 = param_2;
    if (param_2 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar5 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar5 = in_EAX + 1;
      }
      puVar6 = puVar5;
      if (0 < param_2) {
        puVar6 = puVar5 + 1;
        *puVar5 = *puVar6;
        *puVar6 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar6 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_EAX + (param_1 - (int)_Dst);
      }
      pcVar9 = "e+000";
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar3 = param_4[1] + -1;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          _Dst[1] = '-';
        }
        if (99 < iVar3) {
          pcVar9 = (char *)0x64;
          iVar4 = iVar3 / 100;
          iVar3 = iVar3 % 100;
          _Dst[2] = _Dst[2] + (char)iVar4;
        }
        if (9 < iVar3) {
          pcVar9 = (char *)0xa;
          iVar4 = iVar3 / 10;
          iVar3 = iVar3 % 10;
          _Dst[3] = _Dst[3] + (char)iVar4;
        }
        _Dst[4] = _Dst[4] + (char)iVar3;
      }
      if (((DAT_1002a628 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return (DWORD)pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return (DWORD)pcVar9;
    }
    pDVar1 = FUN_1000e777();
    DVar7 = 0x22;
  }
  DVar8 = 0;
  *pDVar1 = DVar7;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return DVar8;
}



/**************************************************/

/* Function: __cftoe_l @ 10016fbf */

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  DWORD *pDVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30.sign,'\0',param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __cftoe @ 1001708d */

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}



/**************************************************/

/* Function: __cftoa_l @ 100170ab */

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  DWORD *pDVar2;
  size_t _SizeInBytes;
  errno_t eVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar8;
  DWORD unaff_EBX;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  DWORD DVar14;
  DWORD DVar15;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_1000e777();
    DVar14 = 0x16;
LAB_100170e4:
    DVar15 = 0;
    *pDVar2 = DVar14;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return DVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    pDVar2 = FUN_1000e777();
    DVar14 = 0x22;
    goto LAB_100170e4;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar3 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar3 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return unaff_EBX;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return unaff_EBX;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar4 = _strrchr(param_2 + 2,0x65);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar4[3] = '\0';
    }
    goto LAB_10017408;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar8 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar10 = param_2 + 3;
  pcVar4 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar10 = '\0';
  }
  else {
    *pcVar10 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar12 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar12 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar8;
      }
      local_8 = local_8 + -4;
      *pcVar4 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar4 = pcVar4 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar12 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar9 = pcVar4, 8 < (ushort)uVar12)) {
      while( true ) {
        pcVar5 = pcVar9 + -1;
        if ((*pcVar5 != 'f') && (*pcVar5 != 'F')) break;
        *pcVar5 = '0';
        pcVar9 = pcVar5;
      }
      if (pcVar5 == pcVar10) {
        pcVar9[-2] = pcVar9[-2] + '\x01';
      }
      else if (*pcVar5 == '9') {
        *pcVar5 = (char)sVar8 + ':';
      }
      else {
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar4,0x30,param_4);
    pcVar4 = pcVar4 + param_4;
  }
  if (*pcVar10 == '\0') {
    pcVar4 = pcVar10;
  }
  *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar12 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar6 = (uint)(uVar12 & 0x7ff);
  uVar7 = uVar6 - local_18;
  uVar6 = -(uint)(uVar6 < local_18);
  if ((int)uVar6 < 0) {
    pcVar4[1] = '-';
    bVar11 = uVar7 != 0;
    uVar7 = -uVar7;
    uVar6 = -(uVar6 + bVar11);
  }
  else {
    pcVar4[1] = '+';
  }
  pcVar9 = pcVar4 + 2;
  *pcVar9 = '0';
  pcVar10 = pcVar9;
  if (((int)uVar6 < 0) || (((int)uVar6 < 1 && (uVar7 < 1000)))) {
LAB_100173b7:
    if ((-1 < (int)uVar6) && ((0 < (int)uVar6 || (99 < uVar7)))) goto LAB_100173c2;
  }
  else {
    uVar13 = __alldvrm(uVar7,uVar6,1000,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar9 = (char)uVar13 + '0';
    pcVar10 = pcVar4 + 3;
    uVar6 = 0;
    uVar7 = extraout_ECX;
    if (pcVar10 == pcVar9) goto LAB_100173b7;
LAB_100173c2:
    uVar13 = __alldvrm(uVar7,uVar6,100,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar10 = (char)uVar13 + '0';
    pcVar10 = pcVar10 + 1;
    uVar6 = 0;
    uVar7 = extraout_ECX_00;
  }
  if ((pcVar10 != pcVar9) || ((-1 < (int)uVar6 && ((0 < (int)uVar6 || (9 < uVar7)))))) {
    uVar13 = __alldvrm(uVar7,uVar6,10,0);
    *pcVar10 = (char)uVar13 + '0';
    pcVar10 = pcVar10 + 1;
    uVar7 = extraout_ECX_01;
  }
  *pcVar10 = (char)uVar7 + '0';
  pcVar10[1] = '\0';
LAB_10017408:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}



/**************************************************/

/* Function: __cftof2_l @ 1001741c */

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  DWORD *pDVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    pDVar2 = FUN_1000e777();
    uVar4 = 0x16;
    *pDVar2 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      puVar3 = (undefined1 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this);
      *puVar3 = 0x30;
      puVar3[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      __shift();
      *(undefined1 *)this = 0x30;
      puVar3 = (undefined1 *)((int)this + 1);
    }
    else {
      puVar3 = (undefined1 *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar3 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar5 <= (int)param_2)) {
          param_2 = sVar5;
        }
        __shift();
        _memset(puVar3 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/**************************************************/

/* Function: __cftof_l @ 10017511 */

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  DWORD *pDVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_2,param_3,param_4,'\0',param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __cftog_l @ 100175ca */

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  DWORD *pDVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_1000e777();
    *pDVar2 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || ((int)param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34.sign,'\x01',param_6);
      }
      else {
        pcVar1 = param_2 + (local_34.sign == 0x2d);
        if (local_24 < local_34.decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        __cftof2_l(param_2,param_3,param_4,'\x01',param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __cfltcvt_l @ 100176c2 */

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  errno_t extraout_EAX;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
      eVar1 = extraout_EAX;
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}



/**************************************************/

/* Function: __cfltcvt @ 10017748 */

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}



/**************************************************/

/* Function: __initp_misc_cfltcvt_tab @ 10017769 */

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2005 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_10027428 + uVar3);
    iVar2 = FUN_100129b1(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: __setdefaultprecision @ 10017788 */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2005 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}



/**************************************************/

/* Function: __ms_p5_test_fdiv @ 100177b1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_1001fd78 - (_DAT_1001fd78 / _DAT_1001fd80) * _DAT_1001fd80) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: __ms_p5_mp_test_fdiv @ 100177ed */

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2005 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}



/**************************************************/

/* Function: _abort @ 10017816 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if ((DAT_10027450 & 1) != 0) {
    FUN_10011b9e(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if ((DAT_10027450 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



/**************************************************/

/* Function: FUN_10017909 @ 10017909 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10017909(undefined4 param_1)

{
  _DAT_1002a4f0 = param_1;
  return;
}



/**************************************************/

/* Function: strtoxl @ 10017913 */

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  DWORD *pDVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    pDVar3 = FUN_1000e777();
    *pDVar3 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = (byte)ptVar5[1].lc_category[0].locale[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_100179ca:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_100179ca;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_10017a30;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_10017a30;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_10017a30;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_10017a30:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_10017a8a:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          pDVar3 = FUN_1000e777();
          *pDVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_10017a8a;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_10017a8a;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: _strtol @ 10017b3e */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1002a390 == 0) {
    ppuVar2 = &PTR_DAT_10027300;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: __initp_misc_winsig @ 10017b67 */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_1002a4f4 = param_1;
  DAT_1002a4f8 = param_1;
  DAT_1002a4fc = param_1;
  DAT_1002a500 = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 10017b80 */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2005 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_100273dc * 0xc + param_1);
  if ((DAT_100273dc * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 10017bb4 */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_10012a28(DAT_1002a4fc);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 10017bc1 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD *pDVar7;
  DWORD local_34;
  DWORD local_30;
  int local_28;
  
  pDVar7 = (DWORD *)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_1002a4f4;
        iVar3 = DAT_1002a4f4;
        goto LAB_10017c76;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10017c54;
        if (_SigNum != 8) goto LAB_10017c38;
      }
    }
    pDVar7 = FUN_10012bcd();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_1002a500;
      iVar3 = DAT_1002a500;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_1002a4f8;
      iVar3 = DAT_1002a4f8;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10017c38:
        pDVar7 = FUN_1000e777();
        *pDVar7 = 0x16;
        FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10017c54:
      puVar6 = &DAT_1002a4fc;
      iVar3 = DAT_1002a4fc;
    }
LAB_10017c76:
    bVar1 = true;
    pcVar4 = (code *)FUN_10012a28(iVar3);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = pDVar7[0x18];
    pDVar7[0x18] = 0;
    if (_SigNum == 8) {
      local_34 = pDVar7[0x19];
      pDVar7[0x19] = 0x8c;
      goto LAB_10017cda;
    }
  }
  else {
LAB_10017cda:
    if (_SigNum == 8) {
      for (local_28 = DAT_100273d0; local_28 < DAT_100273d4 + DAT_100273d0; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_10017d14;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_10017d14:
  FUN_10017d35();
  if (_SigNum == 8) {
    (*pcVar4)(8,pDVar7[0x19]);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  pDVar7[0x18] = local_30;
  if (_SigNum == 8) {
    pDVar7[0x19] = local_34;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10017d35 @ 10017d35 */

void FUN_10017d35(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_10010f96(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_10017d71 @ 10017d71 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10017d71(undefined4 param_1)

{
  _DAT_1002a508 = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10017d7b @ 10017d7b */

void __cdecl FUN_10017d7b(undefined4 param_1)

{
  DAT_1002a50c = param_1;
  return;
}



/**************************************************/

/* Function: ___crtInitCritSecNoSpinCount@8 @ 10017d85 */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 10017d95 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10023830;
  uStack_c = 0x10017da1;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_10012a28(DAT_1002a50c);
  if (pcVar1 != (FARPROC)0x0) goto LAB_10017e0b;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_10017dfa:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_10017dfa;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_10017dfa;
  }
  DAT_1002a50c = FUN_100129b1((int)pcVar1);
LAB_10017e0b:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: _strrchr @ 10017e60 */

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



/**************************************************/

/* Function: FUN_10017f42 @ 10017f42 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017f42(void)

{
  _DAT_1002b6c4 = 0;
  return;
}



/**************************************************/

/* Function: FUN_10017f4a @ 10017f4a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10017f4a(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 10017f9a */

/* WARNING: Removing unreachable block (ram,0x10017fd5) */
/* WARNING: Removing unreachable block (ram,0x10017fc2) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10017f4a(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: FUN_10018007 @ 10018007 */

undefined4 __cdecl FUN_10018007(undefined4 param_1,undefined4 param_2,uint param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 local_24 [8];
  byte local_1c;
  undefined1 local_18 [4];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = __encoded_null();
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  if (DAT_1002a5c8 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1002a5c8 = FUN_100129b1((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_1002a5cc = FUN_100129b1((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_1002a5d0 = FUN_100129b1((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_1002a5d8 = FUN_100129b1((int)pFVar1);
      if (DAT_1002a5d8 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_1002a5d4 = FUN_100129b1((int)pFVar1);
      }
    }
  }
  if ((DAT_1002a5d4 != local_c) && (DAT_1002a5d8 != local_c)) {
    pcVar3 = (code *)FUN_10012a28(DAT_1002a5d4);
    pcVar4 = (code *)FUN_10012a28(DAT_1002a5d8);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar2 = (*pcVar3)(), iVar2 == 0 ||
         (iVar2 = (*pcVar4)(iVar2,1,local_24,0xc,local_18), iVar2 == 0)) || ((local_1c & 1) == 0))))
    {
      iVar2 = __get_winmajor(&local_14);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_14 < 4) {
        param_3 = param_3 | 0x40000;
      }
      else {
        param_3 = param_3 | 0x200000;
      }
      goto LAB_1001819d;
    }
  }
  if ((((DAT_1002a5cc != local_c) &&
       (pcVar3 = (code *)FUN_10012a28(DAT_1002a5cc), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_1002a5d0 != local_c &&
      (pcVar3 = (code *)FUN_10012a28(DAT_1002a5d0), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1001819d:
  pcVar3 = (code *)FUN_10012a28(DAT_1002a5c8);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/**************************************************/

/* Function: __set_error_mode @ 100181c4 */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_10029b74;
      DAT_10029b74 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_10029b74;
    }
  }
  pDVar2 = FUN_1000e777();
  *pDVar2 = 0x16;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: __crtGetStringTypeA_stat @ 1001820a */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_1002a5dc == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1002a5dc = 2;
      }
      goto LAB_10018263;
    }
    DAT_1002a5dc = 1;
  }
  else {
LAB_10018263:
    if ((DAT_1002a5dc == 2) || (DAT_1002a5dc == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if ((puVar5 != (ushort *)0xffffffff) &&
         (((puVar5 == param_5 ||
           (_Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,
                                           (uint *)&param_3,(LPSTR)0x0,0), param_2 = (ulong)_Memory,
           _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_100183b0;
    }
    if (DAT_1002a5dc != 1) goto LAB_100183b0;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_100183b0;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_100182f3:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_100182f3;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_100183b0:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 100183c2 */

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/**************************************************/

/* Function: ___free_lc_time @ 10018402 */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_num @ 10018592 */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10027648) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1002764c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10027650) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 100185d2 */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10027654) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10027658) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1002765c) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10027660) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10027664) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10027668) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1002766c) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: _strpbrk @ 10018660 */

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



/**************************************************/

/* Function: ___ansicp @ 100186a0 */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___convertcp @ 100186e7 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_10018887;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_10018887;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_100187c7:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_100187c7;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = __calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_10018887:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_10018899 @ 10018899 */

void __cdecl FUN_10018899(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}



/**************************************************/

/* Function: __VEC_memcpy @ 10018920 */

/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_10018899(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}



/**************************************************/

/* Function: exception @ 10018a03 */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}



/**************************************************/

/* Function: FUN_10018a51 @ 10018a51 */

undefined4 * __thiscall FUN_10018a51(void *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = std::exception::vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)((int)this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)((int)this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    *(char **)((int)this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}



/**************************************************/

/* Function: ~exception @ 10018aa9 */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = std::exception::vftable;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}



/**************************************************/

/* Function: FUN_10018abf @ 10018abf */

char * __fastcall FUN_10018abf(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/**************************************************/

/* Function: FUN_10018acc @ 10018acc */

exception * __thiscall FUN_10018acc(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: _ValidateRead @ 10018ae8 */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/**************************************************/

/* Function: __global_unwind2 @ 10018af8 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10018b10,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 10018b5d */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_10018b18;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_10018c2c();
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify1 @ 10018c04 */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1002769c = param_1;
  DAT_10027698 = in_EAX;
  DAT_100276a0 = unaff_EBP;
  return in_EAX;
}



/**************************************************/

/* Function: __NLG_Notify @ 10018c0d */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1002769c = param_1;
  DAT_10027698 = in_EAX;
  DAT_100276a0 = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_10018c2c @ 10018c2c */

void FUN_10018c2c(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: __lseeki64_nolock @ 10018c2f */

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000e777();
    *pDVar2 = 9;
LAB_10018c5e:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_1000e79d(DVar4);
        goto LAB_10018c5e;
      }
    }
    pbVar1 = (byte *)((&DAT_1002b6e0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/**************************************************/

/* Function: __lseeki64 @ 10018cb2 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  DWORD *pDVar1;
  int iVar2;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000e78a();
    *pDVar1 = 0;
    pDVar1 = FUN_1000e777();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1002b6c8)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_1002b6e0)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        pDVar1 = FUN_1000e78a();
        *pDVar1 = 0;
        pDVar1 = FUN_1000e777();
        *pDVar1 = 9;
        FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_1002b6e0)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1000e777();
          *pDVar1 = 9;
          pDVar1 = FUN_1000e78a();
          *pDVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_10018dc1();
      }
      goto LAB_10018dbb;
    }
    pDVar1 = FUN_1000e78a();
    *pDVar1 = 0;
    pDVar1 = FUN_1000e777();
    *pDVar1 = 9;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_10018dbb:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/**************************************************/

/* Function: FUN_10018dc1 @ 10018dc1 */

void FUN_10018dc1(void)

{
  int unaff_EBP;
  
  FUN_1001a2aa(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __write_nolock @ 10018dcb */

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR *pWVar1;
  char cVar2;
  wchar_t *pwVar3;
  WCHAR WVar4;
  wchar_t wVar5;
  DWORD *pDVar6;
  int iVar7;
  _ptiddata p_Var8;
  BOOL BVar9;
  DWORD DVar10;
  int iVar11;
  uint uVar12;
  WCHAR *pWVar13;
  uint uVar14;
  char *pcVar15;
  int unaff_EDI;
  int *piVar16;
  UINT local_598;
  uint local_594;
  WCHAR *local_590;
  int *local_58c;
  char *local_588;
  int local_584;
  WCHAR *local_580;
  char *local_57c;
  WCHAR *local_578;
  char local_571;
  DWORD local_570;
  WCHAR *local_56c;
  WCHAR local_568 [38];
  undefined1 local_51c [264];
  CHAR local_414 [688];
  WCHAR local_164 [170];
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_1001937b;
  if (_Buf == (void *)0x0) {
    pDVar6 = FUN_1000e78a();
    *pDVar6 = 0;
    pDVar6 = FUN_1000e777();
    *pDVar6 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1001937b;
  }
  iVar11 = (_FileHandle & 0x1fU) * 0x38;
  piVar16 = &DAT_1002b6e0 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar16 + iVar11 + 0x24) * '\x02') >> 1;
  local_58c = piVar16;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    pDVar6 = FUN_1000e78a();
    *pDVar6 = 0;
    pDVar6 = FUN_1000e777();
    *pDVar6 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1001937b;
  }
  if ((*(byte *)(*piVar16 + iVar11 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar16) & 0x80) == 0)) {
LAB_100190b6:
    if ((*(byte *)((undefined4 *)(*piVar16 + iVar11) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar16 + iVar11),local_580,_MaxCharCount,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_10019310:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_10019319:
      piVar16 = local_58c;
      if (local_57c != (char *)0x0) goto LAB_1001937b;
      goto LAB_10019323;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_1001934a;
      do {
        local_578 = (WCHAR *)0x0;
        uVar12 = (int)local_56c - (int)local_580;
        pWVar13 = local_568;
        do {
          if (_MaxCharCount <= uVar12) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          uVar12 = uVar12 + 1;
          if ((char)WVar4 == '\n') {
            local_584 = local_584 + 1;
            *(char *)pWVar13 = '\r';
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          *(char *)pWVar13 = (char)WVar4;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          local_56c = pWVar1;
        } while (local_578 < (WCHAR *)0x400);
        BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_568,(int)pWVar13 - (int)local_568,
                          (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_10019310;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_10019319;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (_MaxCharCount != 0) {
        do {
          uVar14 = 0;
          uVar12 = (int)local_56c - (int)local_580;
          pWVar13 = local_568;
          do {
            if (_MaxCharCount <= uVar12) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            uVar12 = uVar12 + 2;
            if (WVar4 == L'\n') {
              local_584 = local_584 + 2;
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              uVar14 = uVar14 + 2;
            }
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
            uVar14 = uVar14 + 2;
            piVar16 = local_58c;
            local_56c = pWVar1;
          } while (uVar14 < 0x3ff);
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_568,(int)pWVar13 - (int)local_568,
                            (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_10019310;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_10019319;
      }
    }
    else {
      local_578 = local_580;
      if (_MaxCharCount != 0) {
        do {
          local_56c = (WCHAR *)0x0;
          uVar12 = (int)local_578 - (int)local_580;
          pWVar13 = local_164;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            uVar12 = uVar12 + 2;
            if (WVar4 == L'\n') {
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              local_56c = local_56c + 1;
            }
            local_56c = local_56c + 1;
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
          } while (local_56c < (WCHAR *)0x152);
          pcVar15 = (char *)0x0;
          iVar7 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar13 - (int)local_164) / 2,
                                      local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) goto LAB_10019310;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_58c),local_414 + (int)pcVar15,
                              iVar7 - (int)pcVar15,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar15 = pcVar15 + (int)local_588;
          } while ((int)pcVar15 < iVar7);
        } while ((iVar7 <= (int)pcVar15) &&
                (local_57c = (char *)((int)local_578 - (int)local_580), local_57c < _MaxCharCount));
        goto LAB_10019319;
      }
    }
LAB_1001934a:
    DVar10 = 0;
    if (((*(byte *)(iVar11 + 4 + *piVar16) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_1001937b;
    pDVar6 = FUN_1000e777();
    *pDVar6 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar16),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_100190b6;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (_MaxCharCount != 0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar13 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar7 = _isleadbyte(CONCAT22(cVar2 >> 7,(short)cVar2));
          if (iVar7 == 0) {
            iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,1);
            if (iVar7 == -1) break;
          }
          else {
            if (((char *)((int)local_580 + (_MaxCharCount - (int)pWVar13)) < (char *)0x2) ||
               (iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,2), iVar7 == -1)) break;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          DVar10 = WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
          if (DVar10 == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,DVar10,(LPDWORD)&local_56c,
                            (LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_10019310;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)DVar10) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_10019310;
            if ((int)local_56c < 1) break;
            local_584 = local_584 + 1;
            local_57c = local_57c + 1;
          }
        }
        else {
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            local_570 = (DWORD)(ushort)*local_590;
            local_594 = (uint)(*local_590 == L'\n');
            local_590 = local_590 + 1;
            local_578 = local_578 + 1;
          }
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            wVar5 = __putwch_nolock((wchar_t)local_570);
            if (wVar5 != (wchar_t)local_570) goto LAB_10019310;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_10019310;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_10019319;
    }
LAB_10019323:
    if (local_570 == 0) goto LAB_1001934a;
    DVar10 = 5;
    if (local_570 != 5) {
      FUN_1000e79d(local_570);
      goto LAB_1001937b;
    }
    pDVar6 = FUN_1000e777();
    *pDVar6 = 9;
  }
  pDVar6 = FUN_1000e78a();
  *pDVar6 = DVar10;
LAB_1001937b:
  iVar11 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar11;
}



/**************************************************/

/* Function: __write @ 10019391 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2005 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000e78a();
    *pDVar1 = 0;
    pDVar1 = FUN_1000e777();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1002b6c8)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_1002b6e0)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_1002b6e0)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1000e777();
          *pDVar1 = 9;
          pDVar1 = FUN_1000e78a();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_10019463();
        return local_20;
      }
    }
    pDVar1 = FUN_1000e78a();
    *pDVar1 = 0;
    pDVar1 = FUN_1000e777();
    *pDVar1 = 9;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10019463 @ 10019463 */

void FUN_10019463(void)

{
  int unaff_EBP;
  
  FUN_1001a2aa(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __getbuf @ 1001946d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_1002a620 = _DAT_1002a620 + 1;
  pcVar1 = __malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}



/**************************************************/

/* Function: __isatty @ 100194b1 */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  DWORD *pDVar1;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1002b6c8)) {
    return *(byte *)((&DAT_1002b6e0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
  }
  pDVar1 = FUN_1000e777();
  *pDVar1 = 9;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}



/**************************************************/

/* Function: FUN_1001950f @ 1001950f */

undefined ** FUN_1001950f(void)

{
  return &PTR_DAT_100276a8;
}



/**************************************************/

/* Function: __fileno @ 100196b0 */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  DWORD *pDVar1;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_1000e777();
    *pDVar1 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  return _File->_file;
}



/**************************************************/

/* Function: FUN_100196dd @ 100196dd */

bool FUN_100196dd(void)

{
  return DAT_1002a624 == (DAT_1002696c | 1);
}



/**************************************************/

/* Function: __mbtowc_l @ 100196f3 */

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  DWORD *pDVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_1001973e;
        }
        else {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,
                                           _DstCh,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
             (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
            pwVar1 = (local_14.locinfo)->locale_name[3];
            if (local_8 == '\0') {
              return (int)pwVar1;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return (int)pwVar1;
          }
        }
        pDVar3 = FUN_1000e777();
        *pDVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_1001973e:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}



/**************************************************/

/* Function: _mbtowc @ 10019806 */

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2005 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __isleadbyte_l @ 1001981d */

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}



/**************************************************/

/* Function: _isleadbyte @ 10019853 */

/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2005 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __wctomb_s_l @ 10019861 */

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_10019883:
    DVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      pDVar2 = FUN_1000e777();
      *pDVar2 = 0x16;
      FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_10019913;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_1001994a:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_10019883;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar3 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar3 == 0) {
        DVar1 = GetLastError();
        if (DVar1 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_10019913:
          pDVar2 = FUN_1000e777();
          *pDVar2 = 0x22;
          FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar3;
        }
        goto LAB_1001994a;
      }
    }
    pDVar2 = FUN_1000e777();
    *pDVar2 = 0x2a;
    pDVar2 = FUN_1000e777();
    DVar1 = *pDVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return DVar1;
}



/**************************************************/

/* Function: _wctomb_s @ 100199c0 */

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}



/**************************************************/

/* Function: __isdigit_l @ 100199db */

/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/**************************************************/

/* Function: _isdigit @ 10019a2a */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_1002a390 == 0) {
    return (byte)PTR_DAT_100272e8[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __tolower_l @ 10019a53 */

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DWORD *pDVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_10019ab2:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      pDVar4 = FUN_1000e777();
      *pDVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_10019ab2;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}



/**************************************************/

/* Function: _tolower @ 10019b6a */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_1002a390 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}



/**************************************************/

/* Function: FID_conflict:__atoflt_l @ 10019b91 */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1001b038((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10019be8:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10019c28;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10019c1a:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10019c28;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10019c1a;
    goto LAB_10019be8;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10019c28:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: FID_conflict:__atoflt_l @ 10019c37 */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1001b038((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10019c8e:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10019cce;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10019cc0:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10019cce;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10019cc0;
    goto LAB_10019c8e;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10019cce:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: __fptostr @ 10019cdd */

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  DWORD *pDVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    pDVar1 = FUN_1000e777();
    eVar7 = 0x16;
    *pDVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    iVar2 = _Digits;
    if (_Digits < 1) {
      iVar2 = 0;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      *_Buf = '0';
      pcVar3 = _Buf;
      for (; pcVar3 = pcVar3 + 1, 0 < _Digits; _Digits = _Digits + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Buf + 1);
        _memmove(_Buf,_Buf + 1,sVar4 + 1);
      }
      return 0;
    }
    pDVar1 = FUN_1000e777();
    eVar7 = 0x22;
    *pDVar1 = 0x22;
  }
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}



/**************************************************/

/* Function: ___dtold @ 10019d9a */

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = uVar2 & 0x7ff;
  uVar1 = *param_2;
  local_8 = 0x80000000;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_10019e4c;
    }
    uVar3 = uVar3 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    uVar3 = 0x7fff;
  }
  else {
    uVar3 = uVar3 + 0x3c00;
  }
  param_1[1] = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar1 << 0xb;
  while (local_8 == 0) {
    uVar1 = param_1[1];
    uVar3 = uVar3 - 1;
    param_1[1] = uVar1 * 2 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar1 * 2 & 0x80000000;
  }
  uVar4 = uVar4 | uVar3;
LAB_10019e4c:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/**************************************************/

/* Function: __fltout2 @ 10019e55 */

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  short local_30;
  char local_2e;
  char local_2c [24];
  uint local_14;
  uint uStack_10;
  ushort uStack_c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_1001b6f8(local_14,uStack_10,uStack_c,0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  eVar2 = _strcpy_s(_ResultStr,_SizeInBytes,local_2c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Flt->mantissa = _ResultStr;
  p_Var3 = (STRFLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var3;
}



/**************************************************/

/* Function: __alldvrm @ 10019ef0 */

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



/**************************************************/

/* Function: __aullshr @ 10019fd0 */

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2005 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}



/**************************************************/

/* Function: __controlfp_s @ 10019ff8 */

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  DWORD *pDVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    pDVar2 = FUN_1000e777();
    eVar3 = 0x16;
    *pDVar2 = 0x16;
    FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}



/**************************************************/

/* Function: __isctype_l @ 1001a062 */

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}



/**************************************************/

/* Function: FUN_1001a118 @ 1001a118 */

undefined4 __cdecl FUN_1001a118(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1002b6c8)) {
    iVar3 = (param_1 & 0x1f) * 0x38;
    piVar1 = (int *)((&DAT_1002b6e0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10029b78 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001a176;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001a176:
      *(undefined4 *)(iVar3 + (&DAT_1002b6e0)[(int)param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000e777();
  *pDVar2 = 9;
  pDVar2 = FUN_1000e78a();
  *pDVar2 = 0;
  return 0xffffffff;
}



/**************************************************/

/* Function: __get_osfhandle @ 1001a199 */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000e78a();
    *pDVar1 = 0;
    pDVar1 = FUN_1000e777();
    *pDVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1002b6c8)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_1002b6e0)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  pDVar1 = FUN_1000e78a();
  *pDVar1 = 0;
  pDVar1 = FUN_1000e777();
  *pDVar1 = 9;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: ___lock_fhandle @ 1001a20a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2005 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_1002b6e0)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_1001a2a1();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_1002b6e0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1001a2a1 @ 1001a2a1 */

void FUN_1001a2a1(void)

{
  FUN_10010f96(10);
  return;
}



/**************************************************/

/* Function: FUN_1001a2aa @ 1001a2aa */

void __cdecl FUN_1001a2aa(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1002b6e0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x38));
  return;
}



/**************************************************/

/* Function: __putwch_nolock @ 1001a2cc */

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  if (DAT_10027930 != 0) {
    if (DAT_10027a74 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_10027a74 == (HANDLE)0xffffffff) goto LAB_1001a375;
    BVar2 = WriteConsoleW(DAT_10027a74,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10027930 = 1;
      goto LAB_1001a375;
    }
    if ((DAT_10027930 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_1001a375;
    DAT_10027930 = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar3 = 0;
  CodePage = GetConsoleOutputCP();
  DVar3 = WideCharToMultiByte(CodePage,DVar3,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if (DAT_10027a74 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10027a74,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_1001a375:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



/**************************************************/

/* Function: FID_conflict:__ld12tod @ 1001a5b4 */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_1001aab3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1002793c - 1;
    iVar4 = (int)(DAT_1002793c + ((int)DAT_1002793c >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1002793c & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1001a6e7;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1001a6ee;
LAB_1001a6e7:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1001a6ee:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1001a6fc;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_1001a6fc:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_10027938 - DAT_1002793c)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10027938 < iVar12) {
        if (iVar12 < DAT_10027934) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10027948;
          iVar2 = (int)(DAT_10027940 + ((int)DAT_10027940 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10027940 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_10027940 + ((int)DAT_10027940 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10027940 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_10027948 + DAT_10027934;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1001aab3;
      }
      local_14 = DAT_10027938 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_1002793c - 1;
      iVar12 = (int)(DAT_1002793c + ((int)DAT_1002793c >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1002793c & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_1001a89f;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_1001a89f:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10027940 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_1001aab3:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10027940 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10027944 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10027944 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FID_conflict:__ld12tod @ 1001aaf6 */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_1001aff5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10027954 - 1;
    iVar4 = (int)(DAT_10027954 + ((int)DAT_10027954 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10027954 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1001ac29;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1001ac30;
LAB_1001ac29:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1001ac30:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1001ac3e;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_1001ac3e:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_10027950 - DAT_10027954)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10027950 < iVar12) {
        if (iVar12 < DAT_1002794c) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10027960;
          iVar2 = (int)(DAT_10027958 + ((int)DAT_10027958 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10027958 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_10027958 + ((int)DAT_10027958 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10027958 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_10027960 + DAT_1002794c;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1001aff5;
      }
      local_14 = DAT_10027950 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_10027954 - 1;
      iVar12 = (int)(DAT_10027954 + ((int)DAT_10027954 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10027954 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_1001ade1;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_1001ade1:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10027958 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_1001aff5:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10027958 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1002795c == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1002795c == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FUN_1001b038 @ 1001b038 */

void __cdecl
FUN_1001b038(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  DWORD *pDVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined *puVar20;
  short *psVar21;
  uint uVar22;
  undefined4 uVar23;
  ushort uVar24;
  char *pcVar25;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort uStack_38;
  ushort local_36;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  iVar15 = 0;
  pcVar25 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar8 = *param_3, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) ||
           (cVar8 == '\r')); param_3 = param_3 + 1) {
    }
LAB_1001b0bd:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_1001b0da:
        iVar15 = 3;
        goto LAB_1001b0dc;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_1001b0f1:
        iVar15 = 5;
        param_3 = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar15 = 2;
        param_3 = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_1001b10b;
          goto LAB_1001b296;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_1001b0bd;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1001b0da;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1001b142;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_1001b172;
      if (cVar8 == '0') goto LAB_1001b10b;
      goto LAB_1001b152;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1001b0da;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1001b0f1;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_1001b2c1;
LAB_1001b10b:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_1001b0bd;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1001b1e5;
LAB_1001b142:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_1001b0bd;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_1001b1e5:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_1001b172:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_1001b152:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_1001b296;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_1001b0bd;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_1001b0dc;
      }
      goto LAB_1001b2c1;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_1001b27d;
        if (cVar8 == '-') goto LAB_1001b271;
LAB_1001b264:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_1001b2c1;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_1001b0bd;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1001b264;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1001b296;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_1001b323;
    default:
      goto switchD_1001b0c9_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_1001b27d:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_1001b2c1;
LAB_1001b271:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_1001b0bd;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_1001b0c9_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_1001b0bd;
      goto LAB_1001b2c1;
    }
    iVar15 = 9;
LAB_1001b0dc:
    param_3 = pcVar18 + -1;
    goto LAB_1001b0bd;
  }
  pDVar10 = FUN_1000e777();
  *pDVar10 = 0x16;
  FUN_10010c11((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_1001b6b9;
LAB_1001b323:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_1001b33e;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_1001b323;
  }
  local_68 = 0x1451;
LAB_1001b33e:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_1001b296:
  param_3 = pcVar18 + -1;
LAB_1001b2c1:
  *param_2 = (int)param_3;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar25 = pcVar25 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_1001b69b;
    while (pcVar25 = pcVar25 + -1, *pcVar25 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar13 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_1001b69b;
      puVar20 = &DAT_10027a18;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_10027b78;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x1001b3c9:
        if (local_58 != (char *)0x0) {
          uVar16 = (int)local_58 >> 3;
          puVar20 = puVar20 + 0x54;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar16;
          if (uVar11 != 0) {
            puVar12 = (ushort *)(puVar20 + uVar11 * 0xc);
            if (0x7fff < *puVar12) {
              local_4c = (ushort)*(undefined4 *)puVar12;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar12 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar12 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar12 + 4);
              iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar15;
              uStack_4a._2_2_ = (undefined2)((uint)iVar15 >> 0x10);
              puVar12 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar16 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar3 = 0;
            uStack_26 = 0;
            uVar14 = local_36 & 0x7fff;
            uVar17 = puVar12[5] & 0x7fff;
            uVar9 = (puVar12[5] ^ local_36) & 0x8000;
            uVar24 = uVar17 + uVar14;
            uVar22 = 0;
            iVar1 = 0;
            if (((uVar14 < 0x7fff) && (uVar22 = 0, iVar1 = 0, uVar17 < 0x7fff)) &&
               (uVar22 = uVar16, iVar1 = iVar3, uVar24 < 0xbffe)) {
              if (0x3fbf < uVar24) {
                if (((uVar14 == 0) &&
                    (uVar24 = uVar24 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar13 == 0 && (uVar2 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar17 == 0) &&
                         (uVar24 = uVar24 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar12 + 2) == 0 && (*(int *)puVar12 == 0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar2 = 0;
                  iVar13 = 0;
                }
                else {
                  local_6c = 0;
                  psVar21 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar12 + 4;
                      do {
                        bVar4 = false;
                        uVar22 = *(uint *)(psVar21 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar22 < *(uint *)(psVar21 + -2)) ||
                           (uVar22 < (uint)*local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar21 + -2) = uVar22;
                        if (bVar4) {
                          *psVar21 = *psVar21 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar21 = psVar21 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar24 = uVar24 + 0xc002;
                  if ((short)uVar24 < 1) {
LAB_1001b57f:
                    uVar24 = uVar24 - 1;
                    if ((short)uVar24 < 0) {
                      uVar22 = (uint)(ushort)-uVar24;
                      uVar24 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar13 << 0x1f) >> 0x10);
                        uVar16 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar22 = uVar22 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar16;
                        uStack_2f = (undefined1)(uVar16 >> 8);
                      } while (uVar22 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar14 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar14 >> 0xf;
                      iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar13 | (ushort)uStack_2a >> 0xf;
                      uVar24 = uVar24 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar13 >> 0x10);
                    } while (0 < (short)uVar24);
                    if ((short)uVar24 < 1) goto LAB_1001b57f;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar22 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar24 = uVar24 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar22;
                      uStack_2e._2_2_ = (ushort)(uVar22 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar24) goto LAB_1001b63e;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x1001b3c9;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_1001b63e:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar13 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar13;
            local_36 = (ushort)((uint)iVar13 >> 0x10);
            uVar2 = 0;
            iVar13 = 0;
          }
          goto joined_r0x1001b3c9;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar13 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar13;
      local_40._2_2_ = (undefined2)(uVar2 >> 0x10);
      local_40._0_2_ = (undefined2)uVar2;
      uVar23 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar24 = local_36;
      uStack_4a = iVar15;
      uStack_2e = uVar22;
      uStack_2a = iVar1;
      local_3c = iVar13;
    }
    else {
      uVar23 = 0;
      uVar24 = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_1001b69b:
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar24 = 0;
    uVar19 = 0;
    uVar23 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar24 | uVar7;
  *(undefined4 *)(param_1 + 1) = uVar23;
  *(undefined4 *)(param_1 + 3) = uVar19;
LAB_1001b6b9:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_1001b6f8 @ 1001b6f8 */

/* WARNING: Removing unreachable block (ram,0x1001bbe9) */
/* WARNING: Removing unreachable block (ram,0x1001bbf3) */
/* WARNING: Removing unreachable block (ram,0x1001bbf8) */

void __cdecl
FUN_1001b6f8(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  errno_t eVar6;
  short *psVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar23;
  ushort uVar24;
  char *pcVar25;
  undefined *local_6c;
  ushort *local_60;
  ushort *local_5c;
  ushort *local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  uint local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10._0_2_ = (ushort)param_2;
  iVar17 = CONCAT22((ushort)local_10,uStack_12);
  local_10._2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  uVar8 = param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar8 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar14 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    goto LAB_1001bf76;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1001b827;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_1001b827:
          pcVar25 = "1#QNAN";
          goto LAB_1001b82c;
        }
        pcVar25 = "1#IND";
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar25 = "1#SNAN";
LAB_1001b82c:
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    goto LAB_1001bf76;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_10027a18;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_10027b78;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_1001bb4d;
      puVar10 = (ushort *)(local_6c + (uVar14 & 7) * 0xc);
      if (0x7fff < *puVar10) {
        local_40 = (ushort)*(undefined4 *)puVar10;
        uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar10 >> 0x10);
        puVar2 = puVar10 + 4;
        uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar10 + 2);
        uStack_3a = (ushort)((uint)*(undefined4 *)(puVar10 + 2) >> 0x10);
        puVar10 = &local_40;
        local_38 = *(int *)puVar2;
        iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
        uStack_3e._0_2_ = (undefined2)iVar1;
        uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
      }
      uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
      uVar23 = puVar10[5] & 0x7fff;
      local_4c = (ushort *)0x0;
      local_14 = 0;
      uStack_13 = 0;
      uStack_12 = 0;
      local_10._0_2_ = 0;
      iVar11 = 0;
      local_10._2_2_ = 0;
      local_c = 0;
      iVar5 = 0;
      uStack_a = 0;
      uVar9 = (puVar10[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
      uVar24 = uVar23 + uVar13;
      iVar17 = 0;
      iVar3 = 0;
      if (((uVar13 < 0x7fff) && (iVar17 = 0, iVar3 = 0, uVar23 < 0x7fff)) &&
         (iVar17 = iVar11, iVar3 = iVar5, uVar24 < 0xbffe)) {
        if (uVar24 < 0x3fc0) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else if (((uVar13 == 0) &&
                 (uVar24 = uVar24 + 1,
                 (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
                ((CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0 &&
                 (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)))) {
          local_1a = 0;
          bStack_19 = 0;
        }
        else if ((((uVar23 == 0) &&
                  (uVar24 = uVar24 + 1, (*(uint *)(puVar10 + 4) & 0x7fffffff) == 0)) &&
                 (*(int *)(puVar10 + 2) == 0)) && (*(int *)puVar10 == 0)) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else {
          psVar7 = (short *)&local_10;
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = puVar10 + 4;
              do {
                bVar4 = false;
                uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_5c * (uint)*local_58;
                if ((uVar16 < *(uint *)(psVar7 + -2)) ||
                   (uVar16 < (uint)*local_5c * (uint)*local_58)) {
                  bVar4 = true;
                }
                *(uint *)(psVar7 + -2) = uVar16;
                if (bVar4) {
                  *psVar7 = *psVar7 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = local_58 + -1;
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            psVar7 = psVar7 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar24 = uVar24 + 0xc002;
          if ((short)uVar24 < 1) {
LAB_1001ba71:
            uVar24 = uVar24 - 1;
            if ((short)uVar24 < 0) {
              local_48 = (uint)(ushort)-uVar24;
              uVar24 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar20 = CONCAT22(uStack_a,local_c);
                uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
                iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
                local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                uStack_a = uStack_a >> 1;
                local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
                local_48 = local_48 - 1;
                local_10._0_2_ = (ushort)(uVar16 >> 1);
                local_14 = (byte)uVar12;
                uStack_13 = (undefined1)(uVar12 >> 8);
              } while (local_48 != 0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar13 = uStack_12;
              if ((uStack_a & 0x8000) != 0) break;
              iVar17 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar17;
              uStack_13 = (undefined1)((uint)iVar17 >> 8);
              uStack_12 = (ushort)((uint)iVar17 >> 0x10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
              local_10._0_2_ = (ushort)iVar17 | uVar13 >> 0xf;
              iVar20 = CONCAT22(uStack_a,local_c) * 2;
              local_c = (ushort)iVar20 | local_10._2_2_ >> 0xf;
              uVar24 = uVar24 - 1;
              local_10._2_2_ = (ushort)((uint)iVar17 >> 0x10);
              uStack_a = (ushort)((uint)iVar20 >> 0x10);
            } while (0 < (short)uVar24);
            if ((short)uVar24 < 1) goto LAB_1001ba71;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (iVar3 = CONCAT22(local_c,local_10._2_2_),
             iVar17 = CONCAT22((ushort)local_10,uStack_12),
             (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22((ushort)local_10,uStack_12) == -1) {
              uStack_12 = 0;
              local_10._0_2_ = 0;
              iVar17 = 0;
              if (CONCAT22(local_c,local_10._2_2_) == -1) {
                local_10._2_2_ = 0;
                local_c = 0;
                if (uStack_a == 0xffff) {
                  uStack_a = 0x8000;
                  uVar24 = uVar24 + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
                else {
                  uStack_a = uStack_a + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
              }
              else {
                iVar3 = CONCAT22(local_c,local_10._2_2_) + 1;
                local_10._2_2_ = (ushort)iVar3;
                local_c = (ushort)((uint)iVar3 >> 0x10);
              }
            }
            else {
              iVar17 = CONCAT22((ushort)local_10,uStack_12) + 1;
              uStack_12 = (ushort)iVar17;
              local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              iVar3 = CONCAT22(local_c,local_10._2_2_);
            }
          }
          local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
          uStack_12 = (ushort)iVar17;
          local_c = (ushort)((uint)iVar3 >> 0x10);
          local_10._2_2_ = (ushort)iVar3;
          if (0x7ffe < uVar24) goto LAB_1001bb31;
          local_24._0_2_ = uStack_12;
          local_24._2_2_ = (ushort)local_10;
          uStack_20._0_2_ = local_10._2_2_;
          iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
          bStack_19 = (byte)(uVar24 >> 8) | (byte)(uVar9 >> 8);
          uStack_20._2_2_ = local_c;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
      }
      else {
LAB_1001bb31:
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        iVar11 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        iVar20 = 0;
        uStack_1c = (ushort)iVar11;
        local_1a = (undefined1)((uint)iVar11 >> 0x10);
        bStack_19 = (byte)((uint)iVar11 >> 0x18);
      }
LAB_1001bb4d:
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_c = (ushort)((uint)iVar3 >> 0x10);
      local_10._2_2_ = (ushort)iVar3;
      local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
      uStack_12 = (ushort)iVar17;
      param_1 = CONCAT22(uStack_12,local_24._2_2_);
      param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
      uVar14 = (int)uVar14 >> 3;
    }
  }
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
  if (0x3ffe < (ushort)(uVar16 >> 0x10)) {
    local_50 = local_50 + 1;
    uVar16 = uVar16 >> 0x10 & 0x7fff;
    iVar17 = uVar16 + 0x3ffb;
    local_5c = (ushort *)0x0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    param_1 = param_1 & 0xffff;
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    param_2 = 0;
    local_c = 0;
    uStack_a = 0;
    if (((ushort)uVar16 < 0x7fff) && ((ushort)iVar17 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar17) {
        if (((((ushort)uVar16 == 0) &&
             (iVar17 = uVar16 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0)) &&
           (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
          goto LAB_1001bdb5;
        }
        local_58 = (ushort *)0x0;
        psVar7 = (short *)&local_10;
        local_44 = 5;
        do {
          local_54 = local_44;
          if (0 < local_44) {
            local_60 = &local_2c;
            local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
            do {
              bVar4 = false;
              uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_60 * (uint)*local_4c;
              if ((uVar16 < *(uint *)(psVar7 + -2)) || (uVar16 < (uint)*local_60 * (uint)*local_4c))
              {
                bVar4 = true;
              }
              *(uint *)(psVar7 + -2) = uVar16;
              if (bVar4) {
                *psVar7 = *psVar7 + 1;
              }
              local_4c = local_4c + 1;
              local_60 = local_60 + -1;
              local_54 = local_54 + -1;
            } while (0 < local_54);
          }
          psVar7 = psVar7 + 1;
          local_58 = (ushort *)((int)local_58 + 1);
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar17 = iVar17 + 0xc002;
        if ((short)iVar17 < 1) {
LAB_1001bcc3:
          uVar24 = (ushort)(iVar17 + 0xffff);
          if ((short)uVar24 < 0) {
            uVar16 = -(iVar17 + 0xffff);
            uVar14 = uVar16 & 0xffff;
            uVar24 = uVar24 + (short)uVar16;
            do {
              if ((local_14 & 1) != 0) {
                local_5c = (ushort *)((int)local_5c + 1);
              }
              iVar20 = CONCAT22(uStack_a,local_c);
              uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
              local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
              uVar14 = uVar14 - 1;
              local_10._0_2_ = (ushort)(uVar16 >> 1);
              local_14 = (byte)uVar12;
              uStack_13 = (undefined1)(uVar12 >> 8);
            } while (uVar14 != 0);
            if (local_5c != (ushort *)0x0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar24 = uStack_12;
            if ((uStack_a & 0x8000) != 0) break;
            iVar20 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar20;
            uStack_13 = (undefined1)((uint)iVar20 >> 8);
            uStack_12 = (ushort)((uint)iVar20 >> 0x10);
            iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
            local_10._0_2_ = (ushort)iVar20 | uVar24 >> 0xf;
            iVar3 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar3 | local_10._2_2_ >> 0xf;
            iVar17 = iVar17 + 0xffff;
            local_10._2_2_ = (ushort)((uint)iVar20 >> 0x10);
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar17);
          uVar24 = (ushort)iVar17;
          if ((short)uVar24 < 1) goto LAB_1001bcc3;
        }
        iVar17 = 0;
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uStack_20 = CONCAT22(local_c,local_10._2_2_),
           iVar20 = CONCAT22((ushort)local_10,uStack_12),
           (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            if (CONCAT22(local_c,local_10._2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar24 = uVar24 + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
              else {
                uStack_a = uStack_a + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
            }
            else {
              uStack_20 = CONCAT22(local_c,local_10._2_2_) + 1;
              iVar20 = iVar17;
            }
          }
          else {
            iVar20 = CONCAT22((ushort)local_10,uStack_12) + 1;
            uStack_20 = CONCAT22(local_c,local_10._2_2_);
          }
        }
        local_10._0_2_ = (ushort)((uint)iVar20 >> 0x10);
        uStack_12 = (ushort)iVar20;
        local_c = (ushort)((uint)uStack_20 >> 0x10);
        local_10._2_2_ = (ushort)uStack_20;
        param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        if (uVar24 < 0x7fff) {
          bStack_19 = (byte)(uVar24 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
        else {
          iVar20 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
          uStack_20 = iVar17;
          iVar20 = iVar17;
        }
        local_24._2_2_ = (ushort)((uint)iVar20 >> 0x10);
        local_24._0_2_ = (ushort)iVar20;
        param_1 = CONCAT22(uStack_12,local_24._2_2_);
        goto LAB_1001bdb5;
      }
      uStack_1c = 0;
      local_1a = 0;
      bStack_19 = 0;
    }
    else {
      iVar17 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
      uStack_1c = (ushort)iVar17;
      local_1a = (undefined1)((uint)iVar17 >> 0x10);
      bStack_19 = (byte)((uint)iVar17 >> 0x18);
    }
    local_24._0_2_ = 0;
    param_1 = 0;
    param_2 = 0;
    uStack_20 = 0;
  }
LAB_1001bdb5:
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    iVar17 = 8;
    do {
      uVar24 = local_24._2_2_;
      iVar3 = CONCAT22(local_24._2_2_,(ushort)local_24) << 1;
      local_24._0_2_ = (ushort)iVar3;
      local_24._2_2_ = (ushort)((uint)iVar3 >> 0x10);
      uVar16 = uStack_20 * 2;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)((uint)uStack_20 >> 0x1f);
      iVar17 = iVar17 + -1;
      uStack_20._0_2_ = (ushort)(uVar16 | uVar24 >> 0xf);
      uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
    } while (iVar17 != 0);
    if ((iVar20 < 0) && (uVar16 = -iVar20 & 0xff, uVar16 != 0)) {
      do {
        iVar20 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar12 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        iVar17 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar14;
        local_1a = (undefined1)(uVar14 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_20._2_2_ = uStack_20._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
        uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
        local_24._2_2_ = local_24._2_2_ >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
        uVar16 = uVar16 - 1;
        uStack_20._0_2_ = (ushort)(uVar12 >> 1);
        local_24._0_2_ = (ushort)(uVar14 >> 1);
      } while (0 < (int)uVar16);
    }
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    psVar7 = param_6 + 2;
    psVar18 = psVar7;
    uVar24 = uStack_20._2_2_;
    for (iVar17 = param_4 + 1; 0 < iVar17; iVar17 = iVar17 + -1) {
      local_24._2_2_ = (ushort)(uVar16 >> 0x10);
      local_24._0_2_ = (ushort)uVar16;
      iVar1 = CONCAT22((ushort)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar14 = CONCAT22(uVar24,(ushort)uStack_20) * 2;
      uVar12 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar24 >> 0xf)) * 2 |
               uVar14 >> 0x1f;
      uVar21 = (uVar14 | local_24._2_2_ >> 0xf) * 2 | (uVar16 << 1) >> 0x1f;
      uVar14 = uVar16 * 5;
      if ((uVar14 < uVar16 * 4) || (uVar22 = uVar21, uVar14 < uVar16)) {
        uVar22 = uVar21 + 1;
        bVar4 = false;
        if ((uVar22 < uVar21) || (uVar22 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar12 = uVar12 + 1;
        }
      }
      uVar21 = CONCAT22(uVar24,(ushort)uStack_20) + uVar22;
      if ((uVar21 < uVar22) || (uVar21 < CONCAT22(uVar24,(ushort)uStack_20))) {
        uVar12 = uVar12 + 1;
      }
      iVar20 = (uVar12 + local_38) * 2;
      uStack_1c = (ushort)iVar20 | (ushort)(uVar21 >> 0x1f);
      uVar16 = uVar16 * 10;
      local_1a = (undefined1)((uint)iVar20 >> 0x10);
      uStack_20._0_2_ = (ushort)(uVar21 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar20 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      uStack_20._2_2_ = (ushort)(uVar21 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uVar24;
      uVar24 = uStack_20._2_2_;
    }
    uStack_20 = CONCAT22(uVar24,(ushort)uStack_20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1))
      {
      }
      if (psVar19 < psVar7) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar7 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_1001bf76;
      }
    }
    else {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1))
      {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar7) {
        psVar19 = (short *)((int)psVar19 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar19 = (char)*psVar19 + '\x01';
    }
    cVar15 = ((char)psVar19 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar15;
    *(undefined1 *)(cVar15 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_1001bf76:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __hw_cw @ 1001bfbe */

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2005 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___hw_cw_sse2 @ 1001c04c */

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2005 Release */

uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_2 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_2 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}



/**************************************************/

/* Function: __control87 @ 1001c0ec */

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~_Mask & uVar5 | _NewValue & _Mask;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  if (DAT_1002b800 != 0) {
    uVar5 = 0;
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar4 = MXCSR & 0x8040;
    if (uVar4 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    uVar4 = ~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue;
    if (uVar4 != uVar5) {
      uVar5 = ___hw_cw_sse2(uVar3,uVar4);
      ___set_fpsr_sse2(uVar5);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}



/**************************************************/

/* Function: ___ascii_strnicmp @ 1001c3f0 */

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_1001c441;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1001c441:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: ___initconout @ 1001c451 */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10027a74 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/**************************************************/

/* Function: ___mtold12 @ 1001c66c */

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  sVar6 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = *param_3;
    uVar10 = *param_3;
    uVar1 = param_3[1];
    uVar11 = param_3[2];
    uVar9 = param_3[1] * 2;
    bVar4 = false;
    uVar8 = (param_3[2] * 2 | param_3[1] >> 0x1f) * 2 | uVar9 >> 0x1f;
    uVar3 = uVar2 * 4;
    uVar9 = (uVar9 | uVar2 >> 0x1f) * 2 | uVar2 * 2 >> 0x1f;
    uVar2 = uVar3 + uVar10;
    *param_3 = uVar3;
    param_3[1] = uVar9;
    param_3[2] = uVar8;
    if ((uVar2 < uVar3) || (uVar2 < uVar10)) {
      bVar4 = true;
    }
    bVar5 = false;
    *param_3 = uVar2;
    if (bVar4) {
      uVar10 = uVar9 + 1;
      if ((uVar10 < uVar9) || (uVar10 == 0)) {
        bVar5 = true;
      }
      param_3[1] = uVar10;
      if (bVar5) {
        param_3[2] = uVar8 + 1;
      }
    }
    uVar10 = param_3[1] + uVar1;
    bVar4 = false;
    if ((uVar10 < param_3[1]) || (uVar10 < uVar1)) {
      bVar4 = true;
    }
    param_3[1] = uVar10;
    if (bVar4) {
      param_3[2] = param_3[2] + 1;
    }
    param_3[2] = param_3[2] + uVar11;
    bVar4 = false;
    uVar1 = uVar2 * 2;
    uVar11 = uVar10 * 2 | uVar2 >> 0x1f;
    uVar10 = param_3[2] * 2 | uVar10 >> 0x1f;
    *param_3 = uVar1;
    param_3[1] = uVar11;
    param_3[2] = uVar10;
    uVar2 = uVar1 + (int)*param_1;
    if ((uVar2 < uVar1) || (uVar2 < (uint)(int)*param_1)) {
      bVar4 = true;
    }
    *param_3 = uVar2;
    if (bVar4) {
      uVar2 = uVar11 + 1;
      bVar4 = false;
      if ((uVar2 < uVar11) || (uVar2 == 0)) {
        bVar4 = true;
      }
      param_3[1] = uVar2;
      if (bVar4) {
        param_3[2] = uVar10 + 1;
      }
    }
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  uVar2 = param_3[2];
  while ((uVar2 & 0x8000) == 0) {
    uVar10 = *param_3;
    uVar1 = param_3[1];
    sVar6 = sVar6 + -1;
    *param_3 = uVar10 * 2;
    uVar2 = param_3[2] * 2;
    param_3[1] = uVar1 * 2 | uVar10 >> 0x1f;
    param_3[2] = uVar2 | uVar1 >> 0x1f;
  }
  *(short *)((int)param_3 + 10) = sVar6;
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___set_fpsr_sse2 @ 1001c838 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_1002b800 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_10027d4c == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1001c8aa @ 1001c8aa */

undefined4 __cdecl FUN_1001c8aa(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1002b6e0 + 0x74) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1002b6e0 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_1001c909;
    }
    hObject = (HANDLE)__get_osfhandle(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001c90b;
    }
  }
LAB_1001c909:
  DVar4 = 0;
LAB_1001c90b:
  FUN_1001a118(param_1);
  *(undefined1 *)((&DAT_1002b6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x38) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000e79d(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/**************************************************/

/* Function: _AtlGetThreadACPFake @ 1001ca37 */

/* Library Function - Single Match
    unsigned int __stdcall ATL::_AtlGetThreadACPFake(void)
   
   Library: Visual Studio 2005 Release */

uint ATL::_AtlGetThreadACPFake(void)

{
  LCID Locale;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char local_10;
  char local_f [7];
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  Locale = GetThreadLocale();
  iVar1 = GetLocaleInfoA(Locale,0x1004,&local_10,7);
  if (iVar1 != 0) {
    pcVar2 = &local_10;
    if (local_10 != '\0') {
      do {
        pcVar2 = pcVar2 + 1;
        iVar4 = iVar4 * 10 + -0x30 + (int)local_10;
        local_10 = *pcVar2;
      } while (local_10 != '\0');
      if (iVar4 != 0) goto LAB_1001ca8d;
    }
  }
  GetACP();
LAB_1001ca8d:
  uVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar3;
}



/**************************************************/

/* Function: _AtlGetThreadACPThunk @ 1001caa0 */

/* Library Function - Single Match
    unsigned int __stdcall ATL::_AtlGetThreadACPThunk(void)
   
   Library: Visual Studio 2005 Release */

uint ATL::_AtlGetThreadACPThunk(void)

{
  code *Value;
  uint uVar1;
  _OSVERSIONINFOA local_9c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)&stack0xfffffffc;
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  if ((local_9c.dwPlatformId != 2) || (Value = (code *)&LAB_1001ca9c, local_9c.dwMajorVersion < 5))
  {
    Value = _AtlGetThreadACPFake;
  }
  InterlockedExchange((LONG *)&PTR__AtlGetThreadACPThunk_10027d50,(LONG)Value);
  (*(code *)PTR__AtlGetThreadACPThunk_10027d50)();
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar1;
}



/**************************************************/

/* Function: CComCriticalSection @ 1001cb04 */

/* Library Function - Single Match
    public: __thiscall ATL::CComCriticalSection::CComCriticalSection(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

CComCriticalSection * __thiscall
ATL::CComCriticalSection::CComCriticalSection(CComCriticalSection *this)

{
  _memset(this,0,0x18);
  return this;
}



/**************************************************/

/* Function: Init @ 1001cb18 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: long __thiscall ATL::CComCriticalSection::Init(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long __thiscall ATL::CComCriticalSection::Init(CComCriticalSection *this)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  return 0;
}



/**************************************************/

/* Function: AtlWinModuleInit @ 1001cb63 */

/* Library Function - Single Match
    long __stdcall ATL::AtlWinModuleInit(struct ATL::_ATL_WIN_MODULE70 *)
   
   Library: Visual Studio 2005 Release */

long ATL::AtlWinModuleInit(_ATL_WIN_MODULE70 *param_1)

{
  long lVar1;
  
  if ((param_1 == (_ATL_WIN_MODULE70 *)0x0) || (*(int *)param_1 != 0x2c)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    lVar1 = CComCriticalSection::Init((CComCriticalSection *)(param_1 + 4));
  }
  return lVar1;
}



/**************************************************/

/* Function: RemoveAll @ 1001cb86 */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::RemoveAll(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
RemoveAll(CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
          *this)

{
  if (*(void **)this != (void *)0x0) {
    _free(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/**************************************************/

/* Function: operator[] @ 1001cba3 */

/* Library Function - Single Match
    public: unsigned short & __thiscall ATL::CSimpleArray<unsigned short,class
   ATL::CSimpleArrayEqualHelper<unsigned short> >::operator[](int)
   
   Library: Visual Studio 2005 Release */

ushort * __thiscall
ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::operator[]
          (CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *this,
          int param_1)

{
  code *pcVar1;
  ushort *puVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    return (ushort *)(*(int *)this + param_1 * 2);
  }
  RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
  pcVar1 = (code *)swi(3);
  puVar2 = (ushort *)(*pcVar1)();
  return puVar2;
}



/**************************************************/

/* Function: _ATL_WIN_MODULE70 @ 1001cbca */

/* Library Function - Single Match
    public: __thiscall ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

_ATL_WIN_MODULE70 * __thiscall ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(_ATL_WIN_MODULE70 *this)

{
  CComCriticalSection::CComCriticalSection((CComCriticalSection *)(this + 4));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}



/**************************************************/

/* Function: AtlWinModuleTerm @ 1001cbe4 */

/* Library Function - Single Match
    long __stdcall ATL::AtlWinModuleTerm(struct ATL::_ATL_WIN_MODULE70 *,struct HINSTANCE__ *)
   
   Library: Visual Studio 2005 Release */

long ATL::AtlWinModuleTerm(_ATL_WIN_MODULE70 *param_1,HINSTANCE__ *param_2)

{
  long lVar1;
  ushort *puVar2;
  int iVar3;
  
  if (param_1 == (_ATL_WIN_MODULE70 *)0x0) {
LAB_1001cbed:
    lVar1 = -0x7ff8ffa9;
  }
  else {
    if (*(int *)param_1 != 0) {
      if (*(int *)param_1 != 0x2c) goto LAB_1001cbed;
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x24)) {
        do {
          puVar2 = CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>
                   ::operator[]((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>
                                 *)(param_1 + 0x20),iVar3);
          UnregisterClassA((LPCSTR)(uint)*puVar2,param_2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x24));
      }
      CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
      RemoveAll((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
                 *)(param_1 + 0x20));
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      *(undefined4 *)param_1 = 0;
    }
    lVar1 = 0;
  }
  return lVar1;
}



/**************************************************/

/* Function: _ATL_BASE_MODULE70 @ 1001cc44 */

/* Library Function - Single Match
    public: __thiscall ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(void)
   
   Library: Visual Studio 2005 Release */

_ATL_BASE_MODULE70 * __thiscall
ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(_ATL_BASE_MODULE70 *this)

{
  CComCriticalSection::CComCriticalSection((CComCriticalSection *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return this;
}



/**************************************************/

/* Function: ~CAtlBaseModule @ 1001cc5e */

/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x18));
  CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
  RemoveAll((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
             *)(this + 0x30));
  return;
}



/**************************************************/

/* Function: CAtlWinModule @ 1001cc74 */

/* Library Function - Single Match
    public: __thiscall ATL::CAtlWinModule::CAtlWinModule(void)
   
   Library: Visual Studio 2005 Release */

CAtlWinModule * __thiscall ATL::CAtlWinModule::CAtlWinModule(CAtlWinModule *this)

{
  long lVar1;
  
  _ATL_WIN_MODULE70::_ATL_WIN_MODULE70((_ATL_WIN_MODULE70 *)this);
  *(undefined4 *)this = 0x2c;
  lVar1 = AtlWinModuleInit((_ATL_WIN_MODULE70 *)this);
  if (lVar1 < 0) {
    DAT_1002a69c = 1;
    *(undefined4 *)this = 0;
  }
  return this;
}



/**************************************************/

/* Function: CAtlBaseModule @ 1001cc9a */

/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::CAtlBaseModule(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  long lVar1;
  _OSVERSIONINFOA local_9c;
  uint local_8;
  
  local_8 = DAT_1002696c ^ (uint)(local_9c.szCSDVersion + 0xc);
  _ATL_BASE_MODULE70::_ATL_BASE_MODULE70((_ATL_BASE_MODULE70 *)this);
  *(undefined4 *)(this + 8) = 0x10000000;
  *(undefined4 *)(this + 4) = 0x10000000;
  *(undefined4 *)this = 0x3c;
  this[0xc] = (CAtlBaseModule)0x0;
  _memset(&local_9c,0,0x94);
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  if (local_9c.dwPlatformId == 2) {
    if (local_9c.dwMajorVersion < 5) goto LAB_1001cd16;
  }
  else if ((local_9c.dwPlatformId != 1) ||
          ((local_9c.dwMajorVersion < 5 &&
           ((local_9c.dwMajorVersion != 4 || (local_9c.dwMinorVersion == 0)))))) goto LAB_1001cd16;
  this[0xc] = (CAtlBaseModule)0x1;
LAB_1001cd16:
  *(undefined4 *)(this + 0x10) = 0x800;
  *(undefined **)(this + 0x14) = &DAT_10020f28;
  lVar1 = CComCriticalSection::Init((CComCriticalSection *)(this + 0x18));
  if (lVar1 < 0) {
    DAT_1002a69c = 1;
  }
  __security_check_cookie(local_8 ^ (uint)(local_9c.szCSDVersion + 0xc));
  return;
}



/**************************************************/

/* Function: CreateStdAccessibleObject @ 1001cd62 */

HRESULT CreateStdAccessibleObject(HWND hwnd,LONG idObject,IID *riid,void **ppvObject)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001cd62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CreateStdAccessibleObject(hwnd,idObject,riid,ppvObject);
  return HVar1;
}



/**************************************************/

/* Function: LresultFromObject @ 1001cd68 */

LRESULT LresultFromObject(IID *riid,WPARAM wParam,LPUNKNOWN punk)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001cd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = LresultFromObject(riid,wParam,punk);
  return LVar1;
}



/**************************************************/

/* Function: RtlUnwind @ 1001cd6e */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1001cd6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

/* Function: Unwind@1001cd80 @ 1001cd80 */

void Unwind_1001cd80(void)

{
  int unaff_EBP;
  
  CNoTrackObject::operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001cda4 @ 1001cda4 */

void Unwind_1001cda4(void)

{
  int unaff_EBP;
  
  FUN_1000367f(*(void **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001cdc8 @ 1001cdc8 */

void Unwind_1001cdc8(void)

{
  int unaff_EBP;
  
  ~CSimpleStringT<>(*(int **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001cdeb @ 1001cdeb */

void Unwind_1001cdeb(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}



/**************************************************/

/* Function: Unwind@1001cdf6 @ 1001cdf6 */

void Unwind_1001cdf6(void)

{
  int unaff_EBP;
  
  CThreadLocalObject::~CThreadLocalObject
            ((CThreadLocalObject *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce1c @ 1001ce1c */

void Unwind_1001ce1c(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce3f @ 1001ce3f */

void Unwind_1001ce3f(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce62 @ 1001ce62 */

void Unwind_1001ce62(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(*(int *)(unaff_EBP + -0x14) + 0x34));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce6d @ 1001ce6d */

void Unwind_1001ce6d(void)

{
  int unaff_EBP;
  
  CThreadLocalObject::~CThreadLocalObject
            ((CThreadLocalObject *)(*(int *)(unaff_EBP + -0x14) + 0x74));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce78 @ 1001ce78 */

void Unwind_1001ce78(void)

{
  int unaff_EBP;
  
  CNoTrackObject::operator_delete(*(void **)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce81 @ 1001ce81 */

void Unwind_1001ce81(void)

{
  int unaff_EBP;
  
  CNoTrackObject::operator_delete(*(void **)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: Unwind@1001cea5 @ 1001cea5 */

void Unwind_1001cea5(void)

{
  int unaff_EBP;
  
  CNoTrackObject::operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001ceff @ 1001ceff */

void Unwind_1001ceff(void)

{
  FUN_10010311();
  return;
}



/**************************************************/

/* Function: Unwind@1001cf45 @ 1001cf45 */

void Unwind_1001cf45(void)

{
  int unaff_EBP;
  
  FUN_1000bc74(*(int *)(unaff_EBP + -0x10) + 4);
  return;
}



/**************************************************/

/* Function: Unwind@1001cf50 @ 1001cf50 */

void Unwind_1001cf50(void)

{
  int unaff_EBP;
  
  FUN_10006821((CMapPtrToPtr *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/**************************************************/

/* Function: Unwind@1001cf5b @ 1001cf5b */

void Unwind_1001cf5b(void)

{
  int unaff_EBP;
  
  FUN_10006821((CMapPtrToPtr *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}



/**************************************************/

/* Function: Unwind@1001cf9c @ 1001cf9c */

void Unwind_1001cf9c(void)

{
  int unaff_EBP;
  
  FUN_1000bc74(*(int *)(unaff_EBP + -0x10) + 4);
  return;
}



/**************************************************/

/* Function: Unwind@1001cfa7 @ 1001cfa7 */

void Unwind_1001cfa7(void)

{
  int unaff_EBP;
  
  FUN_10006821((CMapPtrToPtr *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/**************************************************/

/* Function: Unwind@1001cfb2 @ 1001cfb2 */

void Unwind_1001cfb2(void)

{
  int unaff_EBP;
  
  FUN_10006821((CMapPtrToPtr *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}



/**************************************************/

/* Function: Unwind@1001cfd8 @ 1001cfd8 */

void Unwind_1001cfd8(void)

{
  int unaff_EBP;
  
  ~CSimpleStringT<>(*(int **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001cffb @ 1001cffb */

void Unwind_1001cffb(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001d003 @ 1001d003 */

void Unwind_1001d003(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x18));
  return;
}



/**************************************************/

/* Function: Unwind@1001d026 @ 1001d026 */

void Unwind_1001d026(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001d049 @ 1001d049 */

void Unwind_1001d049(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d06c @ 1001d06c */

void Unwind_1001d06c(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001d09c @ 1001d09c */

void Unwind_1001d09c(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001d0a4 @ 1001d0a4 */

void Unwind_1001d0a4(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + 0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001d0c7 @ 1001d0c7 */

void Unwind_1001d0c7(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/**************************************************/

/* Function: Unwind@1001d0ed @ 1001d0ed */

void Unwind_1001d0ed(void)

{
  int unaff_EBP;
  
  FUN_1000367f(*(void **)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001d111 @ 1001d111 */

void Unwind_1001d111(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d134 @ 1001d134 */

void Unwind_1001d134(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d157 @ 1001d157 */

void Unwind_1001d157(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d17a @ 1001d17a */

void Unwind_1001d17a(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d19d @ 1001d19d */

void Unwind_1001d19d(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d1c0 @ 1001d1c0 */

void Unwind_1001d1c0(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d1e3 @ 1001d1e3 */

void Unwind_1001d1e3(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d206 @ 1001d206 */

void Unwind_1001d206(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d229 @ 1001d229 */

void Unwind_1001d229(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d24c @ 1001d24c */

void Unwind_1001d24c(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d26f @ 1001d26f */

void Unwind_1001d26f(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d292 @ 1001d292 */

void Unwind_1001d292(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d2b5 @ 1001d2b5 */

void Unwind_1001d2b5(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d2d8 @ 1001d2d8 */

void Unwind_1001d2d8(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d2fb @ 1001d2fb */

void Unwind_1001d2fb(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d31e @ 1001d31e */

void Unwind_1001d31e(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d341 @ 1001d341 */

void Unwind_1001d341(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d364 @ 1001d364 */

void Unwind_1001d364(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d387 @ 1001d387 */

void Unwind_1001d387(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d3aa @ 1001d3aa */

void Unwind_1001d3aa(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d3cd @ 1001d3cd */

void Unwind_1001d3cd(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d3f0 @ 1001d3f0 */

void Unwind_1001d3f0(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d413 @ 1001d413 */

void Unwind_1001d413(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d436 @ 1001d436 */

void Unwind_1001d436(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d459 @ 1001d459 */

void Unwind_1001d459(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d47c @ 1001d47c */

void Unwind_1001d47c(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d49f @ 1001d49f */

void Unwind_1001d49f(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d4c2 @ 1001d4c2 */

void Unwind_1001d4c2(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d4e5 @ 1001d4e5 */

void Unwind_1001d4e5(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x14);
  return;
}



/**************************************************/

/* Function: Unwind@1001d508 @ 1001d508 */

void Unwind_1001d508(void)

{
  int unaff_EBP;
  
  FUN_1000367f(*(void **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001d52c @ 1001d52c */

void Unwind_1001d52c(void)

{
  int unaff_EBP;
  
  FUN_10007d0b(*(void **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001d553 @ 1001d553 */

void Unwind_1001d553(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: Unwind@1001d593 @ 1001d593 */

void Unwind_1001d593(void)

{
  int unaff_EBP;
  
  CCmdTarget::~CCmdTarget(*(CCmdTarget **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001d5b6 @ 1001d5b6 */

void Unwind_1001d5b6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(unaff_EBP + -0x60));
  return;
}



/**************************************************/

/* Function: Unwind@1001d5f4 @ 1001d5f4 */

void Unwind_1001d5f4(void)

{
  int unaff_EBP;
  
  FUN_10005c87(unaff_EBP + -0x18);
  return;
}



/**************************************************/

/* Function: Unwind@1001d624 @ 1001d624 */

void Unwind_1001d624(void)

{
  int unaff_EBP;
  
  FUN_10009129((int *)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001d62c @ 1001d62c */

void Unwind_1001d62c(void)

{
  int unaff_EBP;
  
  CDC::~CDC((CDC *)(unaff_EBP + -0x28));
  return;
}



/**************************************************/

/* Function: Unwind@1001d634 @ 1001d634 */

void Unwind_1001d634(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(unaff_EBP + -0x7c));
  return;
}



/**************************************************/

/* Function: Unwind@1001d63c @ 1001d63c */

void Unwind_1001d63c(void)

{
  int unaff_EBP;
  
  CDC::~CDC((CDC *)(unaff_EBP + -0x28));
  return;
}



/**************************************************/

/* Function: Unwind@1001d65f @ 1001d65f */

void Unwind_1001d65f(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x1c));
  return;
}



/**************************************************/

/* Function: Unwind@1001d684 @ 1001d684 */

void Unwind_1001d684(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001d6b4 @ 1001d6b4 */

void Unwind_1001d6b4(void)

{
  int unaff_EBP;
  
  CWaitCursor::~CWaitCursor((CWaitCursor *)(unaff_EBP + 0xb));
  return;
}



/**************************************************/

/* Function: Unwind@1001d6d7 @ 1001d6d7 */

void Unwind_1001d6d7(void)

{
  int unaff_EBP;
  
  CWaitCursor::~CWaitCursor((CWaitCursor *)(unaff_EBP + 0xb));
  return;
}



/**************************************************/

/* Function: Unwind@1001d6fa @ 1001d6fa */

void Unwind_1001d6fa(void)

{
  int unaff_EBP;
  
  FUN_10008d26((int *)(unaff_EBP + 0xc));
  return;
}



/**************************************************/

/* Function: Unwind@1001d738 @ 1001d738 */

void Unwind_1001d738(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: Unwind@1001d75d @ 1001d75d */

void Unwind_1001d75d(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: Unwind@1001d782 @ 1001d782 */

void Unwind_1001d782(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001d7b2 @ 1001d7b2 */

void Unwind_1001d7b2(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1001d7d5 @ 1001d7d5 */

void Unwind_1001d7d5(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: Unwind@1001d820 @ 1001d820 */

void Unwind_1001d820(void)

{
  int unaff_EBP;
  
  FUN_10001db0((CDocObjectServer *)(unaff_EBP + -0x40));
  return;
}



/**************************************************/

/* Function: Unwind@1001d828 @ 1001d828 */

void Unwind_1001d828(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x50));
  return;
}



/**************************************************/

/* Function: Unwind@1001d830 @ 1001d830 */

void Unwind_1001d830(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x70));
  return;
}



/**************************************************/

/* Function: Unwind@1001d838 @ 1001d838 */

void Unwind_1001d838(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x6c));
  return;
}



/**************************************************/

/* Function: Unwind@1001d840 @ 1001d840 */

void Unwind_1001d840(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0xa0));
  return;
}



/**************************************************/

/* Function: Unwind@1001d84b @ 1001d84b */

void Unwind_1001d84b(void)

{
  int unaff_EBP;
  
  FUN_10002b70((int *)(unaff_EBP + -0x44));
  return;
}



/**************************************************/

/* Function: FUN_1001d8ba @ 1001d8ba */

void FUN_1001d8ba(void)

{
  CAfxStringMgr::CAfxStringMgr((CAfxStringMgr *)&DAT_10027d90);
  return;
}



/**************************************************/

