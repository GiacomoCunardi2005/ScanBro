/* Function: FUN_10001020 @ 10001020 */

FARPROC FUN_10001020(undefined4 *param_1,int *param_2,LPCSTR param_3)

{
  DWORD DVar1;
  FARPROC pFVar2;
  HMODULE hModule;
  undefined4 uVar3;
  code *pcVar4;
  
  if (DAT_10013124 == 0) {
    DVar1 = GetVersion();
    if ((int)DVar1 < 0) {
      GetFileAttributesW(L"???.???");
      DAT_10013120 = GetModuleHandleA("Unicows.dll");
    }
    DAT_10013124 = 1;
  }
  if (DAT_10013120 != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(DAT_10013120,param_3);
    if (pFVar2 != (FARPROC)0x0) {
      return pFVar2;
    }
  }
  hModule = (HMODULE)*param_2;
  if (hModule == (HMODULE)0x0) {
    DVar1 = GetVersion();
    if ((int)DVar1 < 0) {
      uVar3 = param_1[3];
      pcVar4 = (code *)param_1[2];
    }
    else {
      uVar3 = param_1[1];
      pcVar4 = (code *)*param_1;
    }
    hModule = (HMODULE)(*pcVar4)(uVar3);
    if (hModule == (HMODULE)0x0) {
      return (FARPROC)0x0;
    }
    *param_2 = (int)hModule;
  }
  pFVar2 = GetProcAddress(hModule,param_3);
  return pFVar2;
}



/**************************************************/

/* Function: FUN_100010d0 @ 100010d0 */

undefined4 __fastcall FUN_100010d0(int *param_1)

{
  LPCWSTR lpString1;
  int iVar1;
  undefined4 *puVar2;
  wchar_t *lpString2;
  
  if (param_1[4] == 2) {
    lpString2 = L"empty";
    lpString1 = (LPCWSTR)(**(code **)(*param_1 + 8))();
    iVar1 = lstrcmpW(lpString1,lpString2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))();
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar2;
}



/**************************************************/

/* Function: FUN_10001110 @ 10001110 */

void __cdecl FUN_10001110(wchar_t *param_1)

{
  uint nSize;
  wchar_t wVar1;
  DWORD DVar2;
  wchar_t *pwVar3;
  short *psVar4;
  wchar_t *pwVar5;
  
  DVar2 = GetEnvironmentVariableW(L"PATH",(LPWSTR)0x0,0);
  pwVar3 = param_1;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  nSize = DVar2 + 2 + ((int)pwVar3 - (int)(param_1 + 1) >> 1);
  pwVar3 = _malloc(nSize * 2);
  if (pwVar3 != (wchar_t *)0x0) {
    DVar2 = GetEnvironmentVariableW(L"PATH",pwVar3,nSize);
    pwVar5 = param_1;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    if (((int)pwVar5 - (int)(param_1 + 1) >> 1) + 2 + DVar2 <= nSize) {
      psVar4 = FUN_1000435e(pwVar3,param_1);
      if (psVar4 == (short *)0x0) {
        _wcscat_s(pwVar3,nSize,L";");
        _wcscat_s(pwVar3,nSize,param_1);
        SetEnvironmentVariableW(L"PATH",pwVar3);
      }
    }
    _free(pwVar3);
  }
  return;
}



/**************************************************/

/* Function: FUN_100011c0 @ 100011c0 */

void __cdecl FUN_100011c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(L"InstallDirectory");
  if (0 < iVar1) {
    piVar2 = (int *)(**(code **)(*param_1 + 0xc))(L"InstallDirectory");
    pwVar3 = (wchar_t *)(**(code **)(*piVar2 + 8))();
    FUN_10001110(pwVar3);
    return;
  }
  return;
}



/**************************************************/

/* Function: FUN_10001200 @ 10001200 */

void __cdecl FUN_10001200(int *param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t local_20c [258];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)local_20c;
  iVar1 = FUN_10003ba0(DAT_10013068,local_20c,0x104);
  if (iVar1 != 0) {
    iVar1 = FUN_10003ed0(param_1,DAT_10013068);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x2c))(L"InstallDirectory");
      if (iVar1 < 1) {
        piVar2 = (int *)(**(code **)(*param_1 + 0xc))(L"InstallDirectory");
        (**(code **)(*piVar2 + 0x14))(&stack0xfffffdec,2);
      }
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffdf0);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}



/**************************************************/

/* Function: FUN_100012c0 @ 100012c0 */

void __cdecl FUN_100012c0(wchar_t *param_1,wchar_t *param_2)

{
  _wcscpy_s(param_1,0x400,param_2);
  return;
}



/**************************************************/

/* Function: FUN_100012e0 @ 100012e0 */

int FUN_100012e0(void)

{
  int iVar1;
  
  if (DAT_1001312c == (FARPROC)0x0) {
    DAT_1001312c = FUN_10001020(&PTR_LAB_1000e1ec,(int *)&DAT_10013128,"CreateActCtxW");
    if (DAT_1001312c == (FARPROC)0x0) {
      return -1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1000130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*DAT_1001312c)();
  return iVar1;
}



/**************************************************/

/* Function: FUN_10001310 @ 10001310 */

void FUN_10001310(void)

{
  if (DAT_10013130 == (FARPROC)0x0) {
    DAT_10013130 = FUN_10001020(&PTR_LAB_1000e1ec,(int *)&DAT_10013128,"ActivateActCtx");
    if (DAT_10013130 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10001339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10013130)();
  return;
}



/**************************************************/

/* Function: FUN_10001340 @ 10001340 */

void FUN_10001340(void)

{
  if (DAT_10013134 == (FARPROC)0x0) {
    DAT_10013134 = FUN_10001020(&PTR_LAB_1000e1ec,(int *)&DAT_10013128,"DeactivateActCtx");
    if (DAT_10013134 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10001369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10013134)();
  return;
}



/**************************************************/

/* Function: FUN_10001370 @ 10001370 */

void FUN_10001370(void)

{
  if (DAT_10013138 == (FARPROC)0x0) {
    DAT_10013138 = FUN_10001020(&PTR_LAB_1000e1ec,(int *)&DAT_10013128,"FindActCtxSectionStringW");
    if (DAT_10013138 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10001399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10013138)();
  return;
}



/**************************************************/

/* Function: FUN_100013a0 @ 100013a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013a0(void)

{
  uint uVar1;
  int iVar2;
  FARPROC pFVar3;
  DWORD DVar4;
  int local_23c [2];
  HMODULE local_234;
  undefined4 local_230;
  void *local_224;
  code *pcStack_220;
  uint local_21c;
  undefined4 local_218;
  WCHAR local_214 [260];
  short local_c;
  undefined2 local_a;
  uint local_8;
  
  local_218 = 0xfffffffe;
  pcStack_220 = __except_handler4;
  local_224 = ExceptionList;
  local_21c = DAT_10012070 ^ 0x100100e8;
  uVar1 = DAT_10012070 ^ (uint)local_214;
  ExceptionList = &local_224;
  local_230 = 0;
  local_8 = uVar1;
  if ((((DAT_10013114 != 0) || (DAT_10012000 != -1)) ||
      ((DAT_1001313c == (FARPROC)0x0 &&
       (DAT_1001313c = FUN_10001020(&PTR_LAB_1000e1ec,(int *)&DAT_10013128,"QueryActCtxW"),
       DAT_1001313c == (FARPROC)0x0)))) ||
     (iVar2 = (*DAT_1001313c)(0x80000010,&DAT_10012000,0,1,local_23c,8,0,uVar1), iVar2 == 0))
  goto LAB_10001574;
  if (local_23c[0] == 0) {
    pFVar3 = FUN_10001020(&PTR_LAB_1000e1ec,(int *)&DAT_10013128,"GetModuleHandleExW");
    if ((pFVar3 == (FARPROC)0x0) || (iVar2 = (*pFVar3)(6,&DAT_10012000,&local_234), iVar2 == 0))
    goto LAB_10001574;
    local_a = 0;
    local_c = 0;
    DVar4 = GetModuleFileNameW(local_234,local_214,0x105);
    if (DVar4 == 0) goto LAB_10001574;
    if (local_c != 0) {
      SetLastError(0x6f);
      goto LAB_10001574;
    }
    local_23c[0] = FUN_100012e0();
    if (local_23c[0] == -1) {
      DVar4 = GetLastError();
      if ((((DVar4 != 0x714) && (DVar4 != 0x715)) && (DVar4 != 0x717)) && (DVar4 != 0x716))
      goto LAB_10001574;
      local_23c[0] = 0;
    }
    _DAT_10013118 = 1;
  }
  DAT_10012000 = local_23c[0];
  iVar2 = FUN_10001310();
  if (iVar2 != 0) {
    local_218 = 0;
    iVar2 = FUN_10001370();
    if (iVar2 != 0) {
      LoadLibraryW(L"Comctl32.dll");
    }
    local_218 = 0xfffffffe;
    FUN_1000159d();
  }
LAB_10001574:
  ExceptionList = local_224;
  __security_check_cookie(local_8 ^ (uint)local_214);
  return;
}



/**************************************************/

/* Function: FUN_1000159d @ 1000159d */

void FUN_1000159d(void)

{
  FUN_10001340();
  return;
}



/**************************************************/

/* Function: FUN_100015b0 @ 100015b0 */

undefined4 FUN_100015b0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  
  if (DAT_1001311c != 0) {
    OutputDebugStringA("IsolationAware function called after IsolationAwareCleanup\n");
  }
  if (DAT_10013114 != 0) {
    return 1;
  }
  if (DAT_1001311c == 0) {
    iVar2 = FUN_100013a0();
    if (iVar2 == 0) goto LAB_1000162b;
  }
  uVar1 = DAT_10012000;
  if (DAT_10013130 == (FARPROC)0x0) {
    DAT_10013130 = FUN_10001020(&PTR_LAB_1000e1ec,(int *)&DAT_10013128,"ActivateActCtx");
    if (DAT_10013130 == (FARPROC)0x0) goto LAB_1000162b;
  }
  iVar2 = (*DAT_10013130)(uVar1,param_1);
  if (iVar2 != 0) {
    return 1;
  }
LAB_1000162b:
  DVar3 = GetLastError();
  if (((DVar3 != 0x7f) && (DVar3 != 0x7e)) && (DVar3 != 0x78)) {
    return 0;
  }
  DAT_10013114 = 1;
  return 1;
}



/**************************************************/

/* Function: FUN_10001660 @ 10001660 */

void __cdecl FUN_10001660(wchar_t *param_1)

{
  uint nSize;
  wchar_t wVar1;
  DWORD DVar2;
  LPWSTR lpBuffer;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  DVar2 = GetEnvironmentVariableW(L"PATH",(LPWSTR)0x0,0);
  pwVar3 = param_1;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  nSize = DVar2 + 2 + ((int)pwVar3 - (int)(param_1 + 1) >> 1);
  lpBuffer = _malloc(nSize * 2);
  pwVar3 = param_1;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  pwVar3 = _malloc(((int)pwVar3 - (int)(param_1 + 1) >> 1) * 2 + 4);
  if ((lpBuffer != (LPWSTR)0x0) && (pwVar3 != (wchar_t *)0x0)) {
    pwVar4 = param_1;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    _wcscpy_s(pwVar3,((int)pwVar4 - (int)(param_1 + 1) >> 1) + 2,L";");
    pwVar4 = param_1;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    _wcscat_s(pwVar3,((int)pwVar4 - (int)(param_1 + 1) >> 1) + 2,param_1);
    DVar2 = GetEnvironmentVariableW(L"PATH",lpBuffer,nSize);
    pwVar4 = param_1 + 1;
    do {
      wVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (wVar1 != L'\0');
    if (((int)param_1 - (int)pwVar4 >> 1) + 2 + DVar2 <= nSize) {
      pwVar4 = FUN_1000435e(lpBuffer,pwVar3);
      if (pwVar4 != (wchar_t *)0x0) {
        pwVar5 = pwVar3;
        do {
          wVar1 = *pwVar5;
          pwVar5 = pwVar5 + 1;
        } while (wVar1 != L'\0');
        pwVar5 = pwVar4 + ((int)pwVar5 - (int)(pwVar3 + 1) >> 1);
        pwVar6 = pwVar5;
        do {
          wVar1 = *pwVar6;
          pwVar6 = pwVar6 + 1;
        } while (wVar1 != L'\0');
        if ((int)pwVar6 - (int)(pwVar5 + 1) >> 1 == 0) {
          *pwVar4 = L'\0';
        }
        else {
          FUN_100012c0((wchar_t *)&DAT_10013140,pwVar5);
          *pwVar4 = L'\0';
          _wcscpy_s(pwVar4,nSize - ((int)pwVar4 - (int)lpBuffer >> 1),pwVar5);
        }
        SetEnvironmentVariableW(L"PATH",lpBuffer);
      }
    }
    _free(lpBuffer);
    _free(pwVar3);
  }
  return;
}



/**************************************************/

/* Function: FUN_100017f0 @ 100017f0 */

void __cdecl FUN_100017f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(L"InstallDirectory");
  if (0 < iVar1) {
    piVar2 = (int *)(**(code **)(*param_1 + 0xc))(L"InstallDirectory");
    pwVar3 = (wchar_t *)(**(code **)(*piVar2 + 8))();
    FUN_10001660(pwVar3);
    return;
  }
  return;
}



/**************************************************/

/* Function: FUN_10001830 @ 10001830 */

void __cdecl FUN_10001830(int param_1,int *param_2)

{
  undefined2 uVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  undefined2 *puVar2;
  int *piVar3;
  LPCWSTR pWVar4;
  LPCWSTR pWVar5;
  char *pcVar6;
  long lVar7;
  LPCWSTR pWVar8;
  undefined1 local_4c;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined1 local_2b;
  undefined1 local_28;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined1 local_7;
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)&local_4c;
  local_4b = 0;
  local_47 = 0;
  local_43 = 0;
  local_3f = 0;
  local_3b = 0;
  local_37 = 0;
  local_33 = 0;
  local_2f = 0;
  local_2b = 0;
  local_28 = 0;
  local_27 = 0;
  local_23 = 0;
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  *(undefined2 *)(param_1 + 0x2e) = 1;
  *(undefined2 *)(param_1 + 0x30) = 8;
  local_4c = 0;
  if (DAT_10013068 != (HMODULE)0x0) {
    hResInfo = FindResourceW(DAT_10013068,(LPCWSTR)0x64,(LPCWSTR)0xa);
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(DAT_10013068,hResInfo);
      if (hResData != (HGLOBAL)0x0) {
        puVar2 = LockResource(hResData);
        if (puVar2 != (undefined2 *)0x0) {
          *(undefined2 *)(param_1 + 8) = *puVar2;
          *(undefined2 *)(param_1 + 10) = puVar2[1];
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x32) = 3;
  piVar3 = (int *)(**(code **)(*param_2 + 0xc))();
  pWVar4 = (LPCWSTR)(**(code **)(*piVar3 + 8))();
  piVar3 = (int *)(**(code **)(*param_2 + 0xc))(L"DriverDate");
  pWVar5 = (LPCWSTR)(**(code **)(*piVar3 + 8))();
  FUN_10003fe0(&stack0xffffffac,0x22,pWVar4);
  FUN_10003fe0((LPSTR)((int)&local_33 + 3),0x22,pWVar5);
  pcVar6 = (char *)(param_1 + 0xc);
  _strcpy_s(pcVar6,0x22,&stack0xffffffac);
  _strcat_s(pcVar6,0x22," - ");
  _strcat_s(pcVar6,0x22,(char *)((int)&local_33 + 3));
  pcVar6 = _strchr(&stack0xffffffac,0x2e);
  uVar1 = 0;
  if (pcVar6 == (char *)0x0) {
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    *pcVar6 = '\0';
    lVar7 = _atol(&stack0xffffffac);
    *(short *)(param_1 + 4) = (short)lVar7;
    lVar7 = _atol(pcVar6 + 1);
    uVar1 = (undefined2)lVar7;
  }
  *(undefined2 *)(param_1 + 6) = uVar1;
  piVar3 = (int *)(**(code **)(*param_2 + 0xc))(L"Manufacturer");
  pWVar4 = (LPCWSTR)(**(code **)(*piVar3 + 8))();
  piVar3 = (int *)(**(code **)(*param_2 + 0xc))(L"ProductFamily");
  pWVar5 = (LPCWSTR)(**(code **)(*piVar3 + 8))();
  piVar3 = (int *)(**(code **)(*param_2 + 0xc))(L"ProductName");
  pWVar8 = (LPCWSTR)(**(code **)(*piVar3 + 8))();
  FUN_10003fe0((LPSTR)(param_1 + 0x36),0x22,pWVar4);
  FUN_10003fe0((LPSTR)(param_1 + 0x58),0x22,pWVar5);
  FUN_10003fe0((LPSTR)(param_1 + 0x7a),0x22,pWVar8);
  __security_check_cookie(CONCAT31((undefined3)local_17,local_1b._3_1_) ^ (uint)&stack0xffffffa0);
  return;
}



/**************************************************/

/* Function: FUN_10001a30 @ 10001a30 */

undefined4 FUN_10001a30(int param_1,int param_2)

{
  int iVar1;
  int local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000d6d8;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    DAT_1001310c = 0;
  }
  else if (param_2 == 1) {
    DAT_10013068 = param_1;
    ExceptionList = &local_c;
    FUN_100023b0(local_20);
    local_4 = 0;
    iVar1 = FUN_10001200(local_20);
    if (iVar1 != 0) {
      FUN_10001830(0x10013070,local_20);
    }
    local_4 = 0xffffffff;
    FUN_10003cc0(local_20);
  }
  ExceptionList = local_c;
  return 1;
}



/**************************************************/

/* Function: FUN_10001af0 @ 10001af0 */

HMODULE FUN_10001af0(LPCWSTR param_1)

{
  int iVar1;
  undefined4 local_24;
  HMODULE local_20;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10012070 ^ 0x10010130;
  ExceptionList = &local_14;
  local_20 = (HMODULE)0x0;
  local_24 = 0;
  if (DAT_10013114 == 0) {
    iVar1 = FUN_100015b0(&local_24);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (HMODULE)0x0;
    }
  }
  local_8 = 0;
  local_20 = LoadLibraryW(param_1);
  local_8 = 0xfffffffe;
  FUN_10001b86();
  ExceptionList = local_14;
  return local_20;
}



/**************************************************/

/* Function: FUN_10001b86 @ 10001b86 */

void FUN_10001b86(void)

{
  DWORD DVar1;
  FARPROC pFVar2;
  FARPROC unaff_EBX;
  int unaff_EBP;
  
  if (DAT_10013114 == unaff_EBX) {
    pFVar2 = (FARPROC)(uint)(*(FARPROC *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (pFVar2 == unaff_EBX) {
      *(FARPROC *)(unaff_EBP + 8) = unaff_EBX;
    }
    else {
      DVar1 = GetLastError();
      *(DWORD *)(unaff_EBP + 8) = DVar1;
    }
    if ((DAT_10013134 != unaff_EBX) ||
       (DAT_10013134 = FUN_10001020(&PTR_LAB_1000e1ec,(int *)&DAT_10013128,"DeactivateActCtx"),
       DAT_10013134 != unaff_EBX)) {
      (*DAT_10013134)();
    }
    if (pFVar2 != unaff_EBX) {
      SetLastError(*(DWORD *)(unaff_EBP + 8));
    }
    return;
  }
  return;
}



/**************************************************/

/* Function: DS_Entry @ 10001bf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DS_Entry(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5)

{
  wchar_t wVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  int local_620 [4];
  short sStack_60e;
  wchar_t local_60c;
  undefined1 auStack_60a [1022];
  wchar_t awStack_20c [260];
  uint local_4;
  
                    /* 0x1bf0  1  DS_Entry */
  local_4 = DAT_10012070 ^ (uint)local_620;
  FUN_100023b0(local_620);
  if (DAT_1001310c == 0) {
    if (param_2 == 1) {
      if ((short)param_3 != 8) goto LAB_10001c62;
      if ((short)param_4 != 1) goto LAB_10001cd9;
      *(undefined2 *)param_5 = 5;
      goto LAB_10001fc4;
    }
LAB_10001cd9:
    iVar2 = FUN_10001200(local_620);
    if (iVar2 != 0) {
      FUN_100011c0(local_620);
      iVar2 = FUN_10002730(local_620,L"InstallDirectory");
      if (iVar2 < 1) {
        _wcscpy_s(&local_60c,0x200,L"tpm.dll");
      }
      else {
        piVar3 = (int *)(**(code **)(local_620[0] + 0xc))(L"InstallDirectory");
        pwVar4 = (wchar_t *)(**(code **)(*piVar3 + 8))();
        _wcscpy_s(&local_60c,0x200,pwVar4);
        pwVar4 = &local_60c;
        do {
          wVar1 = *pwVar4;
          pwVar4 = pwVar4 + 1;
        } while (wVar1 != L'\0');
        if (1 < (uint)((int)pwVar4 - (int)auStack_60a >> 1)) {
          pwVar4 = &local_60c;
          do {
            wVar1 = *pwVar4;
            pwVar4 = pwVar4 + 1;
          } while (wVar1 != L'\0');
          if ((&sStack_60e)[(int)pwVar4 - (int)auStack_60a >> 1] != 0x5c) {
            _wcscat_s(&local_60c,0x200,L"\\");
          }
        }
        _wcscat_s(&local_60c,0x200,L"tpm.dll");
      }
      DAT_10013110 = FUN_10001af0(&local_60c);
      if (DAT_10013110 != (HMODULE)0x0) {
        DAT_10013060 = GetProcAddress(DAT_10013110,"tpmDispatch");
        if (((DAT_10013060 == (FARPROC)0x0) ||
            (DAT_1001306c = GetProcAddress(DAT_10013110,"tpmOpen"), DAT_1001306c == (FARPROC)0x0))
           || (DAT_10013064 = GetProcAddress(DAT_10013110,"tpmClose"), DAT_10013064 == (FARPROC)0x0)
           ) {
          FreeLibrary(DAT_10013110);
          DAT_10013110 = (HMODULE)0x0;
          iVar2 = FUN_10001200(local_620);
          if (iVar2 != 0) {
            FUN_100017f0(local_620);
          }
          FUN_10003cc0(local_620);
          goto LAB_10001fd0;
        }
        iVar2 = FUN_10003ba0(DAT_10013068,awStack_20c,0x104);
        if ((iVar2 == 0) || (iVar2 = (*DAT_1001306c)(awStack_20c,&DAT_10013070), iVar2 < 0)) {
          FreeLibrary(DAT_10013110);
          DAT_10013110 = (HMODULE)0x0;
          iVar2 = FUN_10001200(local_620);
          if (iVar2 != 0) {
            FUN_100017f0(local_620);
          }
          FUN_10003cc0(local_620);
          goto LAB_10001fd0;
        }
        DAT_1001310c = 1;
        goto LAB_10001e94;
      }
      iVar2 = FUN_10001200(local_620);
      if (iVar2 != 0) {
        FUN_100017f0(local_620);
      }
    }
  }
  else {
    if (param_2 != 1) {
LAB_10001cd1:
      if (DAT_1001310c == 0) goto LAB_10001cd9;
LAB_10001e94:
      iVar2 = (*DAT_10013060)(param_1,param_2,param_3,param_4,param_5);
      if ((param_2 == 1) && ((short)param_3 == 3)) {
        if ((short)param_4 == 0x401) {
          if ((short)iVar2 != 0) {
LAB_10001f76:
            if (DAT_1001310c != 0) {
              DAT_1001310c = 0;
              (*DAT_10013064)();
              if (DAT_10013110 != (HMODULE)0x0) {
                FreeLibrary(DAT_10013110);
                DAT_10013110 = (HMODULE)0x0;
              }
              iVar2 = FUN_10001200(local_620);
              if (iVar2 == 0) goto LAB_10001df1;
              FUN_100017f0(local_620);
            }
          }
        }
        else if ((short)param_4 == 0x402) goto LAB_10001f76;
      }
LAB_10001fc4:
      FUN_10003cc0(local_620);
      goto LAB_10001fd0;
    }
LAB_10001c62:
    if (((short)param_3 != 3) || ((short)param_4 != 1)) goto LAB_10001cd1;
    iVar2 = FUN_10001200(local_620);
    if (iVar2 != 0) {
      FUN_10001830((int)param_5,local_620);
      _DAT_10013070 = *param_5;
      piVar3 = (int *)(**(code **)(local_620[0] + 0xc))(L"AvailableDriver");
      FUN_100010d0(piVar3);
      goto LAB_10001fc4;
    }
  }
LAB_10001df1:
  FUN_10003cc0(local_620);
LAB_10001fd0:
  __security_check_cookie(local_4 ^ (uint)local_620);
  return;
}



/**************************************************/

/* Function: thunk_FUN_10004070 @ 10001ff0 */

void __fastcall thunk_FUN_10004070(undefined4 *param_1)

{
  if ((HGLOBAL)param_1[2] != (HGLOBAL)0x0) {
    GlobalUnlock((HGLOBAL)param_1[2]);
    GlobalFree((HGLOBAL)param_1[2]);
    param_1[2] = 0;
  }
  param_1[1] = 0x100;
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}



/**************************************************/

/* Function: FUN_10002000 @ 10002000 */

void __fastcall FUN_10002000(undefined4 *param_1)

{
  *param_1 = Association::vftable;
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10002030 @ 10002030 */

undefined4 __fastcall FUN_10002030(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/**************************************************/

/* Function: FUN_10002040 @ 10002040 */

undefined4 __fastcall FUN_10002040(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/**************************************************/

/* Function: FUN_10002050 @ 10002050 */

undefined4 __thiscall FUN_10002050(void *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if (*(void **)((int)this + 4) != (void *)0x0) {
    _free(*(void **)((int)this + 4));
  }
  pwVar2 = param_1;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  pwVar2 = _malloc(((int)pwVar2 - (int)(param_1 + 1) >> 1) * 2 + 2);
  *(wchar_t **)((int)this + 4) = pwVar2;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar3 = param_1;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    _wcscpy_s(pwVar2,((int)pwVar3 - (int)(param_1 + 1) >> 1) + 1,param_1);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100020d0 @ 100020d0 */

undefined4 __fastcall FUN_100020d0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/**************************************************/

/* Function: FUN_100020e0 @ 100020e0 */

undefined4 __fastcall FUN_100020e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/**************************************************/

/* Function: FUN_100020f0 @ 100020f0 */

undefined4 __thiscall FUN_100020f0(void *this,wchar_t *param_1,undefined4 param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  *(undefined4 *)((int)this + 0x10) = param_2;
  if (*(void **)((int)this + 8) != (void *)0x0) {
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != (wchar_t *)0x0) {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    *(int *)((int)this + 0xc) = ((int)pwVar2 - (int)(param_1 + 1) >> 1) * 2;
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    pwVar2 = _malloc(((int)pwVar2 - (int)(param_1 + 1) >> 1) * 2 + 2);
    *(wchar_t **)((int)this + 8) = pwVar2;
    if (pwVar2 != (wchar_t *)0x0) {
      pwVar3 = param_1;
      do {
        wVar1 = *pwVar3;
        pwVar3 = pwVar3 + 1;
      } while (wVar1 != L'\0');
      _wcscpy_s(pwVar2,((int)pwVar3 - (int)(param_1 + 1) >> 1) + 1,param_1);
    }
    return *(undefined4 *)((int)this + 0xc);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100021a0 @ 100021a0 */

uint __thiscall FUN_100021a0(void *this,void *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0x10) = param_3;
  if (*(void **)((int)this + 8) != (void *)0x0) {
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  *(uint *)((int)this + 0xc) = param_2;
  puVar1 = _malloc(param_2 + 2);
  *(undefined4 **)((int)this + 8) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = (param_2 >> 1) + 1;
  if (uVar3 != 0) {
    for (uVar2 = uVar3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined2 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 2);
    }
  }
  _memcpy(*(void **)((int)this + 8),param_1,(param_2 >> 1) * 2);
  return param_2;
}



/**************************************************/

/* Function: FUN_10002230 @ 10002230 */

int __thiscall FUN_10002230(void *this,int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  bool bVar10;
  
  iVar9 = *(int *)((int)this + 0x10);
  iVar2 = (**(code **)(*param_2 + 0x18))();
  iVar2 = iVar2 - iVar9;
  if (iVar2 == 0) {
    switch(iVar9) {
    case 0:
      psVar3 = (short *)(**(code **)(*(int *)this + 8))();
      psVar4 = (short *)(**(code **)(*param_2 + 8))();
      iVar2 = (int)*psVar3 - (int)*psVar4;
      break;
    case 1:
      piVar5 = (int *)(**(code **)(*(int *)this + 8))();
      piVar6 = (int *)(**(code **)(*param_2 + 8))();
      iVar2 = *piVar5 - *piVar6;
      break;
    case 2:
      puVar7 = (ushort *)(**(code **)(*(int *)this + 8))();
      puVar8 = (ushort *)(**(code **)(*param_2 + 8))();
      do {
        uVar1 = *puVar7;
        bVar10 = uVar1 < *puVar8;
        if (uVar1 != *puVar8) {
LAB_100022d6:
          iVar2 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto switchD_10002256_default;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar7[1];
        bVar10 = uVar1 < puVar8[1];
        if (uVar1 != puVar8[1]) goto LAB_100022d6;
        puVar7 = puVar7 + 2;
        puVar8 = puVar8 + 2;
      } while (uVar1 != 0);
      iVar2 = 0;
      break;
    case 3:
      iVar2 = (**(code **)(*(int *)this + 0xc))();
      iVar9 = (**(code **)(*param_2 + 0xc))();
      iVar2 = iVar2 - iVar9;
    }
  }
switchD_10002256_default:
  if (param_1 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10002320 @ 10002320 */

int __thiscall FUN_10002320(void *this,int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  ushort *puVar5;
  bool bVar6;
  
  iVar2 = 0;
  switch(*(undefined4 *)((int)this + 0x10)) {
  case 0:
    psVar3 = (short *)(**(code **)(*(int *)this + 8))();
    iVar2 = (int)(short)*param_2 - (int)*psVar3;
    break;
  case 1:
    piVar4 = (int *)(**(code **)(*(int *)this + 8))();
    iVar2 = *(int *)param_2 - *piVar4;
    break;
  case 2:
    puVar5 = (ushort *)(**(code **)(*(int *)this + 8))();
    do {
      uVar1 = *param_2;
      bVar6 = uVar1 < *puVar5;
      if (uVar1 != *puVar5) {
LAB_10002394:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto switchD_1000232a_default;
      }
      if (uVar1 == 0) break;
      uVar1 = param_2[1];
      bVar6 = uVar1 < puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_10002394;
      param_2 = param_2 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != 0);
  case 3:
    iVar2 = 0;
  }
switchD_1000232a_default:
  if (param_1 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_100023b0 @ 100023b0 */

undefined4 * __fastcall FUN_100023b0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = AssociationSet::vftable;
  param_1[3] = 0x40;
  param_1[2] = 0;
  pvVar1 = _malloc(0x100);
  param_1[1] = pvVar1;
  return param_1;
}



/**************************************************/

/* Function: FUN_100023e0 @ 100023e0 */

undefined4 __fastcall FUN_100023e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0xc) + 0x40;
    *(int *)(param_1 + 0xc) = iVar1;
    pvVar2 = _realloc(*(void **)(param_1 + 4),iVar1 * 4);
    if (pvVar2 == (void *)0x0) {
      return 0xffffffff;
    }
    *(void **)(param_1 + 4) = pvVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002420 @ 10002420 */

undefined4 __thiscall FUN_10002420(void *this,wchar_t *param_1)

{
  wchar_t *_Str1;
  int iVar1;
  int iVar2;
  wchar_t *_Str2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      _Str2 = param_1;
      _Str1 = (wchar_t *)(**(code **)**(undefined4 **)(*(int *)((int)this + 4) + iVar2 * 4))();
      iVar1 = __wcsicmp(_Str1,_Str2);
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)((int)this + 4) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 8));
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002470 @ 10002470 */

undefined4 __thiscall FUN_10002470(void *this,LPCSTR param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  wchar_t *_Str1;
  int iVar3;
  int iVar4;
  wchar_t *_Str2;
  undefined4 local_218 [131];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1000d70b;
  local_c = ExceptionList;
  uVar1 = DAT_10012070 ^ (uint)&stack0xfffffdd8;
  ExceptionList = &local_c;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      puVar2 = (undefined4 *)FUN_100041d0(local_218,param_1);
      _Str2 = (wchar_t *)*puVar2;
      uStack_4 = 0;
      _Str1 = (wchar_t *)
              (**(code **)**(undefined4 **)(*(int *)((int)this + 4) + iVar4 * 4))(_Str2,uVar1);
      iVar3 = __wcsicmp(_Str1,_Str2);
      uStack_4 = 0xffffffff;
      FUN_10004070(local_218);
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return *(undefined4 *)(*(int *)((int)this + 4) + iVar4 * 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 8));
  }
  ExceptionList = local_c;
  return 0;
}



/**************************************************/

/* Function: FUN_10002530 @ 10002530 */

undefined4 __thiscall FUN_10002530(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
}



/**************************************************/

/* Function: FUN_10002540 @ 10002540 */

void __thiscall FUN_10002540(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 4))(param_1);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x1c))(param_1,L"empty",2);
    (**(code **)(*(int *)this + 4))(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10002580 @ 10002580 */

void __thiscall FUN_10002580(void *this,LPCSTR param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 local_21c [130];
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1000d73b;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_10012070 ^ (uint)local_21c);
  uVar1 = DAT_10012070 ^ (uint)&stack0xfffffddc;
  ExceptionList = &local_c;
  FUN_100041d0(local_21c,param_1);
  uStack_4 = 0;
  iVar2 = (**(code **)(*(int *)this + 4))(local_21c[0],uVar1);
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x1c))(unaff_ESI,L"empty",2);
    (**(code **)(*(int *)this + 4))(local_21c[0]);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_10004070((undefined4 *)&stack0xfffffde0);
  ExceptionList = local_10;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffde0);
  return;
}



/**************************************************/

/* Function: FUN_10002650 @ 10002650 */

undefined4 __thiscall
FUN_10002650(void *this,int param_1,wchar_t *param_2,rsize_t param_3,void *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  int *piVar1;
  wchar_t *_Src;
  size_t _Size;
  void *_Src_00;
  undefined4 uVar2;
  
  if ((param_1 <= *(int *)((int)this + 8)) && (-1 < param_1)) {
    if (param_2 != (wchar_t *)0x0) {
      _Src = (wchar_t *)(**(code **)**(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4))();
      _wcscpy_s(param_2,param_3,_Src);
    }
    if (param_4 != (void *)0x0) {
      piVar1 = *(int **)(*(int *)((int)this + 4) + param_1 * 4);
      _Size = (**(code **)(**(int **)(*(int *)((int)this + 4) + param_1 * 4) + 0xc))();
      _Src_00 = (void *)(**(code **)(*piVar1 + 8))();
      _memcpy(param_4,_Src_00,_Size);
    }
    if (param_5 != (undefined4 *)0x0) {
      uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 4) + param_1 * 4) + 0xc))();
      *param_5 = uVar2;
    }
    if (param_6 != (undefined4 *)0x0) {
      uVar2 = (**(code **)(**(int **)(*(int *)((int)this + 4) + param_1 * 4) + 0x18))();
      *param_6 = uVar2;
    }
    return 0;
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_10002700 @ 10002700 */

undefined4 __thiscall FUN_10002700(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 4))(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))();
    return uVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002730 @ 10002730 */

undefined4 __thiscall FUN_10002730(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 4))(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xc))();
    return uVar2;
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_10002760 @ 10002760 */

undefined4 __thiscall FUN_10002760(void *this,LPCSTR param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_218 [520];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1000d77b;
  local_c = ExceptionList;
  uVar1 = DAT_10012070 ^ (uint)&stack0xfffffde4;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_100041d0(local_218,param_1);
  uStack_4 = 0;
  piVar3 = (int *)(**(code **)(*(int *)this + 4))(*puVar2,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_10004070((undefined4 *)&stack0xfffffde4);
  if (piVar3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = pvStack_10;
  return uVar4;
}



/**************************************************/

/* Function: FUN_10002800 @ 10002800 */

undefined4 __thiscall FUN_10002800(void *this,LPCSTR param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_218 [520];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1000d7ab;
  local_c = ExceptionList;
  uVar1 = DAT_10012070 ^ (uint)&stack0xfffffde4;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_100041d0(local_218,param_1);
  uStack_4 = 0;
  piVar3 = (int *)(**(code **)(*(int *)this + 4))(*puVar2,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_10004070((undefined4 *)&stack0xfffffde4);
  if (piVar3 == (int *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (**(code **)(*piVar3 + 0xc))();
  }
  ExceptionList = pvStack_10;
  return uVar4;
}



/**************************************************/

/* Function: FUN_100028a0 @ 100028a0 */

int __thiscall FUN_100028a0(void *this,ushort *param_1)

{
  void *_Dst;
  size_t _Size;
  ushort uVar1;
  undefined4 *_Memory;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  bool bVar6;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      puVar2 = (ushort *)(**(code **)**(undefined4 **)(*(int *)((int)this + 4) + iVar4 * 4))();
      puVar5 = param_1;
      do {
        uVar1 = *puVar2;
        bVar6 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_100028e6:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_100028eb;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar2[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_100028e6;
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      iVar3 = 0;
LAB_100028eb:
      if (iVar3 == 0) {
        _Memory = *(undefined4 **)(*(int *)((int)this + 4) + iVar4 * 4);
        if (_Memory != (undefined4 *)0x0) {
          FUN_10002000(_Memory);
          _free(_Memory);
        }
        _Size = (*(int *)((int)this + 8) - iVar4) * 4 - 4;
        if (0 < (int)_Size) {
          _Dst = (void *)(*(int *)((int)this + 4) + iVar4 * 4);
          _memcpy(_Dst,(void *)((int)_Dst + 4),_Size);
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        *(undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = 0;
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 8));
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10002960 @ 10002960 */

undefined4 __thiscall FUN_10002960(void *this,int param_1)

{
  void *_Dst;
  size_t _Size;
  undefined4 *_Memory;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8))) {
    _Memory = *(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_10002000(_Memory);
      _free(_Memory);
    }
    _Size = (*(int *)((int)this + 8) - param_1) * 4 - 4;
    if (0 < (int)_Size) {
      _Dst = (void *)(*(int *)((int)this + 4) + param_1 * 4);
      _memcpy(_Dst,(void *)((int)_Dst + 4),_Size);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    *(undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = 0;
    return 0;
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_100029e0 @ 100029e0 */

undefined4 __fastcall FUN_100029e0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  while (0 < iVar1) {
    (**(code **)(*param_1 + 0x30))(0);
    iVar1 = param_1[2];
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002a10 @ 10002a10 */

void __thiscall
FUN_10002a10(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4)

{
  int iVar1;
  LSTATUS LVar2;
  LPBYTE lpData;
  DWORD dwIndex;
  undefined4 uVar3;
  DWORD local_230;
  HKEY local_22c;
  undefined4 local_228;
  LPCWSTR local_224;
  HKEY local_220;
  HKEY local_21c;
  HKEY local_218;
  DWORD local_214;
  LPCWSTR local_210;
  WCHAR aWStack_20c [260];
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)&local_230;
  local_224 = param_2;
  local_210 = param_3;
  local_21c = (HKEY)0x0;
  local_220 = (HKEY)0x0;
  local_218 = (HKEY)0x0;
  local_22c = (HKEY)0x0;
  local_230 = 0;
  local_214 = 0;
  local_228 = 0;
  (**(code **)(*(int *)this + 0x38))();
  iVar1 = RegOpenKeyExW(param_4,(LPCWSTR)PTR_u_SOFTWARE_10012008,0,0x20019,&local_21c);
  if (iVar1 == 0) {
    iVar1 = RegOpenKeyExW(local_21c,param_1,0,0x20019,&local_220);
    if (iVar1 == 0) {
      iVar1 = RegOpenKeyExW(local_220,local_224,0,0x20019,&local_218);
      if (iVar1 == 0) {
        iVar1 = RegOpenKeyExW(local_218,local_210,0,0x20019,&local_22c);
        if (iVar1 == 0) {
          dwIndex = 0;
          local_224 = (LPCWSTR)0x104;
          iVar1 = RegEnumValueW(local_22c,0,aWStack_20c,(LPDWORD)&local_224,(LPDWORD)0x0,
                                (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
          while (iVar1 == 0) {
            dwIndex = dwIndex + 1;
            LVar2 = RegQueryValueExW(local_22c,aWStack_20c,(LPDWORD)0x0,&local_214,(LPBYTE)0x0,
                                     &local_230);
            if ((LVar2 != 0) || (lpData = _malloc(local_230), lpData == (LPBYTE)0x0))
            goto LAB_10002bc4;
            RegQueryValueExW(local_22c,aWStack_20c,(LPDWORD)0x0,&local_214,lpData,&local_230);
            switch(local_214) {
            case 0:
              uVar3 = 0;
              break;
            case 1:
              uVar3 = 2;
              goto LAB_10002b88;
            case 2:
            case 3:
            case 6:
            case 7:
            case 8:
              uVar3 = 3;
LAB_10002b88:
              (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_230,uVar3);
              goto switchD_10002b7f_default;
            case 4:
            case 5:
              uVar3 = 1;
              break;
            default:
              goto switchD_10002b7f_default;
            }
            (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_230,uVar3);
switchD_10002b7f_default:
            _free(lpData);
LAB_10002bc4:
            local_224 = (LPCWSTR)0x104;
            iVar1 = RegEnumValueW(local_22c,dwIndex,aWStack_20c,(LPDWORD)&local_224,(LPDWORD)0x0,
                                  (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
          }
        }
        else {
          local_228 = 0xfffffffd;
        }
      }
      else {
        local_228 = 0xfffffffc;
      }
    }
    else {
      local_228 = 0xfffffffb;
    }
  }
  else {
    local_228 = 0xfffffffa;
  }
  *(int *)((int)this + 0x10) = iVar1;
  if (local_22c != (HKEY)0x0) {
    RegCloseKey(local_22c);
  }
  if (local_218 != (HKEY)0x0) {
    RegCloseKey(local_218);
  }
  if (local_220 != (HKEY)0x0) {
    RegCloseKey(local_220);
  }
  if (local_21c != (HKEY)0x0) {
    RegCloseKey(local_21c);
  }
  __security_check_cookie(local_4 ^ (uint)&local_230);
  return;
}



/**************************************************/

/* Function: FUN_10002c90 @ 10002c90 */

void __thiscall
FUN_10002c90(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4)

{
  int *piVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD cbData;
  BYTE *lpData;
  LPCWSTR pWVar5;
  DWORD dwType;
  DWORD Reserved;
  HKEY local_234;
  HKEY local_230;
  HKEY local_22c;
  HKEY local_228;
  LPCWSTR local_224;
  undefined4 local_220;
  LSTATUS local_21c;
  void *local_218;
  DWORD local_214;
  LPCWSTR local_210;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)&local_234;
  local_224 = param_2;
  local_210 = param_3;
  local_228 = (HKEY)0x0;
  local_230 = (HKEY)0x0;
  local_22c = (HKEY)0x0;
  local_234 = (HKEY)0x0;
  local_220 = 0;
  local_214 = 0;
  local_218 = this;
  if ((param_4 == (HKEY)0x80000001) &&
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_10012008,0,0x20019,&local_228),
     LVar2 == 0)) {
    LVar2 = RegOpenKeyExW(local_228,param_1,0,0x20019,&local_230);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_228,param_1,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_230,&local_214);
    }
    LVar2 = RegOpenKeyExW(local_230,local_224,0,0x20019,&local_22c);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_230,local_224,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_22c,&local_214);
    }
    RegCloseKey(local_22c);
    RegCloseKey(local_230);
    RegCloseKey(local_228);
  }
  local_21c = RegOpenKeyExW(param_4,(LPCWSTR)PTR_u_SOFTWARE_10012008,0,0x20019,&local_228);
  if (local_21c == 0) {
    local_21c = RegOpenKeyExW(local_228,param_1,0,0x20019,&local_230);
    if (local_21c == 0) {
      local_21c = RegOpenKeyExW(local_230,local_224,0,0x20019,&local_22c);
      pWVar5 = local_210;
      if (local_21c == 0) {
        local_21c = RegOpenKeyExW(local_22c,local_210,0,0x2001f,&local_234);
        if (local_21c != 0) {
          if (param_4 == (HKEY)0x80000001) {
            local_21c = RegCreateKeyExW(local_22c,pWVar5,0,(LPWSTR)0x0,0,0x2001f,
                                        (LPSECURITY_ATTRIBUTES)0x0,&local_234,&local_214);
          }
          if (local_21c != 0) {
            local_220 = 0xffffffff;
            goto LAB_10002f76;
          }
        }
        local_224 = (LPCWSTR)0x104;
        iVar3 = RegEnumValueW(local_234,0,local_20c,(LPDWORD)&local_224,(LPDWORD)0x0,(LPDWORD)0x0,
                              (LPBYTE)0x0,(LPDWORD)0x0);
        while (iVar3 == 0) {
          RegDeleteValueW(local_234,local_20c);
          local_224 = (LPCWSTR)0x104;
          iVar3 = RegEnumValueW(local_234,0,local_20c,(LPDWORD)&local_224,(LPDWORD)0x0,(LPDWORD)0x0,
                                (LPBYTE)0x0,(LPDWORD)0x0);
        }
        RegFlushKey(local_234);
        iVar3 = 0;
        if (0 < *(int *)((int)local_218 + 8)) {
          do {
            piVar1 = *(int **)(*(int *)((int)local_218 + 4) + iVar3 * 4);
            dwType = 0;
            uVar4 = (**(code **)(*piVar1 + 0x18))();
            switch(uVar4) {
            case 0:
              dwType = 0;
              break;
            case 1:
              dwType = 4;
              break;
            case 2:
              dwType = 1;
              break;
            case 3:
              dwType = 3;
            }
            cbData = (**(code **)(*piVar1 + 0xc))();
            lpData = (BYTE *)(**(code **)(*piVar1 + 8))();
            Reserved = 0;
            pWVar5 = (LPCWSTR)(**(code **)*piVar1)();
            RegSetValueExW(local_234,pWVar5,Reserved,dwType,lpData,cbData);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)local_218 + 8));
        }
      }
      else {
        local_220 = 0xfffffffe;
      }
    }
    else {
      local_220 = 0xfffffffd;
    }
  }
  else {
    local_220 = 0xfffffffc;
  }
LAB_10002f76:
  if (local_21c != 0) {
    *(LSTATUS *)((int)local_218 + 0x10) = local_21c;
  }
  if (local_234 != (HKEY)0x0) {
    RegCloseKey(local_234);
  }
  if (local_22c != (HKEY)0x0) {
    RegCloseKey(local_22c);
  }
  if (local_230 != (HKEY)0x0) {
    RegCloseKey(local_230);
  }
  if (local_228 != (HKEY)0x0) {
    RegCloseKey(local_228);
  }
  __security_check_cookie(local_4 ^ (uint)&local_234);
  return;
}



/**************************************************/

/* Function: FUN_10002ff0 @ 10002ff0 */

void __thiscall
FUN_10002ff0(void *this,LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
            LPCWSTR param_5,HKEY param_6)

{
  int iVar1;
  LSTATUS LVar2;
  LPBYTE lpData;
  DWORD dwIndex;
  undefined4 uVar3;
  undefined4 local_238;
  DWORD local_234;
  HKEY local_230;
  LPCWSTR local_22c;
  HKEY local_228;
  HKEY local_224;
  DWORD local_220;
  HKEY local_21c;
  HKEY local_218;
  LPCWSTR local_214;
  LPCWSTR local_210;
  WCHAR aWStack_20c [260];
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)&local_238;
  local_22c = param_2;
  local_214 = param_4;
  local_210 = param_5;
  local_224 = (HKEY)0x0;
  local_21c = (HKEY)0x0;
  local_218 = (HKEY)0x0;
  local_228 = (HKEY)0x0;
  local_230 = (HKEY)0x0;
  local_234 = 0;
  local_220 = 0;
  local_238 = 0;
  (**(code **)(*(int *)this + 0x38))();
  iVar1 = RegOpenKeyExW(param_6,(LPCWSTR)PTR_u_SOFTWARE_10012008,0,0x20019,&local_224);
  if (iVar1 == 0) {
    iVar1 = RegOpenKeyExW(local_224,param_1,0,0x20019,&local_21c);
    if (iVar1 == 0) {
      iVar1 = RegOpenKeyExW(local_21c,local_22c,0,0x20019,&local_218);
      if (iVar1 == 0) {
        iVar1 = RegOpenKeyExW(local_218,local_214,0,0x20019,&local_228);
        if (iVar1 == 0) {
          iVar1 = RegOpenKeyExW(local_228,local_210,0,0x20019,&local_230);
          if (iVar1 == 0) {
            dwIndex = 0;
            local_22c = (LPCWSTR)0x104;
            iVar1 = RegEnumValueW(local_230,0,aWStack_20c,(LPDWORD)&local_22c,(LPDWORD)0x0,
                                  (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
            while (iVar1 == 0) {
              dwIndex = dwIndex + 1;
              LVar2 = RegQueryValueExW(local_230,aWStack_20c,(LPDWORD)0x0,&local_220,(LPBYTE)0x0,
                                       &local_234);
              if ((LVar2 != 0) || (lpData = _malloc(local_234), lpData == (LPBYTE)0x0))
              goto LAB_100031d0;
              RegQueryValueExW(local_230,aWStack_20c,(LPDWORD)0x0,&local_220,lpData,&local_234);
              switch(local_220) {
              case 0:
                uVar3 = 0;
                break;
              case 1:
                uVar3 = 2;
                goto LAB_10003194;
              case 2:
              case 3:
              case 6:
              case 7:
              case 8:
                uVar3 = 3;
LAB_10003194:
                (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_234,uVar3);
                goto switchD_1000318b_default;
              case 4:
              case 5:
                uVar3 = 1;
                break;
              default:
                goto switchD_1000318b_default;
              }
              (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_234,uVar3);
switchD_1000318b_default:
              _free(lpData);
LAB_100031d0:
              local_22c = (LPCWSTR)0x104;
              iVar1 = RegEnumValueW(local_230,dwIndex,aWStack_20c,(LPDWORD)&local_22c,(LPDWORD)0x0,
                                    (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
            }
          }
          else {
            local_238 = 0xfffffff9;
          }
        }
        else {
          local_238 = 0xfffffffa;
        }
      }
      else {
        local_238 = 0xfffffffb;
      }
    }
    else {
      local_238 = 0xfffffffd;
    }
  }
  else {
    local_238 = 0xfffffffe;
  }
  *(int *)((int)this + 0x10) = iVar1;
  if (local_230 != (HKEY)0x0) {
    RegCloseKey(local_230);
  }
  if (local_228 != (HKEY)0x0) {
    RegCloseKey(local_228);
  }
  if (local_218 != (HKEY)0x0) {
    RegCloseKey(local_218);
  }
  if (local_21c != (HKEY)0x0) {
    RegCloseKey(local_21c);
  }
  if (local_224 != (HKEY)0x0) {
    RegCloseKey(local_224);
  }
  __security_check_cookie(local_4 ^ (uint)&local_238);
  return;
}



/**************************************************/

/* Function: FUN_100032b0 @ 100032b0 */

void __thiscall
FUN_100032b0(void *this,LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
            LPCWSTR param_5,HKEY param_6)

{
  int *piVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD cbData;
  BYTE *lpData;
  LPCWSTR pWVar5;
  DWORD dwType;
  DWORD Reserved;
  HKEY local_23c;
  HKEY local_238;
  undefined4 local_234;
  HKEY local_230;
  LPCWSTR local_22c;
  LSTATUS local_228;
  HKEY local_224;
  HKEY local_220;
  DWORD local_21c;
  void *local_218;
  HKEY local_214;
  LPCWSTR local_210;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)&local_23c;
  local_22c = param_4;
  local_210 = param_5;
  local_214 = param_6;
  local_230 = (HKEY)0x0;
  local_238 = (HKEY)0x0;
  local_23c = (HKEY)0x0;
  local_224 = (HKEY)0x0;
  local_220 = (HKEY)0x0;
  local_234 = 0;
  local_21c = 0;
  local_218 = this;
  if ((param_6 == (HKEY)0x80000001) &&
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_10012008,0,0x20019,&local_230),
     LVar2 == 0)) {
    LVar2 = RegOpenKeyExW(local_230,param_1,0,0x20019,&local_238);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_230,param_1,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_238,&local_21c);
    }
    LVar2 = RegOpenKeyExW(local_238,param_2,0,0x20019,&local_23c);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_238,param_2,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_23c,&local_21c);
    }
    LVar2 = RegOpenKeyExW(local_23c,local_22c,0,0x20019,&local_224);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_23c,local_22c,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_224,&local_21c);
    }
    RegCloseKey(local_224);
    RegCloseKey(local_23c);
    RegCloseKey(local_238);
    RegCloseKey(local_230);
  }
  local_228 = RegOpenKeyExW(local_214,(LPCWSTR)PTR_u_SOFTWARE_10012008,0,0x20019,&local_230);
  if (local_228 == 0) {
    local_228 = RegOpenKeyExW(local_230,param_1,0,0x20019,&local_238);
    if (local_228 == 0) {
      local_228 = RegOpenKeyExW(local_238,param_2,0,0x20019,&local_23c);
      if (local_228 == 0) {
        local_228 = RegOpenKeyExW(local_23c,local_22c,0,0x20019,&local_224);
        pWVar5 = local_210;
        if (local_228 == 0) {
          local_228 = RegOpenKeyExW(local_224,local_210,0,0x2001f,&local_220);
          if (local_228 != 0) {
            if (local_214 == (HKEY)0x80000001) {
              local_228 = RegCreateKeyExW(local_224,pWVar5,0,(LPWSTR)0x0,0,0x2001f,
                                          (LPSECURITY_ATTRIBUTES)0x0,&local_220,&local_21c);
            }
            if (local_228 != 0) {
              local_234 = 0xfffffff9;
              goto LAB_10003610;
            }
          }
          local_22c = (LPCWSTR)0x104;
          iVar3 = RegEnumValueW(local_220,0,local_20c,(LPDWORD)&local_22c,(LPDWORD)0x0,(LPDWORD)0x0,
                                (LPBYTE)0x0,(LPDWORD)0x0);
          while (iVar3 == 0) {
            RegDeleteValueW(local_220,local_20c);
            local_22c = (LPCWSTR)0x104;
            iVar3 = RegEnumValueW(local_220,0,local_20c,(LPDWORD)&local_22c,(LPDWORD)0x0,
                                  (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
          }
          iVar3 = 0;
          if (0 < *(int *)((int)local_218 + 8)) {
            do {
              piVar1 = *(int **)(*(int *)((int)local_218 + 4) + iVar3 * 4);
              dwType = 0;
              uVar4 = (**(code **)(*piVar1 + 0x18))();
              switch(uVar4) {
              case 0:
                dwType = 0;
                break;
              case 1:
                dwType = 4;
                break;
              case 2:
                dwType = 1;
                break;
              case 3:
                dwType = 3;
              }
              cbData = (**(code **)(*piVar1 + 0xc))();
              lpData = (BYTE *)(**(code **)(*piVar1 + 8))();
              Reserved = 0;
              pWVar5 = (LPCWSTR)(**(code **)*piVar1)();
              RegSetValueExW(local_220,pWVar5,Reserved,dwType,lpData,cbData);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)((int)local_218 + 8));
          }
        }
        else {
          local_234 = 0xfffffffa;
        }
      }
      else {
        local_234 = 0xfffffffc;
      }
    }
    else {
      local_234 = 0xfffffffd;
    }
  }
  else {
    local_234 = 0xfffffffe;
  }
LAB_10003610:
  if (local_228 != 0) {
    *(LSTATUS *)((int)local_218 + 0x10) = local_228;
  }
  if (local_220 != (HKEY)0x0) {
    RegCloseKey(local_220);
  }
  if (local_224 != (HKEY)0x0) {
    RegCloseKey(local_224);
  }
  if (local_23c != (HKEY)0x0) {
    RegCloseKey(local_23c);
  }
  if (local_238 != (HKEY)0x0) {
    RegCloseKey(local_238);
  }
  if (local_230 != (HKEY)0x0) {
    RegCloseKey(local_230);
  }
  __security_check_cookie(local_4 ^ (uint)&local_23c);
  return;
}



/**************************************************/

/* Function: FUN_10003690 @ 10003690 */

void __thiscall
FUN_10003690(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4,
            LPCWSTR param_5,HKEY param_6)

{
  int *piVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD cbData;
  BYTE *lpData;
  LPCWSTR pWVar5;
  DWORD dwType;
  DWORD Reserved;
  HKEY local_244;
  HKEY local_240;
  undefined4 local_23c;
  HKEY local_238;
  HKEY local_234;
  HKEY local_230;
  LPCWSTR local_22c;
  HKEY local_228;
  void *local_224;
  DWORD local_220;
  HKEY local_21c;
  LPCWSTR local_218;
  LPCWSTR local_214;
  LPCWSTR local_210;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)&local_244;
  local_210 = param_3;
  local_218 = param_2;
  local_22c = param_4;
  local_214 = param_5;
  local_228 = param_6;
  local_234 = (HKEY)0x0;
  local_244 = (HKEY)0x0;
  local_240 = (HKEY)0x0;
  local_21c = (HKEY)0x0;
  local_230 = (HKEY)0x0;
  local_238 = (HKEY)0x0;
  local_23c = 0;
  local_220 = 0;
  local_224 = this;
  if ((param_6 == (HKEY)0x80000001) &&
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_10012008,0,0x20019,&local_234),
     LVar2 == 0)) {
    LVar2 = RegOpenKeyExW(local_234,param_1,0,0x20019,&local_244);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_234,param_1,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_244,&local_220);
    }
    LVar2 = RegOpenKeyExW(local_244,param_2,0,0x20019,&local_240);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_244,param_2,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_240,&local_220);
    }
    pWVar5 = local_22c;
    LVar2 = RegOpenKeyExW(local_240,local_22c,0,0x20019,&local_230);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_240,pWVar5,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_230
                      ,&local_220);
    }
    RegCloseKey(local_230);
    RegCloseKey(local_21c);
    RegCloseKey(local_240);
    RegCloseKey(local_244);
    RegCloseKey(local_234);
  }
  LVar2 = RegOpenKeyExW(local_228,(LPCWSTR)PTR_u_SOFTWARE_10012008,0,0x20019,&local_234);
  if (LVar2 == 0) {
    LVar2 = RegOpenKeyExW(local_234,param_1,0,0x20019,&local_244);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExW(local_244,local_218,0,0x20019,&local_240);
      if (LVar2 == 0) {
        LVar2 = RegOpenKeyExW(local_240,local_210,0,0x20019,&local_21c);
        if (LVar2 == 0) {
          LVar2 = RegOpenKeyExW(local_21c,local_22c,0,0x20019,&local_230);
          pWVar5 = local_214;
          if (LVar2 == 0) {
            LVar2 = RegOpenKeyExW(local_230,local_214,0,0x2001f,&local_238);
            if (LVar2 != 0) {
              if (local_228 == (HKEY)0x80000001) {
                LVar2 = RegCreateKeyExW(local_230,pWVar5,0,(LPWSTR)0x0,0,0x2001f,
                                        (LPSECURITY_ATTRIBUTES)0x0,&local_238,&local_220);
              }
              if (LVar2 != 0) {
                local_23c = 0xfffffff9;
                goto LAB_10003a26;
              }
            }
            local_228 = (HKEY)0x104;
            iVar3 = RegEnumValueW(local_238,0,local_20c,(LPDWORD)&local_228,(LPDWORD)0x0,
                                  (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
            while (iVar3 == 0) {
              RegDeleteValueW(local_238,local_20c);
              local_228 = (HKEY)0x104;
              iVar3 = RegEnumValueW(local_238,0,local_20c,(LPDWORD)&local_228,(LPDWORD)0x0,
                                    (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
            }
            local_22c = (LPCWSTR)0x0;
            if (0 < *(int *)((int)local_224 + 8)) {
              do {
                piVar1 = *(int **)(*(int *)((int)local_224 + 4) + (int)local_22c * 4);
                dwType = 0;
                uVar4 = (**(code **)(*piVar1 + 0x18))();
                switch(uVar4) {
                case 0:
                  dwType = 0;
                  break;
                case 1:
                  dwType = 4;
                  break;
                case 2:
                  dwType = 1;
                  break;
                case 3:
                  dwType = 3;
                }
                cbData = (**(code **)(*piVar1 + 0xc))();
                lpData = (BYTE *)(**(code **)(*piVar1 + 8))();
                Reserved = 0;
                pWVar5 = (LPCWSTR)(**(code **)*piVar1)();
                RegSetValueExW(local_238,pWVar5,Reserved,dwType,lpData,cbData);
                local_22c = (LPCWSTR)((int)local_22c + 1);
              } while ((int)local_22c < *(int *)((int)local_224 + 8));
            }
          }
          else {
            local_23c = 0xfffffffa;
          }
        }
        else {
          local_23c = 0xfffffffb;
        }
      }
      else {
        local_23c = 0xfffffffc;
      }
    }
    else {
      local_23c = 0xfffffffd;
    }
  }
  else {
    local_23c = 0xfffffffe;
  }
LAB_10003a26:
  if (LVar2 != 0) {
    *(LSTATUS *)((int)local_224 + 0x10) = LVar2;
  }
  if (local_238 != (HKEY)0x0) {
    RegCloseKey(local_238);
  }
  if (local_230 != (HKEY)0x0) {
    RegCloseKey(local_230);
  }
  if (local_21c != (HKEY)0x0) {
    RegCloseKey(local_21c);
  }
  if (local_240 != (HKEY)0x0) {
    RegCloseKey(local_240);
  }
  if (local_244 != (HKEY)0x0) {
    RegCloseKey(local_244);
  }
  if (local_234 != (HKEY)0x0) {
    RegCloseKey(local_234);
  }
  __security_check_cookie(local_4 ^ (uint)&local_244);
  return;
}



/**************************************************/

/* Function: FUN_10003ab0 @ 10003ab0 */

void __thiscall FUN_10003ab0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x3c))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000002);
  return;
}



/**************************************************/

/* Function: FUN_10003ae0 @ 10003ae0 */

void __thiscall FUN_10003ae0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x44))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000002,0);
  return;
}



/**************************************************/

/* Function: FUN_10003b10 @ 10003b10 */

void __thiscall FUN_10003b10(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x3c))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001);
  return;
}



/**************************************************/

/* Function: FUN_10003b40 @ 10003b40 */

void __thiscall FUN_10003b40(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x44))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001,0);
  return;
}



/**************************************************/

/* Function: FUN_10003b70 @ 10003b70 */

void __thiscall FUN_10003b70(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x60))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001,0);
  return;
}



/**************************************************/

/* Function: FUN_10003ba0 @ 10003ba0 */

void FUN_10003ba0(HMODULE param_1,wchar_t *param_2,rsize_t param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)local_20c;
  pwVar2 = (wchar_t *)0x0;
  GetModuleFileNameW(param_1,local_20c,0x104);
  pwVar1 = _wcsrchr(local_20c,L'\\');
  if (pwVar1 != (wchar_t *)0x0) {
    *pwVar1 = L'\0';
    pwVar2 = _wcsrchr(local_20c,L'\\');
    if (pwVar2 == (wchar_t *)0x0) goto LAB_10003c1c;
    pwVar2 = pwVar2 + 1;
  }
  _wcscpy_s(param_2,param_3,pwVar2);
LAB_10003c1c:
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}



/**************************************************/

/* Function: FUN_10003c40 @ 10003c40 */

undefined4 * __thiscall
FUN_10003c40(void *this,wchar_t *param_1,wchar_t *param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = Association::vftable;
  FUN_10002050(this,param_1);
  FUN_100020f0(this,param_2,param_3);
  return this;
}



/**************************************************/

/* Function: FUN_10003c80 @ 10003c80 */

undefined4 * __thiscall
FUN_10003c80(void *this,wchar_t *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = Association::vftable;
  FUN_10002050(this,param_1);
  FUN_100021a0(this,param_2,param_3,param_4);
  return this;
}



/**************************************************/

/* Function: FUN_10003cc0 @ 10003cc0 */

void __fastcall FUN_10003cc0(undefined4 *param_1)

{
  undefined4 *_Memory;
  int iVar1;
  
  iVar1 = 0;
  *param_1 = AssociationSet::vftable;
  if (0 < (int)param_1[2]) {
    do {
      _Memory = *(undefined4 **)(param_1[1] + iVar1 * 4);
      if (_Memory != (undefined4 *)0x0) {
        FUN_10002000(_Memory);
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[2]);
  }
  _free((void *)param_1[1]);
  return;
}



/**************************************************/

/* Function: FUN_10003d10 @ 10003d10 */

undefined4 __thiscall FUN_10003d10(void *this,wchar_t *param_1,wchar_t *param_2,undefined4 param_3)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000d7d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 4))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(param_2,param_3);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0;
  this_00 = operator_new(0x14);
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_10003c40(this_00,param_1,param_2,param_3);
  }
  *(undefined4 **)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  FUN_100023e0((int)this);
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@10003dc4 @ 10003dc4 */

undefined1 * Catch_10003dc4(void)

{
  return &LAB_10003dca;
}



/**************************************************/

/* Function: FUN_10003df0 @ 10003df0 */

undefined4 __thiscall
FUN_10003df0(void *this,wchar_t *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000d7f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 4))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(param_2,param_3,param_4);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0;
  this_00 = operator_new(0x14);
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_10003c80(this_00,param_1,param_2,param_3,param_4);
  }
  *(undefined4 **)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  FUN_100023e0((int)this);
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@10003eac @ 10003eac */

undefined1 * Catch_10003eac(void)

{
  return &LAB_10003eb2;
}



/**************************************************/

/* Function: FUN_10003ed0 @ 10003ed0 */

void __thiscall FUN_10003ed0(void *this,HMODULE param_1)

{
  int iVar1;
  wchar_t *pwStack_224;
  undefined4 uStack_220;
  wchar_t local_20c [248];
  uint uStack_1c;
  uint local_4;
  
  local_4 = DAT_10012070 ^ (uint)local_20c;
  uStack_220 = 0x10003f00;
  iVar1 = FUN_10003ba0(param_1,local_20c,0x104);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_20c);
    return;
  }
  uStack_220 = 0;
  pwStack_224 = L"ScanGear";
  (**(code **)(*(int *)this + 0x3c))(L"Canon");
  __security_check_cookie(uStack_1c ^ (uint)&pwStack_224);
  return;
}



/**************************************************/

/* Function: FUN_10003f60 @ 10003f60 */

int __cdecl FUN_10003f60(LPWSTR param_1,int param_2,LPCSTR param_3)

{
  char cVar1;
  LPCSTR pCVar2;
  int iVar3;
  
  if ((param_3 != (LPCSTR)0x0) && ((param_1 != (LPWSTR)0x0 || (param_2 == 0)))) {
    pCVar2 = param_3;
    do {
      cVar1 = *pCVar2;
      pCVar2 = pCVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = MultiByteToWideChar(0,0,param_3,(int)(pCVar2 + (1 - (int)(param_3 + 1))),(LPWSTR)0x0,0);
    if (param_2 != 0) {
      if (param_2 < iVar3) {
        SetLastError(0x57);
        return 0;
      }
      MultiByteToWideChar(0,0,param_3,(int)(pCVar2 + (1 - (int)(param_3 + 1))),param_1,param_2);
    }
    return iVar3;
  }
  SetLastError(0x57);
  return 0;
}



/**************************************************/

/* Function: FUN_10003fe0 @ 10003fe0 */

int __cdecl FUN_10003fe0(LPSTR param_1,int param_2,LPCWSTR param_3)

{
  int cchWideChar;
  WCHAR WVar1;
  LPCWSTR pWVar2;
  int iVar3;
  
  if ((param_3 != (LPCWSTR)0x0) && ((param_1 != (LPSTR)0x0 || (param_2 == 0)))) {
    pWVar2 = param_3;
    do {
      WVar1 = *pWVar2;
      pWVar2 = pWVar2 + 1;
    } while (WVar1 != L'\0');
    cchWideChar = ((int)pWVar2 - (int)(param_3 + 1) >> 1) + 1;
    iVar3 = WideCharToMultiByte(0,0,param_3,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (param_2 != 0) {
      if (param_2 < iVar3) {
        SetLastError(0x57);
        return 0;
      }
      WideCharToMultiByte(0,0,param_3,cchWideChar,param_1,param_2,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    return iVar3;
  }
  SetLastError(0x57);
  return 0;
}



/**************************************************/

/* Function: FUN_10004070 @ 10004070 */

void __fastcall FUN_10004070(undefined4 *param_1)

{
  if ((HGLOBAL)param_1[2] != (HGLOBAL)0x0) {
    GlobalUnlock((HGLOBAL)param_1[2]);
    GlobalFree((HGLOBAL)param_1[2]);
    param_1[2] = 0;
  }
  param_1[1] = 0x100;
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}



/**************************************************/

/* Function: FUN_100040b0 @ 100040b0 */

undefined4 __thiscall FUN_100040b0(void *this,int param_1)

{
  LPCWSTR lpString;
  HGLOBAL pvVar1;
  undefined2 *puVar2;
  int iVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  if (param_1 <= *(int *)((int)this + 4)) {
    return 0;
  }
  uVar5 = param_1 + 0x3fU & 0xffffffc0;
  if (*(HGLOBAL *)((int)this + 8) == (HGLOBAL)0x0) {
    pvVar1 = GlobalAlloc(2,uVar5 * 2);
    *(HGLOBAL *)((int)this + 8) = pvVar1;
    if (pvVar1 == (HGLOBAL)0x0) goto LAB_1000415f;
    puVar2 = GlobalLock(pvVar1);
    *(undefined2 **)this = puVar2;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
      lpString = (LPCWSTR)((int)this + 0xc);
      iVar3 = lstrlenW(lpString);
      if ((0 < iVar3) && (iVar3 = lstrlenW(lpString), iVar3 < *(int *)((int)this + 4))) {
        lstrcpyW(*(LPWSTR *)this,lpString);
      }
      goto LAB_1000415f;
    }
    pvVar1 = *(HGLOBAL *)((int)this + 8);
  }
  else {
    GlobalUnlock(*(HGLOBAL *)((int)this + 8));
    pvVar1 = GlobalReAlloc(*(HGLOBAL *)((int)this + 8),param_1 * 2,0);
    if (pvVar1 == (HGLOBAL)0x0) {
      pvVar1 = *(HGLOBAL *)((int)this + 8);
    }
    else {
      *(HGLOBAL *)((int)this + 8) = pvVar1;
      pvVar4 = GlobalLock(pvVar1);
      *(LPVOID *)this = pvVar4;
      if (pvVar4 != (LPVOID)0x0) goto LAB_1000415f;
      pvVar1 = *(HGLOBAL *)((int)this + 8);
    }
  }
  GlobalFree(pvVar1);
  *(undefined4 *)((int)this + 8) = 0;
LAB_1000415f:
  if (*(int *)((int)this + 8) != 0) {
    *(uint *)((int)this + 4) = uVar5;
    return 0;
  }
  FUN_10004070(this);
  return 1;
}



/**************************************************/

/* Function: FUN_10004190 @ 10004190 */

undefined4 * __thiscall FUN_10004190(void *this,LPCWSTR param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lstrlenW(param_1);
  iVar2 = FUN_100040b0(this,iVar1 + 1);
  if (iVar2 == 0) {
    _memcpy(*(void **)this,param_1,(iVar1 + 1) * 2);
  }
  return this;
}



/**************************************************/

/* Function: FUN_100041d0 @ 100041d0 */

void __thiscall FUN_100041d0(void *this,LPCSTR param_1)

{
  uint uVar1;
  LPWSTR _Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000d810;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_10003f60((LPWSTR)0x0,0,param_1);
  local_8 = 0;
  _Memory = operator_new(-(uint)((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 2));
  FUN_10003f60(_Memory,uVar1,param_1);
  *(undefined4 *)((int)this + 8) = 0;
  FUN_10004070(this);
  FUN_10004190(this,_Memory);
  _free(_Memory);
  FUN_10004276();
  return;
}



/**************************************************/

/* Function: Catch@10004260 @ 10004260 */

undefined * Catch_10004260(void)

{
  int unaff_EBP;
  
  FUN_10004190(*(void **)(unaff_EBP + -0x14),L"");
  return &DAT_10004273;
}



/**************************************************/

/* Function: FUN_10004276 @ 10004276 */

void FUN_10004276(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/**************************************************/

/* Function: _strchr @ 100042a0 */

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2019 */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



/**************************************************/

/* Function: FUN_1000435e @ 1000435e */

short * __cdecl FUN_1000435e(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if (*param_2 != 0) {
    sVar1 = *param_1;
    if (sVar1 != 0) {
      iVar3 = (int)param_1 - (int)param_2;
      psVar2 = param_2;
joined_r0x10004384:
      do {
        if (sVar1 != 0) {
          if (*psVar2 == 0) {
            return param_1;
          }
          if (*(short *)(iVar3 + (int)psVar2) == *psVar2) {
            sVar1 = *(short *)(iVar3 + (int)(psVar2 + 1));
            psVar2 = psVar2 + 1;
            goto joined_r0x10004384;
          }
        }
        if (*psVar2 == 0) {
          return param_1;
        }
        param_1 = param_1 + 1;
        sVar1 = *param_1;
        iVar3 = iVar3 + 2;
        psVar2 = param_2;
      } while (sVar1 != 0);
    }
    param_1 = (short *)0x0;
  }
  return param_1;
}



/**************************************************/

/* Function: _free @ 100043bc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_10015570 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_10005ffe(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10004412();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10013968,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_10005c7e();
      DVar4 = GetLastError();
      iVar5 = FUN_10005c43(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_10004412 @ 10004412 */

void FUN_10004412(void)

{
  FUN_10005e89(4);
  return;
}



/**************************************************/

/* Function: _wcscat_s @ 1000444a */

/* Library Function - Single Match
    _wcscat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        if (*pwVar3 == L'\0') break;
        pwVar3 = pwVar3 + 1;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        do {
          wVar1 = *_Src;
          *pwVar3 = wVar1;
          pwVar3 = pwVar3 + 1;
          _Src = _Src + 1;
          if (wVar1 == L'\0') break;
          _SizeInWords = _SizeInWords - 1;
        } while (_SizeInWords != 0);
        if (_SizeInWords != 0) {
          return 0;
        }
        *_Dst = L'\0';
        puVar2 = (undefined4 *)FUN_10005c7e();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_10004469;
      }
    }
    *_Dst = L'\0';
  }
  puVar2 = (undefined4 *)FUN_10005c7e();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_10004469:
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _V6_HeapAlloc @ 100044c4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_10015560) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1000450a();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000450a @ 1000450a */

void FUN_1000450a(void)

{
  FUN_10005e89(4);
  return;
}



/**************************************************/

/* Function: _malloc @ 10004513 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    puVar3 = (undefined4 *)FUN_10005c7e();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_10013968 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_10006f13(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_10015570 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_10004584:
      piVar1 = HeapAlloc(DAT_10013968,0,dwBytes);
    }
    else if ((DAT_10015570 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_10004584;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_10013e28 == 0) {
      puVar3 = (undefined4 *)FUN_10005c7e();
      *puVar3 = 0xc;
      goto LAB_100045b2;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_100045b2:
      puVar3 = (undefined4 *)FUN_10005c7e();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: __security_check_cookie @ 100045d6 */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_10012070) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/**************************************************/

/* Function: _wcscpy_s @ 100045e5 */

/* Library Function - Single Match
    _wcscpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        wVar1 = *_Src;
        *pwVar3 = wVar1;
        _Src = _Src + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
        pwVar3 = pwVar3 + 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      puVar2 = (undefined4 *)FUN_10005c7e();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_10004604;
    }
    *_Dst = L'\0';
  }
  puVar2 = (undefined4 *)FUN_10005c7e();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_10004604:
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strcpy_s @ 10004651 */

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  undefined4 *puVar2;
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
      puVar2 = (undefined4 *)FUN_10005c7e();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_10004670;
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_10005c7e();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_10004670:
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strcat_s @ 100046b6 */

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  undefined4 *puVar2;
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
        puVar2 = (undefined4 *)FUN_10005c7e();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_100046d5;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_10005c7e();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_100046d5:
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: __except_handler4 @ 10004730 */

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_10012070);
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
          goto LAB_100047db;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_1000eb2c != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1000eb2c)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_1000eb2c)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_10012070);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_10012070);
  }
LAB_100047db:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/**************************************************/

/* Function: _atol @ 100048c6 */

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

/* Function: _atol @ 100048d7 */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/**************************************************/

/* Function: _JumpToContinuation @ 100048dc */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10004905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/**************************************************/

/* Function: FID_conflict:_CallMemberFunction1 @ 1000490c */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10004911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _UnwindNestedFrames @ 10004913 */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000493c,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/**************************************************/

/* Function: FID_conflict:___CxxFrameHandler3 @ 10004965 */

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

/* Function: _CallSETranslator @ 100049cb */

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
    *(undefined4 *)param_2 = 0x10004a74;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_10012070 ^ (uint)&local_2c;
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

/* Function: TranslatorGuardHandler @ 10004aa0 */

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
                    /* WARNING: Could not recover jumptable at 0x10004b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/**************************************************/

/* Function: _GetRangeOfTrysToCheck @ 10004b3d */

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

/* Function: __CreateFrameInfo @ 10004bb0 */

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

/* Function: __IsExceptionObjectToBeDestroyed @ 10004bd8 */

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

/* Function: __FindAndUnlinkFrame @ 10004bf9 */

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

/* Function: _CallCatchBlock2 @ 10004c45 */

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
  
  local_14 = DAT_10012070 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1000499b;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/**************************************************/

/* Function: __CRT_INIT@12 @ 10004ca3 */

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
        _DAT_10013ad4 = DVar2 * 0x100 + DVar3;
        DAT_10013acc = DVar1;
        _DAT_10013ad0 = uVar8;
        DAT_10013ad8 = DVar2;
        _DAT_10013adc = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_10015574 = GetCommandLineA();
            DAT_10013948 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_10013944 = DAT_10013944 + 1;
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
    if (0 < DAT_10013944) {
      DAT_10013944 = DAT_10013944 + -1;
      if (DAT_10013b08 == 0) {
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
    FUN_100084e3();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_1001243c;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_1000846c(DAT_1001415c);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_10008552((int)_Memory,0);
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

/* Function: ___DllMainCRTStartup @ 10004e7c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_10013944 == 0)) {
LAB_10004f6a:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_1000e52c != (code *)0x0) {
        local_20 = (*DAT_1000e52c)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_10004f6a;
    }
    local_20 = FUN_10001a30(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_10001a30(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (DAT_1000e52c != (code *)0x0) {
        (*DAT_1000e52c)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_1000e52c != (code *)0x0)) {
        local_20 = (*DAT_1000e52c)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/**************************************************/

/* Function: entry @ 10004f72 */

void entry(int param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/**************************************************/

/* Function: _wcsrchr @ 10004f93 */

/* Library Function - Single Match
    _wcsrchr
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

wchar_t * __cdecl _wcsrchr(wchar_t *_Str,wchar_t _Ch)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  do {
    pwVar2 = pwVar2 + -1;
    if (pwVar2 == _Str) break;
  } while (*pwVar2 != _Ch);
  return (wchar_t *)((uint)pwVar2 & ~-(uint)(*pwVar2 != _Ch));
}



/**************************************************/

/* Function: _memcpy @ 10004fd0 */

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
          goto switchD_100051b3_caseD_2;
        case 3:
          goto switchD_100051b3_caseD_3;
        }
        goto switchD_100051b3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_100051b3_caseD_0;
      case 1:
        goto switchD_100051b3_caseD_1;
      case 2:
        goto switchD_100051b3_caseD_2;
      case 3:
        goto switchD_100051b3_caseD_3;
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
              goto switchD_100051b3_caseD_2;
            case 3:
              goto switchD_100051b3_caseD_3;
            }
            goto switchD_100051b3_caseD_1;
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
              goto switchD_100051b3_caseD_2;
            case 3:
              goto switchD_100051b3_caseD_3;
            }
            goto switchD_100051b3_caseD_1;
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
              goto switchD_100051b3_caseD_2;
            case 3:
              goto switchD_100051b3_caseD_3;
            }
            goto switchD_100051b3_caseD_1;
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
switchD_100051b3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_100051b3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_100051b3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_100051b3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1001542c != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000502c_caseD_2;
      case 3:
        goto switchD_1000502c_caseD_3;
      }
      goto switchD_1000502c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000502c_caseD_0;
    case 1:
      goto switchD_1000502c_caseD_1;
    case 2:
      goto switchD_1000502c_caseD_2;
    case 3:
      goto switchD_1000502c_caseD_3;
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
            goto switchD_1000502c_caseD_2;
          case 3:
            goto switchD_1000502c_caseD_3;
          }
          goto switchD_1000502c_caseD_1;
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
            goto switchD_1000502c_caseD_2;
          case 3:
            goto switchD_1000502c_caseD_3;
          }
          goto switchD_1000502c_caseD_1;
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
            goto switchD_1000502c_caseD_2;
          case 3:
            goto switchD_1000502c_caseD_3;
          }
          goto switchD_1000502c_caseD_1;
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
switchD_1000502c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000502c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000502c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000502c_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: ~type_info @ 10005335 */

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

/* Function: `scalar_deleting_destructor' @ 10005343 */

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

/* Function: operator== @ 1000535f */

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

/* Function: _free @ 1000537a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_10015570 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_10005ffe(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10004412();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10013968,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_10005c7e();
      DVar4 = GetLastError();
      iVar5 = FUN_10005c43(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/**************************************************/

/* Function: _realloc @ 1000537f */

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
  int *piVar4;
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
  if (DAT_10015570 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_10005558;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_10005ffe(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_10015560) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_10005ffe(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_10013968,0,_NewSize);
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
      FUN_100054c3();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_10013968,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10013e28 == 0) {
        piVar4 = (int *)FUN_10005c7e();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_10005585;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_10005c7e();
    if (local_24 != (uint *)0x0) goto LAB_10005564;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_10005558;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_10013968,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_10013e28 == 0) {
        piVar4 = (int *)FUN_10005c7e();
LAB_10005585:
        DVar5 = GetLastError();
        iVar2 = FUN_10005c43(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_10005c7e();
  }
  DVar5 = GetLastError();
  iVar2 = FUN_10005c43(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_10005558:
  __callnewh(_NewSize);
  piVar4 = (int *)FUN_10005c7e();
LAB_10005564:
  *piVar4 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_100054c3 @ 100054c3 */

void FUN_100054c3(void)

{
  FUN_10005e89(4);
  return;
}



/**************************************************/

/* Function: _LocaleUpdate @ 1000559a */

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
    if ((*(undefined **)this != PTR_DAT_10012b28) && ((p_Var2->_ownlocale & DAT_10012a44) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10012948) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10012a44) == 0)) {
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

/* Function: __wcsicmp_l @ 1000561c */

/* Library Function - Single Match
    __wcsicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wint_t wVar3;
  wint_t wVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (wchar_t *)0x0) {
    puVar5 = (undefined4 *)FUN_10005c7e();
    *puVar5 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar6 = 0x7fffffff;
  }
  else if (_Str2 == (wchar_t *)0x0) {
    puVar5 = (undefined4 *)FUN_10005c7e();
    *puVar5 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar6 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      do {
        wVar1 = *_Str1;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          wVar1 = wVar1 + L' ';
        }
        uVar8 = (uint)(ushort)wVar1;
        wVar2 = *_Str2;
        if ((0x40 < (ushort)wVar2) && ((ushort)wVar2 < 0x5b)) {
          wVar2 = wVar2 + L' ';
        }
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        uVar7 = (uint)(ushort)wVar2;
      } while ((wVar1 != L'\0') && (wVar1 == wVar2));
    }
    else {
      do {
        wVar3 = __towlower_l(*_Str1,&local_14);
        uVar8 = (uint)wVar3;
        _Str1 = _Str1 + 1;
        wVar4 = __towlower_l(*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        uVar7 = (uint)wVar4;
        if (wVar3 == 0) break;
      } while (wVar3 == wVar4);
    }
    iVar6 = uVar8 - uVar7;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar6;
}



/**************************************************/

/* Function: __wcsicmp @ 1000572b */

/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_100142a0 == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      puVar3 = (undefined4 *)FUN_10005c7e();
      *puVar3 = 0x16;
      FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      iVar4 = 0x7fffffff;
    }
    else {
      do {
        wVar1 = *_Str1;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          wVar1 = wVar1 + L' ';
        }
        wVar2 = *_Str2;
        if ((0x40 < (ushort)wVar2) && ((ushort)wVar2 < 0x5b)) {
          wVar2 = wVar2 + L' ';
        }
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
      } while ((wVar1 != L'\0') && (wVar1 == wVar2));
      iVar4 = (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
    }
  }
  else {
    iVar4 = __wcsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar4;
}



/**************************************************/

/* Function: bad_alloc @ 100057bc */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Library: Visual Studio 2005 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_1001209c,1);
  *(undefined ***)this = vftable;
  return this;
}



/**************************************************/

/* Function: FUN_100057e0 @ 100057e0 */

exception * __thiscall FUN_100057e0(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: operator_new @ 1000581a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __cdecl operator_new(uint param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined **local_10 [3];
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if ((_DAT_10013964 & 1) == 0) {
    _DAT_10013964 = _DAT_10013964 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_10013958);
    _atexit((_func_4879 *)&LAB_1000d846);
  }
  std::exception::exception((exception *)local_10,(exception *)&DAT_10013958);
  local_10[0] = std::bad_alloc::vftable;
  __CxxThrowException_8(local_10,&DAT_10010384);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



/**************************************************/

/* Function: _memmove @ 10005890 */

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
          goto switchD_10005a73_caseD_2;
        case 3:
          goto switchD_10005a73_caseD_3;
        }
        goto switchD_10005a73_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10005a73_caseD_0;
      case 1:
        goto switchD_10005a73_caseD_1;
      case 2:
        goto switchD_10005a73_caseD_2;
      case 3:
        goto switchD_10005a73_caseD_3;
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
              goto switchD_10005a73_caseD_2;
            case 3:
              goto switchD_10005a73_caseD_3;
            }
            goto switchD_10005a73_caseD_1;
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
              goto switchD_10005a73_caseD_2;
            case 3:
              goto switchD_10005a73_caseD_3;
            }
            goto switchD_10005a73_caseD_1;
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
              goto switchD_10005a73_caseD_2;
            case 3:
              goto switchD_10005a73_caseD_3;
            }
            goto switchD_10005a73_caseD_1;
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
switchD_10005a73_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10005a73_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10005a73_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10005a73_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1001542c != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_100058ec_caseD_2;
      case 3:
        goto switchD_100058ec_caseD_3;
      }
      goto switchD_100058ec_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100058ec_caseD_0;
    case 1:
      goto switchD_100058ec_caseD_1;
    case 2:
      goto switchD_100058ec_caseD_2;
    case 3:
      goto switchD_100058ec_caseD_3;
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
            goto switchD_100058ec_caseD_2;
          case 3:
            goto switchD_100058ec_caseD_3;
          }
          goto switchD_100058ec_caseD_1;
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
            goto switchD_100058ec_caseD_2;
          case 3:
            goto switchD_100058ec_caseD_3;
          }
          goto switchD_100058ec_caseD_1;
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
            goto switchD_100058ec_caseD_2;
          case 3:
            goto switchD_100058ec_caseD_3;
          }
          goto switchD_100058ec_caseD_1;
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
switchD_100058ec_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100058ec_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100058ec_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100058ec_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __isleadbyte_l @ 10005bf5 */

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

/* Function: FUN_10005c2b @ 10005c2b */

void __cdecl FUN_10005c2b(int param_1)

{
  __isleadbyte_l(param_1,(_locale_t)0x0);
  return;
}



/**************************************************/

/* Function: _free @ 10005c39 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_10015570 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_10005ffe(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10004412();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10013968,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_10005c7e();
      DVar4 = GetLastError();
      iVar5 = FUN_10005c43(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/**************************************************/

/* Function: operator_new @ 10005c3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl operator_new(uint param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined **appuStack_10 [3];
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if ((_DAT_10013964 & 1) == 0) {
    _DAT_10013964 = _DAT_10013964 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_10013958);
    _atexit((_func_4879 *)&LAB_1000d846);
  }
  std::exception::exception((exception *)appuStack_10,(exception *)&DAT_10013958);
  appuStack_10[0] = std::bad_alloc::vftable;
  __CxxThrowException_8(appuStack_10,&DAT_10010384);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



/**************************************************/

/* Function: FUN_10005c43 @ 10005c43 */

int __cdecl FUN_10005c43(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_100120c0)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x100120c4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_10005c7e @ 10005c7e */

undefined * FUN_10005c7e(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10008611();
  if (pDVar1 == (DWORD *)0x0) {
    return &DAT_10012228;
  }
  return (undefined *)(pDVar1 + 2);
}



/**************************************************/

/* Function: FUN_10005c91 @ 10005c91 */

DWORD * FUN_10005c91(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10008611();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1001222c;
  }
  return pDVar1 + 3;
}



/**************************************************/

/* Function: FUN_10005ca4 @ 10005ca4 */

void __cdecl FUN_10005ca4(DWORD param_1)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  
  pDVar1 = FUN_10005c91();
  *pDVar1 = param_1;
  iVar2 = FUN_10005c43(param_1);
  piVar3 = (int *)FUN_10005c7e();
  *piVar3 = iVar2;
  return;
}



/**************************************************/

/* Function: ___heap_select @ 10005cc2 */

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

/* Function: __heap_init @ 10005d1d */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_10013968 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_10013968 == (HANDLE)0x0) {
    return 0;
  }
  DAT_10015570 = ___heap_select();
  if ((DAT_10015570 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_10013968);
    DAT_10013968 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 10005d77 */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10015570 == 3) {
    iVar2 = 0;
    if (0 < DAT_10015558) {
      puVar1 = (undefined4 *)((int)DAT_1001555c + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_10013968,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10015558);
    }
    HeapFree(DAT_10013968,0,DAT_1001555c);
  }
  HeapDestroy(DAT_10013968);
  DAT_10013968 = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: __mtinitlocks @ 10005deb */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10013970;
  do {
    if ((&DAT_1001223c)[iVar2 * 2] == 1) {
      (&DAT_10012238)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10012238)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10012238)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 10005e34 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10012238;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10012358);
  puVar1 = &DAT_10012238;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10012358);
  return;
}



/**************************************************/

/* Function: FUN_10005e89 @ 10005e89 */

void __cdecl FUN_10005e89(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10012238)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 10005e9e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_10013968 == 0) {
    __FF_MSGBANNER();
    FUN_10006f13(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10012238 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_10005c7e();
      *puVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          puVar2 = (undefined4 *)FUN_10005c7e();
          *puVar2 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_10005f58();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_10005f58 @ 10005f58 */

void FUN_10005f58(void)

{
  FUN_10005e89(10);
  return;
}



/**************************************************/

/* Function: __lock @ 10005f61 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10012238)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10012238)[_File * 2]);
  return;
}



/**************************************************/

/* Function: ___sbh_heap_init @ 10005f92 */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_1001555c = HeapAlloc(DAT_10013968,0,0x140);
  if (DAT_1001555c == (LPVOID)0x0) {
    return 0;
  }
  DAT_10013ac0 = 0;
  DAT_10015558 = 0;
  DAT_10015564 = DAT_1001555c;
  DAT_10015560 = param_1;
  DAT_10015568 = 0x10;
  return 1;
}



/**************************************************/

/* Function: thunk_FUN_10005ffe @ 10005fda */

void __thiscall thunk_FUN_10005ffe(void *this,int param_1)

{
  FUN_10005ffe((void *)(DAT_10015558 * 0x14 + DAT_1001555c),param_1);
  return;
}



/**************************************************/

/* Function: FUN_10005ffe @ 10005ffe */

void __thiscall FUN_10005ffe(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/**************************************************/

/* Function: ___sbh_free_block @ 10006005 */

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
      if (DAT_10013ac0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1001556c * 0x8000 + DAT_10013ac0[3]),0x8000,0x4000);
        DAT_10013ac0[2] = DAT_10013ac0[2] | 0x80000000U >> ((byte)DAT_1001556c & 0x1f);
        *(undefined4 *)(DAT_10013ac0[4] + 0xc4 + DAT_1001556c * 4) = 0;
        *(char *)(DAT_10013ac0[4] + 0x43) = *(char *)(DAT_10013ac0[4] + 0x43) + -1;
        if (*(char *)(DAT_10013ac0[4] + 0x43) == '\0') {
          DAT_10013ac0[1] = DAT_10013ac0[1] & 0xfffffffe;
        }
        if (DAT_10013ac0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10013ac0[3],0,0x8000);
          HeapFree(DAT_10013968,0,(LPVOID)DAT_10013ac0[4]);
          _memmove(DAT_10013ac0,DAT_10013ac0 + 5,
                   (DAT_10015558 * 0x14 - (int)DAT_10013ac0) + -0x14 + DAT_1001555c);
          DAT_10015558 = DAT_10015558 + -1;
          if (DAT_10013ac0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10015564 = DAT_1001555c;
        }
      }
      DAT_10013ac0 = param_1;
      DAT_1001556c = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 10006319 */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10015558 == DAT_10015568) {
    pvVar1 = HeapReAlloc(DAT_10013968,0,DAT_1001555c,(DAT_10015568 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10015568 = DAT_10015568 + 0x10;
    DAT_1001555c = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10015558 * 0x14 + (int)DAT_1001555c);
  pvVar1 = HeapAlloc(DAT_10013968,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10015558 = DAT_10015558 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_10013968,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 100063c9 */

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

/* Function: ___sbh_resize_block @ 100064cf */

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

/* Function: ___sbh_alloc_block @ 100067ae */

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
  
  puVar9 = DAT_1001555c + DAT_10015558 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_10015564;
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
  puVar13 = DAT_1001555c;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_10015564 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_10015564) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_1001555c;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_10015564 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_10015564) &&
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
  DAT_10015564 = param_1;
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
    if (iVar10 == 0) goto LAB_10006a4e;
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
LAB_10006a4e:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_10013ac0)) && (local_8 == DAT_1001556c)) {
    DAT_10013ac0 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/**************************************************/

/* Function: __SEH_prolog4 @ 10006a94 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10012070 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 10006ad9 */

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

/* Function: FUN_10006aed @ 10006aed */

void __cdecl FUN_10006aed(undefined4 param_1)

{
  DAT_10013ac4 = param_1;
  return;
}



/**************************************************/

/* Function: __invoke_watson @ 10006af7 */

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
  
  iVar1 = DAT_10012070;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1000a69b();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/**************************************************/

/* Function: FUN_10006bf3 @ 10006bf3 */

void __cdecl
FUN_10006bf3(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_1000846c(DAT_10013ac4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1000a69b();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/**************************************************/

/* Function: __amsg_exit @ 10006c17 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_10006f13(param_1);
  pcVar1 = (code *)FUN_1000846c((int)PTR___exit_10012358);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: FUN_10006c3b @ 10006c3b */

void __cdecl FUN_10006c3b(undefined4 param_1)

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

/* Function: ___crtExitProcess @ 10006c61 */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_10006c3b(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: FUN_10006c76 @ 10006c76 */

void FUN_10006c76(void)

{
  __lock(8);
  return;
}



/**************************************************/

/* Function: FUN_10006c7f @ 10006c7f */

void FUN_10006c7f(void)

{
  FUN_10005e89(8);
  return;
}



/**************************************************/

/* Function: FUN_10006c88 @ 10006c88 */

void __cdecl FUN_10006c88(undefined4 *param_1)

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

/* Function: __initterm_e @ 10006ca0 */

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

/* Function: __get_osplatform @ 10006cc0 */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_10013acc != 0)) {
    *param_1 = DAT_10013acc;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_10005c7e();
  *puVar1 = 0x16;
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __get_winmajor @ 10006cf7 */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_10013acc != 0)) {
    *param_1 = DAT_10013ad8;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_10005c7e();
  *puVar1 = 0x16;
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __cinit @ 10006d33 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((DAT_10015550 != (code *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10015550), BVar1 != 0)) {
    (*DAT_10015550)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1000e19c,(undefined4 *)&DAT_1000e1b4);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_10009280);
    puVar3 = &DAT_1000e194;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1000e198);
    if ((DAT_10015554 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10015554), BVar1 != 0)) {
      (*DAT_10015554)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10006dc5 @ 10006dc5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10006e98) */

void __cdecl FUN_10006dc5(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10013b0c != 1) {
    DAT_10013b08 = 1;
    DAT_10013b04 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_1000846c(DAT_10015548);
      piVar3 = (int *)FUN_1000846c(DAT_10015544);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_1000846c(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_10006c88((undefined4 *)&DAT_1000e1c4);
    }
    FUN_10006c88((undefined4 *)&DAT_1000e1cc);
  }
  FUN_10006e92();
  if (param_3 != 0) {
    return;
  }
  DAT_10013b0c = 1;
  FUN_10005e89(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_10006e92 @ 10006e92 */

void FUN_10006e92(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_10005e89(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 10006ea7 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_10006dc5(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 10006eb8 */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_10006dc5(0,0,1);
  return;
}



/**************************************************/

/* Function: __init_pointers @ 10006ec7 */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_100070ec(uVar1);
  FUN_1000a5bc(uVar1);
  FUN_10006aed(uVar1);
  FUN_1000a8d6(uVar1);
  FUN_1000a8cc(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_100092a4();
  __initp_eh_hooks();
  PTR___exit_10012358 = (undefined *)FUN_100083f5(0x10006ea7);
  return;
}



/**************************************************/

/* Function: FUN_10006f13 @ 10006f13 */

void __cdecl FUN_10006f13(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  char *_Dst;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_10012360)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_10013954 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x10012364);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10013b10,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10013c2d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10013b29,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10013b29,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10013b29);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10013b29);
        _Dst = (char *)((int)&DAT_10013aec + sVar5 + 2);
        eVar3 = _strncpy_s(_Dst,(int)&DAT_10013e24 - (int)_Dst,"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10013b10,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10013b10,0x314,*(char **)(uVar6 * 8 + 0x10012364));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1000a8e0(&DAT_10013b10,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 100070b3 */

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
    if (DAT_10013954 != 1) {
      return;
    }
  }
  FUN_10006f13(0xfc);
  FUN_10006f13(0xff);
  return;
}



/**************************************************/

/* Function: FUN_100070ec @ 100070ec */

void __cdecl FUN_100070ec(undefined4 param_1)

{
  DAT_10013e24 = param_1;
  return;
}



/**************************************************/

/* Function: __callnewh @ 100070f6 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_1000846c(DAT_10013e24);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: ___report_gsfailure @ 10007118 */

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
  
  _DAT_10013f48 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10013f4c = &stack0x00000004;
  _DAT_10013e88 = 0x10001;
  _DAT_10013e30 = 0xc0000409;
  _DAT_10013e34 = 1;
  local_32c = DAT_10012070;
  local_328 = DAT_10012074;
  _DAT_10013e3c = unaff_retaddr;
  _DAT_10013f14 = in_GS;
  _DAT_10013f18 = in_FS;
  _DAT_10013f1c = in_ES;
  _DAT_10013f20 = in_DS;
  _DAT_10013f24 = unaff_EDI;
  _DAT_10013f28 = unaff_ESI;
  _DAT_10013f2c = unaff_EBX;
  _DAT_10013f30 = in_EDX;
  _DAT_10013f34 = in_ECX;
  _DAT_10013f38 = in_EAX;
  _DAT_10013f3c = unaff_EBP;
  DAT_10013f40 = unaff_retaddr;
  _DAT_10013f44 = in_CS;
  _DAT_10013f50 = in_SS;
  DAT_10013e80 = IsDebuggerPresent();
  FUN_1000a69b();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1000eb24);
  if (DAT_10013e80 == 0) {
    FUN_1000a69b();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: __local_unwind4 @ 1000721c */

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
  puStack_24 = &LAB_100072ac;
  pvStack_28 = ExceptionList;
  local_20 = DAT_10012070 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_1000ad58();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_100072f2 @ 100072f2 */

void FUN_100072f2(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 1000730e */

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

/* Function: _EH4_TransferToHandler @ 10007325 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1000733c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 1000733e */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10007353,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 10007358 */

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

/* Function: __ValidateImageBase @ 10007370 */

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

/* Function: __FindPESection @ 100073a0 */

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

/* Function: __IsNonwritableInCurrentImage @ 100073f0 */

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
  local_c = DAT_10012070 ^ 0x10010418;
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

/* Function: strtoxl @ 100074ab */

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
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
    puVar3 = (undefined4 *)FUN_10005c7e();
    *puVar3 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_10007562:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_10007562;
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
      goto LAB_100075c8;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_100075c8;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_100075c8;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_100075c8:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_10007622:
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
          puVar3 = (undefined4 *)FUN_10005c7e();
          *puVar3 = 0x22;
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
    if ((uint)param_4 <= uVar6) goto LAB_10007622;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_10007622;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: _strtol @ 100076d6 */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_100142a0 == 0) {
    ppuVar2 = &PTR_DAT_10012b30;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: FUN_1000770a @ 1000770a */

exception * __thiscall FUN_1000770a(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: ___TypeMatch @ 1000772c */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_10007782:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_10007760:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_10007782;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_10007760;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: FUN_10007788 @ 10007788 */

undefined4 __cdecl FUN_10007788(undefined4 *param_1)

{
  _ptiddata p_Var1;
  undefined4 extraout_EAX;
  
  if (*(int *)*param_1 == -0x1fbcb0b3) {
    p_Var1 = __getptd();
    if (0 < p_Var1->_ProcessingThrow) {
      p_Var1 = __getptd();
      p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
    }
  }
  else if (*(int *)*param_1 == -0x1f928c9d) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = 0;
    terminate();
    return extraout_EAX;
  }
  return 0;
}



/**************************************************/

/* Function: ___FrameUnwindToState @ 100077cc */

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
  FUN_10007892();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/**************************************************/

/* Function: FUN_10007892 @ 10007892 */

void FUN_10007892(void)

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

/* Function: FUN_100078ad @ 100078ad */

undefined4 FUN_100078ad(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  _ptiddata p_Var3;
  
  piVar1 = (int *)*in_EAX;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
      ((iVar2 = piVar1[5], iVar2 == 0x19930520 || ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))
      ) && (piVar1[7] == 0)) {
    p_Var3 = __getptd();
    (p_Var3->_setloc_data)._cacheout[0x27] = L'\x01';
    (p_Var3->_setloc_data)._cacheout[0x28] = L'\0';
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: ___DestructExceptionObject @ 100078f2 */

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

/* Function: ___AdjustPointer @ 10007946 */

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

/* Function: IsInExceptionSpec @ 1000796b */

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

/* Function: CallUnexpected @ 100079e4 */

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

/* Function: Catch_All@10007a15 @ 10007a15 */

void Catch_All_10007a15(void)

{
  code *pcVar1;
  _ptiddata p_Var2;
  int unaff_EBP;
  
  p_Var2 = __getptd();
  p_Var2->_curexcspec = *(void **)(unaff_EBP + 8);
  __CxxThrowException_8(0,(byte *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/**************************************************/

/* Function: CallCatchBlock @ 10007a2d */

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
  
  local_8 = &DAT_100104d8;
  uStack_c = 0x10007a39;
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
  FUN_10007b53();
  return local_20;
}



/**************************************************/

/* Function: FUN_10007b53 @ 10007b53 */

void FUN_10007b53(void)

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

/* Function: ___BuildCatchObjectHelper @ 10007bc9 */

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
        goto LAB_10007c4e;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_10007c4e:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/**************************************************/

/* Function: ___BuildCatchObject @ 10007d48 */

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

/* Function: CatchIt @ 10007dd9 */

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

/* Function: FindHandlerForForeignException @ 10007e45 */

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

/* Function: FindHandler @ 10007f37 */

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
  uint uVar8;
  HandlerType *pHVar9;
  _s_FuncInfo *p_Var10;
  int unaff_ESI;
  _s_FuncInfo *p_Var11;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar12;
  undefined **in_stack_ffffffd0;
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
    uVar8 = 0x19930520;
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
          uVar8 = 0;
          if (0 < *piVar2) {
            do {
              bVar4 = type_info::operator==
                                (*(type_info **)(uVar8 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar4) {
                ___DestructExceptionObject((int *)param_1);
                param_1 = (EHExceptionRecord *)s_bad_exception_1000eb3c;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                in_stack_ffffffd0 = std::bad_exception::vftable;
                __CxxThrowException_8(&stack0xffffffd0,&DAT_1001053c);
                p_Var11 = (_s_FuncInfo *)param_1;
                goto LAB_100080b6;
              }
              iVar6 = iVar6 + 1;
              uVar8 = uVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_10008075;
        }
      }
    }
LAB_100080b6:
    p_Var10 = param_5;
    if (((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var11->nIPMapEntries, uVar1 == uVar8 ||
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
                  goto LAB_1000819f;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_1000819f:
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
         uVar3 != '\0')) goto LAB_10008275;
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
LAB_10008075:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_10008275:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/**************************************************/

/* Function: ___InternalCxxFrameHandler @ 100082a5 */

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

/* Function: FUN_10008389 @ 10008389 */

undefined4 FUN_10008389(void)

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

/* Function: FUN_100083f5 @ 100083f5 */

int __cdecl FUN_100083f5(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10012440);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001243c != -1)) {
    iVar3 = DAT_1001243c;
    pcVar2 = TlsGetValue(DAT_10012440);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1000844f;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10008389();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1000844f:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 10008463 */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_100083f5(0);
  return;
}



/**************************************************/

/* Function: FUN_1000846c @ 1000846c */

int __cdecl FUN_1000846c(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10012440);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001243c != -1)) {
    iVar3 = DAT_1001243c;
    pcVar2 = TlsGetValue(DAT_10012440);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_100084c6;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10008389();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_100084c6:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_100084e3 @ 100084e3 */

LPVOID FUN_100084e3(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_10012440);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1000846c(DAT_10014158);
    TlsSetValue(DAT_10012440,lpTlsValue);
  }
  return lpTlsValue;
}



/**************************************************/

/* Function: __mtterm @ 10008515 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_1001243c != -1) {
    iVar2 = DAT_1001243c;
    pcVar1 = (code *)FUN_1000846c(DAT_10014160);
    (*pcVar1)(iVar2);
    DAT_1001243c = -1;
  }
  if (DAT_10012440 != 0xffffffff) {
    TlsFree(DAT_10012440);
    DAT_10012440 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: FUN_10008552 @ 10008552 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_10008552(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10012488;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_10008389();
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
  *(undefined **)(param_1 + 0x68) = &DAT_10012520;
  InterlockedIncrement((LONG *)&DAT_10012520);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10012b28;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_10008608();
  return;
}



/**************************************************/

/* Function: FUN_10008608 @ 10008608 */

void FUN_10008608(void)

{
  FUN_10005e89(0xc);
  return;
}



/**************************************************/

/* Function: FUN_10008611 @ 10008611 */

DWORD * FUN_10008611(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_1001243c;
  pcVar1 = FUN_100084e3();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_1001243c;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_1000846c(DAT_1001415c);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_10008552((int)_Memory,0);
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

/* Function: __getptd @ 10008688 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_10008611();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: __freefls@4 @ 100086a0 */

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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10012488) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10012520)) {
        _free(pLVar1);
      }
    }
    FUN_100087ac();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10012b28) && (pLVar1 != (LONG *)&DAT_10012a50)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_100087b8();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_100087ac @ 100087ac */

void FUN_100087ac(void)

{
  FUN_10005e89(0xd);
  return;
}



/**************************************************/

/* Function: FUN_100087b8 @ 100087b8 */

void FUN_100087b8(void)

{
  FUN_10005e89(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 100087c1 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_1001243c != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_10012440), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_1001243c;
      pcVar2 = TlsGetValue(DAT_10012440);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_1001243c;
    pcVar2 = (code *)FUN_1000846c(DAT_1001415c);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_10012440 != 0xffffffff) {
    TlsSetValue(DAT_10012440,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: __mtinit @ 1000882a */

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
  DAT_10014154 = GetProcAddress(hModule,"FlsAlloc");
  DAT_10014158 = GetProcAddress(hModule,"FlsGetValue");
  DAT_1001415c = GetProcAddress(hModule,"FlsSetValue");
  DAT_10014160 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10014154 == (FARPROC)0x0) || (DAT_10014158 == (FARPROC)0x0)) ||
      (DAT_1001415c == (FARPROC)0x0)) || (DAT_10014160 == (FARPROC)0x0)) {
    DAT_10014158 = TlsGetValue_exref;
    DAT_10014154 = (FARPROC)&LAB_100084da;
    DAT_1001415c = TlsSetValue_exref;
    DAT_10014160 = TlsFree_exref;
  }
  DAT_10012440 = TlsAlloc();
  if ((DAT_10012440 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10012440,DAT_10014158), BVar1 != 0))
  {
    __init_pointers();
    DAT_10014154 = (FARPROC)FUN_100083f5((int)DAT_10014154);
    DAT_10014158 = (FARPROC)FUN_100083f5((int)DAT_10014158);
    DAT_1001415c = (FARPROC)FUN_100083f5((int)DAT_1001415c);
    DAT_10014160 = (FARPROC)FUN_100083f5((int)DAT_10014160);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_1000846c((int)DAT_10014154);
      DAT_1001243c = (*pcVar3)(pcVar6);
      if ((DAT_1001243c != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_1001243c;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_1000846c((int)DAT_1001415c);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_10008552((int)pDVar4,0);
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

/* Function: terminate @ 100089ae */

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

/* Function: unexpected @ 100089e7 */

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

/* Function: _inconsistency @ 100089fa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1000846c(DAT_10014164);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/**************************************************/

/* Function: __initp_eh_hooks @ 10008a31 */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_10014164 = FUN_100083f5(0x100089ae);
  return;
}



/**************************************************/

/* Function: __CallSettingFrame@12 @ 10008a50 */

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

/* Function: __malloc_crt @ 10008a9c */

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
    if (DAT_10014168 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10014168 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __calloc_crt @ 10008adc */

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
    if (DAT_10014168 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10014168 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __realloc_crt @ 10008b24 */

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
    if (DAT_10014168 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10014168 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/**************************************************/

/* Function: __ioinit @ 10008b6f */

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
  
  uStack_c = 0x10008b7b;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10008da6:
    iVar7 = -1;
  }
  else {
    DAT_10015430 = 0x20;
    DAT_10015440 = puVar2;
    for (; puVar2 < DAT_10015440 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_10015430 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_10015430, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_10015440)[iVar7] = puVar2;
        DAT_10015430 = DAT_10015430 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_10015440)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_10015440)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_10008da6;
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
      piVar8 = DAT_10015440 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_10008da6;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_10015430);
    iVar7 = 0;
  }
  return iVar7;
}



/**************************************************/

/* Function: __ioterm @ 10008daf */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_10015440;
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
  } while ((int)puVar2 < 0x10015540);
  return;
}



/**************************************************/

/* Function: __setenvp @ 10008dfb */

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
  
  if (DAT_1001554c == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_10013948;
  if (DAT_10013948 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_10013948;
    DAT_10013aec = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_10013948);
          DAT_10013948 = (char *)0x0;
          *puVar1 = 0;
          _DAT_10015540 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10013aec);
            DAT_10013aec = (undefined4 *)0x0;
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

/* Function: parse_cmdline @ 10008ed6 */

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
        goto LAB_10008f68;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_10008f68:
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

/* Function: __setargv @ 1000906e */

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
  
  if (DAT_1001554c == 0) {
    ___initmbctable();
  }
  DAT_10014274 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10014170,0x104);
  _DAT_10013afc = &DAT_10014170;
  if ((DAT_10015574 == (char *)0x0) || (local_8 = DAT_10015574, *DAT_10015574 == '\0')) {
    local_8 = &DAT_10014170;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_10013ae0 = local_c - 1;
      _DAT_10013ae4 = puVar2;
      return 0;
    }
  }
  return -1;
}



/**************************************************/

/* Function: ___crtGetEnvironmentStringsA @ 10009127 */

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
  if (DAT_10014278 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10014278 = 1;
      goto LAB_10009179;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10014278 = 2;
    }
  }
  if (DAT_10014278 != 1) {
    if ((DAT_10014278 != 2) && (DAT_10014278 != 0)) {
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
LAB_10009179:
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

/* Function: __RTC_Initialize @ 1000925c */

/* WARNING: Removing unreachable block (ram,0x1000926e) */
/* WARNING: Removing unreachable block (ram,0x10009274) */
/* WARNING: Removing unreachable block (ram,0x10009276) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/**************************************************/

/* Function: FUN_100092a4 @ 100092a4 */

void FUN_100092a4(void)

{
  return;
}



/**************************************************/

/* Function: FUN_100092a5 @ 100092a5 */

undefined4 __cdecl FUN_100092a5(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_10008611();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_1001250c * 3);
    if ((piVar1 + DAT_1001250c * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_10012500 < DAT_10012504 + DAT_10012500) {
            iVar8 = DAT_10012500 * 0xc;
            iVar9 = DAT_10012500;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_10012504 + DAT_10012500);
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

/* Function: FUN_10009403 @ 10009403 */

undefined4 __cdecl FUN_10009403(int param_1,DWORD param_2)

{
  undefined4 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_100092a5(-0x1f928c9d,param_2);
    return uVar1;
  }
  return 0;
}



/**************************************************/

/* Function: ___security_init_cookie @ 1000941e */

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
  if ((DAT_10012070 == 0xbb40e64e) || ((DAT_10012070 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10012070 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10012070 == 0xbb40e64e) {
      DAT_10012070 = 0xbb40e64f;
    }
    else if ((DAT_10012070 & 0xffff0000) == 0) {
      DAT_10012070 = DAT_10012070 | DAT_10012070 << 0x10;
    }
  }
  DAT_10012074 = ~DAT_10012070;
  return;
}



/**************************************************/

/* Function: FUN_100094b2 @ 100094b2 */

void __cdecl FUN_100094b2(undefined4 *param_1,undefined4 *param_2,uint param_3)

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

/* Function: __VEC_memcpy @ 10009539 */

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
      FUN_100094b2(param_1,param_2,param_3 - uVar3);
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

/* Function: _Type_info_dtor @ 10009630 */

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
  _Memory = DAT_10014280;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_1001427c;
    do {
      piVar2 = piVar1;
      if (DAT_10014280 == (int *)0x0) goto LAB_10009674;
      piVar1 = DAT_10014280;
    } while (*DAT_10014280 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_10014280[1];
    _free(_Memory);
LAB_10009674:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_10009697();
  return;
}



/**************************************************/

/* Function: FUN_10009697 @ 10009697 */

void FUN_10009697(void)

{
  FUN_10005e89(0xe);
  return;
}



/**************************************************/

/* Function: _strcmp @ 100096a0 */

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
      if (bVar4 != *_Str2) goto LAB_100096e4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100096b0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100096e4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100096e4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100096b0:
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
LAB_100096e4:
  return (uint)bVar5 * -2 + 1;
}



/**************************************************/

/* Function: _memset @ 10009730 */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_1001542c != 0)) {
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

/* Function: __msize @ 100097aa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_10005c7e();
    *puVar1 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_10015570 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_10005ffe(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_10009844();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_10013968,0,_Memory);
  }
  return sVar2;
}



/**************************************************/

/* Function: FUN_10009844 @ 10009844 */

void FUN_10009844(void)

{
  FUN_10005e89(4);
  return;
}



/**************************************************/

/* Function: FUN_1000984d @ 1000984d */

undefined4 FUN_1000984d(void)

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

/* Function: setSBCS @ 1000987c */

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
    *puVar1 = puVar1[(int)&DAT_10012520 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10012520 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: setSBUpLow @ 100098d1 */

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
  
  local_8 = DAT_10012070 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10009a38:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10009a38;
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
          goto LAB_100099df;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_100099df:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 10009a5b */

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
  if (((p_Var1->_ownlocale & DAT_10012a44) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10012948) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10012520)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10012948;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10012948;
      InterlockedIncrement((LONG *)PTR_DAT_10012948);
    }
    FUN_10009af6();
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

/* Function: FUN_10009af6 @ 10009af6 */

void FUN_10009af6(void)

{
  FUN_10005e89(0xd);
  return;
}



/**************************************************/

/* Function: getSystemCP @ 10009aff */

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
  DAT_10014284 = 0;
  if (unaff_ESI == -2) {
    DAT_10014284 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10014284 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_10014284 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_10014284 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: FUN_10009b79 @ 10009b79 */

void __cdecl FUN_10009b79(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_10012070 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_10009bb5:
    if (*(uint *)((int)&DAT_10012950 + uVar5) != uVar4) goto code_r0x10009bc1;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10012960 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1001294c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_1000984d();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_10012954 + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_10009ce6;
  }
LAB_10009ba2:
  setSBCS(unaff_EDI);
LAB_10009d43:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x10009bc1:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10009bce;
  goto LAB_10009bb5;
code_r0x10009bce:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_10009d43;
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
      uVar9 = FUN_1000984d();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_10009ce6:
    setSBUpLow(unaff_EDI);
    goto LAB_10009d43;
  }
  if (DAT_10014284 == 0) goto LAB_10009d43;
  goto LAB_10009ba2;
}



/**************************************************/

/* Function: __setmbcp @ 10009d52 */

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
  undefined4 *puVar5;
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
      local_24 = FUN_10009b79(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10012520)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10012a44 & 1) == 0)) {
          __lock(0xd);
          _DAT_10014294 = ptVar3->mbcodepage;
          _DAT_10014298 = ptVar3->ismbcodepage;
          _DAT_1001429c = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10014288)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10012740)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10012848)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10012948);
          if ((LVar4 == 0) && (PTR_DAT_10012948 != &DAT_10012520)) {
            _free(PTR_DAT_10012948);
          }
          PTR_DAT_10012948 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_10009eb3();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10012520) {
          _free(ptVar3);
        }
        puVar5 = (undefined4 *)FUN_10005c7e();
        *puVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_10009eb3 @ 10009eb3 */

void FUN_10009eb3(void)

{
  FUN_10005e89(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 10009eec */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_1001554c == 0) {
    __setmbcp(-3);
    DAT_1001554c = 1;
  }
  return 0;
}



/**************************************************/

/* Function: ___freetlocinfo @ 10009f0a */

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10012c50)) &&
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
  if ((ppuVar2 != &PTR_DAT_10012b90) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10012a48) &&
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

/* Function: ___addlocaleref @ 1000a04a */

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
    if (((undefined *)pLVar1[-2] != &DAT_10012a48) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: ___removelocaleref @ 1000a0d0 */

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
      if (((undefined *)pLVar1[-2] != &DAT_10012a48) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: __updatetlocinfoEx_nolock @ 1000a15c */

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
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10012a50)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 1000a19a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10012a44) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1000a204();
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

/* Function: FUN_1000a204 @ 1000a204 */

void FUN_1000a204(void)

{
  FUN_10005e89(0xc);
  return;
}



/**************************************************/

/* Function: __towlower_l @ 1000a210 */

/* Library Function - Single Match
    __towlower_l
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __towlower_l(wint_t _C,_locale_t _Locale)

{
  wchar_t *_DWMapFlag;
  wint_t wVar1;
  int iVar2;
  undefined2 in_stack_00000006;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  ushort local_8 [2];
  
  wVar1 = 0xffff;
  if (_C != 0xffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
    _DWMapFlag = (local_18.locinfo)->lc_category[0].wlocale;
    if (_DWMapFlag == (wchar_t *)0x0) {
      wVar1 = _C;
      if ((ushort)(_C - 0x41) < 0x1a) {
        wVar1 = _C + 0x20;
      }
    }
    else if (_C < 0x100) {
      iVar2 = __iswctype_l(_C,1,&local_18);
      wVar1 = _C;
      if (iVar2 != 0) {
        wVar1 = (wint_t)*(byte *)((int)local_18.locinfo[1].lc_category[0].wlocale + (__C & 0xffff));
      }
    }
    else {
      iVar2 = ___crtLCMapStringW((LPCWSTR)&local_18,(DWORD)_DWMapFlag,(LPCWSTR)0x100,(int)&_C,
                                 (LPWSTR)0x1,(int)local_8);
      wVar1 = _C;
      if (iVar2 != 0) {
        wVar1 = local_8[0];
      }
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return wVar1;
}



/**************************************************/

/* Function: exception @ 1000a2bd */

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

/* Function: exception @ 1000a30b */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  char *pcVar1;
  
  *(undefined ***)this = vftable;
  pcVar1 = *param_1;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = pcVar1;
  return;
}



/**************************************************/

/* Function: exception @ 1000a323 */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)(this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    *(char **)(this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}



/**************************************************/

/* Function: ~exception @ 1000a37b */

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

/* Function: FUN_1000a391 @ 1000a391 */

char * __fastcall FUN_1000a391(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/**************************************************/

/* Function: FUN_1000a39e @ 1000a39e */

exception * __thiscall FUN_1000a39e(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000a3ba @ 1000a3ba */

int __cdecl FUN_1000a3ba(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_1000846c(DAT_10015548);
  piVar2 = (int *)FUN_1000846c(DAT_10015544);
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
        DAT_10015548 = FUN_100083f5((int)pvVar5);
      }
      iVar6 = FUN_100083f5(param_1);
      *piVar2 = iVar6;
      DAT_10015544 = FUN_100083f5((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __onexit @ 1000a4a2 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_10006c76();
  p_Var1 = (_onexit_t)FUN_1000a3ba((int)_Func);
  FUN_1000a4d8();
  return p_Var1;
}



/**************************************************/

/* Function: FUN_1000a4d8 @ 1000a4d8 */

void FUN_1000a4d8(void)

{
  FUN_10006c7f();
  return;
}



/**************************************************/

/* Function: _atexit @ 1000a4de */

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

/* Function: __CxxThrowException@8 @ 1000a4f0 */

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
  
  pDVar2 = &DAT_1000ec54;
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

/* Function: __iswctype_l @ 1000a53a */

/* Library Function - Single Match
    __iswctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    local_8[0] = 0;
  }
  else if (_C < 0x100) {
    local_8[0] = *(ushort *)(PTR_DAT_10012b88 + (uint)_C * 2) & _Type;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
    iVar1 = ___crtGetStringTypeW
                      (&local_18,1,(wchar_t *)&_C,1,local_8,(local_18.locinfo)->lc_codepage,
                       (int)(local_18.locinfo)->lc_category[0].wlocale);
    if (iVar1 == 0) {
      local_8[0] = 0;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return (uint)(local_8[0] & _Type);
}



/**************************************************/

/* Function: FUN_1000a5bc @ 1000a5bc */

void __cdecl FUN_1000a5bc(undefined4 param_1)

{
  DAT_100142c4 = param_1;
  return;
}



/**************************************************/

/* Function: ___crtInitCritSecNoSpinCount@8 @ 1000a5c6 */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 1000a5d6 */

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
  
  local_8 = &DAT_100106e0;
  uStack_c = 0x1000a5e2;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_1000846c(DAT_100142c4);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1000a64c;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_1000a63b:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1000a63b;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1000a63b;
  }
  DAT_100142c4 = FUN_100083f5((int)pcVar1);
LAB_1000a64c:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000a69b @ 1000a69b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a69b(void)

{
  _DAT_10015424 = 0;
  return;
}



/**************************************************/

/* Function: __initp_misc_cfltcvt_tab @ 1000a6a3 */

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
    piVar1 = (int *)((int)&PTR_LAB_10012b3c + uVar3);
    iVar2 = FUN_100083f5(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: __initp_misc_winsig @ 1000a6c2 */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_100142c8 = param_1;
  DAT_100142cc = param_1;
  DAT_100142d0 = param_1;
  DAT_100142d4 = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 1000a6db */

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
  } while (uVar1 < DAT_1001250c * 0xc + param_1);
  if ((DAT_1001250c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 1000a70f */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_1000846c(DAT_100142d0);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 1000a71c */

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
        puVar6 = &DAT_100142c8;
        iVar3 = DAT_100142c8;
        goto LAB_1000a7d1;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_1000a7af;
        if (_SigNum != 8) goto LAB_1000a793;
      }
    }
    pDVar7 = FUN_10008611();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_100142d4;
      iVar3 = DAT_100142d4;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_100142cc;
      iVar3 = DAT_100142cc;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1000a793:
        puVar6 = (undefined4 *)FUN_10005c7e();
        *puVar6 = 0x16;
        FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_1000a7af:
      puVar6 = &DAT_100142d0;
      iVar3 = DAT_100142d0;
    }
LAB_1000a7d1:
    bVar1 = true;
    pcVar4 = (code *)FUN_1000846c(iVar3);
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
      goto LAB_1000a835;
    }
  }
  else {
LAB_1000a835:
    if (_SigNum == 8) {
      for (local_28 = DAT_10012500; local_28 < DAT_10012504 + DAT_10012500; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_1000a86f;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_1000a86f:
  FUN_1000a890();
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

/* Function: FUN_1000a890 @ 1000a890 */

void FUN_1000a890(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_10005e89(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000a8cc @ 1000a8cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000a8cc(undefined4 param_1)

{
  _DAT_100142dc = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1000a8d6 @ 1000a8d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000a8d6(undefined4 param_1)

{
  _DAT_100142e8 = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1000a8e0 @ 1000a8e0 */

undefined4 __cdecl FUN_1000a8e0(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_100142ec == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_100142ec = FUN_100083f5((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_100142f0 = FUN_100083f5((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_100142f4 = FUN_100083f5((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_100142fc = FUN_100083f5((int)pFVar1);
      if (DAT_100142fc != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_100142f8 = FUN_100083f5((int)pFVar1);
      }
    }
  }
  if ((DAT_100142f8 != local_c) && (DAT_100142fc != local_c)) {
    pcVar3 = (code *)FUN_1000846c(DAT_100142f8);
    pcVar4 = (code *)FUN_1000846c(DAT_100142fc);
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
      goto LAB_1000aa76;
    }
  }
  if ((((DAT_100142f0 != local_c) &&
       (pcVar3 = (code *)FUN_1000846c(DAT_100142f0), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_100142f4 != local_c &&
      (pcVar3 = (code *)FUN_1000846c(DAT_100142f4), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1000aa76:
  pcVar3 = (code *)FUN_1000846c(DAT_100142ec);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/**************************************************/

/* Function: _strncpy_s @ 1000aa9d */

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  undefined4 *puVar2;
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
LAB_1000aac1:
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
          puVar2 = (undefined4 *)FUN_10005c7e();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_1000aad2;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_1000aac1;
  puVar2 = (undefined4 *)FUN_10005c7e();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_1000aad2:
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: _strlen @ 1000ab50 */

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
    if (((uint)puVar2 & 3) == 0) goto LAB_1000ab80;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1000abb3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1000ab80:
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
  goto LAB_1000abb3;
}



/**************************************************/

/* Function: __set_error_mode @ 1000abdb */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_10013950;
      DAT_10013950 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_10013950;
    }
  }
  puVar2 = (undefined4 *)FUN_10005c7e();
  *puVar2 = 0x16;
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: __global_unwind2 @ 1000ac24 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000ac3c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 1000ac89 */

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
  puStack_1c = &LAB_1000ac44;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_1000ad58();
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify1 @ 1000ad30 */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10012b78 = param_1;
  DAT_10012b74 = in_EAX;
  DAT_10012b7c = unaff_EBP;
  return in_EAX;
}



/**************************************************/

/* Function: __NLG_Notify @ 1000ad39 */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10012b78 = param_1;
  DAT_10012b74 = in_EAX;
  DAT_10012b7c = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_1000ad58 @ 1000ad58 */

void FUN_1000ad58(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: __isctype_l @ 1000ad5b */

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

/* Function: __EH_prolog3_catch @ 1000aef5 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10012070 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: _ValidateRead @ 1000af2b */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/**************************************************/

/* Function: _abort @ 1000af38 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if ((DAT_10012b80 & 1) != 0) {
    FUN_10006f13(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if ((DAT_10012b80 & 2) != 0) {
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

/* Function: __calloc_impl @ 1000b02b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
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
        if ((DAT_10015570 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_10015560)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_1000b127();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_1000b0dc;
          }
        }
        else {
LAB_1000b0dc:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_10013968,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_10013e28 == 0) {
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
    puVar1 = (undefined4 *)FUN_10005c7e();
    *puVar1 = 0xc;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: FUN_1000b127 @ 1000b127 */

void FUN_1000b127(void)

{
  FUN_10005e89(4);
  return;
}



/**************************************************/

/* Function: x_ismbbtype_l @ 1000b149 */

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
    if (uVar1 == 0) goto LAB_1000b18b;
  }
  iVar2 = 1;
LAB_1000b18b:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead @ 1000b19a */

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

/* Function: FUN_1000b1ad @ 1000b1ad */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_1000b1ad(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 1000b1fd */

/* WARNING: Removing unreachable block (ram,0x1000b238) */
/* WARNING: Removing unreachable block (ram,0x1000b225) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_1000b1ad(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: fastzero_I @ 1000b26a */

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

/* Function: __VEC_memzero @ 1000b2c1 */

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

/* Function: __freea @ 1000b350 */

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

/* Function: __crtLCMapStringA_stat @ 1000b36b */

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
  
  local_8 = DAT_10012070 ^ (uint)&stack0xfffffffc;
  if (DAT_1001433c == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_1001433c = 2;
      }
    }
    else {
      DAT_1001433c = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1000b3da;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1000b3da:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_1001433c == 2) || (DAT_1001433c == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1000b6fb;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_1000b6fb;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000b6d8;
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
LAB_1000b6d8:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1000b6fb;
  }
  if (DAT_1001433c != 1) goto LAB_1000b6fb;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000b6fb;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_1000b482:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1000b482;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_1000b6fb;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000b591;
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
LAB_1000b591:
  __freea(local_10);
LAB_1000b6fb:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 1000b70d */

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

/* Function: __crtGetStringTypeA_stat @ 1000b750 */

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
  
  local_8 = DAT_10012070 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10014340 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10014340 = 2;
      }
      goto LAB_1000b7a9;
    }
    DAT_10014340 = 1;
  }
  else {
LAB_1000b7a9:
    if ((DAT_10014340 == 2) || (DAT_10014340 == 0)) {
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
      goto LAB_1000b8f6;
    }
    if (DAT_10014340 != 1) goto LAB_1000b8f6;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000b8f6;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1000b839:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1000b839;
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
LAB_1000b8f6:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 1000b908 */

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

/* Function: ___free_lc_time @ 1000b948 */

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

/* Function: ___free_lconv_num @ 1000bad8 */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10012c50) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10012c54) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10012c58) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 1000bb18 */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10012c5c) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10012c60) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10012c64) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10012c68) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10012c6c) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10012c70) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10012c74) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: _strcspn @ 1000bbb0 */

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio */

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

/* Function: _strpbrk @ 1000bc00 */

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

/* Function: __crtLCMapStringW_stat @ 1000bc40 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringW_stat(struct localeinfo_struct *,unsigned long,unsigned
   long,wchar_t const *,int,wchar_t *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringW_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          wchar_t *param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  short *psVar4;
  uint cbMultiByte;
  rsize_t _MaxCount;
  undefined4 *puVar5;
  errno_t eVar6;
  int *in_ECX;
  wchar_t *pwVar7;
  char *lpDestStr;
  LPCSTR local_c;
  
  uVar1 = DAT_10012070 ^ (uint)&stack0xfffffffc;
  lpDestStr = (char *)0x0;
  if (DAT_10014348 == 0) {
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_10014348 = 2;
      }
    }
    else {
      DAT_10014348 = 1;
    }
  }
  psVar4 = (short *)param_3;
  pwVar7 = param_4;
  if (0 < (int)param_4) {
    do {
      pwVar7 = (wchar_t *)((int)pwVar7 + -1);
      if (*psVar4 == 0) goto LAB_1000bcb5;
      psVar4 = psVar4 + 1;
    } while (pwVar7 != (wchar_t *)0x0);
    pwVar7 = (wchar_t *)0xffffffff;
LAB_1000bcb5:
    param_4 = (wchar_t *)((int)param_4 + (-1 - (int)pwVar7));
  }
  if (DAT_10014348 == 1) {
    LCMapStringW((LCID)param_1,param_2,(LPCWSTR)param_3,(int)param_4,(LPWSTR)param_5,(int)param_6);
    goto LAB_1000be8f;
  }
  if ((DAT_10014348 != 2) && (DAT_10014348 != 0)) goto LAB_1000be8f;
  if (param_1 == (localeinfo_struct *)0x0) {
    param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
  }
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  iVar2 = ___ansicp((LCID)param_1);
  if ((param_7 != iVar2) && (iVar2 != -1)) {
    param_7 = iVar2;
  }
  cbMultiByte = WideCharToMultiByte(param_7,0,(LPCWSTR)param_3,(int)param_4,(LPSTR)0x0,0,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
  if (cbMultiByte == 0) goto LAB_1000be8f;
  if (((int)cbMultiByte < 1) || (0xffffffe0 / cbMultiByte == 0)) {
    local_c = (LPCSTR)0x0;
  }
  else if (cbMultiByte + 8 < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe0;
    local_c = &stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_1000bd7e:
      local_c = (LPCSTR)(puVar5 + 2);
    }
  }
  else {
    puVar5 = _malloc(cbMultiByte + 8);
    local_c = (LPCSTR)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_1000bd7e;
    }
  }
  if (local_c == (LPCSTR)0x0) goto LAB_1000be8f;
  iVar2 = WideCharToMultiByte(param_7,0,(LPCWSTR)param_3,(int)param_4,local_c,cbMultiByte,
                              (LPCSTR)0x0,(LPBOOL)0x0);
  if ((iVar2 != 0) &&
     (_MaxCount = LCMapStringA((LCID)param_1,param_2,local_c,cbMultiByte,(LPSTR)0x0,0),
     _MaxCount != 0)) {
    if ((0 < (int)_MaxCount) && (0xffffffe0 / _MaxCount != 0)) {
      if (_MaxCount + 8 < 0x401) {
        puVar5 = (undefined4 *)&stack0xffffffe0;
        lpDestStr = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_1000be02:
          lpDestStr = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_MaxCount + 8);
        lpDestStr = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_1000be02;
        }
      }
    }
    if (lpDestStr != (char *)0x0) {
      iVar2 = LCMapStringA((LCID)param_1,param_2,local_c,cbMultiByte,lpDestStr,_MaxCount);
      if (iVar2 != 0) {
        if ((param_2 & 0x400) == 0) {
          if (param_6 == (wchar_t *)0x0) {
            param_6 = (wchar_t *)0x0;
            param_5 = 0;
          }
          MultiByteToWideChar(param_7,1,lpDestStr,_MaxCount,(LPWSTR)param_5,(int)param_6);
        }
        else if (param_6 != (wchar_t *)0x0) {
          if ((int)param_6 <= (int)_MaxCount) {
            _MaxCount = (int)param_6 - 1;
          }
          eVar6 = _strncpy_s((char *)param_5,(rsize_t)param_6,lpDestStr,_MaxCount);
          if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      __freea(lpDestStr);
    }
  }
  __freea(local_c);
LAB_1000be8f:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: ___crtLCMapStringW @ 1000bea1 */

/* Library Function - Single Match
    ___crtLCMapStringW
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringW(LPCWSTR _LocaleName,DWORD _DWMapFlag,LPCWSTR _LpSrcStr,int _CchSrc,
                  LPWSTR _LpDestStr,int _CchDest)

{
  int iVar1;
  wchar_t *in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,(localeinfo_struct *)_LocaleName);
  iVar1 = __crtLCMapStringW_stat
                    ((localeinfo_struct *)_DWMapFlag,(ulong)_LpSrcStr,_CchSrc,_LpDestStr,_CchDest,
                     in_stack_0000001c,in_stack_00000020,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/**************************************************/

/* Function: __crtGetStringTypeW_stat @ 1000bee1 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeW_stat(struct localeinfo_struct *,unsigned long,wchar_t const
   *,int,unsigned short *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeW_stat
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  LPWORD pWVar1;
  uint _Size;
  LPSTR lpSrcStr;
  BOOL BVar2;
  DWORD DVar3;
  uint _Size_00;
  undefined4 *puVar4;
  LPWORD lpCharType;
  int iVar5;
  LPSTR local_c;
  uint local_8;
  
  local_8 = DAT_10012070 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_1000c0f3;
  if (DAT_1001434c == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1001434c = 2;
      }
      goto LAB_1000bf48;
    }
    DAT_1001434c = 1;
  }
  else {
LAB_1000bf48:
    if (DAT_1001434c != 1) {
      if ((DAT_1001434c != 2) && (DAT_1001434c != 0)) goto LAB_1000c0f3;
      if (param_7 == 0) {
        param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
      }
      if (param_6 == 0) {
        param_6 = param_1->locinfo->lc_codepage;
      }
      iVar5 = ___ansicp(param_7);
      if ((param_6 != iVar5) && (iVar5 != -1)) {
        param_6 = iVar5;
      }
      _Size_00 = WideCharToMultiByte(param_6,0,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      if (_Size_00 == 0) goto LAB_1000c0f3;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_1000bff9:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_1000bff9;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_1000c0f3;
      _memset(local_c,0,_Size_00);
      iVar5 = WideCharToMultiByte(param_6,0,param_3,param_4,local_c,_Size_00,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (iVar5 != 0) {
        if (((int)(_Size_00 + 1) < 1) || (0x7ffffff0 < _Size_00 + 1)) {
          lpCharType = (LPWORD)0x0;
        }
        else {
          _Size = _Size_00 * 2 + 10;
          if (_Size < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_1000c0e7;
            lpCharType = (LPWORD)&stack0xffffffe8;
          }
          else {
            lpCharType = _malloc(_Size);
            if (lpCharType != (LPWORD)0x0) {
              lpCharType[0] = 0xdddd;
              lpCharType[1] = 0;
              lpCharType = lpCharType + 4;
            }
          }
        }
        lpSrcStr = local_c;
        if (lpCharType != (LPWORD)0x0) {
          if (param_7 == 0) {
            param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
          }
          pWVar1 = lpCharType + param_4;
          *pWVar1 = 0xffff;
          pWVar1[-1] = 0xffff;
          GetStringTypeA(param_7,param_2,lpSrcStr,_Size_00,lpCharType);
          if ((pWVar1[-1] != 0xffff) && (*pWVar1 == 0xffff)) {
            _memmove(param_5,lpCharType,param_4 * 2);
          }
          __freea(lpCharType);
        }
      }
LAB_1000c0e7:
      __freea(local_c);
      goto LAB_1000c0f3;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_1000c0f3:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}



/**************************************************/

/* Function: ___crtGetStringTypeW @ 1000c105 */

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 2005 Release */

void __cdecl
___crtGetStringTypeW
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetStringTypeW_stat(&local_14,param_2,param_3,param_4,param_5,param_6,param_7);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/**************************************************/

/* Function: __lseeki64_nolock @ 1000c143 */

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_10005c7e();
    *puVar2 = 9;
LAB_1000c172:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_10005ca4(DVar4);
        goto LAB_1000c172;
      }
    }
    pbVar1 = (byte *)((&DAT_10015440)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/**************************************************/

/* Function: FUN_1000c1c6 @ 1000c1c6 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_1000c1c6(uint param_1,WCHAR *param_2,WCHAR *param_3)

{
  WCHAR *pWVar1;
  char cVar2;
  wchar_t *pwVar3;
  WCHAR WVar4;
  byte bVar5;
  wchar_t wVar6;
  DWORD *pDVar7;
  undefined4 *puVar8;
  undefined3 extraout_var;
  _ptiddata p_Var9;
  BOOL BVar10;
  int iVar11;
  DWORD DVar12;
  WCHAR *pWVar13;
  int iVar14;
  WCHAR *pWVar15;
  uint uVar16;
  char *pcVar17;
  int unaff_EDI;
  int *piVar18;
  UINT local_598;
  uint local_594;
  WCHAR *local_590;
  int *local_58c;
  WCHAR *local_588;
  int local_584;
  WCHAR *local_580;
  WCHAR *local_57c;
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
  
  local_8 = DAT_10012070 ^ (uint)local_51c;
  local_580 = param_2;
  local_57c = (WCHAR *)0x0;
  local_584 = 0;
  if (param_3 == (WCHAR *)0x0) goto LAB_1000c776;
  if (param_2 == (WCHAR *)0x0) {
    pDVar7 = FUN_10005c91();
    *pDVar7 = 0;
    puVar8 = (undefined4 *)FUN_10005c7e();
    *puVar8 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1000c776;
  }
  iVar14 = (param_1 & 0x1f) * 0x38;
  piVar18 = &DAT_10015440 + ((int)param_1 >> 5);
  local_571 = (char)(*(char *)(*piVar18 + iVar14 + 0x24) * '\x02') >> 1;
  local_58c = piVar18;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~(uint)param_3 & 1) == 0)) {
    pDVar7 = FUN_10005c91();
    *pDVar7 = 0;
    puVar8 = (undefined4 *)FUN_10005c7e();
    *puVar8 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1000c776;
  }
  if ((*(byte *)(*piVar18 + iVar14 + 4) & 0x20) != 0) {
    __lseeki64_nolock(param_1,0x200000000,unaff_EDI);
  }
  bVar5 = FUN_1000c868(param_1);
  if ((CONCAT31(extraout_var,bVar5) == 0) || ((*(byte *)(iVar14 + 4 + *piVar18) & 0x80) == 0)) {
LAB_1000c4b1:
    if ((*(byte *)((undefined4 *)(*piVar18 + iVar14) + 1) & 0x80) == 0) {
      BVar10 = WriteFile(*(HANDLE *)(*piVar18 + iVar14),local_580,(DWORD)param_3,(LPDWORD)&local_588
                         ,(LPOVERLAPPED)0x0);
      if (BVar10 == 0) {
LAB_1000c70b:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_1000c714:
      piVar18 = local_58c;
      if (local_57c != (WCHAR *)0x0) goto LAB_1000c776;
      goto LAB_1000c71e;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (param_3 == (WCHAR *)0x0) goto LAB_1000c745;
      do {
        local_578 = (WCHAR *)0x0;
        pWVar13 = (WCHAR *)((int)local_56c - (int)local_580);
        pWVar15 = local_568;
        do {
          if (param_3 <= pWVar13) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          if ((char)WVar4 == '\n') {
            local_584 = local_584 + 1;
            *(char *)pWVar15 = '\r';
            pWVar15 = (WCHAR *)((int)pWVar15 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          *(char *)pWVar15 = (char)WVar4;
          pWVar15 = (WCHAR *)((int)pWVar15 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          local_56c = pWVar1;
        } while (local_578 < (WCHAR *)0x400);
        BVar10 = WriteFile(*(HANDLE *)(iVar14 + *piVar18),local_568,(int)pWVar15 - (int)local_568,
                           (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar10 == 0) goto LAB_1000c70b;
        local_57c = (WCHAR *)((int)local_57c + (int)local_588);
      } while (((int)pWVar15 - (int)local_568 <= (int)local_588) &&
              ((WCHAR *)((int)local_56c - (int)local_580) < param_3));
      goto LAB_1000c714;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (param_3 != (WCHAR *)0x0) {
        do {
          uVar16 = 0;
          pWVar13 = (WCHAR *)((int)local_56c - (int)local_580);
          pWVar15 = local_568;
          do {
            if (param_3 <= pWVar13) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            pWVar13 = pWVar13 + 1;
            if (WVar4 == L'\n') {
              local_584 = local_584 + 2;
              *pWVar15 = L'\r';
              pWVar15 = pWVar15 + 1;
              uVar16 = uVar16 + 2;
            }
            *pWVar15 = WVar4;
            pWVar15 = pWVar15 + 1;
            uVar16 = uVar16 + 2;
            piVar18 = local_58c;
            local_56c = pWVar1;
          } while (uVar16 < 0x3ff);
          BVar10 = WriteFile(*(HANDLE *)(iVar14 + *piVar18),local_568,(int)pWVar15 - (int)local_568,
                             (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar10 == 0) goto LAB_1000c70b;
          local_57c = (WCHAR *)((int)local_57c + (int)local_588);
        } while (((int)pWVar15 - (int)local_568 <= (int)local_588) &&
                ((WCHAR *)((int)local_56c - (int)local_580) < param_3));
        goto LAB_1000c714;
      }
    }
    else {
      local_578 = local_580;
      if (param_3 != (WCHAR *)0x0) {
        do {
          local_56c = (WCHAR *)0x0;
          pWVar13 = (WCHAR *)((int)local_578 - (int)local_580);
          pWVar15 = local_164;
          do {
            if (param_3 <= pWVar13) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            pWVar13 = pWVar13 + 1;
            if (WVar4 == L'\n') {
              *pWVar15 = L'\r';
              pWVar15 = pWVar15 + 1;
              local_56c = local_56c + 1;
            }
            local_56c = local_56c + 1;
            *pWVar15 = WVar4;
            pWVar15 = pWVar15 + 1;
          } while (local_56c < (WCHAR *)0x152);
          pcVar17 = (char *)0x0;
          iVar11 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar15 - (int)local_164) / 2,
                                       local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar11 == 0) goto LAB_1000c70b;
          do {
            BVar10 = WriteFile(*(HANDLE *)(iVar14 + *local_58c),local_414 + (int)pcVar17,
                               iVar11 - (int)pcVar17,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar10 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar17 = pcVar17 + (int)local_588;
          } while ((int)pcVar17 < iVar11);
        } while ((iVar11 <= (int)pcVar17) &&
                (local_57c = (WCHAR *)((int)local_578 - (int)local_580), local_57c < param_3));
        goto LAB_1000c714;
      }
    }
LAB_1000c745:
    DVar12 = 0;
    if (((*(byte *)(iVar14 + 4 + *piVar18) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_1000c776;
    puVar8 = (undefined4 *)FUN_10005c7e();
    *puVar8 = 0x1c;
  }
  else {
    p_Var9 = __getptd();
    pwVar3 = p_Var9->ptlocinfo->lc_category[0].wlocale;
    BVar10 = GetConsoleMode(*(HANDLE *)(iVar14 + *piVar18),&local_598);
    if ((BVar10 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_1000c4b1;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (param_3 != (WCHAR *)0x0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar15 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar11 = FUN_10005c2b(CONCAT22(cVar2 >> 7,(short)cVar2));
          if (iVar11 == 0) {
            iVar11 = FUN_1000cba1((wchar_t *)&local_570,(char *)pWVar15,1);
            if (iVar11 == -1) break;
          }
          else {
            if (((uint)(((int)local_580 - (int)pWVar15) + (int)param_3) < 2) ||
               (iVar11 = FUN_1000cba1((wchar_t *)&local_570,(char *)pWVar15,2), iVar11 == -1))
            break;
            pWVar15 = (WCHAR *)((int)pWVar15 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar15 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          DVar12 = WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
          if (DVar12 == 0) break;
          BVar10 = WriteFile(*(HANDLE *)(iVar14 + *piVar18),local_10,DVar12,(LPDWORD)&local_56c,
                             (LPOVERLAPPED)0x0);
          if (BVar10 == 0) goto LAB_1000c70b;
          local_57c = (WCHAR *)((int)local_57c + (int)local_56c);
          if ((int)local_56c < (int)DVar12) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar10 = WriteFile(*(HANDLE *)(iVar14 + *piVar18),local_10,1,(LPDWORD)&local_56c,
                               (LPOVERLAPPED)0x0);
            if (BVar10 == 0) goto LAB_1000c70b;
            if ((int)local_56c < 1) break;
            local_584 = local_584 + 1;
            local_57c = (WCHAR *)((int)local_57c + 1);
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
            wVar6 = __putwch_nolock((wchar_t)local_570);
            if (wVar6 != (wchar_t)local_570) goto LAB_1000c70b;
            local_57c = (WCHAR *)((int)local_57c + 1);
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar6 = __putwch_nolock(L'\r');
              if (wVar6 != (wchar_t)local_570) goto LAB_1000c70b;
              local_57c = (WCHAR *)((int)local_57c + 1);
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < param_3);
      goto LAB_1000c714;
    }
LAB_1000c71e:
    if (local_570 == 0) goto LAB_1000c745;
    DVar12 = 5;
    if (local_570 != 5) {
      FUN_10005ca4(local_570);
      goto LAB_1000c776;
    }
    puVar8 = (undefined4 *)FUN_10005c7e();
    *puVar8 = 9;
  }
  pDVar7 = FUN_10005c91();
  *pDVar7 = DVar12;
LAB_1000c776:
  __security_check_cookie(local_8 ^ (uint)local_51c);
  return;
}



/**************************************************/

/* Function: FUN_1000c78c @ 1000c78c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_1000c78c(uint param_1,WCHAR *param_2,WCHAR *param_3)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_10005c91();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_10005c7e();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10015430)) {
      iVar3 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)((&DAT_10015440)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
        FUN_1000cede(param_1);
        if ((*(byte *)((&DAT_10015440)[(int)param_1 >> 5] + 4 + iVar3) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_10005c7e();
          *puVar2 = 9;
          pDVar1 = FUN_10005c91();
          *pDVar1 = 0;
          local_20 = 0xffffffff;
        }
        else {
          local_20 = FUN_1000c1c6(param_1,param_2,param_3);
        }
        FUN_1000c85e();
        return local_20;
      }
    }
    pDVar1 = FUN_10005c91();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_10005c7e();
    *puVar2 = 9;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000c85e @ 1000c85e */

void FUN_1000c85e(void)

{
  int unaff_EBP;
  
  FUN_1000cf7e(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000c868 @ 1000c868 */

byte __cdecl FUN_1000c868(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_10005c7e();
    *puVar1 = 9;
    return 0;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_10015430)) {
    return *(byte *)((&DAT_10015440)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x38) & 0x40;
  }
  puVar1 = (undefined4 *)FUN_10005c7e();
  *puVar1 = 9;
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}



/**************************************************/

/* Function: FUN_1000c997 @ 1000c997 */

void __cdecl FUN_1000c997(uint param_1)

{
  if ((0x10012c8f < param_1) && (param_1 < 0x10012ef1)) {
    __lock(((int)(param_1 + 0xeffed370) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000c9d3 @ 1000c9d3 */

void __cdecl FUN_1000c9d3(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    __lock(param_1 + 0x10);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000ca01 @ 1000ca01 */

void __cdecl FUN_1000ca01(uint param_1)

{
  if ((0x10012c8f < param_1) && (param_1 < 0x10012ef1)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_10005e89(((int)(param_1 + 0xeffed370) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000ca37 @ 1000ca37 */

void __cdecl FUN_1000ca37(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_10005e89(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000ca61 @ 1000ca61 */

undefined4 __cdecl FUN_1000ca61(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_10005c7e();
    *puVar1 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



/**************************************************/

/* Function: __mbtowc_l @ 1000ca8e */

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *puVar3;
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
          if (iVar2 != 0) goto LAB_1000cad9;
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
        puVar3 = (undefined4 *)FUN_10005c7e();
        *puVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_1000cad9:
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

/* Function: FUN_1000cba1 @ 1000cba1 */

void __cdecl FUN_1000cba1(wchar_t *param_1,char *param_2,size_t param_3)

{
  __mbtowc_l(param_1,param_2,param_3,(_locale_t)0x0);
  return;
}



/**************************************************/

/* Function: ___ansicp @ 1000cbc1 */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_10012070 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___convertcp @ 1000cc08 */

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
  
  local_8 = DAT_10012070 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1000cda8;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1000cda8;
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
LAB_1000cce8:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_1000cce8;
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
LAB_1000cda8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __alloca_probe_16 @ 1000cdc0 */

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

/* Function: __alloca_probe_8 @ 1000cdd6 */

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

/* Function: FUN_1000cdec @ 1000cdec */

undefined4 __cdecl FUN_1000cdec(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_10015430)) {
    iVar4 = (param_1 & 0x1f) * 0x38;
    piVar1 = (int *)((&DAT_10015440)[(int)param_1 >> 5] + iVar4);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10013954 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000ce4a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000ce4a:
      *(undefined4 *)(iVar4 + (&DAT_10015440)[(int)param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_10005c7e();
  *puVar2 = 9;
  pDVar3 = FUN_10005c91();
  *pDVar3 = 0;
  return 0xffffffff;
}



/**************************************************/

/* Function: __get_osfhandle @ 1000ce6d */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  intptr_t *piVar3;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10005c91();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_10005c7e();
    *puVar2 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10015430)) &&
     (piVar3 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_10015440)[_FileHandle >> 5]),
     (*(byte *)(piVar3 + 1) & 1) != 0)) {
    return *piVar3;
  }
  pDVar1 = FUN_10005c91();
  *pDVar1 = 0;
  puVar2 = (undefined4 *)FUN_10005c7e();
  *puVar2 = 9;
  FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: FUN_1000cede @ 1000cede */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

bool __cdecl FUN_1000cede(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1 & 0x1f) * 0x38 + (&DAT_10015440)[(int)param_1 >> 5];
  bVar3 = true;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      bVar3 = iVar1 != 0;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_1000cf75();
  }
  if (bVar3) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_10015440)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x38));
  }
  return bVar3;
}



/**************************************************/

/* Function: FUN_1000cf75 @ 1000cf75 */

void FUN_1000cf75(void)

{
  FUN_10005e89(10);
  return;
}



/**************************************************/

/* Function: FUN_1000cf7e @ 1000cf7e */

void __cdecl FUN_1000cf7e(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10015440)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x38));
  return;
}



/**************************************************/

/* Function: __putwch_nolock @ 1000cfa0 */

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
  
  local_8 = DAT_10012070 ^ (uint)&stack0xfffffffc;
  if (DAT_10012fd0 != 0) {
    if (DAT_10013054 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_10013054 == (HANDLE)0xffffffff) goto LAB_1000d049;
    BVar2 = WriteConsoleW(DAT_10013054,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10012fd0 = 1;
      goto LAB_1000d049;
    }
    if ((DAT_10012fd0 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_1000d049;
    DAT_10012fd0 = 0;
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
  if (DAT_10013054 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10013054,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_1000d049:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



/**************************************************/

/* Function: FUN_1000d062 @ 1000d062 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_1000d062(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar4 = 3; iVar4 < DAT_10015420; iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 4;
    if (*(int *)(DAT_10014418 + iVar3) != 0) {
      piVar1 = *(int **)(DAT_10014418 + iVar3);
      if ((*(byte *)(piVar1 + 3) & 0x83) != 0) {
        iVar2 = FUN_1000d3df(piVar1);
        if (iVar2 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar4) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10014418) + 0x20));
        _free(*(void **)(iVar3 + DAT_10014418));
        *(undefined4 *)(iVar3 + DAT_10014418) = 0;
      }
    }
  }
  FUN_1000d0f8();
  return local_20;
}



/**************************************************/

/* Function: FUN_1000d0f8 @ 1000d0f8 */

void FUN_1000d0f8(void)

{
  FUN_10005e89(1);
  return;
}



/**************************************************/

/* Function: FUN_1000d101 @ 1000d101 */

undefined4 __cdecl FUN_1000d101(int *param_1)

{
  uint uVar1;
  WCHAR *pWVar2;
  undefined4 uVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  
  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    pWVar2 = (WCHAR *)param_1[2];
    pWVar4 = (WCHAR *)(*param_1 - (int)pWVar2);
    if (0 < (int)pWVar4) {
      pWVar5 = pWVar4;
      uVar1 = FUN_1000ca61((int)param_1);
      pWVar2 = (WCHAR *)FUN_1000c78c(uVar1,pWVar2,pWVar5);
      if (pWVar2 == pWVar4) {
        if ((char)param_1[3] < '\0') {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar3 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}



/**************************************************/

/* Function: FUN_1000d163 @ 1000d163 */

int __cdecl FUN_1000d163(int *param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_1000d1a5(0);
    return iVar1;
  }
  iVar1 = FUN_1000d101(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(ushort *)(param_1 + 3) & 0x4000) != 0) {
    uVar2 = FUN_1000ca61((int)param_1);
    DVar3 = FUN_1000d45b(uVar2);
    return -(uint)(DVar3 != 0);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000d1a5 @ 1000d1a5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_1000d1a5(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar3 = 0; iVar3 < DAT_10015420; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(DAT_10014418 + iVar3 * 4);
    if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_1000c9d3(iVar3,iVar2);
      piVar1 = *(int **)(DAT_10014418 + iVar3 * 4);
      if ((piVar1[3] & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = FUN_1000d163(piVar1);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
          iVar2 = FUN_1000d163(piVar1);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_1000d247();
    }
  }
  FUN_1000d276();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000d247 @ 1000d247 */

void FUN_1000d247(void)

{
  int unaff_ESI;
  
  FUN_1000ca37(unaff_ESI,*(int *)(DAT_10014418 + unaff_ESI * 4));
  return;
}



/**************************************************/

/* Function: FUN_1000d276 @ 1000d276 */

void FUN_1000d276(void)

{
  FUN_10005e89(1);
  return;
}



/**************************************************/

/* Function: FUN_1000d27f @ 1000d27f */

void FUN_1000d27f(void)

{
  FUN_1000d1a5(1);
  return;
}



/**************************************************/

/* Function: __alloca_probe @ 1000d290 */

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

/* Function: ___ascii_strnicmp @ 1000d2c0 */

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
      if (bVar2 != (byte)uVar3) goto LAB_1000d311;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1000d311:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: ___initconout @ 1000d321 */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10013054 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/**************************************************/

/* Function: FUN_1000d36d @ 1000d36d */

undefined4 __cdecl FUN_1000d36d(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    puVar1 = (undefined4 *)FUN_10005c7e();
    *puVar1 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar4 = 0xffffffff;
  }
  else {
    if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
      uVar4 = FUN_1000d101(param_1);
      FUN_1000d69d(param_1);
      uVar2 = FUN_1000ca61((int)param_1);
      iVar3 = FUN_1000d5d0(uVar2);
      if (iVar3 < 0) {
        uVar4 = 0xffffffff;
      }
      else if ((void *)param_1[7] != (void *)0x0) {
        _free((void *)param_1[7]);
        param_1[7] = 0;
      }
    }
    param_1[3] = 0;
  }
  return uVar4;
}



/**************************************************/

/* Function: FUN_1000d3df @ 1000d3df */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_1000d3df(int *param_1)

{
  undefined4 *puVar1;
  undefined4 local_20;
  
  local_20 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    puVar1 = (undefined4 *)FUN_10005c7e();
    *puVar1 = 0x16;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = 0xffffffff;
  }
  else if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_1000c997((uint)param_1);
    local_20 = FUN_1000d36d(param_1);
    FUN_1000d453();
  }
  else {
    param_1[3] = 0;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000d453 @ 1000d453 */

void FUN_1000d453(void)

{
  uint unaff_ESI;
  
  FUN_1000ca01(unaff_ESI);
  return;
}



/**************************************************/

/* Function: FUN_1000d45b @ 1000d45b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

DWORD __cdecl FUN_1000d45b(uint param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  int iVar4;
  DWORD local_20;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_10005c7e();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10015430)) {
      iVar4 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)(iVar4 + 4 + (&DAT_10015440)[(int)param_1 >> 5]) & 1) != 0) {
        FUN_1000cede(param_1);
        if ((*(byte *)(iVar4 + 4 + (&DAT_10015440)[(int)param_1 >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(param_1);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_1000d51d;
          pDVar3 = FUN_10005c91();
          *pDVar3 = local_20;
        }
        puVar1 = (undefined4 *)FUN_10005c7e();
        *puVar1 = 9;
        local_20 = 0xffffffff;
LAB_1000d51d:
        FUN_1000d532();
        return local_20;
      }
    }
    puVar1 = (undefined4 *)FUN_10005c7e();
    *puVar1 = 9;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000d532 @ 1000d532 */

void FUN_1000d532(void)

{
  int unaff_EBP;
  
  FUN_1000cf7e(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000d53c @ 1000d53c */

undefined4 __cdecl FUN_1000d53c(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_10015440 + 0x74) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_10015440 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_1000d59b;
    }
    hObject = (HANDLE)__get_osfhandle(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000d59d;
    }
  }
LAB_1000d59b:
  DVar4 = 0;
LAB_1000d59d:
  FUN_1000cdec(param_1);
  *(undefined1 *)((&DAT_10015440)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x38) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10005ca4(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/**************************************************/

/* Function: FUN_1000d5d0 @ 1000d5d0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_1000d5d0(uint param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_10005c91();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_10005c7e();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10015430)) {
      iVar3 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)((&DAT_10015440)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
        FUN_1000cede(param_1);
        if ((*(byte *)((&DAT_10015440)[(int)param_1 >> 5] + 4 + iVar3) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_10005c7e();
          *puVar2 = 9;
          local_20 = 0xffffffff;
        }
        else {
          local_20 = FUN_1000d53c(param_1);
        }
        FUN_1000d693();
        return local_20;
      }
    }
    pDVar1 = FUN_10005c91();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_10005c7e();
    *puVar2 = 9;
    FUN_10006bf3((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000d693 @ 1000d693 */

void FUN_1000d693(void)

{
  int unaff_EBP;
  
  FUN_1000cf7e(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000d69d @ 1000d69d */

void __cdecl FUN_1000d69d(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    _free((void *)param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



/**************************************************/

/* Function: RtlUnwind @ 1000d6ca */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1000d6ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

/* Function: Unwind@1000d6d0 @ 1000d6d0 */

void Unwind_1000d6d0(void)

{
  int unaff_EBP;
  
  FUN_10003cc0((undefined4 *)(unaff_EBP + -0x20));
  return;
}



/**************************************************/

/* Function: Unwind@1000d700 @ 1000d700 */

void Unwind_1000d700(void)

{
  int unaff_EBP;
  
  thunk_FUN_10004070((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

/* Function: Unwind@1000d730 @ 1000d730 */

void Unwind_1000d730(void)

{
  int unaff_EBP;
  
  thunk_FUN_10004070((undefined4 *)(unaff_EBP + -0x21c));
  return;
}



/**************************************************/

/* Function: Unwind@1000d770 @ 1000d770 */

void Unwind_1000d770(void)

{
  int unaff_EBP;
  
  thunk_FUN_10004070((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

/* Function: Unwind@1000d7a0 @ 1000d7a0 */

void Unwind_1000d7a0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10004070((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

