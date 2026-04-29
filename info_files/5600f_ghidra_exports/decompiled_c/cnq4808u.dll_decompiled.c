/* Function: FID_conflict:operator== @ 10001000 */

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl operator==(struct _GUID const &,struct _GUID const &)
    int __cdecl IsEqualGUID(struct _GUID const &,struct _GUID const &)
   
   Library: Visual Studio 2005 Release */

bool __cdecl FID_conflict_operator__(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0x10;
  do {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_10001028;
    uVar3 = uVar3 - 4;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  } while (3 < uVar3);
  if (uVar3 == 0) {
LAB_1000108f:
    bVar1 = false;
  }
  else {
LAB_10001028:
    iVar2 = (uint)*param_1 - (uint)*param_2;
    if (iVar2 == 0) {
      if (uVar3 == 1) goto LAB_1000108f;
      iVar2 = (uint)param_1[1] - (uint)param_2[1];
      if (iVar2 == 0) {
        if (uVar3 == 2) goto LAB_1000108f;
        iVar2 = (uint)param_1[2] - (uint)param_2[2];
        if (iVar2 == 0) {
          if ((uVar3 == 3) || (iVar2 = (uint)param_1[3] - (uint)param_2[3], iVar2 == 0))
          goto LAB_1000108f;
        }
      }
    }
    bVar1 = true;
    if (iVar2 < 1) {
      return false;
    }
  }
  return !bVar1;
}



/**************************************************/

/* Function: FUN_100010a0 @ 100010a0 */

undefined4 * __thiscall FUN_100010a0(void *this,LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  *(LPCRITICAL_SECTION *)this = param_1;
  return this;
}



/**************************************************/

/* Function: FUN_100010c0 @ 100010c0 */

void __fastcall FUN_100010c0(undefined4 *param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  return;
}



/**************************************************/

/* Function: FUN_100010d0 @ 100010d0 */

undefined4 FUN_100010d0(uint param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  undefined3 extraout_var_00;
  
  if ((*(int *)(param_1 + 0x114) == 0) || (param_3 == (int *)0x0)) {
    return 0x80070057;
  }
  *param_3 = 0;
  bVar1 = FID_conflict_operator__(param_2,&DAT_10011494);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)(-(uint)(param_1 != 4) & param_1);
    *param_3 = (int)piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    return 0;
  }
  bVar1 = FID_conflict_operator__(param_2,&DAT_10010ed0);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    *param_3 = param_1 - 4;
    (**(code **)(*(int *)*param_3 + 4))((int *)*param_3);
    return 0;
  }
  return 0x80004002;
}



/**************************************************/

/* Function: FUN_10001170 @ 10001170 */

void FUN_10001170(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000117d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement((LONG *)(param_1 + 0x110));
  return;
}



/**************************************************/

/* Function: FUN_10001190 @ 10001190 */

LONG FUN_10001190(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0x110));
  if ((LVar1 == 0) && ((int *)(param_1 + -4) != (int *)0x0)) {
    (**(code **)(*(int *)(param_1 + -4) + 0x4c))(1);
  }
  return LVar1;
}



/**************************************************/

/* Function: FUN_100011c0 @ 100011c0 */

void FUN_100011c0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100011d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x13c))();
  return;
}



/**************************************************/

/* Function: FUN_100011e0 @ 100011e0 */

void FUN_100011e0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100011f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x13c) + 4))();
  return;
}



/**************************************************/

/* Function: FUN_10001200 @ 10001200 */

void FUN_10001200(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10001213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x13c) + 8))();
  return;
}



/**************************************************/

/* Function: FUN_10001220 @ 10001220 */

void FUN_10001220(int *param_1,int *param_2,undefined4 param_3,HKEY param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *lpData;
  BYTE BVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  LSTATUS LVar6;
  BYTE *pBVar7;
  ulong uVar8;
  HMODULE pHVar9;
  HKEY pHVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  char cVar14;
  code *pcVar15;
  BYTE *pBVar16;
  HKEY pHStack_848;
  HKEY pHStack_844;
  DWORD DStack_840;
  int iStack_83c;
  HKEY local_838;
  undefined1 uStack_834;
  undefined1 uStack_833;
  undefined1 uStack_832;
  undefined1 uStack_831;
  undefined4 uStack_830;
  LPCRITICAL_SECTION local_82c;
  int iStack_828;
  ulong uStack_824;
  ulong uStack_820;
  ulong uStack_81c;
  ulong uStack_818;
  ulong uStack_814;
  ulong uStack_810;
  ulong uStack_80c;
  ulong uStack_808;
  ulong uStack_804;
  ulong uStack_800;
  ulong uStack_7fc;
  ulong uStack_7f8;
  ulong uStack_7f4;
  ulong uStack_7f0;
  ulong uStack_7ec;
  ulong uStack_7e8;
  DWORD DStack_7e4;
  LPCRITICAL_SECTION local_7e0;
  undefined1 auStack_7dc [4];
  undefined1 auStack_7d8 [24];
  BYTE BStack_7c0;
  undefined1 auStack_7bf [262];
  BYTE aBStack_6b9 [264];
  BYTE aBStack_5b1 [265];
  BYTE aBStack_4a8 [264];
  BYTE aBStack_3a0 [260];
  CHAR aCStack_29c [124];
  undefined1 auStack_220 [4];
  WCHAR aWStack_21c [262];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000faab;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&pHStack_848;
  uVar3 = DAT_10015448 ^ (uint)&stack0xfffff7a8;
  ExceptionList = &local_c;
  local_838 = param_4;
  if (param_2 != (int *)0x0) {
    param_1[0x586] = DAT_10016430;
    RegOpenKeyExA(param_4,"DeviceData",0,0x20006,(PHKEY)&DAT_10016420);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x47);
    local_82c = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    param_1[0x50] = (int)param_2;
    local_4 = 0;
    local_7e0 = lpCriticalSection;
    (**(code **)(*param_2 + 4))(param_2,uVar3);
    iVar4 = (**(code **)(*(int *)param_1[0x50] + 0x28))((int *)param_1[0x50],auStack_220,0x104);
    if (iVar4 < 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      iVar4 = WideCharToMultiByte(0,0,aWStack_21c,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar4 == 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        WideCharToMultiByte(0,0,aWStack_21c,-1,(LPSTR)(param_1 + 0x51),iVar4,(LPCSTR)0x0,(LPBOOL)0x0
                           );
        iVar4 = 0;
        do {
          iVar5 = (**(code **)(*param_1 + 0x28))(param_1);
          if (-1 < iVar5) {
            DStack_840 = 0;
            aBStack_3a0[0] = '\0';
            _memset(aBStack_3a0 + 1,0,0x103);
            aBStack_4a8[0] = '\0';
            _memset(aBStack_4a8 + 1,0,0x104);
            aBStack_6b9[1] = 0;
            _memset(aBStack_6b9 + 2,0,0x104);
            aBStack_5b1[1] = 0;
            _memset(aBStack_5b1 + 2,0,0x104);
            BStack_7c0 = '\0';
            _memset(auStack_7bf,0,0x104);
            uStack_824 = 0;
            _memset(&uStack_820,0,0x3c);
            GetWindowsDirectoryA((LPSTR)aBStack_3a0,0x104);
            LVar6 = RegOpenKeyExA(local_838,"DeviceData",0,1,&pHStack_844);
            if (LVar6 == 0) {
              pHStack_848 = (HKEY)0x105;
              RegQueryValueExA(pHStack_844,"InstallDirectory",(LPDWORD)0x0,&DStack_840,aBStack_4a8,
                               (LPDWORD)&pHStack_848);
              pHStack_848 = (HKEY)0x105;
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton1",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_824 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton2",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_820 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton3",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_81c = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton4",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_818 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton5",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_814 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton6",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_810 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton7",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_80c = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton8",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_808 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton9",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_804 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton10",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_800 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton11",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_7fc = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton12",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_7f8 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton13",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_7f4 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton14",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_7f0 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton15",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_7ec = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              LVar6 = RegQueryValueExA(pHStack_844,"IDPushButton16",(LPDWORD)0x0,&DStack_840,
                                       &BStack_7c0,(LPDWORD)&pHStack_848);
              if (LVar6 == 0) {
                uStack_7e8 = _strtoul((char *)&BStack_7c0,(char **)0x0,10);
              }
              RegCloseKey(pHStack_844);
            }
            iVar4 = 0;
            do {
              BVar1 = aBStack_3a0[iVar4];
              aBStack_5b1[iVar4 + 1] = BVar1;
              iVar4 = iVar4 + 1;
            } while (BVar1 != '\0');
            pBVar7 = aBStack_4a8;
            do {
              BVar1 = *pBVar7;
              pBVar7 = pBVar7 + 1;
            } while (BVar1 != '\0');
            uVar3 = (int)pBVar7 - (int)aBStack_4a8;
            pBVar7 = aBStack_5b1;
            do {
              pBVar16 = pBVar7 + 1;
              pBVar7 = pBVar7 + 1;
            } while (*pBVar16 != '\0');
            pBVar16 = aBStack_4a8;
            for (uVar11 = uVar3 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pBVar7 = *(undefined4 *)pBVar16;
              pBVar16 = pBVar16 + 4;
              pBVar7 = pBVar7 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pBVar7 = *pBVar16;
              pBVar16 = pBVar16 + 1;
              pBVar7 = pBVar7 + 1;
            }
            pBVar7 = aBStack_5b1;
            do {
              pBVar16 = pBVar7;
              pBVar7 = pBVar16 + 1;
            } while (pBVar16[1] != '\0');
            *(undefined4 *)(pBVar16 + 1) = s___SETSCN__INI_100105e8._0_4_;
            *(undefined4 *)(pBVar16 + 5) = s___SETSCN__INI_100105e8._4_4_;
            *(undefined4 *)(pBVar16 + 9) = s___SETSCN__INI_100105e8._8_4_;
            *(undefined2 *)(pBVar16 + 0xd) = s___SETSCN__INI_100105e8._12_2_;
            iVar4 = 0;
            do {
              BVar1 = aBStack_3a0[iVar4];
              aBStack_6b9[iVar4 + 1] = BVar1;
              iVar4 = iVar4 + 1;
            } while (BVar1 != '\0');
            pBVar7 = aBStack_4a8;
            do {
              BVar1 = *pBVar7;
              pBVar7 = pBVar7 + 1;
            } while (BVar1 != '\0');
            uVar3 = (int)pBVar7 - (int)aBStack_4a8;
            pBVar7 = aBStack_6b9;
            do {
              pBVar16 = pBVar7 + 1;
              pBVar7 = pBVar7 + 1;
            } while (*pBVar16 != '\0');
            pBVar16 = aBStack_4a8;
            for (uVar11 = uVar3 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pBVar7 = *(undefined4 *)pBVar16;
              pBVar16 = pBVar16 + 4;
              pBVar7 = pBVar7 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pBVar7 = *pBVar16;
              pBVar16 = pBVar16 + 1;
              pBVar7 = pBVar7 + 1;
            }
            GetPrivateProfileStringA
                      ("Language","LangID",(LPCSTR)0x0,aCStack_29c,0x80,(LPCSTR)(aBStack_5b1 + 1));
            uVar8 = _strtoul(aCStack_29c,(char **)0x0,0x10);
            uVar2 = (ushort)uVar8;
            if (uVar2 == 0) {
              uVar2 = GetSystemDefaultLangID();
            }
            if (uVar2 == 0x804) {
              pBVar7 = aBStack_6b9;
              do {
                pBVar16 = pBVar7 + 1;
                pBVar7 = pBVar7 + 1;
              } while (*pBVar16 != '\0');
LAB_1000197a:
              *(undefined4 *)pBVar7 = s__USDRESSC_DLL_100105c4._0_4_;
              *(undefined4 *)(pBVar7 + 4) = s__USDRESSC_DLL_100105c4._4_4_;
              uVar12 = s__USDRESSC_DLL_100105c4._8_4_;
              uVar13 = s__USDRESSC_DLL_100105c4._12_2_;
            }
            else {
              if (uVar2 == 0x404) {
                pBVar7 = aBStack_6b9;
                do {
                  pBVar16 = pBVar7 + 1;
                  pBVar7 = pBVar7 + 1;
                } while (*pBVar16 != '\0');
              }
              else if (uVar2 == 0xc04) {
                pBVar7 = aBStack_6b9;
                do {
                  pBVar16 = pBVar7 + 1;
                  pBVar7 = pBVar7 + 1;
                } while (*pBVar16 != '\0');
              }
              else {
                if (uVar2 != 0x1404) {
                  if (uVar2 == 0x1004) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7 + 1;
                      pBVar7 = pBVar7 + 1;
                    } while (*pBVar16 != '\0');
                    goto LAB_1000197a;
                  }
                  uVar2 = uVar2 & 0x3ff;
                  if (uVar2 == 9) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7 + 1;
                      pBVar7 = pBVar7 + 1;
                    } while (*pBVar16 != '\0');
LAB_10001faa:
                    *(undefined4 *)pBVar7 = s__USDRESUS_DLL_10010454._0_4_;
                    *(undefined4 *)(pBVar7 + 4) = s__USDRESUS_DLL_10010454._4_4_;
                    uVar12 = s__USDRESUS_DLL_10010454._8_4_;
                    uVar13 = s__USDRESUS_DLL_10010454._12_2_;
                  }
                  else if (uVar2 == 0xc) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESFR_DLL_100105a4._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESFR_DLL_100105a4._4_4_;
                    uVar12 = s__USDRESFR_DLL_100105a4._8_4_;
                    uVar13 = s__USDRESFR_DLL_100105a4._12_2_;
                  }
                  else if (uVar2 == 7) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESDE_DLL_10010594._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESDE_DLL_10010594._4_4_;
                    uVar12 = s__USDRESDE_DLL_10010594._8_4_;
                    uVar13 = s__USDRESDE_DLL_10010594._12_2_;
                  }
                  else if (uVar2 == 0x10) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESIT_DLL_10010584._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESIT_DLL_10010584._4_4_;
                    uVar12 = s__USDRESIT_DLL_10010584._8_4_;
                    uVar13 = s__USDRESIT_DLL_10010584._12_2_;
                  }
                  else if (uVar2 == 10) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESES_DLL_10010574._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESES_DLL_10010574._4_4_;
                    uVar12 = s__USDRESES_DLL_10010574._8_4_;
                    uVar13 = s__USDRESES_DLL_10010574._12_2_;
                  }
                  else if (uVar2 == 0x16) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESPT_DLL_10010564._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESPT_DLL_10010564._4_4_;
                    uVar12 = s__USDRESPT_DLL_10010564._8_4_;
                    uVar13 = s__USDRESPT_DLL_10010564._12_2_;
                  }
                  else if (uVar2 == 0x13) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESNL_DLL_10010554._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESNL_DLL_10010554._4_4_;
                    uVar12 = s__USDRESNL_DLL_10010554._8_4_;
                    uVar13 = s__USDRESNL_DLL_10010554._12_2_;
                  }
                  else if (uVar2 == 0x15) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESPL_DLL_10010544._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESPL_DLL_10010544._4_4_;
                    uVar12 = s__USDRESPL_DLL_10010544._8_4_;
                    uVar13 = s__USDRESPL_DLL_10010544._12_2_;
                  }
                  else if (uVar2 == 0x19) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESRU_DLL_10010534._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESRU_DLL_10010534._4_4_;
                    uVar12 = s__USDRESRU_DLL_10010534._8_4_;
                    uVar13 = s__USDRESRU_DLL_10010534._12_2_;
                  }
                  else if (uVar2 == 0xe) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESHU_DLL_10010524._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESHU_DLL_10010524._4_4_;
                    uVar12 = s__USDRESHU_DLL_10010524._8_4_;
                    uVar13 = s__USDRESHU_DLL_10010524._12_2_;
                  }
                  else if (uVar2 == 5) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESCZ_DLL_10010514._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESCZ_DLL_10010514._4_4_;
                    uVar12 = s__USDRESCZ_DLL_10010514._8_4_;
                    uVar13 = s__USDRESCZ_DLL_10010514._12_2_;
                  }
                  else if (uVar2 == 0x12) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESKR_DLL_10010504._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESKR_DLL_10010504._4_4_;
                    uVar12 = s__USDRESKR_DLL_10010504._8_4_;
                    uVar13 = s__USDRESKR_DLL_10010504._12_2_;
                  }
                  else if (uVar2 == 0x11) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESJP_DLL_100104f4._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESJP_DLL_100104f4._4_4_;
                    uVar12 = s__USDRESJP_DLL_100104f4._8_4_;
                    uVar13 = s__USDRESJP_DLL_100104f4._12_2_;
                  }
                  else if (uVar2 == 6) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESDK_DLL_100104e4._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESDK_DLL_100104e4._4_4_;
                    uVar12 = s__USDRESDK_DLL_100104e4._8_4_;
                    uVar13 = s__USDRESDK_DLL_100104e4._12_2_;
                  }
                  else if (uVar2 == 0xb) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESFI_DLL_100104d4._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESFI_DLL_100104d4._4_4_;
                    uVar12 = s__USDRESFI_DLL_100104d4._8_4_;
                    uVar13 = s__USDRESFI_DLL_100104d4._12_2_;
                  }
                  else if (uVar2 == 8) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESGR_DLL_100104c4._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESGR_DLL_100104c4._4_4_;
                    uVar12 = s__USDRESGR_DLL_100104c4._8_4_;
                    uVar13 = s__USDRESGR_DLL_100104c4._12_2_;
                  }
                  else if (uVar2 == 0x14) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESNO_DLL_100104b4._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESNO_DLL_100104b4._4_4_;
                    uVar12 = s__USDRESNO_DLL_100104b4._8_4_;
                    uVar13 = s__USDRESNO_DLL_100104b4._12_2_;
                  }
                  else if (uVar2 == 0x1d) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESSE_DLL_100104a4._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESSE_DLL_100104a4._4_4_;
                    uVar12 = s__USDRESSE_DLL_100104a4._8_4_;
                    uVar13 = s__USDRESSE_DLL_100104a4._12_2_;
                  }
                  else if (uVar2 == 0x1f) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESTR_DLL_10010494._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESTR_DLL_10010494._4_4_;
                    uVar12 = s__USDRESTR_DLL_10010494._8_4_;
                    uVar13 = s__USDRESTR_DLL_10010494._12_2_;
                  }
                  else if (uVar2 == 0x1e) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESTH_DLL_10010484._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESTH_DLL_10010484._4_4_;
                    uVar12 = s__USDRESTH_DLL_10010484._8_4_;
                    uVar13 = s__USDRESTH_DLL_10010484._12_2_;
                  }
                  else if (uVar2 == 1) {
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESAR_DLL_10010474._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESAR_DLL_10010474._4_4_;
                    uVar12 = s__USDRESAR_DLL_10010474._8_4_;
                    uVar13 = s__USDRESAR_DLL_10010474._12_2_;
                  }
                  else {
                    if (uVar2 != 0x21) {
                      pBVar7 = aBStack_6b9;
                      do {
                        pBVar16 = pBVar7 + 1;
                        pBVar7 = pBVar7 + 1;
                      } while (*pBVar16 != '\0');
                      goto LAB_10001faa;
                    }
                    pBVar7 = aBStack_6b9;
                    do {
                      pBVar16 = pBVar7;
                      pBVar7 = pBVar16 + 1;
                    } while (pBVar16[1] != '\0');
                    *(undefined4 *)pBVar7 = s__USDRESID_DLL_10010464._0_4_;
                    *(undefined4 *)(pBVar16 + 5) = s__USDRESID_DLL_10010464._4_4_;
                    uVar12 = s__USDRESID_DLL_10010464._8_4_;
                    uVar13 = s__USDRESID_DLL_10010464._12_2_;
                  }
                  goto LAB_10001fc8;
                }
                pBVar7 = aBStack_6b9;
                do {
                  pBVar16 = pBVar7 + 1;
                  pBVar7 = pBVar7 + 1;
                } while (*pBVar16 != '\0');
              }
              *(undefined4 *)pBVar7 = s__USDRESTC_DLL_100105b4._0_4_;
              *(undefined4 *)(pBVar7 + 4) = s__USDRESTC_DLL_100105b4._4_4_;
              uVar12 = s__USDRESTC_DLL_100105b4._8_4_;
              uVar13 = s__USDRESTC_DLL_100105b4._12_2_;
            }
LAB_10001fc8:
            lpData = param_1 + 0x188;
            *(undefined4 *)(pBVar7 + 8) = uVar12;
            *(undefined2 *)(pBVar7 + 0xc) = uVar13;
            _memset(lpData,0,0xff);
            _memset((void *)((int)param_1 + 0x71f),0,0xff);
            _memset((void *)((int)param_1 + 0x81e),0,0xff);
            _memset((void *)((int)param_1 + 0x91d),0,0xff);
            _memset(param_1 + 0x287,0,0xff);
            _memset((void *)((int)param_1 + 0xb1b),0,0xff);
            _memset((void *)((int)param_1 + 0xc1a),0,0xff);
            _memset((void *)((int)param_1 + 0xd19),0,0xff);
            _memset(param_1 + 0x386,0,0xff);
            _memset((void *)((int)param_1 + 0xf17),0,0xff);
            _memset((void *)((int)param_1 + 0x1016),0,0xff);
            _memset((void *)((int)param_1 + 0x1115),0,0xff);
            _memset(param_1 + 0x485,0,0xff);
            _memset((void *)((int)param_1 + 0x1313),0,0xff);
            _memset((void *)((int)param_1 + 0x1412),0,0xff);
            _memset((void *)((int)param_1 + 0x1511),0,0xff);
            param_1[0x584] = 0;
            pHVar9 = LoadLibraryA((LPCSTR)(aBStack_6b9 + 1));
            if (pHVar9 != (HMODULE)0x0) {
              iVar4 = LoadStringA(pHVar9,uStack_824,(LPSTR)lpData,0xff);
              if (iVar4 != 0) {
                param_1[0x584] = param_1[0x584] + 1;
                iVar4 = LoadStringA(pHVar9,uStack_820,(LPSTR)((int)param_1 + 0x71f),0xff);
                if (iVar4 != 0) {
                  param_1[0x584] = param_1[0x584] + 1;
                  iVar4 = LoadStringA(pHVar9,uStack_81c,(LPSTR)((int)param_1 + 0x81e),0xff);
                  if (iVar4 != 0) {
                    param_1[0x584] = param_1[0x584] + 1;
                    iVar4 = LoadStringA(pHVar9,uStack_818,(LPSTR)((int)param_1 + 0x91d),0xff);
                    if (iVar4 != 0) {
                      param_1[0x584] = param_1[0x584] + 1;
                      iVar4 = LoadStringA(pHVar9,uStack_814,(LPSTR)(param_1 + 0x287),0xff);
                      if (iVar4 != 0) {
                        param_1[0x584] = param_1[0x584] + 1;
                        iVar4 = LoadStringA(pHVar9,uStack_810,(LPSTR)((int)param_1 + 0xb1b),0xff);
                        if (iVar4 != 0) {
                          param_1[0x584] = param_1[0x584] + 1;
                          iVar4 = LoadStringA(pHVar9,uStack_80c,(LPSTR)((int)param_1 + 0xc1a),0xff);
                          if (iVar4 != 0) {
                            param_1[0x584] = param_1[0x584] + 1;
                            iVar4 = LoadStringA(pHVar9,uStack_808,(LPSTR)((int)param_1 + 0xd19),0xff
                                               );
                            if (iVar4 != 0) {
                              param_1[0x584] = param_1[0x584] + 1;
                              iVar4 = LoadStringA(pHVar9,uStack_804,(LPSTR)(param_1 + 0x386),0xff);
                              if (iVar4 != 0) {
                                param_1[0x584] = param_1[0x584] + 1;
                                iVar4 = LoadStringA(pHVar9,uStack_800,(LPSTR)((int)param_1 + 0xf17),
                                                    0xff);
                                if (iVar4 != 0) {
                                  param_1[0x584] = param_1[0x584] + 1;
                                  iVar4 = LoadStringA(pHVar9,uStack_7fc,
                                                      (LPSTR)((int)param_1 + 0x1016),0xff);
                                  if (iVar4 != 0) {
                                    param_1[0x584] = param_1[0x584] + 1;
                                    iVar4 = LoadStringA(pHVar9,uStack_7f8,
                                                        (LPSTR)((int)param_1 + 0x1115),0xff);
                                    if (iVar4 != 0) {
                                      param_1[0x584] = param_1[0x584] + 1;
                                      iVar4 = LoadStringA(pHVar9,uStack_7f4,(LPSTR)(param_1 + 0x485)
                                                          ,0xff);
                                      if (iVar4 != 0) {
                                        param_1[0x584] = param_1[0x584] + 1;
                                        iVar4 = LoadStringA(pHVar9,uStack_7f0,
                                                            (LPSTR)((int)param_1 + 0x1313),0xff);
                                        if (iVar4 != 0) {
                                          param_1[0x584] = param_1[0x584] + 1;
                                          iVar4 = LoadStringA(pHVar9,uStack_7ec,
                                                              (LPSTR)((int)param_1 + 0x1412),0xff);
                                          if (iVar4 != 0) {
                                            param_1[0x584] = param_1[0x584] + 1;
                                            iVar4 = LoadStringA(pHVar9,uStack_7e8,
                                                                (LPSTR)((int)param_1 + 0x1511),0xff)
                                            ;
                                            if (iVar4 != 0) {
                                              param_1[0x584] = param_1[0x584] + 1;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              FreeLibrary(pHVar9);
            }
            pcVar15 = RegCloseKey_exref;
            if ((param_1[0x584] != 0) &&
               (LVar6 = RegOpenKeyExA(local_838,"Events",0,0x20006,&pHStack_844),
               pcVar15 = RegCloseKey_exref, LVar6 == 0)) {
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed1",0,0x20006,&pHStack_848);
              pcVar15 = RegCloseKey_exref;
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)lpData,0xff);
                pcVar15 = RegCloseKey_exref;
                RegCloseKey(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed2",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0x71f),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed3",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0x81e),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed4",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0x91d),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed5",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)(param_1 + 0x287),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed6",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0xb1b),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed7",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0xc1a),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed8",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0xd19),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed9",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)(param_1 + 0x386),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed10",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0xf17),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed11",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0x1016),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed12",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0x1115),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed13",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)(param_1 + 0x485),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed14",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0x1313),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed15",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0x1412),0xff);
                (*pcVar15)(pHStack_848);
              }
              LVar6 = RegOpenKeyExA(pHStack_844,"PushButtonPushed16",0,0x20006,&pHStack_848);
              if (LVar6 == 0) {
                RegSetValueExA(pHStack_848,(LPCSTR)0x0,0,1,(BYTE *)((int)param_1 + 0x1511),0xff);
                (*pcVar15)(pHStack_848);
              }
              (*pcVar15)(pHStack_844);
            }
            _memset(param_1 + 0x92,0,0x104);
            iStack_828 = 0;
            DStack_7e4 = 4;
            LVar6 = RegOpenKeyExA(local_838,"DeviceData",0,1,&pHStack_844);
            if (LVar6 == 0) {
              LVar6 = RegQueryValueExA(pHStack_844,"SimulationMode",(LPDWORD)0x0,&DStack_840,
                                       (LPBYTE)&iStack_828,&DStack_7e4);
              if ((LVar6 == 0) && (iStack_828 == 1)) {
                lstrcpyA((LPSTR)(param_1 + 0x92),"SIM");
              }
              (*pcVar15)(pHStack_844);
            }
            pHStack_848 = (HKEY)0x0;
            iStack_83c = 0;
            uStack_830 = 0;
            do {
              iVar4 = (**(code **)(*param_1 + 100))
                                (param_1 + 0x51,&iStack_83c,(short)param_1[0x586]);
              cVar14 = '\0';
              if (iStack_83c == 0) {
                (**(code **)(*param_1 + 0x74))(&uStack_830,auStack_7dc);
                cVar14 = uStack_830._1_1_;
              }
              Sleep(1000);
            } while (cVar14 == -0x6a);
            local_838 = (HKEY)0x0;
            iVar5 = _strncmp((char *)(param_1 + 0x51),"CNBJNPSCAN",10);
            if (iVar5 == 0) {
              local_838 = (HKEY)0x1;
            }
            if (((iStack_83c == 1) || (local_838 != (HKEY)0x1)) ||
               (pHVar9 = GetModuleHandleA("STISVC.EXE"), pHVar9 == (HMODULE)0x0)) {
              if ((iVar4 == 1) && (iStack_83c == 1)) {
                iVar4 = (**(code **)(*param_1 + 0x68))(&iStack_83c);
                if ((iVar4 == 1) && (iStack_83c == 1)) {
                  iVar4 = (**(code **)(*param_1 + 0x88))(auStack_7d8,&iStack_83c);
                }
                else {
                  cVar14 = (char)param_1[0x585];
                  if ((cVar14 != -0x4d) && (cVar14 != -0x43)) {
                    iStack_83c = 0;
                  }
                }
                if ((iVar4 == 1) && (iStack_83c == 1)) {
                  uStack_834 = 0x20;
                  uStack_833 = 0;
                  uStack_832 = 1;
                  uStack_831 = 0xc;
                  iVar4 = (**(code **)(*param_1 + 0x6c))(&uStack_834,&iStack_83c);
                }
              }
            }
            else {
              param_1[0x187] = 1;
              iVar4 = 1;
              iStack_83c = 1;
            }
            (**(code **)(*param_1 + 0x2c))(param_1);
            if ((((iVar4 != 0) && (iStack_83c != 0)) || (cVar14 == -0x4d)) ||
               (pHVar10 = (HKEY)0x45a, cVar14 == -0x43)) {
              pHVar10 = pHStack_848;
            }
            param_1[0x4d] = (int)pHVar10;
            if (pHVar10 == (HKEY)0x0) {
              LeaveCriticalSection(local_82c);
            }
            else {
              LeaveCriticalSection(local_82c);
            }
            goto LAB_10002983;
          }
          Sleep(3000);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x12);
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
LAB_10002983:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&pHStack_848);
  return;
}



/**************************************************/

/* Function: FUN_100029b0 @ 100029b0 */

undefined4 FUN_100029b0(int param_1,undefined4 *param_2)

{
  *param_2 = 2;
  param_2[1] = *(undefined4 *)(param_1 + 0x138);
  return 0;
}



/**************************************************/

/* Function: FUN_100029d0 @ 100029d0 */

undefined4 FUN_100029d0(int *param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fae8;
  local_c = ExceptionList;
  uVar2 = DAT_10015448 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x47);
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if ((*(uint *)(param_2 + 4) & 1) != 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    uVar3 = (**(code **)(*param_1 + 0x5c))(param_2,uVar2);
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = unaff_EBX;
    return uVar3;
  }
  if ((*(uint *)(param_2 + 4) & 2) != 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    if (param_1[0x115] != 0) {
      *(undefined4 *)(param_2 + 0x10) = 1;
    }
    if (param_1[0x116] != 0) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    }
    bVar1 = FID_conflict_operator__((byte *)(param_1 + 0x117),(byte *)&DAT_10010ee0);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}



/**************************************************/

/* Function: FUN_10002ab0 @ 10002ab0 */

undefined4 FUN_10002ab0(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    BVar1 = IsBadWritePtr(param_2,4);
    if (BVar1 == 0) {
      *param_2 = *(undefined4 *)(param_1 + 0x134);
      return 0;
    }
  }
  return 0x80070057;
}



/**************************************************/

/* Function: FUN_10002af0 @ 10002af0 */

void FUN_10002af0(int param_1,int param_2)

{
  DWORD cbMultiByte;
  CHAR local_104 [256];
  uint local_4;
  
  local_4 = DAT_10015448 ^ (uint)local_104;
  if (param_2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_104);
    return;
  }
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x134);
  *(LPWSTR)(param_2 + 0xc) = L'\0';
  cbMultiByte = FormatMessageA(0x800,DAT_1001644c,*(DWORD *)(param_1 + 0x134),0,local_104,0xfe,
                               (va_list *)0x0);
  if (cbMultiByte == 0) {
    cbMultiByte = FormatMessageA(0x1000,DAT_1001644c,*(DWORD *)(param_1 + 0x134),0,local_104,0xfe,
                                 (va_list *)0x0);
    if (cbMultiByte == 0) goto LAB_10002bb9;
  }
  MultiByteToWideChar(0,0,local_104,cbMultiByte,(LPWSTR)(param_2 + 0xc),0xfe);
LAB_10002bb9:
  __security_check_cookie(local_4 ^ (uint)local_104);
  return;
}



/**************************************************/

/* Function: FUN_10002be0 @ 10002be0 */

uint FUN_10002be0(int *param_1,undefined4 param_2,uint *param_3,undefined4 param_4,uint *param_5,
                 uint param_6,uint *param_7)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  uint *puVar7;
  uint *puVar8;
  uint *local_18;
  int **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fb18;
  local_c = ExceptionList;
  uVar3 = DAT_10015448 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x47);
  EnterCriticalSection(lpCriticalSection);
  puVar2 = param_7;
  puVar5 = param_5;
  local_4 = 0;
  switch(param_2) {
  case 0x100b:
    iVar4 = (**(code **)(*piVar1 + 0x78))(param_3,param_7);
    break;
  default:
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0;
  case 0x100d:
    iVar4 = (**(code **)(*piVar1 + 0x90))(param_3,param_7);
    break;
  case 0x100f:
    pcVar6 = *(code **)(*piVar1 + 0x84);
    puVar5 = &param_6;
    puVar7 = param_5;
    puVar8 = param_7;
    goto LAB_10002ff2;
  case 0x1011:
    iVar4 = (**(code **)(*piVar1 + 0x70))(param_5,param_7);
    break;
  case 0x1012:
    iVar4 = (**(code **)(*piVar1 + 0x74))(param_5,param_7);
    if ((iVar4 == 1) && (*puVar2 == 1)) {
      *puVar2 = param_6;
      if ((char)piVar1[0x585] != '\0') {
        *(undefined2 *)puVar5 = *(undefined2 *)((int)piVar1 + 0x1616);
        *(undefined1 *)(piVar1 + 0x585) = 0;
        *(undefined2 *)((int)piVar1 + 0x1616) = 0;
      }
      piVar1[0x4d] = (uint)*(byte *)(piVar1 + 0x585);
    }
    else {
      *puVar2 = 0;
    }
    goto LAB_1000300a;
  case 0x1013:
    iVar4 = (**(code **)(*piVar1 + 0x94))(param_5,param_7);
    break;
  case 0x1016:
    iVar4 = (**(code **)(*piVar1 + 0x7c))(param_3,param_7);
    break;
  case 0x1017:
    iVar4 = (**(code **)(*piVar1 + 0x80))(param_5,param_7);
    break;
  case 0x1018:
    iVar4 = (**(code **)(*piVar1 + 0x6c))(param_3,param_7);
    break;
  case 0x101b:
    pcVar6 = *(code **)(*piVar1 + 0x8c);
    puVar7 = param_7;
    puVar8 = param_3;
LAB_10002ff2:
    iVar4 = (*pcVar6)(puVar5,puVar7,puVar8);
    break;
  case 0x102a:
    iVar4 = (**(code **)(*piVar1 + 0x98))(param_3,param_7);
    break;
  case 0x102b:
    iVar4 = (**(code **)(*piVar1 + 0x9c))(param_3,param_7);
    break;
  case 0x102c:
    iVar4 = (**(code **)(*piVar1 + 0xa0))(param_3,param_7);
    break;
  case 0x102e:
    iVar4 = (**(code **)(*piVar1 + 0xa8))(param_5,param_7);
    break;
  case 0x102f:
    iVar4 = (**(code **)(*piVar1 + 0xac))(param_5,param_7);
    break;
  case 0x1030:
    iVar4 = (**(code **)(*piVar1 + 0xb0))(param_3,param_7);
    break;
  case 0x1031:
    local_14 = &param_1;
    local_10 = param_4;
    local_18 = param_3;
    param_1 = (int *)((uint)param_1._1_3_ << 8);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(&local_18,param_7);
    break;
  case 0x1032:
    local_14 = &param_1;
    local_10 = param_4;
    local_18 = param_3;
    param_1 = (int *)CONCAT31(param_1._1_3_,1);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(&local_18,param_7);
    break;
  case 0x1033:
    local_14 = &param_1;
    local_10 = param_4;
    local_18 = param_3;
    param_1 = (int *)CONCAT31(param_1._1_3_,2);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(&local_18,param_7);
    break;
  case 0x1034:
    local_14 = &param_1;
    local_10 = param_4;
    local_18 = param_3;
    param_1 = (int *)CONCAT31(param_1._1_3_,3);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(&local_18,param_7);
    break;
  case 0x1035:
    iVar4 = (**(code **)(*piVar1 + 0xb8))(param_5,param_7);
    break;
  case 0x1036:
    iVar4 = (**(code **)(*piVar1 + 0xbc))(param_5,param_7);
    break;
  case 0x1037:
    iVar4 = (**(code **)(*piVar1 + 0xc0))(param_3,param_7);
    break;
  case 0x1038:
    iVar4 = (**(code **)(*piVar1 + 0xc4))(param_3,param_7);
    break;
  case 0x1039:
    iVar4 = (**(code **)(*piVar1 + 200))(param_7);
    *puVar2 = ~-(uint)(*puVar2 != 1) & param_6;
    goto LAB_1000300a;
  case 0x103a:
    iVar4 = (**(code **)(*piVar1 + 0xcc))(param_3,param_7);
    break;
  case 0x103b:
    iVar4 = (**(code **)(*piVar1 + 0xd0))(param_5,param_7);
    break;
  case 0x103c:
    iVar4 = (**(code **)(*piVar1 + 0xd4))(param_5,param_7,uVar3);
  }
  *puVar2 = ~-(uint)(*puVar2 != 1) & param_6;
LAB_1000300a:
  if ((char)piVar1[0x585] == '\0') {
    LeaveCriticalSection(lpCriticalSection);
    uVar3 = -(uint)(iVar4 != 1) & 0x80004005;
  }
  else {
    *puVar2 = 0;
    LeaveCriticalSection(lpCriticalSection);
    uVar3 = 0x80004005;
  }
  ExceptionList = local_c;
  return uVar3;
}



/**************************************************/

/* Function: FUN_10003110 @ 10003110 */

undefined4 FUN_10003110(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *unaff_EBX;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fb48;
  local_c = ExceptionList;
  uVar1 = DAT_10015448 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  uVar3 = 0;
  local_4 = 0;
  if ((param_2 == 0) || (param_2 == -1)) {
    iVar2 = (**(code **)(*param_1 + 0x58))(uVar1);
    if (iVar2 == 1) {
      param_1[0x115] = 0;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x54))(param_2);
    if (iVar2 == 1) {
      param_1[0x115] = 1;
    }
    else {
      uVar3 = 0x80004005;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  ExceptionList = unaff_EBX;
  return uVar3;
}



/**************************************************/

/* Function: FUN_100031b0 @ 100031b0 */

undefined4 FUN_100031b0(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  undefined3 extraout_var;
  byte *pbVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x11c);
  EnterCriticalSection(lpCriticalSection);
  pbVar2 = (byte *)(param_1 + 0x45c);
  bVar1 = FID_conflict_operator__(pbVar2,(byte *)&DAT_10010ee0);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80070103;
  }
  *param_2 = 0x54;
  param_2[1] = *(undefined4 *)pbVar2;
  param_2[2] = *(undefined4 *)(param_1 + 0x460);
  param_2[3] = *(undefined4 *)(param_1 + 0x464);
  param_2[4] = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)pbVar2 = DAT_10010ee0;
  *(undefined4 *)(param_1 + 0x460) = DAT_10010ee4;
  *(undefined4 *)(param_1 + 0x464) = DAT_10010ee8;
  *(undefined4 *)(param_1 + 0x468) = DAT_10010eec;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



/**************************************************/

/* Function: FUN_10003240 @ 10003240 */

undefined4 FUN_10003240(void)

{
  return 0x80004001;
}



/**************************************************/

/* Function: FUN_10003250 @ 10003250 */

undefined4 FUN_10003250(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10003260 @ 10003260 */

undefined4 __thiscall FUN_10003260(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x11c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((int)this + 0x450) != 0) {
    *(undefined4 *)(param_1 + 8) = 0x200;
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *(undefined4 *)((int)this + 0x134) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



/**************************************************/

/* Function: FUN_100032b0 @ 100032b0 */

undefined4 FUN_100032b0(int *param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 local_18;
  void *pvStack_14;
  LPCRITICAL_SECTION local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fb78;
  local_c = ExceptionList;
  uVar3 = DAT_10015448 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x47);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = param_2;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  local_4 = 0;
  local_18 = 0;
  param_1 = (int *)0x4;
  local_10 = lpCriticalSection;
  iVar4 = (**(code **)(*piVar1 + 0x6c))(&param_1,&local_18,uVar3);
  if ((iVar4 == 0) || (unaff_EBP == 0)) {
    *(undefined4 *)(iVar2 + 0x14) = 0x1f;
    *(int *)(iVar2 + 0x18) = piVar1[0x4d];
    uVar5 = 0x80004005;
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_14;
  return uVar5;
}



/**************************************************/

/* Function: FUN_10003370 @ 10003370 */

void __fastcall FUN_10003370(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1000fba8;
  local_c = ExceptionList;
  uVar2 = DAT_10015448 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar1 = (int *)param_1[0x50];
  *param_1 = (int)BaseUSD::vftable;
  param_1[1] = (int)BaseUSD::vftable;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
    param_1[0x50] = 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x47);
  EnterCriticalSection(lpCriticalSection);
  uStack_4 = 0;
  iVar3 = (**(code **)(*param_1 + 0x58))();
  if (iVar3 == 1) {
    param_1[0x115] = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return;
}



/**************************************************/

/* Function: FUN_10003410 @ 10003410 */

undefined4 FUN_10003410(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10003420 @ 10003420 */

undefined4 FUN_10003420(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10003430 @ 10003430 */

undefined4 FUN_10003430(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10003440 @ 10003440 */

undefined4 * __thiscall FUN_10003440(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = INonDelegatingUnknown::vftable;
  *(undefined ***)this = BaseUSD::vftable;
  *puVar1 = BaseUSD::vftable;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((int)this + 0x11c),4000);
  *(undefined4 *)((int)this + 0x114) = 1;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  _memset((void *)((int)this + 0x144),0,0x104);
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x460) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x464) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x468) = DAT_10010eec;
  if (param_1 == 0) {
    *(undefined4 **)((int)this + 0x13c) = puVar1;
  }
  else {
    *(int *)((int)this + 0x13c) = param_1;
  }
  *(undefined4 *)((int)this + 0x118) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x32000;
  _memset((void *)((int)this + 0x14),0,0x100);
  _memset((void *)((int)this + 0x514),0,0x105);
  *(undefined1 *)((int)this + 0x1614) = 0;
  *(undefined2 *)((int)this + 0x1616) = 0;
  *(undefined4 *)((int)this + 0x61c) = 0;
  return this;
}



/**************************************************/

/* Function: FUN_10003560 @ 10003560 */

int * __thiscall FUN_10003560(void *this,byte param_1)

{
  FUN_10003370(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10003580 @ 10003580 */

undefined4 * __thiscall FUN_10003580(void *this,int param_1,LPCSTR param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  HANDLE pvVar3;
  _SECURITY_ATTRIBUTES local_20;
  undefined1 local_14 [20];
  
  FUN_10003440(this,param_1);
  *(undefined ***)this = CANONAPI::vftable;
  *(undefined ***)((int)this + 4) = CANONAPI::vftable;
  pvVar3 = OpenMutexA(0x100000,0,param_2);
  *(HANDLE *)((int)this + 0x1690) = pvVar3;
  if (pvVar3 == (HANDLE)0x0) {
    InitializeSecurityDescriptor(local_14,1);
    SetSecurityDescriptorDacl(local_14,1,(PACL)0x0,0);
    local_20.lpSecurityDescriptor = local_14;
    local_20.nLength = 0xc;
    local_20.bInheritHandle = 1;
    pvVar3 = CreateMutexA(&local_20,0,param_2);
    *(HANDLE *)((int)this + 0x1690) = pvVar3;
  }
  if (*(int *)((int)this + 0x1690) == 0) {
    *(undefined4 *)((int)this + 0x1690) = 0;
  }
  *(undefined4 *)((int)this + 0x138) = 1;
  *(undefined4 *)((int)this + 0x16ac) = 0;
  *(undefined4 *)((int)this + 0x16a8) = 0;
  *(undefined4 *)((int)this + 0x16a4) = 0;
  *(undefined4 *)((int)this + 0x474) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x478) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x47c) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x480) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x484) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x488) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x48c) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x490) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x494) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x498) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x49c) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x4a0) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x4a4) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x4a8) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x4ac) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x4b0) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x4b4) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x4b8) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x4bc) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x4c0) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x4c4) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x4c8) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x4cc) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x4d0) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x4d4) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x4d8) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x4dc) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x4e0) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x4e4) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x4e8) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x4ec) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x4f0) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x4f4) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x4f8) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x4fc) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x500) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x504) = DAT_10010ee0;
  *(undefined4 *)((int)this + 0x508) = DAT_10010ee4;
  *(undefined4 *)((int)this + 0x50c) = DAT_10010ee8;
  *(undefined4 *)((int)this + 0x510) = DAT_10010eec;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x1698) = 5;
  *(undefined4 *)((int)this + 0x169c) = 0;
  *(undefined4 *)((int)this + 0x1694) = 0;
  *(undefined4 *)((int)this + 0x16b8) = 0;
  *(undefined4 *)((int)this + 0x16b4) = 0;
  *(undefined4 *)((int)this + 0x16bc) = 0xffffffff;
  iVar2 = 0x16c0 - (int)param_3;
  do {
    cVar1 = *param_3;
    param_3[(int)this + iVar2] = cVar1;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)this + 0x1658) = 0;
  *(undefined4 *)((int)this + 0x17c4) = 0;
  *(undefined4 *)((int)this + 0x16b0) = 0;
  *(undefined1 *)((int)this + 0x17c8) = 0;
  return this;
}



/**************************************************/

/* Function: FUN_10003870 @ 10003870 */

void FUN_10003870(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_20 [6];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_10015448 ^ (uint)local_20;
  local_20[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x68))(local_20);
  if ((iVar1 == 1) && (unaff_ESI == 1)) {
    (**(code **)(*param_1 + 0x88))(local_20,&stack0xffffffdc);
  }
  Sleep(500);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffdc);
  return;
}



/**************************************************/

/* Function: FUN_10003920 @ 10003920 */

undefined4 FUN_10003920(int *param_1,int param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = WaitForSingleObject((HANDLE)param_1[0x5a4],2000);
  if (DVar1 == 0x102) {
    return 0x80070021;
  }
  uVar2 = FUN_100032b0(param_1,param_2);
  ReleaseMutex((HANDLE)param_1[0x5a4]);
  return uVar2;
}



/**************************************************/

/* Function: FUN_10003970 @ 10003970 */

undefined4 FUN_10003970(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x11c);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x1694) == 0) {
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x1690),2000);
    if (DVar1 == 0x102) {
      LeaveCriticalSection(lpCriticalSection);
      return 0x80070021;
    }
  }
  *(int *)(param_1 + 0x1694) = *(int *)(param_1 + 0x1694) + 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



/**************************************************/

/* Function: FUN_100039d0 @ 100039d0 */

undefined4 FUN_100039d0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x11c);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x1694) == 0) {
    *(undefined4 *)(param_1 + 0x134) = 0x9e;
    LeaveCriticalSection(lpCriticalSection);
    return 0x8007009e;
  }
  iVar1 = *(int *)(param_1 + 0x1694) + -1;
  *(int *)(param_1 + 0x1694) = iVar1;
  if (iVar1 == 0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 0x1690));
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



/**************************************************/

/* Function: FUN_10003a30 @ 10003a30 */

void __fastcall FUN_10003a30(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  CHAR local_10c [264];
  uint local_4;
  
  local_4 = DAT_10015448 ^ (uint)local_10c;
  if (*(int *)(param_1 + 0x16b8) != 0) {
    if (*(code **)(param_1 + 0x165c) != (code *)0x0) {
      (**(code **)(param_1 + 0x165c))(param_1 + 0x16bc);
    }
    FreeLibrary(*(HMODULE *)(param_1 + 0x16b8));
    *(undefined4 *)(param_1 + 0x16b8) = 0;
    *(undefined4 *)(param_1 + 0x165c) = 0;
  }
  GetSystemDirectoryA(local_10c,0x90);
  pcVar1 = (char *)(param_1 + 0x514);
  pcVar3 = pcVar1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar7 = &stack0xfffffef3;
  do {
    pcVar6 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = pcVar1;
  for (uVar5 = (uint)((int)pcVar3 - (int)pcVar1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = (int)pcVar3 - (int)pcVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  hModule = LoadLibraryA(local_10c);
  *(HMODULE *)(param_1 + 0x16b8) = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar4 = GetProcAddress(hModule,"FindScannerEx");
    *(FARPROC *)(param_1 + 0x161c) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"InitializeScanner");
    *(FARPROC *)(param_1 + 0x1620) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"TestScanner");
    *(FARPROC *)(param_1 + 0x1624) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetDataStatus");
    *(FARPROC *)(param_1 + 0x1628) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetScannerStatus");
    *(FARPROC *)(param_1 + 0x162c) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"SetScanParameter");
    *(FARPROC *)(param_1 + 0x1630) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"SetAGData");
    *(FARPROC *)(param_1 + 0x1634) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetAGData");
    *(FARPROC *)(param_1 + 0x1638) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"ReadScan");
    *(FARPROC *)(param_1 + 0x163c) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"InitialButton");
    *(FARPROC *)(param_1 + 0x1640) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"ReadPushButton");
    *(FARPROC *)(param_1 + 0x1644) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"DoCalibration");
    *(FARPROC *)(param_1 + 0x1648) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetCalibrationStatus");
    *(FARPROC *)(param_1 + 0x164c) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetCarriagePosition");
    *(FARPROC *)(param_1 + 0x1650) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"StartScanEx");
    *(FARPROC *)(param_1 + 0x1654) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"StopScanEx");
    *(FARPROC *)(param_1 + 0x1658) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"TerminateScanner");
    *(FARPROC *)(param_1 + 0x165c) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetScannerAbilitySize");
    *(FARPROC *)(param_1 + 0x1660) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetScannerAbilityXp");
    *(FARPROC *)(param_1 + 0x1664) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"SetLamp");
    *(FARPROC *)(param_1 + 0x1668) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"SetGamma");
    *(FARPROC *)(param_1 + 0x166c) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetCanonAPIVersionXP");
    *(FARPROC *)(param_1 + 0x1670) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetOPUMode");
    *(FARPROC *)(param_1 + 0x1674) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetLampStatus");
    *(FARPROC *)(param_1 + 0x1678) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"LockScanner");
    *(FARPROC *)(param_1 + 0x167c) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"UnlockScanner");
    *(FARPROC *)(param_1 + 0x1680) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"SetErrorToDevice");
    *(FARPROC *)(param_1 + 0x1684) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetCropStatus");
    *(FARPROC *)(param_1 + 0x1688) = pFVar4;
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x16b8),"GetReadStatus");
    *(FARPROC *)(param_1 + 0x168c) = pFVar4;
    __security_check_cookie(local_4 ^ (uint)local_10c);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_10c);
  return;
}



/**************************************************/

/* Function: FUN_10003d60 @ 10003d60 */

BOOL __fastcall FUN_10003d60(int *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  BVar1 = 0;
  local_4 = 0;
  if (param_1[0x5ae] != 0) {
    iVar3 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      if (-1 < iVar2) break;
      Sleep(3000);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    (**(code **)(*param_1 + 0xa4))(&local_4);
    Sleep(500);
    (**(code **)(*param_1 + 0x2c))(param_1);
    BVar1 = FreeLibrary((HMODULE)param_1[0x5ae]);
    param_1[0x5ae] = 0;
    param_1[0x597] = 0;
    if ((HANDLE)param_1[0x5ac] != (HANDLE)0x0) {
      TerminateThread((HANDLE)param_1[0x5ac],0);
    }
  }
  return BVar1;
}



/**************************************************/

/* Function: FUN_10003e00 @ 10003e00 */

int __thiscall FUN_10003e00(void *this,int *param_1)

{
  char cVar2;
  int iVar1;
  int iVar3;
  int iVar4;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = lstrcmpA((LPCSTR)((int)this + 0x248),"SIM");
  if (iVar1 == 0) {
    *param_1 = 1;
    return 1;
  }
  if (*(code **)((int)this + 0x1620) != (code *)0x0) {
    iVar4 = (**(code **)((int)this + 0x1620))(*(undefined4 *)((int)this + 0x16bc));
    iVar3 = 1;
    iStack_4 = 0;
    uStack_8 = 0;
    if (iVar4 == 0) {
      while( true ) {
        iVar3 = (**(code **)(*(int *)this + 0x74))(&uStack_8,&iStack_4);
        cVar2 = (char)((uint)uStack_8 >> 8);
        if (((iVar3 != 1) || (iStack_4 != 1)) || (cVar2 != -0x6a)) break;
        iVar1 = (**(code **)((int)this + 0x1620))(*(undefined4 *)((int)this + 0x16bc));
        iVar4 = 0;
        if (iVar1 != 0) {
          *param_1 = iVar1;
          return 1;
        }
      }
      *(short *)((int)this + 0x1616) = (short)uStack_8;
      *(char *)((int)this + 0x1614) = cVar2;
    }
  }
  *param_1 = iVar4;
  return iVar3;
}



/**************************************************/

/* Function: FUN_10003ee0 @ 10003ee0 */

bool __thiscall FUN_10003ee0(void *this,undefined1 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = lstrcmpA((LPCSTR)((int)this + 0x248),"SIM");
  if (iVar2 == 0) {
    *param_2 = 1;
    return true;
  }
  pcVar1 = *(code **)((int)this + 0x1624);
  if (pcVar1 != (code *)0x0) {
    uVar3 = (*pcVar1)(*(undefined4 *)((int)this + 0x16bc),*param_1,param_1[1],param_1[2],param_1[3])
    ;
  }
  *param_2 = uVar3;
  return pcVar1 != (code *)0x0;
}



/**************************************************/

/* Function: FUN_10003f60 @ 10003f60 */

undefined4 __thiscall FUN_10003f60(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1674) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1674))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10003fa0 @ 10003fa0 */

undefined4 __thiscall FUN_10003fa0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1628) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1628))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10003fe0 @ 10003fe0 */

undefined4 __thiscall FUN_10003fe0(void *this,undefined2 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x162c) == (code *)0x0) {
    *param_1 = 0x9b00;
    return 1;
  }
  uVar1 = (**(code **)((int)this + 0x162c))(*(undefined4 *)((int)this + 0x16bc),param_1);
  *unaff_retaddr = uVar1;
  return 1;
}



/**************************************************/

/* Function: FUN_10004020 @ 10004020 */

undefined4 __thiscall FUN_10004020(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1630) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1630))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004060 @ 10004060 */

undefined4 __thiscall FUN_10004060(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1634) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1634))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100040a0 @ 100040a0 */

undefined4 __thiscall FUN_100040a0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1638) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1638))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100040e0 @ 100040e0 */

undefined4 __thiscall
FUN_100040e0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  if (*(code **)((int)this + 0x163c) != (code *)0x0) {
    uStack_4 = (undefined4 *)((uint)this & 0xffffff);
    uVar1 = (**(code **)((int)this + 0x163c))
                      (*(undefined4 *)((int)this + 0x16bc),(int)&uStack_4 + 3,param_2,*param_1);
    *uStack_4 = uVar1;
    return 1;
  }
  *param_3 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004130 @ 10004130 */

undefined4 __thiscall FUN_10004130(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x168c) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x168c))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004170 @ 10004170 */

bool __thiscall FUN_10004170(void *this,undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = lstrcmpA((LPCSTR)((int)this + 0x248),"SIM");
  if (iVar2 == 0) {
    *param_2 = 1;
    return true;
  }
  pcVar1 = *(code **)((int)this + 0x1640);
  if (pcVar1 != (code *)0x0) {
    uVar3 = (*pcVar1)(*(undefined4 *)((int)this + 0x16bc),param_1);
  }
  *param_2 = uVar3;
  return pcVar1 != (code *)0x0;
}



/**************************************************/

/* Function: FUN_100041d0 @ 100041d0 */

bool __thiscall FUN_100041d0(void *this,byte *param_1,int *param_2,undefined1 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  LSTATUS LVar4;
  bool bVar5;
  
  pbVar2 = param_1;
  iVar3 = 0;
  bVar5 = *(code **)((int)this + 0x1644) != (code *)0x0;
  if (bVar5) {
    iVar3 = (**(code **)((int)this + 0x1644))(*(undefined4 *)((int)this + 0x16bc),*param_3,param_1);
  }
  *param_2 = iVar3;
  if ((iVar3 == 0) || ((*pbVar2 & 0x80) == 0)) {
    return bVar5;
  }
  param_3 = (undefined1 *)0x0;
  param_1 = (byte *)0x0;
  if (((pbVar2[1] & 3) == 1) || (param_2 = (int *)0x1, (pbVar2[1] & 3) != 2)) {
    param_2 = (int *)0x0;
  }
  LVar4 = RegSetValueExA(DAT_10016420,"PushEventButtonType",0,4,(BYTE *)&param_2,4);
  if (LVar4 == 0) {
    switch(pbVar2[1] >> 2 & 0x1f) {
    default:
      param_3 = (undefined1 *)0x0;
      break;
    case 2:
      param_3 = (undefined1 *)0x1;
      break;
    case 4:
      param_3 = (undefined1 *)0x2;
      break;
    case 8:
      param_3 = (undefined1 *)0x3;
      break;
    case 0x10:
      param_3 = (undefined1 *)0x4;
    }
    LVar4 = RegSetValueExA(DAT_10016420,"PushEventScanType",0,4,(BYTE *)&param_3,4);
    if (LVar4 == 0) {
      switch(pbVar2[2] & 0x3f) {
      default:
        param_1 = (byte *)0x0;
        break;
      case 2:
        param_1 = (byte *)0x1;
        break;
      case 4:
        param_1 = (byte *)0x2;
        break;
      case 8:
        param_1 = (byte *)0x3;
        break;
      case 0x10:
        param_1 = (byte *)0x4;
        break;
      case 0x20:
        param_1 = (byte *)0xa;
      }
      RegSetValueExA(DAT_10016420,"PushEventImageSource",0,4,(BYTE *)&param_1,4);
    }
  }
  bVar1 = pbVar2[1];
  if ((bVar1 == 2) && (pbVar2[2] == 0x20)) {
LAB_10004357:
    pbVar2[2] = 0;
    pbVar2[1] = 1;
    return bVar5;
  }
  if ((bVar1 != 1) && (bVar1 != 2)) {
    if ((bVar1 == 5) || (bVar1 == 6)) goto LAB_10004357;
    if ((bVar1 == 9) || (bVar1 == 10)) {
      pbVar2[2] = 0;
      pbVar2[1] = 2;
      return bVar5;
    }
    if ((bVar1 == 0x11) || (bVar1 == 0x12)) {
      pbVar2[2] = 0;
      pbVar2[1] = 4;
      return bVar5;
    }
    if ((bVar1 != 0x21) && (bVar1 != 0x22)) {
      if (bVar1 == 0x41) {
        pbVar2[1] = 0;
        pbVar2[2] = 1;
        return bVar5;
      }
      if (bVar1 != 0x42) {
        return bVar5;
      }
      pbVar2[2] = 2;
      pbVar2[1] = 0;
      return bVar5;
    }
    pbVar2[1] = 8;
  }
  pbVar2[2] = 0;
  return bVar5;
}



/**************************************************/

/* Function: FUN_10004450 @ 10004450 */

undefined4 __thiscall FUN_10004450(void *this,undefined1 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (*(code **)((int)this + 0x1648) != (code *)0x0) {
    uVar1 = *(ushort *)(param_1 + 2);
    uVar2 = (**(code **)((int)this + 0x1648))
                      (*(undefined4 *)((int)this + 0x16bc),*param_1,param_1[1]);
    *(undefined4 *)(uint)uVar1 = uVar2;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100044a0 @ 100044a0 */

undefined4 __thiscall FUN_100044a0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x164c) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x164c))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100044e0 @ 100044e0 */

undefined4 __thiscall FUN_100044e0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x1650) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1650))(param_1);
    *param_1 = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004510 @ 10004510 */

undefined4 __thiscall FUN_10004510(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1654) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1654))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004550 @ 10004550 */

undefined4 __thiscall FUN_10004550(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1658) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1658))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004590 @ 10004590 */

undefined4 __thiscall FUN_10004590(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x165c) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x165c))((int)this + 0x16bc);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_1 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100045d0 @ 100045d0 */

void __thiscall FUN_100045d0(void *this,undefined2 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  HANDLE hFile;
  void *lpBuffer;
  undefined4 uVar4;
  undefined4 *local_110;
  undefined4 local_10c;
  CHAR local_108 [12];
  char local_fc [248];
  uint local_4;
  
  local_4 = DAT_10015448 ^ (uint)&local_110;
  local_110 = param_2;
  uVar4 = 0;
  iVar2 = lstrcmpA((LPCSTR)((int)this + 0x248),"SIM");
  if (iVar2 == 0) {
    local_10c = 0;
    local_108[0] = '\0';
    _memset(local_108 + 1,0,0x103);
    GetWindowsDirectoryA(local_108,0x104);
    pcVar1 = (char *)((int)&local_10c + 3);
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (pcVar3[1] != '\0');
    *(undefined4 *)(pcVar3 + 1) = s__ABILITY_BIN_10010b0c._0_4_;
    *(undefined4 *)(pcVar3 + 5) = s__ABILITY_BIN_10010b0c._4_4_;
    *(undefined4 *)(pcVar3 + 9) = s__ABILITY_BIN_10010b0c._8_4_;
    pcVar3[0xd] = s__ABILITY_BIN_10010b0c[0xc];
    hFile = CreateFileA(local_108,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      lpBuffer = _malloc(0x800);
      if (lpBuffer != (void *)0x0) {
        ReadFile(hFile,lpBuffer,0x800,&local_10c,(LPOVERLAPPED)0x0);
        CloseHandle(hFile);
        _free(lpBuffer);
      }
    }
    DAT_10016428 = local_10c & 0xffff;
    *param_1 = (short)local_10c;
    *local_110 = 1;
  }
  else {
    if (*(code **)((int)this + 0x1660) != (code *)0x0) {
      uVar4 = (**(code **)((int)this + 0x1660))(*(undefined4 *)((int)this + 0x16bc),param_1);
    }
    *local_110 = uVar4;
  }
  __security_check_cookie(local_4 ^ (uint)&local_110);
  return;
}



/**************************************************/

/* Function: FUN_10004740 @ 10004740 */

void __thiscall FUN_10004740(void *this,LPVOID param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  HANDLE hFile;
  undefined4 uVar4;
  undefined4 *local_110;
  undefined4 local_10c;
  CHAR local_108 [12];
  char local_fc [248];
  uint local_4;
  
  local_4 = DAT_10015448 ^ (uint)&local_110;
  local_110 = param_2;
  uVar4 = 0;
  iVar2 = lstrcmpA((LPCSTR)((int)this + 0x248),"SIM");
  if (iVar2 == 0) {
    local_108[0] = '\0';
    _memset(local_108 + 1,0,0x103);
    GetWindowsDirectoryA(local_108,0x104);
    pcVar1 = (char *)((int)&local_10c + 3);
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (pcVar3[1] != '\0');
    *(undefined4 *)(pcVar3 + 1) = s__ABILITY_BIN_10010b0c._0_4_;
    *(undefined4 *)(pcVar3 + 5) = s__ABILITY_BIN_10010b0c._4_4_;
    *(undefined4 *)(pcVar3 + 9) = s__ABILITY_BIN_10010b0c._8_4_;
    pcVar3[0xd] = s__ABILITY_BIN_10010b0c[0xc];
    hFile = CreateFileA(local_108,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      ReadFile(hFile,param_1,DAT_10016428,&local_10c,(LPOVERLAPPED)0x0);
      CloseHandle(hFile);
    }
    *local_110 = 1;
  }
  else {
    if (*(code **)((int)this + 0x1664) != (code *)0x0) {
      uVar4 = (**(code **)((int)this + 0x1664))(*(undefined4 *)((int)this + 0x16bc),param_1);
    }
    *local_110 = uVar4;
  }
  __security_check_cookie(local_4 ^ (uint)&local_110);
  return;
}



/**************************************************/

/* Function: FUN_10004880 @ 10004880 */

undefined4 __thiscall FUN_10004880(void *this,undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1668) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1668))(*(undefined4 *)((int)this + 0x16bc),*param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100048c0 @ 100048c0 */

undefined4 __thiscall FUN_100048c0(void *this,undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1678) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1678))(*(undefined4 *)((int)this + 0x16bc),*param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004900 @ 10004900 */

undefined4 __thiscall FUN_10004900(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(code **)((int)this + 0x166c) != (code *)0x0) {
    puVar1 = (undefined4 *)param_1[2];
    uVar2 = (**(code **)((int)this + 0x166c))
                      (*(undefined4 *)((int)this + 0x16bc),*param_1,*(undefined1 *)param_1[1]);
    *puVar1 = uVar2;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004950 @ 10004950 */

undefined4 __thiscall FUN_10004950(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1670) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1670))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004990 @ 10004990 */

undefined4 __thiscall FUN_10004990(void *this,undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x167c) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x167c))(*(undefined4 *)((int)this + 0x16bc),*param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100049d0 @ 100049d0 */

undefined4 __thiscall FUN_100049d0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1680) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1680))(*(undefined4 *)((int)this + 0x16bc));
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_1 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004a10 @ 10004a10 */

undefined4 __thiscall FUN_10004a10(void *this,undefined2 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1684) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1684))(*(undefined4 *)((int)this + 0x16bc),*param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004a50 @ 10004a50 */

undefined4 __thiscall FUN_10004a50(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  if (*(code **)((int)this + 0x1688) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x1688))(*(undefined4 *)((int)this + 0x16bc),param_1);
    *unaff_retaddr = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_10004a90 @ 10004a90 */

void FUN_10004a90(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined1 auStack_1c [3];
  undefined1 local_19;
  int local_18;
  uint local_14 [5];
  
  local_14[4] = DAT_10015448 ^ (uint)auStack_1c;
  local_18 = 0;
  local_19 = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  if ((*(uint *)(param_2 + 4) & 1) != 0) {
    *(undefined4 *)(param_2 + 8) = 1;
    __security_check_cookie(local_14[4] ^ (uint)auStack_1c);
    return;
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffffb;
  if ((*(uint *)(param_2 + 4) & 2) == 0) goto LAB_10004d54;
  iVar2 = (**(code **)(*param_1 + 0x8c))(local_14,&local_18,&local_19);
  if (((iVar2 == 1) && (local_18 == 1)) && ((char)local_14[0] < '\0')) {
    if ((local_14[0] & 0x100) == 0) {
      if ((local_14[0] & 0x200) == 0) {
        if ((local_14[0] & 0x400) == 0) {
          if ((local_14[0] & 0x800) != 0) {
            iVar2 = param_1[0x12a];
            iVar4 = param_1[299];
            param_1[0x117] = param_1[0x129];
            iVar3 = param_1[300];
            goto LAB_10004d26;
          }
          if ((local_14[0] & 0x1000) == 0) {
            if ((local_14[0] & 0x2000) == 0) {
              if ((local_14[0] & 0x4000) != 0) {
                iVar2 = param_1[0x136];
                iVar4 = param_1[0x137];
                param_1[0x117] = param_1[0x135];
                iVar3 = param_1[0x138];
                goto LAB_10004d26;
              }
              if ((char)(local_14[0] >> 8) < '\0') {
                param_1[0x117] = param_1[0x139];
                param_1[0x118] = param_1[0x13a];
                param_1[0x119] = param_1[0x13b];
                param_1[0x11a] = param_1[0x13c];
              }
              else if ((local_14[0] & 0x10000) == 0) {
                if ((local_14[0] & 0x20000) != 0) {
                  iVar2 = param_1[0x142];
                  iVar4 = param_1[0x143];
                  param_1[0x117] = param_1[0x141];
                  iVar3 = param_1[0x144];
                  goto LAB_10004d26;
                }
              }
              else {
                param_1[0x117] = param_1[0x13d];
                param_1[0x118] = param_1[0x13e];
                param_1[0x119] = param_1[0x13f];
                param_1[0x11a] = param_1[0x140];
              }
            }
            else {
              param_1[0x117] = param_1[0x131];
              param_1[0x118] = param_1[0x132];
              param_1[0x119] = param_1[0x133];
              param_1[0x11a] = param_1[0x134];
            }
          }
          else {
            param_1[0x117] = param_1[0x12d];
            param_1[0x118] = param_1[0x12e];
            param_1[0x119] = param_1[0x12f];
            param_1[0x11a] = param_1[0x130];
          }
        }
        else {
          param_1[0x117] = param_1[0x125];
          param_1[0x118] = param_1[0x126];
          param_1[0x119] = param_1[0x127];
          param_1[0x11a] = param_1[0x128];
        }
      }
      else {
        param_1[0x117] = param_1[0x121];
        param_1[0x118] = param_1[0x122];
        param_1[0x119] = param_1[0x123];
        param_1[0x11a] = param_1[0x124];
      }
    }
    else {
      iVar2 = param_1[0x11e];
      iVar4 = param_1[0x11f];
      param_1[0x117] = param_1[0x11d];
      iVar3 = param_1[0x120];
LAB_10004d26:
      param_1[0x118] = iVar2;
      param_1[0x119] = iVar4;
      param_1[0x11a] = iVar3;
    }
    bVar1 = FID_conflict_operator__((byte *)(param_1 + 0x117),(byte *)&DAT_10010ee0);
    if (CONCAT31(extraout_var,bVar1) != 0) goto LAB_10004d54;
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
LAB_10004d54:
  __security_check_cookie(local_14[4] ^ (uint)auStack_1c);
  return;
}



/**************************************************/

/* Function: FUN_10004d80 @ 10004d80 */

undefined4 __fastcall FUN_10004d80(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = _strncmp((char *)(param_1 + 0x144),"CNBJNPSCAN",10);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x16ac) != 0)) {
    if (*(HANDLE *)(param_1 + 0x16a8) != (HANDLE)0x0) {
      SetEvent(*(HANDLE *)(param_1 + 0x16a8));
    }
    DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x16ac),30000);
    if (DVar2 == 0x102) {
      TerminateThread(*(HANDLE *)(param_1 + 0x16ac),0);
    }
    ResetEvent(*(HANDLE *)(param_1 + 0x16a8));
    CloseHandle(*(HANDLE *)(param_1 + 0x16ac));
    if (*(HANDLE *)(param_1 + 0x16a8) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x16a8));
    }
    *(undefined4 *)(param_1 + 0x16ac) = 0;
    *(undefined4 *)(param_1 + 0x16a8) = 0;
    *(undefined4 *)(param_1 + 0x16a4) = 0;
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10004e40 @ 10004e40 */

void __fastcall FUN_10004e40(int *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined1 auStack_cc [3];
  undefined1 local_c9;
  int local_c8;
  LPCRITICAL_SECTION p_Stack_c4;
  LPCRITICAL_SECTION p_Stack_c0;
  LPCRITICAL_SECTION p_Stack_bc;
  LPCRITICAL_SECTION p_Stack_b8;
  LPCRITICAL_SECTION p_Stack_b4;
  LPCRITICAL_SECTION p_Stack_b0;
  LPCRITICAL_SECTION p_Stack_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  _OSVERSIONINFOA local_98;
  uint local_4;
  
  local_4 = DAT_10015448 ^ (uint)auStack_cc;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_c8 = 0;
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  pcVar1 = WaitForSingleObject_exref;
  DVar2 = WaitForSingleObject((HANDLE)param_1[0x5aa],500);
  while (DVar2 != 0) {
    if (DVar2 != 0x102) goto LAB_10005300;
    iVar3 = (*pcVar1)(param_1[0x5a4],10);
    if (iVar3 != 0x102) {
      local_c9 = 0;
      iVar3 = (**(code **)(*param_1 + 0x8c))(&local_a8,&local_c8,&local_c9);
      ReleaseMutex((HANDLE)param_1[0x5a4]);
      if ((iVar3 == 1) && (local_c8 == 1)) {
        if ((char)local_a8 < '\0') {
          if ((local_a8 & 0x100) == 0) {
            if ((local_a8 & 0x200) == 0) {
              if ((local_a8 & 0x400) == 0) {
                if ((local_a8 & 0x800) == 0) {
                  if ((local_a8 & 0x1000) == 0) {
                    if ((local_a8 & 0x2000) == 0) {
                      if ((local_a8 & 0x4000) == 0) {
                        if ((char)(local_a8 >> 8) < '\0') {
                          FUN_100010a0(&p_Stack_c0,(LPCRITICAL_SECTION)(param_1 + 0x47));
                          param_1[0x117] = param_1[0x139];
                          param_1[0x118] = param_1[0x13a];
                          param_1[0x119] = param_1[0x13b];
                          param_1[0x11a] = param_1[0x13c];
                          SetEvent((HANDLE)param_1[0x5a9]);
                          LeaveCriticalSection(p_Stack_c0);
                        }
                        else if ((local_a8 & 0x10000) == 0) {
                          if ((local_a8 & 0x20000) != 0) {
                            FUN_100010a0(&p_Stack_b4,(LPCRITICAL_SECTION)(param_1 + 0x47));
                            param_1[0x117] = param_1[0x141];
                            param_1[0x118] = param_1[0x142];
                            param_1[0x119] = param_1[0x143];
                            param_1[0x11a] = param_1[0x144];
                            SetEvent((HANDLE)param_1[0x5a9]);
                            LeaveCriticalSection(p_Stack_b4);
                          }
                        }
                        else {
                          FUN_100010a0(&p_Stack_bc,(LPCRITICAL_SECTION)(param_1 + 0x47));
                          param_1[0x117] = param_1[0x13d];
                          param_1[0x118] = param_1[0x13e];
                          param_1[0x119] = param_1[0x13f];
                          param_1[0x11a] = param_1[0x140];
                          SetEvent((HANDLE)param_1[0x5a9]);
                          LeaveCriticalSection(p_Stack_bc);
                        }
                      }
                      else {
                        FUN_100010a0(&p_Stack_c4,(LPCRITICAL_SECTION)(param_1 + 0x47));
                        param_1[0x117] = param_1[0x135];
                        param_1[0x118] = param_1[0x136];
                        param_1[0x119] = param_1[0x137];
                        param_1[0x11a] = param_1[0x138];
                        SetEvent((HANDLE)param_1[0x5a9]);
                        LeaveCriticalSection(p_Stack_c4);
                      }
                    }
                    else {
                      FUN_100010a0(&p_Stack_b8,(LPCRITICAL_SECTION)(param_1 + 0x47));
                      param_1[0x117] = param_1[0x131];
                      param_1[0x118] = param_1[0x132];
                      param_1[0x119] = param_1[0x133];
                      param_1[0x11a] = param_1[0x134];
                      SetEvent((HANDLE)param_1[0x5a9]);
                      LeaveCriticalSection(p_Stack_b8);
                    }
                  }
                  else {
                    FUN_100010a0(&p_Stack_b0,(LPCRITICAL_SECTION)(param_1 + 0x47));
                    param_1[0x117] = param_1[0x12d];
                    param_1[0x118] = param_1[0x12e];
                    param_1[0x119] = param_1[0x12f];
                    param_1[0x11a] = param_1[0x130];
                    SetEvent((HANDLE)param_1[0x5a9]);
                    LeaveCriticalSection(p_Stack_b0);
                  }
                }
                else {
                  FUN_100010a0(&p_Stack_ac,(LPCRITICAL_SECTION)(param_1 + 0x47));
                  param_1[0x117] = param_1[0x129];
                  param_1[0x118] = param_1[0x12a];
                  param_1[0x119] = param_1[299];
                  param_1[0x11a] = param_1[300];
                  SetEvent((HANDLE)param_1[0x5a9]);
                  LeaveCriticalSection(p_Stack_ac);
                }
              }
              else {
                EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
                param_1[0x117] = param_1[0x125];
                param_1[0x118] = param_1[0x126];
                param_1[0x119] = param_1[0x127];
                param_1[0x11a] = param_1[0x128];
                SetEvent((HANDLE)param_1[0x5a9]);
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
              }
            }
            else {
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
              param_1[0x117] = param_1[0x121];
              param_1[0x118] = param_1[0x122];
              param_1[0x119] = param_1[0x123];
              param_1[0x11a] = param_1[0x124];
              SetEvent((HANDLE)param_1[0x5a9]);
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
            }
          }
          else {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
            param_1[0x117] = param_1[0x11d];
            param_1[0x118] = param_1[0x11e];
            param_1[0x119] = param_1[0x11f];
            param_1[0x11a] = param_1[0x120];
            SetEvent((HANDLE)param_1[0x5a9]);
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
          }
        }
      }
      else if (local_c8 == 0) goto LAB_10005300;
    }
    pcVar1 = WaitForSingleObject_exref;
    DVar2 = WaitForSingleObject((HANDLE)param_1[0x5aa],500);
  }
  if (((local_98.dwPlatformId == 1) && (local_98.dwMajorVersion == 4)) &&
     (local_98.dwMinorVersion == 0x5a)) {
    if ((param_1[0x5ae] != 0) && ((code *)param_1[0x597] != (code *)0x0)) {
      (*(code *)param_1[0x597])(param_1 + 0x5af);
      FreeLibrary((HMODULE)param_1[0x5ae]);
      param_1[0x597] = 0;
      param_1[0x5ae] = 0;
    }
    SetEvent((HANDLE)param_1[0x5f1]);
  }
LAB_10005300:
  __security_check_cookie(local_4 ^ (uint)auStack_cc);
  return;
}



/**************************************************/

/* Function: FUN_10005340 @ 10005340 */

void __fastcall FUN_10005340(int param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x17c4),0xffffffff);
  if (DVar1 == 0) {
    if ((*(int *)(param_1 + 0x16b8) != 0) && (*(code **)(param_1 + 0x165c) != (code *)0x0)) {
      (**(code **)(param_1 + 0x165c))(param_1 + 0x16bc);
      FreeLibrary(*(HMODULE *)(param_1 + 0x16b8));
      *(undefined4 *)(param_1 + 0x16b8) = 0;
      *(undefined4 *)(param_1 + 0x161c) = 0;
      *(undefined4 *)(param_1 + 0x1620) = 0;
      *(undefined4 *)(param_1 + 0x1624) = 0;
      *(undefined4 *)(param_1 + 0x1628) = 0;
      *(undefined4 *)(param_1 + 0x162c) = 0;
      *(undefined4 *)(param_1 + 0x1630) = 0;
      *(undefined4 *)(param_1 + 0x1634) = 0;
      *(undefined4 *)(param_1 + 0x1638) = 0;
      *(undefined4 *)(param_1 + 0x163c) = 0;
      *(undefined4 *)(param_1 + 0x1640) = 0;
      *(undefined4 *)(param_1 + 0x1644) = 0;
      *(undefined4 *)(param_1 + 0x1648) = 0;
      *(undefined4 *)(param_1 + 0x164c) = 0;
      *(undefined4 *)(param_1 + 0x1650) = 0;
      *(undefined4 *)(param_1 + 0x1654) = 0;
      *(undefined4 *)(param_1 + 0x1658) = 0;
      *(undefined4 *)(param_1 + 0x1660) = 0;
      *(undefined4 *)(param_1 + 0x1664) = 0;
      *(undefined4 *)(param_1 + 0x165c) = 0;
      *(undefined4 *)(param_1 + 0x1668) = 0;
      *(undefined4 *)(param_1 + 0x166c) = 0;
      *(undefined4 *)(param_1 + 0x1670) = 0;
      *(undefined4 *)(param_1 + 0x1674) = 0;
      *(undefined4 *)(param_1 + 0x1678) = 0;
      *(undefined4 *)(param_1 + 0x167c) = 0;
      *(undefined4 *)(param_1 + 0x1680) = 0;
      *(undefined4 *)(param_1 + 0x1684) = 0;
      *(undefined4 *)(param_1 + 0x1688) = 0;
      *(undefined4 *)(param_1 + 0x168c) = 0;
    }
    ResetEvent(*(HANDLE *)(param_1 + 0x17c4));
    CloseHandle(*(HANDLE *)(param_1 + 0x17c4));
  }
  return;
}



/**************************************************/

/* Function: FUN_10005470 @ 10005470 */

void __fastcall FUN_10005470(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000fbd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)CANONAPI::vftable;
  param_1[1] = (int)CANONAPI::vftable;
  local_4 = 0;
  FUN_10003d60(param_1);
  if ((HANDLE)param_1[0x5a4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x5a4]);
  }
  local_4 = 0xffffffff;
  FUN_10003370(param_1);
  ExceptionList = local_c;
  return;
}



/**************************************************/

/* Function: FUN_100054f0 @ 100054f0 */

void __thiscall FUN_100054f0(void *this,char *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  CHAR *pCVar6;
  HANDLE pvVar7;
  uint uVar8;
  int iVar9;
  CHAR *pCVar10;
  undefined4 local_1a4;
  DWORD DStack_1a0;
  _OSVERSIONINFOA local_19c;
  CHAR aCStack_108 [12];
  char acStack_fc [248];
  uint local_4;
  
  local_4 = DAT_10015448 ^ (uint)&local_1a4;
  iVar9 = 0;
  local_1a4 = FUN_10003a30((int)this);
  iVar2 = lstrcmpA((LPCSTR)((int)this + 0x248),"SIM");
  if (iVar2 == 0) {
    *param_2 = 1;
  }
  else {
    if ((*(int *)((int)this + 0x16b8) != 0) && (*(code **)((int)this + 0x161c) != (code *)0x0)) {
      iVar9 = (**(code **)((int)this + 0x161c))((int)this + 0x16bc,param_1,param_3);
      local_1a4 = 1;
    }
    *param_2 = iVar9;
    if (iVar9 == 1) {
      local_19c.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_19c);
      if (((local_19c.dwPlatformId == 1) && (local_19c.dwMajorVersion == 4)) &&
         (local_19c.dwMinorVersion == 0x5a)) {
        pcVar3 = (char *)((int)this + 0x16c0);
        iVar2 = -(int)pcVar3;
        do {
          cVar1 = *pcVar3;
          pcVar3[(int)(aCStack_108 + iVar2)] = cVar1;
          pcVar3 = pcVar3 + 1;
          pcVar4 = param_1;
        } while (cVar1 != '\0');
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)param_1;
        pCVar10 = local_19c.szCSDVersion + 0x7f;
        do {
          pcVar3 = pCVar10 + 1;
          pCVar10 = pCVar10 + 1;
        } while (*pcVar3 != '\0');
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)param_1;
          param_1 = param_1 + 4;
          pCVar10 = pCVar10 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pCVar10 = *param_1;
          param_1 = param_1 + 1;
          pCVar10 = pCVar10 + 1;
        }
        pCVar10 = local_19c.szCSDVersion + 0x7f;
        do {
          pCVar6 = pCVar10;
          pCVar10 = pCVar6 + 1;
        } while (pCVar6[1] != '\0');
        *(undefined4 *)(pCVar6 + 1) = s_STIUSDObject_10010b1c._0_4_;
        *(undefined4 *)(pCVar6 + 5) = s_STIUSDObject_10010b1c._4_4_;
        *(undefined4 *)(pCVar6 + 9) = s_STIUSDObject_10010b1c._8_4_;
        pCVar6[0xd] = s_STIUSDObject_10010b1c[0xc];
        pvVar7 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,aCStack_108);
        *(HANDLE *)((int)this + 0x17c4) = pvVar7;
        pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_10005460,
                              this,0,&DStack_1a0);
        *(HANDLE *)((int)this + 0x16b0) = pvVar7;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_1a4);
  return;
}



/**************************************************/

/* Function: FUN_100056a0 @ 100056a0 */

undefined4 __thiscall FUN_100056a0(void *this,undefined4 param_1)

{
  int iVar1;
  HANDLE pvVar2;
  void *local_4;
  
  local_4 = this;
  iVar1 = _strncmp((char *)((int)this + 0x144),"CNBJNPSCAN",10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x16a8) == 0) {
      pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      *(HANDLE *)((int)this + 0x16a8) = pvVar2;
      if (pvVar2 == (HANDLE)0x0) {
        return 0;
      }
    }
    if (*(int *)((int)this + 0x16ac) == 0) {
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_10005320,this,
                            0,(LPDWORD)&local_4);
      *(HANDLE *)((int)this + 0x16ac) = pvVar2;
      if (pvVar2 == (HANDLE)0x0) {
        return 0;
      }
    }
    *(undefined4 *)((int)this + 0x16a4) = param_1;
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10005730 @ 10005730 */

int * __thiscall FUN_10005730(void *this,byte param_1)

{
  FUN_10005470(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10005750 @ 10005750 */

void __cdecl FUN_10005750(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_28;
  char local_24 [4];
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fc0b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_28;
  ExceptionList = &local_c;
  local_24 = (char  [4])s_Global_L100_Mutex_10010c38._0_4_;
  local_20 = (char  [4])s_Global_L100_Mutex_10010c38._4_4_;
  local_1c = (char  [4])s_Global_L100_Mutex_10010c38._8_4_;
  local_18 = (char  [4])s_Global_L100_Mutex_10010c38._12_4_;
  local_14._0_2_ = s_Global_L100_Mutex_10010c38._16_2_;
  local_28 = operator_new(0x17cc);
  local_4 = 0;
  if (local_28 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_28,param_1,local_24,"IX-24135H");
  }
  puVar4[0x11b] = 0x38;
  uVar3 = DAT_10010f0c;
  uVar2 = DAT_10010f08;
  uVar1 = DAT_10010f04;
  puVar4[0x11d] = DAT_10010f00;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_10010f1c;
  uVar2 = DAT_10010f18;
  uVar1 = DAT_10010f14;
  puVar4[0x121] = DAT_10010f10;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_10010f2c;
  uVar2 = DAT_10010f28;
  uVar1 = DAT_10010f24;
  puVar4[0x125] = DAT_10010f20;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_10010f3c;
  uVar2 = DAT_10010f38;
  uVar1 = DAT_10010f34;
  puVar4[0x129] = DAT_10010f30;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  puVar4[0x145] = DAT_10010c1c;
  puVar4[0x146] = DAT_10010c20;
  puVar4[0x147] = DAT_10010c24;
  *(undefined2 *)(puVar4 + 0x148) = DAT_10010c28;
  DAT_10016430 = 0x1904;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_28);
  return;
}



/**************************************************/

/* Function: FUN_10005910 @ 10005910 */

void __cdecl FUN_10005910(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_28;
  char local_24 [4];
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fc4b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_28;
  ExceptionList = &local_c;
  local_24 = (char  [4])s_Global_L200_Mutex_10010c68._0_4_;
  local_20 = (char  [4])s_Global_L200_Mutex_10010c68._4_4_;
  local_1c = (char  [4])s_Global_L200_Mutex_10010c68._8_4_;
  local_18 = (char  [4])s_Global_L200_Mutex_10010c68._12_4_;
  local_14._0_2_ = s_Global_L200_Mutex_10010c68._16_2_;
  local_28 = operator_new(0x17cc);
  local_4 = 0;
  if (local_28 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_28,param_1,local_24,"IX-48075H");
  }
  puVar4[0x11b] = 0x39;
  uVar3 = DAT_10010f5c;
  uVar2 = DAT_10010f58;
  uVar1 = DAT_10010f54;
  puVar4[0x11d] = DAT_10010f50;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_10010f6c;
  uVar2 = DAT_10010f68;
  uVar1 = DAT_10010f64;
  puVar4[0x121] = DAT_10010f60;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_10010f7c;
  uVar2 = DAT_10010f78;
  uVar1 = DAT_10010f74;
  puVar4[0x125] = DAT_10010f70;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_10010f8c;
  uVar2 = DAT_10010f88;
  uVar1 = DAT_10010f84;
  puVar4[0x129] = DAT_10010f80;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  puVar4[0x145] = DAT_10010c4c;
  puVar4[0x146] = DAT_10010c50;
  puVar4[0x147] = DAT_10010c54;
  *(undefined2 *)(puVar4 + 0x148) = DAT_10010c58;
  DAT_10016430 = 0x1905;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_28);
  return;
}



/**************************************************/

/* Function: FUN_10005ad0 @ 10005ad0 */

void __cdecl FUN_10005ad0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fc8b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\5600F series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"IX-48085H");
  }
  puVar4[0x11b] = 0x3a;
  uVar3 = DAT_10010fac;
  uVar2 = DAT_10010fa8;
  uVar1 = DAT_10010fa4;
  puVar4[0x11d] = DAT_10010fa0;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_10010fbc;
  uVar2 = DAT_10010fb8;
  uVar1 = DAT_10010fb4;
  puVar4[0x121] = DAT_10010fb0;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_10010fcc;
  uVar2 = DAT_10010fc8;
  uVar1 = DAT_10010fc4;
  puVar4[0x125] = DAT_10010fc0;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_10010fdc;
  uVar2 = DAT_10010fd8;
  uVar1 = DAT_10010fd4;
  puVar4[0x129] = DAT_10010fd0;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  uVar3 = DAT_10010fec;
  uVar2 = DAT_10010fe8;
  uVar1 = DAT_10010fe4;
  puVar4[0x12d] = DAT_10010fe0;
  puVar4[0x12e] = uVar1;
  puVar4[0x12f] = uVar2;
  puVar4[0x130] = uVar3;
  uVar3 = DAT_10010ffc;
  uVar2 = DAT_10010ff8;
  uVar1 = DAT_10010ff4;
  puVar4[0x131] = DAT_10010ff0;
  puVar4[0x132] = uVar1;
  puVar4[0x133] = uVar2;
  puVar4[0x134] = uVar3;
  uVar3 = DAT_1001100c;
  uVar2 = DAT_10011008;
  uVar1 = DAT_10011004;
  puVar4[0x135] = DAT_10011000;
  puVar4[0x136] = uVar1;
  puVar4[0x137] = uVar2;
  puVar4[0x138] = uVar3;
  puVar4[0x145] = DAT_10010c7c;
  puVar4[0x146] = DAT_10010c80;
  puVar4[0x147] = DAT_10010c84;
  *(undefined2 *)(puVar4 + 0x148) = DAT_10010c88;
  DAT_10016430 = 0x1906;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_10005d00 @ 10005d00 */

void __cdecl FUN_10005d00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fccb;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP240 series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP240 series");
  }
  puVar4[0x11b] = 0x3b;
  uVar3 = DAT_1001102c;
  uVar2 = DAT_10011028;
  uVar1 = DAT_10011024;
  puVar4[0x11d] = DAT_10011020;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  puVar4[0x145] = DAT_10010cb4;
  puVar4[0x146] = DAT_10010cb8;
  puVar4[0x147] = DAT_10010cbc;
  *(undefined1 *)(puVar4 + 0x148) = DAT_10010cc0;
  DAT_10016430 = 0x1732;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_10005e10 @ 10005e10 */

void __cdecl FUN_10005e10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fd0b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP260 series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP260 series");
  }
  puVar4[0x11b] = 0x3c;
  uVar3 = DAT_1001104c;
  uVar2 = DAT_10011048;
  uVar1 = DAT_10011044;
  puVar4[0x11d] = DAT_10011040;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  puVar4[0x145] = DAT_10010cf0;
  puVar4[0x146] = DAT_10010cf4;
  puVar4[0x147] = DAT_10010cf8;
  *(undefined1 *)(puVar4 + 0x148) = DAT_10010cfc;
  DAT_10016430 = 0x1733;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_10005f20 @ 10005f20 */

void __cdecl FUN_10005f20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fd4b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP480 series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP480 series");
  }
  puVar4[0x11b] = 0x3d;
  uVar3 = DAT_1001106c;
  uVar2 = DAT_10011068;
  uVar1 = DAT_10011064;
  puVar4[0x11d] = DAT_10011060;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  puVar4[0x145] = DAT_10010d2c;
  puVar4[0x146] = DAT_10010d30;
  puVar4[0x147] = DAT_10010d34;
  *(undefined1 *)(puVar4 + 0x148) = DAT_10010d38;
  DAT_10016430 = 0x1731;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_10006030 @ 10006030 */

void __cdecl FUN_10006030(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fd8b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP540 series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP540 series");
  }
  puVar4[0x11b] = 0x3e;
  uVar3 = DAT_1001108c;
  uVar2 = DAT_10011088;
  uVar1 = DAT_10011084;
  puVar4[0x11d] = DAT_10011080;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_1001109c;
  uVar2 = DAT_10011098;
  uVar1 = DAT_10011094;
  puVar4[0x121] = DAT_10011090;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_100110ac;
  uVar2 = DAT_100110a8;
  uVar1 = DAT_100110a4;
  puVar4[0x125] = DAT_100110a0;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_100110bc;
  uVar2 = DAT_100110b8;
  uVar1 = DAT_100110b4;
  puVar4[0x129] = DAT_100110b0;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  puVar4[0x145] = DAT_10010d68;
  puVar4[0x146] = DAT_10010d6c;
  puVar4[0x147] = DAT_10010d70;
  *(undefined1 *)(puVar4 + 0x148) = DAT_10010d74;
  DAT_10016430 = 0x1730;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_100061d0 @ 100061d0 */

void __cdecl FUN_100061d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fdcb;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP620 series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP620 series");
  }
  puVar4[0x11b] = 0x3f;
  uVar3 = DAT_100110dc;
  uVar2 = DAT_100110d8;
  uVar1 = DAT_100110d4;
  puVar4[0x11d] = DAT_100110d0;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_100110ec;
  uVar2 = DAT_100110e8;
  uVar1 = DAT_100110e4;
  puVar4[0x121] = DAT_100110e0;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_100110fc;
  uVar2 = DAT_100110f8;
  uVar1 = DAT_100110f4;
  puVar4[0x125] = DAT_100110f0;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_1001110c;
  uVar2 = DAT_10011108;
  uVar1 = DAT_10011104;
  puVar4[0x129] = DAT_10011100;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  puVar4[0x145] = DAT_10010da4;
  puVar4[0x146] = DAT_10010da8;
  puVar4[0x147] = DAT_10010dac;
  *(undefined1 *)(puVar4 + 0x148) = DAT_10010db0;
  DAT_10016430 = 0x172f;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_10006370 @ 10006370 */

void __cdecl FUN_10006370(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [2];
  CHAR aCStack_2a [26];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fe0b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP620N series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  pCVar7[2] = pcVar6[2];
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP620N series");
  }
  puVar4[0x11b] = 0x40;
  uVar3 = DAT_1001112c;
  uVar2 = DAT_10011128;
  uVar1 = DAT_10011124;
  puVar4[0x11d] = DAT_10011120;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_1001113c;
  uVar2 = DAT_10011138;
  uVar1 = DAT_10011134;
  puVar4[0x121] = DAT_10011130;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_1001114c;
  uVar2 = DAT_10011148;
  uVar1 = DAT_10011144;
  puVar4[0x125] = DAT_10011140;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_1001115c;
  uVar2 = DAT_10011158;
  uVar1 = DAT_10011154;
  puVar4[0x129] = DAT_10011150;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  puVar4[0x145] = DAT_10010de0;
  puVar4[0x146] = DAT_10010de4;
  puVar4[0x147] = DAT_10010de8;
  *(undefined2 *)(puVar4 + 0x148) = DAT_10010dec;
  DAT_10016430 = 0x172f;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_10006510 @ 10006510 */

void __cdecl FUN_10006510(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fe4b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP630 series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP630 series");
  }
  puVar4[0x11b] = 0x41;
  uVar3 = DAT_1001117c;
  uVar2 = DAT_10011178;
  uVar1 = DAT_10011174;
  puVar4[0x11d] = DAT_10011170;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_1001118c;
  uVar2 = DAT_10011188;
  uVar1 = DAT_10011184;
  puVar4[0x121] = DAT_10011180;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_1001119c;
  uVar2 = DAT_10011198;
  uVar1 = DAT_10011194;
  puVar4[0x125] = DAT_10011190;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_100111ac;
  uVar2 = DAT_100111a8;
  uVar1 = DAT_100111a4;
  puVar4[0x129] = DAT_100111a0;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  puVar4[0x145] = DAT_10010e1c;
  puVar4[0x146] = DAT_10010e20;
  puVar4[0x147] = DAT_10010e24;
  *(undefined1 *)(puVar4 + 0x148) = DAT_10010e28;
  DAT_10016430 = 0x172e;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_100066b0 @ 100066b0 */

void __cdecl FUN_100066b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fe8b;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP980 series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP980 series");
  }
  puVar4[0x11b] = 0x42;
  uVar3 = DAT_100111cc;
  uVar2 = DAT_100111c8;
  uVar1 = DAT_100111c4;
  puVar4[0x11d] = DAT_100111c0;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_100111dc;
  uVar2 = DAT_100111d8;
  uVar1 = DAT_100111d4;
  puVar4[0x121] = DAT_100111d0;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_100111ec;
  uVar2 = DAT_100111e8;
  uVar1 = DAT_100111e4;
  puVar4[0x125] = DAT_100111e0;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_100111fc;
  uVar2 = DAT_100111f8;
  uVar1 = DAT_100111f4;
  puVar4[0x129] = DAT_100111f0;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  puVar4[0x145] = DAT_10010e58;
  puVar4[0x146] = DAT_10010e5c;
  puVar4[0x147] = DAT_10010e60;
  *(undefined1 *)(puVar4 + 0x148) = DAT_10010e64;
  DAT_10016430 = 0x172d;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: FUN_10006850 @ 10006850 */

void __cdecl FUN_10006850(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  void *local_30;
  CHAR local_2c [2];
  CHAR aCStack_2a [26];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000fecb;
  local_c = ExceptionList;
  local_10 = DAT_10015448 ^ (uint)&local_30;
  ExceptionList = &local_c;
  pcVar6 = "Global\\MP980N series Mutex";
  pCVar7 = local_2c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined2 *)pCVar7 = *(undefined2 *)pcVar6;
  pCVar7[2] = pcVar6[2];
  local_30 = operator_new(0x17cc);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_10003580(local_30,param_1,local_2c,"MP980N series");
  }
  puVar4[0x11b] = 0x43;
  uVar3 = DAT_1001121c;
  uVar2 = DAT_10011218;
  uVar1 = DAT_10011214;
  puVar4[0x11d] = DAT_10011210;
  puVar4[0x11e] = uVar1;
  puVar4[0x11f] = uVar2;
  puVar4[0x120] = uVar3;
  uVar3 = DAT_1001122c;
  uVar2 = DAT_10011228;
  uVar1 = DAT_10011224;
  puVar4[0x121] = DAT_10011220;
  puVar4[0x122] = uVar1;
  puVar4[0x123] = uVar2;
  puVar4[0x124] = uVar3;
  uVar3 = DAT_1001123c;
  uVar2 = DAT_10011238;
  uVar1 = DAT_10011234;
  puVar4[0x125] = DAT_10011230;
  puVar4[0x126] = uVar1;
  puVar4[0x127] = uVar2;
  puVar4[0x128] = uVar3;
  uVar3 = DAT_1001124c;
  uVar2 = DAT_10011248;
  uVar1 = DAT_10011244;
  puVar4[0x129] = DAT_10011240;
  puVar4[0x12a] = uVar1;
  puVar4[299] = uVar2;
  puVar4[300] = uVar3;
  puVar4[0x145] = DAT_10010e94;
  puVar4[0x146] = DAT_10010e98;
  puVar4[0x147] = DAT_10010e9c;
  *(undefined2 *)(puVar4 + 0x148) = DAT_10010ea0;
  DAT_10016430 = 0x172d;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/**************************************************/

/* Function: DllMain @ 100069f0 */

undefined4 DllMain(HMODULE param_1,int param_2)

{
                    /* 0x69f0  5  DllMain */
  if (param_2 == 1) {
    DAT_1001644c = param_1;
    DisableThreadLibraryCalls(param_1);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_10016434,4000);
  }
  return 1;
}



/**************************************************/

/* Function: DllCanUnloadNow @ 10006a30 */

HRESULT DllCanUnloadNow(void)

{
                    /* 0x6a30  3  DllCanUnloadNow */
  return (uint)(DAT_10016454 != 0);
}



/**************************************************/

/* Function: FUN_10006a40 @ 10006a40 */

undefined4 FUN_10006a40(int *param_1,byte *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  *param_3 = 0;
  bVar1 = FID_conflict_operator__(param_2,&DAT_10011494);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FID_conflict_operator__(param_2,&DAT_10011484);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      return 0x80004002;
    }
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}



/**************************************************/

/* Function: FUN_10006aa0 @ 10006aa0 */

undefined4 FUN_10006aa0(int param_1)

{
  InterlockedIncrement(&DAT_10016454);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return *(undefined4 *)(param_1 + 4);
}



/**************************************************/

/* Function: FUN_10006ac0 @ 10006ac0 */

undefined4 FUN_10006ac0(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar2 = FID_conflict_operator__(param_3,&DAT_10010ed0);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    bVar2 = FID_conflict_operator__(param_3,&DAT_10011494);
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      return 0x80004002;
    }
  }
  if (param_2 != 0) {
    bVar2 = FID_conflict_operator__(param_3,&DAT_10011494);
    if (CONCAT31(extraout_var_01,bVar2) == 0) {
      return 0x80040110;
    }
  }
  iVar3 = DAT_10015278;
  iVar5 = 0;
  if (0 < DAT_10015278) {
    do {
      bVar2 = FID_conflict_operator__((byte *)(param_1 + 8),(&PTR_DAT_10015218)[iVar5 * 2]);
      if (CONCAT31(extraout_var_02,bVar2) != 0) {
        iVar3 = (*(code *)(&PTR_FUN_1001521c)[iVar5 * 2])(param_2);
        if (iVar3 == 0) {
          return 0x8007000e;
        }
        piVar1 = (int *)(iVar3 + 4);
        uVar4 = (**(code **)*piVar1)(piVar1,param_3,param_4);
        (**(code **)(*piVar1 + 8))(piVar1);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0x80004005;
}



/**************************************************/

/* Function: FUN_10006b14 @ 10006b14 */

undefined4 FUN_10006b14(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = DAT_10015278;
  iVar5 = 0;
  if (0 < DAT_10015278) {
    do {
      bVar2 = FID_conflict_operator__((byte *)(param_2 + 8),(&PTR_DAT_10015218)[iVar5 * 2]);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        iVar3 = (*(code *)(&PTR_FUN_1001521c)[iVar5 * 2])(param_3);
        if (iVar3 == 0) {
          return 0x8007000e;
        }
        piVar1 = (int *)(iVar3 + 4);
        uVar4 = (**(code **)*piVar1)(piVar1);
        (**(code **)(*piVar1 + 8))(piVar1);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0x80004005;
}



/**************************************************/

/* Function: FUN_10006ba0 @ 10006ba0 */

undefined4 FUN_10006ba0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    InterlockedIncrement(&DAT_10016454);
    return 0;
  }
  InterlockedDecrement(&DAT_10016454);
  return 0;
}



/**************************************************/

/* Function: FUN_10006bd0 @ 10006bd0 */

undefined4 FUN_10006bd0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  InterlockedDecrement(&DAT_10016454);
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  uVar2 = param_1[1];
  if (*piVar1 == 0) {
    *param_1 = CanonUSDClassFactory::vftable;
    _free(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: DllGetClassObject @ 10006c00 */

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 *puVar6;
  int iVar7;
  
                    /* 0x6c00  4  DllGetClassObject */
  if (ppv == (LPVOID *)0x0) {
    return -0x7fffbffb;
  }
  bVar5 = FID_conflict_operator__((byte *)riid,&DAT_10011494);
  if ((CONCAT31(extraout_var,bVar5) == 0) &&
     (bVar5 = FID_conflict_operator__((byte *)riid,&DAT_10011484),
     CONCAT31(extraout_var_00,bVar5) == 0)) {
    return -0x7fffbffe;
  }
  iVar4 = DAT_10015278;
  iVar7 = 0;
  if (0 < DAT_10015278) {
    do {
      bVar5 = FID_conflict_operator__((byte *)rclsid,(&PTR_DAT_10015218)[iVar7 * 2]);
      if (CONCAT31(extraout_var_01,bVar5) != 0) {
        puVar6 = operator_new(0x18);
        if (puVar6 == (undefined4 *)0x0) {
          return -0x7fffbffb;
        }
        uVar1 = *(undefined4 *)rclsid->Data4;
        uVar2 = *(undefined4 *)&rclsid->Data2;
        uVar3 = *(undefined4 *)(rclsid->Data4 + 4);
        puVar6[2] = rclsid->Data1;
        puVar6[3] = uVar2;
        puVar6[4] = uVar1;
        puVar6[5] = uVar3;
        *puVar6 = CanonUSDClassFactory::vftable;
        puVar6[1] = 0;
        *ppv = puVar6;
        return 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  return -0x7fffbffb;
}



/**************************************************/

/* Function: FUN_10006cc0 @ 10006cc0 */

undefined4 FUN_10006cc0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  return 0;
}



/**************************************************/

/* Function: FUN_10006cd0 @ 10006cd0 */

undefined4 FUN_10006cd0(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10006ce0 @ 10006ce0 */

undefined4 FUN_10006ce0(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10006cf0 @ 10006cf0 */

undefined4 FUN_10006cf0(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10006d00 @ 10006d00 */

void FUN_10006d00(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10006d0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement((LONG *)(param_1 + 4));
  return;
}



/**************************************************/

/* Function: FUN_10006d20 @ 10006d20 */

uint FUN_10006d20(int param_1,LPWSTR param_2,int param_3)

{
  int iVar1;
  int iVar2;
  LPCSTR lpString;
  
  lpString = (LPCSTR)(param_1 + 8);
  iVar1 = lstrlenA(lpString);
  if (param_3 <= iVar1) {
    return 0x8007000e;
  }
  iVar1 = MultiByteToWideChar(0,0,lpString,-1,param_2,param_3);
  iVar2 = lstrlenA(lpString);
  return -(uint)(iVar1 != iVar2 + 1) & 0x80004005;
}



/**************************************************/

/* Function: DeleteUSD @ 10006d80 */

void __cdecl DeleteUSD(int *param_1)

{
                    /* 0x6d80  2  DeleteUSD */
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x4c))(1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10006da0 @ 10006da0 */

LONG FUN_10006da0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = NonStiDeviceControl::vftable;
    _free(param_1);
  }
  return LVar1;
}



/**************************************************/

/* Function: CreateUSD @ 10006dd0 */

int * __cdecl CreateUSD(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* 0x6dd0  1  CreateUSD */
  if (param_1 == (LPCSTR)0x0) {
    return (int *)0x0;
  }
  iVar4 = 0;
  if (0 < DAT_10015384) {
    do {
      iVar1 = lstrcmpA(param_1,(&PTR_s_IX_24135H_10015388)[iVar4 * 2]);
      if (iVar1 == 0) {
        piVar2 = (int *)(*(code *)(&PTR_FUN_1001538c)[iVar4 * 2])(0);
        if (piVar2 != (int *)0x0) {
          puVar3 = operator_new(0x10c);
          if (puVar3 == (undefined4 *)0x0) {
            (**(code **)(*piVar2 + 0x4c))(1);
            return (int *)0x0;
          }
          *puVar3 = NonStiDeviceControl::vftable;
          puVar3[1] = 0;
          lstrcpyA((LPSTR)(puVar3 + 2),param_2);
          iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,puVar3,0,0);
          if (iVar4 < 0) {
            (**(code **)(*piVar2 + 0x4c))(1);
            piVar2 = (int *)0x0;
          }
        }
        return piVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10015384);
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: ~type_info @ 10006e88 */

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

/* Function: `scalar_deleting_destructor' @ 10006e96 */

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

/* Function: operator== @ 10006eb2 */

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

/* Function: __purecall @ 10006ecd */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10008505(DAT_100167e4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_10008249(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/**************************************************/

/* Function: _strncmp @ 10006ef7 */

/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (pbVar1 = (byte *)_Str1, pbVar3 = (byte *)_Str2, _MaxCount != 4)) {
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_10006fb1;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_10006fb1;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_10006fb1;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_10006fb1;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_10006fb1:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: _LocaleUpdate @ 10006fb5 */

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
    if ((*(undefined **)this != PTR_DAT_10015b60) && ((p_Var2->_ownlocale & DAT_10015a7c) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10015980) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10015a7c) == 0)) {
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

/* Function: strtoxl @ 10007037 */

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
    pDVar3 = FUN_1000962f();
    *pDVar3 = 0x16;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_100070ee:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_100070ee;
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
      goto LAB_10007154;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_10007154;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_10007154;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_10007154:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_100071ae:
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
          pDVar3 = FUN_1000962f();
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
    if ((uint)param_4 <= uVar6) goto LAB_100071ae;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_100071ae;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: _strtol @ 10007262 */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10016804 == 0) {
    ppuVar2 = &PTR_DAT_10015b68;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: _strtoul @ 1000728b */

/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10016804 == 0) {
    ppuVar2 = &PTR_DAT_10015b68;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}



/**************************************************/

/* Function: _JumpToContinuation @ 100072b5 */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x100072de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/**************************************************/

/* Function: FID_conflict:_CallMemberFunction1 @ 100072e5 */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100072ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _UnwindNestedFrames @ 100072ec */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10007315,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/**************************************************/

/* Function: FID_conflict:___CxxFrameHandler3 @ 1000733e */

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

/* Function: _CallSETranslator @ 100073a4 */

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
    *(undefined4 *)param_2 = 0x1000744d;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_10015448 ^ (uint)&local_2c;
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

/* Function: TranslatorGuardHandler @ 10007479 */

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
                    /* WARNING: Could not recover jumptable at 0x1000750e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/**************************************************/

/* Function: _GetRangeOfTrysToCheck @ 10007516 */

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

/* Function: __CreateFrameInfo @ 10007589 */

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

/* Function: __IsExceptionObjectToBeDestroyed @ 100075b1 */

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

/* Function: __FindAndUnlinkFrame @ 100075d2 */

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

/* Function: _CallCatchBlock2 @ 1000761e */

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
  
  local_14 = DAT_10015448 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_10007374;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/**************************************************/

/* Function: __security_check_cookie @ 1000767c */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_10015448) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/**************************************************/

/* Function: _memset @ 10007690 */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_100180b8 != 0)) {
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

/* Function: _free @ 1000770a */

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
    if (DAT_100180b0 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000a926(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10007765();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10016b54,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1000962f();
      DVar4 = GetLastError();
      DVar4 = FUN_100095f4(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: _free @ 1000770f */

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
    if (DAT_100180b0 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000a926(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10007765();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10016b54,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1000962f();
      DVar4 = GetLastError();
      DVar4 = FUN_100095f4(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_10007765 @ 10007765 */

void FUN_10007765(void)

{
  FUN_1000a7b1(4);
  return;
}



/**************************************************/

/* Function: _V6_HeapAlloc @ 1000779d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_100180a0) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_100077e3();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_100077e3 @ 100077e3 */

void FUN_100077e3(void)

{
  FUN_1000a7b1(4);
  return;
}



/**************************************************/

/* Function: _malloc @ 100077ec */

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
    pDVar3 = FUN_1000962f();
    *pDVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_10016b54 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_10008249(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_100180b0 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_1000785d:
      piVar1 = HeapAlloc(DAT_10016b54,0,dwBytes);
    }
    else if ((DAT_100180b0 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_1000785d;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_10016cf8 == 0) {
      pDVar3 = FUN_1000962f();
      *pDVar3 = 0xc;
      goto LAB_1000788b;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_1000788b:
      pDVar3 = FUN_1000962f();
      *pDVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: _memcpy @ 100078b0 */

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
          goto switchD_10007a93_caseD_2;
        case 3:
          goto switchD_10007a93_caseD_3;
        }
        goto switchD_10007a93_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10007a93_caseD_0;
      case 1:
        goto switchD_10007a93_caseD_1;
      case 2:
        goto switchD_10007a93_caseD_2;
      case 3:
        goto switchD_10007a93_caseD_3;
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
              goto switchD_10007a93_caseD_2;
            case 3:
              goto switchD_10007a93_caseD_3;
            }
            goto switchD_10007a93_caseD_1;
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
              goto switchD_10007a93_caseD_2;
            case 3:
              goto switchD_10007a93_caseD_3;
            }
            goto switchD_10007a93_caseD_1;
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
              goto switchD_10007a93_caseD_2;
            case 3:
              goto switchD_10007a93_caseD_3;
            }
            goto switchD_10007a93_caseD_1;
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
switchD_10007a93_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10007a93_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10007a93_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10007a93_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_100180b8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000790c_caseD_2;
      case 3:
        goto switchD_1000790c_caseD_3;
      }
      goto switchD_1000790c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000790c_caseD_0;
    case 1:
      goto switchD_1000790c_caseD_1;
    case 2:
      goto switchD_1000790c_caseD_2;
    case 3:
      goto switchD_1000790c_caseD_3;
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
            goto switchD_1000790c_caseD_2;
          case 3:
            goto switchD_1000790c_caseD_3;
          }
          goto switchD_1000790c_caseD_1;
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
            goto switchD_1000790c_caseD_2;
          case 3:
            goto switchD_1000790c_caseD_3;
          }
          goto switchD_1000790c_caseD_1;
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
            goto switchD_1000790c_caseD_2;
          case 3:
            goto switchD_1000790c_caseD_3;
          }
          goto switchD_1000790c_caseD_1;
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
switchD_1000790c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000790c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000790c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000790c_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: bad_alloc @ 10007c15 */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Library: Visual Studio 2005 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_10015450,1);
  *(undefined ***)this = vftable;
  return this;
}



/**************************************************/

/* Function: FUN_10007c39 @ 10007c39 */

exception * __thiscall FUN_10007c39(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: operator_new @ 10007c73 */

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
  if ((_DAT_10016494 & 1) == 0) {
    _DAT_10016494 = _DAT_10016494 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_10016488);
    _atexit((_func_4879 *)&LAB_1000ff0e);
  }
  std::exception::exception((exception *)local_10,(exception *)&DAT_10016488);
  local_10[0] = std::bad_alloc::vftable;
  __CxxThrowException_8(local_10,&DAT_1001363c);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



/**************************************************/

/* Function: _strcat_s @ 10007cdd */

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
        pDVar2 = FUN_1000962f();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_10007cfc;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1000962f();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_10007cfc:
  FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: __CRT_INIT@12 @ 10007d4e */

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
        _DAT_10016cb8 = DVar2 * 0x100 + DVar3;
        DAT_10016cb0 = DVar1;
        _DAT_10016cb4 = uVar8;
        DAT_10016cbc = DVar2;
        _DAT_10016cc0 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_100180bc = GetCommandLineA();
            DAT_1001649c = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_10016498 = DAT_10016498 + 1;
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
    if (0 < DAT_10016498) {
      DAT_10016498 = DAT_10016498 + -1;
      if (DAT_10016cec == 0) {
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
    FUN_1000857c();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_10015550;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_10008505(DAT_100167d4);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_100085eb((int)_Memory,0);
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

/* Function: ___DllMainCRTStartup @ 10007f27 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,HMODULE param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_10016498 == 0)) {
LAB_10008015:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_100114c8 != (undefined *)0x0) {
        local_20 = (*(code *)PTR_100114c8)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_10008015;
    }
    local_20 = DllMain(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      DllMain(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (PTR_100114c8 != (undefined *)0x0) {
        (*(code *)PTR_100114c8)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (PTR_100114c8 != (undefined *)0x0)) {
        local_20 = (*(code *)PTR_100114c8)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/**************************************************/

/* Function: entry @ 1000801d */

void entry(HMODULE param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/**************************************************/

/* Function: _Type_info_dtor @ 1000803e */

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
  _Memory = DAT_100164b0;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_100164ac;
    do {
      piVar2 = piVar1;
      if (DAT_100164b0 == (int *)0x0) goto LAB_10008082;
      piVar1 = DAT_100164b0;
    } while (*DAT_100164b0 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_100164b0[1];
    _free(_Memory);
LAB_10008082:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_100080a5();
  return;
}



/**************************************************/

/* Function: FUN_100080a5 @ 100080a5 */

void FUN_100080a5(void)

{
  FUN_1000a7b1(0xe);
  return;
}



/**************************************************/

/* Function: _strcmp @ 100080b0 */

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
      if (bVar4 != *_Str2) goto LAB_100080f4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100080c0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100080f4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100080f4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100080c0:
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
LAB_100080f4:
  return (uint)bVar5 * -2 + 1;
}



/**************************************************/

/* Function: _abort @ 10008138 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_10015490 & 1) != 0) {
    FUN_10008249(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_10015490 & 2) != 0) {
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

/* Function: __set_abort_behavior @ 1000822b */

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_10015490;
  DAT_10015490 = ~_Mask & DAT_10015490 | _Flags & _Mask;
  return uVar1;
}



/**************************************************/

/* Function: FUN_10008249 @ 10008249 */

void __cdecl FUN_10008249(int param_1)

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
    if (param_1 == (&DAT_10015498)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_100164a8 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1001549c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_100164b8,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_100165d5 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_100164d1,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_100164d1,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_100164d1);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_100164d1);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x10016496),
                           (int)&DAT_100167cc - (int)(sVar5 + 0x10016496),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_100164b8,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_100164b8,0x314,*(char **)(uVar6 * 8 + 0x1001549c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1000c9d5(&DAT_100164b8,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 100083e9 */

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
    if (DAT_100164a8 != 1) {
      return;
    }
  }
  FUN_10008249(0xfc);
  FUN_10008249(0xff);
  return;
}



/**************************************************/

/* Function: FUN_10008422 @ 10008422 */

undefined4 FUN_10008422(void)

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

/* Function: FUN_1000848e @ 1000848e */

int __cdecl FUN_1000848e(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10015554);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10015550 != -1)) {
    iVar3 = DAT_10015550;
    pcVar2 = TlsGetValue(DAT_10015554);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_100084e8;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10008422();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_100084e8:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 100084fc */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_1000848e(0);
  return;
}



/**************************************************/

/* Function: FUN_10008505 @ 10008505 */

int __cdecl FUN_10008505(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10015554);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10015550 != -1)) {
    iVar3 = DAT_10015550;
    pcVar2 = TlsGetValue(DAT_10015554);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_1000855f;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10008422();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_1000855f:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_1000857c @ 1000857c */

LPVOID FUN_1000857c(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_10015554);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_10008505(DAT_100167d0);
    TlsSetValue(DAT_10015554,lpTlsValue);
  }
  return lpTlsValue;
}



/**************************************************/

/* Function: __mtterm @ 100085ae */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_10015550 != -1) {
    iVar2 = DAT_10015550;
    pcVar1 = (code *)FUN_10008505(DAT_100167d8);
    (*pcVar1)(iVar2);
    DAT_10015550 = -1;
  }
  if (DAT_10015554 != 0xffffffff) {
    TlsFree(DAT_10015554);
    DAT_10015554 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: FUN_100085eb @ 100085eb */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_100085eb(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10015e80;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_10008422();
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
  *(undefined **)(param_1 + 0x68) = &DAT_10015558;
  InterlockedIncrement((LONG *)&DAT_10015558);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10015b60;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_100086a1();
  return;
}



/**************************************************/

/* Function: FUN_100086a1 @ 100086a1 */

void FUN_100086a1(void)

{
  FUN_1000a7b1(0xc);
  return;
}



/**************************************************/

/* Function: FUN_100086aa @ 100086aa */

DWORD * FUN_100086aa(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_10015550;
  pcVar1 = FUN_1000857c();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_10015550;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_10008505(DAT_100167d4);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_100085eb((int)_Memory,0);
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

/* Function: __getptd @ 10008721 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_100086aa();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: __freefls@4 @ 10008739 */

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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10015e80) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10015558)) {
        _free(pLVar1);
      }
    }
    FUN_10008845();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10015b60) && (pLVar1 != (LONG *)&DAT_10015a88)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_10008851();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10008845 @ 10008845 */

void FUN_10008845(void)

{
  FUN_1000a7b1(0xd);
  return;
}



/**************************************************/

/* Function: FUN_10008851 @ 10008851 */

void FUN_10008851(void)

{
  FUN_1000a7b1(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 1000885a */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_10015550 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_10015554), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10015550;
      pcVar2 = TlsGetValue(DAT_10015554);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_10015550;
    pcVar2 = (code *)FUN_10008505(DAT_100167d4);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_10015554 != 0xffffffff) {
    TlsSetValue(DAT_10015554,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: __mtinit @ 100088c3 */

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
  DAT_100167cc = GetProcAddress(hModule,"FlsAlloc");
  DAT_100167d0 = GetProcAddress(hModule,"FlsGetValue");
  DAT_100167d4 = GetProcAddress(hModule,"FlsSetValue");
  DAT_100167d8 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_100167cc == (FARPROC)0x0) || (DAT_100167d0 == (FARPROC)0x0)) ||
      (DAT_100167d4 == (FARPROC)0x0)) || (DAT_100167d8 == (FARPROC)0x0)) {
    DAT_100167d0 = TlsGetValue_exref;
    DAT_100167cc = (FARPROC)&LAB_10008573;
    DAT_100167d4 = TlsSetValue_exref;
    DAT_100167d8 = TlsFree_exref;
  }
  DAT_10015554 = TlsAlloc();
  if ((DAT_10015554 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10015554,DAT_100167d0), BVar1 != 0))
  {
    __init_pointers();
    DAT_100167cc = (FARPROC)FUN_1000848e((int)DAT_100167cc);
    DAT_100167d0 = (FARPROC)FUN_1000848e((int)DAT_100167d0);
    DAT_100167d4 = (FARPROC)FUN_1000848e((int)DAT_100167d4);
    DAT_100167d8 = (FARPROC)FUN_1000848e((int)DAT_100167d8);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_10008505((int)DAT_100167cc);
      DAT_10015550 = (*pcVar3)(pcVar6);
      if ((DAT_10015550 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_10015550;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_10008505((int)DAT_100167d4);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_100085eb((int)pDVar4,0);
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

/* Function: FUN_10008a47 @ 10008a47 */

void __cdecl FUN_10008a47(undefined4 param_1)

{
  DAT_100167e4 = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10008a51 @ 10008a51 */

undefined4 FUN_10008a51(void)

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

/* Function: setSBCS @ 10008a80 */

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
    *puVar1 = puVar1[(int)&DAT_10015558 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10015558 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: setSBUpLow @ 10008ad5 */

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
  
  local_8 = DAT_10015448 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10008c3c:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10008c3c;
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
          goto LAB_10008be3;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_10008be3:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 10008c5f */

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
  if (((p_Var1->_ownlocale & DAT_10015a7c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10015980) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10015558)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10015980;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10015980;
      InterlockedIncrement((LONG *)PTR_DAT_10015980);
    }
    FUN_10008cfa();
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

/* Function: FUN_10008cfa @ 10008cfa */

void FUN_10008cfa(void)

{
  FUN_1000a7b1(0xd);
  return;
}



/**************************************************/

/* Function: getSystemCP @ 10008d03 */

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
  DAT_100167e8 = 0;
  if (unaff_ESI == -2) {
    DAT_100167e8 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_100167e8 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_100167e8 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_100167e8 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: FUN_10008d7d @ 10008d7d */

void __cdecl FUN_10008d7d(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_10015448 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_10008db9:
    if (*(uint *)((int)&DAT_10015988 + uVar5) != uVar4) goto code_r0x10008dc5;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10015998 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x10015984);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_10008a51();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1001598c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_10008eea;
  }
LAB_10008da6:
  setSBCS(unaff_EDI);
LAB_10008f47:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x10008dc5:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10008dd2;
  goto LAB_10008db9;
code_r0x10008dd2:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_10008f47;
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
      uVar9 = FUN_10008a51();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_10008eea:
    setSBUpLow(unaff_EDI);
    goto LAB_10008f47;
  }
  if (DAT_100167e8 == 0) goto LAB_10008f47;
  goto LAB_10008da6;
}



/**************************************************/

/* Function: __setmbcp @ 10008f56 */

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
      local_24 = FUN_10008d7d(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10015558)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10015a7c & 1) == 0)) {
          __lock(0xd);
          _DAT_100167f8 = ptVar3->mbcodepage;
          _DAT_100167fc = ptVar3->ismbcodepage;
          _DAT_10016800 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_100167ec)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10015778)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10015880)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10015980);
          if ((LVar4 == 0) && (PTR_DAT_10015980 != &DAT_10015558)) {
            _free(PTR_DAT_10015980);
          }
          PTR_DAT_10015980 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_100090b7();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10015558) {
          _free(ptVar3);
        }
        pDVar5 = FUN_1000962f();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_100090b7 @ 100090b7 */

void FUN_100090b7(void)

{
  FUN_1000a7b1(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 100090f0 */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_1001808c == 0) {
    __setmbcp(-3);
    DAT_1001808c = 1;
  }
  return 0;
}



/**************************************************/

/* Function: ___freetlocinfo @ 1000910e */

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10015fd8)) &&
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
  if ((ppuVar2 != &PTR_DAT_10015f18) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10015a80) &&
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

/* Function: ___addlocaleref @ 1000924e */

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
    if (((undefined *)pLVar1[-2] != &DAT_10015a80) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: ___removelocaleref @ 100092d4 */

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
      if (((undefined *)pLVar1[-2] != &DAT_10015a80) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: __updatetlocinfoEx_nolock @ 10009360 */

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
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10015a88)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 1000939e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10015a7c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_10009408();
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

/* Function: FUN_10009408 @ 10009408 */

void FUN_10009408(void)

{
  FUN_1000a7b1(0xc);
  return;
}



/**************************************************/

/* Function: __isctype_l @ 10009414 */

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

/* Function: FUN_100094ca @ 100094ca */

void __cdecl FUN_100094ca(undefined4 param_1)

{
  DAT_10016828 = param_1;
  return;
}



/**************************************************/

/* Function: __invoke_watson @ 100094d4 */

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
  
  iVar1 = DAT_10015448;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1000d5b4();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/**************************************************/

/* Function: FUN_100095d0 @ 100095d0 */

void __cdecl
FUN_100095d0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_10008505(DAT_10016828);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100095e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1000d5b4();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/**************************************************/

/* Function: FUN_100095f4 @ 100095f4 */

int __cdecl FUN_100095f4(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10015b70)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x10015b74);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_1000962f @ 1000962f */

DWORD * FUN_1000962f(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100086aa();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10015cd8;
  }
  return pDVar1 + 2;
}



/**************************************************/

/* Function: FUN_10009642 @ 10009642 */

DWORD * FUN_10009642(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100086aa();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10015cdc;
  }
  return pDVar1 + 3;
}



/**************************************************/

/* Function: FUN_10009655 @ 10009655 */

void __cdecl FUN_10009655(DWORD param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  pDVar1 = FUN_10009642();
  *pDVar1 = param_1;
  DVar2 = FUN_100095f4(param_1);
  pDVar1 = FUN_1000962f();
  *pDVar1 = DVar2;
  return;
}



/**************************************************/

/* Function: FUN_1000967e @ 1000967e */

exception * __thiscall FUN_1000967e(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: ___TypeMatch @ 100096a0 */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100096f6:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100096d4:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100096f6;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100096d4;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: FUN_100096fc @ 100096fc */

undefined4 __cdecl FUN_100096fc(undefined4 *param_1)

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

/* Function: ___FrameUnwindToState @ 10009740 */

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
  FUN_10009806();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/**************************************************/

/* Function: FUN_10009806 @ 10009806 */

void FUN_10009806(void)

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

/* Function: FUN_10009821 @ 10009821 */

undefined4 FUN_10009821(void)

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

/* Function: ___DestructExceptionObject @ 10009866 */

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

/* Function: ___AdjustPointer @ 100098ba */

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

/* Function: IsInExceptionSpec @ 100098df */

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

/* Function: CallUnexpected @ 10009958 */

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

/* Function: Catch_All@10009989 @ 10009989 */

void Catch_All_10009989(void)

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

/* Function: CallCatchBlock @ 100099a1 */

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
  
  local_8 = &DAT_10013818;
  uStack_c = 0x100099ad;
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
  FUN_10009ac7();
  return local_20;
}



/**************************************************/

/* Function: FUN_10009ac7 @ 10009ac7 */

void FUN_10009ac7(void)

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

/* Function: ___BuildCatchObjectHelper @ 10009b3d */

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
        goto LAB_10009bc2;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_10009bc2:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/**************************************************/

/* Function: ___BuildCatchObject @ 10009cbc */

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

/* Function: CatchIt @ 10009d4d */

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

/* Function: FindHandlerForForeignException @ 10009db9 */

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

/* Function: FindHandler @ 10009eab */

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
                param_1 = (EHExceptionRecord *)s_bad_exception_10011b84;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                in_stack_ffffffd0 = std::bad_exception::vftable;
                __CxxThrowException_8(&stack0xffffffd0,&DAT_1001387c);
                p_Var11 = (_s_FuncInfo *)param_1;
                goto LAB_1000a02a;
              }
              iVar6 = iVar6 + 1;
              uVar8 = uVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_10009fe9;
        }
      }
    }
LAB_1000a02a:
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
                  goto LAB_1000a113;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_1000a113:
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
         uVar3 != '\0')) goto LAB_1000a1e9;
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
LAB_10009fe9:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_1000a1e9:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/**************************************************/

/* Function: ___InternalCxxFrameHandler @ 1000a219 */

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

/* Function: terminate @ 1000a2fd */

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

/* Function: unexpected @ 1000a336 */

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

/* Function: _inconsistency @ 1000a349 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10008505(DAT_1001682c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/**************************************************/

/* Function: __initp_eh_hooks @ 1000a380 */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_1001682c = FUN_1000848e(0x1000a2fd);
  return;
}



/**************************************************/

/* Function: __CallSettingFrame@12 @ 1000a3a0 */

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

/* Function: ___report_gsfailure @ 1000a3ec */

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
  
  _DAT_10016948 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1001694c = &stack0x00000004;
  _DAT_10016888 = 0x10001;
  _DAT_10016830 = 0xc0000409;
  _DAT_10016834 = 1;
  local_32c = DAT_10015448;
  local_328 = DAT_1001544c;
  _DAT_1001683c = unaff_retaddr;
  _DAT_10016914 = in_GS;
  _DAT_10016918 = in_FS;
  _DAT_1001691c = in_ES;
  _DAT_10016920 = in_DS;
  _DAT_10016924 = unaff_EDI;
  _DAT_10016928 = unaff_ESI;
  _DAT_1001692c = unaff_EBX;
  _DAT_10016930 = in_EDX;
  _DAT_10016934 = in_ECX;
  _DAT_10016938 = in_EAX;
  _DAT_1001693c = unaff_EBP;
  DAT_10016940 = unaff_retaddr;
  _DAT_10016944 = in_CS;
  _DAT_10016950 = in_SS;
  DAT_10016880 = IsDebuggerPresent();
  FUN_1000d5b4();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_10011b94);
  if (DAT_10016880 == 0) {
    FUN_1000d5b4();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: fastzero_I @ 1000a4f0 */

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

/* Function: __VEC_memzero @ 1000a547 */

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

/* Function: ___heap_select @ 1000a5ea */

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

/* Function: __heap_init @ 1000a645 */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_10016b54 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_10016b54 == (HANDLE)0x0) {
    return 0;
  }
  DAT_100180b0 = ___heap_select();
  if ((DAT_100180b0 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_10016b54);
    DAT_10016b54 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 1000a69f */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_100180b0 == 3) {
    iVar2 = 0;
    if (0 < DAT_10018098) {
      puVar1 = (undefined4 *)((int)DAT_1001809c + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_10016b54,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10018098);
    }
    HeapFree(DAT_10016b54,0,DAT_1001809c);
  }
  HeapDestroy(DAT_10016b54);
  DAT_10016b54 = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: __mtinitlocks @ 1000a713 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10016b58;
  do {
    if ((&DAT_10015d1c)[iVar2 * 2] == 1) {
      (&DAT_10015d18)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10015d18)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10015d18)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 1000a75c */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10015d18;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10015e38);
  puVar1 = &DAT_10015d18;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10015e38);
  return;
}



/**************************************************/

/* Function: FUN_1000a7b1 @ 1000a7b1 */

void __cdecl FUN_1000a7b1(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10015d18)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 1000a7c6 */

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
  if (DAT_10016b54 == 0) {
    __FF_MSGBANNER();
    FUN_10008249(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10015d18 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_1000962f();
      *pDVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_1000962f();
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
      FUN_1000a880();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_1000a880 @ 1000a880 */

void FUN_1000a880(void)

{
  FUN_1000a7b1(10);
  return;
}



/**************************************************/

/* Function: __lock @ 1000a889 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10015d18)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10015d18)[_File * 2]);
  return;
}



/**************************************************/

/* Function: ___sbh_heap_init @ 1000a8ba */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_1001809c = HeapAlloc(DAT_10016b54,0,0x140);
  if (DAT_1001809c == (LPVOID)0x0) {
    return 0;
  }
  DAT_10016ca8 = 0;
  DAT_10018098 = 0;
  DAT_100180a4 = DAT_1001809c;
  DAT_100180a0 = param_1;
  DAT_100180a8 = 0x10;
  return 1;
}



/**************************************************/

/* Function: thunk_FUN_1000a926 @ 1000a902 */

void __thiscall thunk_FUN_1000a926(void *this,int param_1)

{
  FUN_1000a926((void *)(DAT_10018098 * 0x14 + DAT_1001809c),param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000a926 @ 1000a926 */

void __thiscall FUN_1000a926(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/**************************************************/

/* Function: ___sbh_free_block @ 1000a92d */

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
      if (DAT_10016ca8 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_100180ac * 0x8000 + DAT_10016ca8[3]),0x8000,0x4000);
        DAT_10016ca8[2] = DAT_10016ca8[2] | 0x80000000U >> ((byte)DAT_100180ac & 0x1f);
        *(undefined4 *)(DAT_10016ca8[4] + 0xc4 + DAT_100180ac * 4) = 0;
        *(char *)(DAT_10016ca8[4] + 0x43) = *(char *)(DAT_10016ca8[4] + 0x43) + -1;
        if (*(char *)(DAT_10016ca8[4] + 0x43) == '\0') {
          DAT_10016ca8[1] = DAT_10016ca8[1] & 0xfffffffe;
        }
        if (DAT_10016ca8[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10016ca8[3],0,0x8000);
          HeapFree(DAT_10016b54,0,(LPVOID)DAT_10016ca8[4]);
          _memmove(DAT_10016ca8,DAT_10016ca8 + 5,
                   (DAT_10018098 * 0x14 - (int)DAT_10016ca8) + -0x14 + DAT_1001809c);
          DAT_10018098 = DAT_10018098 + -1;
          if (DAT_10016ca8 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_100180a4 = DAT_1001809c;
        }
      }
      DAT_10016ca8 = param_1;
      DAT_100180ac = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 1000ac41 */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10018098 == DAT_100180a8) {
    pvVar1 = HeapReAlloc(DAT_10016b54,0,DAT_1001809c,(DAT_100180a8 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100180a8 = DAT_100180a8 + 0x10;
    DAT_1001809c = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10018098 * 0x14 + (int)DAT_1001809c);
  pvVar1 = HeapAlloc(DAT_10016b54,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10018098 = DAT_10018098 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_10016b54,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 1000acf1 */

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

/* Function: ___sbh_resize_block @ 1000adf7 */

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

/* Function: ___sbh_alloc_block @ 1000b0d6 */

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
  
  puVar9 = DAT_1001809c + DAT_10018098 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_100180a4;
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
  puVar13 = DAT_1001809c;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_100180a4 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_100180a4) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_1001809c;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_100180a4 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_100180a4) &&
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
  DAT_100180a4 = param_1;
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
    if (iVar10 == 0) goto LAB_1000b376;
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
LAB_1000b376:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_10016ca8)) && (local_8 == DAT_100180ac)) {
    DAT_10016ca8 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/**************************************************/

/* Function: __SEH_prolog4 @ 1000b3bc */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10015448 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 1000b401 */

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

/* Function: __except_handler4 @ 1000b420 */

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_10015448);
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
          goto LAB_1000b4cb;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_10011b74 != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_10011b74)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_10011b74)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_10015448);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_10015448);
  }
LAB_1000b4cb:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/**************************************************/

/* Function: __amsg_exit @ 1000b5b6 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_10008249(param_1);
  pcVar1 = (code *)FUN_10008505((int)PTR___exit_10015e38);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: FUN_1000b5da @ 1000b5da */

void __cdecl FUN_1000b5da(undefined4 param_1)

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

/* Function: ___crtExitProcess @ 1000b600 */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_1000b5da(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: FUN_1000b615 @ 1000b615 */

void FUN_1000b615(void)

{
  __lock(8);
  return;
}



/**************************************************/

/* Function: FUN_1000b61e @ 1000b61e */

void FUN_1000b61e(void)

{
  FUN_1000a7b1(8);
  return;
}



/**************************************************/

/* Function: FUN_1000b627 @ 1000b627 */

void __cdecl FUN_1000b627(undefined4 *param_1)

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

/* Function: __initterm_e @ 1000b63f */

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

/* Function: __get_osplatform @ 1000b65f */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_10016cb0 != 0)) {
    *param_1 = DAT_10016cb0;
    return 0;
  }
  pDVar1 = FUN_1000962f();
  *pDVar1 = 0x16;
  FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __get_winmajor @ 1000b696 */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_10016cb0 != 0)) {
    *param_1 = DAT_10016cbc;
    return 0;
  }
  pDVar1 = FUN_1000962f();
  *pDVar1 = 0x16;
  FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __cinit @ 1000b6d2 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((DAT_10018090 != (code *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10018090), BVar1 != 0)) {
    (*DAT_10018090)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_100101a8,(undefined4 *)&DAT_100101c0);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_1000c4a9);
    puVar3 = &DAT_100101a0;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_100101a4);
    if ((DAT_10018094 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10018094), BVar1 != 0)) {
      (*DAT_10018094)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000b764 @ 1000b764 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1000b837) */

void __cdecl FUN_1000b764(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10016cf0 != 1) {
    DAT_10016cec = 1;
    DAT_10016ce8 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_10008505(DAT_10018088);
      piVar3 = (int *)FUN_10008505(DAT_10018084);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_10008505(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_1000b627((undefined4 *)&DAT_100101d0);
    }
    FUN_1000b627((undefined4 *)&DAT_100101d8);
  }
  FUN_1000b831();
  if (param_3 != 0) {
    return;
  }
  DAT_10016cf0 = 1;
  FUN_1000a7b1(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000b831 @ 1000b831 */

void FUN_1000b831(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_1000a7b1(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 1000b846 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000b764(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 1000b857 */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1000b764(0,0,1);
  return;
}



/**************************************************/

/* Function: __init_pointers @ 1000b866 */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1000b8b2(uVar1);
  FUN_1000db5c(uVar1);
  FUN_100094ca(uVar1);
  FUN_10008a47(uVar1);
  FUN_1000deea(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_1000c4cd();
  __initp_eh_hooks();
  PTR___exit_10015e38 = (undefined *)FUN_1000848e(0x1000b846);
  return;
}



/**************************************************/

/* Function: FUN_1000b8b2 @ 1000b8b2 */

void __cdecl FUN_1000b8b2(undefined4 param_1)

{
  DAT_10016cf4 = param_1;
  return;
}



/**************************************************/

/* Function: __callnewh @ 1000b8bc */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_10008505(DAT_10016cf4);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000b8de @ 1000b8de */

void __cdecl FUN_1000b8de(undefined4 *param_1,undefined4 *param_2,uint param_3)

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

/* Function: __VEC_memcpy @ 1000b965 */

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
      FUN_1000b8de(param_1,param_2,param_3 - uVar3);
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

/* Function: exception @ 1000ba48 */

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

/* Function: exception @ 1000ba96 */

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

/* Function: exception @ 1000baae */

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

/* Function: ~exception @ 1000bb06 */

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

/* Function: FUN_1000bb1c @ 1000bb1c */

char * __fastcall FUN_1000bb1c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/**************************************************/

/* Function: FUN_1000bb29 @ 1000bb29 */

exception * __thiscall FUN_1000bb29(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000bb45 @ 1000bb45 */

int __cdecl FUN_1000bb45(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_10008505(DAT_10018088);
  piVar2 = (int *)FUN_10008505(DAT_10018084);
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
        DAT_10018088 = FUN_1000848e((int)pvVar5);
      }
      iVar6 = FUN_1000848e(param_1);
      *piVar2 = iVar6;
      DAT_10018084 = FUN_1000848e((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __onexit @ 1000bc2d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_1000b615();
  p_Var1 = (_onexit_t)FUN_1000bb45((int)_Func);
  FUN_1000bc63();
  return p_Var1;
}



/**************************************************/

/* Function: FUN_1000bc63 @ 1000bc63 */

void FUN_1000bc63(void)

{
  FUN_1000b61e();
  return;
}



/**************************************************/

/* Function: _atexit @ 1000bc69 */

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

/* Function: __CxxThrowException@8 @ 1000bc7b */

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
  
  pDVar2 = &DAT_10011bd8;
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

/* Function: __malloc_crt @ 1000bcc5 */

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
    if (DAT_10016cfc == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10016cfc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __calloc_crt @ 1000bd05 */

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
    if (DAT_10016cfc == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10016cfc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __realloc_crt @ 1000bd4d */

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
    if (DAT_10016cfc == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10016cfc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/**************************************************/

/* Function: __ioinit @ 1000bd98 */

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
  
  uStack_c = 0x1000bda4;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1000bfcf:
    iVar7 = -1;
  }
  else {
    DAT_10017f68 = 0x20;
    DAT_10017f80 = puVar2;
    for (; puVar2 < DAT_10017f80 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_10017f68 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_10017f68, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_10017f80)[iVar7] = puVar2;
        DAT_10017f68 = DAT_10017f68 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_10017f80)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_10017f80)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_1000bfcf;
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
      piVar8 = DAT_10017f80 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_1000bfcf;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_10017f68);
    iVar7 = 0;
  }
  return iVar7;
}



/**************************************************/

/* Function: __ioterm @ 1000bfd8 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_10017f80;
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
  } while ((int)puVar2 < 0x10018080);
  return;
}



/**************************************************/

/* Function: __setenvp @ 1000c024 */

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
  
  if (DAT_1001808c == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_1001649c;
  if (DAT_1001649c != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_1001649c;
    DAT_10016cd0 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_1001649c);
          DAT_1001649c = (char *)0x0;
          *puVar1 = 0;
          _DAT_10018080 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10016cd0);
            DAT_10016cd0 = (undefined4 *)0x0;
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

/* Function: parse_cmdline @ 1000c0ff */

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
        goto LAB_1000c191;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_1000c191:
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

/* Function: __setargv @ 1000c297 */

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
  
  if (DAT_1001808c == 0) {
    ___initmbctable();
  }
  DAT_10016e04 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10016d00,0x104);
  _DAT_10016ce0 = &DAT_10016d00;
  if ((DAT_100180bc == (char *)0x0) || (local_8 = DAT_100180bc, *DAT_100180bc == '\0')) {
    local_8 = &DAT_10016d00;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_10016cc4 = local_c - 1;
      _DAT_10016cc8 = puVar2;
      return 0;
    }
  }
  return -1;
}



/**************************************************/

/* Function: ___crtGetEnvironmentStringsA @ 1000c350 */

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
  if (DAT_10016e08 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10016e08 = 1;
      goto LAB_1000c3a2;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10016e08 = 2;
    }
  }
  if (DAT_10016e08 != 1) {
    if ((DAT_10016e08 != 2) && (DAT_10016e08 != 0)) {
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
LAB_1000c3a2:
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

/* Function: __RTC_Initialize @ 1000c485 */

/* WARNING: Removing unreachable block (ram,0x1000c497) */
/* WARNING: Removing unreachable block (ram,0x1000c49d) */
/* WARNING: Removing unreachable block (ram,0x1000c49f) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/**************************************************/

/* Function: FUN_1000c4cd @ 1000c4cd */

void FUN_1000c4cd(void)

{
  return;
}



/**************************************************/

/* Function: FUN_1000c4ce @ 1000c4ce */

undefined4 __cdecl FUN_1000c4ce(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_100086aa();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_10015f04 * 3);
    if ((piVar1 + DAT_10015f04 * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_10015ef8 < DAT_10015efc + DAT_10015ef8) {
            iVar8 = DAT_10015ef8 * 0xc;
            iVar9 = DAT_10015ef8;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_10015efc + DAT_10015ef8);
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

/* Function: FUN_1000c62c @ 1000c62c */

undefined4 __cdecl FUN_1000c62c(int param_1,DWORD param_2)

{
  undefined4 uVar1;
  
  if (param_1 == -0x1f928c9d) {
    uVar1 = FUN_1000c4ce(-0x1f928c9d,param_2);
    return uVar1;
  }
  return 0;
}



/**************************************************/

/* Function: ___security_init_cookie @ 1000c647 */

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
  if ((DAT_10015448 == 0xbb40e64e) || ((DAT_10015448 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10015448 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10015448 == 0xbb40e64e) {
      DAT_10015448 = 0xbb40e64f;
    }
    else if ((DAT_10015448 & 0xffff0000) == 0) {
      DAT_10015448 = DAT_10015448 | DAT_10015448 << 0x10;
    }
  }
  DAT_1001544c = ~DAT_10015448;
  return;
}



/**************************************************/

/* Function: _strcpy_s @ 1000c6db */

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
      pDVar2 = FUN_1000962f();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000c6fa;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1000962f();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000c6fa:
  FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strlen @ 1000c740 */

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
    if (((uint)puVar2 & 3) == 0) goto LAB_1000c770;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1000c7a3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1000c770:
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
  goto LAB_1000c7a3;
}



/**************************************************/

/* Function: __initp_misc_winsig @ 1000c7cb */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_10016e48 = param_1;
  DAT_10016e4c = param_1;
  DAT_10016e50 = param_1;
  DAT_10016e54 = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 1000c7e4 */

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
  } while (uVar1 < DAT_10015f04 * 0xc + param_1);
  if ((DAT_10015f04 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 1000c818 */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_10008505(DAT_10016e50);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 1000c825 */

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
        puVar6 = &DAT_10016e48;
        iVar3 = DAT_10016e48;
        goto LAB_1000c8da;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_1000c8b8;
        if (_SigNum != 8) goto LAB_1000c89c;
      }
    }
    pDVar7 = FUN_100086aa();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_10016e54;
      iVar3 = DAT_10016e54;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_10016e4c;
      iVar3 = DAT_10016e4c;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1000c89c:
        pDVar7 = FUN_1000962f();
        *pDVar7 = 0x16;
        FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_1000c8b8:
      puVar6 = &DAT_10016e50;
      iVar3 = DAT_10016e50;
    }
LAB_1000c8da:
    bVar1 = true;
    pcVar4 = (code *)FUN_10008505(iVar3);
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
      goto LAB_1000c93e;
    }
  }
  else {
LAB_1000c93e:
    if (_SigNum == 8) {
      for (local_28 = DAT_10015ef8; local_28 < DAT_10015efc + DAT_10015ef8; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_1000c978;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_1000c978:
  FUN_1000c999();
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

/* Function: FUN_1000c999 @ 1000c999 */

void FUN_1000c999(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1000a7b1(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000c9d5 @ 1000c9d5 */

undefined4 __cdecl FUN_1000c9d5(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_10016e5c == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10016e5c = FUN_1000848e((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_10016e60 = FUN_1000848e((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10016e64 = FUN_1000848e((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10016e6c = FUN_1000848e((int)pFVar1);
      if (DAT_10016e6c != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_10016e68 = FUN_1000848e((int)pFVar1);
      }
    }
  }
  if ((DAT_10016e68 != local_c) && (DAT_10016e6c != local_c)) {
    pcVar3 = (code *)FUN_10008505(DAT_10016e68);
    pcVar4 = (code *)FUN_10008505(DAT_10016e6c);
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
      goto LAB_1000cb6b;
    }
  }
  if ((((DAT_10016e60 != local_c) &&
       (pcVar3 = (code *)FUN_10008505(DAT_10016e60), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10016e64 != local_c &&
      (pcVar3 = (code *)FUN_10008505(DAT_10016e64), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1000cb6b:
  pcVar3 = (code *)FUN_10008505(DAT_10016e5c);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/**************************************************/

/* Function: _strncpy_s @ 1000cb92 */

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
LAB_1000cbb6:
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
          pDVar2 = FUN_1000962f();
          eVar5 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_1000cbc7;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_1000cbb6;
  pDVar2 = FUN_1000962f();
  eVar5 = 0x16;
  *pDVar2 = 0x16;
LAB_1000cbc7:
  FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: __set_error_mode @ 1000cc45 */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_100164a4;
      DAT_100164a4 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_100164a4;
    }
  }
  pDVar2 = FUN_1000962f();
  *pDVar2 = 0x16;
  FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: __freea @ 1000cc8b */

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

/* Function: __crtLCMapStringA_stat @ 1000cca6 */

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
  
  local_8 = DAT_10015448 ^ (uint)&stack0xfffffffc;
  if (DAT_10016e70 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_10016e70 = 2;
      }
    }
    else {
      DAT_10016e70 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1000cd15;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1000cd15:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_10016e70 == 2) || (DAT_10016e70 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1000d036;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_1000d036;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000d013;
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
LAB_1000d013:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1000d036;
  }
  if (DAT_10016e70 != 1) goto LAB_1000d036;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000d036;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_1000cdbd:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1000cdbd;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_1000d036;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000cecc;
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
LAB_1000cecc:
  __freea(local_10);
LAB_1000d036:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 1000d048 */

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

/* Function: __crtGetStringTypeA_stat @ 1000d08b */

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
  
  local_8 = DAT_10015448 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10016e74 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10016e74 = 2;
      }
      goto LAB_1000d0e4;
    }
    DAT_10016e74 = 1;
  }
  else {
LAB_1000d0e4:
    if ((DAT_10016e74 == 2) || (DAT_10016e74 == 0)) {
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
      goto LAB_1000d231;
    }
    if (DAT_10016e74 != 1) goto LAB_1000d231;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000d231;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1000d174:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1000d174;
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
LAB_1000d231:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 1000d243 */

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

/* Function: ___free_lc_time @ 1000d283 */

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

/* Function: ___free_lconv_num @ 1000d413 */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10015fd8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10015fdc) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10015fe0) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 1000d453 */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10015fe4) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10015fe8) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10015fec) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10015ff0) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10015ff4) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10015ff8) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10015ffc) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: _strcspn @ 1000d4e0 */

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

/* Function: _strpbrk @ 1000d530 */

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

/* Function: __isleadbyte_l @ 1000d570 */

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

/* Function: FUN_1000d5a6 @ 1000d5a6 */

void __cdecl FUN_1000d5a6(int param_1)

{
  __isleadbyte_l(param_1,(_locale_t)0x0);
  return;
}



/**************************************************/

/* Function: FUN_1000d5b4 @ 1000d5b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d5b4(void)

{
  _DAT_10017f64 = 0;
  return;
}



/**************************************************/

/* Function: __EH_prolog3_catch @ 1000d5bc */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10015448 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: _ValidateRead @ 1000d5f2 */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/**************************************************/

/* Function: _memmove @ 1000d600 */

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
          goto switchD_1000d7e3_caseD_2;
        case 3:
          goto switchD_1000d7e3_caseD_3;
        }
        goto switchD_1000d7e3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000d7e3_caseD_0;
      case 1:
        goto switchD_1000d7e3_caseD_1;
      case 2:
        goto switchD_1000d7e3_caseD_2;
      case 3:
        goto switchD_1000d7e3_caseD_3;
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
              goto switchD_1000d7e3_caseD_2;
            case 3:
              goto switchD_1000d7e3_caseD_3;
            }
            goto switchD_1000d7e3_caseD_1;
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
              goto switchD_1000d7e3_caseD_2;
            case 3:
              goto switchD_1000d7e3_caseD_3;
            }
            goto switchD_1000d7e3_caseD_1;
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
              goto switchD_1000d7e3_caseD_2;
            case 3:
              goto switchD_1000d7e3_caseD_3;
            }
            goto switchD_1000d7e3_caseD_1;
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
switchD_1000d7e3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1000d7e3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1000d7e3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1000d7e3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_100180b8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000d65c_caseD_2;
      case 3:
        goto switchD_1000d65c_caseD_3;
      }
      goto switchD_1000d65c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000d65c_caseD_0;
    case 1:
      goto switchD_1000d65c_caseD_1;
    case 2:
      goto switchD_1000d65c_caseD_2;
    case 3:
      goto switchD_1000d65c_caseD_3;
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
            goto switchD_1000d65c_caseD_2;
          case 3:
            goto switchD_1000d65c_caseD_3;
          }
          goto switchD_1000d65c_caseD_1;
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
            goto switchD_1000d65c_caseD_2;
          case 3:
            goto switchD_1000d65c_caseD_3;
          }
          goto switchD_1000d65c_caseD_1;
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
            goto switchD_1000d65c_caseD_2;
          case 3:
            goto switchD_1000d65c_caseD_3;
          }
          goto switchD_1000d65c_caseD_1;
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
switchD_1000d65c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000d65c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000d65c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000d65c_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __global_unwind2 @ 1000d968 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000d980,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 1000d9cd */

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
  puStack_1c = &LAB_1000d988;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_1000da9c();
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify1 @ 1000da74 */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10016028 = param_1;
  DAT_10016024 = in_EAX;
  DAT_1001602c = unaff_EBP;
  return in_EAX;
}



/**************************************************/

/* Function: __NLG_Notify @ 1000da7d */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10016028 = param_1;
  DAT_10016024 = in_EAX;
  DAT_1001602c = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_1000da9c @ 1000da9c */

void FUN_1000da9c(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: FUN_1000da9f @ 1000da9f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_1000da9f(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 1000daef */

/* WARNING: Removing unreachable block (ram,0x1000db2a) */
/* WARNING: Removing unreachable block (ram,0x1000db17) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_1000da9f(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: FUN_1000db5c @ 1000db5c */

void __cdecl FUN_1000db5c(undefined4 param_1)

{
  DAT_10016e7c = param_1;
  return;
}



/**************************************************/

/* Function: ___crtInitCritSecNoSpinCount@8 @ 1000db66 */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 1000db76 */

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
  
  local_8 = &DAT_100139b8;
  uStack_c = 0x1000db82;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_10008505(DAT_10016e7c);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1000dbec;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_1000dbdb:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1000dbdb;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1000dbdb;
  }
  DAT_10016e7c = FUN_1000848e((int)pcVar1);
LAB_1000dbec:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: __local_unwind4 @ 1000dc3c */

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
  puStack_24 = &LAB_1000dccc;
  pvStack_28 = ExceptionList;
  local_20 = DAT_10015448 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_1000da9c();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_1000dd12 @ 1000dd12 */

void FUN_1000dd12(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 1000dd2e */

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

/* Function: _EH4_TransferToHandler @ 1000dd45 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1000dd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 1000dd5e */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000dd73,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 1000dd78 */

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

/* Function: __ValidateImageBase @ 1000dd90 */

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

/* Function: __FindPESection @ 1000ddc0 */

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

/* Function: __IsNonwritableInCurrentImage @ 1000de10 */

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
  local_c = DAT_10015448 ^ 0x100139d8;
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

/* Function: __initp_misc_cfltcvt_tab @ 1000decb */

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
    piVar1 = (int *)((int)&PTR_LAB_10016030 + uVar3);
    iVar2 = FUN_1000848e(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: FUN_1000deea @ 1000deea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000deea(undefined4 param_1)

{
  _DAT_10016e80 = param_1;
  return;
}



/**************************************************/

/* Function: __msize @ 1000def4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  DWORD *pDVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    pDVar1 = FUN_1000962f();
    *pDVar1 = 0x16;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_100180b0 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_1000a926(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_1000df8e();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_10016b54,0,_Memory);
  }
  return sVar2;
}



/**************************************************/

/* Function: FUN_1000df8e @ 1000df8e */

void FUN_1000df8e(void)

{
  FUN_1000a7b1(4);
  return;
}



/**************************************************/

/* Function: __lseeki64_nolock @ 1000df97 */

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
    pDVar2 = FUN_1000962f();
    *pDVar2 = 9;
LAB_1000dfc6:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_10009655(DVar4);
        goto LAB_1000dfc6;
      }
    }
    pbVar1 = (byte *)((&DAT_10017f80)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/**************************************************/

/* Function: FUN_1000e01a @ 1000e01a */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_1000e01a(uint param_1,WCHAR *param_2,WCHAR *param_3)

{
  WCHAR *pWVar1;
  char cVar2;
  wchar_t *pwVar3;
  WCHAR WVar4;
  byte bVar5;
  wchar_t wVar6;
  DWORD *pDVar7;
  undefined3 extraout_var;
  _ptiddata p_Var8;
  BOOL BVar9;
  int iVar10;
  DWORD DVar11;
  WCHAR *pWVar12;
  int iVar13;
  WCHAR *pWVar14;
  uint uVar15;
  char *pcVar16;
  int unaff_EDI;
  int *piVar17;
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
  
  local_8 = DAT_10015448 ^ (uint)local_51c;
  local_580 = param_2;
  local_57c = (WCHAR *)0x0;
  local_584 = 0;
  if (param_3 == (WCHAR *)0x0) goto LAB_1000e5ca;
  if (param_2 == (WCHAR *)0x0) {
    pDVar7 = FUN_10009642();
    *pDVar7 = 0;
    pDVar7 = FUN_1000962f();
    *pDVar7 = 0x16;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1000e5ca;
  }
  iVar13 = (param_1 & 0x1f) * 0x38;
  piVar17 = &DAT_10017f80 + ((int)param_1 >> 5);
  local_571 = (char)(*(char *)(*piVar17 + iVar13 + 0x24) * '\x02') >> 1;
  local_58c = piVar17;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~(uint)param_3 & 1) == 0)) {
    pDVar7 = FUN_10009642();
    *pDVar7 = 0;
    pDVar7 = FUN_1000962f();
    *pDVar7 = 0x16;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1000e5ca;
  }
  if ((*(byte *)(*piVar17 + iVar13 + 4) & 0x20) != 0) {
    __lseeki64_nolock(param_1,0x200000000,unaff_EDI);
  }
  bVar5 = FUN_1000e6bc(param_1);
  if ((CONCAT31(extraout_var,bVar5) == 0) || ((*(byte *)(iVar13 + 4 + *piVar17) & 0x80) == 0)) {
LAB_1000e305:
    if ((*(byte *)((undefined4 *)(*piVar17 + iVar13) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar17 + iVar13),local_580,(DWORD)param_3,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_1000e55f:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_1000e568:
      piVar17 = local_58c;
      if (local_57c != (WCHAR *)0x0) goto LAB_1000e5ca;
      goto LAB_1000e572;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (param_3 == (WCHAR *)0x0) goto LAB_1000e599;
      do {
        local_578 = (WCHAR *)0x0;
        pWVar12 = (WCHAR *)((int)local_56c - (int)local_580);
        pWVar14 = local_568;
        do {
          if (param_3 <= pWVar12) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          pWVar12 = (WCHAR *)((int)pWVar12 + 1);
          if ((char)WVar4 == '\n') {
            local_584 = local_584 + 1;
            *(char *)pWVar14 = '\r';
            pWVar14 = (WCHAR *)((int)pWVar14 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          *(char *)pWVar14 = (char)WVar4;
          pWVar14 = (WCHAR *)((int)pWVar14 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          local_56c = pWVar1;
        } while (local_578 < (WCHAR *)0x400);
        BVar9 = WriteFile(*(HANDLE *)(iVar13 + *piVar17),local_568,(int)pWVar14 - (int)local_568,
                          (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_1000e55f;
        local_57c = (WCHAR *)((int)local_57c + (int)local_588);
      } while (((int)pWVar14 - (int)local_568 <= (int)local_588) &&
              ((WCHAR *)((int)local_56c - (int)local_580) < param_3));
      goto LAB_1000e568;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (param_3 != (WCHAR *)0x0) {
        do {
          uVar15 = 0;
          pWVar12 = (WCHAR *)((int)local_56c - (int)local_580);
          pWVar14 = local_568;
          do {
            if (param_3 <= pWVar12) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            pWVar12 = pWVar12 + 1;
            if (WVar4 == L'\n') {
              local_584 = local_584 + 2;
              *pWVar14 = L'\r';
              pWVar14 = pWVar14 + 1;
              uVar15 = uVar15 + 2;
            }
            *pWVar14 = WVar4;
            pWVar14 = pWVar14 + 1;
            uVar15 = uVar15 + 2;
            piVar17 = local_58c;
            local_56c = pWVar1;
          } while (uVar15 < 0x3ff);
          BVar9 = WriteFile(*(HANDLE *)(iVar13 + *piVar17),local_568,(int)pWVar14 - (int)local_568,
                            (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_1000e55f;
          local_57c = (WCHAR *)((int)local_57c + (int)local_588);
        } while (((int)pWVar14 - (int)local_568 <= (int)local_588) &&
                ((WCHAR *)((int)local_56c - (int)local_580) < param_3));
        goto LAB_1000e568;
      }
    }
    else {
      local_578 = local_580;
      if (param_3 != (WCHAR *)0x0) {
        do {
          local_56c = (WCHAR *)0x0;
          pWVar12 = (WCHAR *)((int)local_578 - (int)local_580);
          pWVar14 = local_164;
          do {
            if (param_3 <= pWVar12) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            pWVar12 = pWVar12 + 1;
            if (WVar4 == L'\n') {
              *pWVar14 = L'\r';
              pWVar14 = pWVar14 + 1;
              local_56c = local_56c + 1;
            }
            local_56c = local_56c + 1;
            *pWVar14 = WVar4;
            pWVar14 = pWVar14 + 1;
          } while (local_56c < (WCHAR *)0x152);
          pcVar16 = (char *)0x0;
          iVar10 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar14 - (int)local_164) / 2,
                                       local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar10 == 0) goto LAB_1000e55f;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar13 + *local_58c),local_414 + (int)pcVar16,
                              iVar10 - (int)pcVar16,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar16 = pcVar16 + (int)local_588;
          } while ((int)pcVar16 < iVar10);
        } while ((iVar10 <= (int)pcVar16) &&
                (local_57c = (WCHAR *)((int)local_578 - (int)local_580), local_57c < param_3));
        goto LAB_1000e568;
      }
    }
LAB_1000e599:
    DVar11 = 0;
    if (((*(byte *)(iVar13 + 4 + *piVar17) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_1000e5ca;
    pDVar7 = FUN_1000962f();
    *pDVar7 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar13 + *piVar17),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_1000e305;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (param_3 != (WCHAR *)0x0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar14 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar10 = FUN_1000d5a6(CONCAT22(cVar2 >> 7,(short)cVar2));
          if (iVar10 == 0) {
            iVar10 = FUN_1000f337((wchar_t *)&local_570,(char *)pWVar14,1);
            if (iVar10 == -1) break;
          }
          else {
            if (((uint)(((int)local_580 - (int)pWVar14) + (int)param_3) < 2) ||
               (iVar10 = FUN_1000f337((wchar_t *)&local_570,(char *)pWVar14,2), iVar10 == -1))
            break;
            pWVar14 = (WCHAR *)((int)pWVar14 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar14 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          DVar11 = WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
          if (DVar11 == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar13 + *piVar17),local_10,DVar11,(LPDWORD)&local_56c,
                            (LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_1000e55f;
          local_57c = (WCHAR *)((int)local_57c + (int)local_56c);
          if ((int)local_56c < (int)DVar11) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar13 + *piVar17),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_1000e55f;
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
            if (wVar6 != (wchar_t)local_570) goto LAB_1000e55f;
            local_57c = (WCHAR *)((int)local_57c + 1);
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar6 = __putwch_nolock(L'\r');
              if (wVar6 != (wchar_t)local_570) goto LAB_1000e55f;
              local_57c = (WCHAR *)((int)local_57c + 1);
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < param_3);
      goto LAB_1000e568;
    }
LAB_1000e572:
    if (local_570 == 0) goto LAB_1000e599;
    DVar11 = 5;
    if (local_570 != 5) {
      FUN_10009655(local_570);
      goto LAB_1000e5ca;
    }
    pDVar7 = FUN_1000962f();
    *pDVar7 = 9;
  }
  pDVar7 = FUN_10009642();
  *pDVar7 = DVar11;
LAB_1000e5ca:
  __security_check_cookie(local_8 ^ (uint)local_51c);
  return;
}



/**************************************************/

/* Function: FUN_1000e5e0 @ 1000e5e0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_1000e5e0(uint param_1,WCHAR *param_2,WCHAR *param_3)

{
  DWORD *pDVar1;
  int iVar2;
  undefined4 local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_10009642();
    *pDVar1 = 0;
    pDVar1 = FUN_1000962f();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10017f68)) {
      iVar2 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)((&DAT_10017f80)[(int)param_1 >> 5] + 4 + iVar2) & 1) != 0) {
        FUN_1000f0a0(param_1);
        if ((*(byte *)((&DAT_10017f80)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1000962f();
          *pDVar1 = 9;
          pDVar1 = FUN_10009642();
          *pDVar1 = 0;
          local_20 = 0xffffffff;
        }
        else {
          local_20 = FUN_1000e01a(param_1,param_2,param_3);
        }
        FUN_1000e6b2();
        return local_20;
      }
    }
    pDVar1 = FUN_10009642();
    *pDVar1 = 0;
    pDVar1 = FUN_1000962f();
    *pDVar1 = 9;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000e6b2 @ 1000e6b2 */

void FUN_1000e6b2(void)

{
  int unaff_EBP;
  
  FUN_1000f140(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000e6bc @ 1000e6bc */

byte __cdecl FUN_1000e6bc(uint param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_1000962f();
    *pDVar1 = 9;
    return 0;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_10017f68)) {
    return *(byte *)((&DAT_10017f80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x38) & 0x40;
  }
  pDVar1 = FUN_1000962f();
  *pDVar1 = 9;
  FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}



/**************************************************/

/* Function: FUN_1000e7eb @ 1000e7eb */

void __cdecl FUN_1000e7eb(uint param_1)

{
  if ((0x10016057 < param_1) && (param_1 < 0x100162b9)) {
    __lock(((int)(param_1 + 0xeffe9fa8) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000e827 @ 1000e827 */

void __cdecl FUN_1000e827(int param_1,int param_2)

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

/* Function: FUN_1000e855 @ 1000e855 */

void __cdecl FUN_1000e855(uint param_1)

{
  if ((0x10016057 < param_1) && (param_1 < 0x100162b9)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_1000a7b1(((int)(param_1 + 0xeffe9fa8) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000e88b @ 1000e88b */

void __cdecl FUN_1000e88b(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_1000a7b1(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000e8b5 @ 1000e8b5 */

undefined4 __cdecl FUN_1000e8b5(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 0) {
    pDVar1 = FUN_1000962f();
    *pDVar1 = 0x16;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



/**************************************************/

/* Function: __calloc_impl @ 1000e985 */

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
        if ((DAT_100180b0 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_100180a0)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_1000ea81();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_1000ea36;
          }
        }
        else {
LAB_1000ea36:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_10016b54,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_10016cf8 == 0) {
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
    pDVar1 = FUN_1000962f();
    *pDVar1 = 0xc;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: FUN_1000ea81 @ 1000ea81 */

void FUN_1000ea81(void)

{
  FUN_1000a7b1(4);
  return;
}



/**************************************************/

/* Function: _realloc @ 1000eaa3 */

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
  if (DAT_100180b0 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000ec7c;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1000a926(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_100180a0) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1000a926(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_10016b54,0,_NewSize);
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
      FUN_1000ebe7();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_10016b54,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10016cf8 == 0) {
        pDVar4 = FUN_1000962f();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1000eca9;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1000962f();
    if (local_24 != (uint *)0x0) goto LAB_1000ec88;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000ec7c;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_10016b54,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_10016cf8 == 0) {
        pDVar4 = FUN_1000962f();
LAB_1000eca9:
        DVar5 = GetLastError();
        DVar5 = FUN_100095f4(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1000962f();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_100095f4(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_1000ec7c:
  __callnewh(_NewSize);
  pDVar4 = FUN_1000962f();
LAB_1000ec88:
  *pDVar4 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1000ebe7 @ 1000ebe7 */

void FUN_1000ebe7(void)

{
  FUN_1000a7b1(4);
  return;
}



/**************************************************/

/* Function: x_ismbbtype_l @ 1000ecbe */

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
    if (uVar1 == 0) goto LAB_1000ed00;
  }
  iVar2 = 1;
LAB_1000ed00:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead @ 1000ed0f */

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

/* Function: _atol @ 1000ed64 */

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

/* Function: __alloca_probe_16 @ 1000ed80 */

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

/* Function: __alloca_probe_8 @ 1000ed96 */

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

/* Function: ___ansicp @ 1000edac */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_10015448 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___convertcp @ 1000edf3 */

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
  
  local_8 = DAT_10015448 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1000ef93;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1000ef93;
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
LAB_1000eed3:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_1000eed3;
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
LAB_1000ef93:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_1000efae @ 1000efae */

undefined4 __cdecl FUN_1000efae(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_10017f68)) {
    iVar3 = (param_1 & 0x1f) * 0x38;
    piVar1 = (int *)((&DAT_10017f80)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_100164a8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000f00c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000f00c:
      *(undefined4 *)(iVar3 + (&DAT_10017f80)[(int)param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000962f();
  *pDVar2 = 9;
  pDVar2 = FUN_10009642();
  *pDVar2 = 0;
  return 0xffffffff;
}



/**************************************************/

/* Function: __get_osfhandle @ 1000f02f */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10009642();
    *pDVar1 = 0;
    pDVar1 = FUN_1000962f();
    *pDVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10017f68)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_10017f80)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  pDVar1 = FUN_10009642();
  *pDVar1 = 0;
  pDVar1 = FUN_1000962f();
  *pDVar1 = 9;
  FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: FUN_1000f0a0 @ 1000f0a0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

bool __cdecl FUN_1000f0a0(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1 & 0x1f) * 0x38 + (&DAT_10017f80)[(int)param_1 >> 5];
  bVar3 = true;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      bVar3 = iVar1 != 0;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_1000f137();
  }
  if (bVar3) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_10017f80)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x38));
  }
  return bVar3;
}



/**************************************************/

/* Function: FUN_1000f137 @ 1000f137 */

void FUN_1000f137(void)

{
  FUN_1000a7b1(10);
  return;
}



/**************************************************/

/* Function: FUN_1000f140 @ 1000f140 */

void __cdecl FUN_1000f140(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10017f80)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x38));
  return;
}



/**************************************************/

/* Function: __putwch_nolock @ 1000f162 */

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
  
  local_8 = DAT_10015448 ^ (uint)&stack0xfffffffc;
  if (DAT_10016390 != 0) {
    if (DAT_10016414 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_10016414 == (HANDLE)0xffffffff) goto LAB_1000f20b;
    BVar2 = WriteConsoleW(DAT_10016414,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10016390 = 1;
      goto LAB_1000f20b;
    }
    if ((DAT_10016390 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_1000f20b;
    DAT_10016390 = 0;
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
  if (DAT_10016414 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10016414,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_1000f20b:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



/**************************************************/

/* Function: __mbtowc_l @ 1000f224 */

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
          if (iVar2 != 0) goto LAB_1000f26f;
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
        pDVar3 = FUN_1000962f();
        *pDVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_1000f26f:
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

/* Function: FUN_1000f337 @ 1000f337 */

void __cdecl FUN_1000f337(wchar_t *param_1,char *param_2,size_t param_3)

{
  __mbtowc_l(param_1,param_2,param_3,(_locale_t)0x0);
  return;
}



/**************************************************/

/* Function: FUN_1000f34e @ 1000f34e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_1000f34e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar4 = 3; iVar4 < DAT_10017f60; iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 4;
    if (*(int *)(DAT_10016f50 + iVar3) != 0) {
      piVar1 = *(int **)(DAT_10016f50 + iVar3);
      if ((*(byte *)(piVar1 + 3) & 0x83) != 0) {
        iVar2 = FUN_1000f6cf(piVar1);
        if (iVar2 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar4) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10016f50) + 0x20));
        _free(*(void **)(iVar3 + DAT_10016f50));
        *(undefined4 *)(iVar3 + DAT_10016f50) = 0;
      }
    }
  }
  FUN_1000f3e4();
  return local_20;
}



/**************************************************/

/* Function: FUN_1000f3e4 @ 1000f3e4 */

void FUN_1000f3e4(void)

{
  FUN_1000a7b1(1);
  return;
}



/**************************************************/

/* Function: FUN_1000f3ed @ 1000f3ed */

undefined4 __cdecl FUN_1000f3ed(int *param_1)

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
      uVar1 = FUN_1000e8b5((int)param_1);
      pWVar2 = (WCHAR *)FUN_1000e5e0(uVar1,pWVar2,pWVar5);
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

/* Function: FUN_1000f44f @ 1000f44f */

int __cdecl FUN_1000f44f(int *param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_1000f491(0);
    return iVar1;
  }
  iVar1 = FUN_1000f3ed(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(ushort *)(param_1 + 3) & 0x4000) != 0) {
    uVar2 = FUN_1000e8b5((int)param_1);
    DVar3 = FUN_1000f74b(uVar2);
    return -(uint)(DVar3 != 0);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000f491 @ 1000f491 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_1000f491(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar3 = 0; iVar3 < DAT_10017f60; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(DAT_10016f50 + iVar3 * 4);
    if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_1000e827(iVar3,iVar2);
      piVar1 = *(int **)(DAT_10016f50 + iVar3 * 4);
      if ((piVar1[3] & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = FUN_1000f44f(piVar1);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
          iVar2 = FUN_1000f44f(piVar1);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_1000f533();
    }
  }
  FUN_1000f562();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000f533 @ 1000f533 */

void FUN_1000f533(void)

{
  int unaff_ESI;
  
  FUN_1000e88b(unaff_ESI,*(int *)(DAT_10016f50 + unaff_ESI * 4));
  return;
}



/**************************************************/

/* Function: FUN_1000f562 @ 1000f562 */

void FUN_1000f562(void)

{
  FUN_1000a7b1(1);
  return;
}



/**************************************************/

/* Function: FUN_1000f56b @ 1000f56b */

void FUN_1000f56b(void)

{
  FUN_1000f491(1);
  return;
}



/**************************************************/

/* Function: __alloca_probe @ 1000f580 */

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

/* Function: ___ascii_strnicmp @ 1000f5b0 */

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
      if (bVar2 != (byte)uVar3) goto LAB_1000f601;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1000f601:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: ___initconout @ 1000f611 */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10016414 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/**************************************************/

/* Function: FUN_1000f65d @ 1000f65d */

undefined4 __cdecl FUN_1000f65d(int *param_1)

{
  DWORD *pDVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    pDVar1 = FUN_1000962f();
    *pDVar1 = 0x16;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar4 = 0xffffffff;
  }
  else {
    if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
      uVar4 = FUN_1000f3ed(param_1);
      FUN_1000f98d(param_1);
      uVar2 = FUN_1000e8b5((int)param_1);
      iVar3 = FUN_1000f8c0(uVar2);
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

/* Function: FUN_1000f6cf @ 1000f6cf */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_1000f6cf(int *param_1)

{
  DWORD *pDVar1;
  undefined4 local_20;
  
  local_20 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    pDVar1 = FUN_1000962f();
    *pDVar1 = 0x16;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = 0xffffffff;
  }
  else if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_1000e7eb((uint)param_1);
    local_20 = FUN_1000f65d(param_1);
    FUN_1000f743();
  }
  else {
    param_1[3] = 0;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000f743 @ 1000f743 */

void FUN_1000f743(void)

{
  uint unaff_ESI;
  
  FUN_1000e855(unaff_ESI);
  return;
}



/**************************************************/

/* Function: FUN_1000f74b @ 1000f74b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

DWORD __cdecl FUN_1000f74b(uint param_1)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  DWORD local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_1000962f();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10017f68)) {
      iVar3 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)(iVar3 + 4 + (&DAT_10017f80)[(int)param_1 >> 5]) & 1) != 0) {
        FUN_1000f0a0(param_1);
        if ((*(byte *)(iVar3 + 4 + (&DAT_10017f80)[(int)param_1 >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(param_1);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_1000f80d;
          pDVar1 = FUN_10009642();
          *pDVar1 = local_20;
        }
        pDVar1 = FUN_1000962f();
        *pDVar1 = 9;
        local_20 = 0xffffffff;
LAB_1000f80d:
        FUN_1000f822();
        return local_20;
      }
    }
    pDVar1 = FUN_1000962f();
    *pDVar1 = 9;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000f822 @ 1000f822 */

void FUN_1000f822(void)

{
  int unaff_EBP;
  
  FUN_1000f140(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000f82c @ 1000f82c */

undefined4 __cdecl FUN_1000f82c(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_10017f80 + 0x74) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_10017f80 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_1000f88b;
    }
    hObject = (HANDLE)__get_osfhandle(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000f88d;
    }
  }
LAB_1000f88b:
  DVar4 = 0;
LAB_1000f88d:
  FUN_1000efae(param_1);
  *(undefined1 *)((&DAT_10017f80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x38) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10009655(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/**************************************************/

/* Function: FUN_1000f8c0 @ 1000f8c0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_1000f8c0(uint param_1)

{
  DWORD *pDVar1;
  int iVar2;
  undefined4 local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_10009642();
    *pDVar1 = 0;
    pDVar1 = FUN_1000962f();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10017f68)) {
      iVar2 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)((&DAT_10017f80)[(int)param_1 >> 5] + 4 + iVar2) & 1) != 0) {
        FUN_1000f0a0(param_1);
        if ((*(byte *)((&DAT_10017f80)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1000962f();
          *pDVar1 = 9;
          local_20 = 0xffffffff;
        }
        else {
          local_20 = FUN_1000f82c(param_1);
        }
        FUN_1000f983();
        return local_20;
      }
    }
    pDVar1 = FUN_10009642();
    *pDVar1 = 0;
    pDVar1 = FUN_1000962f();
    *pDVar1 = 9;
    FUN_100095d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000f983 @ 1000f983 */

void FUN_1000f983(void)

{
  int unaff_EBP;
  
  FUN_1000f140(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000f98d @ 1000f98d */

void __cdecl FUN_1000f98d(undefined4 *param_1)

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

/* Function: RtlUnwind @ 1000fa8e */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1000fa8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

/* Function: Unwind@1000faa0 @ 1000faa0 */

void Unwind_1000faa0(void)

{
  int unaff_EBP;
  
  FUN_100010c0((undefined4 *)(unaff_EBP + -0x7e0));
  return;
}



/**************************************************/

/* Function: Unwind@1000fae0 @ 1000fae0 */

void Unwind_1000fae0(void)

{
  int unaff_EBP;
  
  FUN_100010c0((undefined4 *)(unaff_EBP + 4));
  return;
}



/**************************************************/

/* Function: Unwind@1000fb10 @ 1000fb10 */

void Unwind_1000fb10(void)

{
  int unaff_EBP;
  
  FUN_100010c0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}



/**************************************************/

/* Function: Unwind@1000fb40 @ 1000fb40 */

void Unwind_1000fb40(void)

{
  int unaff_EBP;
  
  FUN_100010c0((undefined4 *)(unaff_EBP + 4));
  return;
}



/**************************************************/

/* Function: Unwind@1000fb70 @ 1000fb70 */

void Unwind_1000fb70(void)

{
  int unaff_EBP;
  
  FUN_100010c0((undefined4 *)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1000fba0 @ 1000fba0 */

void Unwind_1000fba0(void)

{
  int unaff_EBP;
  
  FUN_100010c0((undefined4 *)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1000fbd0 @ 1000fbd0 */

void Unwind_1000fbd0(void)

{
  int unaff_EBP;
  
  FUN_10003370(*(int **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1000fc00 @ 1000fc00 */

void Unwind_1000fc00(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x28));
  return;
}



/**************************************************/

/* Function: Unwind@1000fc40 @ 1000fc40 */

void Unwind_1000fc40(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x28));
  return;
}



/**************************************************/

/* Function: Unwind@1000fc80 @ 1000fc80 */

void Unwind_1000fc80(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fcc0 @ 1000fcc0 */

void Unwind_1000fcc0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fd00 @ 1000fd00 */

void Unwind_1000fd00(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fd40 @ 1000fd40 */

void Unwind_1000fd40(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fd80 @ 1000fd80 */

void Unwind_1000fd80(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fdc0 @ 1000fdc0 */

void Unwind_1000fdc0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fe00 @ 1000fe00 */

void Unwind_1000fe00(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fe40 @ 1000fe40 */

void Unwind_1000fe40(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fe80 @ 1000fe80 */

void Unwind_1000fe80(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

/* Function: Unwind@1000fec0 @ 1000fec0 */

void Unwind_1000fec0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x30));
  return;
}



/**************************************************/

