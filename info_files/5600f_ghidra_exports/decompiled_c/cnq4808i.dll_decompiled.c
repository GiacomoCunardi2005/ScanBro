/* Function: CICMFunction @ 10001000 */

/* public: __thiscall CICMFunction::CICMFunction(void) */

void __thiscall CICMFunction::CICMFunction(CICMFunction *this)

{
                    /* 0x1000  2  ??0CICMFunction@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: ~CICMFunction @ 10001010 */

/* public: virtual __thiscall CICMFunction::~CICMFunction(void) */

void __thiscall CICMFunction::~CICMFunction(CICMFunction *this)

{
                    /* 0x1010  7  ??1CICMFunction@@UAE@XZ */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: CICMFunction @ 10001020 */

/* public: __thiscall CICMFunction::CICMFunction(class CICMFunction const &) */

void __thiscall CICMFunction::CICMFunction(CICMFunction *this,CICMFunction *param_1)

{
                    /* 0x1020  1  ??0CICMFunction@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: operator= @ 10001030 */

/* public: class CICMFunction & __thiscall CICMFunction::operator=(class CICMFunction const &) */

CICMFunction * __thiscall CICMFunction::operator=(CICMFunction *this,CICMFunction *param_1)

{
                    /* 0x1030  10  ??4CICMFunction@@QAEAAV0@ABV0@@Z
                       0x1030  11  ??4CSImageEnhance@@QAEAAV0@ABV0@@Z
                       0x1030  12  ??4CS_ImageEnhance@@QAEAAV0@ABV0@@Z */
  return this;
}



/**************************************************/

/* Function: FUN_10001040 @ 10001040 */

undefined4 * __thiscall FUN_10001040(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,4,*(int *)((int)this + -4),CICMFunction::~CICMFunction);
    if ((param_1 & 1) != 0) {
      FUN_100047f2((undefined4 *)((int)this + -4));
    }
    return (undefined4 *)((int)this + -4);
  }
  *(undefined ***)this = CICMFunction::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100047f2(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_100010a0 @ 100010a0 */

void __fastcall FUN_100010a0(int param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if (iVar2 == 0) {
LAB_100010c3:
      iVar1 = -0x7ff8ffa9;
LAB_100010c8:
      if (unaff_EDI != (int *)0x0) {
        if (-1 < iVar1) {
          *unaff_EDI = param_1 - iVar2;
          return;
        }
        *unaff_EDI = 0;
      }
      return;
    }
    if (*param_2 == 0) {
      if (iVar2 != 0) goto LAB_100010c8;
      goto LAB_100010c3;
    }
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while( true );
}



/**************************************************/

/* Function: FUN_100010e0 @ 100010e0 */

undefined4 * __fastcall FUN_100010e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000ea38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  *param_1 = CICMFunc::vftable;
  FUN_100033c0(param_1 + 1);
  *(undefined2 *)(param_1 + 7) = 0;
  ExceptionList = local_c;
  return param_1;
}



/**************************************************/

/* Function: FUN_10001140 @ 10001140 */

void __fastcall FUN_10001140(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000ea68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CICMFunc::vftable;
  local_4 = 0;
  if (param_1[0x51] != 0) {
    DeleteColorTransform(param_1[0x51]);
  }
  FUN_100044e0(param_1 + 1);
  *param_1 = CICMFunction::vftable;
  ExceptionList = local_c;
  return;
}



/**************************************************/

/* Function: FUN_100011b0 @ 100011b0 */

void __thiscall FUN_100011b0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [256];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_100130b0 ^ (uint)auStack_108;
  puVar3 = (undefined1 *)((int)param_2 + 3);
  *param_2 = 0x53343042;
  uVar4 = (**(code **)(*(int *)((int)this + 4) + 0x18))(L"ColorGear");
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((LPCWSTR)uVar4 != (LPCWSTR)0x0) {
    WideCharToMultiByte(0,0,(LPCWSTR)uVar4,-1,&stack0xfffffef4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    iVar1 = 0;
    uVar2 = extraout_EDX;
    do {
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),auStack_108[iVar1 + -4]);
      *puVar3 = auStack_108[iVar1 + -4];
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + -1;
    } while (iVar1 < 4);
  }
  FUN_10004d96(uStack_8 ^ (uint)&stack0xfffffef4,uVar2);
  return;
}



/**************************************************/

/* Function: FUN_10001230 @ 10001230 */

/* WARNING: Removing unreachable block (ram,0x100013a4) */
/* WARNING: Removing unreachable block (ram,0x100013d8) */
/* WARNING: Removing unreachable block (ram,0x1000140c) */

uint __thiscall FUN_10001230(void *this,void *param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int *_Dst;
  int *_Src;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *_Size;
  uint local_1c;
  ushort local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar1 = param_4 / 3;
  _Size = (uint *)(uVar1 * param_2 * 3 >> 3);
  puVar3 = (uint *)0x0;
  _Dst = FUN_10004da5(_Size);
  _Src = FUN_10004da5(_Size);
  _memcpy(_Dst,param_1,(size_t)_Size);
  puVar5 = (uint *)0x0;
  if (_Size != (uint *)0x0) {
    do {
      if (uVar1 == 8) {
        puVar4 = puVar3;
        if (puVar3 < _Size) {
          local_c = (uint)*(byte *)((int)puVar3 + (int)_Dst) * 0x101;
          puVar4 = (uint *)((int)puVar3 + 1);
          if (puVar4 < _Size) {
            local_8 = (uint)*(byte *)((int)puVar4 + (int)_Dst) * 0x101;
            puVar4 = (uint *)((int)puVar3 + 2);
            if (puVar4 < _Size) {
              local_4 = (uint)*(byte *)((int)puVar4 + (int)_Dst) * 0x101;
              puVar4 = (uint *)((int)puVar3 + 3);
            }
          }
        }
      }
      else {
        if (puVar3 < (uint *)((int)_Size - 1U)) {
          local_c = (uint)CONCAT11(*(undefined1 *)((int)puVar3 + 1U + (int)_Dst),
                                   *(undefined1 *)((int)puVar3 + (int)_Dst));
        }
        if ((int)puVar3 + 2U < (int)_Size - 1U) {
          local_8 = (uint)CONCAT11(*(undefined1 *)((int)puVar3 + 3U + (int)_Dst),
                                   *(undefined1 *)((int)puVar3 + 2U + (int)_Dst));
        }
        if (puVar3 + 1 < (uint *)((int)_Size - 1U)) {
          local_4 = (uint)CONCAT11(*(undefined1 *)((int)puVar3 + 5U + (int)_Dst),
                                   *(undefined1 *)((int)(puVar3 + 1) + (int)_Dst));
        }
        puVar4 = (uint *)((int)puVar3 + 6);
      }
      local_14 = (undefined2)local_c;
      local_12 = (undefined2)local_8;
      local_10 = (undefined2)local_4;
      iVar2 = TranslateColors(*(undefined4 *)((int)this + 0x144),&local_14,1,2,&local_1c,2);
      if (iVar2 == 0) break;
      puVar6 = puVar5;
      if (uVar1 == 0x10) {
        if (puVar5 < _Size) {
          *(char *)((int)puVar5 + (int)_Src) = (char)local_1c;
          puVar6 = (uint *)((int)puVar5 + 1);
          if (puVar6 < _Size) {
            *(char *)((int)puVar6 + (int)_Src) = (char)(local_1c >> 8);
            puVar6 = (uint *)((int)puVar5 + 2);
            if (puVar6 < _Size) {
              *(char *)((int)puVar6 + (int)_Src) = (char)(local_1c >> 0x10);
              puVar6 = (uint *)((int)puVar5 + 3);
              if (puVar6 < _Size) {
                *(char *)((int)puVar6 + (int)_Src) = (char)(local_1c >> 0x18);
                puVar6 = puVar5 + 1;
                if (puVar6 < _Size) {
                  *(char *)((int)puVar6 + (int)_Src) = (char)local_18;
                  puVar6 = (uint *)((int)puVar5 + 5);
                  if (puVar6 < _Size) {
                    *(char *)((int)puVar6 + (int)_Src) = (char)(local_18 >> 8);
                    goto LAB_10001480;
                  }
                }
              }
            }
          }
        }
      }
      else if (puVar5 < _Size) {
        *(char *)((int)puVar5 + (int)_Src) = (char)((local_1c & 0xffff) / 0x101);
        puVar6 = (uint *)((int)puVar5 + 1);
        if (puVar6 < _Size) {
          *(char *)((int)puVar6 + (int)_Src) = (char)(local_1c / 0x1010000);
          puVar6 = (uint *)((int)puVar5 + 2);
          if (puVar6 < _Size) {
            *(char *)((int)puVar6 + (int)_Src) = (char)(local_18 / 0x101);
LAB_10001480:
            puVar6 = (uint *)((int)puVar6 + 1);
          }
        }
      }
      puVar3 = puVar4;
      puVar5 = puVar6;
    } while (puVar4 < _Size);
  }
  _memcpy(param_1,_Src,(size_t)_Size);
  FUN_100047f2(_Dst);
  FUN_100047f2(_Src);
  return local_1c;
}



/**************************************************/

/* Function: FUN_100014d0 @ 100014d0 */

int FUN_100014d0(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = param_2 >> 1;
  iVar3 = 0;
  if ((uVar4 == 0) || (0x7fffffff < uVar4)) {
    iVar3 = -0x7ff8ffa9;
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = 0;
  if (uVar4 != 0) {
    iVar5 = 0x7ffffffe - uVar4;
    iVar6 = param_3 - (int)param_1;
    psVar2 = param_1;
    while ((param_1 = psVar2, iVar5 + uVar4 != 0 &&
           (sVar1 = *(short *)(iVar6 + (int)param_1), sVar1 != 0))) {
      *param_1 = sVar1;
      uVar4 = uVar4 - 1;
      psVar2 = param_1 + 1;
      if (uVar4 == 0) {
        *param_1 = 0;
        return -0x7ff8ff86;
      }
    }
    if (uVar4 != 0) goto LAB_10001548;
  }
  param_1 = param_1 + -1;
  iVar3 = -0x7ff8ff86;
LAB_10001548:
  *param_1 = 0;
  return iVar3;
}



/**************************************************/

/* Function: FUN_10001560 @ 10001560 */

int FUN_10001560(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_2 >> 1;
  if ((uVar7 == 0) || (0x7fffffff < uVar7)) {
    iVar3 = -0x7ff8ffa9;
    param_2 = 0;
  }
  else {
    iVar3 = FUN_100010a0(uVar7,param_1);
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar4 = uVar7 - param_2;
  psVar5 = param_1 + param_2;
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar8 = (iVar4 - uVar7) + 0x7fffffff + param_2;
    iVar6 = param_3 - (int)psVar5;
    psVar2 = psVar5;
    while ((psVar5 = psVar2, iVar8 != 0 && (sVar1 = *(short *)(iVar6 + (int)psVar5), sVar1 != 0))) {
      *psVar5 = sVar1;
      iVar4 = iVar4 + -1;
      iVar8 = iVar8 + -1;
      psVar2 = psVar5 + 1;
      if (iVar4 == 0) {
        *psVar5 = 0;
        return -0x7ff8ff86;
      }
    }
    if (iVar4 != 0) goto LAB_100015ee;
  }
  psVar5 = psVar5 + -1;
  iVar3 = -0x7ff8ff86;
LAB_100015ee:
  *psVar5 = 0;
  return iVar3;
}



/**************************************************/

/* Function: FUN_10001600 @ 10001600 */

int __cdecl FUN_10001600(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 1;
  iVar1 = 0;
  if ((uVar3 == 0) || (0x7fffffff < uVar3)) {
    iVar1 = -0x7ff8ffa9;
  }
  if (-1 < iVar1) {
    uVar3 = uVar3 - 1;
    iVar1 = 0;
    uVar2 = FUN_10004992(param_1,uVar3,param_3,&stack0x00000010);
    if (((int)uVar2 < 0) || (uVar3 < uVar2)) {
      param_1[uVar3] = L'\0';
      iVar1 = -0x7ff8ff86;
    }
    else if (uVar2 == uVar3) {
      param_1[uVar3] = L'\0';
      return 0;
    }
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_10001670 @ 10001670 */

undefined4 * __thiscall FUN_10001670(void *this,byte param_1)

{
  FUN_10001140(this);
  if ((param_1 & 1) != 0) {
    FUN_100047f2(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10001690 @ 10001690 */

undefined4 __thiscall FUN_10001690(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(*(int *)((int)this + 4) + 0x3c))(param_1);
  if (iVar1 < 0) {
    return 1;
  }
  piVar2 = (int *)(**(code **)(*(int *)((int)this + 4) + 4))(L"ProductId");
  iVar1 = (**(code **)(*piVar2 + 8))();
  if (iVar1 != 0) {
    FUN_100014d0((short *)((int)this + 0x11c),0x28,iVar1);
  }
  if (unaff_retaddr != 0) {
    FUN_100014d0((short *)((int)this + 0x1c),0x100,unaff_retaddr);
  }
  psVar3 = (short *)((int)this + 0x11c);
  if (psVar3 != (short *)0x0) {
    iVar1 = 0x28;
    do {
      if (*psVar3 == 0) {
        if (iVar1 != 0) {
          iVar1 = 0x28 - iVar1;
          if (0x14 < iVar1) {
            return 1;
          }
          goto LAB_10001727;
        }
        break;
      }
      psVar3 = psVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = 0;
LAB_10001727:
  if (*(short *)((int)this + iVar1 * 2 + 0x11a) == 0x20) {
    *(undefined2 *)((int)this + iVar1 * 2 + 0x11a) = 0;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001760 @ 10001760 */

void FUN_10001760(short *param_1)

{
  undefined4 extraout_EDX;
  undefined4 local_210;
  undefined1 local_20c [520];
  uint local_4;
  
  local_4 = DAT_100130b0 ^ (uint)&local_210;
  *param_1 = 0;
  local_210 = 0x208;
  GetColorDirectoryW(0,local_20c,&local_210);
  FUN_100014d0(param_1,0x208,(int)local_20c);
  FUN_10001560(param_1,0x208,0x1000f274);
  FUN_10001560(param_1,0x208,0x1000f1c8);
  FUN_10004d96(local_4 ^ (uint)&local_210,extraout_EDX);
  return;
}



/**************************************************/

/* Function: FUN_100017f0 @ 100017f0 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_100017f0(void *this,short *param_1)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined8 uVar3;
  uint unaff_retaddr;
  int local_270;
  int local_26c [23];
  undefined4 local_210;
  undefined1 local_20c [520];
  uint local_4;
  
  local_4 = DAT_100130b0 ^ (uint)&local_270;
  _memset(local_26c + 2,0,0x58);
  local_26c[5] = (int)this + 0x1c;
  local_26c[2] = 0x58;
  local_26c[3] = 0x300;
  local_26c[4] = 0x10001;
  local_210 = 0x73636e72;
  EnumColorProfilesW(0,local_26c + 2,0,local_26c,&local_270);
  if ((local_270 == 0) || (local_26c[0] == 0)) {
    uVar3 = (**(code **)(*(int *)this + 0x1c))(param_1);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else {
    piVar1 = FUN_10004da5((uint *)(local_26c[0] * 2));
    uVar2 = extraout_EDX;
    if (piVar1 != (int *)0x0) {
      EnumColorProfilesW(0,local_26c + 2,piVar1,local_26c,&local_270);
      *param_1 = 0;
      local_26c[1] = 0x208;
      GetColorDirectoryW(0,local_20c,local_26c + 1);
      FUN_100014d0(param_1,0x208,(int)local_20c);
      FUN_10001560(param_1,0x208,0x1000f274);
      FUN_10001560(param_1,0x208,(int)piVar1);
      FUN_100047f2(piVar1);
      uVar2 = extraout_EDX_00;
    }
  }
  local_270 = 0x1000191f;
  FUN_10004d96(unaff_retaddr ^ (uint)local_26c,uVar2);
  return;
}



/**************************************************/

/* Function: FUN_10001930 @ 10001930 */

void FUN_10001930(int param_1,short *param_2)

{
  HANDLE hFindFile;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 local_4ec;
  undefined4 local_4e8;
  WCHAR *local_4e4;
  undefined4 local_4e0;
  undefined1 local_4dc [52];
  int local_4a8;
  _WIN32_FIND_DATAW local_45c;
  WCHAR local_20c;
  undefined1 local_20a [518];
  uint local_4;
  
  local_4 = DAT_100130b0 ^ (uint)&local_4ec;
  local_20c = L'\0';
  _memset(local_20a,0,0x206);
  local_4ec = 0x208;
  GetColorDirectoryW(0,&local_20c,&local_4ec);
  FUN_10001560(&local_20c,0x208,0x1000f278);
  hFindFile = FindFirstFileW(&local_20c,&local_45c);
  uVar5 = extraout_EDX;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_45c.dwFileAttributes & 0x10) == 0) {
        local_4e4 = local_45c.cFileName;
        local_4e8 = 1;
        local_4e0 = 0x208;
        iVar1 = OpenColorProfileW(&local_4e8,1,1,3);
        if (iVar1 != 0) {
          iVar2 = GetColorProfileHeader(iVar1,local_4dc);
          if ((iVar2 == 1) && (param_1 == local_4a8)) {
            FUN_100014d0(param_2,0x208,(int)&local_20c);
            uVar4 = FUN_100051ba(param_2,0x5c);
            *(undefined2 *)(uVar4 + 2) = 0;
            FUN_10001560(param_2,0x208,(int)local_45c.cFileName);
            CloseColorProfile(iVar1);
            break;
          }
          CloseColorProfile(iVar1);
        }
      }
      BVar3 = FindNextFileW(hFindFile,&local_45c);
    } while (BVar3 != 0);
    FindClose(hFindFile);
    uVar5 = extraout_EDX_00;
  }
  FUN_10004d96(local_4 ^ (uint)&local_4ec,uVar5);
  return;
}



/**************************************************/

/* Function: FUN_10001aa0 @ 10001aa0 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_10001aa0(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *pMem;
  HGLOBAL hMem;
  undefined4 extraout_EDX;
  int local_41c [2];
  wchar_t local_414 [260];
  undefined1 local_20c [520];
  uint local_4;
  
  local_4 = DAT_100130b0 ^ (uint)local_41c;
  if (param_3 == (wchar_t *)0x0) {
    FUN_10004d96(local_4 ^ (uint)local_41c,param_2);
    return;
  }
  pwVar1 = _wcschr(param_3,L':');
  if (pwVar1 == (wchar_t *)0x0) {
    pwVar1 = _wcschr(param_3,L'\\');
    if (pwVar1 == (wchar_t *)0x0) {
      local_41c[1] = 0x208;
      GetColorDirectoryW(0,local_20c,local_41c + 1);
      FUN_10001600(local_414,0x208,L"%s\\%s");
      goto LAB_10001b46;
    }
  }
  FUN_100014d0(local_414,0x208,(int)param_3);
LAB_10001b46:
  iVar2 = lstrlenW(local_414);
  pMem = GlobalAlloc(0x40,iVar2 * 2 + 0xe);
  *pMem = 1;
  pMem[2] = iVar2 * 2 + 2;
  pMem[1] = pMem + 3;
  FUN_100014d0((short *)(pMem + 3),0x208,(int)local_414);
  iVar2 = OpenColorProfileW(pMem,1,1,3);
  if (iVar2 != 0) {
    local_41c[0] = IsColorProfileValid(iVar2,local_41c);
    if (local_41c[0] == 0) {
      CloseColorProfile(iVar2);
    }
  }
  hMem = GlobalHandle(pMem);
  GlobalFree(hMem);
  FUN_10004d96(local_4 ^ (uint)local_41c,extraout_EDX);
  return;
}



/**************************************************/

/* Function: FUN_10001be0 @ 10001be0 */

void __thiscall FUN_10001be0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *hMem;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined8 uVar3;
  undefined1 local_414 [504];
  undefined1 auStack_21c [16];
  undefined1 local_20c [504];
  uint uStack_14;
  uint local_4;
  
  local_4 = DAT_100130b0 ^ (uint)local_414;
  _memset(local_20c,0,0x208);
  _memset(local_414,0,0x208);
  uVar3 = (**(code **)(*(int *)this + 0xc))(param_1,param_2);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    uVar3 = FUN_10001aa0(this,uVar2,(wchar_t *)&stack0xfffffbdc);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    iVar1 = (int)uVar3;
    if (iVar1 != 0) {
      hMem = GlobalAlloc(0x40,0x24c);
      if (hMem == (undefined4 *)0x0) {
        CloseColorProfile(iVar1);
        uVar2 = extraout_EDX;
      }
      else {
        *hMem = 0x50534f43;
        hMem[1] = 0x400;
        hMem[2] = 0x24c;
        hMem[4] = 2;
        FUN_100014d0((short *)(hMem + 0x11),0x104,(int)auStack_21c);
        SetLastError(0);
        uVar2 = CreateColorTransformW(hMem,iVar1,0,0x20003);
        *(undefined4 *)((int)this + 0x144) = uVar2;
        CloseColorProfile(iVar1);
        GlobalFree(hMem);
        uVar2 = extraout_EDX_00;
      }
    }
  }
  FUN_10004d96(uStack_14 ^ (uint)&stack0xfffffbdc,uVar2);
  return;
}



/**************************************************/

/* Function: FUN_10001d10 @ 10001d10 */

/* WARNING: Removing unreachable block (ram,0x10001d5e) */
/* WARNING: Removing unreachable block (ram,0x10001d79) */

int __thiscall
FUN_10001d10(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 < 0) {
    return 3;
  }
  if (1 < param_1) {
    if (param_1 != 3) {
      return 3;
    }
    iVar1 = (**(code **)(*(int *)this + 0x10))(param_4);
    if (iVar1 == 0) {
      return 3;
    }
  }
  return 4;
}



/**************************************************/

/* Function: CSImageEnhance @ 10001da0 */

/* public: __thiscall CSImageEnhance::CSImageEnhance(void) */

void __thiscall CSImageEnhance::CSImageEnhance(CSImageEnhance *this)

{
                    /* 0x1da0  4  ??0CSImageEnhance@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: ~CSImageEnhance @ 10001db0 */

/* public: virtual __thiscall CSImageEnhance::~CSImageEnhance(void) */

void __thiscall CSImageEnhance::~CSImageEnhance(CSImageEnhance *this)

{
                    /* 0x1db0  8  ??1CSImageEnhance@@UAE@XZ
                       0x1db0  9  ??1CS_ImageEnhance@@UAE@XZ */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: CSImageEnhance @ 10001dc0 */

/* public: __thiscall CSImageEnhance::CSImageEnhance(class CSImageEnhance const &) */

void __thiscall CSImageEnhance::CSImageEnhance(CSImageEnhance *this,CSImageEnhance *param_1)

{
                    /* 0x1dc0  3  ??0CSImageEnhance@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: FUN_10001dd0 @ 10001dd0 */

undefined4 * __thiscall FUN_10001dd0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,4,*(int *)((int)this + -4),CSImageEnhance::~CSImageEnhance)
    ;
    if ((param_1 & 1) != 0) {
      FUN_100047f2((undefined4 *)((int)this + -4));
    }
    return (undefined4 *)((int)this + -4);
  }
  *(undefined ***)this = CSImageEnhance::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100047f2(this);
  }
  return this;
}



/**************************************************/

/* Function: CS_ImageEnhance @ 10001e30 */

/* public: __thiscall CS_ImageEnhance::CS_ImageEnhance(class CS_ImageEnhance const &) */

void __thiscall CS_ImageEnhance::CS_ImageEnhance(CS_ImageEnhance *this,CS_ImageEnhance *param_1)

{
                    /* 0x1e30  5  ??0CS_ImageEnhance@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: FUN_10001e40 @ 10001e40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001e40(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_10014024 = param_1;
  }
  return 1;
}



/**************************************************/

/* Function: DeleteICMObj @ 10001e60 */

undefined4 __cdecl DeleteICMObj(undefined4 *param_1)

{
                    /* 0x1e60  19  DeleteICMObj
                       0x1e60  20  DeleteImgEnhObj */
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return 1;
}



/**************************************************/

/* Function: CreateICMObj @ 10001e80 */

undefined4 __cdecl CreateICMObj(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
                    /* 0x1e80  17  CreateICMObj */
  piVar1 = FUN_10004da5((uint *)0x148);
  if (piVar1 != (int *)0x0) {
    puVar2 = FUN_100010e0(piVar1);
    *param_1 = puVar2;
    return 1;
  }
  *param_1 = 0;
  return 1;
}



/**************************************************/

/* Function: CS_ImageEnhance @ 10001ec0 */

/* public: __thiscall CS_ImageEnhance::CS_ImageEnhance(void) */

void __thiscall CS_ImageEnhance::CS_ImageEnhance(CS_ImageEnhance *this)

{
                    /* 0x1ec0  6  ??0CS_ImageEnhance@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: FUN_10001ed0 @ 10001ed0 */

void __cdecl FUN_10001ed0(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  if (param_3 != 0) {
    pcVar3 = (char *)(param_2 + 2);
    do {
      pcVar3[-2] = -((*(byte *)(uVar2 + param_1) & 0x80) != 0);
      pcVar3[-1] = -((*(byte *)(uVar2 + param_1) & 0x40) != 0);
      *pcVar3 = -((*(byte *)(uVar2 + param_1) & 0x20) != 0);
      pcVar3[1] = -((*(byte *)(uVar2 + param_1) & 0x10) != 0);
      pcVar3[2] = -((*(byte *)(uVar2 + param_1) & 8) != 0);
      pcVar3[3] = -((*(byte *)(uVar2 + param_1) & 4) != 0);
      pcVar3[4] = -((*(byte *)(uVar2 + param_1) & 2) != 0);
      pbVar1 = (byte *)(uVar2 + param_1);
      uVar2 = uVar2 + 1;
      pcVar3[5] = -((*pbVar1 & 1) != 0);
      pcVar3 = pcVar3 + 8;
    } while (uVar2 < param_3);
  }
  return;
}



/**************************************************/

/* Function: FUN_10001fa0 @ 10001fa0 */

void __cdecl FUN_10001fa0(int param_1,byte *param_2,uint param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      if ((uVar2 != 0) && ((uVar2 & 7) == 0)) {
        param_2 = param_2 + 1;
      }
      bVar1 = (byte)(0x80 >> ((byte)uVar2 & 7));
      if (*(byte *)(uVar2 + param_1) < param_4) {
        bVar1 = ~bVar1 & *param_2;
      }
      else {
        bVar1 = *param_2 | bVar1;
      }
      uVar2 = uVar2 + 1;
      *param_2 = bVar1;
    } while (uVar2 < param_3);
  }
  return;
}



/**************************************************/

/* Function: CreateImgEnhObj @ 10002000 */

undefined4 __cdecl CreateImgEnhObj(undefined4 *param_1)

{
  int *piVar1;
  
                    /* 0x2000  18  CreateImgEnhObj */
  piVar1 = FUN_10004da5((uint *)0x4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)CS_ImageEnhance::vftable;
    *param_1 = piVar1;
    return 1;
  }
  *param_1 = 0;
  return 1;
}



/**************************************************/

/* Function: FUN_10002030 @ 10002030 */

undefined4 __cdecl FUN_10002030(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  int unaff_retaddr;
  int local_24;
  int local_20;
  int *local_1c;
  ushort *local_18;
  ushort *local_14;
  int local_10;
  ushort *local_c;
  uint local_8;
  int local_4;
  
  local_c = (ushort *)param_1[7];
  uVar4 = param_1[1];
  local_10 = param_1[2];
  uVar1 = param_1[5] * param_2 + 0x1f >> 3 & 0xfffffffc;
  local_4 = uVar1 * param_3;
  uVar7 = param_1[5] * uVar4 + 0x1f >> 3 & 0xfffffffc;
  local_8 = uVar7;
  local_18 = (ushort *)FUN_10004da5((uint *)((local_4 + uVar1) * 2));
  puVar5 = local_18;
  if (((local_18 != (ushort *)0x0) &&
      ((((iVar2 = param_1[5], iVar2 == 0x30 || (iVar2 == 0x10)) || (iVar2 == 0x18)) ||
       ((iVar2 == 8 || (iVar2 = (-(uint)(iVar2 != 1) & 0xfffffff7) + 8, iVar2 != -1)))))) &&
     (iVar2 = FUN_10002cc0((int *)&local_1c,param_2,param_3,uVar4,local_10,iVar2), puVar5 = local_14
     , iVar2 == 0)) {
    if (param_1[5] == 1) {
      if (uVar4 <= param_2) {
        uVar4 = param_2;
      }
      puVar5 = (ushort *)FUN_10004da5((uint *)(uVar4 * 2 + 0x80));
      if (puVar5 != (ushort *)0x0) {
        local_14 = (ushort *)0x0;
        local_24 = 0;
        do {
          if (local_10 <= local_24) break;
          FUN_10001ed0((int)local_c,(int)puVar5,uVar7);
          iVar2 = FUN_10003010((int)local_1c,puVar5,&local_20);
          if (iVar2 == 0) {
            puVar6 = (ushort *)((int)local_14 * uVar1 + (int)local_18);
            do {
              if (local_20 == 0) break;
              iVar2 = FUN_100024f0(local_1c,(int)puVar5,&local_20);
              FUN_10001fa0((int)puVar5,(byte *)puVar6,param_2,0x80);
              local_14 = (ushort *)((int)local_14 + 1);
              puVar6 = (ushort *)((int)puVar6 + uVar1);
            } while (iVar2 == 0);
          }
          local_24 = local_24 + 1;
          local_c = (ushort *)((int)local_c + local_8);
          uVar7 = local_8;
        } while (iVar2 == 0);
        FUN_100047f2(puVar5);
      }
    }
    else {
      iVar2 = 0;
      local_24 = 0;
      local_14 = local_c;
      do {
        if (local_10 <= local_24) break;
        iVar3 = FUN_10003010((int)local_1c,local_14,&local_20);
        if (iVar3 == 0) {
          puVar5 = (ushort *)(iVar2 * uVar1 + (int)local_18);
          do {
            if (local_20 == 0) break;
            iVar3 = FUN_100024f0(local_1c,(int)puVar5,&local_20);
            iVar2 = iVar2 + 1;
            puVar5 = (ushort *)((int)puVar5 + uVar1);
          } while (iVar3 == 0);
        }
        local_24 = local_24 + 1;
        local_14 = (ushort *)((int)local_14 + uVar7);
      } while (iVar3 == 0);
    }
    iVar2 = FUN_10002470((int *)&local_18);
    puVar5 = local_14;
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 4))(local_14,unaff_retaddr,1);
      param_1[1] = unaff_retaddr;
      param_1[3] = param_1[5] * unaff_retaddr + 0x1fU >> 3 & 0xfffffffc;
      param_1[2] = (int)param_1;
      FUN_100047f2(puVar5);
      return 0;
    }
  }
  FUN_100047f2(puVar5);
  return 0xc000fffd;
}



/**************************************************/

/* Function: Scale @ 100022d0 */

/* public: virtual long __thiscall CS_ImageEnhance::Scale(class CS_ImageData *,unsigned
   long,unsigned long) */

long __thiscall
CS_ImageEnhance::Scale(CS_ImageEnhance *this,CS_ImageData *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
                    /* 0x22d0  16  ?Scale@CS_ImageEnhance@@UAEJPAVCS_ImageData@@KK@Z */
  iVar1 = FUN_10002030((int *)param_1,param_2,param_3);
  return (uint)(iVar1 != 0);
}



/**************************************************/

/* Function: FUN_100022f0 @ 100022f0 */

undefined4 __thiscall FUN_100022f0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  int iVar5;
  
  iVar4 = 0;
  if (0 < unaff_EDI) {
    piVar2 = (int *)((int)this + 8);
    iVar5 = unaff_EDI;
    do {
      iVar1 = iVar4 / unaff_EDI;
      iVar3 = iVar4 % unaff_EDI;
      iVar4 = iVar4 + param_1;
      iVar3 = unaff_EDI - iVar3;
      piVar2[-1] = iVar3;
      piVar2[-2] = iVar1;
      iVar5 = iVar5 + -1;
      piVar2[1] = iVar4 % unaff_EDI;
      *piVar2 = ((param_1 - iVar4 % unaff_EDI) - iVar3) / unaff_EDI;
      piVar2 = piVar2 + 4;
    } while (iVar5 != 0);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002350 @ 10002350 */

undefined4 __cdecl FUN_10002350(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int unaff_EDI;
  int local_8;
  int local_4;
  
  piVar1 = param_1;
  piVar4 = param_1 + 1;
  *param_1 = 0;
  if (param_3 < 2) {
    iVar2 = param_2;
    if (0 < param_2) {
      do {
        *param_1 = *param_1 + 1;
        *piVar4 = unaff_EDI;
        piVar4[1] = 0;
        piVar4 = piVar4 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    *piVar4 = 1;
    param_1[2] = unaff_EDI;
    param_1[3] = 0;
    piVar6 = param_1 + 4;
    local_8 = 0;
    if (1 < param_2) {
      param_1 = (int *)(param_3 + -1);
      iVar2 = param_2 + -1;
      local_4 = param_2 + -1;
      do {
        if ((int)param_1 % iVar2 == 0) {
          *piVar4 = *piVar4 + 1;
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
          *piVar6 = unaff_EDI;
        }
        else {
          piVar5 = piVar6;
          if (local_8 < (int)param_1 / iVar2) {
            piVar5 = piVar6 + 1;
            *piVar6 = 0;
            piVar4 = piVar6;
            local_8 = (int)param_1 / iVar2;
          }
          iVar3 = (((int)param_1 % iVar2) * unaff_EDI) / iVar2;
          *piVar4 = *piVar4 + 1;
          *piVar5 = unaff_EDI - iVar3;
          piVar6 = piVar5 + 1;
          *piVar6 = iVar3;
        }
        param_1 = (int *)((int)param_1 + param_3 + -1);
        piVar6 = piVar6 + 1;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
  }
  iVar2 = 0;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    iVar2 = iVar2 + *piVar1;
    param_3 = param_3 + -1;
    if (param_2 < iVar2) break;
    piVar1 = piVar1 + *piVar1 * 2 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002470 @ 10002470 */

undefined4 __cdecl FUN_10002470(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(void **)(iVar1 + 0x3c) != (void *)0x0) {
      _free(*(void **)(iVar1 + 0x3c));
    }
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    if (*(void **)(iVar1 + 0x40) != (void *)0x0) {
      _free(*(void **)(iVar1 + 0x40));
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    if (*(void **)(iVar1 + 0x28) != (void *)0x0) {
      _free(*(void **)(iVar1 + 0x28));
    }
    *(undefined4 *)(iVar1 + 0x28) = 0;
    if (*(void **)(iVar1 + 0x2c) != (void *)0x0) {
      _free(*(void **)(iVar1 + 0x2c));
    }
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    if ((void *)*param_1 != (void *)0x0) {
      _free((void *)*param_1);
    }
    *param_1 = 0;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100024f0 @ 100024f0 */

undefined4 __cdecl FUN_100024f0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_1[7] < param_1[4]) {
    if (param_1[2] < param_1[4]) {
      uVar4 = (uint)(param_1[0xe] != 0);
      iVar3 = param_1[9];
      uVar5 = (uint)(param_1[0xe] == 0);
      iVar2 = iVar3 + 1;
      iVar7 = *(int *)(param_1[0xb] + -4 + iVar2 * 4);
      param_1[9] = iVar2;
      iVar2 = *(int *)(param_1[0xb] + iVar2 * 4);
      param_1[9] = iVar3 + 2;
      if ((*param_1 == 0x30) || (*param_1 == 0x10)) {
        if (param_1[0xd] == 0x10000) {
          iVar3 = 0;
          if (0 < param_1[5]) {
            do {
              *(short *)(param_2 + iVar3 * 2) =
                   (short)((uint)(*(int *)(param_1[uVar5 + 0xf] + iVar3 * 4) * iVar2 +
                                 *(int *)(param_1[uVar4 + 0xf] + iVar3 * 4) * iVar7) >> 0x10);
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_1[5]);
          }
        }
        else {
          iVar3 = 0;
          if (0 < param_1[5]) {
            do {
              iVar6 = iVar3 * 4;
              iVar1 = iVar3 * 4;
              iVar3 = iVar3 + 1;
              *(short *)(param_2 + -2 + iVar3 * 2) =
                   (short)((uint)(*(int *)(param_1[uVar5 + 0xf] + iVar6) * iVar2 +
                                 *(int *)(param_1[uVar4 + 0xf] + iVar1) * iVar7) /
                          (uint)param_1[0xd]);
            } while (iVar3 < param_1[5]);
          }
        }
      }
      else if (param_1[0xd] == 0x10000) {
        iVar3 = 0;
        if (0 < param_1[5]) {
          do {
            *(char *)(iVar3 + param_2) =
                 (char)((uint)(*(int *)(param_1[uVar5 + 0xf] + iVar3 * 4) * iVar2 +
                              *(int *)(param_1[uVar4 + 0xf] + iVar3 * 4) * iVar7) >> 0x10);
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_1[5]);
        }
      }
      else {
        iVar3 = 0;
        if (0 < param_1[5]) {
          do {
            iVar6 = iVar3 + 1;
            *(char *)(iVar3 + param_2) =
                 (char)((uint)(*(int *)(param_1[uVar5 + 0xf] + iVar3 * 4) * iVar2 +
                              *(int *)(param_1[uVar4 + 0xf] + iVar3 * 4) * iVar7) /
                       (uint)param_1[0xd]);
            iVar3 = iVar6;
          } while (iVar6 < param_1[5]);
        }
      }
    }
    else if ((*param_1 == 0x30) || (*param_1 == 0x10)) {
      iVar3 = 0;
      if (0 < param_1[5]) {
        do {
          iVar7 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          *(short *)(param_2 + -2 + iVar3 * 2) =
               (short)(*(uint *)(param_1[0xf] + iVar7) / (uint)param_1[0xd]);
        } while (iVar3 < param_1[5]);
      }
    }
    else {
      iVar3 = 0;
      if (0 < param_1[5]) {
        do {
          iVar7 = iVar3 + 1;
          *(char *)(iVar3 + param_2) =
               (char)(*(uint *)(param_1[0xf] + iVar3 * 4) / (uint)param_1[0xd]);
          iVar3 = iVar7;
        } while (iVar7 < param_1[5]);
      }
    }
    param_1[7] = param_1[7] + 1;
    param_1[8] = param_1[8] + -1;
    *param_3 = param_1[8];
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100026e0 @ 100026e0 */

undefined4 __cdecl FUN_100026e0(ushort *param_1,int *param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  ushort *puVar9;
  int local_14;
  int local_10;
  int local_c;
  
  puVar3 = param_1;
  iVar4 = *(int *)(param_1 + 6);
  iVar8 = *(int *)(param_1 + 2);
  if (iVar4 < iVar8) {
    local_14 = 0;
    if (0 < iVar4) {
      local_10 = 0;
      do {
        iVar4 = *(int *)(puVar3 + 0x14);
        iVar8 = *(int *)(iVar4 + 4 + local_10);
        iVar1 = *(int *)(iVar4 + 8 + local_10);
        iVar5 = *(int *)(iVar4 + local_10);
        iVar4 = ((int *)(iVar4 + local_10))[3];
        puVar9 = (ushort *)(param_3 + iVar5 * 6);
        local_c = 3;
        param_1 = (ushort *)(param_3 + ((iVar1 != 0) + 1 + iVar5) * 6);
        do {
          *param_2 = (uint)*param_1 * iVar4 + (uint)*puVar9 * iVar8;
          iVar5 = iVar1;
          puVar2 = puVar9;
          if (0 < iVar1) {
            do {
              *param_2 = *param_2 + (uint)puVar2[3] * *(int *)(puVar3 + 6);
              iVar5 = iVar5 + -1;
              puVar2 = puVar2 + 3;
            } while (iVar5 != 0);
          }
          param_1 = param_1 + 1;
          puVar9 = puVar9 + 1;
          param_2 = param_2 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_10 = local_10 + 0x10;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(puVar3 + 6));
      return 0;
    }
  }
  else if (iVar8 < iVar4) {
    piVar7 = *(int **)(param_1 + 0x14);
    local_14 = 0;
    if (0 < iVar8) {
      puVar3 = (ushort *)(param_3 + -4);
      iVar4 = 0;
      do {
        local_c = *piVar7;
        piVar7 = piVar7 + 1;
        iVar8 = iVar4;
        if (0 < local_c) {
          iVar8 = local_c * 3 + iVar4;
          piVar6 = param_2 + iVar4 + 2;
          do {
            iVar4 = *piVar7;
            iVar1 = piVar7[1];
            piVar6[-2] = (uint)puVar3[2] * iVar1 + (uint)puVar3[-1] * iVar4;
            piVar6[-1] = (uint)puVar3[3] * iVar1 + (uint)*puVar3 * iVar4;
            *piVar6 = (uint)puVar3[4] * iVar1 + (uint)puVar3[1] * iVar4;
            piVar7 = piVar7 + 2;
            piVar6 = piVar6 + 3;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        local_14 = local_14 + 1;
        puVar3 = puVar3 + 3;
        iVar4 = iVar8;
      } while (local_14 < *(int *)(param_1 + 2));
      return 0;
    }
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 10)) {
      do {
        param_2[iVar4] = (uint)*(ushort *)(param_3 + iVar4 * 2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 10));
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100028a0 @ 100028a0 */

undefined4 __cdecl FUN_100028a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBX;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int local_18;
  int local_14;
  int local_10;
  
  iVar10 = *(int *)(unaff_EBX + 0xc);
  iVar1 = *(int *)(unaff_EBX + 4);
  if (iVar10 < iVar1) {
    local_18 = 0;
    if (0 < iVar10) {
      local_14 = 0;
      do {
        iVar10 = *(int *)(unaff_EBX + 0x28);
        iVar1 = *(int *)(iVar10 + local_14);
        iVar2 = *(int *)(iVar10 + 8 + local_14);
        iVar3 = *(int *)(iVar10 + local_14 + 4);
        iVar4 = *(int *)(iVar10 + local_14 + 0xc);
        iVar6 = 0;
        iVar10 = param_2 + iVar1 * 3;
        do {
          *param_1 = (uint)*(byte *)(iVar10 + iVar6) * iVar3 +
                     (uint)*(byte *)(param_2 + ((iVar2 != 0) + 1 + iVar1) * 3 + iVar6) * iVar4;
          if (0 < iVar2) {
            pbVar8 = (byte *)(iVar10 + 3 + iVar6);
            iVar9 = iVar2;
            do {
              *param_1 = *param_1 + (uint)*pbVar8 * *(int *)(unaff_EBX + 0xc);
              pbVar8 = pbVar8 + 3;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          iVar6 = iVar6 + 1;
          param_1 = param_1 + 1;
        } while (iVar6 < 3);
        local_14 = local_14 + 0x10;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(unaff_EBX + 0xc));
      return 0;
    }
  }
  else if (iVar1 < iVar10) {
    piVar7 = *(int **)(unaff_EBX + 0x28);
    iVar10 = 0;
    local_18 = 0;
    if (0 < iVar1) {
      pbVar8 = (byte *)(param_2 + -2);
      do {
        local_10 = *piVar7;
        piVar7 = piVar7 + 1;
        if (0 < local_10) {
          piVar5 = param_1 + iVar10 + 2;
          iVar10 = iVar10 + local_10 * 3;
          do {
            iVar1 = *piVar7;
            iVar2 = piVar7[1];
            piVar5[-2] = (uint)pbVar8[2] * iVar2 + (uint)pbVar8[-1] * iVar1;
            piVar5[-1] = (uint)*pbVar8 * iVar1 + (uint)pbVar8[3] * iVar2;
            *piVar5 = (uint)pbVar8[1] * iVar1 + (uint)pbVar8[4] * iVar2;
            piVar7 = piVar7 + 2;
            piVar5 = piVar5 + 3;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
        }
        local_18 = local_18 + 1;
        pbVar8 = pbVar8 + 3;
      } while (local_18 < *(int *)(unaff_EBX + 4));
      return 0;
    }
  }
  else {
    iVar10 = 0;
    if (0 < *(int *)(unaff_EBX + 0x14)) {
      do {
        param_1[iVar10] = (uint)*(byte *)(iVar10 + param_2);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(unaff_EBX + 0x14));
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002a60 @ 10002a60 */

undefined4 __cdecl FUN_10002a60(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  int local_4;
  
  iVar2 = param_1;
  iVar5 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar5 < iVar1) {
    param_1 = 0;
    if (0 < iVar5) {
      local_4 = 0;
      do {
        iVar5 = *(int *)(local_4 + 8 + *(int *)(iVar2 + 0x28));
        piVar3 = (int *)(local_4 + *(int *)(iVar2 + 0x28));
        iVar1 = *piVar3;
        *param_2 = (uint)param_3[(uint)(iVar5 != 0) + iVar1 + 1] * piVar3[3] +
                   (uint)param_3[iVar1] * piVar3[1];
        if (0 < iVar5) {
          puVar4 = param_3 + iVar1 + 1;
          do {
            *param_2 = *param_2 + (uint)*puVar4 * *(int *)(iVar2 + 0xc);
            puVar4 = puVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        param_1 = param_1 + 1;
        local_4 = local_4 + 0x10;
        param_2 = param_2 + 1;
      } while (param_1 < *(int *)(iVar2 + 0xc));
      return 0;
    }
  }
  else if (iVar1 < iVar5) {
    piVar3 = *(int **)(param_1 + 0x28);
    iVar5 = 0;
    param_1 = 0;
    if (0 < iVar1) {
      do {
        local_4 = *piVar3;
        piVar3 = piVar3 + 1;
        if (0 < local_4) {
          do {
            param_2[iVar5] = (uint)*param_3 * piVar3[1] + (uint)param_3[-1] * *piVar3;
            piVar3 = piVar3 + 2;
            iVar5 = iVar5 + 1;
            local_4 = local_4 + -1;
          } while (local_4 != 0);
        }
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
      } while (param_1 < *(int *)(iVar2 + 4));
      return 0;
    }
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        param_2[iVar5] = (uint)param_3[iVar5];
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x14));
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002b90 @ 10002b90 */

undefined4 __thiscall FUN_10002b90(void *this,int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar5 = param_1;
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar4 < iVar1) {
    param_1 = 0;
    if (0 < iVar4) {
      local_8 = 0;
      do {
        iVar4 = *(int *)(local_8 + 8 + *(int *)(iVar5 + 0x28));
        piVar2 = (int *)(local_8 + *(int *)(iVar5 + 0x28));
        iVar1 = *piVar2;
        iVar3 = 0;
        *param_2 = (uint)*(byte *)((uint)(iVar4 != 0) + iVar1 + 1 + (int)this) * piVar2[3] +
                   (uint)*(byte *)(iVar1 + (int)this) * piVar2[1];
        if (0 < iVar4) {
          do {
            *param_2 = *param_2 +
                       (uint)*(byte *)((int)this + iVar3 + iVar1 + 1) * *(int *)(iVar5 + 0xc);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar4);
        }
        param_1 = param_1 + 1;
        local_8 = local_8 + 0x10;
        param_2 = param_2 + 1;
      } while (param_1 < *(int *)(iVar5 + 0xc));
      return 0;
    }
  }
  else if (iVar1 < iVar4) {
    piVar2 = *(int **)(param_1 + 0x28);
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        local_8 = *piVar2;
        piVar2 = piVar2 + 1;
        if (0 < local_8) {
          do {
            param_2[iVar5] =
                 (uint)*(byte *)(iVar4 + (int)this) * piVar2[1] +
                 (uint)*(byte *)(iVar4 + -1 + (int)this) * *piVar2;
            piVar2 = piVar2 + 2;
            iVar5 = iVar5 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 4));
      return 0;
    }
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        param_2[iVar4] = (uint)*(byte *)(iVar4 + (int)this);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x14));
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002cc0 @ 10002cc0 */

undefined4 __cdecl
FUN_10002cc0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int *_Dst;
  int *piVar3;
  
  *param_1 = 0;
  if (((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) || (param_5 == 0)) ||
     (((param_6 != 0x18 && (param_6 != 0x30)) && ((param_6 != 8 && (param_6 != 0x10)))))) {
    FUN_10002470(param_1);
    return 0x6f0;
  }
  _Dst = FUN_10005263((uint *)0x54);
  if (_Dst != (int *)0x0) {
    *param_1 = (int)_Dst;
    _memset(_Dst,0,0x54);
    *_Dst = param_6;
    _Dst[1] = param_4;
    _Dst[2] = param_5;
    _Dst[3] = param_2;
    _Dst[4] = param_3;
    if ((*_Dst == 0x30) || (*_Dst == 0x18)) {
      _Dst[5] = _Dst[3] * 3;
    }
    else {
      _Dst[5] = _Dst[3];
    }
    piVar3 = FUN_10005263((uint *)((_Dst[3] + 1) * 0xc));
    _Dst[0xf] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      piVar3 = FUN_10005263((uint *)((_Dst[3] + 1) * 0xc));
      _Dst[0x10] = (int)piVar3;
      if (piVar3 != (int *)0x0) {
        piVar3 = FUN_10005263((uint *)((_Dst[3] + 1) * 0x10));
        _Dst[10] = (int)piVar3;
        if (piVar3 != (int *)0x0) {
          piVar3 = FUN_10005263((uint *)((_Dst[4] + 1) * 0x10));
          _Dst[0xb] = (int)piVar3;
          if (piVar3 != (int *)0x0) {
            iVar1 = _Dst[1];
            if (_Dst[3] < iVar1) {
              FUN_100022f0((void *)_Dst[10],iVar1);
              _Dst[0xc] = _Dst[1];
            }
            else if (iVar1 < _Dst[3]) {
              _Dst[0xc] = 0x10000;
              FUN_10002350((int *)_Dst[10],_Dst[3],_Dst[1]);
            }
            else {
              _Dst[0xc] = 1;
            }
            iVar1 = _Dst[2];
            if (_Dst[4] < iVar1) {
              FUN_100022f0((void *)_Dst[0xb],iVar1);
              _Dst[0xd] = _Dst[2];
            }
            else if (iVar1 < _Dst[4]) {
              _Dst[0xd] = 0x10000;
              FUN_10002350((int *)_Dst[0xb],_Dst[4],_Dst[2]);
            }
            else {
              _Dst[0xd] = 1;
            }
            if ((*_Dst == 0x30) || (*_Dst == 0x10)) {
              uVar2 = _Dst[0xc];
              if (0x10000 < uVar2) goto LAB_10002ea6;
              if ((_Dst[0xd] * uVar2 != 0) && (_Dst[0xd] * uVar2 < 0x10001)) {
                _Dst[0xd] = _Dst[0xd] * uVar2;
                _Dst[0xc] = 1;
              }
            }
            else {
              uVar2 = _Dst[0xc];
              if (0x1000000 < uVar2) {
LAB_10002ea6:
                FUN_10002470(param_1);
                return 0x6f1;
              }
              if ((_Dst[0xd] * uVar2 != 0) && (_Dst[0xd] * uVar2 < 0x1000001)) {
                _Dst[0xd] = _Dst[0xd] * uVar2;
                _Dst[0xc] = 1;
                return 0;
              }
            }
            return 0;
          }
        }
      }
    }
  }
  FUN_10002470(param_1);
  return 0x301;
}



/**************************************************/

/* Function: FUN_10002f20 @ 10002f20 */

int __fastcall FUN_10002f20(ushort *param_1)

{
  ushort *in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int iVar3;
  
  iVar3 = 0;
  switch(*(undefined4 *)in_EAX) {
  case 8:
    iVar3 = FUN_10002b90(param_1,(int)in_EAX,unaff_ESI);
    break;
  default:
    goto switchD_10002f37_caseD_9;
  case 0x10:
    iVar3 = FUN_10002a60((int)in_EAX,unaff_ESI,param_1);
    break;
  case 0x18:
    iVar3 = FUN_100028a0(unaff_ESI,(int)param_1);
    break;
  case 0x30:
    iVar3 = FUN_100026e0(in_EAX,unaff_ESI,(int)param_1);
  }
  if (iVar3 == 0) {
switchD_10002f37_caseD_9:
    if (1 < *(uint *)(in_EAX + 0x18)) {
      if (*(uint *)(in_EAX + 0x18) == 0x10000) {
        iVar1 = 0;
        if (0 < *(int *)(in_EAX + 10)) {
          do {
            unaff_ESI[iVar1] = (uint)*(ushort *)((int)unaff_ESI + iVar1 * 4 + 2);
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(in_EAX + 10));
          return iVar3;
        }
      }
      else {
        iVar1 = 0;
        if (0 < *(int *)(in_EAX + 10)) {
          do {
            iVar2 = iVar1 + 1;
            unaff_ESI[iVar1] = (uint)unaff_ESI[iVar1] / *(uint *)(in_EAX + 0x18);
            iVar1 = iVar2;
          } while (iVar2 < *(int *)(in_EAX + 10));
        }
      }
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_10003010 @ 10003010 */

int __cdecl FUN_10003010(int param_1,ushort *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 8)) {
      iVar3 = FUN_10002f20(param_2);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *param_3 = *(undefined4 *)(param_1 + 0x20);
      return iVar3;
    }
    iVar3 = FUN_10002f20(param_2);
    *(uint *)(param_1 + 0x38) = (uint)(*(int *)(param_1 + 0x38) == 0);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24) * 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    *param_3 = uVar2;
    return iVar3;
  }
  iVar5 = param_1;
  if (((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x4c) == 0)) &&
     (*(int *)(param_1 + 0x50) == 0)) {
    iVar4 = *(int *)(param_1 + 0x1c) * 0x10 + *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0xc);
  }
  while( true ) {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar3 = FUN_10002f20(param_2);
    }
    iVar4 = *(int *)(param_1 + 0x48);
    if (iVar4 == 0) break;
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        *(int *)(*(int *)(param_1 + 0x3c) + iVar5 * 4) =
             *(int *)(*(int *)(param_1 + 0x40) + iVar5 * 4) * iVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x44) == 0) goto LAB_1000310a;
    *(undefined4 *)(param_1 + 0x44) = 0;
    iVar5 = iVar4;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) * 0x10 + 0x14 + *(int *)(param_1 + 0x2c)) !=
          *(int *)(param_1 + 0x10)) {
        *(undefined4 *)(param_1 + 0x44) = 1;
      }
      *(undefined4 *)(param_1 + 0x20) = 1;
      iVar5 = iVar4;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    iVar5 = *(int *)(param_1 + 0x10);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x3c) + iVar4 * 4);
      *piVar1 = *piVar1 + *(int *)(*(int *)(param_1 + 0x40) + iVar4 * 4) * iVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
LAB_1000310a:
  if (((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x4c) == 0)) &&
     (*(int *)(param_1 + 0x50) == 0)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *param_3 = 1;
    return iVar3;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *param_3 = 0;
  return iVar3;
}



/**************************************************/

/* Function: DeleteColorTransform @ 100031a6 */

void DeleteColorTransform(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteColorTransform();
  return;
}



/**************************************************/

/* Function: TranslateColors @ 100031ac */

void TranslateColors(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TranslateColors();
  return;
}



/**************************************************/

/* Function: GetColorDirectoryW @ 100031b2 */

void GetColorDirectoryW(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetColorDirectoryW();
  return;
}



/**************************************************/

/* Function: EnumColorProfilesW @ 100031b8 */

void EnumColorProfilesW(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnumColorProfilesW();
  return;
}



/**************************************************/

/* Function: CloseColorProfile @ 100031be */

void CloseColorProfile(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseColorProfile();
  return;
}



/**************************************************/

/* Function: GetColorProfileHeader @ 100031c4 */

void GetColorProfileHeader(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetColorProfileHeader();
  return;
}



/**************************************************/

/* Function: OpenColorProfileW @ 100031ca */

void OpenColorProfileW(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OpenColorProfileW();
  return;
}



/**************************************************/

/* Function: IsColorProfileValid @ 100031d0 */

void IsColorProfileValid(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsColorProfileValid();
  return;
}



/**************************************************/

/* Function: CreateColorTransformW @ 100031d6 */

void CreateColorTransformW(void)

{
                    /* WARNING: Could not recover jumptable at 0x100031d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateColorTransformW();
  return;
}



/**************************************************/

/* Function: FUN_100031e0 @ 100031e0 */

undefined4 __fastcall FUN_100031e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/**************************************************/

/* Function: FUN_100031f0 @ 100031f0 */

undefined4 __fastcall FUN_100031f0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/**************************************************/

/* Function: FUN_10003200 @ 10003200 */

undefined4 __fastcall FUN_10003200(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/**************************************************/

/* Function: FUN_10003210 @ 10003210 */

undefined4 __fastcall FUN_10003210(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/**************************************************/

/* Function: FUN_10003220 @ 10003220 */

size_t __thiscall FUN_10003220(void *this,void *param_1,size_t param_2,undefined4 param_3)

{
  int *_Dst;
  
  *(undefined4 *)((int)this + 0x10) = param_3;
  if (*(void **)((int)this + 8) != (void *)0x0) {
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != (void *)0x0) {
    if ((int)param_2 < 0) {
      param_2 = 0;
    }
    *(size_t *)((int)this + 0xc) = param_2;
    _Dst = FUN_10005263((uint *)(param_2 + 1));
    *(int **)((int)this + 8) = _Dst;
    _memset(_Dst,0,param_2 + 1);
    _memcpy(*(void **)((int)this + 8),param_1,param_2);
    return param_2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003290 @ 10003290 */

int __thiscall FUN_10003290(void *this,int param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  LPCWSTR lpString1;
  LPCWSTR lpString2;
  int iVar6;
  
  iVar6 = *(int *)((int)this + 0x10);
  iVar1 = (**(code **)(*param_2 + 0x18))();
  iVar1 = iVar1 - iVar6;
  if (iVar1 == 0) {
    iVar1 = param_1;
    switch(iVar6) {
    case 0:
      psVar2 = (short *)(**(code **)(*(int *)this + 8))();
      psVar3 = (short *)(**(code **)(*param_2 + 8))();
      iVar1 = (int)*psVar2 - (int)*psVar3;
      break;
    case 1:
      piVar4 = (int *)(**(code **)(*(int *)this + 8))();
      piVar5 = (int *)(**(code **)(*param_2 + 8))();
      iVar1 = *piVar4 - *piVar5;
      break;
    case 2:
      lpString1 = (LPCWSTR)(**(code **)(*(int *)this + 8))();
      lpString2 = (LPCWSTR)(**(code **)(*param_2 + 8))();
      iVar1 = lstrcmpW(lpString1,lpString2);
      break;
    case 3:
      iVar6 = (**(code **)(*(int *)this + 0xc))();
      iVar1 = (**(code **)(*param_2 + 0xc))();
      iVar1 = iVar6 - iVar1;
    }
  }
  if (param_1 != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_10003350 @ 10003350 */

LPCWSTR __thiscall FUN_10003350(void *this,int param_1,LPCWSTR param_2)

{
  short *psVar1;
  int *piVar2;
  LPCWSTR lpString2;
  
  switch(*(undefined4 *)((int)this + 0x10)) {
  case 0:
    psVar1 = (short *)(**(code **)(*(int *)this + 8))();
    param_2 = (LPCWSTR)((int)*param_2 - (int)*psVar1);
    break;
  case 1:
    piVar2 = (int *)(**(code **)(*(int *)this + 8))();
    param_2 = (LPCWSTR)(*(int *)param_2 - *piVar2);
    break;
  case 2:
    lpString2 = (LPCWSTR)(**(code **)(*(int *)this + 8))();
    param_2 = (LPCWSTR)lstrcmpW(param_2,lpString2);
    break;
  case 3:
    param_2 = (LPCWSTR)0x0;
  }
  if (param_1 != 0) {
    param_2 = (LPCWSTR)-(int)param_2;
  }
  return param_2;
}



/**************************************************/

/* Function: FUN_100033c0 @ 100033c0 */

undefined4 * __fastcall FUN_100033c0(undefined4 *param_1)

{
  DWORD DVar1;
  int *piVar2;
  
  *param_1 = AssociationSet::vftable;
  DVar1 = GetVersion();
  param_1[5] = ~(DVar1 >> 0x1f) & 1;
  param_1[3] = 0x40;
  param_1[2] = 0;
  piVar2 = FUN_10005263((uint *)0x100);
  param_1[1] = piVar2;
  return param_1;
}



/**************************************************/

/* Function: FUN_10003400 @ 10003400 */

undefined4 __thiscall FUN_10003400(void *this,LPCWSTR param_1)

{
  LPCWSTR lpString1;
  int iVar1;
  int iVar2;
  LPCWSTR lpString2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      lpString2 = param_1;
      lpString1 = (LPCWSTR)(**(code **)**(undefined4 **)(*(int *)((int)this + 4) + iVar2 * 4))();
      iVar1 = lstrcmpW(lpString1,lpString2);
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)((int)this + 4) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 8));
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003450 @ 10003450 */

undefined4 __thiscall FUN_10003450(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
}



/**************************************************/

/* Function: FUN_10003460 @ 10003460 */

void __thiscall FUN_10003460(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (*(code *)**(undefined4 **)this)(param_1);
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x14))(param_1,L"empty",2);
    iVar2 = (*(code *)**(undefined4 **)this)(param_1);
    if (iVar2 == 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_100034a0 @ 100034a0 */

undefined4 __thiscall FUN_100034a0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)this)(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))();
    return uVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100034c0 @ 100034c0 */

undefined4 __thiscall FUN_100034c0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)this)(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xc))();
    return uVar2;
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_100034f0 @ 100034f0 */

int __thiscall FUN_100034f0(void *this,LPCWSTR param_1)

{
  void *_Dst;
  size_t _Size;
  undefined4 *puVar1;
  LPCWSTR lpString1;
  int iVar2;
  int iVar3;
  LPCWSTR lpString2;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      lpString2 = param_1;
      lpString1 = (LPCWSTR)(**(code **)**(undefined4 **)(*(int *)((int)this + 4) + iVar3 * 4))();
      iVar2 = lstrcmpW(lpString1,lpString2);
      if (iVar2 == 0) {
        puVar1 = *(undefined4 **)(*(int *)((int)this + 4) + iVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = Association::vftable;
          if ((void *)puVar1[2] != (void *)0x0) {
            _free((void *)puVar1[2]);
          }
          if ((void *)puVar1[1] != (void *)0x0) {
            _free((void *)puVar1[1]);
          }
          FUN_100047f2(puVar1);
        }
        _Size = (*(int *)((int)this + 8) - iVar3) * 4 - 4;
        if (0 < (int)_Size) {
          _Dst = (void *)(*(int *)((int)this + 4) + iVar3 * 4);
          _memcpy(_Dst,(void *)((int)_Dst + 4),_Size);
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        *(undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = 0;
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 8));
  }
  return -1;
}



/**************************************************/

/* Function: FUN_100035b0 @ 100035b0 */

undefined4 __thiscall FUN_100035b0(void *this,int param_1)

{
  void *_Dst;
  size_t _Size;
  undefined4 *puVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8))) {
    puVar1 = *(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = Association::vftable;
      if ((void *)puVar1[2] != (void *)0x0) {
        _free((void *)puVar1[2]);
      }
      if ((void *)puVar1[1] != (void *)0x0) {
        _free((void *)puVar1[1]);
      }
      FUN_100047f2(puVar1);
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

/* Function: FUN_10003640 @ 10003640 */

undefined4 __fastcall FUN_10003640(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  while (0 < iVar1) {
    (**(code **)(*param_1 + 0x20))(0);
    iVar1 = param_1[2];
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003670 @ 10003670 */

void __thiscall
FUN_10003670(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4)

{
  int iVar1;
  LSTATUS LVar2;
  int *lpData;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  DWORD dwIndex;
  undefined4 uVar3;
  uint *local_230;
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
  
  local_4 = DAT_100130b0 ^ (uint)&local_230;
  local_224 = param_2;
  local_210 = param_3;
  local_21c = (HKEY)0x0;
  local_220 = (HKEY)0x0;
  local_218 = (HKEY)0x0;
  local_22c = (HKEY)0x0;
  local_230 = (uint *)0x0;
  local_214 = 0;
  local_228 = 0;
  (**(code **)(*(int *)this + 0x28))();
  iVar1 = RegOpenKeyExW(param_4,L"Software",0,0x20019,&local_21c);
  if (iVar1 == 0) {
    iVar1 = RegOpenKeyExW(local_21c,param_1,0,0x20019,&local_220);
    if (iVar1 == 0) {
      iVar1 = RegOpenKeyExW(local_220,local_224,0,0x20019,&local_218);
      if (iVar1 == 0) {
        iVar1 = RegOpenKeyExW(local_218,local_210,0,0x20019,&local_22c);
        if (iVar1 == 0) {
          dwIndex = 0;
          local_224 = (LPCWSTR)0x208;
          iVar1 = RegEnumValueW(local_22c,0,aWStack_20c,(LPDWORD)&local_224,(LPDWORD)0x0,
                                (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
          uVar3 = extraout_EDX_03;
          while (iVar1 == 0) {
            dwIndex = dwIndex + 1;
            LVar2 = RegQueryValueExW(local_22c,aWStack_20c,(LPDWORD)0x0,&local_214,(LPBYTE)0x0,
                                     (LPDWORD)&local_230);
            if ((LVar2 != 0) || (lpData = FUN_10005263(local_230), lpData == (int *)0x0))
            goto LAB_10003820;
            RegQueryValueExW(local_22c,aWStack_20c,(LPDWORD)0x0,&local_214,(LPBYTE)lpData,
                             (LPDWORD)&local_230);
            switch(local_214) {
            case 0:
              uVar3 = 0;
              break;
            case 1:
              uVar3 = 2;
              goto LAB_100037e4;
            case 2:
            case 3:
            case 6:
            case 7:
            case 8:
              uVar3 = 3;
LAB_100037e4:
              (**(code **)(*(int *)this + 0x10))(aWStack_20c,lpData,local_230,uVar3);
              goto switchD_100037db_default;
            case 4:
            case 5:
              uVar3 = 1;
              break;
            default:
              goto switchD_100037db_default;
            }
            (**(code **)(*(int *)this + 0x10))(aWStack_20c,lpData,local_230,uVar3);
switchD_100037db_default:
            _free(lpData);
LAB_10003820:
            local_224 = (LPCWSTR)0x208;
            iVar1 = RegEnumValueW(local_22c,dwIndex,aWStack_20c,(LPDWORD)&local_224,(LPDWORD)0x0,
                                  (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
            uVar3 = extraout_EDX_04;
          }
        }
        else {
          local_228 = 0xfffffffd;
          uVar3 = extraout_EDX_02;
        }
      }
      else {
        local_228 = 0xfffffffc;
        uVar3 = extraout_EDX_01;
      }
    }
    else {
      local_228 = 0xfffffffb;
      uVar3 = extraout_EDX_00;
    }
  }
  else {
    local_228 = 0xfffffffa;
    uVar3 = extraout_EDX;
  }
  *(int *)((int)this + 0x10) = iVar1;
  if (local_22c != (HKEY)0x0) {
    RegCloseKey(local_22c);
    uVar3 = extraout_EDX_05;
  }
  if (local_218 != (HKEY)0x0) {
    RegCloseKey(local_218);
    uVar3 = extraout_EDX_06;
  }
  if (local_220 != (HKEY)0x0) {
    RegCloseKey(local_220);
    uVar3 = extraout_EDX_07;
  }
  if (local_21c != (HKEY)0x0) {
    RegCloseKey(local_21c);
    uVar3 = extraout_EDX_08;
  }
  FUN_10004d96(local_4 ^ (uint)&local_230,uVar3);
  return;
}



/**************************************************/

/* Function: FUN_100038f0 @ 100038f0 */

void __thiscall
FUN_100038f0(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4)

{
  int *piVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD cbData;
  BYTE *lpData;
  LPCWSTR lpValueName;
  void *extraout_EDX;
  void *extraout_EDX_00;
  void *extraout_EDX_01;
  void *extraout_EDX_02;
  void *extraout_EDX_03;
  void *extraout_EDX_04;
  void *extraout_EDX_05;
  void *pvVar5;
  void *extraout_EDX_06;
  void *extraout_EDX_07;
  void *extraout_EDX_08;
  void *extraout_EDX_09;
  LPCWSTR pWVar6;
  DWORD Reserved;
  LPCWSTR dwType;
  HKEY local_234;
  HKEY local_230;
  HKEY local_22c;
  HKEY local_228;
  undefined4 local_224;
  LPCWSTR local_220;
  void *local_21c;
  DWORD local_218;
  LPCWSTR local_214;
  LPCWSTR local_210;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_100130b0 ^ (uint)&local_234;
  local_210 = param_1;
  local_220 = param_2;
  local_214 = param_3;
  local_228 = (HKEY)0x0;
  local_230 = (HKEY)0x0;
  local_22c = (HKEY)0x0;
  local_234 = (HKEY)0x0;
  local_224 = 0;
  local_218 = 0;
  local_21c = this;
  if ((param_4 == (HKEY)0x80000001) &&
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Software",0,0x20019,&local_228), LVar2 == 0)) {
    LVar2 = RegOpenKeyExW(local_228,param_1,0,0x20019,&local_230);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_228,param_1,0,L"option",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_230,
                      &local_218);
    }
    pWVar6 = local_220;
    LVar2 = RegOpenKeyExW(local_230,local_220,0,0x20019,&local_22c);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_230,pWVar6,0,L"option",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_22c,
                      &local_218);
    }
    RegCloseKey(local_22c);
    RegCloseKey(local_230);
    RegCloseKey(local_228);
  }
  LVar2 = RegOpenKeyExW(param_4,L"Software",0,0x20019,&local_228);
  if (LVar2 == 0) {
    LVar2 = RegOpenKeyExW(local_228,local_210,0,0x20019,&local_230);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExW(local_230,local_220,0,0x20019,&local_22c);
      if (LVar2 == 0) {
        LVar2 = RegOpenKeyExW(local_22c,local_214,0,0x2001f,&local_234);
        if (LVar2 != 0) {
          pvVar5 = extraout_EDX_02;
          if (param_4 == (HKEY)0x80000001) {
            LVar2 = RegCreateKeyExW(local_22c,local_214,0,L"option",0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_234,&local_218);
            pvVar5 = extraout_EDX_03;
          }
          if (LVar2 != 0) {
            local_224 = 0xffffffff;
            goto LAB_10003bd8;
          }
        }
        local_220 = (LPCWSTR)0x104;
        iVar3 = RegEnumValueW(local_234,0,local_20c,(LPDWORD)&local_220,(LPDWORD)0x0,(LPDWORD)0x0,
                              (LPBYTE)0x0,(LPDWORD)0x0);
        while (iVar3 == 0) {
          RegDeleteValueW(local_234,local_20c);
          local_220 = (LPCWSTR)0x104;
          iVar3 = RegEnumValueW(local_234,0,local_20c,(LPDWORD)&local_220,(LPDWORD)0x0,(LPDWORD)0x0,
                                (LPBYTE)0x0,(LPDWORD)0x0);
        }
        RegFlushKey(local_234);
        iVar3 = 0;
        pvVar5 = extraout_EDX_04;
        pWVar6 = local_210;
        if (0 < *(int *)((int)local_21c + 8)) {
          do {
            piVar1 = *(int **)(*(int *)((int)local_21c + 4) + iVar3 * 4);
            uVar4 = (**(code **)(*piVar1 + 0x18))();
            switch(uVar4) {
            case 0:
              pWVar6 = (LPCWSTR)0x0;
              break;
            case 1:
              pWVar6 = (LPCWSTR)0x4;
              break;
            case 2:
              pWVar6 = (LPCWSTR)0x1;
              break;
            case 3:
              pWVar6 = (LPCWSTR)0x3;
            }
            cbData = (**(code **)(*piVar1 + 0xc))();
            lpData = (BYTE *)(**(code **)(*piVar1 + 8))();
            Reserved = 0;
            dwType = pWVar6;
            lpValueName = (LPCWSTR)(**(code **)*piVar1)();
            RegSetValueExW(local_234,lpValueName,Reserved,(DWORD)dwType,lpData,cbData);
            iVar3 = iVar3 + 1;
            pvVar5 = extraout_EDX_05;
          } while (iVar3 < *(int *)((int)local_21c + 8));
        }
      }
      else {
        local_224 = 0xfffffffe;
        pvVar5 = extraout_EDX_01;
      }
    }
    else {
      local_224 = 0xfffffffd;
      pvVar5 = extraout_EDX_00;
    }
  }
  else {
    local_224 = 0xfffffffc;
    pvVar5 = extraout_EDX;
  }
LAB_10003bd8:
  if (LVar2 != 0) {
    *(LSTATUS *)((int)local_21c + 0x10) = LVar2;
    pvVar5 = local_21c;
  }
  if (local_234 != (HKEY)0x0) {
    RegCloseKey(local_234);
    pvVar5 = extraout_EDX_06;
  }
  if (local_22c != (HKEY)0x0) {
    RegCloseKey(local_22c);
    pvVar5 = extraout_EDX_07;
  }
  if (local_230 != (HKEY)0x0) {
    RegCloseKey(local_230);
    pvVar5 = extraout_EDX_08;
  }
  if (local_228 != (HKEY)0x0) {
    RegCloseKey(local_228);
    pvVar5 = extraout_EDX_09;
  }
  FUN_10004d96(local_4 ^ (uint)&local_234,pvVar5);
  return;
}



/**************************************************/

/* Function: FUN_10003c50 @ 10003c50 */

void __thiscall
FUN_10003c50(void *this,LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
            LPCWSTR param_5,HKEY param_6)

{
  int iVar1;
  LSTATUS LVar2;
  int *lpData;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  DWORD dwIndex;
  undefined4 uVar3;
  undefined4 local_238;
  uint *local_234;
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
  
  local_4 = DAT_100130b0 ^ (uint)&local_238;
  local_22c = param_2;
  local_214 = param_4;
  local_210 = param_5;
  local_224 = (HKEY)0x0;
  local_21c = (HKEY)0x0;
  local_218 = (HKEY)0x0;
  local_228 = (HKEY)0x0;
  local_230 = (HKEY)0x0;
  local_234 = (uint *)0x0;
  local_220 = 0;
  local_238 = 0;
  (**(code **)(*(int *)this + 0x28))();
  iVar1 = RegOpenKeyExW(param_6,L"Software",0,0x20019,&local_224);
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
            local_22c = (LPCWSTR)0x208;
            iVar1 = RegEnumValueW(local_230,0,aWStack_20c,(LPDWORD)&local_22c,(LPDWORD)0x0,
                                  (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
            uVar3 = extraout_EDX_04;
            while (iVar1 == 0) {
              dwIndex = dwIndex + 1;
              LVar2 = RegQueryValueExW(local_230,aWStack_20c,(LPDWORD)0x0,&local_220,(LPBYTE)0x0,
                                       (LPDWORD)&local_234);
              if ((LVar2 != 0) || (lpData = FUN_10005263(local_234), lpData == (int *)0x0))
              goto LAB_10003e30;
              RegQueryValueExW(local_230,aWStack_20c,(LPDWORD)0x0,&local_220,(LPBYTE)lpData,
                               (LPDWORD)&local_234);
              switch(local_220) {
              case 0:
                uVar3 = 0;
                break;
              case 1:
                uVar3 = 2;
                goto LAB_10003df4;
              case 2:
              case 3:
              case 6:
              case 7:
              case 8:
                uVar3 = 3;
LAB_10003df4:
                (**(code **)(*(int *)this + 0x10))(aWStack_20c,lpData,local_234,uVar3);
                goto switchD_10003deb_default;
              case 4:
              case 5:
                uVar3 = 1;
                break;
              default:
                goto switchD_10003deb_default;
              }
              (**(code **)(*(int *)this + 0x10))(aWStack_20c,lpData,local_234,uVar3);
switchD_10003deb_default:
              _free(lpData);
LAB_10003e30:
              local_22c = (LPCWSTR)0x208;
              iVar1 = RegEnumValueW(local_230,dwIndex,aWStack_20c,(LPDWORD)&local_22c,(LPDWORD)0x0,
                                    (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
              uVar3 = extraout_EDX_05;
            }
          }
          else {
            local_238 = 0xfffffff9;
            uVar3 = extraout_EDX_03;
          }
        }
        else {
          local_238 = 0xfffffffa;
          uVar3 = extraout_EDX_02;
        }
      }
      else {
        local_238 = 0xfffffffc;
        uVar3 = extraout_EDX_01;
      }
    }
    else {
      local_238 = 0xfffffffd;
      uVar3 = extraout_EDX_00;
    }
  }
  else {
    local_238 = 0xfffffffe;
    uVar3 = extraout_EDX;
  }
  *(int *)((int)this + 0x10) = iVar1;
  if (local_230 != (HKEY)0x0) {
    RegCloseKey(local_230);
    uVar3 = extraout_EDX_06;
  }
  if (local_228 != (HKEY)0x0) {
    RegCloseKey(local_228);
    uVar3 = extraout_EDX_07;
  }
  if (local_218 != (HKEY)0x0) {
    RegCloseKey(local_218);
    uVar3 = extraout_EDX_08;
  }
  if (local_21c != (HKEY)0x0) {
    RegCloseKey(local_21c);
    uVar3 = extraout_EDX_09;
  }
  if (local_224 != (HKEY)0x0) {
    RegCloseKey(local_224);
    uVar3 = extraout_EDX_10;
  }
  FUN_10004d96(local_4 ^ (uint)&local_238,uVar3);
  return;
}



/**************************************************/

/* Function: FUN_10003f10 @ 10003f10 */

void __thiscall
FUN_10003f10(void *this,LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
            LPCWSTR param_5,HKEY param_6)

{
  int *piVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 uVar4;
  BYTE *lpData;
  LPCWSTR lpValueName;
  void *extraout_EDX;
  void *extraout_EDX_00;
  void *extraout_EDX_01;
  void *extraout_EDX_02;
  void *extraout_EDX_03;
  void *extraout_EDX_04;
  void *extraout_EDX_05;
  void *extraout_EDX_06;
  void *pvVar5;
  void *extraout_EDX_07;
  void *extraout_EDX_08;
  void *extraout_EDX_09;
  void *extraout_EDX_10;
  void *extraout_EDX_11;
  DWORD DVar6;
  DWORD Reserved;
  LPCWSTR pWVar7;
  HKEY local_23c;
  LPCWSTR local_238;
  HKEY local_234;
  HKEY local_230;
  undefined4 local_22c;
  HKEY local_228;
  HKEY local_224;
  HKEY local_220;
  DWORD local_21c;
  void *local_218;
  LPCWSTR local_214;
  LPCWSTR local_210;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_100130b0 ^ (uint)&local_23c;
  local_238 = param_2;
  local_214 = param_4;
  local_210 = param_5;
  local_220 = param_6;
  local_224 = (HKEY)0x0;
  local_23c = (HKEY)0x0;
  local_234 = (HKEY)0x0;
  local_230 = (HKEY)0x0;
  local_228 = (HKEY)0x0;
  local_22c = 0;
  local_21c = 0;
  local_218 = this;
  if ((param_6 == (HKEY)0x80000001) &&
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Software",0,0x20019,&local_224), LVar2 == 0)) {
    LVar2 = RegOpenKeyExW(local_224,param_1,0,0x20019,&local_23c);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_224,param_1,0,L"option",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_23c,
                      &local_21c);
    }
    LVar2 = RegOpenKeyExW(local_23c,local_238,0,0x20019,&local_234);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_23c,local_238,0,L"option",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_234,&local_21c);
    }
    LVar2 = RegOpenKeyExW(local_234,local_214,0,0x20019,&local_230);
    if (LVar2 != 0) {
      RegCreateKeyExW(local_234,local_214,0,L"option",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                      &local_230,&local_21c);
    }
    RegCloseKey(local_230);
    RegCloseKey(local_234);
    RegCloseKey(local_23c);
    RegCloseKey(local_224);
    param_6 = local_220;
  }
  LVar2 = RegOpenKeyExW(param_6,L"Software",0,0x20019,&local_224);
  if (LVar2 == 0) {
    LVar2 = RegOpenKeyExW(local_224,param_1,0,0x20019,&local_23c);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExW(local_23c,local_238,0,0x20019,&local_234);
      if (LVar2 == 0) {
        LVar2 = RegOpenKeyExW(local_234,local_214,0,0x20019,&local_230);
        pWVar7 = local_210;
        if (LVar2 == 0) {
          LVar2 = RegOpenKeyExW(local_230,local_210,0,0x2001f,&local_228);
          if (LVar2 != 0) {
            pvVar5 = extraout_EDX_03;
            if (local_220 == (HKEY)0x80000001) {
              LVar2 = RegCreateKeyExW(local_230,pWVar7,0,L"option",0,0x2001f,
                                      (LPSECURITY_ATTRIBUTES)0x0,&local_228,&local_21c);
              pvVar5 = extraout_EDX_04;
            }
            if (LVar2 != 0) {
              local_22c = 0xfffffff9;
              goto LAB_1000426f;
            }
          }
          DVar6 = 0;
          local_220 = (HKEY)0x208;
          iVar3 = RegEnumValueW(local_228,0,local_20c,(LPDWORD)&local_220,(LPDWORD)0x0,(LPDWORD)0x0,
                                (LPBYTE)0x0,(LPDWORD)0x0);
          pvVar5 = extraout_EDX_05;
          while (iVar3 == 0) {
            DVar6 = DVar6 + 1;
            RegDeleteValueW(local_228,local_20c);
            iVar3 = RegEnumValueW(local_228,DVar6,local_20c,(LPDWORD)&local_220,(LPDWORD)0x0,
                                  (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
            pvVar5 = extraout_EDX_06;
          }
          iVar3 = 0;
          if (0 < *(int *)((int)local_218 + 8)) {
            do {
              piVar1 = *(int **)(*(int *)((int)local_218 + 4) + iVar3 * 4);
              uVar4 = (**(code **)(*piVar1 + 0x18))();
              switch(uVar4) {
              case 0:
                local_238 = (LPCWSTR)0x0;
                break;
              case 1:
                local_238 = (LPCWSTR)0x4;
                break;
              case 2:
                local_238 = (LPCWSTR)0x1;
                break;
              case 3:
                local_238 = (LPCWSTR)0x3;
              }
              DVar6 = (**(code **)(*piVar1 + 0xc))();
              lpData = (BYTE *)(**(code **)(*piVar1 + 8))();
              Reserved = 0;
              pWVar7 = local_238;
              lpValueName = (LPCWSTR)(**(code **)*piVar1)();
              RegSetValueExW(local_228,lpValueName,Reserved,(DWORD)pWVar7,lpData,DVar6);
              iVar3 = iVar3 + 1;
              pvVar5 = local_218;
            } while (iVar3 < *(int *)((int)local_218 + 8));
          }
        }
        else {
          local_22c = 0xfffffffa;
          pvVar5 = extraout_EDX_02;
        }
      }
      else {
        local_22c = 0xfffffffc;
        pvVar5 = extraout_EDX_01;
      }
    }
    else {
      local_22c = 0xfffffffd;
      pvVar5 = extraout_EDX_00;
    }
  }
  else {
    local_22c = 0xfffffffe;
    pvVar5 = extraout_EDX;
  }
LAB_1000426f:
  if (LVar2 != 0) {
    *(LSTATUS *)((int)local_218 + 0x10) = LVar2;
  }
  if (local_228 != (HKEY)0x0) {
    RegCloseKey(local_228);
    pvVar5 = extraout_EDX_07;
  }
  if (local_230 != (HKEY)0x0) {
    RegCloseKey(local_230);
    pvVar5 = extraout_EDX_08;
  }
  if (local_234 != (HKEY)0x0) {
    RegCloseKey(local_234);
    pvVar5 = extraout_EDX_09;
  }
  if (local_23c != (HKEY)0x0) {
    RegCloseKey(local_23c);
    pvVar5 = extraout_EDX_10;
  }
  if (local_224 != (HKEY)0x0) {
    RegCloseKey(local_224);
    pvVar5 = extraout_EDX_11;
  }
  FUN_10004d96(local_4 ^ (uint)&local_23c,pvVar5);
  return;
}



/**************************************************/

/* Function: FUN_100042f0 @ 100042f0 */

void __thiscall FUN_100042f0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x2c))(L"Canon",&DAT_1000f35c,0,L"Devices",param_1,0x80000002);
  return;
}



/**************************************************/

/* Function: FUN_10004320 @ 10004320 */

void __thiscall FUN_10004320(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x34))(L"Canon",&DAT_1000f35c,0,L"Devices",param_1,0x80000002,0);
  return;
}



/**************************************************/

/* Function: FUN_10004350 @ 10004350 */

void __thiscall FUN_10004350(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x2c))(L"Canon",&DAT_1000f35c,0,L"Devices",param_1,0x80000001);
  return;
}



/**************************************************/

/* Function: FUN_10004380 @ 10004380 */

void __thiscall FUN_10004380(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x34))(L"Canon",&DAT_1000f35c,0,L"Devices",param_1,0x80000001,0);
  return;
}



/**************************************************/

/* Function: FUN_100043b0 @ 100043b0 */

void FUN_100043b0(short *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((param_1 == (short *)0x0) || (0x7fffffff < param_2 >> 1)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_100010a0(param_2 >> 1,param_1);
  }
  if (param_3 != (undefined4 *)0x0) {
    if (-1 < iVar1) {
      *param_3 = 0;
      return;
    }
    *param_3 = 0;
  }
  return;
}



/**************************************************/

/* Function: FUN_10004400 @ 10004400 */

undefined4 __thiscall FUN_10004400(void *this,short *param_1)

{
  int *piVar1;
  
  if (*(void **)((int)this + 4) != (void *)0x0) {
    _free(*(void **)((int)this + 4));
  }
  if (param_1 != (short *)0x0) {
    FUN_100010a0(0x7fffffff,param_1);
  }
  piVar1 = FUN_10005263((uint *)0x2);
  *(int **)((int)this + 4) = piVar1;
  FUN_100014d0((short *)piVar1,2,(int)param_1);
  return 0;
}



/**************************************************/

/* Function: FUN_10004470 @ 10004470 */

int __thiscall FUN_10004470(void *this,short *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined4 *)((int)this + 0x10) = param_2;
  if (*(void **)((int)this + 8) != (void *)0x0) {
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != (short *)0x0) {
    piVar1 = (int *)((int)this + 0xc);
    FUN_100043b0(param_1,0xfffffffe,piVar1);
    piVar2 = FUN_10005263((uint *)(*piVar1 + 2));
    *(int **)((int)this + 8) = piVar2;
    FUN_100014d0((short *)piVar2,*piVar1 + 2,(int)param_1);
    return *piVar1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100044e0 @ 100044e0 */

void __fastcall FUN_100044e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = AssociationSet::vftable;
  if (0 < (int)param_1[2]) {
    do {
      puVar1 = *(undefined4 **)(param_1[1] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = Association::vftable;
        if ((void *)puVar1[2] != (void *)0x0) {
          _free((void *)puVar1[2]);
        }
        if ((void *)puVar1[1] != (void *)0x0) {
          _free((void *)puVar1[1]);
        }
        FUN_100047f2(puVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[2]);
  }
  _free((void *)param_1[1]);
  return;
}



/**************************************************/

/* Function: FUN_10004550 @ 10004550 */

undefined4 __thiscall
FUN_10004550(void *this,int param_1,short *param_2,void *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  size_t _Size;
  void *_Src;
  undefined4 uVar3;
  
  if ((param_1 <= *(int *)((int)this + 8)) && (-1 < param_1)) {
    if (param_2 != (short *)0x0) {
      iVar2 = (**(code **)**(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4))();
      FUN_100014d0(param_2,0x104,iVar2);
    }
    if (param_3 != (void *)0x0) {
      piVar1 = *(int **)(*(int *)((int)this + 4) + param_1 * 4);
      _Size = (**(code **)(**(int **)(*(int *)((int)this + 4) + param_1 * 4) + 0xc))();
      _Src = (void *)(**(code **)(*piVar1 + 8))();
      _memcpy(param_3,_Src,_Size);
    }
    if (param_4 != (undefined4 *)0x0) {
      uVar3 = (**(code **)(**(int **)(*(int *)((int)this + 4) + param_1 * 4) + 0xc))();
      *param_4 = uVar3;
    }
    if (param_5 != (undefined4 *)0x0) {
      uVar3 = (**(code **)(**(int **)(*(int *)((int)this + 4) + param_1 * 4) + 0x18))();
      *param_5 = uVar3;
    }
    return 0;
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_10004600 @ 10004600 */

undefined4 __thiscall FUN_10004600(void *this,short *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)this)(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(param_1,param_2);
    return 0;
  }
  piVar1 = FUN_10004da5((uint *)0x14);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)Association::vftable;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    FUN_10004400(piVar1,param_1);
    FUN_10004470(piVar1,param_1,param_2);
  }
  *(int **)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = piVar1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (*(int *)((int)this + 8) == *(int *)((int)this + 0xc)) {
    iVar2 = *(int *)((int)this + 0xc) + 0x40;
    *(int *)((int)this + 0xc) = iVar2;
    if (*(void **)((int)this + 4) != (void *)0x0) {
      pvVar3 = _realloc(*(void **)((int)this + 4),iVar2 * 4);
      if (pvVar3 != (void *)0x0) {
        *(void **)((int)this + 4) = pvVar3;
      }
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100046c0 @ 100046c0 */

undefined4 __thiscall FUN_100046c0(void *this,short *param_1,size_t param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)this)(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(param_1,param_2,param_3);
    return 0;
  }
  piVar1 = FUN_10004da5((uint *)0x14);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)Association::vftable;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    FUN_10004400(piVar1,param_1);
    FUN_10003220(piVar1,param_1,param_2,param_3);
  }
  *(int **)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = piVar1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (*(int *)((int)this + 8) == *(int *)((int)this + 0xc)) {
    iVar2 = *(int *)((int)this + 0xc) + 0x40;
    *(int *)((int)this + 0xc) = iVar2;
    if (*(void **)((int)this + 4) != (void *)0x0) {
      pvVar3 = _realloc(*(void **)((int)this + 4),iVar2 * 4);
      if (pvVar3 != (void *)0x0) {
        *(void **)((int)this + 4) = pvVar3;
      }
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004780 @ 10004780 */

undefined4 * __thiscall FUN_10004780(void *this,byte param_1)

{
  *(undefined ***)this = &type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_100047f2(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_100047a2 @ 100047a2 */

bool __thiscall FUN_100047a2(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = (byte *)((int)this + 9);
  pbVar2 = (byte *)(param_1 + 9);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_100047ce:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_100047d3;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_100047ce;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100047d3:
  return iVar3 == 0;
}



/**************************************************/

/* Function: FUN_100047e0 @ 100047e0 */

void FUN_100047e0(void)

{
  RaiseException(0xc0000002,1,0,(ULONG_PTR *)0x0);
  return;
}



/**************************************************/

/* Function: FUN_100047f2 @ 100047f2 */

void FUN_100047f2(void *param_1)

{
  _free(param_1);
  return;
}



/**************************************************/

/* Function: __ArrayUnwind @ 100047fd */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}



/**************************************************/

/* Function: `eh_vector_destructor_iterator' @ 1000485b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_100048a6();
  return;
}



/**************************************************/

/* Function: FUN_100048a6 @ 100048a6 */

void FUN_100048a6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/**************************************************/

/* Function: __vsnwprintf_l @ 100048be */

/* Library Function - Single Match
    __vsnwprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList
              )

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (wchar_t *)0x0) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0x16;
    FUN_10006bb1();
    iVar2 = -1;
  }
  else if ((_MaxCount == 0) || (_DstBuf != (wchar_t *)0x0)) {
    local_24._flag = 0x42;
    local_24._base = (char *)_DstBuf;
    local_24._ptr = (char *)_DstBuf;
    if (_MaxCount < 0x40000000) {
      local_24._cnt = _MaxCount * 2;
    }
    else {
      local_24._cnt = 0x7fffffff;
    }
    iVar2 = FUN_10005f13((uint)&local_24,(ushort *)_Format,(int *)_Locale,(uint *)_ArgList);
    if (_DstBuf != (wchar_t *)0x0) {
      local_24._cnt = local_24._cnt + -1;
      if (local_24._cnt < 0) {
        FUN_10005c8c(0,&local_24);
      }
      else {
        *local_24._ptr = 0;
        local_24._ptr = (char *)((int)local_24._ptr + 1);
      }
      local_24._cnt = local_24._cnt + -1;
      if (local_24._cnt < 0) {
        FUN_10005c8c(0,&local_24);
      }
      else {
        *local_24._ptr = 0;
      }
    }
  }
  else {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0x16;
    FUN_10006bb1();
    iVar2 = -1;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10004992 @ 10004992 */

void __cdecl FUN_10004992(wchar_t *param_1,size_t param_2,wchar_t *param_3,va_list param_4)

{
  __vsnwprintf_l(param_1,param_2,param_3,(_locale_t)0x0,param_4);
  return;
}



/**************************************************/

/* Function: _JumpToContinuation @ 100049af */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x100049da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/**************************************************/

/* Function: FID_conflict:_CallMemberFunction1 @ 100049e1 */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100049e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _UnwindNestedFrames @ 100049e8 */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10004a14,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/**************************************************/

/* Function: FID_conflict:___CxxFrameHandler3 @ 10004a3d */

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
          _CONTEXT *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,(_s_HandlerType *)0x0,
                     (_s_CatchableType *)0x0,'\0');
  return uVar1;
}



/**************************************************/

/* Function: CatchGuardHandler @ 10004a73 */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl CatchGuardHandler(struct EHExceptionRecord *,struct
   CatchGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
CatchGuardHandler(EHExceptionRecord *param_1,CatchGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  undefined4 in_EDX;
  
  FUN_10004d96(*(uint *)(param_2 + 8) ^ (uint)param_2,in_EDX);
  _Var1 = ___InternalCxxFrameHandler
                    (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(_CONTEXT *)0x0,
                     *(_s_FuncInfo **)(param_2 + 0xc),*(_s_HandlerType **)(param_2 + 0x14),
                     (_s_CatchableType *)param_2,'\0');
  return _Var1;
}



/**************************************************/

/* Function: _CallSETranslator @ 10004aa6 */

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
    *(undefined4 *)param_2 = 0x10004b51;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_100130b0 ^ (uint)&local_2c;
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

/* Function: TranslatorGuardHandler @ 10004b7d */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  undefined4 in_EDX;
  code *local_8;
  
  FUN_10004d96(*(uint *)(param_2 + 8) ^ (uint)param_2,in_EDX);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(_CONTEXT *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(_s_HandlerType **)(param_2 + 0x14),
             *(_s_CatchableType **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x10004c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/**************************************************/

/* Function: _GetRangeOfTrysToCheck @ 10004c1c */

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

/* Function: __CreateFrameInfo @ 10004c91 */

/* Library Function - Single Match
    __CreateFrameInfo
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

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

/* Function: __IsExceptionObjectToBeDestroyed @ 10004cbd */

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

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

/* Function: __FindAndUnlinkFrame @ 10004ce4 */

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
  }
  else {
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
  }
  return;
}



/**************************************************/

/* Function: _CallCatchBlock2 @ 10004d36 */

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
  code *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_100130b0 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = CatchGuardHandler;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/**************************************************/

/* Function: FUN_10004d96 @ 10004d96 */

void __fastcall FUN_10004d96(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_100130b0) {
    return;
  }
  FUN_10007f6c(param_1,param_2);
  return;
}



/**************************************************/

/* Function: FUN_10004da5 @ 10004da5 */

int * __cdecl FUN_10004da5(uint *param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
    piVar2 = FUN_10005263(param_1);
    if (piVar2 != (int *)0x0) {
      return piVar2;
    }
    iVar1 = FUN_1000805d(param_1);
  } while (iVar1 != 0);
  return (int *)0x0;
}



/**************************************************/

/* Function: _memcpy @ 10004dd0 */

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
          goto switchD_10004fb3_caseD_2;
        case 3:
          goto switchD_10004fb3_caseD_3;
        }
        goto switchD_10004fb3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10004fb3_caseD_0;
      case 1:
        goto switchD_10004fb3_caseD_1;
      case 2:
        goto switchD_10004fb3_caseD_2;
      case 3:
        goto switchD_10004fb3_caseD_3;
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
              goto switchD_10004fb3_caseD_2;
            case 3:
              goto switchD_10004fb3_caseD_3;
            }
            goto switchD_10004fb3_caseD_1;
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
              goto switchD_10004fb3_caseD_2;
            case 3:
              goto switchD_10004fb3_caseD_3;
            }
            goto switchD_10004fb3_caseD_1;
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
              goto switchD_10004fb3_caseD_2;
            case 3:
              goto switchD_10004fb3_caseD_3;
            }
            goto switchD_10004fb3_caseD_1;
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
switchD_10004fb3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10004fb3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10004fb3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10004fb3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10015c38 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_10004e2c_caseD_2;
      case 3:
        goto switchD_10004e2c_caseD_3;
      }
      goto switchD_10004e2c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_10004e2c_caseD_0;
    case 1:
      goto switchD_10004e2c_caseD_1;
    case 2:
      goto switchD_10004e2c_caseD_2;
    case 3:
      goto switchD_10004e2c_caseD_3;
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
            goto switchD_10004e2c_caseD_2;
          case 3:
            goto switchD_10004e2c_caseD_3;
          }
          goto switchD_10004e2c_caseD_1;
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
            goto switchD_10004e2c_caseD_2;
          case 3:
            goto switchD_10004e2c_caseD_3;
          }
          goto switchD_10004e2c_caseD_1;
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
            goto switchD_10004e2c_caseD_2;
          case 3:
            goto switchD_10004e2c_caseD_3;
          }
          goto switchD_10004e2c_caseD_1;
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
switchD_10004e2c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_10004e2c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_10004e2c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_10004e2c_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: _memset @ 10005140 */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10015c38 != 0)) {
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

/* Function: FUN_100051ba @ 100051ba */

uint __cdecl FUN_100051ba(short *param_1,short param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  do {
    psVar2 = psVar2 + -1;
    if (psVar2 == param_1) break;
  } while (*psVar2 != param_2);
  return (uint)psVar2 & ~-(uint)(*psVar2 != param_2);
}



/**************************************************/

/* Function: _wcschr @ 100051ee */

/* Library Function - Single Match
    _wcschr
   
   Library: Visual Studio 2008 Release */

wchar_t * __cdecl _wcschr(wchar_t *_Str,wchar_t _Ch)

{
  while( true ) {
    if (*_Str == L'\0') {
      if (*_Str != _Ch) {
        _Str = (wchar_t *)0x0;
      }
      return _Str;
    }
    if (*_Str == _Ch) break;
    _Str = _Str + 1;
  }
  return _Str;
}



/**************************************************/

/* Function: _V6_HeapAlloc @ 10005214 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_10015c28) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1000525a();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000525a @ 1000525a */

void FUN_1000525a(void)

{
  FUN_1000843c(4);
  return;
}



/**************************************************/

/* Function: FUN_10005263 @ 10005263 */

int * __cdecl FUN_10005263(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_1 < (uint *)0xffffffe1) {
    do {
      if (DAT_100144e4 == (HANDLE)0x0) {
        __FF_MSGBANNER();
        FUN_10009464(0x1e);
        ___crtExitProcess(0xff);
      }
      if (DAT_10015c1c == 1) {
        puVar3 = param_1;
        if (param_1 == (uint *)0x0) {
          puVar3 = (uint *)0x1;
        }
LAB_100052d2:
        piVar1 = HeapAlloc(DAT_100144e4,0,(SIZE_T)puVar3);
      }
      else if ((DAT_10015c1c != 3) || (piVar1 = _V6_HeapAlloc(param_1), piVar1 == (int *)0x0)) {
        puVar3 = param_1;
        if (param_1 == (uint *)0x0) {
          puVar3 = (uint *)0x1;
        }
        puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
        goto LAB_100052d2;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_10014844 == 0) {
        piVar1 = FUN_10006bfe();
        *piVar1 = 0xc;
        break;
      }
      iVar2 = FUN_1000805d(param_1);
    } while (iVar2 != 0);
    piVar1 = FUN_10006bfe();
    *piVar1 = 0xc;
  }
  else {
    FUN_1000805d(param_1);
    piVar1 = FUN_10006bfe();
    *piVar1 = 0xc;
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: _free @ 1000532d */

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
  
  if (_Memory != (void *)0x0) {
    if (DAT_10015c1c == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10005383();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100144e4,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = FUN_10006bfe();
      DVar4 = GetLastError();
      iVar5 = __get_errno_from_oserr(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_10005383 @ 10005383 */

void FUN_10005383(void)

{
  FUN_1000843c(4);
  return;
}



/**************************************************/

/* Function: ___CppXcptFilter @ 100053bb */

/* Library Function - Single Match
    ___CppXcptFilter
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

int __cdecl ___CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = FUN_10009623(-0x1f928c9d,_ExceptionPtr);
    return iVar1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10005587 @ 10005587 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_10005587(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  BOOL BVar1;
  int iVar2;
  _ptiddata _Ptd;
  code *pcVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 uVar4;
  _ptiddata p_Var5;
  _OSVERSIONINFOA local_9c;
  uint local_8;
  
  if (param_4 == 1) {
    local_8 = 0x10005597;
    FUN_1000a044();
    param_2 = extraout_EDX_09;
  }
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  if (param_4 == 1) {
    local_9c.dwOSVersionInfoSize = 0x94;
    BVar1 = GetVersionExA(&local_9c);
    param_2 = extraout_EDX;
    if (BVar1 != 0) {
      _DAT_100144f0 = local_9c.dwBuildNumber & 0x7fff;
      if (local_9c.dwPlatformId != 2) {
        _DAT_100144f0 = _DAT_100144f0 | 0x8000;
      }
      DAT_100144ec = local_9c.dwPlatformId;
      _DAT_100144f4 = local_9c.dwMajorVersion * 0x100 + local_9c.dwMinorVersion;
      DAT_100144f8 = local_9c.dwMajorVersion;
      _DAT_100144fc = local_9c.dwMinorVersion;
      iVar2 = FUN_100090b8(1);
      param_2 = extraout_EDX_00;
      if (iVar2 != 0) {
        iVar2 = FUN_10007d9f();
        if (iVar2 != 0) {
          DAT_10015c3c = GetCommandLineA();
          DAT_1001404c = FUN_10009f0d();
          iVar2 = FUN_100098e2();
          if (-1 < iVar2) {
            iVar2 = FUN_10009e52();
            if (((-1 < iVar2) && (iVar2 = FUN_10009b6a(), -1 < iVar2)) &&
               (iVar2 = FUN_100092b6(0), iVar2 == 0)) {
              DAT_10014048 = DAT_10014048 + 1;
              param_2 = extraout_EDX_02;
              goto LAB_10005577;
            }
            FUN_10009b1c();
          }
          __mtterm();
        }
        __heap_term();
        param_2 = extraout_EDX_01;
      }
    }
  }
  else if (param_4 == 0) {
    if (0 < DAT_10014048) {
      DAT_10014048 = DAT_10014048 + -1;
      if (DAT_10014528 == 0) {
        __cexit();
        param_2 = extraout_EDX_03;
      }
      if (param_5 == 0) {
        FUN_10009b1c();
        __mtterm();
        __heap_term();
        param_2 = extraout_EDX_04;
      }
    }
  }
  else if (param_4 == 2) {
    FUN_10007a35();
    _Ptd = _calloc(1,0x214);
    param_2 = extraout_EDX_05;
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_10013274;
      p_Var5 = _Ptd;
      pcVar3 = (code *)FUN_100079c6(DAT_10014068);
      iVar2 = (*pcVar3)(uVar4,p_Var5);
      if (iVar2 == 0) {
        _free(_Ptd);
        param_2 = extraout_EDX_07;
      }
      else {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        param_2 = extraout_EDX_06;
      }
    }
  }
  else if (param_4 == 3) {
    __freeptd((_ptiddata)0x0);
    param_2 = extraout_EDX_08;
  }
LAB_10005577:
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/**************************************************/

/* Function: FUN_1000559d @ 1000559d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __fastcall
FUN_1000559d(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_20;
  
  local_20 = 1;
  if ((param_4 == 0) && (DAT_10014048 == 0)) {
LAB_100055c0:
    iVar1 = 0;
  }
  else {
    if ((param_4 == 1) || (param_4 == 2)) {
      iVar1 = param_4;
      if (DAT_10015c40 != (code *)0x0) {
        uVar4 = (*DAT_10015c40)(param_3,param_4,param_5);
        param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_20 = (int)uVar4;
        iVar1 = extraout_ECX;
      }
      if ((local_20 == 0) ||
         (iVar1 = FUN_10005587(iVar1,param_2,param_3,param_4,param_5), iVar1 == 0))
      goto LAB_100055c0;
    }
    iVar1 = FUN_10001e40(param_3,param_4);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX;
    if ((param_4 == 1) && (iVar1 == 0)) {
      FUN_10001e40(param_3,0);
      FUN_10005587(extraout_ECX_01,extraout_EDX_00,param_3,0,0);
      uVar2 = extraout_ECX_02;
      uVar3 = extraout_EDX_01;
      if (DAT_10015c40 != (code *)0x0) {
        (*DAT_10015c40)(param_3,0,0);
        uVar2 = extraout_ECX_03;
        uVar3 = extraout_EDX_02;
      }
    }
    if ((((param_4 == 0) || (param_4 == 3)) &&
        (iVar1 = FUN_10005587(uVar2,uVar3,param_3,param_4,param_5), iVar1 != 0)) &&
       (DAT_10015c40 != (code *)0x0)) {
      iVar1 = (*DAT_10015c40)(param_3,param_4,param_5);
    }
  }
  return iVar1;
}



/**************************************************/

/* Function: entry @ 100057df */

void __fastcall
entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_4 == 1) {
    FUN_1000a044();
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_1000559d(param_1,param_2,param_3,param_4,param_5);
  return;
}



/**************************************************/

/* Function: _realloc @ 100057f5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  DWORD DVar4;
  LPVOID pvVar5;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    piVar1 = FUN_10005263((uint *)_NewSize);
    return piVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_10015c1c == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_100059ce;
      __lock(4);
      local_24 = (uint *)___sbh_find_block((int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_10015c28) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)___sbh_find_block((int)_Memory);
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
          local_20 = HeapAlloc(DAT_100144e4,0,_NewSize);
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
      FUN_10005939();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_100144e4,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10014844 == 0) {
        piVar1 = FUN_10006bfe();
        if (local_24 != (uint *)0x0) {
          *piVar1 = 0xc;
          return (void *)0x0;
        }
        goto LAB_100059fb;
      }
      iVar2 = FUN_1000805d(_NewSize);
    } while (iVar2 != 0);
    piVar1 = FUN_10006bfe();
    if (local_24 != (uint *)0x0) goto LAB_100059da;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_100059ce;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar5 = HeapReAlloc(DAT_100144e4,0,_Memory,_NewSize);
      if (pvVar5 != (LPVOID)0x0) {
        return pvVar5;
      }
      if (DAT_10014844 == 0) {
        piVar1 = FUN_10006bfe();
LAB_100059fb:
        DVar4 = GetLastError();
        iVar2 = __get_errno_from_oserr(DVar4);
        *piVar1 = iVar2;
        return (void *)0x0;
      }
      iVar2 = FUN_1000805d(_NewSize);
    } while (iVar2 != 0);
    piVar1 = FUN_10006bfe();
  }
  DVar4 = GetLastError();
  iVar2 = __get_errno_from_oserr(DVar4);
  *piVar1 = iVar2;
  return (void *)0x0;
LAB_100059ce:
  FUN_1000805d(_NewSize);
  piVar1 = FUN_10006bfe();
LAB_100059da:
  *piVar1 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_10005939 @ 10005939 */

void FUN_10005939(void)

{
  FUN_1000843c(4);
  return;
}



/**************************************************/

/* Function: terminate @ 10005a10 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2008 Release */

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

/* Function: unexpected @ 10005a49 */

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

/* Function: _inconsistency @ 10005a5c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_100079c6(DAT_1001405c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/**************************************************/

/* Function: FUN_10005a93 @ 10005a93 */

void FUN_10005a93(void)

{
  DAT_1001405c = FUN_10007957(0x10005a10);
  return;
}



/**************************************************/

/* Function: __SEH_prolog4 @ 10005aa4 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_100130b0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 10005ae9 */

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

/* Function: FUN_10005b00 @ 10005b00 */

undefined4 __fastcall
FUN_10005b00(undefined4 param_1,undefined4 param_2,int *param_3,PVOID param_4,undefined4 param_5)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  int **ppiVar4;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int **extraout_EDX_02;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  int *local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  piVar6 = (int *)(*(uint *)((int)param_4 + 8) ^ DAT_100130b0);
  local_5 = '\0';
  local_10 = 1;
  iVar1 = (int)param_4 + 0x10;
  if (*piVar6 != -2) {
    FUN_10004d96(piVar6[1] + iVar1 ^ *(uint *)(*piVar6 + iVar1),param_2);
    param_2 = extraout_EDX;
  }
  FUN_10004d96(piVar6[3] + iVar1 ^ *(uint *)(piVar6[2] + iVar1),param_2);
  if ((*(byte *)(param_3 + 1) & 0x66) == 0) {
    ppiVar4 = &local_1c;
    *(int ***)((int)param_4 + -4) = ppiVar4;
    uVar5 = *(uint *)((int)param_4 + 0xc);
    local_1c = param_3;
    local_18 = param_5;
    if (uVar5 == 0xfffffffe) {
      return local_10;
    }
    do {
      local_14 = (uint *)(piVar6 + uVar5 * 3 + 4);
      local_c = *local_14;
      if ((undefined *)piVar6[uVar5 * 3 + 5] != (undefined *)0x0) {
        uVar7 = _EH4_CallFilterFunc((undefined *)piVar6[uVar5 * 3 + 5]);
        ppiVar4 = (int **)((ulonglong)uVar7 >> 0x20);
        local_5 = '\x01';
        if ((int)uVar7 < 0) {
          local_10 = 0;
          goto LAB_10005ba8;
        }
        if (0 < (int)uVar7) {
          if (((*param_3 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_1000f3c8 != (undefined *)0x0)) &&
             (BVar2 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1000f3c8)
             , BVar2 != 0)) {
            (*(code *)PTR____DestructExceptionObject_1000f3c8)(param_3,1);
          }
          _EH4_GlobalUnwind(param_4);
          uVar3 = extraout_EDX_00;
          if (*(uint *)((int)param_4 + 0xc) != uVar5) {
            _EH4_LocalUnwind((int)param_4,uVar5,iVar1,&DAT_100130b0);
            uVar3 = extraout_EDX_01;
          }
          *(uint *)((int)param_4 + 0xc) = local_c;
          if (*piVar6 != -2) {
            FUN_10004d96(piVar6[1] + iVar1 ^ *(uint *)(*piVar6 + iVar1),uVar3);
          }
          FUN_10004d96(piVar6[3] + iVar1 ^ *(uint *)(piVar6[2] + iVar1),piVar6[2]);
          uVar3 = _EH4_TransferToHandler((undefined *)local_14[2]);
          return uVar3;
        }
      }
      uVar5 = local_c;
    } while (local_c != 0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (*(int *)((int)param_4 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind((int)param_4,0xfffffffe,iVar1,&DAT_100130b0);
    ppiVar4 = extraout_EDX_02;
  }
LAB_10005ba8:
  if (*piVar6 != -2) {
    FUN_10004d96(piVar6[1] + iVar1 ^ *(uint *)(*piVar6 + iVar1),ppiVar4);
  }
  FUN_10004d96(piVar6[3] + iVar1 ^ *(uint *)(piVar6[2] + iVar1),piVar6[2]);
  return local_10;
}



/**************************************************/

/* Function: FUN_10005c8c @ 10005c8c */

uint __cdecl FUN_10005c8c(uint param_1,FILE *param_2)

{
  char *_Buf;
  char *pcVar1;
  FILE *pFVar2;
  byte bVar3;
  int *piVar4;
  undefined3 extraout_var;
  undefined *puVar5;
  uint uVar6;
  int unaff_EDI;
  uint uVar7;
  longlong lVar8;
  
  pFVar2 = param_2;
  param_2 = (FILE *)__fileno(param_2);
  uVar7 = pFVar2->_flag;
  if ((uVar7 & 0x82) == 0) {
    piVar4 = FUN_10006bfe();
    *piVar4 = 9;
LAB_10005cb1:
    pFVar2->_flag = pFVar2->_flag | 0x20;
    return 0xffffffff;
  }
  if ((uVar7 & 0x40) != 0) {
    piVar4 = FUN_10006bfe();
    *piVar4 = 0x22;
    goto LAB_10005cb1;
  }
  uVar6 = 0;
  if ((uVar7 & 1) != 0) {
    pFVar2->_cnt = 0;
    if ((uVar7 & 0x10) == 0) {
      pFVar2->_flag = uVar7 | 0x20;
      return 0xffffffff;
    }
    pFVar2->_ptr = pFVar2->_base;
    pFVar2->_flag = uVar7 & 0xfffffffe;
  }
  uVar7 = pFVar2->_flag;
  pFVar2->_flag = uVar7 & 0xffffffef | 2;
  pFVar2->_cnt = 0;
  if (((uVar7 & 0x10c) == 0) &&
     (((pFVar2 != (FILE *)&DAT_10013530 && (pFVar2 != (FILE *)&DAT_10013550)) ||
      (bVar3 = FUN_1000ae27((uint)param_2), CONCAT31(extraout_var,bVar3) == 0)))) {
    FUN_1000add8(&pFVar2->_ptr);
  }
  if ((pFVar2->_flag & 0x108) == 0) {
    uVar7 = 1;
    uVar6 = FID_conflict___lseek((int)param_2,&param_1,1);
  }
  else {
    _Buf = pFVar2->_base;
    pcVar1 = pFVar2->_ptr;
    pFVar2->_ptr = _Buf + 1;
    uVar7 = (int)pcVar1 - (int)_Buf;
    pFVar2->_cnt = pFVar2->_bufsiz + -1;
    if ((int)uVar7 < 1) {
      if ((param_2 == (FILE *)0xffffffff) || (param_2 == (FILE *)0xfffffffe)) {
        puVar5 = &DAT_100134e8;
      }
      else {
        puVar5 = (undefined *)(((uint)param_2 & 0x1f) * 0x24 + (&DAT_10015b00)[(int)param_2 >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar8 = __lseeki64((int)param_2,0x200000000,unaff_EDI), lVar8 == -1)) goto LAB_10005dc1;
    }
    else {
      uVar6 = FID_conflict___lseek((int)param_2,_Buf,uVar7);
    }
    *pFVar2->_base = (char)param_1;
  }
  if (uVar6 == uVar7) {
    return param_1 & 0xff;
  }
LAB_10005dc1:
  pFVar2->_flag = pFVar2->_flag | 0x20;
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_10005dd7 @ 10005dd7 */

int * __thiscall FUN_10005dd7(void *this,int *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  *(undefined1 *)((int)this + 0xc) = 0;
  if (param_1 == (int *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)((int)this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)((int)this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_10013d98) && ((p_Var2->_ownlocale & DAT_10013cb4) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)((int)this + 4) != PTR_DAT_10013bb8) &&
       ((*(uint *)(*(int *)((int)this + 8) + 0x70) & DAT_10013cb4) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)((int)this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)((int)this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)((int)this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      *(undefined1 *)((int)this + 0xc) = 1;
    }
  }
  else {
    *(int *)this = *param_1;
    *(int *)((int)this + 4) = param_1[1];
  }
  return this;
}



/**************************************************/

/* Function: FUN_10005e5e @ 10005e5e */

void __fastcall FUN_10005e5e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  FILE *unaff_ESI;
  int *unaff_EDI;
  
  if (((unaff_ESI->_flag & 0x40) == 0) || (unaff_ESI->_base != (char *)0x0)) {
    sVar1 = FUN_1000ba42(param_1,param_2,param_3,unaff_ESI);
    if (sVar1 == -1) {
      iVar2 = _ferror(unaff_ESI);
      if (iVar2 != 0) {
        *unaff_EDI = -1;
        return;
      }
    }
  }
  *unaff_EDI = *unaff_EDI + 1;
  return;
}



/**************************************************/

/* Function: FUN_10005e94 @ 10005e94 */

void __fastcall FUN_10005e94(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *in_EAX;
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  do {
    if (param_4 < 1) {
      return;
    }
    param_4 = param_4 + -1;
    uVar1 = param_3;
    FUN_10005e5e(param_1,param_2,param_3);
    param_1 = uVar1;
    param_2 = extraout_EDX;
  } while (*in_EAX != -1);
  return;
}



/**************************************************/

/* Function: FUN_10005ec1 @ 10005ec1 */

void __fastcall FUN_10005ec1(uint param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  int *in_EAX;
  int *piVar2;
  undefined4 extraout_ECX;
  ushort *extraout_EDX;
  undefined4 extraout_EDX_00;
  ushort *extraout_EDX_01;
  ushort *puVar3;
  
  puVar3 = param_2;
  if (((*(byte *)(param_1 + 0xc) & 0x40) == 0) || (*(int *)(param_1 + 8) != 0)) {
    while (0 < param_3) {
      param_3 = param_3 + -1;
      uVar1 = (uint)*puVar3;
      FUN_10005e5e(param_1,param_2,(uint)*puVar3);
      param_1 = uVar1;
      puVar3 = puVar3 + 1;
      param_2 = extraout_EDX;
      if (*in_EAX == -1) {
        piVar2 = FUN_10006bfe();
        if (*piVar2 != 0x2a) {
          return;
        }
        param_1 = 0x3f;
        FUN_10005e5e(extraout_ECX,extraout_EDX_00,0x3f);
        param_2 = extraout_EDX_01;
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_3;
  }
  return;
}



/**************************************************/

/* Function: FUN_10005f13 @ 10005f13 */

void __cdecl FUN_10005f13(uint param_1,ushort *param_2,int *param_3,uint *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  _locale_t plVar3;
  short sVar4;
  pthreadlocinfo *pptVar5;
  int *piVar6;
  uint uVar7;
  _locale_t plVar8;
  undefined3 extraout_var;
  int iVar9;
  code *pcVar10;
  _locale_t plVar11;
  int iVar12;
  _locale_t extraout_ECX;
  _locale_t extraout_ECX_00;
  int extraout_ECX_01;
  _locale_t plVar13;
  uint *extraout_ECX_02;
  _locale_t extraout_EDX;
  _locale_t extraout_EDX_00;
  _locale_t extraout_EDX_01;
  _locale_t extraout_EDX_02;
  _locale_t extraout_EDX_03;
  uint uVar14;
  undefined4 extraout_EDX_04;
  _locale_t extraout_EDX_05;
  _locale_t extraout_EDX_06;
  _locale_t extraout_EDX_07;
  _locale_t plVar15;
  _locale_t extraout_EDX_08;
  _locale_t extraout_EDX_09;
  uint *puVar16;
  bool bVar17;
  undefined8 uVar18;
  uint *puVar19;
  undefined4 uVar20;
  localeinfo_struct *plVar21;
  uint local_474;
  uint local_470;
  undefined4 local_46c;
  int local_468;
  uint *local_464;
  int local_460;
  _locale_t local_45c;
  int local_458;
  ushort *local_454;
  localeinfo_struct local_450;
  int local_448;
  char local_444;
  char local_440;
  undefined1 local_43f;
  ushort local_43c;
  short local_43a;
  uint *local_438;
  int local_434;
  uint local_430;
  int local_42c;
  uint local_428;
  uint *local_424;
  int local_420;
  uint *local_41c;
  _locale_t local_418;
  _locale_t local_414;
  uint local_410;
  uint local_40c;
  localeinfo_struct local_408 [63];
  localeinfo_struct local_209 [64];
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  local_428 = param_1;
  local_41c = param_4;
  local_460 = 0;
  local_40c = 0;
  local_430 = 0;
  local_410 = 0;
  local_42c = 0;
  local_458 = 0;
  local_434 = 0;
  FUN_10005dd7(&local_450,param_3);
  if ((local_428 == 0) || (param_2 == (ushort *)0x0)) {
    piVar6 = FUN_10006bfe();
    *piVar6 = 0x16;
LAB_10005f92:
    FUN_10006bb1();
    plVar13 = extraout_EDX;
    if (local_444 != '\0') {
      *(uint *)(local_448 + 0x70) = *(uint *)(local_448 + 0x70) & 0xfffffffd;
    }
  }
  else {
    uVar1 = *param_2;
    local_420 = 0;
    local_424 = (uint *)0x0;
    local_45c = (_locale_t)0x0;
    plVar8 = (_locale_t)(uint)uVar1;
    plVar13 = (_locale_t)(uint)uVar1;
    iVar9 = 0;
    plVar11 = (_locale_t)PTR_DAT_100130c0;
    while (plVar15 = plVar8, PTR_DAT_100130c0 = (undefined *)plVar11, local_418 = plVar15,
          uVar1 != 0) {
      local_454 = param_2 + 1;
      plVar13 = plVar15;
      if (local_420 < 0) break;
      sVar4 = (short)plVar15;
      if ((ushort)(sVar4 - 0x20U) < 0x59) {
        uVar7 = *(byte *)&plVar15[0x2002035].locinfo & 0xf;
      }
      else {
        uVar7 = 0;
      }
      local_468 = (int)(char)(&DAT_100101c8)[uVar7 * 8 + iVar9] >> 4;
      plVar13 = (_locale_t)0x7;
      switch(local_468) {
      case 0:
switchD_1000602d_caseD_0:
        local_434 = 1;
        FUN_10005e5e(7,plVar15,plVar15);
        plVar15 = extraout_EDX_00;
        break;
      case 1:
        local_410 = 0xffffffff;
        local_46c = 0;
        local_458 = 0;
        local_430 = 0;
        local_42c = 0;
        local_40c = 0;
        local_434 = 0;
        break;
      case 2:
        if (plVar15 == (_locale_t)0x20) {
          local_40c = local_40c | 2;
        }
        else if (plVar15 == (_locale_t)0x23) {
          local_40c = local_40c | 0x80;
        }
        else if (plVar15 == (_locale_t)0x2b) {
          local_40c = local_40c | 1;
        }
        else if (plVar15 == (_locale_t)0x2d) {
          local_40c = local_40c | 4;
        }
        else if (plVar15 == (_locale_t)0x30) {
          local_40c = local_40c | 8;
        }
        break;
      case 3:
        if (sVar4 == 0x2a) {
          local_41c = param_4 + 1;
          local_430 = *param_4;
          if ((int)local_430 < 0) {
            local_40c = local_40c | 4;
            local_430 = -local_430;
          }
        }
        else {
          local_430 = local_430 * 10 + -0x30 + (int)plVar15;
        }
        break;
      case 4:
        local_410 = 0;
        break;
      case 5:
        if (sVar4 == 0x2a) {
          local_41c = param_4 + 1;
          local_410 = *param_4;
          if ((int)local_410 < 0) {
            local_410 = 0xffffffff;
          }
        }
        else {
          local_410 = local_410 * 10 + -0x30 + (int)plVar15;
        }
        break;
      case 6:
        if (plVar15 == (_locale_t)0x49) {
          uVar1 = *local_454;
          if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
            local_454 = param_2 + 3;
            local_40c = local_40c | 0x8000;
          }
          else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
            local_454 = param_2 + 3;
            local_40c = local_40c & 0xffff7fff;
          }
          else if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                   ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
            local_468 = 0;
            goto switchD_1000602d_caseD_0;
          }
        }
        else if (plVar15 == (_locale_t)0x68) {
          local_40c = local_40c | 0x20;
        }
        else if (plVar15 == (_locale_t)0x6c) {
          if (*local_454 == 0x6c) {
            local_454 = param_2 + 2;
            local_40c = local_40c | 0x1000;
          }
          else {
            local_40c = local_40c | 0x10;
          }
        }
        else if (plVar15 == (_locale_t)0x77) {
          local_40c = local_40c | 0x800;
        }
        break;
      case 7:
        if (plVar15 < (_locale_t)0x65) {
          if (plVar15 == (_locale_t)0x64) {
LAB_10006570:
            local_40c = local_40c | 0x40;
LAB_10006577:
            local_418 = (_locale_t)0xa;
LAB_10006581:
            if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
              local_41c = param_4 + 1;
              if ((local_40c & 0x20) == 0) {
                uVar7 = *param_4;
                if ((local_40c & 0x40) == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (int)uVar7 >> 0x1f;
                }
              }
              else {
                if ((local_40c & 0x40) == 0) {
                  uVar7 = (uint)(ushort)*param_4;
                }
                else {
                  uVar7 = (uint)(short)(ushort)*param_4;
                }
                uVar14 = (int)uVar7 >> 0x1f;
              }
            }
            else {
              uVar7 = *param_4;
              uVar14 = param_4[1];
              local_41c = param_4 + 2;
            }
            if ((((local_40c & 0x40) != 0) && ((int)uVar14 < 1)) && ((int)uVar14 < 0)) {
              bVar17 = uVar7 != 0;
              uVar7 = -uVar7;
              uVar14 = -(uVar14 + bVar17);
              local_40c = local_40c | 0x100;
            }
            uVar18 = CONCAT44(uVar14,uVar7);
            if ((local_40c & 0x9000) == 0) {
              uVar14 = 0;
            }
            if ((int)local_410 < 0) {
              local_410 = 1;
            }
            else {
              local_40c = local_40c & 0xfffffff7;
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
            }
            if (uVar7 == 0 && uVar14 == 0) {
              local_42c = 0;
            }
            plVar11 = local_209;
            while( true ) {
              plVar15 = (_locale_t)((ulonglong)uVar18 >> 0x20);
              uVar7 = local_410 - 1;
              if (((int)local_410 < 1) && ((uint)uVar18 == 0 && uVar14 == 0)) break;
              local_410 = uVar7;
              uVar18 = __aulldvrm((uint)uVar18,uVar14,(uint)local_418,(int)local_418 >> 0x1f);
              uVar14 = (uint)((ulonglong)uVar18 >> 0x20);
              plVar13 = (_locale_t)(extraout_ECX_01 + 0x30);
              if (0x39 < (int)plVar13) {
                plVar13 = (_locale_t)((int)&plVar13->locinfo + local_460);
              }
              *(char *)&plVar11->locinfo = (char)plVar13;
              plVar11 = (_locale_t)((int)&plVar11[-1].mbcinfo + 3);
            }
            local_424 = (uint *)((int)local_209 + -(int)plVar11);
            local_414 = (_locale_t)((int)&plVar11->locinfo + 1);
            local_410 = uVar7;
            if (((local_40c & 0x200) != 0) &&
               ((local_424 == (uint *)0x0 ||
                (plVar13 = local_414, *(char *)&local_414->locinfo != '0')))) {
              *(undefined1 *)&plVar11->locinfo = 0x30;
              local_424 = (uint *)((int)local_209 + -(int)plVar11 + 1);
              plVar13 = plVar11;
              local_414 = plVar11;
            }
          }
          else if (plVar15 < (_locale_t)0x54) {
            if (plVar15 == (_locale_t)0x53) {
              if ((local_40c & 0x830) == 0) {
                local_40c = local_40c | 0x20;
              }
              goto LAB_1000631f;
            }
            if (plVar15 != (_locale_t)0x41) {
              if (plVar15 == (_locale_t)0x43) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
LAB_100063c8:
                uVar1 = (ushort)*param_4;
                local_464 = (uint *)(uint)uVar1;
                local_41c = param_4 + 1;
                local_434 = 1;
                if ((local_40c & 0x20) == 0) {
                  local_408[0].locinfo._0_2_ = uVar1;
                }
                else {
                  local_440 = (char)uVar1;
                  local_43f = 0;
                  iVar9 = __mbtowc_l((wchar_t *)local_408,&local_440,
                                     (size_t)(local_450.locinfo)->locale_name[3],&local_450);
                  plVar13 = extraout_ECX;
                  plVar15 = extraout_EDX_02;
                  if (iVar9 < 0) {
                    local_458 = 1;
                  }
                }
                local_424 = (uint *)0x1;
                local_414 = local_408;
                goto LAB_100068c5;
              }
              if ((plVar15 != (_locale_t)0x45) && (plVar15 != (_locale_t)0x47)) goto LAB_100068c5;
            }
            local_46c = 1;
            local_418 = plVar15 + 4;
LAB_100062b8:
            local_40c = local_40c | 0x40;
            local_438 = (uint *)0x200;
            plVar8 = local_408;
            puVar16 = local_438;
            plVar11 = local_408;
            if ((int)local_410 < 0) {
              local_410 = 6;
            }
            else if (local_410 == 0) {
              if ((short)local_418 == 0x67) {
                local_410 = 1;
              }
            }
            else {
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
              if (0xa3 < (int)local_410) {
                puVar16 = (uint *)(local_410 + 0x15d);
                local_414 = local_408;
                local_45c = (_locale_t)FUN_10005263(puVar16);
                plVar8 = local_45c;
                plVar11 = local_45c;
                if (local_45c == (_locale_t)0x0) {
                  local_410 = 0xa3;
                  plVar8 = local_408;
                  puVar16 = local_438;
                  plVar11 = local_414;
                }
              }
            }
            local_414 = plVar11;
            local_438 = puVar16;
            local_474 = *param_4;
            local_41c = param_4 + 2;
            local_470 = param_4[1];
            plVar21 = &local_450;
            iVar9 = (int)(char)local_418;
            puVar16 = &local_474;
            plVar11 = plVar8;
            puVar19 = local_438;
            uVar7 = local_410;
            uVar20 = local_46c;
            pcVar10 = (code *)FUN_100079c6((int)PTR_LAB_10013dc0);
            (*pcVar10)(puVar16,plVar11,puVar19,iVar9,uVar7,uVar20,plVar21);
            uVar7 = local_40c & 0x80;
            plVar13 = extraout_ECX_00;
            if ((uVar7 != 0) && (local_410 == 0)) {
              plVar13 = &local_450;
              plVar11 = plVar8;
              pcVar10 = (code *)FUN_100079c6((int)PTR_LAB_10013dcc);
              (*pcVar10)(plVar11,plVar13);
            }
            if (((short)local_418 == 0x67) && (uVar7 == 0)) {
              plVar13 = &local_450;
              plVar11 = plVar8;
              pcVar10 = (code *)FUN_100079c6((int)PTR_LAB_10013dc8);
              (*pcVar10)(plVar11,plVar13);
            }
            plVar11 = plVar8;
            if (*(char *)&plVar8->locinfo == '-') {
              local_40c = local_40c | 0x100;
              plVar8 = (_locale_t)((int)&plVar8->locinfo + 1);
              local_414 = plVar8;
              plVar11 = plVar8;
            }
            do {
              pptVar5 = &plVar8->locinfo;
              plVar13 = (_locale_t)CONCAT31((int3)((uint)plVar13 >> 8),*(char *)pptVar5);
              plVar8 = (_locale_t)((int)&plVar8->locinfo + 1);
            } while (*(char *)pptVar5 != '\0');
LAB_100064d2:
            plVar15 = (_locale_t)((int)&plVar11->locinfo + 1);
            local_424 = (uint *)((int)plVar8 - (int)plVar15);
          }
          else {
            if (plVar15 == (_locale_t)0x58) goto LAB_100066de;
            if (plVar15 == (_locale_t)0x5a) {
              puVar2 = (ushort *)*param_4;
              local_41c = param_4 + 1;
              plVar8 = plVar11;
              if ((puVar2 == (ushort *)0x0) ||
                 (plVar3 = *(_locale_t *)(puVar2 + 2), plVar3 == (_locale_t)0x0)) {
                do {
                  pptVar5 = &plVar8->locinfo;
                  plVar13 = (_locale_t)(uint)*(byte *)pptVar5;
                  plVar8 = (_locale_t)((int)&plVar8->locinfo + 1);
                  local_414 = plVar11;
                } while (*(byte *)pptVar5 != 0);
                goto LAB_100064d2;
              }
              uVar1 = *puVar2;
              if (puVar2[1] < uVar1) {
LAB_10006aaa:
                piVar6 = FUN_10006bfe();
                *piVar6 = 0x16;
                goto LAB_10005f92;
              }
              if ((local_40c & 0x800) == 0) {
                local_434 = 0;
                plVar13 = (_locale_t)(uint)uVar1;
                local_424 = (uint *)(uint)uVar1;
                local_414 = plVar3;
              }
              else {
                if (((~(byte)uVar1 & 1) == 0) || ((~(uint)plVar3 & 1) == 0)) goto LAB_10006aaa;
                local_434 = 1;
                plVar13 = (_locale_t)0x1;
                plVar15 = (_locale_t)~(uint)plVar3;
                local_424 = (uint *)(uint)(uVar1 >> 1);
                local_414 = plVar3;
              }
            }
            else {
              if (plVar15 == (_locale_t)0x61) goto LAB_100062b8;
              if (plVar15 == (_locale_t)0x63) goto LAB_100063c8;
            }
          }
LAB_100068c5:
          puVar16 = local_424;
          if (local_458 == 0) {
            if ((local_40c & 0x40) != 0) {
              if ((local_40c & 0x100) == 0) {
                if ((local_40c & 1) == 0) {
                  if ((local_40c & 2) == 0) goto LAB_10006913;
                  local_43c = 0x20;
                }
                else {
                  local_43c = 0x2b;
                }
              }
              else {
                local_43c = 0x2d;
              }
              local_42c = 1;
            }
LAB_10006913:
            iVar9 = local_430 + (-local_42c - (int)local_424);
            if ((local_40c & 0xc) == 0) {
              FUN_10005e94(plVar13,plVar15,0x20,iVar9);
            }
            iVar12 = local_42c;
            FUN_10005ec1(local_428,&local_43c,local_42c);
            if (((local_40c & 8) != 0) && ((local_40c & 4) == 0)) {
              FUN_10005e94(iVar12,extraout_EDX_04,0x30,iVar9);
            }
            if ((local_434 == 0) && (0 < (int)puVar16)) {
              local_418 = local_414;
              local_438 = puVar16;
              do {
                local_438 = (uint *)((int)local_438 - 1);
                iVar12 = __mbtowc_l((wchar_t *)&local_464,(char *)local_418,
                                    (size_t)(local_450.locinfo)->locale_name[3],&local_450);
                if (iVar12 < 1) {
                  local_420 = -1;
                  puVar16 = extraout_ECX_02;
                  plVar15 = extraout_EDX_05;
                  break;
                }
                puVar16 = local_464;
                FUN_10005e5e(extraout_ECX_02,extraout_EDX_05,local_464);
                local_418 = (_locale_t)((int)&local_418->locinfo + iVar12);
                plVar15 = extraout_EDX_06;
              } while (0 < (int)local_438);
            }
            else {
              FUN_10005ec1(local_428,(ushort *)local_414,(int)puVar16);
              plVar15 = extraout_EDX_07;
            }
            if ((-1 < local_420) && ((local_40c & 4) != 0)) {
              FUN_10005e94(puVar16,plVar15,0x20,iVar9);
              plVar15 = extraout_EDX_08;
            }
          }
        }
        else {
          if ((_locale_t)0x70 < plVar15) {
            if (plVar15 == (_locale_t)0x73) {
LAB_1000631f:
              uVar7 = local_410;
              if (local_410 == 0xffffffff) {
                uVar7 = 0x7fffffff;
              }
              local_41c = param_4 + 1;
              local_414 = (_locale_t)*param_4;
              if ((local_40c & 0x20) == 0) {
                if (local_414 == (_locale_t)0x0) {
                  local_414 = (_locale_t)PTR_u__null__100130c4;
                }
                local_434 = 1;
                for (plVar11 = local_414;
                    (uVar7 != 0 && (uVar7 = uVar7 - 1, *(short *)&plVar11->locinfo != 0));
                    plVar11 = (_locale_t)((int)&plVar11->locinfo + 2)) {
                }
                local_424 = (uint *)((int)plVar11 - (int)local_414 >> 1);
              }
              else {
                if (local_414 == (_locale_t)0x0) {
                  local_414 = plVar11;
                }
                local_424 = (uint *)0x0;
                plVar11 = local_414;
                if (0 < (int)uVar7) {
                  do {
                    if (*(byte *)&plVar11->locinfo == 0) break;
                    plVar13 = &local_450;
                    iVar9 = __isleadbyte_l((uint)*(byte *)&plVar11->locinfo,plVar13);
                    if (iVar9 != 0) {
                      plVar11 = (_locale_t)((int)&plVar11->locinfo + 1);
                    }
                    plVar11 = (_locale_t)((int)&plVar11->locinfo + 1);
                    local_424 = (uint *)((int)local_424 + 1);
                    plVar15 = extraout_EDX_01;
                  } while ((int)local_424 < (int)uVar7);
                }
              }
              goto LAB_100068c5;
            }
            if (plVar15 == (_locale_t)0x75) goto LAB_10006577;
            if (plVar15 != (_locale_t)0x78) goto LAB_100068c5;
            local_460 = 0x27;
LAB_1000670a:
            local_418 = (_locale_t)0x10;
            if ((local_40c & 0x80) != 0) {
              local_43a = (short)local_460 + 0x51;
              local_43c = 0x30;
              local_42c = 2;
            }
            goto LAB_10006581;
          }
          if (plVar15 == (_locale_t)0x70) {
            local_410 = 8;
LAB_100066de:
            local_460 = 7;
            goto LAB_1000670a;
          }
          if (plVar15 < (_locale_t)0x65) goto LAB_100068c5;
          if (plVar15 < (_locale_t)0x68) goto LAB_100062b8;
          if (plVar15 == (_locale_t)0x69) goto LAB_10006570;
          if (plVar15 != (_locale_t)0x6e) {
            if (plVar15 != (_locale_t)0x6f) goto LAB_100068c5;
            local_418 = (_locale_t)0x8;
            if ((local_40c & 0x80) != 0) {
              local_40c = local_40c | 0x200;
            }
            goto LAB_10006581;
          }
          piVar6 = (int *)*param_4;
          local_41c = param_4 + 1;
          bVar17 = FUN_1000bc43();
          if (CONCAT31(extraout_var,bVar17) == 0) goto LAB_10006aaa;
          if ((local_40c & 0x20) == 0) {
            *piVar6 = local_420;
          }
          else {
            *(undefined2 *)piVar6 = (undefined2)local_420;
          }
          local_458 = 1;
          plVar15 = extraout_EDX_03;
        }
        if (local_45c != (_locale_t)0x0) {
          _free(local_45c);
          local_45c = (_locale_t)0x0;
          plVar15 = extraout_EDX_09;
        }
      }
      uVar1 = *local_454;
      plVar8 = (_locale_t)(uint)uVar1;
      plVar13 = plVar15;
      iVar9 = local_468;
      param_2 = local_454;
      param_4 = local_41c;
      plVar11 = (_locale_t)PTR_DAT_100130c0;
    }
    if (local_444 != '\0') {
      *(uint *)(local_448 + 0x70) = *(uint *)(local_448 + 0x70) & 0xfffffffd;
    }
  }
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,plVar13);
  return;
}



/**************************************************/

/* Function: FUN_10006b0b @ 10006b0b */

void FUN_10006b0b(void)

{
  uint uVar1;
  undefined4 extraout_EDX;
  
  uVar1 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  OutputDebugStringA("Invalid parameter passed to C runtime function.\n");
  FUN_10004d96(uVar1 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/**************************************************/

/* Function: FUN_10006bb1 @ 10006bb1 */

void FUN_10006bb1(void)

{
  FUN_10006b0b();
  return;
}



/**************************************************/

/* Function: __get_errno_from_oserr @ 10006bbc */

/* Library Function - Single Match
    __get_errno_from_oserr
   
   Library: Visual Studio 2008 Release */

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_100130c8)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x100130cc);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_10006bfe @ 10006bfe */

int * FUN_10006bfe(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = FUN_10007b50();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_10013230;
  }
  return &p_Var1->_terrno;
}



/**************************************************/

/* Function: FUN_10006c11 @ 10006c11 */

ulong * FUN_10006c11(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = FUN_10007b50();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_10013234;
  }
  return &p_Var1->_tdoserrno;
}



/**************************************************/

/* Function: __dosmaperr @ 10006c24 */

/* Library Function - Single Match
    __dosmaperr
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = FUN_10006c11();
  *puVar1 = param_1;
  iVar2 = __get_errno_from_oserr(param_1);
  piVar3 = FUN_10006bfe();
  *piVar3 = iVar2;
  return;
}



/**************************************************/

/* Function: FUN_10006c47 @ 10006c47 */

undefined4 * __fastcall FUN_10006c47(undefined4 *param_1)

{
  FUN_1000be75(param_1,(undefined4 *)&stack0x00000004);
  *param_1 = &PTR_FUN_1000f3cc;
  return param_1;
}



/**************************************************/

/* Function: FUN_10006c70 @ 10006c70 */

exception * __thiscall FUN_10006c70(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1000f3cc;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_100047f2(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10006c97 @ 10006c97 */

undefined4 * __thiscall FUN_10006c97(void *this,int param_1)

{
  FUN_1000bed1(this,param_1);
  *(undefined ***)this = &PTR_FUN_1000f3cc;
  return this;
}



/**************************************************/

/* Function: FUN_10006cb4 @ 10006cb4 */

undefined4 __cdecl FUN_10006cb4(byte *param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((iVar3 == 0) || (pbVar5 = (byte *)(iVar3 + 8), *pbVar5 == 0)) {
LAB_10006d26:
    uVar4 = 1;
  }
  else {
    if (iVar3 == *(int *)(param_2 + 4)) {
LAB_10006d05:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_10006d26;
    }
    else {
      pbVar2 = (byte *)(*(int *)(param_2 + 4) + 8);
      do {
        bVar1 = *pbVar5;
        bVar6 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_10006cf8:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10006cfd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar6 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_10006cf8;
        pbVar5 = pbVar5 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10006cfd:
      if (iVar3 == 0) goto LAB_10006d05;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/**************************************************/

/* Function: ___FrameUnwindFilter @ 10006d2d */

/* Library Function - Single Match
    ___FrameUnwindFilter
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___FrameUnwindFilter(undefined4 *param_1)

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

/* Function: ___FrameUnwindToState @ 10006d76 */

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
  FUN_10006e3c();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/**************************************************/

/* Function: FUN_10006e3c @ 10006e3c */

void FUN_10006e3c(void)

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

/* Function: FUN_10006e57 @ 10006e57 */

undefined4 FUN_10006e57(void)

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

/* Function: ___DestructExceptionObject @ 10006e9c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

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

/* Function: ___AdjustPointer @ 10006ef0 */

/* Library Function - Single Match
    ___AdjustPointer
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

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

/* Function: FUN_10006f19 @ 10006f19 */

uint __cdecl FUN_10006f19(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int in_EAX;
  uint extraout_EAX;
  int unaff_ESI;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined1 local_5;
  
  if (param_1 == (int *)0x0) {
    _inconsistency();
    terminate();
    return extraout_EAX;
  }
  local_18 = *param_1;
  local_5 = 0;
  if (0 < local_18) {
    piVar1 = *(int **)(*(int *)(unaff_ESI + 0x1c) + 0xc);
    local_14 = 0;
    iVar2 = *piVar1;
    do {
      in_EAX = iVar2;
      if (0 < iVar2) {
        iVar3 = param_1[1];
        puVar4 = *(uint **)(unaff_ESI + 0x1c);
        local_10 = iVar2;
        local_c = piVar1;
        do {
          local_c = local_c + 1;
          in_EAX = FUN_10006cb4((byte *)(iVar3 + local_14),(byte *)*local_c,puVar4);
          if (in_EAX != 0) {
            local_5 = 1;
            break;
          }
          local_10 = local_10 + -1;
        } while (0 < local_10);
      }
      local_14 = local_14 + 0x10;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),local_5);
}



/**************************************************/

/* Function: CallUnexpected @ 10006fac */

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

/* Function: Catch_All@10006fdd @ 10006fdd */

void Catch_All_10006fdd(void)

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

/* Function: _Doraise @ 10006ff5 */

/* Library Function - Single Match
    protected: virtual void __thiscall std::bad_alloc::_Doraise(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall std::bad_alloc::_Doraise(bad_alloc *this)

{
  code *pcVar1;
  undefined1 local_10 [12];
  
  FUN_10006c97(local_10,(int)this);
  __CxxThrowException_8(local_10,&DAT_10011114);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/**************************************************/

/* Function: CallCatchBlock @ 10007015 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

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
  
  local_8 = &DAT_10011168;
  uStack_c = 0x10007021;
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
  FUN_1000713b();
  return local_20;
}



/**************************************************/

/* Function: FUN_1000713b @ 1000713b */

void FUN_1000713b(void)

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

/* Function: ___BuildCatchObjectHelper @ 100071b1 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  void *_Src;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  size_t _Size;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        bVar1 = FID_conflict__ValidateRead(iVar2);
        if ((CONCAT31(extraout_var_03,bVar1) != 0) &&
           (bVar1 = FID_conflict__ValidateRead((int)param_2), CONCAT31(extraout_var_04,bVar1) != 0))
        {
          _Size = *(size_t *)(param_4 + 0x14);
          _Src = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,_Src,_Size);
          return '\0';
        }
      }
      else {
        bVar1 = FID_conflict__ValidateRead(iVar2);
        if (((CONCAT31(extraout_var_05,bVar1) != 0) &&
            (bVar1 = FID_conflict__ValidateRead((int)param_2), CONCAT31(extraout_var_06,bVar1) != 0)
            ) && (bVar1 = FID_conflict__ValidateRead(*(int *)(param_4 + 0x18)),
                 CONCAT31(extraout_var_07,bVar1) != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      bVar1 = FID_conflict__ValidateRead(iVar2);
      if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
         (bVar1 = FID_conflict__ValidateRead((int)param_2), CONCAT31(extraout_var_02,bVar1) != 0)) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar2 = *param_2;
        if (iVar2 == 0) {
          return '\0';
        }
        goto LAB_10007236;
      }
    }
  }
  else {
    bVar1 = FID_conflict__ValidateRead(*(int *)(param_1 + 0x18));
    if ((CONCAT31(extraout_var,bVar1) != 0) &&
       (bVar1 = FID_conflict__ValidateRead((int)param_2), CONCAT31(extraout_var_00,bVar1) != 0)) {
      iVar2 = *(int *)(param_1 + 0x18);
      *param_2 = iVar2;
LAB_10007236:
      iVar2 = ___AdjustPointer(iVar2,(int *)(param_4 + 8));
      *param_2 = iVar2;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/**************************************************/

/* Function: ___BuildCatchObject @ 10007330 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

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

/* Function: CatchIt @ 100073c1 */

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

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

/* Function: FindHandlerForForeignException @ 1000742f */

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

/* Function: FUN_10007523 @ 10007523 */

void __cdecl
FUN_10007523(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
            _CONTEXT *param_4,_s_FuncInfo *param_5,char param_6,_s_HandlerType *param_7,
            _s_CatchableType *param_8)

{
  int *piVar1;
  _s_FuncInfo *p_Var2;
  int *piVar3;
  bool bVar4;
  _ptiddata p_Var5;
  undefined3 extraout_var;
  uint uVar6;
  undefined3 extraout_var_00;
  _s_TryBlockMapEntry *p_Var7;
  int iVar8;
  EHRegistrationNode *unaff_EBX;
  int iVar9;
  int unaff_ESI;
  EHExceptionRecord *pEVar10;
  _s_TryBlockMapEntry *unaff_EDI;
  _s_CatchableType *p_Var11;
  uchar in_stack_ffffffc8;
  uint local_24;
  int local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
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
  pEVar10 = param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    iVar9 = 0x19930520;
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar8 = *(int *)(param_1 + 0x14), iVar8 == 0x19930520 || (iVar8 == 0x19930521)) ||
         (iVar8 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var5 = __getptd();
      if (p_Var5->_curexception == (void *)0x0) {
        return;
      }
      p_Var5 = __getptd();
      param_1 = p_Var5->_curexception;
      p_Var5 = __getptd();
      param_3 = p_Var5->_curcontext;
      bVar4 = FID_conflict__ValidateRead((int)param_1);
      if (CONCAT31(extraout_var,bVar4) == 0) {
        _inconsistency();
      }
      if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
          ((iVar8 = *(int *)(param_1 + 0x14), iVar8 == 0x19930520 ||
           ((iVar8 == 0x19930521 || (iVar8 == 0x19930522)))))) && (*(int *)(param_1 + 0x1c) == 0)) {
        _inconsistency();
      }
      p_Var5 = __getptd();
      pEVar10 = param_1;
      if (p_Var5->_curexcspec != (void *)0x0) {
        p_Var5 = __getptd();
        piVar1 = p_Var5->_curexcspec;
        p_Var5 = __getptd();
        p_Var5->_curexcspec = (void *)0x0;
        uVar6 = FUN_10006f19(piVar1);
        if ((char)uVar6 == '\0') {
          iVar9 = 0;
          pEVar10 = (EHExceptionRecord *)0x0;
          if (0 < *piVar1) {
            do {
              bVar4 = FUN_100047a2(*(void **)(iVar9 + 4 + piVar1[1]),0x10013238);
              if (CONCAT31(extraout_var_00,bVar4) != 0) {
                ___DestructExceptionObject((int *)param_1);
                FUN_10006c47((undefined4 *)&stack0xffffffc8);
                __CxxThrowException_8(&stack0xffffffc8,&DAT_10011114);
                goto LAB_1000768f;
              }
              pEVar10 = pEVar10 + 1;
              iVar9 = iVar9 + 0x10;
            } while ((int)pEVar10 < *piVar1);
          }
          goto LAB_1000765e;
        }
      }
    }
LAB_1000768f:
    if (((*(int *)pEVar10 == -0x1f928c9d) && (*(int *)(pEVar10 + 0x10) == 3)) &&
       ((iVar8 = *(int *)(pEVar10 + 0x14), iVar8 == iVar9 ||
        ((iVar8 == 0x19930521 || (iVar8 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var7 = _GetRangeOfTrysToCheck(param_5,(int)param_7,local_c,&local_14,&local_24);
        for (; local_14 < local_24; local_14 = local_14 + 1) {
          if ((p_Var7->tryLow <= local_c) && (local_c <= p_Var7->tryHigh)) {
            local_10 = p_Var7->pHandlerArray;
            local_20 = p_Var7->nCatches;
            if (0 < local_20) {
              piVar1 = *(int **)(*(int *)(pEVar10 + 0x1c) + 0xc);
              iVar9 = *piVar1;
              iVar8 = iVar9;
              piVar3 = piVar1;
              do {
                while (local_1c = iVar8, local_18 = piVar3 + 1, 0 < local_1c) {
                  p_Var2 = (_s_FuncInfo *)*local_18;
                  iVar8 = FUN_10006cb4((byte *)local_10,(byte *)p_Var2,*(uint **)(pEVar10 + 0x1c));
                  if (iVar8 != 0) {
                    local_5 = '\x01';
                    CatchIt(pEVar10,(EHRegistrationNode *)param_3,param_4,param_5,p_Var2,param_7,
                            param_8,unaff_EDI,unaff_ESI,unaff_EBX,in_stack_ffffffc8);
                    pEVar10 = param_1;
                    goto LAB_1000778a;
                  }
                  piVar3 = local_18;
                  iVar8 = local_1c + -1;
                }
                local_20 = local_20 + -1;
                local_10 = local_10 + 1;
                iVar8 = iVar9;
                piVar3 = piVar1;
              } while (0 < local_20);
            }
          }
LAB_1000778a:
          p_Var7 = p_Var7 + 1;
        }
      }
      if (param_6 != '\0') {
        ___DestructExceptionObject((int *)pEVar10);
      }
      if ((((local_5 != '\0') || ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (param_5->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar6 = FUN_10006f19(&param_5->pESTypeList->nCount), (char)uVar6 != '\0'))
      goto LAB_10007859;
      __getptd();
      __getptd();
      p_Var5 = __getptd();
      p_Var5->_curexception = pEVar10;
      p_Var5 = __getptd();
      p_Var5->_curcontext = param_3;
      p_Var11 = param_8;
      if (param_8 == (_s_CatchableType *)0x0) {
        p_Var11 = (_s_CatchableType *)param_2;
      }
      _UnwindNestedFrames((EHRegistrationNode *)p_Var11,pEVar10);
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
      CallUnexpected(param_5->pESTypeList);
    }
  }
  if (param_5->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_1000765e:
      terminate();
      return;
    }
    FindHandlerForForeignException
              (pEVar10,param_2,param_3,param_4,param_5,local_c,(int)param_7,
               (EHRegistrationNode *)param_8);
  }
LAB_10007859:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/**************************************************/

/* Function: ___InternalCxxFrameHandler @ 10007871 */

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
          _CONTEXT *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
          char param_8)

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
        FUN_10007523(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == (_s_HandlerType *)0x0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10007957 @ 10007957 */

int __cdecl FUN_10007957(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10013270);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10013274 != -1)) {
    iVar3 = DAT_10013274;
    pcVar2 = TlsGetValue(DAT_10013270);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_100079ab;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_100079ab:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 100079bd */

/* Library Function - Single Match
    __encoded_null
   
   Library: Visual Studio 2005 Release */

void __encoded_null(void)

{
  FUN_10007957(0);
  return;
}



/**************************************************/

/* Function: FUN_100079c6 @ 100079c6 */

int __cdecl FUN_100079c6(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10013270);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10013274 != -1)) {
    iVar3 = DAT_10013274;
    pcVar2 = TlsGetValue(DAT_10013270);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_10007a1a;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_10007a1a:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_10007a35 @ 10007a35 */

void FUN_10007a35(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_10013270);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_100079c6(DAT_10014064);
    TlsSetValue(DAT_10013270,pvVar1);
  }
  return;
}



/**************************************************/

/* Function: __mtterm @ 10007a5f */

/* Library Function - Single Match
    __mtterm
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_10013274 != -1) {
    iVar2 = DAT_10013274;
    pcVar1 = (code *)FUN_100079c6(DAT_1001406c);
    (*pcVar1)(iVar2);
    DAT_10013274 = -1;
  }
  if (DAT_10013270 != 0xffffffff) {
    TlsFree(DAT_10013270);
    DAT_10013270 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: __initptd @ 10007a9c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  _Ptd->_pxcptacttab = &DAT_10013460;
  _Ptd->_holdrand = 1;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"EncodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1d) = pFVar1;
    pFVar1 = GetProcAddress(hModule,"DecodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1f) = pFVar1;
  }
  _Ptd->_ownlocale = 1;
  *(undefined1 *)((_Ptd->_setloc_data)._cachein + 8) = 0x43;
  *(undefined1 *)((int)(_Ptd->_setloc_data)._cachein + 0x93) = 0x43;
  _Ptd->ptmbcinfo = (pthreadmbcinfo)&DAT_10013790;
  InterlockedIncrement((LONG *)&DAT_10013790);
  __lock(0xc);
  _Ptd->ptlocinfo = _Locale;
  if (_Locale == (pthreadlocinfo)0x0) {
    _Ptd->ptlocinfo = (pthreadlocinfo)PTR_DAT_10013d98;
  }
  ___addlocaleref(&_Ptd->ptlocinfo->refcount);
  FUN_10007b47();
  return;
}



/**************************************************/

/* Function: FUN_10007b47 @ 10007b47 */

void FUN_10007b47(void)

{
  FUN_1000843c(0xc);
  return;
}



/**************************************************/

/* Function: FUN_10007b50 @ 10007b50 */

_ptiddata FUN_10007b50(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  _ptiddata _Ptd;
  int iVar2;
  undefined4 uVar3;
  _ptiddata p_Var4;
  
  dwErrCode = GetLastError();
  FUN_10007a35();
  uVar3 = DAT_10013274;
  pcVar1 = TlsGetValue(DAT_10013270);
  _Ptd = (_ptiddata)(*pcVar1)(uVar3);
  if ((_Ptd == (_ptiddata)0x0) && (_Ptd = (_ptiddata)FUN_1000c385(1,0x214), _Ptd != (_ptiddata)0x0))
  {
    uVar3 = DAT_10013274;
    p_Var4 = _Ptd;
    pcVar1 = (code *)FUN_100079c6(DAT_10014068);
    iVar2 = (*pcVar1)(uVar3,p_Var4);
    if (iVar2 == 0) {
      _free(_Ptd);
      _Ptd = (_ptiddata)0x0;
    }
    else {
      __initptd(_Ptd,(pthreadlocinfo)0x0);
      _Ptd->_thandle = 0xffffffff;
    }
  }
  SetLastError(dwErrCode);
  return _Ptd;
}



/**************************************************/

/* Function: __getptd @ 10007bcc */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2008 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = FUN_10007b50();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: FUN_10007be6 @ 10007be6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_10007be6(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x28));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x30) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x30));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x40));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10013460) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10013790)) {
        _free(pLVar1);
      }
    }
    FUN_10007d1c();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10013d98) && (pLVar1 != (LONG *)&DAT_10013cc0)) &&
         (*pLVar1 == 0)) {
        FUN_1000b6e9(pLVar1);
      }
    }
    FUN_10007d28();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10007d1c @ 10007d1c */

void FUN_10007d1c(void)

{
  FUN_1000843c(0xd);
  return;
}



/**************************************************/

/* Function: FUN_10007d28 @ 10007d28 */

void FUN_10007d28(void)

{
  FUN_1000843c(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 10007d31 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2008 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_10013274 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_10013270), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10013274;
      pcVar2 = TlsGetValue(DAT_10013270);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_10013274;
    pcVar2 = (code *)FUN_100079c6(DAT_10014068);
    (*pcVar2)(iVar3,uVar4);
    FUN_10007be6(_Ptd);
  }
  if (DAT_10013270 != 0xffffffff) {
    TlsSetValue(DAT_10013270,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: FUN_10007d9f @ 10007d9f */

undefined4 FUN_10007d9f(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  code *pcVar4;
  _ptiddata p_Var5;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_10014060 = GetProcAddress(hModule,"FlsAlloc");
  DAT_10014064 = GetProcAddress(hModule,"FlsGetValue");
  DAT_10014068 = GetProcAddress(hModule,"FlsSetValue");
  DAT_1001406c = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10014060 == (FARPROC)0x0) || (DAT_10014064 == (FARPROC)0x0)) ||
      (DAT_10014068 == (FARPROC)0x0)) || (DAT_1001406c == (FARPROC)0x0)) {
    DAT_10014064 = TlsGetValue_exref;
    DAT_10014060 = (FARPROC)&LAB_10007a2c;
    DAT_10014068 = TlsSetValue_exref;
    DAT_1001406c = TlsFree_exref;
  }
  DAT_10013270 = TlsAlloc();
  if ((DAT_10013270 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10013270,DAT_10014064), BVar1 != 0))
  {
    FUN_10009422();
    DAT_10014060 = (FARPROC)FUN_10007957((int)DAT_10014060);
    DAT_10014064 = (FARPROC)FUN_10007957((int)DAT_10014064);
    DAT_10014068 = (FARPROC)FUN_10007957((int)DAT_10014068);
    DAT_1001406c = (FARPROC)FUN_10007957((int)DAT_1001406c);
    iVar2 = FUN_10008394();
    if (iVar2 != 0) {
      pcVar4 = FUN_10007be6;
      pcVar3 = (code *)FUN_100079c6((int)DAT_10014060);
      DAT_10013274 = (*pcVar3)(pcVar4);
      if ((DAT_10013274 != -1) && (_Ptd = (_ptiddata)FUN_1000c385(1,0x214), _Ptd != (_ptiddata)0x0))
      {
        iVar2 = DAT_10013274;
        p_Var5 = _Ptd;
        pcVar3 = (code *)FUN_100079c6((int)DAT_10014068);
        iVar2 = (*pcVar3)(iVar2,p_Var5);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          _Ptd->_thandle = 0xffffffff;
          return 1;
        }
        _free(_Ptd);
      }
    }
    __mtterm();
  }
  return 0;
}



/**************************************************/

/* Function: __CallSettingFrame@12 @ 10007f20 */

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

/* Function: FUN_10007f6c @ 10007f6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10007f6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  HANDLE hProcess;
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
  
  _DAT_10014180 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10014184 = &stack0x00000004;
  _DAT_100140c0 = 0x10001;
  _DAT_10014070 = 0xc0000409;
  _DAT_10014074 = 1;
  local_32c = DAT_100130b0;
  local_328 = DAT_100130b4;
  _DAT_1001407c = unaff_retaddr;
  _DAT_1001414c = in_GS;
  _DAT_10014150 = in_FS;
  _DAT_10014154 = in_ES;
  _DAT_10014158 = in_DS;
  _DAT_1001415c = unaff_EDI;
  _DAT_10014160 = unaff_ESI;
  _DAT_10014164 = unaff_EBX;
  _DAT_10014168 = param_2;
  _DAT_1001416c = param_1;
  _DAT_10014170 = in_EAX;
  _DAT_10014174 = unaff_EBP;
  DAT_10014178 = unaff_retaddr;
  _DAT_1001417c = in_CS;
  _DAT_10014188 = in_SS;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1000f444);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: FUN_1000804e @ 1000804e */

void __cdecl FUN_1000804e(undefined4 param_1)

{
  DAT_1001438c = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1000805d @ 1000805d */

undefined4 __cdecl FUN_1000805d(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_100079c6(DAT_1001438c);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10008085 @ 10008085 */

void __cdecl FUN_10008085(undefined4 *param_1,undefined4 *param_2,uint param_3)

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

/* Function: __VEC_memcpy @ 1000810c */

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
      FUN_10008085(param_1,param_2,param_3 - uVar3);
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

/* Function: FUN_100081ef @ 100081ef */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_100081ef(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 1000823f */

/* WARNING: Removing unreachable block (ram,0x1000827c) */
/* WARNING: Removing unreachable block (ram,0x10008269) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_100081ef(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: fastzero_I @ 100082ae */

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

/* Function: __VEC_memzero @ 10008305 */

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

/* Function: FUN_10008394 @ 10008394 */

undefined4 FUN_10008394(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10014390;
  do {
    if ((&DAT_10013284)[iVar2 * 2] == 1) {
      (&DAT_10013280)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = FUN_1000c5f4((&DAT_10013280)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10013280)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 100083e5 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10013280;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x100133a0);
  puVar1 = &DAT_10013280;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x100133a0);
  return;
}



/**************************************************/

/* Function: FUN_1000843c @ 1000843c */

void __cdecl FUN_1000843c(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10013280)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 10008453 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *_Memory;
  int *piVar1;
  int iVar2;
  int local_20;
  
  iVar2 = 1;
  local_20 = 1;
  if (DAT_100144e4 == 0) {
    __FF_MSGBANNER();
    FUN_10009464(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10013280 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = FUN_10005263((uint *)0x18);
    if (_Memory == (int *)0x0) {
      piVar1 = FUN_10006bfe();
      *piVar1 = 0xc;
      iVar2 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar2 == 0) {
          _free(_Memory);
          piVar1 = FUN_10006bfe();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_1000850d();
      iVar2 = local_20;
    }
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000850d @ 1000850d */

void FUN_1000850d(void)

{
  FUN_1000843c(10);
  return;
}



/**************************************************/

/* Function: __lock @ 10008516 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10013280)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10013280)[_File * 2]);
  return;
}



/**************************************************/

/* Function: FUN_10008549 @ 10008549 */

undefined4 __cdecl FUN_10008549(undefined4 param_1)

{
  DAT_10015c24 = HeapAlloc(DAT_100144e4,0,0x140);
  if (DAT_10015c24 == (LPVOID)0x0) {
    return 0;
  }
  DAT_100144e0 = 0;
  DAT_10015c20 = 0;
  DAT_10015c2c = DAT_10015c24;
  DAT_10015c28 = param_1;
  DAT_10015c30 = 0x10;
  return 1;
}



/**************************************************/

/* Function: ___sbh_find_block @ 10008597 */

/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2008 Release */

uint __cdecl ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10015c24;
  while( true ) {
    if (DAT_10015c20 * 0x14 + DAT_10015c24 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___sbh_free_block @ 100085c7 */

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
      if (DAT_100144e0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10015c34 * 0x8000 + DAT_100144e0[3]),0x8000,0x4000);
        DAT_100144e0[2] = DAT_100144e0[2] | 0x80000000U >> ((byte)DAT_10015c34 & 0x1f);
        *(undefined4 *)(DAT_100144e0[4] + 0xc4 + DAT_10015c34 * 4) = 0;
        *(char *)(DAT_100144e0[4] + 0x43) = *(char *)(DAT_100144e0[4] + 0x43) + -1;
        if (*(char *)(DAT_100144e0[4] + 0x43) == '\0') {
          DAT_100144e0[1] = DAT_100144e0[1] & 0xfffffffe;
        }
        if (DAT_100144e0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_100144e0[3],0,0x8000);
          HeapFree(DAT_100144e4,0,(LPVOID)DAT_100144e0[4]);
          _memmove(DAT_100144e0,DAT_100144e0 + 5,
                   (DAT_10015c20 * 0x14 - (int)DAT_100144e0) + -0x14 + DAT_10015c24);
          DAT_10015c20 = DAT_10015c20 + -1;
          if (DAT_100144e0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10015c2c = DAT_10015c24;
        }
      }
      DAT_100144e0 = param_1;
      DAT_10015c34 = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 100088dd */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10015c20 == DAT_10015c30) {
    pvVar1 = HeapReAlloc(DAT_100144e4,0,DAT_10015c24,(DAT_10015c30 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10015c30 = DAT_10015c30 + 0x10;
    DAT_10015c24 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10015c20 * 0x14 + (int)DAT_10015c24);
  pvVar1 = HeapAlloc(DAT_100144e4,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10015c20 = DAT_10015c20 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_100144e4,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 1000898d */

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

/* Function: ___sbh_resize_block @ 10008a95 */

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

/* Function: ___sbh_alloc_block @ 10008d76 */

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
  
  puVar9 = DAT_10015c24 + DAT_10015c20 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_10015c2c;
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
  puVar13 = DAT_10015c24;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_10015c2c && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_10015c2c) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_10015c24;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_10015c2c && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_10015c2c) &&
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
  DAT_10015c2c = param_1;
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
    if (iVar10 == 0) goto LAB_10009018;
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
LAB_10009018:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_100144e0)) && (local_8 == DAT_10015c34)) {
    DAT_100144e0 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/**************************************************/

/* Function: ___heap_select @ 1000905b */

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
  iVar1 = FUN_10009239(&local_8);
  if (iVar1 != 0) {
    FUN_10006b0b();
  }
  iVar1 = FUN_10009275(&local_c);
  if (iVar1 != 0) {
    FUN_10006b0b();
  }
  if ((local_8 == 2) && (4 < local_c)) {
    return 1;
  }
  return 3;
}



/**************************************************/

/* Function: FUN_100090b8 @ 100090b8 */

undefined4 __cdecl FUN_100090b8(int param_1)

{
  int iVar1;
  
  DAT_100144e4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100144e4 == (HANDLE)0x0) {
    return 0;
  }
  DAT_10015c1c = ___heap_select();
  if ((DAT_10015c1c == 3) && (iVar1 = FUN_10008549(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_100144e4);
    DAT_100144e4 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 10009118 */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2008 Release */

void __cdecl __heap_term(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_10015c1c == 3) {
    iVar1 = 0;
    if (0 < DAT_10015c20) {
      puVar2 = (undefined4 *)((int)DAT_10015c24 + 0x10);
      do {
        VirtualFree((LPVOID)puVar2[-1],0,0x8000);
        HeapFree(DAT_100144e4,0,(LPVOID)*puVar2);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10015c20);
    }
    HeapFree(DAT_100144e4,0,DAT_10015c24);
  }
  HeapDestroy(DAT_100144e4);
  DAT_100144e4 = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: __initterm_e @ 1000918c */

/* Library Function - Single Match
    __initterm_e
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

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

/* Function: __amsg_exit @ 100091b0 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_10009464(param_1);
  pcVar1 = (code *)FUN_100079c6((int)PTR___exit_100133a4);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: ___crtCorExitProcess @ 100091d9 */

/* Library Function - Single Match
    ___crtCorExitProcess
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___crtCorExitProcess(int param_1)

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

/* Function: ___crtExitProcess @ 10009204 */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2008 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  ___crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: __initterm @ 1000921c */

/* Library Function - Single Match
    __initterm
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __initterm(undefined4 *param_1)

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

/* Function: FUN_10009239 @ 10009239 */

undefined4 __cdecl FUN_10009239(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (DAT_100144ec == 0)) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0x16;
    FUN_10006bb1();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_100144ec;
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: FUN_10009275 @ 10009275 */

undefined4 __cdecl FUN_10009275(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 == (undefined4 *)0x0) || (DAT_100144ec == 0)) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0x16;
    FUN_10006bb1();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_100144f8;
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: FUN_100092b6 @ 100092b6 */

int __cdecl FUN_100092b6(undefined4 param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (DAT_10015c10 != (code *)0x0) {
    BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10015c10);
    if (BVar1 != 0) {
      (*DAT_10015c10)(param_1);
    }
  }
  FUN_1000bc22();
  iVar2 = __initterm_e((undefined4 *)&DAT_1000f19c,(undefined4 *)&DAT_1000f1ac);
  if (iVar2 == 0) {
    __initterm((undefined4 *)&DAT_1000f198);
    if (DAT_10015c18 != (code *)0x0) {
      BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10015c18);
      if (BVar1 != 0) {
        (*DAT_10015c18)(0,2,0);
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: doexit @ 1000932f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x100093ee) */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2005 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *local_20;
  
  __lock(8);
  if (DAT_1001452c != 1) {
    DAT_10014528 = 1;
    DAT_10014524 = (undefined1)param_3;
    if (param_2 == 0) {
      puVar1 = (undefined4 *)FUN_100079c6(DAT_10015c08);
      local_20 = (undefined4 *)FUN_100079c6(DAT_10015c04);
      if (puVar1 != (undefined4 *)0x0) {
        while (local_20 = local_20 + -1, puVar1 <= local_20) {
          if ((code *)*local_20 != (code *)0x0) {
            (*(code *)*local_20)();
          }
        }
      }
      __initterm((undefined4 *)&DAT_1000f1bc);
    }
    __initterm((undefined4 *)&DAT_1000f1c4);
  }
  FUN_100093e8();
  if (param_3 != 0) {
    return;
  }
  DAT_1001452c = 1;
  FUN_1000843c(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_100093e8 @ 100093e8 */

void FUN_100093e8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_1000843c(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 100093fd */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __exit(int _Code)

{
  doexit(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 10009413 */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}



/**************************************************/

/* Function: FUN_10009422 @ 10009422 */

void FUN_10009422(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1000804e(uVar1);
  FUN_1000c50b(uVar1);
  FUN_1000c81a(uVar1);
  FUN_1000c608(uVar1);
  FUN_10009622();
  FUN_10005a93();
  PTR___exit_100133a4 = (undefined *)FUN_10007957(0x100093fd);
  return;
}



/**************************************************/

/* Function: FUN_10009464 @ 10009464 */

void __cdecl FUN_10009464(int param_1)

{
  char cVar1;
  char *lpBuffer;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE hFile;
  char *pcVar5;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_100133a8)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar2 = local_8;
  if (local_8 < 0x17) {
    iVar3 = __set_error_mode(3);
    if ((iVar3 != 1) && ((iVar3 = __set_error_mode(3), iVar3 != 0 || (DAT_10014058 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      iVar3 = FUN_1000a0c9(&DAT_10014530,0x314,"Runtime Error!\n\nProgram: ");
      if (iVar3 != 0) {
        FUN_10006b0b();
      }
      DAT_1001464d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10014549,0x104);
      if ((DVar4 == 0) &&
         (iVar3 = FUN_1000a0c9(&DAT_10014549,0x2fb,"<program name unknown>"), iVar3 != 0)) {
        FUN_10006b0b();
      }
      iVar3 = FUN_1000c9c9(&DAT_10014530,0x314,&DAT_10014549);
      if (iVar3 != 0) {
        FUN_10006b0b();
      }
      iVar3 = FUN_1000c9c9(&DAT_10014530,0x314,"\n\n");
      if (iVar3 != 0) {
        FUN_10006b0b();
      }
      iVar3 = FUN_1000c9c9(&DAT_10014530,0x314,*(char **)(local_8 * 8 + 0x100133ac));
      if (iVar3 != 0) {
        FUN_10006b0b();
      }
      FID_conflict____crtMessageBoxW(&DAT_10014530,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
      lpBuffer = *(char **)(uVar2 * 8 + 0x100133ac);
      pcVar5 = lpBuffer;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,lpBuffer,(int)pcVar5 - (int)(lpBuffer + 1),&local_c,(LPOVERLAPPED)0x0);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 100095e9 */

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
    if (DAT_10014058 != 1) {
      return;
    }
  }
  FUN_10009464(0xfc);
  FUN_10009464(0xff);
  return;
}



/**************************************************/

/* Function: FUN_10009622 @ 10009622 */

void FUN_10009622(void)

{
  return;
}



/**************************************************/

/* Function: FUN_10009623 @ 10009623 */

undefined4 __cdecl FUN_10009623(int param_1,void *param_2)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  _ptiddata p_Var4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  p_Var4 = FUN_10007b50();
  uVar6 = 0;
  if (p_Var4 != (_ptiddata)0x0) {
    piVar1 = p_Var4->_pxcptacttab;
    piVar5 = piVar1;
    do {
      if (*piVar5 == param_1) break;
      piVar5 = piVar5 + 3;
    } while (piVar5 < piVar1 + DAT_100134e4 * 3);
    if ((piVar1 + DAT_100134e4 * 3 <= piVar5) || (*piVar5 != param_1)) {
      piVar5 = (int *)0x0;
    }
    if ((piVar5 == (int *)0x0) || (pcVar2 = (code *)piVar5[2], pcVar2 == (code *)0x0)) {
      uVar6 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar5[2] = 0;
      uVar6 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        pvVar3 = p_Var4->_tpxcptinfoptrs;
        p_Var4->_tpxcptinfoptrs = param_2;
        if (piVar5[1] == 8) {
          if (DAT_100134d8 < DAT_100134dc + DAT_100134d8) {
            iVar7 = DAT_100134d8 * 0xc;
            iVar8 = DAT_100134d8;
            do {
              *(undefined4 *)(iVar7 + 8 + (int)p_Var4->_pxcptacttab) = 0;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0xc;
            } while (iVar8 < DAT_100134dc + DAT_100134d8);
          }
          iVar8 = *piVar5;
          iVar7 = p_Var4->_tfpecode;
          if (iVar8 == -0x3fffff72) {
            p_Var4->_tfpecode = 0x83;
          }
          else if (iVar8 == -0x3fffff70) {
            p_Var4->_tfpecode = 0x81;
          }
          else if (iVar8 == -0x3fffff6f) {
            p_Var4->_tfpecode = 0x84;
          }
          else if (iVar8 == -0x3fffff6d) {
            p_Var4->_tfpecode = 0x85;
          }
          else if (iVar8 == -0x3fffff73) {
            p_Var4->_tfpecode = 0x82;
          }
          else if (iVar8 == -0x3fffff71) {
            p_Var4->_tfpecode = 0x86;
          }
          else if (iVar8 == -0x3fffff6e) {
            p_Var4->_tfpecode = 0x8a;
          }
          (*pcVar2)(8,p_Var4->_tfpecode);
          p_Var4->_tfpecode = iVar7;
        }
        else {
          piVar5[2] = 0;
          (*pcVar2)(piVar5[1]);
        }
        p_Var4->_tpxcptinfoptrs = pvVar3;
      }
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}



/**************************************************/

/* Function: __calloc_impl @ 10009783 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      piVar1 = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_10015c1c == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_10015c28)) {
          __lock(4);
          piVar1 = ___sbh_alloc_block(_Size);
          FUN_1000987f();
          if (piVar1 != (int *)0x0) {
            _memset(piVar1,0,(size_t)_Size);
            goto LAB_10009834;
          }
        }
        else {
LAB_10009834:
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
        piVar1 = HeapAlloc(DAT_100144e4,8,(SIZE_T)dwBytes);
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_10014844 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = FUN_1000805d(dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0xc;
    FUN_10006bb1();
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: FUN_1000987f @ 1000987f */

void FUN_1000987f(void)

{
  FUN_1000843c(4);
  return;
}



/**************************************************/

/* Function: _calloc @ 100098a1 */

/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  piVar2 = __calloc_impl(_Count,_Size,&local_8);
  iVar1 = local_8;
  if (((piVar2 == (int *)0x0) && (local_8 != 0)) && (piVar3 = FUN_10006bfe(), piVar3 != (int *)0x0))
  {
    piVar3 = FUN_10006bfe();
    *piVar3 = iVar1;
  }
  return piVar2;
}



/**************************************************/

/* Function: FUN_100098e2 @ 100098e2 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_100098e2(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  int iVar5;
  undefined4 uVar6;
  UINT *pUVar7;
  int iVar8;
  int *piVar9;
  UINT UVar10;
  UINT UVar11;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x100098ee;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = _calloc(0x20,0x24);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10009b13:
    uVar6 = 0xffffffff;
  }
  else {
    DAT_10015ae4 = 0x20;
    DAT_10015b00 = puVar2;
    for (; puVar2 < DAT_10015b00 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 6) = 10;
      *(undefined1 *)((int)puVar2 + 7) = 10;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar10 = *(UINT *)local_68.lpReserved2;
      pUVar7 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar7 + UVar10);
      if (0x7ff < (int)UVar10) {
        UVar10 = 0x800;
      }
      iVar8 = 1;
      while ((UVar11 = UVar10, (int)DAT_10015ae4 < (int)UVar10 &&
             (puVar2 = _calloc(0x20,0x24), UVar11 = DAT_10015ae4, puVar2 != (undefined4 *)0x0))) {
        (&DAT_10015b00)[iVar8] = puVar2;
        DAT_10015ae4 = DAT_10015ae4 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(undefined1 *)((int)puVar2 + 6) = 10;
          *(undefined1 *)((int)puVar2 + 7) = 10;
          puVar1 = (&DAT_10015b00)[iVar8];
        }
        iVar8 = iVar8 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar11) {
        do {
          pvVar4 = *(HANDLE *)local_20;
          if ((((pvVar4 != (HANDLE)0xffffffff) && (pvVar4 != (HANDLE)0xfffffffe)) &&
              ((*pUVar7 & 1) != 0)) &&
             (((*pUVar7 & 8) != 0 || (DVar3 = GetFileType(pvVar4), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x24 + (int)(&DAT_10015b00)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar7;
            iVar8 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar8 == 0) goto LAB_10009b13;
            puVar2[2] = puVar2[2] | 4;
          }
          local_24 = local_24 + 1;
          pUVar7 = (UINT *)((int)pUVar7 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar11);
      }
    }
    iVar8 = 0;
    do {
      piVar9 = DAT_10015b00 + iVar8 * 9;
      if ((*piVar9 == -1) || (*piVar9 == -2)) {
        *(undefined1 *)(piVar9 + 1) = 0x81;
        if (iVar8 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar8 != 1);
        }
        pvVar4 = GetStdHandle(DVar3);
        if (((pvVar4 == (HANDLE)0xffffffff) || (pvVar4 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar4), DVar3 == 0)) {
          *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          *piVar9 = -2;
        }
        else {
          *piVar9 = (int)pvVar4;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 8;
          }
          iVar5 = ___crtInitCritSecAndSpinCount(piVar9 + 3,4000);
          if (iVar5 == 0) goto LAB_10009b13;
          piVar9[2] = piVar9[2] | 4;
        }
      }
      else {
        *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x80;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    SetHandleCount(DAT_10015ae4);
    uVar6 = 0;
  }
  return uVar6;
}



/**************************************************/

/* Function: FUN_10009b1c @ 10009b1c */

void FUN_10009b1c(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_10015b00;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x480; uVar3 = uVar3 + 0x24) {
        if ((*(byte *)(uVar3 + 8) & 4) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x10015c00);
  return;
}



/**************************************************/

/* Function: FUN_10009b6a @ 10009b6a */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10009b6a(void)

{
  size_t _Count;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *local_8;
  
  iVar7 = 0;
  if (DAT_10015c0c == 0) {
    ___initmbctable();
  }
  if (DAT_1001404c == (char *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar5 = 0;
    for (pcVar6 = DAT_1001404c; *pcVar6 != '\0';
        pcVar6 = pcVar6 + (int)(pcVar8 + (1 - (int)(pcVar6 + 1)))) {
      pcVar8 = pcVar6;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (*pcVar6 != '=') {
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + (int)(pcVar8 + (1 - (int)(pcVar6 + 1)));
      }
    }
    _Count = iVar5 + iVar7 * 4 + 4;
    puVar3 = _calloc(_Count,1);
    if (puVar3 == (undefined4 *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      pcVar6 = (char *)(puVar3 + iVar7 + 1);
      _DAT_10015c14 = (int)puVar3 + _Count;
      _DAT_1001450c = puVar3;
      _DAT_10014510 = puVar3;
      local_8 = pcVar6;
      for (pcVar8 = DAT_1001404c; *pcVar8 != '\0'; pcVar8 = pcVar8 + (int)pcVar4) {
        pcVar4 = pcVar8;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = pcVar4 + (1 - (int)(pcVar8 + 1));
        if (*pcVar8 != '=') {
          *puVar3 = pcVar6;
          iVar7 = FUN_1000a0c9(pcVar6,(int)pcVar4,pcVar8);
          if (iVar7 != 0) {
            FUN_10006b0b();
          }
          pcVar6 = local_8 + (int)pcVar4;
          puVar3 = puVar3 + 1;
          local_8 = pcVar6;
        }
      }
      _free(DAT_1001404c);
      DAT_1001404c = (char *)0x0;
      *puVar3 = 0;
      _DAT_10015c00 = 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/**************************************************/

/* Function: FUN_10009c70 @ 10009c70 */

void __cdecl FUN_10009c70(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int *unaff_ESI;
  byte *pbVar8;
  byte *pbVar9;
  
  iVar1 = *unaff_ESI;
  iVar2 = *param_4;
  *unaff_ESI = 0;
  *param_4 = 1;
  if ((param_2 != (undefined4 *)0x0) && (0 < iVar2)) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar3 = false;
  do {
    if (*param_1 == 0x22) {
      bVar3 = !bVar3;
      bVar7 = 0x22;
      pbVar8 = param_1 + 1;
    }
    else {
      *unaff_ESI = *unaff_ESI + 1;
      if ((param_3 != (byte *)0x0) && (*unaff_ESI <= iVar1)) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar7 = *param_1;
      pbVar8 = param_1 + 1;
      iVar5 = __ismbblead((uint)bVar7);
      if (iVar5 != 0) {
        *unaff_ESI = *unaff_ESI + 1;
        if ((param_3 != (byte *)0x0) && (*unaff_ESI <= iVar1)) {
          *param_3 = *pbVar8;
          param_3 = param_3 + 1;
        }
        pbVar8 = param_1 + 2;
      }
      if (bVar7 == 0) {
        pbVar8 = pbVar8 + -1;
        goto LAB_10009d26;
      }
    }
    param_1 = pbVar8;
  } while ((bVar3) || ((bVar7 != 0x20 && (bVar7 != 9))));
  if (param_3 != (byte *)0x0) {
    param_3[-1] = 0;
  }
LAB_10009d26:
  bVar3 = false;
  while (pbVar9 = pbVar8, *pbVar8 != 0) {
    for (; (*pbVar9 == 0x20 || (*pbVar9 == 9)); pbVar9 = pbVar9 + 1) {
    }
    if (*pbVar9 == 0) break;
    *param_4 = *param_4 + 1;
    if ((param_2 != (undefined4 *)0x0) && (*param_4 <= iVar2)) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    while( true ) {
      bVar4 = true;
      uVar6 = 0;
      for (; *pbVar9 == 0x5c; pbVar9 = pbVar9 + 1) {
        uVar6 = uVar6 + 1;
      }
      pbVar8 = pbVar9;
      if (*pbVar9 == 0x22) {
        if ((uVar6 & 1) == 0) {
          if ((!bVar3) || (pbVar8 = pbVar9 + 1, *pbVar8 != 0x22)) {
            bVar4 = false;
            pbVar8 = pbVar9;
          }
          bVar3 = !bVar3;
        }
        uVar6 = uVar6 >> 1;
      }
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        *unaff_ESI = *unaff_ESI + 1;
        if ((param_3 != (byte *)0x0) && (*unaff_ESI <= iVar1)) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
      }
      bVar7 = *pbVar8;
      if ((bVar7 == 0) || ((!bVar3 && ((bVar7 == 0x20 || (bVar7 == 9)))))) break;
      if (bVar4) {
        *unaff_ESI = *unaff_ESI + 1;
        iVar5 = __ismbblead((int)(char)*pbVar8);
        if (param_3 == (byte *)0x0) {
          if (iVar5 != 0) {
            pbVar8 = pbVar8 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
        }
        else {
          if (iVar5 != 0) {
            *param_3 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            *unaff_ESI = *unaff_ESI + 1;
            param_3 = param_3 + 1;
          }
          *param_3 = *pbVar8;
          param_3 = param_3 + 1;
        }
      }
      pbVar9 = pbVar8 + 1;
    }
    *unaff_ESI = *unaff_ESI + 1;
    if ((param_3 != (byte *)0x0) && (*unaff_ESI <= iVar1)) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
  }
  *param_4 = *param_4 + 1;
  if ((param_2 != (undefined4 *)0x0) && (*param_4 <= iVar2)) {
    *param_2 = 0;
  }
  return;
}



/**************************************************/

/* Function: FUN_10009e52 @ 10009e52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10009e52(void)

{
  uint uVar1;
  int *piVar2;
  uint *local_10;
  uint local_c;
  byte *local_8;
  
  if (DAT_10015c0c == 0) {
    ___initmbctable();
  }
  DAT_1001494c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10014848,0x104);
  _DAT_1001451c = &DAT_10014848;
  if ((DAT_10015c3c == (byte *)0x0) || (local_8 = DAT_10015c3c, *DAT_10015c3c == 0)) {
    local_8 = &DAT_10014848;
  }
  FUN_10009c70(local_8,(undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != (uint *)0xffffffff)) {
    if ((local_10 <= local_10 + local_c) &&
       (piVar2 = FUN_10005263(local_10 + local_c), piVar2 != (int *)0x0)) {
      FUN_10009c70(local_8,piVar2,(byte *)(piVar2 + uVar1),(int *)&local_c);
      _DAT_10014500 = local_c - 1;
      _DAT_10014504 = piVar2;
      return 0;
    }
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_10009f0d @ 10009f0d */

int * FUN_10009f0d(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  int iVar6;
  uint *cbMultiByte;
  int *piVar7;
  LPCH _Src;
  char *pcVar8;
  LPWCH lpWideCharStr;
  int *local_8;
  char *pcVar9;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_10014950 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10014950 = 1;
      goto LAB_10009f62;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10014950 = 2;
    }
  }
  if (DAT_10014950 != 1) {
    if ((DAT_10014950 != 2) && (DAT_10014950 != 0)) {
      return (int *)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (int *)0x0;
    }
    cVar1 = *_Src;
    pcVar8 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar9 = pcVar8;
        pcVar8 = pcVar9 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = pcVar9 + 2;
      cVar1 = *pcVar8;
    }
    piVar7 = FUN_10005263((uint *)(pcVar8 + (1 - (int)_Src)));
    if (piVar7 == (int *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (int *)0x0;
    }
    _memcpy(piVar7,_Src,(size_t)(pcVar8 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return piVar7;
  }
LAB_10009f62:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (int *)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar5 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar4 = pWVar5;
      pWVar5 = pWVar4 + 1;
    } while (*pWVar5 != L'\0');
    pWVar5 = pWVar4 + 2;
    WVar2 = *pWVar5;
  }
  iVar6 = ((int)pWVar5 - (int)lpWideCharStr >> 1) + 1;
  cbMultiByte = (uint *)WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                            (LPBOOL)0x0);
  local_8 = (int *)0x0;
  if (((cbMultiByte != (uint *)0x0) && (piVar7 = FUN_10005263(cbMultiByte), piVar7 != (int *)0x0))
     && (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)piVar7,(int)cbMultiByte,
                                     (LPCSTR)0x0,(LPBOOL)0x0), local_8 = piVar7, iVar6 == 0)) {
    _free(piVar7);
    local_8 = (int *)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}



/**************************************************/

/* Function: FUN_1000a044 @ 1000a044 */

void FUN_1000a044(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_100130b0 == 0xbb40e64e) || ((DAT_100130b0 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_100130b0 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_100130b0 == 0xbb40e64e) {
      DAT_100130b0 = 0xbb40e64f;
    }
  }
  DAT_100130b4 = ~DAT_100130b0;
  return;
}



/**************************************************/

/* Function: FUN_1000a0c9 @ 1000a0c9 */

undefined4 __cdecl FUN_1000a0c9(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    pcVar3 = param_1;
    if (param_3 != (char *)0x0) {
      do {
        cVar1 = *param_3;
        *pcVar3 = cVar1;
        param_3 = param_3 + 1;
        if (cVar1 == '\0') break;
        param_2 = param_2 + -1;
        pcVar3 = pcVar3 + 1;
      } while (param_2 != 0);
      if (param_2 != 0) {
        return 0;
      }
      *param_1 = '\0';
      piVar2 = FUN_10006bfe();
      uStack_14 = 0x22;
      *piVar2 = 0x22;
      goto LAB_1000a0eb;
    }
    *param_1 = '\0';
  }
  piVar2 = FUN_10006bfe();
  uStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_1000a0eb:
  FUN_10006bb1();
  return uStack_14;
}



/**************************************************/

/* Function: _abort @ 1000a131 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2008 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if ((DAT_1001350c & 1) != 0) {
    FUN_10009464(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if ((DAT_1001350c & 2) != 0) {
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

/* Function: __local_unwind4 @ 1000a248 */

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
  puStack_24 = &LAB_1000a2d8;
  pvStack_28 = ExceptionList;
  local_20 = DAT_100130b0 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_1000c508();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_1000a31e @ 1000a31e */

void FUN_1000a31e(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 1000a33a */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



/**************************************************/

/* Function: _EH4_TransferToHandler @ 1000a351 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1000a368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 1000a36a */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000a37f,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 1000a384 */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/**************************************************/

/* Function: FUN_1000a3a0 @ 1000a3a0 */

bool __cdecl FUN_1000a3a0(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/**************************************************/

/* Function: FUN_1000a3d0 @ 1000a3d0 */

int __cdecl FUN_1000a3d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x3c) + param_1;
  uVar3 = 0;
  iVar1 = *(ushort *)(iVar2 + 0x14) + 0x18 + iVar2;
  if (*(ushort *)(iVar2 + 6) != 0) {
    do {
      if ((*(uint *)(iVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(iVar1 + 8) + *(uint *)(iVar1 + 0xc))) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 0x28;
    } while (uVar3 < *(ushort *)(iVar2 + 6));
  }
  return 0;
}



/**************************************************/

/* Function: __IsNonwritableInCurrentImage @ 1000a416 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int extraout_EDX;
  
  bVar1 = FUN_1000a3a0((short *)&IMAGE_DOS_HEADER_10000000);
  if ((CONCAT31(extraout_var,bVar1) != 0) &&
     (iVar2 = FUN_1000a3d0(extraout_EDX,(int)pTarget - extraout_EDX), iVar2 != 0)) {
    return ~(*(uint *)(iVar2 + 0x24) >> 0x1f) & 1;
  }
  return 0;
}



/**************************************************/

/* Function: __lseeki64_nolock @ 1000a482 */

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)FUN_1000cbdc(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_10006bfe();
    *piVar2 = 9;
LAB_1000a4b3:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        __dosmaperr(DVar4);
        goto LAB_1000a4b3;
      }
    }
    pbVar1 = (byte *)((&DAT_10015b00)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/**************************************************/

/* Function: __lseeki64 @ 1000a507 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    puVar1 = FUN_10006c11();
    *puVar1 = 0;
    piVar2 = FUN_10006bfe();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10015ae4)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x24;
      if ((*(byte *)((&DAT_10015b00)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        puVar1 = FUN_10006c11();
        *puVar1 = 0;
        piVar2 = FUN_10006bfe();
        *piVar2 = 9;
        FUN_10006bb1();
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        FUN_1000cc6e(_FileHandle);
        if ((*(byte *)((&DAT_10015b00)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = FUN_10006bfe();
          *piVar2 = 9;
          puVar1 = FUN_10006c11();
          *puVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_1000a616();
      }
      goto LAB_1000a610;
    }
    puVar1 = FUN_10006c11();
    *puVar1 = 0;
    piVar2 = FUN_10006bfe();
    *piVar2 = 9;
    FUN_10006bb1();
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_1000a610:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/**************************************************/

/* Function: FUN_1000a616 @ 1000a616 */

void FUN_1000a616(void)

{
  int unaff_EBP;
  
  FUN_1000cd0f(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000a620 @ 1000a620 */

void __fastcall
FUN_1000a620(undefined4 param_1,uint param_2,uint param_3,WCHAR *param_4,WCHAR *param_5)

{
  char cVar1;
  wchar_t *pwVar2;
  WCHAR WVar3;
  byte bVar4;
  wchar_t wVar5;
  ulong *puVar6;
  int *piVar7;
  undefined3 extraout_var;
  _ptiddata p_Var8;
  BOOL BVar9;
  UINT CodePage;
  int iVar10;
  DWORD nNumberOfBytesToWrite;
  WCHAR *pWVar11;
  WCHAR *pWVar12;
  WCHAR *pWVar13;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  int iVar14;
  uint uVar15;
  int iVar16;
  int unaff_EDI;
  WCHAR *pWVar17;
  undefined8 uVar18;
  WCHAR *local_594;
  uint local_590;
  uint local_58c;
  DWORD local_588;
  int *local_584;
  WCHAR *local_580;
  int local_57c;
  WCHAR *local_578;
  WCHAR *local_574;
  DWORD local_570;
  WCHAR *local_56c;
  WCHAR local_568 [170];
  CHAR local_414 [688];
  WCHAR local_164 [170];
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  local_578 = param_4;
  local_574 = (WCHAR *)0x0;
  local_57c = 0;
  if (param_5 == (WCHAR *)0x0) goto LAB_1000acef;
  if (param_4 == (WCHAR *)0x0) {
    puVar6 = FUN_10006c11();
    *puVar6 = 0;
    piVar7 = FUN_10006bfe();
    *piVar7 = 0x16;
    FUN_10006bb1();
    param_2 = extraout_EDX;
    goto LAB_1000acef;
  }
  iVar14 = (param_3 & 0x1f) * 0x24;
  piVar7 = &DAT_10015b00 + ((int)param_3 >> 5);
  local_58c = *(uint *)(*piVar7 + iVar14 + 8) & 3;
  local_584 = piVar7;
  if (((local_58c == 2) || (local_58c == 1)) && ((~(uint)param_5 & 1) == 0)) {
    puVar6 = FUN_10006c11();
    *puVar6 = 0;
    piVar7 = FUN_10006bfe();
    *piVar7 = 0x16;
    FUN_10006bb1();
    param_2 = extraout_EDX_00;
    goto LAB_1000acef;
  }
  if ((*(byte *)(*piVar7 + iVar14 + 4) & 0x20) != 0) {
    __lseeki64_nolock(param_3,0x200000000,unaff_EDI);
  }
  bVar4 = FUN_1000ae27(param_3);
  param_2 = extraout_EDX_01;
  if ((CONCAT31(extraout_var,bVar4) == 0) || ((*(byte *)(iVar14 + 4 + *piVar7) & 0x80) == 0)) {
LAB_1000a974:
    if ((*(byte *)((undefined4 *)(*piVar7 + iVar14) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar7 + iVar14),local_578,(DWORD)param_5,(LPDWORD)&local_580,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_1000ac65:
        local_570 = GetLastError();
        param_2 = extraout_EDX_15;
      }
      else {
        local_570 = 0;
        local_574 = local_580;
        param_2 = extraout_EDX_14;
      }
LAB_1000ac71:
      if (local_574 != (WCHAR *)0x0) goto LAB_1000acef;
      goto LAB_1000ac7b;
    }
    local_570 = 0;
    if (local_58c == 0) {
      local_56c = local_578;
      if (param_5 == (WCHAR *)0x0) goto LAB_1000acb1;
      do {
        uVar15 = 0;
        pWVar12 = (WCHAR *)((int)local_56c - (int)local_578);
        pWVar11 = local_568;
        do {
          if (param_5 <= pWVar12) break;
          pWVar17 = (WCHAR *)((int)local_56c + 1);
          WVar3 = *local_56c;
          pWVar12 = (WCHAR *)((int)pWVar12 + 1);
          if ((char)WVar3 == '\n') {
            local_57c = local_57c + 1;
            *(char *)pWVar11 = '\r';
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            uVar15 = uVar15 + 1;
          }
          *(char *)pWVar11 = (char)WVar3;
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          uVar15 = uVar15 + 1;
          piVar7 = local_584;
          local_56c = pWVar17;
        } while (uVar15 < 0x400);
        BVar9 = WriteFile(*(HANDLE *)(iVar14 + *piVar7),local_568,(int)pWVar11 - (int)local_568,
                          (LPDWORD)&local_580,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_1000ac65;
        local_574 = (WCHAR *)((int)local_574 + (int)local_580);
        param_2 = extraout_EDX_10;
      } while (((int)pWVar11 - (int)local_568 <= (int)local_580) &&
              ((WCHAR *)((int)local_56c - (int)local_578) < param_5));
      goto LAB_1000ac71;
    }
    if (local_58c == 2) {
      pWVar11 = local_578;
      if (param_5 != (WCHAR *)0x0) {
        do {
          uVar15 = 0;
          pWVar13 = (WCHAR *)((int)pWVar11 - (int)local_578);
          pWVar12 = local_568;
          pWVar17 = pWVar11;
          do {
            pWVar11 = pWVar17;
            if (param_5 <= pWVar13) break;
            WVar3 = *pWVar17;
            pWVar13 = pWVar13 + 1;
            if (WVar3 == L'\n') {
              if (0x3fd < uVar15) break;
              local_57c = local_57c + 2;
              *pWVar12 = L'\r';
              pWVar12 = pWVar12 + 1;
              uVar15 = uVar15 + 2;
            }
            *pWVar12 = WVar3;
            pWVar12 = pWVar12 + 1;
            uVar15 = uVar15 + 2;
            pWVar11 = pWVar17 + 1;
            pWVar17 = pWVar17 + 1;
          } while (uVar15 < 0x3ff);
          BVar9 = WriteFile(*(HANDLE *)(iVar14 + *local_584),local_568,(int)pWVar12 - (int)local_568
                            ,(LPDWORD)&local_580,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_1000ac65;
          local_574 = (WCHAR *)((int)local_574 + (int)local_580);
          param_2 = extraout_EDX_11;
        } while ((((int)pWVar12 - (int)local_568 <= (int)local_580) && (local_580 != (WCHAR *)0x0))
                && ((WCHAR *)((int)pWVar11 - (int)local_578) < param_5));
        goto LAB_1000ac71;
      }
    }
    else {
      local_56c = local_578;
      if (param_5 != (WCHAR *)0x0) {
        do {
          uVar15 = 0;
          pWVar12 = (WCHAR *)((int)local_56c - (int)local_578);
          pWVar11 = local_164;
          do {
            if (param_5 <= pWVar12) break;
            WVar3 = *local_56c;
            pWVar17 = local_56c + 1;
            pWVar12 = pWVar12 + 1;
            if (WVar3 == L'\n') {
              if (0x150 < uVar15) break;
              *pWVar11 = L'\r';
              pWVar11 = pWVar11 + 1;
              uVar15 = uVar15 + 2;
            }
            *pWVar11 = WVar3;
            uVar15 = uVar15 + 2;
            pWVar11 = pWVar11 + 1;
            local_56c = pWVar17;
          } while (uVar15 < 0x152);
          iVar16 = 0;
          iVar10 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar11 - (int)local_164) / 2,
                                       local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar10 == 0) goto LAB_1000ac65;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar14 + *local_584),local_414 + iVar16,iVar10 - iVar16,
                              (LPDWORD)&local_580,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_570 = GetLastError();
              param_2 = extraout_EDX_13;
              break;
            }
            iVar16 = iVar16 + (int)local_580;
            param_2 = extraout_EDX_12;
          } while (iVar16 < iVar10);
        } while ((iVar10 <= iVar16) &&
                (local_574 = (WCHAR *)((int)local_56c - (int)local_578), local_574 < param_5));
        goto LAB_1000ac71;
      }
    }
  }
  else {
    p_Var8 = __getptd();
    pwVar2 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar14 + *piVar7),&local_590);
    param_2 = extraout_EDX_02;
    if ((BVar9 == 0) || ((pwVar2 == (wchar_t *)0x0 && (local_58c == 0)))) goto LAB_1000a974;
    CodePage = GetConsoleCP();
    local_588 = 0;
    local_594 = local_578;
    param_2 = extraout_EDX_03;
    if (param_5 != (WCHAR *)0x0) {
      local_56c = (WCHAR *)0x0;
      do {
        if (local_58c == 0) {
          cVar1 = (char)*local_594;
          local_590 = (uint)(cVar1 == '\n');
          iVar10 = _isleadbyte(CONCAT22(cVar1 >> 7,(short)cVar1));
          if (iVar10 == 0) {
            uVar18 = FUN_1000bd6e((wchar_t *)&local_570,(char *)local_594,1);
            param_2 = (uint)((ulonglong)uVar18 >> 0x20);
            if ((int)uVar18 == -1) break;
          }
          else {
            param_2 = extraout_EDX_04;
            if ((uint)(((int)local_578 - (int)local_594) + (int)param_5) < 2) break;
            uVar18 = FUN_1000bd6e((wchar_t *)&local_570,(char *)local_594,2);
            param_2 = (uint)((ulonglong)uVar18 >> 0x20);
            if ((int)uVar18 == -1) break;
            local_594 = (WCHAR *)((int)local_594 + 1);
            local_56c = (WCHAR *)((int)local_56c + 1);
          }
          local_594 = (WCHAR *)((int)local_594 + 1);
          local_56c = (WCHAR *)((int)local_56c + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(CodePage,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
          param_2 = extraout_EDX_05;
          if (nNumberOfBytesToWrite == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar14 + *piVar7),local_10,nNumberOfBytesToWrite,&local_588,
                            (LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_1000ac65;
          local_574 = (WCHAR *)((int)local_574 + local_588);
          param_2 = extraout_EDX_06;
          if ((int)local_588 < (int)nNumberOfBytesToWrite) break;
          if (local_590 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar14 + *piVar7),local_10,1,&local_588,(LPOVERLAPPED)0x0)
            ;
            if (BVar9 == 0) goto LAB_1000ac65;
            param_2 = extraout_EDX_07;
            if ((int)local_588 < 1) break;
            local_57c = local_57c + 1;
            local_574 = (WCHAR *)((int)local_574 + 1);
          }
        }
        else {
          if ((local_58c == 1) || (local_58c == 2)) {
            local_570 = (DWORD)(ushort)*local_594;
            param_2 = (uint)(*local_594 == L'\n');
            local_594 = local_594 + 1;
            local_56c = local_56c + 1;
            local_590 = param_2;
          }
          if ((local_58c == 1) || (local_58c == 2)) {
            wVar5 = __putwch_nolock((wchar_t)local_570);
            if (wVar5 != (wchar_t)local_570) goto LAB_1000ac65;
            local_574 = (WCHAR *)((int)local_574 + 1);
            param_2 = extraout_EDX_08;
            if (local_590 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_1000ac65;
              local_574 = (WCHAR *)((int)local_574 + 1);
              local_57c = local_57c + 1;
              param_2 = extraout_EDX_09;
            }
          }
        }
      } while (local_56c < param_5);
      goto LAB_1000ac71;
    }
LAB_1000ac7b:
    if (local_570 != 0) {
      if (local_570 == 5) {
        piVar7 = FUN_10006bfe();
        *piVar7 = 9;
        puVar6 = FUN_10006c11();
        *puVar6 = 5;
        param_2 = extraout_EDX_16;
      }
      else {
        __dosmaperr(local_570);
        param_2 = extraout_EDX_17;
      }
      goto LAB_1000acef;
    }
  }
LAB_1000acb1:
  if (((*(byte *)(iVar14 + 4 + *local_584) & 0x40) == 0) || ((char)*local_578 != '\x1a')) {
    piVar7 = FUN_10006bfe();
    *piVar7 = 0x1c;
    puVar6 = FUN_10006c11();
    *puVar6 = 0;
    param_2 = extraout_EDX_18;
  }
LAB_1000acef:
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/**************************************************/

/* Function: FID_conflict:__lseek @ 1000acfc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __locking
    __lseek
    __read
    __write
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___lseek(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  uint extraout_EDX;
  int iVar3;
  int iVar4;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = FUN_10006c11();
    *puVar1 = 0;
    piVar2 = FUN_10006bfe();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10015ae4)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x24;
      if ((*(byte *)((&DAT_10015b00)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        iVar4 = _FileHandle;
        FUN_1000cc6e(_FileHandle);
        if ((*(byte *)((&DAT_10015b00)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = FUN_10006bfe();
          *piVar2 = 9;
          puVar1 = FUN_10006c11();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = FUN_1000a620(iVar4,extraout_EDX,_FileHandle,_Buf,(WCHAR *)_MaxCharCount);
        }
        FUN_1000adce();
        return local_20;
      }
    }
    puVar1 = FUN_10006c11();
    *puVar1 = 0;
    piVar2 = FUN_10006bfe();
    *piVar2 = 9;
    FUN_10006bb1();
  }
  return -1;
}



/**************************************************/

/* Function: FUN_1000adce @ 1000adce */

void FUN_1000adce(void)

{
  int unaff_EBP;
  
  FUN_1000cd0f(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000add8 @ 1000add8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000add8(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_10014990 = _DAT_10014990 + 1;
  pvVar1 = _calloc(1,0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[5] = 0;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}



/**************************************************/

/* Function: FUN_1000ae27 @ 1000ae27 */

byte __cdecl FUN_1000ae27(uint param_1)

{
  byte bVar1;
  int *piVar2;
  
  if (param_1 == 0xfffffffe) {
    piVar2 = FUN_10006bfe();
    *piVar2 = 9;
    return 0;
  }
  if (((int)param_1 < 0) || (DAT_10015ae4 <= param_1)) {
    piVar2 = FUN_10006bfe();
    *piVar2 = 9;
    FUN_10006bb1();
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)((&DAT_10015b00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
  }
  return bVar1;
}



/**************************************************/

/* Function: FUN_1000af5c @ 1000af5c */

void __cdecl FUN_1000af5c(uint param_1)

{
  if ((0x1001350f < param_1) && (param_1 < 0x10013771)) {
    __lock(((int)(param_1 + 0xeffecaf0) >> 5) + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000af91 @ 1000af91 */

void __cdecl FUN_1000af91(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    __lock(param_1 + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000afb9 @ 1000afb9 */

void __cdecl FUN_1000afb9(uint param_1)

{
  if ((0x1001350f < param_1) && (param_1 < 0x10013771)) {
    FUN_1000843c(((int)(param_1 + 0xeffecaf0) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1000afee @ 1000afee */

void __cdecl FUN_1000afee(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000843c(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/**************************************************/

/* Function: __fileno @ 1000b016 */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2008 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  int iVar2;
  
  if (_File == (FILE *)0x0) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0x16;
    FUN_10006bb1();
    iVar2 = -1;
  }
  else {
    iVar2 = _File->_file;
  }
  return iVar2;
}



/**************************************************/

/* Function: CPtoLCID @ 1000b048 */

/* Library Function - Single Match
    int __cdecl CPtoLCID(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl CPtoLCID(int param_1)

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

/* Function: FUN_1000b077 @ 1000b077 */

void FUN_1000b077(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  _memset((void *)(in_EAX + 0x1c),0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  iVar2 = 0x101;
  do {
    *puVar1 = puVar1[(int)&DAT_10013790 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10013790 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: FUN_1000b0d1 @ 1000b0d1 */

void FUN_1000b0d1(void)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  char *extraout_EDX;
  char *pcVar7;
  BYTE *pBVar8;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [256];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      pcVar7 = pcVar2 + (-0x61 - (unaff_ESI + 0x11d));
      if (pcVar7 + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_1000b24a:
        pcVar7 = (char *)CONCAT31((int3)((uint)pcVar7 >> 8),cVar6);
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar7 < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_1000b24a;
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
      pBVar8 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar8) {
          _memset(local_108 + uVar4,0x20,(*pBVar8 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar8[1];
        pBVar8 = pBVar8 + 2;
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
          goto LAB_1000b1e8;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_1000b1e8:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
      pcVar7 = extraout_EDX;
    } while (uVar4 < 0x100);
  }
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,pcVar7);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 1000b264 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2008 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10013cb4) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10013bb8) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10013790)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10013bb8;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10013bb8;
      InterlockedIncrement((LONG *)PTR_DAT_10013bb8);
    }
    FUN_1000b2ff();
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

/* Function: FUN_1000b2ff @ 1000b2ff */

void FUN_1000b2ff(void)

{
  FUN_1000843c(0xd);
  return;
}



/**************************************************/

/* Function: getSystemCP @ 1000b308 */

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
  
  FUN_10005dd7(local_14,(int *)0x0);
  DAT_10014994 = 0;
  if (unaff_ESI == -2) {
    DAT_10014994 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10014994 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_10014994 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_10014994 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: __setmbcp_nolock @ 1000b384 */

/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2005 Release */

void __cdecl __setmbcp_nolock(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  UINT CodePage;
  uint uVar4;
  BOOL BVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  int extraout_ECX;
  undefined2 *puVar8;
  int iVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar10;
  BYTE *pBVar11;
  int unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  CodePage = getSystemCP(unaff_EDI);
  if (CodePage != 0) {
    local_20 = (byte *)0x0;
    uVar4 = 0;
LAB_1000b3c2:
    if (*(UINT *)((int)&DAT_10013bc0 + uVar4) != CodePage) goto code_r0x1000b3ca;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar7 = &DAT_10013bd0 + (int)local_20 * 0x30;
    local_20 = pbVar7;
    do {
      for (; (*pbVar7 != 0 && (bVar3 = pbVar7[1], bVar3 != 0)); pbVar7 = pbVar7 + 2) {
        for (uVar4 = (uint)*pbVar7; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar4);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x10013bbc);
          bVar3 = pbVar7[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar7 = local_20 + 8;
      local_20 = pbVar7;
    } while (local_24 < 4);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 8) = 1;
    iVar9 = CPtoLCID(unaff_EDI);
    *(int *)(param_2 + 0xc) = iVar9;
    puVar6 = (undefined2 *)(param_2 + 0x10);
    puVar8 = (undefined2 *)(&DAT_10013bc4 + extraout_ECX);
    iVar9 = 6;
    do {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    goto LAB_1000b4c5;
  }
LAB_1000b3af:
  FUN_1000b077();
  uVar10 = extraout_EDX;
LAB_1000b522:
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,uVar10);
  return;
code_r0x1000b3ca:
  local_20 = (byte *)((int)local_20 + 1);
  uVar4 = uVar4 + 0x30;
  if (0xef < uVar4) goto code_r0x1000b3d7;
  goto LAB_1000b3c2;
code_r0x1000b3d7:
  BVar5 = GetCPInfo(CodePage,&local_1c);
  if (BVar5 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar11 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar11[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar7 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar7 = *pbVar7 | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar7 = (byte *)(param_2 + 0x1e);
      iVar9 = 0xfe;
      do {
        *pbVar7 = *pbVar7 | 8;
        pbVar7 = pbVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar9 = CPtoLCID(unaff_EDI);
      *(int *)(param_2 + 0xc) = iVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX_02;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1000b4c5:
    FUN_1000b0d1();
    uVar10 = extraout_EDX_01;
    goto LAB_1000b522;
  }
  uVar10 = extraout_EDX_00;
  if (DAT_10014994 == 0) goto LAB_1000b522;
  goto LAB_1000b3af;
}



/**************************************************/

/* Function: __setmbcp @ 1000b531 */

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
  int *piVar5;
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
    ptVar3 = (pthreadmbcinfo)FUN_10005263((uint *)0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = __setmbcp_nolock(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10013790)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement((LONG *)ptVar3);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10013cb4 & 1) == 0)) {
          __lock(0xd);
          _DAT_100149a4 = ptVar3->mbcodepage;
          _DAT_100149a8 = ptVar3->ismbcodepage;
          _DAT_100149ac = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10014998)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_100139b0)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10013ab8)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10013bb8);
          if ((LVar4 == 0) && (PTR_DAT_10013bb8 != &DAT_10013790)) {
            _free(PTR_DAT_10013bb8);
          }
          PTR_DAT_10013bb8 = (undefined *)ptVar3;
          InterlockedIncrement((LONG *)ptVar3);
          FUN_1000b692();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10013790) {
          _free(ptVar3);
        }
        piVar5 = FUN_10006bfe();
        *piVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_1000b692 @ 1000b692 */

void FUN_1000b692(void)

{
  FUN_1000843c(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 1000b6cb */

/* Library Function - Single Match
    ___initmbctable
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_10015c0c == 0) {
    __setmbcp(-3);
    DAT_10015c0c = 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000b6e9 @ 1000b6e9 */

void __cdecl FUN_1000b6e9(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  void *_Memory;
  undefined4 *puVar3;
  
  _Memory = param_1;
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10013eb0)) &&
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
  if ((ppuVar2 != &PTR_DAT_10013df0) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x50);
  param_1 = (void *)0x6;
  do {
    if ((((undefined *)puVar3[-2] != &DAT_10013cb8) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = (int *)puVar3[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar3 = puVar3 + 4;
    param_1 = (void *)((int)param_1 + -1);
  } while (param_1 != (void *)0x0);
  _free(_Memory);
  return;
}



/**************************************************/

/* Function: ___addlocaleref @ 1000b832 */

/* Library Function - Single Match
    ___addlocaleref
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
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
  pLVar2 = param_1 + 0x14;
  param_1 = (LONG *)0x6;
  do {
    if (((undefined *)pLVar2[-2] != &DAT_10013cb8) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar2);
    }
    if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar2[1]);
    }
    pLVar2 = pLVar2 + 4;
    param_1 = (LONG *)((int)param_1 + -1);
  } while (param_1 != (LONG *)0x0);
  InterlockedIncrement((LONG *)(pLVar1[0x35] + 0xb4));
  return;
}



/**************************************************/

/* Function: ___removelocaleref @ 1000b8c1 */

/* Library Function - Single Match
    ___removelocaleref
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
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
    pLVar2 = param_1 + 0x14;
    param_1 = (LONG *)0x6;
    do {
      if (((undefined *)pLVar2[-2] != &DAT_10013cb8) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar2);
      }
      if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar2[1]);
      }
      pLVar2 = pLVar2 + 4;
      param_1 = (LONG *)((int)param_1 + -1);
    } while (param_1 != (LONG *)0x0);
    InterlockedDecrement((LONG *)(pLVar1[0x35] + 0xb4));
  }
  return pLVar1;
}



/**************************************************/

/* Function: __updatetlocinfoEx_nolock @ 1000b95a */

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
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10013cc0)) {
          FUN_1000b6e9(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 1000b998 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10013cb4) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1000ba02();
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

/* Function: FUN_1000ba02 @ 1000ba02 */

void FUN_1000ba02(void)

{
  FUN_1000843c(0xc);
  return;
}



/**************************************************/

/* Function: _ferror @ 1000ba0e */

/* Library Function - Single Match
    _ferror
   
   Library: Visual Studio 2008 Release */

int __cdecl _ferror(FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  if (_File == (FILE *)0x0) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0x16;
    FUN_10006bb1();
    uVar2 = 0;
  }
  else {
    uVar2 = _File->_flag & 0x20;
  }
  return uVar2;
}



/**************************************************/

/* Function: FUN_1000ba42 @ 1000ba42 */

void __fastcall FUN_1000ba42(undefined4 param_1,undefined4 param_2,undefined4 param_3,FILE *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  char cVar5;
  undefined8 uVar6;
  wchar_t wVar7;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  wVar7 = (wchar_t)param_3;
  if ((param_4->_flag & 0x40) == 0) {
    iVar2 = __fileno(param_4);
    param_2 = extraout_EDX;
    if ((iVar2 == -1) || (iVar2 = __fileno(param_4), param_2 = extraout_EDX_00, iVar2 == -2)) {
      puVar4 = &DAT_100134e8;
    }
    else {
      iVar2 = __fileno(param_4);
      uVar3 = __fileno(param_4);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x24 + (&DAT_10015b00)[iVar2 >> 5]);
      param_2 = extraout_EDX_01;
    }
    if (((byte)*(undefined4 *)(puVar4 + 8) & 3) != 2) {
      iVar2 = __fileno(param_4);
      param_2 = extraout_EDX_02;
      if ((iVar2 == -1) || (iVar2 = __fileno(param_4), param_2 = extraout_EDX_03, iVar2 == -2)) {
        puVar4 = &DAT_100134e8;
      }
      else {
        iVar2 = __fileno(param_4);
        uVar3 = __fileno(param_4);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x24 + (&DAT_10015b00)[iVar2 >> 5]);
        param_2 = extraout_EDX_04;
      }
      if (((byte)*(undefined4 *)(puVar4 + 8) & 3) == 1) {
        piVar1 = &param_4->_cnt;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar3 = FUN_10005c8c((int)(char)param_3,param_4);
          param_2 = extraout_EDX_05;
        }
        else {
          *param_4->_ptr = (char)param_3;
          uVar3 = (uint)(byte)*param_4->_ptr;
          param_4->_ptr = param_4->_ptr + 1;
        }
        if (uVar3 != 0xffffffff) {
          piVar1 = &param_4->_cnt;
          *piVar1 = *piVar1 + -1;
          cVar5 = (char)((uint)param_3 >> 8);
          if (*piVar1 < 0) {
            FUN_10005c8c((int)cVar5,param_4);
            param_2 = extraout_EDX_06;
          }
          else {
            *param_4->_ptr = cVar5;
            param_4->_ptr = param_4->_ptr + 1;
          }
        }
        goto LAB_1000bc13;
      }
      iVar2 = __fileno(param_4);
      param_2 = extraout_EDX_07;
      if ((iVar2 == -1) || (iVar2 = __fileno(param_4), param_2 = extraout_EDX_08, iVar2 == -2)) {
        puVar4 = &DAT_100134e8;
      }
      else {
        iVar2 = __fileno(param_4);
        uVar3 = __fileno(param_4);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x24 + (&DAT_10015b00)[iVar2 >> 5]);
        param_2 = extraout_EDX_09;
      }
      if ((puVar4[4] & 0x80) != 0) {
        uVar6 = FUN_1000dd18(&local_14,local_10,5,wVar7);
        param_2 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (((int)uVar6 == 0) && (iVar2 = 0, 0 < local_14)) {
          do {
            piVar1 = &param_4->_cnt;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 < 0) {
              uVar3 = FUN_10005c8c((int)local_10[iVar2],param_4);
              param_2 = extraout_EDX_10;
            }
            else {
              *param_4->_ptr = local_10[iVar2];
              uVar3 = (uint)(byte)*param_4->_ptr;
              param_4->_ptr = param_4->_ptr + 1;
            }
          } while ((uVar3 != 0xffffffff) && (iVar2 = iVar2 + 1, iVar2 < local_14));
        }
        goto LAB_1000bc13;
      }
    }
  }
  piVar1 = &param_4->_cnt;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    FUN_1000da50(wVar7,param_4);
    param_2 = extraout_EDX_11;
  }
  else {
    *(wchar_t *)param_4->_ptr = wVar7;
    param_4->_ptr = param_4->_ptr + 2;
  }
LAB_1000bc13:
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/**************************************************/

/* Function: FUN_1000bc22 @ 1000bc22 */

void FUN_1000bc22(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_10013da8 + uVar3);
    iVar2 = FUN_10007957(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: FUN_1000bc43 @ 1000bc43 */

bool FUN_1000bc43(void)

{
  return DAT_100149d4 == (DAT_100130b0 | 1);
}



/**************************************************/

/* Function: __mbtowc_l @ 1000bc59 */

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      FUN_10005dd7(&local_14,(int *)_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_1000bca6;
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
        piVar3 = FUN_10006bfe();
        *piVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_1000bca6:
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

/* Function: FUN_1000bd6e @ 1000bd6e */

void __cdecl FUN_1000bd6e(wchar_t *param_1,char *param_2,size_t param_3)

{
  __mbtowc_l(param_1,param_2,param_3,(_locale_t)0x0);
  return;
}



/**************************************************/

/* Function: __isleadbyte_l @ 1000bd88 */

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_10005dd7(local_14,(int *)_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}



/**************************************************/

/* Function: _isleadbyte @ 1000bdc0 */

/* Library Function - Single Match
    _isleadbyte
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __aulldvrm @ 1000bde0 */

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

/* Function: FUN_1000be75 @ 1000be75 */

undefined4 * __thiscall FUN_1000be75(void *this,undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_10010224;
  pcVar3 = (char *)*param_1;
  if (pcVar3 == (char *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    piVar4 = FUN_10005263((uint *)(pcVar3 + (1 - (int)pcVar1)));
    *(int **)((int)this + 4) = piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_1000a0c9((char *)piVar4,(int)(pcVar3 + (1 - (int)pcVar1)),(char *)*param_1);
      *(undefined4 *)((int)this + 8) = 1;
    }
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000bed1 @ 1000bed1 */

undefined4 * __thiscall FUN_1000bed1(void *this,int param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  
  *(undefined ***)this = &PTR_FUN_10010224;
  *(undefined4 *)((int)this + 8) = 0;
  pcVar3 = *(char **)(param_1 + 4);
  if (*(int *)(param_1 + 8) == 0) {
    *(char **)((int)this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    piVar4 = FUN_10005263((uint *)(pcVar3 + (1 - (int)pcVar1)));
    *(int **)((int)this + 4) = piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_1000a0c9((char *)piVar4,(int)(pcVar3 + (1 - (int)pcVar1)),*(char **)(param_1 + 4));
      *(undefined4 *)((int)this + 8) = 1;
    }
  }
  return this;
}



/**************************************************/

/* Function: ~exception @ 1000bf39 */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_10010224;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}



/**************************************************/

/* Function: FUN_1000bf5c @ 1000bf5c */

exception * __thiscall FUN_1000bf5c(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_100047f2(this);
  }
  return this;
}



/**************************************************/

/* Function: __EH_prolog3_catch @ 1000bf7d */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_100130b0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __CxxThrowException@8 @ 1000bfb3 */

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
  
  pDVar2 = &DAT_10010240;
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

/* Function: FID_conflict:_ValidateRead @ 1000bfff */

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool __cdecl FID_conflict__ValidateRead(int param_1)

{
  return param_1 != 0;
}



/**************************************************/

/* Function: _memmove @ 1000c020 */

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
          goto switchD_1000c203_caseD_2;
        case 3:
          goto switchD_1000c203_caseD_3;
        }
        goto switchD_1000c203_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000c203_caseD_0;
      case 1:
        goto switchD_1000c203_caseD_1;
      case 2:
        goto switchD_1000c203_caseD_2;
      case 3:
        goto switchD_1000c203_caseD_3;
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
              goto switchD_1000c203_caseD_2;
            case 3:
              goto switchD_1000c203_caseD_3;
            }
            goto switchD_1000c203_caseD_1;
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
              goto switchD_1000c203_caseD_2;
            case 3:
              goto switchD_1000c203_caseD_3;
            }
            goto switchD_1000c203_caseD_1;
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
              goto switchD_1000c203_caseD_2;
            case 3:
              goto switchD_1000c203_caseD_3;
            }
            goto switchD_1000c203_caseD_1;
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
switchD_1000c203_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1000c203_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1000c203_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1000c203_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10015c38 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000c07c_caseD_2;
      case 3:
        goto switchD_1000c07c_caseD_3;
      }
      goto switchD_1000c07c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000c07c_caseD_0;
    case 1:
      goto switchD_1000c07c_caseD_1;
    case 2:
      goto switchD_1000c07c_caseD_2;
    case 3:
      goto switchD_1000c07c_caseD_3;
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
            goto switchD_1000c07c_caseD_2;
          case 3:
            goto switchD_1000c07c_caseD_3;
          }
          goto switchD_1000c07c_caseD_1;
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
            goto switchD_1000c07c_caseD_2;
          case 3:
            goto switchD_1000c07c_caseD_3;
          }
          goto switchD_1000c07c_caseD_1;
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
            goto switchD_1000c07c_caseD_2;
          case 3:
            goto switchD_1000c07c_caseD_3;
          }
          goto switchD_1000c07c_caseD_1;
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
switchD_1000c07c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000c07c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000c07c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000c07c_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: FUN_1000c385 @ 1000c385 */

int * __cdecl FUN_1000c385(uint param_1,uint param_2)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(param_1,param_2,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_100149d8 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_100149d8 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: __global_unwind2 @ 1000c3d4 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000c3ec,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 1000c439 */

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
  puStack_1c = &LAB_1000c3f4;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_1000c508();
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify1 @ 1000c4e0 */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10013dd8 = param_1;
  DAT_10013dd4 = in_EAX;
  DAT_10013ddc = unaff_EBP;
  return in_EAX;
}



/**************************************************/

/* Function: __NLG_Notify @ 1000c4e9 */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10013dd8 = param_1;
  DAT_10013dd4 = in_EAX;
  DAT_10013ddc = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_1000c508 @ 1000c508 */

void FUN_1000c508(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: FUN_1000c50b @ 1000c50b */

void __cdecl FUN_1000c50b(undefined4 param_1)

{
  DAT_100149dc = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1000c51a @ 1000c51a */

undefined4 FUN_1000c51a(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 1000c52f */

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
  
  local_8 = &DAT_10011378;
  uStack_c = 0x1000c53b;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_100079c6(DAT_100149dc);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1000c5a5;
  iVar2 = FUN_10009239(local_20);
  if (iVar2 != 0) {
    FUN_10006b0b();
  }
  if (local_20[0] == 1) {
LAB_1000c594:
    pcVar1 = FUN_1000c51a;
  }
  else {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1000c594;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1000c594;
  }
  DAT_100149dc = FUN_10007957((int)pcVar1);
LAB_1000c5a5:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000c5f4 @ 1000c5f4 */

void __cdecl FUN_1000c5f4(undefined4 param_1,undefined4 param_2)

{
  ___crtInitCritSecAndSpinCount(param_1,param_2);
  return;
}



/**************************************************/

/* Function: FUN_1000c608 @ 1000c608 */

void __cdecl FUN_1000c608(undefined4 param_1)

{
  DAT_100149e0 = param_1;
  DAT_100149e4 = param_1;
  DAT_100149e8 = param_1;
  DAT_100149ec = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 1000c626 */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2008 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_100134e4 * 0xc + param_1);
  if ((DAT_100134e4 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 1000c65d */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2008 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_100079c6(DAT_100149e8);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 1000c66a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2008 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  _ptiddata p_Var8;
  int local_34;
  void *local_30;
  int local_28;
  
  p_Var8 = (_ptiddata)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar7 = &DAT_100149e0;
        iVar4 = DAT_100149e0;
        goto LAB_1000c71f;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_1000c6fd;
        if (_SigNum != 8) goto LAB_1000c6e1;
      }
    }
    p_Var8 = FUN_10007b50();
    if (p_Var8 == (_ptiddata)0x0) {
      return -1;
    }
    uVar2 = siglookup((uint)p_Var8->_pxcptacttab);
    puVar7 = (undefined4 *)(uVar2 + 8);
    pcVar5 = (code *)*puVar7;
  }
  else {
    if (_SigNum == 0xf) {
      puVar7 = &DAT_100149ec;
      iVar4 = DAT_100149ec;
    }
    else if (_SigNum == 0x15) {
      puVar7 = &DAT_100149e4;
      iVar4 = DAT_100149e4;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1000c6e1:
        piVar3 = FUN_10006bfe();
        *piVar3 = 0x16;
        FUN_10006bb1();
        return -1;
      }
LAB_1000c6fd:
      puVar7 = &DAT_100149e8;
      iVar4 = DAT_100149e8;
    }
LAB_1000c71f:
    bVar1 = true;
    pcVar5 = (code *)FUN_100079c6(iVar4);
  }
  if (pcVar5 == (code *)0x1) {
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var8->_tpxcptinfoptrs;
    p_Var8->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var8->_tfpecode;
      p_Var8->_tfpecode = 0x8c;
      goto LAB_1000c783;
    }
  }
  else {
LAB_1000c783:
    if (_SigNum == 8) {
      for (local_28 = DAT_100134d8; local_28 < DAT_100134dc + DAT_100134d8; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var8->_pxcptacttab) = 0;
      }
      goto LAB_1000c7bd;
    }
  }
  uVar6 = __encoded_null();
  *puVar7 = uVar6;
LAB_1000c7bd:
  FUN_1000c7de();
  if (_SigNum == 8) {
    (*pcVar5)(8,p_Var8->_tfpecode);
  }
  else {
    (*pcVar5)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var8->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var8->_tfpecode = local_34;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000c7de @ 1000c7de */

void FUN_1000c7de(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1000843c(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000c81a @ 1000c81a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000c81a(undefined4 param_1)

{
  _DAT_100149f4 = param_1;
  return;
}



/**************************************************/

/* Function: FID_conflict:___crtMessageBoxW @ 1000c829 */

/* Library Function - Multiple Matches With Different Base Names
    ___crtMessageBoxA
    ___crtMessageBoxW
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict____crtMessageBoxW(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 local_24 [8];
  byte local_1c;
  undefined1 local_18 [4];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_14 = __encoded_null();
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  if (DAT_100149f8 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"MessageBoxA"), pFVar1 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_100149f8 = FUN_10007957((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_100149fc = FUN_10007957((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10014a00 = FUN_10007957((int)pFVar1);
    iVar2 = FUN_10009239(&local_c);
    if (iVar2 != 0) {
      FUN_10006b0b();
    }
    if (local_c == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10014a08 = FUN_10007957((int)pFVar1);
      if (DAT_10014a08 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_10014a04 = FUN_10007957((int)pFVar1);
      }
    }
  }
  iVar2 = local_14;
  if ((DAT_10014a04 == local_14) || (DAT_10014a08 == local_14)) {
LAB_1000c979:
    if (DAT_100149fc != iVar2) {
      pcVar3 = (code *)FUN_100079c6(DAT_100149fc);
      iVar4 = (*pcVar3)();
      local_8 = iVar4;
      if ((iVar4 != 0) && (DAT_10014a00 != iVar2)) {
        pcVar3 = (code *)FUN_100079c6(DAT_10014a00);
        local_8 = (*pcVar3)(iVar4);
      }
    }
  }
  else {
    pcVar3 = (code *)FUN_100079c6(DAT_10014a04);
    iVar4 = (*pcVar3)();
    if (iVar4 != 0) {
      puVar8 = local_18;
      uVar7 = 0xc;
      puVar6 = local_24;
      uVar5 = 1;
      pcVar3 = (code *)FUN_100079c6(DAT_10014a08);
      iVar4 = (*pcVar3)(iVar4,uVar5,puVar6,uVar7,puVar8);
      if ((iVar4 != 0) && ((local_1c & 1) != 0)) goto LAB_1000c979;
    }
    iVar2 = FUN_10009275(&local_10);
    if (iVar2 != 0) {
      FUN_10006b0b();
    }
    if (local_10 < 4) {
      _UType = _UType | 0x40000;
    }
    else {
      _UType = _UType | 0x200000;
    }
  }
  iVar2 = local_8;
  pcVar3 = (code *)FUN_100079c6(DAT_100149f8);
  iVar2 = (*pcVar3)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000c9c9 @ 1000c9c9 */

undefined4 __cdecl FUN_1000c9c9(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    pcVar3 = param_1;
    if (param_3 != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      if (param_2 != 0) {
        do {
          cVar1 = *param_3;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          param_3 = param_3 + 1;
          if (cVar1 == '\0') break;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        if (param_2 != 0) {
          return 0;
        }
        *param_1 = '\0';
        piVar2 = FUN_10006bfe();
        uStack_14 = 0x22;
        *piVar2 = 0x22;
        goto LAB_1000c9eb;
      }
    }
    *param_1 = '\0';
  }
  piVar2 = FUN_10006bfe();
  uStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_1000c9eb:
  FUN_10006bb1();
  return uStack_14;
}



/**************************************************/

/* Function: __set_error_mode @ 1000ca3d */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2008 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar2 = DAT_10014054;
      DAT_10014054 = _Mode;
      return iVar2;
    }
    if (_Mode == 3) {
      return DAT_10014054;
    }
  }
  piVar1 = FUN_10006bfe();
  *piVar1 = 0x16;
  FUN_10006bb1();
  return -1;
}



/**************************************************/

/* Function: x_ismbbtype_l @ 1000ca88 */

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  FUN_10005dd7(&local_14,(int *)param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_1000cacc;
  }
  iVar2 = 1;
LAB_1000cacc:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead @ 1000cadb */

/* Library Function - Single Match
    __ismbblead
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}



/**************************************************/

/* Function: FUN_1000cb34 @ 1000cb34 */

undefined4 __cdecl FUN_1000cb34(byte *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  uVar1 = FUN_1000df77(param_1,(undefined4 *)0x0,10,1);
  return uVar1;
}



/**************************************************/

/* Function: FUN_1000cb56 @ 1000cb56 */

undefined4 __cdecl FUN_1000cb56(uint param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_10015ae4)) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10015b00)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10014058 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000cbb8;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000cbb8:
      *(undefined4 *)(iVar3 + (&DAT_10015b00)[(int)param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar1 = FUN_10006bfe();
  *piVar1 = 9;
  puVar2 = FUN_10006c11();
  *puVar2 = 0;
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000cbdc @ 1000cbdc */

undefined4 __cdecl FUN_1000cbdc(uint param_1)

{
  int *piVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0xffffffff) {
    if (param_1 != 0xfffffffe) {
      if (((int)param_1 < 0) || (DAT_10015ae4 <= param_1)) {
        puVar2 = FUN_10006c11();
        *puVar2 = 0;
        piVar1 = FUN_10006bfe();
        *piVar1 = 9;
      }
      else {
        puVar3 = (undefined4 *)((param_1 & 0x1f) * 0x24 + (&DAT_10015b00)[(int)param_1 >> 5]);
        if ((*(byte *)(puVar3 + 1) & 1) != 0) {
          return *puVar3;
        }
        puVar2 = FUN_10006c11();
        *puVar2 = 0;
        piVar1 = FUN_10006bfe();
        *piVar1 = 9;
        FUN_10006bb1();
      }
      return 0xffffffff;
    }
    puVar2 = FUN_10006c11();
    *puVar2 = 0;
  }
  piVar1 = FUN_10006bfe();
  *piVar1 = 9;
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000cc6e @ 1000cc6e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

bool __cdecl FUN_1000cc6e(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1 & 0x1f) * 0x24 + (&DAT_10015b00)[(int)param_1 >> 5];
  bVar3 = true;
  if ((*(byte *)(iVar2 + 8) & 4) == 0) {
    __lock(10);
    if ((*(byte *)(iVar2 + 8) & 4) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      bVar3 = iVar1 != 0;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 4;
    }
    FUN_1000cd06();
  }
  if (bVar3) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_10015b00)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  }
  return bVar3;
}



/**************************************************/

/* Function: FUN_1000cd06 @ 1000cd06 */

void FUN_1000cd06(void)

{
  FUN_1000843c(10);
  return;
}



/**************************************************/

/* Function: FUN_1000cd0f @ 1000cd0f */

void __cdecl FUN_1000cd0f(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10015b00)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/**************************************************/

/* Function: __putwch_nolock @ 1000cd36 */

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  if (DAT_10013de0 != 0) {
    if (DAT_10013ef4 == (HANDLE)0xfffffffe) {
      ___initconout();
      in_EDX = extraout_EDX;
    }
    if (DAT_10013ef4 == (HANDLE)0xffffffff) goto LAB_1000cde1;
    BVar2 = WriteConsoleW(DAT_10013ef4,&_WCh,1,&local_14,(LPVOID)0x0);
    in_EDX = extraout_EDX_00;
    if (BVar2 != 0) {
      DAT_10013de0 = 1;
      goto LAB_1000cde1;
    }
    if ((DAT_10013de0 != 2) || (DVar3 = GetLastError(), in_EDX = extraout_EDX_01, DVar3 != 0x78))
    goto LAB_1000cde1;
    DAT_10013de0 = 0;
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
  in_EDX = extraout_EDX_02;
  if (DAT_10013ef4 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10013ef4,local_10,DVar3,&local_14,(LPVOID)0x0);
    in_EDX = extraout_EDX_03;
  }
LAB_1000cde1:
  wVar1 = FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,in_EDX);
  return wVar1;
}



/**************************************************/

/* Function: FUN_1000cdfa @ 1000cdfa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_1000cdfa(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar4 = 3; iVar4 < DAT_10015ae0; iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 4;
    if (*(int *)(DAT_10014ad8 + iVar3) != 0) {
      pFVar1 = *(FILE **)(DAT_10014ad8 + iVar3);
      if ((pFVar1->_flag & 0x83) != 0) {
        iVar2 = FUN_1000e068(pFVar1);
        if (iVar2 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar4) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10014ad8) + 0x20));
        _free(*(void **)(iVar3 + DAT_10014ad8));
        *(undefined4 *)(iVar3 + DAT_10014ad8) = 0;
      }
    }
  }
  FUN_1000ce90();
  return local_20;
}



/**************************************************/

/* Function: FUN_1000ce90 @ 1000ce90 */

void FUN_1000ce90(void)

{
  FUN_1000843c(1);
  return;
}



/**************************************************/

/* Function: FUN_1000ce99 @ 1000ce99 */

undefined4 __cdecl FUN_1000ce99(FILE *param_1)

{
  int _FileHandle;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *_Buf;
  
  uVar2 = 0;
  if ((((byte)param_1->_flag & 3) == 2) && ((param_1->_flag & 0x108U) != 0)) {
    _Buf = param_1->_base;
    uVar3 = (int)param_1->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(param_1);
      uVar1 = FID_conflict___lseek(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)param_1->_flag < '\0') {
          param_1->_flag = param_1->_flag & 0xfffffffd;
        }
      }
      else {
        param_1->_flag = param_1->_flag | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1->_cnt = 0;
  param_1->_ptr = param_1->_base;
  return uVar2;
}



/**************************************************/

/* Function: FUN_1000cf00 @ 1000cf00 */

int __cdecl FUN_1000cf00(FILE *param_1)

{
  int iVar1;
  
  if (param_1 == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    iVar1 = FUN_1000ce99(param_1);
    if (iVar1 == 0) {
      if ((param_1->_flag & 0x4000) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = __fileno(param_1);
        iVar1 = __commit(iVar1);
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/**************************************************/

/* Function: flsall @ 1000cf47 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar4 = 0; iVar4 < DAT_10015ae0; iVar4 = iVar4 + 1) {
    piVar1 = (int *)(DAT_10014ad8 + iVar4 * 4);
    if ((*piVar1 != 0) && (iVar3 = *piVar1, (*(byte *)(iVar3 + 0xc) & 0x83) != 0)) {
      FUN_1000af91(iVar4,iVar3);
      pFVar2 = *(FILE **)(DAT_10014ad8 + iVar4 * 4);
      if ((pFVar2->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar3 = FUN_1000cf00(pFVar2);
          if (iVar3 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((pFVar2->_flag & 2U) != 0)) {
          iVar3 = FUN_1000cf00(pFVar2);
          if (iVar3 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_1000cfe9();
    }
  }
  FUN_1000d018();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000cfe9 @ 1000cfe9 */

void FUN_1000cfe9(void)

{
  int unaff_ESI;
  
  FUN_1000afee(unaff_ESI,*(int *)(DAT_10014ad8 + unaff_ESI * 4));
  return;
}



/**************************************************/

/* Function: FUN_1000d018 @ 1000d018 */

void FUN_1000d018(void)

{
  FUN_1000843c(1);
  return;
}



/**************************************************/

/* Function: FUN_1000d021 @ 1000d021 */

void FUN_1000d021(void)

{
  flsall(1);
  return;
}



/**************************************************/

/* Function: FUN_1000d02a @ 1000d02a */

undefined4 * __cdecl FUN_1000d02a(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 2;
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_1000d040 @ 1000d040 */

void __cdecl FUN_1000d040(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    _free((int *)(param_1 + -8));
  }
  return;
}



/**************************************************/

/* Function: FUN_1000d060 @ 1000d060 */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall
FUN_1000d060(LPWSTR param_1,LPCSTR param_2,int *param_3,LPWSTR param_4,uint param_5,LPCSTR param_6,
            LPWSTR param_7,LPWSTR param_8,int param_9,UINT param_10,int param_11)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  LPWSTR pWVar6;
  LPWSTR pWVar7;
  uint cchWideChar;
  uint cchDest;
  int *piVar8;
  UINT UVar9;
  LPWSTR extraout_ECX;
  LPWSTR extraout_ECX_00;
  LPWSTR extraout_ECX_01;
  LPWSTR extraout_ECX_02;
  LPWSTR extraout_ECX_03;
  LPWSTR extraout_ECX_04;
  LPWSTR extraout_ECX_05;
  LPWSTR extraout_ECX_06;
  LPWSTR extraout_ECX_07;
  LPWSTR extraout_ECX_08;
  LPWSTR extraout_ECX_09;
  LPWSTR extraout_ECX_10;
  LPWSTR extraout_ECX_11;
  LPCSTR extraout_EDX;
  LPCSTR extraout_EDX_00;
  LPCSTR extraout_EDX_01;
  LPCSTR extraout_EDX_02;
  LPCSTR extraout_EDX_03;
  LPCSTR extraout_EDX_04;
  LPCSTR extraout_EDX_05;
  LPCSTR extraout_EDX_06;
  LPCSTR extraout_EDX_07;
  LPCSTR extraout_EDX_08;
  LPCSTR extraout_EDX_09;
  LPCSTR extraout_EDX_10;
  LPCSTR extraout_EDX_11;
  LPCSTR extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  LPCSTR extraout_EDX_15;
  undefined4 extraout_EDX_16;
  undefined4 extraout_EDX_17;
  uint extraout_EDX_18;
  LPCSTR extraout_EDX_19;
  LPCSTR extraout_EDX_20;
  UINT CodePage;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  int local_50;
  LPWSTR local_3c;
  LPWSTR local_30;
  LPWSTR local_2c;
  LPWSTR local_28;
  LPWSTR local_24;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  CodePage = param_10;
  local_8 = &DAT_10011420;
  uStack_c = 0x1000d06c;
  if (DAT_10014a0c == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      param_1 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
      if (DVar4 == 0x78) {
        DAT_10014a0c = 2;
      }
    }
    else {
      DAT_10014a0c = 1;
      param_1 = extraout_ECX;
      param_2 = extraout_EDX;
    }
  }
  pcVar5 = param_6;
  pWVar6 = param_7;
  if (0 < (int)param_7) {
    do {
      param_1 = (LPWSTR)((int)pWVar6 + -1);
      if (*pcVar5 == '\0') goto LAB_1000d0c9;
      pcVar5 = pcVar5 + 1;
      pWVar6 = param_1;
    } while (param_1 != (LPWSTR)0x0);
    param_1 = (LPWSTR)0xffffffff;
LAB_1000d0c9:
    pWVar6 = (LPWSTR)((int)param_7 - (int)param_1);
    pWVar7 = (LPWSTR)((int)pWVar6 + -1);
    bVar2 = (int)pWVar7 < (int)param_7;
    param_7 = pWVar7;
    if (bVar2) {
      param_7 = pWVar6;
    }
  }
  if ((DAT_10014a0c == 2) || (DAT_10014a0c == 0)) {
    local_30 = (LPWSTR)0x0;
    pWVar6 = (LPWSTR)0x0;
    bVar2 = false;
    if (param_4 == (LPWSTR)0x0) {
      param_4 = *(LPWSTR *)(*param_3 + 0x14);
    }
    if (CodePage == 0) {
      CodePage = *(UINT *)(*param_3 + 4);
      param_10 = CodePage;
    }
    param_1 = param_4;
    uVar10 = ___ansicp((LCID)param_4);
    param_2 = (LPCSTR)((ulonglong)uVar10 >> 0x20);
    UVar9 = (UINT)uVar10;
    if (UVar9 == 0xffffffff) goto LAB_1000d50b;
    if (UVar9 == CodePage) {
      LCMapStringA((LCID)param_4,param_5,param_6,(int)param_7,(LPSTR)param_8,param_9);
      lVar11 = (ulonglong)extraout_EDX_18 << 0x20;
      param_1 = extraout_ECX_11;
    }
    else {
      uVar10 = FUN_1000e20e(param_1,param_2,CodePage,UVar9,param_6,(int *)&param_7,(LPSTR)0x0,0);
      param_2 = (LPCSTR)((ulonglong)uVar10 >> 0x20);
      local_30 = (LPWSTR)uVar10;
      param_1 = extraout_ECX_07;
      if (local_30 == (LPWSTR)0x0) goto LAB_1000d50b;
      local_2c = (LPWSTR)LCMapStringA((LCID)param_4,param_5,(LPCSTR)local_30,(int)param_7,(LPSTR)0x0
                                      ,0);
      lVar11 = (ulonglong)extraout_EDX_13 << 0x20;
      param_1 = extraout_ECX_08;
      if (local_2c != (LPWSTR)0x0) {
        local_8 = (undefined *)0x0;
        if (((int)local_2c < 1) || ((LPWSTR)0xffffffe0 < local_2c)) {
          pWVar6 = (LPWSTR)0x0;
        }
        else {
          if (local_2c + 4 < (LPWSTR)0x401) {
            local_1c = (undefined1 *)&local_50;
            piVar8 = &local_50;
            uVar12 = 0xcccc;
          }
          else {
            uVar12 = 0xdddd;
            piVar8 = FUN_10005263((uint *)(local_2c + 4));
          }
          pWVar6 = (LPWSTR)FUN_1000d02a(piVar8,uVar12);
        }
        local_8 = (undefined *)0xfffffffe;
        if (pWVar6 == (LPWSTR)0x0) {
          param_1 = local_2c;
          pWVar6 = (LPWSTR)FUN_10005263((uint *)local_2c);
          lVar11 = (ulonglong)extraout_EDX_14 << 0x20;
          if (pWVar6 == (LPWSTR)0x0) goto LAB_1000d4b2;
          _memset(pWVar6,0,(size_t)local_2c);
          bVar2 = true;
        }
        local_2c = (LPWSTR)LCMapStringA((LCID)param_4,param_5,(LPCSTR)local_30,(int)param_7,
                                        (LPSTR)pWVar6,(int)local_2c);
        lVar11 = ZEXT48(extraout_EDX_15) << 0x20;
        param_1 = extraout_ECX_09;
        if (local_2c != (LPWSTR)0x0) {
          lVar11 = FUN_1000e20e(extraout_ECX_09,extraout_EDX_15,UVar9,param_10,(LPCSTR)pWVar6,
                                (int *)&local_2c,(LPSTR)param_8,param_9);
          param_1 = extraout_ECX_10;
        }
      }
LAB_1000d4b2:
      local_3c = (LPWSTR)lVar11;
      if (bVar2) {
        param_1 = pWVar6;
        _free(pWVar6);
        lVar11 = CONCAT44(extraout_EDX_16,local_3c);
      }
      else if (pWVar6 != (LPWSTR)0x0) {
        param_1 = pWVar6;
        FUN_1000d040((int)pWVar6);
        lVar11 = CONCAT44(extraout_EDX_17,local_3c);
      }
    }
    param_2 = (LPCSTR)((ulonglong)lVar11 >> 0x20);
    local_3c = (LPWSTR)lVar11;
    if (local_30 != (LPWSTR)0x0) {
      param_1 = local_30;
      _free(local_30);
      param_2 = extraout_EDX_19;
    }
    if ((local_3c != (LPWSTR)0x0) && (param_8 != local_3c)) {
      param_1 = local_3c;
      _free(local_3c);
      param_2 = extraout_EDX_20;
    }
    goto LAB_1000d50b;
  }
  if (DAT_10014a0c != 1) goto LAB_1000d50b;
  local_28 = (LPWSTR)0x0;
  bVar2 = false;
  local_2c = (LPWSTR)0x0;
  if (CodePage == 0) {
    CodePage = *(UINT *)(*param_3 + 4);
    param_10 = CodePage;
  }
  cchWideChar = MultiByteToWideChar(CodePage,(uint)(param_11 != 0) * 8 + 1,param_6,(int)param_7,
                                    (LPWSTR)0x0,0);
  param_1 = extraout_ECX_01;
  param_2 = extraout_EDX_01;
  if (cchWideChar == 0) goto LAB_1000d50b;
  local_8 = (undefined *)0x1;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (LPWSTR)0x0;
  }
  else {
    puVar1 = (uint *)(cchWideChar * 2 + 8);
    if (puVar1 < (uint *)0x401) {
      local_1c = (undefined1 *)&local_50;
      piVar8 = &local_50;
      uVar12 = 0xcccc;
    }
    else {
      uVar12 = 0xdddd;
      piVar8 = FUN_10005263(puVar1);
    }
    local_24 = (LPWSTR)FUN_1000d02a(piVar8,uVar12);
  }
  local_8 = (undefined *)0xfffffffe;
  if (local_24 == (LPWSTR)0x0) {
    param_1 = (LPWSTR)(cchWideChar * 2);
    local_24 = (LPWSTR)FUN_10005263((uint *)param_1);
    param_2 = extraout_EDX_02;
    if (local_24 == (LPWSTR)0x0) goto LAB_1000d50b;
    bVar2 = true;
  }
  iVar3 = MultiByteToWideChar(param_10,1,param_6,(int)param_7,local_24,cchWideChar);
  param_1 = extraout_ECX_02;
  param_2 = extraout_EDX_03;
  if ((iVar3 != 0) &&
     (cchDest = LCMapStringW((LCID)param_4,param_5,local_24,cchWideChar,(LPWSTR)0x0,0),
     param_1 = extraout_ECX_03, param_2 = extraout_EDX_04, cchDest != 0)) {
    param_1 = (LPWSTR)0x400;
    if ((param_5 & 0x400) == 0) {
      local_8 = (undefined *)0x2;
      if (((int)cchDest < 1) || (0xffffffe0 / cchDest < 2)) {
        local_28 = (LPWSTR)0x0;
      }
      else {
        puVar1 = (uint *)(cchDest * 2 + 8);
        if (puVar1 < (uint *)0x401) {
          local_1c = (undefined1 *)&local_50;
          piVar8 = &local_50;
          uVar12 = 0xcccc;
        }
        else {
          uVar12 = 0xdddd;
          piVar8 = FUN_10005263(puVar1);
        }
        local_28 = (LPWSTR)FUN_1000d02a(piVar8,uVar12);
      }
      local_8 = (undefined *)0xfffffffe;
      if (local_28 == (LPWSTR)0x0) {
        param_1 = (LPWSTR)(cchDest * 2);
        local_28 = (LPWSTR)FUN_10005263((uint *)param_1);
        param_2 = extraout_EDX_06;
        if (local_28 == (LPWSTR)0x0) goto LAB_1000d310;
        local_2c = (LPWSTR)0x1;
      }
      iVar3 = LCMapStringW((LCID)param_4,param_5,local_24,cchWideChar,local_28,cchDest);
      param_1 = extraout_ECX_05;
      param_2 = extraout_EDX_07;
      if (iVar3 != 0) {
        pWVar6 = param_8;
        iVar3 = param_9;
        if (param_9 == 0) {
          pWVar6 = (LPWSTR)0x0;
          iVar3 = 0;
        }
        WideCharToMultiByte(param_10,0,local_28,cchDest,(LPSTR)pWVar6,iVar3,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
        param_1 = extraout_ECX_06;
        param_2 = extraout_EDX_08;
      }
    }
    else if ((param_9 != 0) && ((int)cchDest <= param_9)) {
      LCMapStringW((LCID)param_4,param_5,local_24,cchWideChar,param_8,param_9);
      param_1 = extraout_ECX_04;
      param_2 = extraout_EDX_05;
    }
  }
LAB_1000d310:
  if (local_2c == (LPWSTR)0x0) {
    if (local_28 != (LPWSTR)0x0) {
      param_1 = local_28;
      FUN_1000d040((int)local_28);
      param_2 = extraout_EDX_10;
    }
  }
  else {
    param_1 = local_28;
    _free(local_28);
    param_2 = extraout_EDX_09;
  }
  if (bVar2) {
    param_1 = local_24;
    _free(local_24);
    param_2 = extraout_EDX_11;
  }
  else if (local_24 != (LPWSTR)0x0) {
    param_1 = local_24;
    FUN_1000d040((int)local_24);
    param_2 = extraout_EDX_12;
  }
LAB_1000d50b:
  FUN_1000e590(param_1,param_2);
  return;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 1000d514 */

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  LPWSTR extraout_ECX;
  LPCSTR extraout_EDX;
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_10005dd7(local_14,(int *)_Plocinfo);
  iVar1 = FUN_1000d060(extraout_ECX,extraout_EDX,local_14,_LocaleName,_DwMapFlag,_LpSrcStr,
                       (LPWSTR)_CchSrc,(LPWSTR)_LpDestStr,_CchDest,_Code_page,_BError);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/**************************************************/

/* Function: __crtGetStringTypeA_stat @ 1000d55a */

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
  uint *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint cchWideChar;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  int *in_ECX;
  LPCSTR in_EDX;
  LPCSTR extraout_EDX;
  LPCSTR extraout_EDX_00;
  LPCSTR extraout_EDX_01;
  LPCSTR extraout_EDX_02;
  LPCSTR extraout_EDX_03;
  LPCSTR extraout_EDX_04;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  undefined8 uVar7;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10014a10 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      in_EDX = extraout_EDX;
      if (DVar3 == 0x78) {
        DAT_10014a10 = 2;
      }
      goto LAB_1000d5b5;
    }
    DAT_10014a10 = 1;
  }
  else {
LAB_1000d5b5:
    if ((DAT_10014a10 == 2) || (DAT_10014a10 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      uVar7 = ___ansicp(param_6);
      in_EDX = (LPCSTR)((ulonglong)uVar7 >> 0x20);
      puVar6 = (ushort *)uVar7;
      if (puVar6 != (ushort *)0xffffffff) {
        if (puVar6 != param_5) {
          uVar7 = FUN_1000e20e(&param_3,in_EDX,(UINT)param_5,(UINT)puVar6,(LPCSTR)param_2,
                               (int *)&param_3,(LPSTR)0x0,0);
          in_EDX = (LPCSTR)((ulonglong)uVar7 >> 0x20);
          _Memory = (void *)uVar7;
          param_2 = (ulong)_Memory;
          if (_Memory == (void *)0x0) goto LAB_1000d702;
        }
        GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4);
        in_EDX = extraout_EDX_03;
        if (_Memory != (void *)0x0) {
          _free(_Memory);
          in_EDX = extraout_EDX_04;
        }
      }
      goto LAB_1000d702;
    }
    if (DAT_10014a10 != 1) goto LAB_1000d702;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  in_EDX = extraout_EDX_00;
  if (cchWideChar == 0) goto LAB_1000d702;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    puVar1 = (uint *)(cchWideChar * 2 + 8);
    if (puVar1 < (uint *)0x401) {
      piVar4 = (int *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1000d645:
        lpWideCharStr = (LPCWSTR)(piVar4 + 2);
      }
    }
    else {
      piVar4 = FUN_10005263(puVar1);
      lpWideCharStr = (LPCWSTR)0x0;
      in_EDX = extraout_EDX_01;
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0xdddd;
        goto LAB_1000d645;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar5 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar5 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar5,(LPWORD)param_4);
    }
    FUN_1000d040((int)lpWideCharStr);
    in_EDX = extraout_EDX_02;
  }
LAB_1000d702:
  iVar5 = FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,in_EDX);
  return iVar5;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 1000d714 */

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
  
  FUN_10005dd7(&stack0xffffffec,(int *)_Plocinfo);
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

/* Function: ___free_lc_time @ 1000d756 */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2008 Release */

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

/* Function: ___free_lconv_num @ 1000d8eb */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10013eb0) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10013eb4) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10013eb8) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 1000d930 */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10013ebc) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10013ec0) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10013ec4) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10013ec8) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10013ecc) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10013ed0) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10013ed4) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: _strcspn @ 1000d9c0 */

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

/* Function: _strpbrk @ 1000da10 */

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

/* Function: FUN_1000da50 @ 1000da50 */

undefined2 __cdecl FUN_1000da50(undefined2 param_1,FILE *param_2)

{
  char *_Buf;
  char *pcVar1;
  byte bVar2;
  uint _FileHandle;
  int *piVar3;
  undefined3 extraout_var;
  undefined *puVar4;
  int unaff_EDI;
  uint uVar5;
  longlong lVar6;
  uint local_8;
  
  _FileHandle = __fileno(param_2);
  uVar5 = param_2->_flag;
  if ((uVar5 & 0x82) == 0) {
    piVar3 = FUN_10006bfe();
    *piVar3 = 9;
LAB_1000da76:
    param_2->_flag = param_2->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar5 & 0x40) != 0) {
    piVar3 = FUN_10006bfe();
    *piVar3 = 0x22;
    goto LAB_1000da76;
  }
  if ((uVar5 & 1) != 0) {
    param_2->_cnt = 0;
    if ((uVar5 & 0x10) == 0) {
      param_2->_flag = uVar5 | 0x20;
      return 0xffff;
    }
    param_2->_ptr = param_2->_base;
    param_2->_flag = uVar5 & 0xfffffffe;
  }
  uVar5 = param_2->_flag;
  param_2->_flag = uVar5 & 0xffffffef | 2;
  param_2->_cnt = 0;
  local_8 = 0;
  if (((uVar5 & 0x10c) == 0) &&
     (((param_2 != (FILE *)&DAT_10013530 && (param_2 != (FILE *)&DAT_10013550)) ||
      (bVar2 = FUN_1000ae27(_FileHandle), CONCAT31(extraout_var,bVar2) == 0)))) {
    FUN_1000add8(&param_2->_ptr);
  }
  if ((param_2->_flag & 0x108) == 0) {
    uVar5 = 2;
    local_8 = CONCAT22(local_8._2_2_,param_1);
    local_8 = FID_conflict___lseek(_FileHandle,&local_8,2);
  }
  else {
    _Buf = param_2->_base;
    pcVar1 = param_2->_ptr;
    param_2->_ptr = _Buf + 2;
    uVar5 = (int)pcVar1 - (int)_Buf;
    param_2->_cnt = param_2->_bufsiz + -2;
    if ((int)uVar5 < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar4 = &DAT_100134e8;
      }
      else {
        puVar4 = (undefined *)((_FileHandle & 0x1f) * 0x24 + (&DAT_10015b00)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar4[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_1000dba0;
    }
    else {
      local_8 = FID_conflict___lseek(_FileHandle,_Buf,uVar5);
    }
    *(undefined2 *)param_2->_base = param_1;
  }
  if (local_8 == uVar5) {
    return param_1;
  }
LAB_1000dba0:
  param_2->_flag = param_2->_flag | 0x20;
  return 0xffff;
}



/**************************************************/

/* Function: __wctomb_s_l @ 1000dbb7 */

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_1000dbdb:
    iVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      piVar2 = FUN_10006bfe();
      *piVar2 = 0x16;
      FUN_10006bb1();
      return 0x16;
    }
    FUN_10005dd7(local_14,(int *)_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_1000dc6b;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_1000dca2:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_1000dbdb;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_1000dc6b:
          piVar2 = FUN_10006bfe();
          *piVar2 = 0x22;
          FUN_10006bb1();
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar1;
        }
        goto LAB_1000dca2;
      }
    }
    piVar2 = FUN_10006bfe();
    *piVar2 = 0x2a;
    piVar2 = FUN_10006bfe();
    iVar1 = *piVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_1000dd18 @ 1000dd18 */

void __cdecl FUN_1000dd18(int *param_1,char *param_2,size_t param_3,wchar_t param_4)

{
  __wctomb_s_l(param_1,param_2,param_3,param_4,(_locale_t)0x0);
  return;
}



/**************************************************/

/* Function: FUN_1000dd3e @ 1000dd3e */

uint __cdecl
FUN_1000dd3e(int *param_1,byte *param_2,undefined4 *param_3,uint param_4,uint param_5,int param_6)

{
  ushort uVar1;
  byte *pbVar2;
  int *piVar3;
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
  
  FUN_10005dd7(&local_18,param_1);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (byte *)0x0) || ((param_4 != 0 && (((int)param_4 < 2 || (0x24 < (int)param_4))))))
  {
    piVar3 = FUN_10006bfe();
    *piVar3 = 0x16;
    FUN_10006bb1();
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = param_2;
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
LAB_1000ddf7:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_1000ddf7;
  if ((((int)param_4 < 0) || (param_4 == 1)) || (0x24 < (int)param_4)) {
    if (param_3 != (undefined4 *)0x0) {
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
      goto LAB_1000de5d;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_1000de5d;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_1000de5d;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_1000de5d:
  uVar4 = (uint)(0xffffffff / (ulonglong)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_1000debd:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8) == 0) {
          if (param_3 != (undefined4 *)0x0) {
            pbVar9 = param_2;
          }
          local_8 = 0;
        }
        else if ((((param_5 & 4) != 0) ||
                 (((param_5 & 1) == 0 &&
                  ((((param_5 & 2) != 0 && (0x80000000 < local_8)) ||
                   (((param_5 & 2) == 0 && (0x7fffffff < local_8)))))))) && (param_6 == 0)) {
          piVar3 = FUN_10006bfe();
          *piVar3 = 0x22;
          if ((param_5 & 1) == 0) {
            local_8 = ((param_5 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = pbVar9;
        }
        if ((param_5 & 2) != 0) {
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
    if (param_4 <= uVar6) goto LAB_1000debd;
    if (((param_6 == 0) && (uVar4 <= local_8)) &&
       ((local_8 != uVar4 || ((uint)(0xffffffff % (ulonglong)param_4) < uVar6)))) {
      param_5 = param_5 | 0xc;
      if (param_3 == (undefined4 *)0x0) goto LAB_1000debd;
    }
    else {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: FUN_1000df77 @ 1000df77 */

void __cdecl FUN_1000df77(byte *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined **ppuVar1;
  
  if (DAT_100149b0 == 0) {
    ppuVar1 = &PTR_DAT_10013da0;
  }
  else {
    ppuVar1 = (undefined **)0x0;
  }
  FUN_1000dd3e((int *)ppuVar1,param_1,param_2,param_3,0,param_4);
  return;
}



/**************************************************/

/* Function: ___initconout @ 1000dfa5 */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10013ef4 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/**************************************************/

/* Function: __fclose_nolock @ 1000dff1 */

/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0x16;
    FUN_10006bb1();
    iVar4 = -1;
  }
  else {
    if ((_File->_flag & 0x83) != 0) {
      iVar4 = FUN_1000ce99(_File);
      __freebuf(_File);
      uVar2 = __fileno(_File);
      iVar3 = FUN_1000e76f(uVar2);
      if (iVar3 < 0) {
        iVar4 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        _free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    _File->_flag = 0;
  }
  return iVar4;
}



/**************************************************/

/* Function: FUN_1000e068 @ 1000e068 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_1000e068(FILE *param_1)

{
  int *piVar1;
  int local_20;
  
  local_20 = -1;
  if (param_1 == (FILE *)0x0) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 0x16;
    FUN_10006bb1();
    local_20 = -1;
  }
  else if ((param_1->_flag & 0x40) == 0) {
    FUN_1000af5c((uint)param_1);
    local_20 = __fclose_nolock(param_1);
    FUN_1000e0dc();
  }
  else {
    param_1->_flag = 0;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000e0dc @ 1000e0dc */

void FUN_1000e0dc(void)

{
  uint unaff_ESI;
  
  FUN_1000afb9(unaff_ESI);
  return;
}



/**************************************************/

/* Function: __commit @ 1000e0e4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2005 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  HANDLE hFile;
  BOOL BVar2;
  ulong *puVar3;
  int iVar4;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10015ae4)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x24;
      if ((*(byte *)(iVar4 + 4 + (&DAT_10015b00)[_FileHandle >> 5]) & 1) != 0) {
        FUN_1000cc6e(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_10015b00)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)FUN_1000cbdc(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_1000e1a6;
          puVar3 = FUN_10006c11();
          *puVar3 = local_20;
        }
        piVar1 = FUN_10006bfe();
        *piVar1 = 9;
        local_20 = 0xffffffff;
LAB_1000e1a6:
        FUN_1000e1bb();
        return local_20;
      }
    }
    piVar1 = FUN_10006bfe();
    *piVar1 = 9;
    FUN_10006bb1();
  }
  return -1;
}



/**************************************************/

/* Function: FUN_1000e1bb @ 1000e1bb */

void FUN_1000e1bb(void)

{
  int unaff_EBP;
  
  FUN_1000cd0f(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: ___ansicp @ 1000e1c5 */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  byte local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,(LPSTR)local_10,6);
  uVar2 = extraout_EDX;
  if (iVar1 != 0) {
    FUN_1000cb34(local_10);
    uVar2 = extraout_EDX_00;
  }
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/**************************************************/

/* Function: FUN_1000e20e @ 1000e20e */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall
FUN_1000e20e(undefined4 param_1,LPCSTR param_2,UINT param_3,UINT param_4,LPCSTR param_5,int *param_6
            ,LPSTR param_7,int param_8)

{
  uint *puVar1;
  char cVar2;
  char *cbMultiByte;
  bool bVar3;
  BOOL BVar4;
  LPCSTR pCVar5;
  int *piVar6;
  int iVar7;
  char *_Size;
  LPSTR lpMultiByteStr;
  LPCSTR extraout_EDX;
  LPCSTR extraout_EDX_00;
  LPCSTR extraout_EDX_01;
  LPCSTR extraout_EDX_02;
  bool bVar8;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  cbMultiByte = (char *)*param_6;
  bVar3 = false;
  if (param_3 == param_4) goto LAB_1000e3b6;
  BVar4 = GetCPInfo(param_3,&local_1c);
  if ((((BVar4 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar4 = GetCPInfo(param_4,&local_1c), BVar4 == 0)) || (local_1c.MaxCharSize != 1)) {
    _Size = (char *)MultiByteToWideChar(param_3,1,param_5,(int)cbMultiByte,(LPWSTR)0x0,0);
    bVar8 = false;
    param_2 = extraout_EDX_00;
    if (_Size == (char *)0x0) goto LAB_1000e3b6;
  }
  else {
    bVar3 = true;
    param_2 = extraout_EDX;
    _Size = cbMultiByte;
    if (cbMultiByte == (char *)0xffffffff) {
      param_2 = param_5 + 1;
      pCVar5 = param_5;
      do {
        cVar2 = *pCVar5;
        pCVar5 = pCVar5 + 1;
      } while (cVar2 != '\0');
      _Size = pCVar5 + (1 - (int)param_2);
    }
    bVar8 = _Size == (char *)0x0;
  }
  if ((bVar8 || (int)_Size < 0) || ((char *)0x7ffffff0 < _Size)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    puVar1 = (uint *)((int)_Size * 2 + 8);
    if (puVar1 < (uint *)0x401) {
      piVar6 = (int *)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_1000e2f6:
        local_20 = (LPCWSTR)(piVar6 + 2);
      }
    }
    else {
      piVar6 = FUN_10005263(puVar1);
      local_20 = (LPCWSTR)0x0;
      param_2 = extraout_EDX_01;
      if (piVar6 != (int *)0x0) {
        *piVar6 = 0xdddd;
        goto LAB_1000e2f6;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,(int)_Size * 2);
    iVar7 = MultiByteToWideChar(param_3,1,param_5,(int)cbMultiByte,local_20,(int)_Size);
    if (iVar7 != 0) {
      if (param_7 == (LPSTR)0x0) {
        if (((bVar3) ||
            (_Size = (char *)WideCharToMultiByte(param_4,0,local_20,(int)_Size,(LPSTR)0x0,0,
                                                 (LPCSTR)0x0,(LPBOOL)0x0), _Size != (char *)0x0)) &&
           (lpMultiByteStr = _calloc(1,(size_t)_Size), lpMultiByteStr != (LPSTR)0x0)) {
          iVar7 = WideCharToMultiByte(param_4,0,local_20,(int)_Size,lpMultiByteStr,(int)_Size,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != (char *)0xffffffff) {
            *param_6 = iVar7;
          }
        }
      }
      else {
        WideCharToMultiByte(param_4,0,local_20,(int)_Size,param_7,param_8,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    FUN_1000d040((int)local_20);
    param_2 = extraout_EDX_02;
  }
LAB_1000e3b6:
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/**************************************************/

/* Function: FUN_1000e3c8 @ 1000e3c8 */

undefined4 __cdecl FUN_1000e3c8(uint param_1,int param_2,uint *param_3)

{
  if (param_1 <= param_2 + param_1) {
    *param_3 = param_2 + param_1;
    return 0;
  }
  *param_3 = 0xffffffff;
  return 0x80070216;
}



/**************************************************/

/* Function: FUN_1000e3ef @ 1000e3ef */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1000e3ef(void)

{
  int iVar1;
  SIZE_T SVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  LPVOID pvVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar5;
  LPVOID lpAddress;
  bool bVar6;
  _SYSTEM_INFO local_60;
  _MEMORY_BASIC_INFORMATION local_3c;
  DWORD local_20;
  PVOID local_1c;
  undefined1 *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_100130b0 ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  iVar1 = FUN_10009239(&local_10);
  if (iVar1 != 0) {
    FUN_10006b0b();
  }
  local_18 = &stack0xffffff90;
  SVar2 = VirtualQuery(&stack0xffffff90,&local_3c,0x1c);
  uVar5 = extraout_EDX;
  if (SVar2 != 0) {
    local_1c = local_3c.AllocationBase;
    GetSystemInfo(&local_60);
    bVar6 = local_10 != 1;
    local_c = 0;
    if (local_10 == 2) {
      local_14 = 0;
      hModule = GetModuleHandleW(L"kernel32.dll");
      if ((hModule != (HMODULE)0x0) &&
         (pFVar3 = GetProcAddress(hModule,"SetThreadStackGuarantee"), pFVar3 != (FARPROC)0x0)) {
        local_14 = 0;
        iVar1 = (*pFVar3)(&local_14);
        if ((iVar1 == 1) && (local_14 != 0)) {
          local_c = local_14;
        }
      }
    }
    iVar1 = FUN_1000e3c8(local_c,local_60.dwPageSize - 1,&local_c);
    uVar5 = extraout_EDX_00;
    if ((-1 < iVar1) &&
       ((local_c = local_c & ~(local_60.dwPageSize - 1), local_c == 0 ||
        (iVar1 = FUN_1000e3c8(local_c,local_60.dwPageSize,&local_c), uVar5 = extraout_EDX_01,
        -1 < iVar1)))) {
      if (local_c < local_60.dwPageSize * 2) {
        local_c = local_60.dwPageSize * 2;
      }
      lpAddress = (LPVOID)((~(local_60.dwPageSize - 1) & (uint)local_18) - local_c);
      if (local_10 == 1) {
        local_60.dwPageSize = 0x11;
      }
      if (((LPVOID)(local_60.dwPageSize + (int)local_1c) <= lpAddress) &&
         (pvVar4 = VirtualAlloc(lpAddress,local_c,0x1000,4), uVar5 = extraout_EDX_02,
         pvVar4 != (LPVOID)0x0)) {
        VirtualProtect(lpAddress,local_c,(-(uint)bVar6 & 0x103) + 1,&local_20);
        uVar5 = extraout_EDX_03;
      }
    }
  }
  FUN_10004d96(local_8 ^ (uint)&stack0xfffffffc,uVar5);
  return;
}



/**************************************************/

/* Function: __SEH_prolog4_GS @ 1000e548 */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4_GS
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4_GS(undefined4 param_1,int param_2)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_100130b0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: FUN_1000e590 @ 1000e590 */

/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __fastcall FUN_1000e590(undefined4 param_1,undefined4 param_2)

{
  uint unaff_EBP;
  
  FUN_10004d96(*(uint *)(unaff_EBP - 0x1c) ^ unaff_EBP,param_2);
  return;
}



/**************************************************/

/* Function: __alloca_probe_16 @ 1000e5a0 */

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

/* Function: __alloca_probe_8 @ 1000e5b6 */

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

/* Function: ___ascii_stricmp @ 1000e5d0 */

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2019 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_1000e616;
      bVar3 = *_Str2;
      _Str2 = _Str2 + 1;
      bVar2 = *_Str1;
      _Str1 = _Str1 + 1;
    } while (bVar2 == bVar3);
    bVar1 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar2 = bVar2 + 0xbf;
    bVar3 = bVar2 + (-(bVar2 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar1);
  cVar4 = (bVar3 < bVar1) * -2 + '\x01';
LAB_1000e616:
  return (int)cVar4;
}



/**************************************************/

/* Function: __isctype_l @ 1000e61e */

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
  
  FUN_10005dd7(&local_1c,(int *)_Locale);
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

/* Function: FUN_1000e6d6 @ 1000e6d6 */

undefined4 __cdecl FUN_1000e6d6(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000cbdc(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_10015b00 + 0x4c) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_10015b00 + 0x28) & 1) != 0)))) {
      iVar1 = FUN_1000cbdc(2);
      iVar2 = FUN_1000cbdc(1);
      if (iVar2 == iVar1) goto LAB_1000e739;
    }
    hObject = (HANDLE)FUN_1000cbdc(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000e73b;
    }
  }
LAB_1000e739:
  DVar4 = 0;
LAB_1000e73b:
  FUN_1000cb56(param_1);
  *(undefined1 *)((&DAT_10015b00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/**************************************************/

/* Function: FUN_1000e76f @ 1000e76f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_1000e76f(uint param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  undefined4 local_20;
  
  if (param_1 == 0xffffffff) {
    piVar1 = FUN_10006bfe();
    *piVar1 = 9;
    puVar2 = FUN_10006c11();
    *puVar2 = 0;
  }
  else if (param_1 == 0xfffffffe) {
    puVar2 = FUN_10006c11();
    *puVar2 = 0;
    piVar1 = FUN_10006bfe();
    *piVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_10015ae4)) {
      iVar3 = (param_1 & 0x1f) * 0x24;
      if ((*(byte *)((&DAT_10015b00)[(int)param_1 >> 5] + 4 + iVar3) & 1) == 0) {
        puVar2 = FUN_10006c11();
        *puVar2 = 0;
        piVar1 = FUN_10006bfe();
        *piVar1 = 9;
        FUN_10006bb1();
        return 0xffffffff;
      }
      FUN_1000cc6e(param_1);
      if ((*(byte *)((&DAT_10015b00)[(int)param_1 >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_10006bfe();
        *piVar1 = 9;
        local_20 = 0xffffffff;
      }
      else {
        local_20 = FUN_1000e6d6(param_1);
      }
      FUN_1000e871();
      return local_20;
    }
    puVar2 = FUN_10006c11();
    *puVar2 = 0;
    piVar1 = FUN_10006bfe();
    *piVar1 = 9;
    FUN_10006bb1();
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000e871 @ 1000e871 */

void FUN_1000e871(void)

{
  int unaff_EBP;
  
  FUN_1000cd0f(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __freebuf @ 1000e87b */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/**************************************************/

/* Function: __alloca_probe @ 1000e8b0 */

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

/* Function: ___ascii_strnicmp @ 1000e8e0 */

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
      if (bVar2 != (byte)uVar3) goto LAB_1000e931;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1000e931:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: RtlUnwind @ 1000ea1e */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1000ea1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

/* Function: Unwind@1000ea30 @ 1000ea30 */

void Unwind_1000ea30(void)

{
  int unaff_EBP;
  
  CICMFunction::~CICMFunction(*(CICMFunction **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@1000ea60 @ 1000ea60 */

void Unwind_1000ea60(void)

{
  int unaff_EBP;
  
  CICMFunction::~CICMFunction(*(CICMFunction **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

