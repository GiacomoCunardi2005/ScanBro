/* Function: FUN_10001000 @ 10001000 */

undefined4 * __thiscall FUN_10001000(void *this,byte param_1)

{
  *(undefined ***)this = CFilterIF::vftable;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10001020 @ 10001020 */

void __thiscall FUN_10001020(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  FUN_10001710(*(void **)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
  return;
}



/**************************************************/

/* Function: FUN_10001030 @ 10001030 */

void __thiscall FUN_10001030(void *this,undefined4 param_1,uint param_2)

{
  FUN_10001520(*(void **)((int)this + 4),param_1,param_2);
  return;
}



/**************************************************/

/* Function: FUN_10001040 @ 10001040 */

void __fastcall FUN_10001040(int param_1)

{
  FUN_10001600(*(int **)(param_1 + 4));
  return;
}



/**************************************************/

/* Function: Release_CFilterIF @ 10001050 */

undefined4 __cdecl Release_CFilterIF(int *param_1)

{
                    /* 0x1050  2  Release_CFilterIF */
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001070 @ 10001070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001070(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_100160c0 = param_1;
  }
  return 1;
}



/**************************************************/

/* Function: Create_CFilterIF @ 10001090 */

int __cdecl Create_CFilterIF(int *param_1)

{
  undefined4 *puVar1;
  int *_Memory;
  int iVar2;
  
                    /* 0x1090  1  Create_CFilterIF */
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = CFilterIF::vftable;
    puVar1[1] = 0;
  }
  *param_1 = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0x11;
  }
  else {
    puVar1 = operator_new(0x2c);
    if (puVar1 == (undefined4 *)0x0) {
      _Memory = (int *)0x0;
    }
    else {
      _Memory = (int *)FUN_10001630(puVar1);
    }
    if (*param_1 == 0) {
      iVar2 = 0x11;
    }
    else {
      iVar2 = FUN_10001620();
      if (iVar2 == 0) {
        *(int **)(*param_1 + 4) = _Memory;
        return 0;
      }
      if (_Memory != (int *)0x0) {
        FUN_10001640(_Memory);
        _free(_Memory);
      }
    }
  }
  if (*param_1 == 0) {
    *param_1 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10001310 @ 10001310 */

undefined4 FUN_10001310(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    return 0;
  case 2:
    return 1;
  case 0xffffff9c:
  case 0xfffffff4:
  case 0xfffffff5:
  case 0xfffffff6:
  case 0xfffffff7:
  case 0xfffffff8:
  case 0xfffffff9:
  case 0xfffffffa:
  case 0xfffffffb:
  case 0xfffffffc:
  case 0xfffffffd:
  case 0xfffffffe:
  case 0xffffffff:
    return 0x10;
  default:
    return 0xf0;
  }
}



/**************************************************/

/* Function: FUN_100013c0 @ 100013c0 */

undefined4 __fastcall FUN_100013c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_4;
  
  uVar1 = 0;
  if ((int *)*param_1 != (int *)0x0) {
    local_4 = 1;
    iVar2 = FUN_10001890((int *)*param_1,param_1 + 1,&local_4);
    if (iVar2 != 0) {
      param_1[1] = 0;
    }
    uVar1 = FUN_10001310(iVar2);
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_10001400 @ 10001400 */

undefined4 __fastcall FUN_10001400(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((int *)*param_1 != (int *)0x0) {
    iVar2 = FUN_100018d0((int *)*param_1);
    if (iVar2 != 0) {
      param_1[1] = 0;
    }
    uVar1 = FUN_10001310(iVar2);
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_10001440 @ 10001440 */

undefined4 __thiscall FUN_10001440(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int **)this != (int *)0x0) {
    *(undefined4 *)((int)this + 0x20) = param_1;
    iVar2 = *(int *)((int)this + 8);
    *(int *)((int)this + 8) = iVar2 + 1;
    iVar2 = FUN_10001970(*(int **)this,*(undefined4 *)((int)this + 4),iVar2,param_2,
                         *(uint *)((int)this + 0x10));
    if (iVar2 != 0) {
      *(undefined4 *)((int)this + 4) = 0;
    }
    uVar1 = FUN_10001310(iVar2);
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_10001490 @ 10001490 */

void __fastcall FUN_10001490(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001a50((int *)*param_1);
  if ((iVar1 != 0) && (iVar1 != 1)) {
    param_1[1] = 0;
  }
  FUN_10001310(iVar1);
  return;
}



/**************************************************/

/* Function: FUN_100014c0 @ 100014c0 */

undefined4 __fastcall FUN_100014c0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    uVar1 = FUN_10001830((int *)*param_1);
    param_1[1] = 0;
    uVar1 = FUN_10001310(uVar1);
  }
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  DAT_100160c4 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return uVar1;
}



/**************************************************/

/* Function: FUN_10001520 @ 10001520 */

void __thiscall FUN_10001520(void *this,undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (*(char *)((int)this + 0x24) == '\0') {
    return;
  }
  iVar2 = *(int *)((int)this + 0x18);
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar2 == iVar1) {
    iVar2 = FUN_10001440(this,param_1,param_2);
    if (iVar2 == 0) {
      FUN_10001490(this);
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
      return;
    }
    goto LAB_100015ed;
  }
  if (iVar2 * 2 == iVar1) {
    uVar3 = *(uint *)((int)this + 0x28) & 0x80000001;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar4) goto LAB_100015ed;
  }
  else if (iVar2 == iVar1 * 2) {
    iVar2 = FUN_10001440(this,param_1,param_2);
    if ((iVar2 != 0) || (iVar2 = FUN_10001490(this), iVar2 != 0)) goto LAB_100015ed;
  }
  else {
    if (iVar2 * 4 != iVar1 * 3) goto LAB_100015ed;
    uVar3 = *(uint *)((int)this + 0x28) & 0x80000003;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar4) goto LAB_100015ed;
  }
  iVar2 = FUN_10001440(this,param_1,param_2);
  if (iVar2 == 0) {
    FUN_10001490(this);
  }
LAB_100015ed:
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
  return;
}



/**************************************************/

/* Function: FUN_10001600 @ 10001600 */

void __fastcall FUN_10001600(int *param_1)

{
  if ((char)param_1[9] != '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
    FUN_100014c0(param_1);
    param_1[10] = 0;
    return;
  }
  param_1[10] = 0;
  return;
}



/**************************************************/

/* Function: FUN_10001620 @ 10001620 */

undefined4 FUN_10001620(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10001630 @ 10001630 */

void __fastcall FUN_10001630(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return;
}



/**************************************************/

/* Function: FUN_10001640 @ 10001640 */

void __fastcall FUN_10001640(int *param_1)

{
  if ((char)param_1[9] != '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
    FUN_100014c0(param_1);
  }
  param_1[10] = 0;
  return;
}



/**************************************************/

/* Function: FUN_10001660 @ 10001660 */

undefined4 __thiscall
FUN_10001660(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100117eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100014c0(this);
  puVar1 = operator_new(0x44);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_10001b30(puVar1);
  }
  *(undefined4 **)this = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 0x11;
  }
  DAT_100160c4 = this;
  *(int *)((int)this + 0xc) = param_1;
  *(int *)((int)this + 0x10) = param_2;
  *(int *)((int)this + 0x18) = param_4;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0x14) = param_3;
  *(int *)((int)this + 0x1c) = param_5;
  ExceptionList = local_c;
  return 0;
}



/**************************************************/

/* Function: FUN_10001710 @ 10001710 */

int __thiscall FUN_10001710(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)((int)this + 0x24) != '\0') {
    *(undefined1 *)((int)this + 0x24) = 0;
    FUN_100014c0(this);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  if (param_4 != param_5) {
    if (param_4 * 2 == param_5) {
      param_2 = (param_2 + 1) / 2;
    }
    else if (param_4 == param_5 * 2) {
      param_2 = param_2 * 2;
    }
    else if (param_4 * 4 + param_5 * -3 == 0) {
      uVar2 = FUN_10002a20(param_4,param_4 * 4);
      param_2 = (int)uVar2;
    }
  }
  iVar1 = FUN_10001660(this,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*(int **)this != (int *)0x0) {
      iVar1 = FUN_10001860(*(int **)this);
      if (iVar1 != 0) {
        *(undefined4 *)((int)this + 4) = 0;
      }
      iVar1 = FUN_10001310(iVar1);
    }
    if (((iVar1 == 0) && (iVar1 = FUN_100013c0(this), iVar1 == 0)) &&
       (iVar1 = FUN_10001400(this), iVar1 == 0)) {
      *(undefined1 *)((int)this + 0x24) = 1;
      return 0;
    }
  }
  if (*(char *)((int)this + 0x24) != '\0') {
    *(undefined1 *)((int)this + 0x24) = 0;
    FUN_100014c0(this);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  return iVar1;
}



/**************************************************/

/* Function: FUN_10001830 @ 10001830 */

void __cdecl FUN_10001830(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10002380((int)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_100023e0((int)param_1);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x1000185b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x14))();
      return;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_10001860 @ 10001860 */

void __cdecl FUN_10001860(int *param_1)

{
  DAT_100160c8 = GetModuleHandleA("SGCFLTR.DLL");
  (**(code **)(*param_1 + 0x1c))(DAT_100160c8,0x66,2,0);
  return;
}



/**************************************************/

/* Function: FUN_10001890 @ 10001890 */

int __cdecl FUN_10001890(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(0,1,param_3,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x14))();
    return iVar1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100018d0 @ 100018d0 */

int __cdecl FUN_100018d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10002360((int)param_1);
  if (iVar1 != 0) {
    FUN_100023e0((int)param_1);
    (**(code **)(*param_1 + 0x14))();
    FreeLibrary(DAT_100160c8);
    return iVar1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001970 @ 10001970 */

int __cdecl FUN_10001970(int *param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 *_Memory;
  uint uVar1;
  int iVar2;
  
  _Memory = operator_new(0x94);
  if (_Memory == (undefined4 *)0x0) {
    FUN_10002380((int)param_1);
    FUN_100023e0((int)param_1);
    (**(code **)(*param_1 + 0x14))();
    FreeLibrary(DAT_100160c8);
    return -1;
  }
  uVar1 = ((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) - param_3 * param_4;
  *_Memory = 0x84;
  _Memory[0x22] = param_3 * param_4;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  _Memory[0x23] = uVar1;
  iVar2 = FUN_10001ff0((int)param_1);
  _free(_Memory);
  if (iVar2 != 0) {
    FUN_10002380((int)param_1);
    FUN_100023e0((int)param_1);
    (**(code **)(*param_1 + 0x14))();
    FreeLibrary(DAT_100160c8);
    return iVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001a50 @ 10001a50 */

int __cdecl FUN_10001a50(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 local_18;
  
  iVar1 = FUN_100023a0((int)param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_10002380((int)param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_100023e0((int)param_1);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x14))();
      }
    }
    return iVar1;
  }
  uVar3 = 0;
  if (local_20 != 0) {
    do {
      iVar1 = FUN_100023c0((int)param_1);
      if (iVar1 != 0) {
        iVar2 = FUN_10002380((int)param_1);
        if (iVar2 == 0) {
          iVar2 = FUN_100023e0((int)param_1);
          if (iVar2 == 0) {
            (**(code **)(*param_1 + 0x14))();
          }
        }
        return iVar1;
      }
      if (local_18 == 1) {
        iVar1 = FUN_10002380((int)param_1);
        if (iVar1 == 0) {
          iVar1 = FUN_100023e0((int)param_1);
          if (iVar1 == 0) {
            (**(code **)(*param_1 + 0x14))();
          }
        }
        return 2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_20);
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10001b30 @ 10001b30 */

undefined4 * __fastcall FUN_10001b30(undefined4 *param_1)

{
  FUN_10002040(param_1);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = CDMRCSecureLibrary::vftable;
  return param_1;
}



/**************************************************/

/* Function: FUN_10001b50 @ 10001b50 */

void __thiscall FUN_10001b50(void *this,HMODULE param_1)

{
  if (*(int *)((int)this + 0x40) != 0) {
    FreeLibrary(param_1);
    return;
  }
  FUN_1000dd60(param_1);
  return;
}



/**************************************************/

/* Function: FUN_10001b60 @ 10001b60 */

void __thiscall FUN_10001b60(void *this,HMODULE param_1,LPCSTR param_2)

{
  if (*(int *)((int)this + 0x40) != 0) {
    GetProcAddress(param_1,param_2);
    return;
  }
  FUN_1000dc80((uint)param_1,param_2);
  return;
}



/**************************************************/

/* Function: FUN_10001b70 @ 10001b70 */

int __thiscall FUN_10001b70(void *this,LPCSTR param_1)

{
  code *pcVar1;
  HMODULE pHVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  pHVar2 = LoadLibraryA(param_1);
  *(HMODULE *)((int)this + 4) = pHVar2;
  if (pHVar2 != (HMODULE)0x0) {
    pcVar1 = *(code **)(*(int *)this + 8);
    *(undefined4 *)((int)this + 0x40) = 1;
    uVar3 = (*pcVar1)(pHVar2,200);
    pcVar1 = *(code **)(*(int *)this + 8);
    *(undefined4 *)((int)this + 8) = uVar3;
    uVar3 = (*pcVar1)(*(undefined4 *)((int)this + 4),0xc9);
    *(undefined4 *)((int)this + 0xc) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xca);
    *(undefined4 *)((int)this + 0x10) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcb);
    *(undefined4 *)((int)this + 0x14) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcc);
    *(undefined4 *)((int)this + 0x18) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcd);
    *(undefined4 *)((int)this + 0x1c) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xce);
    *(undefined4 *)((int)this + 0x20) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcf);
    *(undefined4 *)((int)this + 0x24) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd0);
    *(undefined4 *)((int)this + 0x28) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd1);
    *(undefined4 *)((int)this + 0x3c) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd2);
    *(undefined4 *)((int)this + 0x2c) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd3);
    *(undefined4 *)((int)this + 0x30) = uVar3;
    uVar5 = 0xd4;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd4);
    *(undefined4 *)((int)this + 0x34) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd5);
    *(undefined4 *)((int)this + 0x38) = uVar3;
    if (((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 0xc) != 0)) &&
       (*(int *)((int)this + 0x10) != 0)) {
      iVar4 = (**(code **)(*(int *)this + 0xc))();
      if (iVar4 != 0) {
        (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
        return iVar4;
      }
      iVar4 = (**(code **)((int)this + 8))(uVar5);
      if (iVar4 != 0) {
        (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
        return iVar4;
      }
      return 0;
    }
    (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10001d40 @ 10001d40 */

int __thiscall FUN_10001d40(void *this,HMODULE param_1,LPCSTR param_2,LPCSTR param_3)

{
  bool bVar1;
  ushort *puVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = FUN_1000d9a0(param_1,param_2,param_3);
  *(ushort **)((int)this + 4) = puVar2;
  if (puVar2 == (ushort *)0x0) {
    return -10;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  bVar1 = FUN_1000d270(puVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    return -0xc;
  }
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),200);
  *(undefined4 *)((int)this + 8) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xc9);
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xca);
  *(undefined4 *)((int)this + 0x10) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcb);
  *(undefined4 *)((int)this + 0x14) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcc);
  *(undefined4 *)((int)this + 0x18) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcd);
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xce);
  *(undefined4 *)((int)this + 0x20) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcf);
  *(undefined4 *)((int)this + 0x24) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd0);
  *(undefined4 *)((int)this + 0x28) = uVar3;
  uVar4 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd1);
  uVar3 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 0x3c) = uVar4;
  uVar4 = (**(code **)(*(int *)this + 8))(uVar3,0xd2);
  *(undefined4 *)((int)this + 0x2c) = uVar4;
  uVar4 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd3);
  *(undefined4 *)((int)this + 0x30) = uVar4;
  uVar4 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd4);
  *(undefined4 *)((int)this + 0x34) = uVar4;
  uVar4 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd5);
  *(undefined4 *)((int)this + 0x38) = uVar4;
  if (((*(int *)((int)this + 8) == 0) || (*(int *)((int)this + 0xc) == 0)) ||
     (*(int *)((int)this + 0x10) == 0)) {
    (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    return -0xb;
  }
  iVar5 = (**(code **)(*(int *)this + 0xc))();
  if (iVar5 != 0) {
    (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    return iVar5;
  }
  iVar5 = (**(code **)((int)this + 8))(uVar3);
  if (iVar5 != 0) {
    (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    return iVar5;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001f40 @ 10001f40 */

undefined4 __fastcall FUN_10001f40(int *param_1)

{
  undefined4 uVar1;
  
  if (((code *)param_1[3] != (code *)0x0) && (param_1[1] != 0)) {
    uVar1 = (*(code *)param_1[3])();
    (**(code **)(*param_1 + 4))(param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    return uVar1;
  }
  return 0xfffffffc;
}



/**************************************************/

/* Function: FUN_10001fb0 @ 10001fb0 */

undefined4 __fastcall FUN_10001fb0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    bVar1 = FUN_1000d270(*(ushort **)(param_1 + 4));
    if (CONCAT31(extraout_var,bVar1) == 0) {
      return 0xfffffff4;
    }
  }
  uVar2 = FUN_10002340(param_1);
  return uVar2;
}



/**************************************************/

/* Function: FUN_10001ff0 @ 10001ff0 */

undefined4 __fastcall FUN_10001ff0(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x3c) == (code *)0x0) {
    return 0xfffffffc;
  }
                    /* WARNING: Could not recover jumptable at 0x10001fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x3c))();
  return uVar1;
}



/**************************************************/

/* Function: FUN_10002010 @ 10002010 */

undefined4 * __thiscall FUN_10002010(void *this,byte param_1)

{
  *(undefined ***)this = CDMRCSecureLibrary::vftable;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  FUN_10002400(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10002040 @ 10002040 */

void __fastcall FUN_10002040(undefined4 *param_1)

{
  *param_1 = CDMRCLibrary::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



/**************************************************/

/* Function: LoadLibraryA @ 10002080 */

HMODULE LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}



/**************************************************/

/* Function: FreeLibrary @ 10002090 */

BOOL FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}



/**************************************************/

/* Function: GetProcAddress @ 100020a0 */

FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100020a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



/**************************************************/

/* Function: FUN_100020b0 @ 100020b0 */

int __thiscall FUN_100020b0(void *this,LPCSTR param_1)

{
  code *pcVar1;
  HMODULE pHVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  pHVar2 = LoadLibraryA(param_1);
  *(HMODULE *)((int)this + 4) = pHVar2;
  if (pHVar2 != (HMODULE)0x0) {
    uVar3 = (**(code **)(*(int *)this + 8))(pHVar2,200);
    pcVar1 = *(code **)(*(int *)this + 8);
    *(undefined4 *)((int)this + 8) = uVar3;
    uVar3 = (*pcVar1)(*(undefined4 *)((int)this + 4),0xc9);
    *(undefined4 *)((int)this + 0xc) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xca);
    *(undefined4 *)((int)this + 0x10) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcb);
    *(undefined4 *)((int)this + 0x14) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcc);
    *(undefined4 *)((int)this + 0x18) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcd);
    *(undefined4 *)((int)this + 0x1c) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xce);
    *(undefined4 *)((int)this + 0x20) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xcf);
    *(undefined4 *)((int)this + 0x24) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd0);
    *(undefined4 *)((int)this + 0x28) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd2);
    *(undefined4 *)((int)this + 0x2c) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd3);
    *(undefined4 *)((int)this + 0x30) = uVar3;
    uVar5 = 0xd4;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd4);
    *(undefined4 *)((int)this + 0x34) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 4),0xd5);
    *(undefined4 *)((int)this + 0x38) = uVar3;
    if (((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 0xc) != 0)) &&
       (*(int *)((int)this + 0x10) != 0)) {
      iVar4 = (**(code **)(*(int *)this + 0xc))();
      if (iVar4 != 0) {
        (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
        return iVar4;
      }
      iVar4 = (**(code **)((int)this + 8))(uVar5);
      if (iVar4 != 0) {
        (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
        return iVar4;
      }
      return 0;
    }
    (**(code **)(*(int *)this + 4))(*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10002270 @ 10002270 */

int __fastcall FUN_10002270(int param_1)

{
  int iVar1;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = (**(code **)(param_1 + 0x10))(&local_10);
  if (iVar1 == 0) {
    if ((local_c / 100000000 == 2) && (6 < (local_c + 0xf4143e00) / 100000)) {
      return 0;
    }
    iVar1 = -0xb;
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_100022e0 @ 100022e0 */

undefined4 __fastcall FUN_100022e0(int *param_1)

{
  undefined4 uVar1;
  
  if (((code *)param_1[3] != (code *)0x0) && (param_1[1] != 0)) {
    uVar1 = (*(code *)param_1[3])();
    (**(code **)(*param_1 + 4))(param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    return uVar1;
  }
  return 0xfffffffc;
}



/**************************************************/

/* Function: FUN_10002340 @ 10002340 */

undefined4 __fastcall FUN_10002340(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    return 0xfffffffc;
  }
                    /* WARNING: Could not recover jumptable at 0x1000234f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x20))();
  return uVar1;
}



/**************************************************/

/* Function: FUN_10002360 @ 10002360 */

undefined4 __fastcall FUN_10002360(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x24) == (code *)0x0) {
    return 0xfffffffc;
  }
                    /* WARNING: Could not recover jumptable at 0x1000236f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x24))();
  return uVar1;
}



/**************************************************/

/* Function: FUN_10002380 @ 10002380 */

undefined4 __fastcall FUN_10002380(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
    return 0xfffffffc;
  }
                    /* WARNING: Could not recover jumptable at 0x1000238f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x2c))();
  return uVar1;
}



/**************************************************/

/* Function: FUN_100023a0 @ 100023a0 */

undefined4 __fastcall FUN_100023a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    return 0xfffffffc;
  }
                    /* WARNING: Could not recover jumptable at 0x100023af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x30))();
  return uVar1;
}



/**************************************************/

/* Function: FUN_100023c0 @ 100023c0 */

undefined4 __fastcall FUN_100023c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x34) == (code *)0x0) {
    return 0xfffffffc;
  }
                    /* WARNING: Could not recover jumptable at 0x100023cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x34))();
  return uVar1;
}



/**************************************************/

/* Function: FUN_100023e0 @ 100023e0 */

undefined4 __fastcall FUN_100023e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x38) == (code *)0x0) {
    return 0xfffffffc;
  }
                    /* WARNING: Could not recover jumptable at 0x100023ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x38))();
  return uVar1;
}



/**************************************************/

/* Function: FUN_10002400 @ 10002400 */

void __fastcall FUN_10002400(undefined4 *param_1)

{
  *param_1 = CDMRCLibrary::vftable;
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



/**************************************************/

/* Function: FUN_10002450 @ 10002450 */

undefined4 * __thiscall FUN_10002450(void *this,byte param_1)

{
  *(undefined ***)this = CDMRCLibrary::vftable;
  if (*(HMODULE *)((int)this + 4) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: ~type_info @ 100024ab */

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

/* Function: `scalar_deleting_destructor' @ 100024b9 */

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

/* Function: operator== @ 100024d5 */

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

/* Function: _free @ 100024f0 */

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
    if (DAT_10016bac == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_10006845(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10002f0e();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10016594,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_100067c6();
      DVar4 = GetLastError();
      iVar5 = FUN_1000678b(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/**************************************************/

/* Function: bad_alloc @ 100024f5 */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Library: Visual Studio 2005 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_10015074,1);
  *(undefined ***)this = vftable;
  return this;
}



/**************************************************/

/* Function: FUN_10002519 @ 10002519 */

exception * __thiscall FUN_10002519(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: operator_new @ 10002553 */

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
  if ((_DAT_100160d8 & 1) == 0) {
    _DAT_100160d8 = _DAT_100160d8 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_100160cc);
    _atexit((_func_4879 *)&LAB_10011850);
  }
  std::exception::exception((exception *)local_10,(exception *)&DAT_100160cc);
  local_10[0] = std::bad_alloc::vftable;
  __CxxThrowException_8(local_10,&DAT_10013d6c);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



/**************************************************/

/* Function: _JumpToContinuation @ 100025bd */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x100025e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/**************************************************/

/* Function: FID_conflict:_CallMemberFunction1 @ 100025ed */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100025f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _UnwindNestedFrames @ 100025f4 */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000261d,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/**************************************************/

/* Function: FID_conflict:___CxxFrameHandler3 @ 10002646 */

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

/* Function: _CallSETranslator @ 100026ac */

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
    *(undefined4 *)param_2 = 0x10002755;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_100150b0 ^ (uint)&local_2c;
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

/* Function: TranslatorGuardHandler @ 10002781 */

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
                    /* WARNING: Could not recover jumptable at 0x10002816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/**************************************************/

/* Function: _GetRangeOfTrysToCheck @ 1000281e */

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

/* Function: __CreateFrameInfo @ 10002891 */

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

/* Function: __IsExceptionObjectToBeDestroyed @ 100028b9 */

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

/* Function: __FindAndUnlinkFrame @ 100028da */

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

/* Function: _CallCatchBlock2 @ 10002926 */

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
  
  local_14 = DAT_100150b0 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1000267c;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/**************************************************/

/* Function: __security_check_cookie @ 10002984 */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_100150b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/**************************************************/

/* Function: FUN_10002993 @ 10002993 */

void FUN_10002993(void)

{
  return;
}



/**************************************************/

/* Function: __cfltcvt_init @ 10002994 */

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_10015100 = __cfltcvt;
  PTR_LAB_10015104 = &LAB_100049ab;
  PTR_LAB_10015108 = &LAB_10004969;
  PTR_LAB_1001510c = &LAB_1000499d;
  PTR_LAB_10015110 = &LAB_10004913;
  PTR_LAB_10015114 = __cfltcvt;
  PTR_LAB_10015118 = __cfltcvt_l;
  PTR_LAB_1001511c = __fassign_l;
  PTR_LAB_10015120 = __cropzeros_l;
  PTR_LAB_10015124 = __forcdecpt_l;
  return;
}



/**************************************************/

/* Function: __fpmath @ 100029f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_100160e0 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



/**************************************************/

/* Function: FUN_10002a20 @ 10002a20 */

ulonglong __fastcall FUN_10002a20(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_10016cd8 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}



/**************************************************/

/* Function: __CRT_INIT@12 @ 10002acb */

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
        _DAT_10016448 = DVar2 * 0x100 + DVar3;
        DAT_10016440 = DVar1;
        _DAT_10016444 = uVar8;
        DAT_1001644c = DVar2;
        _DAT_10016450 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_10016cdc = GetCommandLineA();
            DAT_100160e8 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_100160e4 = DAT_100160e4 + 1;
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
    if (0 < DAT_100160e4) {
      DAT_100160e4 = DAT_100160e4 + -1;
      if (DAT_1001647c == 0) {
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
    FUN_100040e5();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_100150f8;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_1000406e(DAT_1001610c);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_10004154((int)_Memory,0);
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

/* Function: ___DllMainCRTStartup @ 10002ca4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_100160e4 == 0)) {
LAB_10002d92:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_100121f0 != (code *)0x0) {
        local_20 = (*DAT_100121f0)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_10002d92;
    }
    local_20 = FUN_10001070(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_10001070(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (DAT_100121f0 != (code *)0x0) {
        (*DAT_100121f0)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_100121f0 != (code *)0x0)) {
        local_20 = (*DAT_100121f0)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/**************************************************/

/* Function: entry @ 10002d9a */

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/**************************************************/

/* Function: _Type_info_dtor @ 10002dbb */

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
  _Memory = DAT_100160fc;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_100160f8;
    do {
      piVar2 = piVar1;
      if (DAT_100160fc == (int *)0x0) goto LAB_10002dff;
      piVar1 = DAT_100160fc;
    } while (*DAT_100160fc != *(int *)(param_1 + 4));
    piVar2[1] = DAT_100160fc[1];
    _free(_Memory);
LAB_10002dff:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_10002e22();
  return;
}



/**************************************************/

/* Function: FUN_10002e22 @ 10002e22 */

void FUN_10002e22(void)

{
  FUN_10006592(0xe);
  return;
}



/**************************************************/

/* Function: _strcmp @ 10002e30 */

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
      if (bVar4 != *_Str2) goto LAB_10002e74;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10002e40;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10002e74;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10002e74;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10002e40:
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
LAB_10002e74:
  return (uint)bVar5 * -2 + 1;
}



/**************************************************/

/* Function: _free @ 10002eb8 */

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
    if (DAT_10016bac == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_10006845(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10002f0e();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10016594,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_100067c6();
      DVar4 = GetLastError();
      iVar5 = FUN_1000678b(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_10002f0e @ 10002f0e */

void FUN_10002f0e(void)

{
  FUN_10006592(4);
  return;
}



/**************************************************/

/* Function: exception @ 10002f46 */

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

/* Function: exception @ 10002f94 */

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

/* Function: exception @ 10002fac */

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

/* Function: ~exception @ 10003004 */

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

/* Function: FUN_1000301a @ 1000301a */

char * __fastcall FUN_1000301a(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/**************************************************/

/* Function: FUN_10003027 @ 10003027 */

exception * __thiscall FUN_10003027(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10003043 @ 10003043 */

int __cdecl FUN_10003043(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_1000406e(DAT_10016cc8);
  piVar2 = (int *)FUN_1000406e(DAT_10016cc4);
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
        DAT_10016cc8 = FUN_10003ff7((int)pvVar5);
      }
      iVar6 = FUN_10003ff7(param_1);
      *piVar2 = iVar6;
      DAT_10016cc4 = FUN_10003ff7((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __onexit @ 1000312b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_100053f0();
  p_Var1 = (_onexit_t)FUN_10003043((int)_Func);
  FUN_10003161();
  return p_Var1;
}



/**************************************************/

/* Function: FUN_10003161 @ 10003161 */

void FUN_10003161(void)

{
  FUN_100053f9();
  return;
}



/**************************************************/

/* Function: _atexit @ 10003167 */

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

/* Function: _V6_HeapAlloc @ 10003179 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_10016b9c) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_100031bf();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_100031bf @ 100031bf */

void FUN_100031bf(void)

{
  FUN_10006592(4);
  return;
}



/**************************************************/

/* Function: _malloc @ 100031c8 */

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
    puVar3 = (undefined4 *)FUN_100067c6();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_10016594 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_1000737b(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_10016bac == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_10003239:
      piVar1 = HeapAlloc(DAT_10016594,0,dwBytes);
    }
    else if ((DAT_10016bac != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_10003239;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_10016a44 == 0) {
      puVar3 = (undefined4 *)FUN_100067c6();
      *puVar3 = 0xc;
      goto LAB_10003267;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_10003267:
      puVar3 = (undefined4 *)FUN_100067c6();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_1000328b @ 1000328b */

void __cdecl FUN_1000328b(undefined4 param_1)

{
  DAT_10016100 = param_1;
  return;
}



/**************************************************/

/* Function: __callnewh @ 10003295 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_1000406e(DAT_10016100);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __CxxThrowException@8 @ 100032b7 */

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
  
  pDVar2 = &DAT_10012214;
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

/* Function: FUN_1000330c @ 1000330c */

exception * __thiscall FUN_1000330c(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: ___TypeMatch @ 1000332e */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_10003384:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_10003362:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_10003384;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_10003362;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: ___FrameUnwindToState @ 100033ce */

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
  FUN_10003494();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/**************************************************/

/* Function: FUN_10003494 @ 10003494 */

void FUN_10003494(void)

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

/* Function: ___DestructExceptionObject @ 100034f4 */

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

/* Function: ___AdjustPointer @ 10003548 */

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

/* Function: IsInExceptionSpec @ 1000356d */

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

/* Function: CallUnexpected @ 100035e6 */

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

/* Function: Catch_All@10003617 @ 10003617 */

void Catch_All_10003617(void)

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

/* Function: CallCatchBlock @ 1000362f */

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
  
  local_8 = &DAT_10013f00;
  uStack_c = 0x1000363b;
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
  FUN_10003755();
  return local_20;
}



/**************************************************/

/* Function: FUN_10003755 @ 10003755 */

void FUN_10003755(void)

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

/* Function: ___BuildCatchObjectHelper @ 100037cb */

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
        goto LAB_10003850;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_10003850:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/**************************************************/

/* Function: ___BuildCatchObject @ 1000394a */

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

/* Function: CatchIt @ 100039db */

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

/* Function: FindHandlerForForeignException @ 10003a47 */

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

/* Function: FindHandler @ 10003b39 */

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
                param_1 = (EHExceptionRecord *)s_bad_exception_10012244;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                in_stack_ffffffd0 = std::bad_exception::vftable;
                __CxxThrowException_8(&stack0xffffffd0,&DAT_10013f64);
                p_Var11 = (_s_FuncInfo *)param_1;
                goto LAB_10003cb8;
              }
              iVar6 = iVar6 + 1;
              uVar8 = uVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_10003c77;
        }
      }
    }
LAB_10003cb8:
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
                  goto LAB_10003da1;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_10003da1:
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
         uVar3 != '\0')) goto LAB_10003e77;
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
LAB_10003c77:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_10003e77:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/**************************************************/

/* Function: ___InternalCxxFrameHandler @ 10003ea7 */

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

/* Function: FUN_10003f8b @ 10003f8b */

undefined4 FUN_10003f8b(void)

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

/* Function: FUN_10003ff7 @ 10003ff7 */

int __cdecl FUN_10003ff7(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_100150fc);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_100150f8 != -1)) {
    iVar3 = DAT_100150f8;
    pcVar2 = TlsGetValue(DAT_100150fc);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_10004051;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10003f8b();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_10004051:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 10004065 */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_10003ff7(0);
  return;
}



/**************************************************/

/* Function: FUN_1000406e @ 1000406e */

int __cdecl FUN_1000406e(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_100150fc);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_100150f8 != -1)) {
    iVar3 = DAT_100150f8;
    pcVar2 = TlsGetValue(DAT_100150fc);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_100040c8;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10003f8b();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_100040c8:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_100040e5 @ 100040e5 */

LPVOID FUN_100040e5(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_100150fc);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1000406e(DAT_10016108);
    TlsSetValue(DAT_100150fc,lpTlsValue);
  }
  return lpTlsValue;
}



/**************************************************/

/* Function: __mtterm @ 10004117 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_100150f8 != -1) {
    iVar2 = DAT_100150f8;
    pcVar1 = (code *)FUN_1000406e(DAT_10016110);
    (*pcVar1)(iVar2);
    DAT_100150f8 = -1;
  }
  if (DAT_100150fc != 0xffffffff) {
    TlsFree(DAT_100150fc);
    DAT_100150fc = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: FUN_10004154 @ 10004154 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_10004154(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10015170;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_10003f8b();
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
  *(undefined **)(param_1 + 0x68) = &DAT_10015648;
  InterlockedIncrement((LONG *)&DAT_10015648);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10015638;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_1000420a();
  return;
}



/**************************************************/

/* Function: FUN_1000420a @ 1000420a */

void FUN_1000420a(void)

{
  FUN_10006592(0xc);
  return;
}



/**************************************************/

/* Function: FUN_10004213 @ 10004213 */

DWORD * FUN_10004213(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_100150f8;
  pcVar1 = FUN_100040e5();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_100150f8;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_1000406e(DAT_1001610c);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_10004154((int)_Memory,0);
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

/* Function: __getptd @ 1000428a */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_10004213();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: __freefls@4 @ 100042a2 */

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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10015170) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10015648)) {
        _free(pLVar1);
      }
    }
    FUN_100043ae();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10015638) && (pLVar1 != (LONG *)&DAT_10015560)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_100043ba();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_100043ae @ 100043ae */

void FUN_100043ae(void)

{
  FUN_10006592(0xd);
  return;
}



/**************************************************/

/* Function: FUN_100043ba @ 100043ba */

void FUN_100043ba(void)

{
  FUN_10006592(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 100043c3 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_100150f8 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_100150fc), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_100150f8;
      pcVar2 = TlsGetValue(DAT_100150fc);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_100150f8;
    pcVar2 = (code *)FUN_1000406e(DAT_1001610c);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_100150fc != 0xffffffff) {
    TlsSetValue(DAT_100150fc,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: __mtinit @ 1000442c */

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
  DAT_10016104 = GetProcAddress(hModule,"FlsAlloc");
  DAT_10016108 = GetProcAddress(hModule,"FlsGetValue");
  DAT_1001610c = GetProcAddress(hModule,"FlsSetValue");
  DAT_10016110 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10016104 == (FARPROC)0x0) || (DAT_10016108 == (FARPROC)0x0)) ||
      (DAT_1001610c == (FARPROC)0x0)) || (DAT_10016110 == (FARPROC)0x0)) {
    DAT_10016108 = TlsGetValue_exref;
    DAT_10016104 = (FARPROC)&LAB_100040dc;
    DAT_1001610c = TlsSetValue_exref;
    DAT_10016110 = TlsFree_exref;
  }
  DAT_100150fc = TlsAlloc();
  if ((DAT_100150fc != 0xffffffff) && (BVar1 = TlsSetValue(DAT_100150fc,DAT_10016108), BVar1 != 0))
  {
    __init_pointers();
    DAT_10016104 = (FARPROC)FUN_10003ff7((int)DAT_10016104);
    DAT_10016108 = (FARPROC)FUN_10003ff7((int)DAT_10016108);
    DAT_1001610c = (FARPROC)FUN_10003ff7((int)DAT_1001610c);
    DAT_10016110 = (FARPROC)FUN_10003ff7((int)DAT_10016110);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_1000406e((int)DAT_10016104);
      DAT_100150f8 = (*pcVar3)(pcVar6);
      if ((DAT_100150f8 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_100150f8;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_1000406e((int)DAT_1001610c);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_10004154((int)pDVar4,0);
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

/* Function: terminate @ 100045b0 */

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

/* Function: unexpected @ 100045e9 */

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

/* Function: _inconsistency @ 100045fc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1000406e(DAT_10016114);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/**************************************************/

/* Function: __initp_eh_hooks @ 10004633 */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_10016114 = FUN_10003ff7(0x100045b0);
  return;
}



/**************************************************/

/* Function: __CallSettingFrame@12 @ 10004650 */

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

/* Function: ___report_gsfailure @ 1000469c */

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
  
  _DAT_10016230 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10016234 = &stack0x00000004;
  _DAT_10016170 = 0x10001;
  _DAT_10016118 = 0xc0000409;
  _DAT_1001611c = 1;
  local_32c = DAT_100150b0;
  local_328 = DAT_100150b4;
  _DAT_10016124 = unaff_retaddr;
  _DAT_100161fc = in_GS;
  _DAT_10016200 = in_FS;
  _DAT_10016204 = in_ES;
  _DAT_10016208 = in_DS;
  _DAT_1001620c = unaff_EDI;
  _DAT_10016210 = unaff_ESI;
  _DAT_10016214 = unaff_EBX;
  _DAT_10016218 = in_EDX;
  _DAT_1001621c = in_ECX;
  _DAT_10016220 = in_EAX;
  _DAT_10016224 = unaff_EBP;
  DAT_10016228 = unaff_retaddr;
  _DAT_1001622c = in_CS;
  _DAT_10016238 = in_SS;
  DAT_10016168 = IsDebuggerPresent();
  FUN_100084f3();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_100122b8);
  if (DAT_10016168 == 0) {
    FUN_100084f3();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: _LocaleUpdate @ 100047a0 */

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
    if ((*(undefined **)this != PTR_DAT_10015638) && ((p_Var2->_ownlocale & DAT_10015b80) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10015a70) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10015b80) == 0)) {
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

/* Function: __forcdecpt_l @ 10004822 */

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

/* Function: __cropzeros_l @ 10004893 */

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

/* Function: __fassign_l @ 10004929 */

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

/* Function: __shift @ 10004980 */

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

/* Function: __cftoe2_l @ 100049b9 */

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Dst;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_100067c6();
    uVar7 = 0x16;
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
      if (((DAT_10016a88 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return pcVar9;
    }
    puVar1 = (undefined4 *)FUN_100067c6();
    uVar7 = 0x22;
  }
  uVar8 = 0;
  *puVar1 = uVar7;
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar8;
}



/**************************************************/

/* Function: __cftoe_l @ 10004b26 */

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_100067c6();
    *puVar1 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftoe @ 10004bf4 */

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

/* Function: __cftoa_l @ 10004c12 */

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  size_t _SizeInBytes;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar7;
  errno_t unaff_EBX;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  errno_t eVar14;
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
    puVar2 = (undefined4 *)FUN_100067c6();
    uVar13 = 0x16;
LAB_10004c4b:
    eVar14 = 0;
    *puVar2 = uVar13;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return eVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    puVar2 = (undefined4 *)FUN_100067c6();
    uVar13 = 0x22;
    goto LAB_10004c4b;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar14 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar14 != 0) {
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
    pcVar3 = _strrchr(param_2 + 2,0x65);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar3[3] = '\0';
    }
    goto LAB_10004f6f;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar7 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
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
  pcVar9 = param_2 + 3;
  pcVar3 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar9 = '\0';
  }
  else {
    *pcVar9 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar11 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar7;
      }
      local_8 = local_8 + -4;
      *pcVar3 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar3 = pcVar3 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar8 = pcVar3, 8 < (ushort)uVar11)) {
      while( true ) {
        pcVar4 = pcVar8 + -1;
        if ((*pcVar4 != 'f') && (*pcVar4 != 'F')) break;
        *pcVar4 = '0';
        pcVar8 = pcVar4;
      }
      if (pcVar4 == pcVar9) {
        pcVar8[-2] = pcVar8[-2] + '\x01';
      }
      else if (*pcVar4 == '9') {
        *pcVar4 = (char)sVar7 + ':';
      }
      else {
        *pcVar4 = *pcVar4 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar3,0x30,param_4);
    pcVar3 = pcVar3 + param_4;
  }
  if (*pcVar9 == '\0') {
    pcVar3 = pcVar9;
  }
  *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar11 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar5 = (uint)(uVar11 & 0x7ff);
  uVar6 = uVar5 - local_18;
  uVar5 = -(uint)(uVar5 < local_18);
  if ((int)uVar5 < 0) {
    pcVar3[1] = '-';
    bVar10 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar10);
  }
  else {
    pcVar3[1] = '+';
  }
  pcVar8 = pcVar3 + 2;
  *pcVar8 = '0';
  pcVar9 = pcVar8;
  if (((int)uVar5 < 0) || (((int)uVar5 < 1 && (uVar6 < 1000)))) {
LAB_10004f1e:
    if ((-1 < (int)uVar5) && ((0 < (int)uVar5 || (99 < uVar6)))) goto LAB_10004f29;
  }
  else {
    uVar12 = __alldvrm(uVar6,uVar5,1000,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar8 = (char)uVar12 + '0';
    pcVar9 = pcVar3 + 3;
    uVar5 = 0;
    uVar6 = extraout_ECX;
    if (pcVar9 == pcVar8) goto LAB_10004f1e;
LAB_10004f29:
    uVar12 = __alldvrm(uVar6,uVar5,100,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar5 = 0;
    uVar6 = extraout_ECX_00;
  }
  if ((pcVar9 != pcVar8) || ((-1 < (int)uVar5 && ((0 < (int)uVar5 || (9 < uVar6)))))) {
    uVar12 = __alldvrm(uVar6,uVar5,10,0);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar6 = extraout_ECX_01;
  }
  *pcVar9 = (char)uVar6 + '0';
  pcVar9[1] = '\0';
LAB_10004f6f:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}



/**************************************************/

/* Function: __cftof2_l @ 10004f83 */

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_100067c6();
    uVar4 = 0x16;
    *puVar2 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftof_l @ 10005078 */

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_100067c6();
    *puVar1 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftog_l @ 10005131 */

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_100067c6();
    *puVar2 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cfltcvt_l @ 10005229 */

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

/* Function: __cfltcvt @ 100052af */

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

/* Function: __initp_misc_cfltcvt_tab @ 100052d0 */

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
    piVar1 = (int *)((int)&PTR_LAB_10015100 + uVar3);
    iVar2 = FUN_10003ff7(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: __setdefaultprecision @ 100052ef */

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

/* Function: __ms_p5_test_fdiv @ 10005318 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_100122c8 - (_DAT_100122c8 / _DAT_100122d0) * _DAT_100122d0) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: __ms_p5_mp_test_fdiv @ 10005354 */

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

/* Function: __amsg_exit @ 10005391 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_1000737b(param_1);
  pcVar1 = (code *)FUN_1000406e((int)PTR___exit_10015128);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: FUN_100053b5 @ 100053b5 */

void __cdecl FUN_100053b5(undefined4 param_1)

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

/* Function: ___crtExitProcess @ 100053db */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_100053b5(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: FUN_100053f0 @ 100053f0 */

void FUN_100053f0(void)

{
  __lock(8);
  return;
}



/**************************************************/

/* Function: FUN_100053f9 @ 100053f9 */

void FUN_100053f9(void)

{
  FUN_10006592(8);
  return;
}



/**************************************************/

/* Function: FUN_10005402 @ 10005402 */

void __cdecl FUN_10005402(undefined4 *param_1)

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

/* Function: __initterm_e @ 1000541a */

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

/* Function: __get_osplatform @ 1000543a */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_10016440 != 0)) {
    *param_1 = DAT_10016440;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_100067c6();
  *puVar1 = 0x16;
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __get_winmajor @ 10005471 */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_10016440 != 0)) {
    *param_1 = DAT_1001644c;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_100067c6();
  *puVar1 = 0x16;
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __cinit @ 100054ad */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_100121e4 != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_100121e4), BVar1 != 0)) {
    (*(code *)PTR___fpmath_100121e4)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_10012120,(undefined4 *)&DAT_10012134);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_10005e71);
    puVar3 = &DAT_10012118;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1001211c);
    if ((DAT_10016cd0 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10016cd0), BVar1 != 0)) {
      (*DAT_10016cd0)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000553f @ 1000553f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10005612) */

void __cdecl FUN_1000553f(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10016480 != 1) {
    DAT_1001647c = 1;
    DAT_10016478 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_1000406e(DAT_10016cc8);
      piVar3 = (int *)FUN_1000406e(DAT_10016cc4);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_1000406e(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_10005402((undefined4 *)&DAT_1001213c);
    }
    FUN_10005402((undefined4 *)&DAT_10012144);
  }
  FUN_1000560c();
  if (param_3 != 0) {
    return;
  }
  DAT_10016480 = 1;
  FUN_10006592(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000560c @ 1000560c */

void FUN_1000560c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_10006592(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 10005621 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000553f(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 10005632 */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1000553f(0,0,1);
  return;
}



/**************************************************/

/* Function: __init_pointers @ 10005641 */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1000328b(uVar1);
  FUN_10009049(uVar1);
  FUN_100063ca(uVar1);
  FUN_1000903f(uVar1);
  FUN_10009035(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_10002993();
  __initp_eh_hooks();
  PTR___exit_10015128 = (undefined *)FUN_10003ff7(0x10005621);
  return;
}



/**************************************************/

/* Function: __malloc_crt @ 1000568d */

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
    if (DAT_10016484 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10016484 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __calloc_crt @ 100056cd */

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
    if (DAT_10016484 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10016484 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __realloc_crt @ 10005715 */

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
    if (DAT_10016484 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10016484 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/**************************************************/

/* Function: __ioinit @ 10005760 */

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
  
  uStack_c = 0x1000576c;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10005997:
    iVar7 = -1;
  }
  else {
    DAT_10016bb0 = 0x20;
    DAT_10016bc0 = puVar2;
    for (; puVar2 < DAT_10016bc0 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_10016bb0 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_10016bb0, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_10016bc0)[iVar7] = puVar2;
        DAT_10016bb0 = DAT_10016bb0 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_10016bc0)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_10016bc0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_10005997;
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
      piVar8 = DAT_10016bc0 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_10005997;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_10016bb0);
    iVar7 = 0;
  }
  return iVar7;
}



/**************************************************/

/* Function: __ioterm @ 100059a0 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_10016bc0;
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
  } while ((int)puVar2 < 0x10016cc0);
  return;
}



/**************************************************/

/* Function: __setenvp @ 100059ec */

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
  
  if (DAT_10016ccc == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_100160e8;
  if (DAT_100160e8 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_100160e8;
    DAT_10016460 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_100160e8);
          DAT_100160e8 = (char *)0x0;
          *puVar1 = 0;
          _DAT_10016cc0 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10016460);
            DAT_10016460 = (undefined4 *)0x0;
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

/* Function: parse_cmdline @ 10005ac7 */

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
        goto LAB_10005b59;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_10005b59:
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

/* Function: __setargv @ 10005c5f */

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
  
  if (DAT_10016ccc == 0) {
    ___initmbctable();
  }
  DAT_1001658c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10016488,0x104);
  _DAT_10016470 = &DAT_10016488;
  if ((DAT_10016cdc == (char *)0x0) || (local_8 = DAT_10016cdc, *DAT_10016cdc == '\0')) {
    local_8 = &DAT_10016488;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_10016454 = local_c - 1;
      _DAT_10016458 = puVar2;
      return 0;
    }
  }
  return -1;
}



/**************************************************/

/* Function: ___crtGetEnvironmentStringsA @ 10005d18 */

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
  if (DAT_10016590 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10016590 = 1;
      goto LAB_10005d6a;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10016590 = 2;
    }
  }
  if (DAT_10016590 != 1) {
    if ((DAT_10016590 != 2) && (DAT_10016590 != 0)) {
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
LAB_10005d6a:
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

/* Function: __RTC_Initialize @ 10005e4d */

/* WARNING: Removing unreachable block (ram,0x10005e5f) */
/* WARNING: Removing unreachable block (ram,0x10005e65) */
/* WARNING: Removing unreachable block (ram,0x10005e67) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/**************************************************/

/* Function: ___heap_select @ 10005e95 */

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

/* Function: __heap_init @ 10005ef0 */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_10016594 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_10016594 == (HANDLE)0x0) {
    return 0;
  }
  DAT_10016bac = ___heap_select();
  if ((DAT_10016bac == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_10016594);
    DAT_10016594 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 10005f4a */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10016bac == 3) {
    iVar2 = 0;
    if (0 < DAT_10016b94) {
      puVar1 = (undefined4 *)((int)DAT_10016b98 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_10016594,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10016b94);
    }
    HeapFree(DAT_10016594,0,DAT_10016b98);
  }
  HeapDestroy(DAT_10016594);
  DAT_10016594 = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: FUN_10005fbe @ 10005fbe */

undefined4 __cdecl FUN_10005fbe(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_10004213();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_100151f4 * 3);
    if ((piVar1 + DAT_100151f4 * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_100151e8 < DAT_100151ec + DAT_100151e8) {
            iVar8 = DAT_100151e8 * 0xc;
            iVar9 = DAT_100151e8;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_100151ec + DAT_100151e8);
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

/* Function: __SEH_prolog4 @ 10006138 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_100150b0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 1000617d */

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

/* Function: __except_handler4 @ 100061a0 */

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_100150b0);
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
          goto LAB_1000624b;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_10012234 != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_10012234)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_10012234)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_100150b0);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_100150b0);
  }
LAB_1000624b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/**************************************************/

/* Function: ___security_init_cookie @ 10006336 */

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
  if ((DAT_100150b0 == 0xbb40e64e) || ((DAT_100150b0 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_100150b0 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_100150b0 == 0xbb40e64e) {
      DAT_100150b0 = 0xbb40e64f;
    }
    else if ((DAT_100150b0 & 0xffff0000) == 0) {
      DAT_100150b0 = DAT_100150b0 | DAT_100150b0 << 0x10;
    }
  }
  DAT_100150b4 = ~DAT_100150b0;
  return;
}



/**************************************************/

/* Function: FUN_100063ca @ 100063ca */

void __cdecl FUN_100063ca(undefined4 param_1)

{
  DAT_10016598 = param_1;
  return;
}



/**************************************************/

/* Function: __invoke_watson @ 100063d4 */

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
  
  iVar1 = DAT_100150b0;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_100084f3();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/**************************************************/

/* Function: FUN_100064d0 @ 100064d0 */

void __cdecl
FUN_100064d0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_1000406e(DAT_10016598);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100064e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_100084f3();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/**************************************************/

/* Function: __mtinitlocks @ 100064f4 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_100165a0;
  do {
    if ((&DAT_100151fc)[iVar2 * 2] == 1) {
      (&DAT_100151f8)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_100151f8)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_100151f8)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 1000653d */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_100151f8;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10015318);
  puVar1 = &DAT_100151f8;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10015318);
  return;
}



/**************************************************/

/* Function: FUN_10006592 @ 10006592 */

void __cdecl FUN_10006592(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100151f8)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 100065a7 */

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
  if (DAT_10016594 == 0) {
    __FF_MSGBANNER();
    FUN_1000737b(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_100151f8 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_100067c6();
      *puVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          puVar2 = (undefined4 *)FUN_100067c6();
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
      FUN_10006661();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_10006661 @ 10006661 */

void FUN_10006661(void)

{
  FUN_10006592(10);
  return;
}



/**************************************************/

/* Function: __lock @ 1000666a */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_100151f8)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_100151f8)[_File * 2]);
  return;
}



/**************************************************/

/* Function: _strcpy_s @ 1000669b */

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
      puVar2 = (undefined4 *)FUN_100067c6();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_100066ba;
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_100067c6();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_100066ba:
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strlen @ 10006700 */

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10006730;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10006763:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10006730:
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
  goto LAB_10006763;
}



/**************************************************/

/* Function: FUN_1000678b @ 1000678b */

int __cdecl FUN_1000678b(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10015320)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x10015324);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_100067c6 @ 100067c6 */

undefined * FUN_100067c6(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004213();
  if (pDVar1 == (DWORD *)0x0) {
    return &DAT_10015488;
  }
  return (undefined *)(pDVar1 + 2);
}



/**************************************************/

/* Function: ___sbh_heap_init @ 100067d9 */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_10016b98 = HeapAlloc(DAT_10016594,0,0x140);
  if (DAT_10016b98 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1001672c = 0;
  DAT_10016b94 = 0;
  DAT_10016ba0 = DAT_10016b98;
  DAT_10016b9c = param_1;
  DAT_10016ba4 = 0x10;
  return 1;
}



/**************************************************/

/* Function: thunk_FUN_10006845 @ 10006821 */

void __thiscall thunk_FUN_10006845(void *this,int param_1)

{
  FUN_10006845((void *)(DAT_10016b94 * 0x14 + DAT_10016b98),param_1);
  return;
}



/**************************************************/

/* Function: FUN_10006845 @ 10006845 */

void __thiscall FUN_10006845(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/**************************************************/

/* Function: ___sbh_free_block @ 1000684c */

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
      if (DAT_1001672c != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10016ba8 * 0x8000 + DAT_1001672c[3]),0x8000,0x4000);
        DAT_1001672c[2] = DAT_1001672c[2] | 0x80000000U >> ((byte)DAT_10016ba8 & 0x1f);
        *(undefined4 *)(DAT_1001672c[4] + 0xc4 + DAT_10016ba8 * 4) = 0;
        *(char *)(DAT_1001672c[4] + 0x43) = *(char *)(DAT_1001672c[4] + 0x43) + -1;
        if (*(char *)(DAT_1001672c[4] + 0x43) == '\0') {
          DAT_1001672c[1] = DAT_1001672c[1] & 0xfffffffe;
        }
        if (DAT_1001672c[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1001672c[3],0,0x8000);
          HeapFree(DAT_10016594,0,(LPVOID)DAT_1001672c[4]);
          _memmove(DAT_1001672c,DAT_1001672c + 5,
                   (DAT_10016b94 * 0x14 - (int)DAT_1001672c) + -0x14 + DAT_10016b98);
          DAT_10016b94 = DAT_10016b94 + -1;
          if (DAT_1001672c < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10016ba0 = DAT_10016b98;
        }
      }
      DAT_1001672c = param_1;
      DAT_10016ba8 = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 10006b60 */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10016b94 == DAT_10016ba4) {
    pvVar1 = HeapReAlloc(DAT_10016594,0,DAT_10016b98,(DAT_10016ba4 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10016ba4 = DAT_10016ba4 + 0x10;
    DAT_10016b98 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10016b94 * 0x14 + (int)DAT_10016b98);
  pvVar1 = HeapAlloc(DAT_10016594,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10016b94 = DAT_10016b94 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_10016594,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 10006c10 */

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

/* Function: ___sbh_resize_block @ 10006d16 */

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

/* Function: ___sbh_alloc_block @ 10006ff5 */

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
  
  puVar9 = DAT_10016b98 + DAT_10016b94 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_10016ba0;
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
  puVar13 = DAT_10016b98;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_10016ba0 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_10016ba0) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_10016b98;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_10016ba0 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_10016ba0) &&
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
  DAT_10016ba0 = param_1;
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
    if (iVar10 == 0) goto LAB_10007295;
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
LAB_10007295:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_1001672c)) && (local_8 == DAT_10016ba8)) {
    DAT_1001672c = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/**************************************************/

/* Function: __msize @ 100072d8 */

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
    puVar1 = (undefined4 *)FUN_100067c6();
    *puVar1 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_10016bac == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_10006845(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_10007372();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_10016594,0,_Memory);
  }
  return sVar2;
}



/**************************************************/

/* Function: FUN_10007372 @ 10007372 */

void FUN_10007372(void)

{
  FUN_10006592(4);
  return;
}



/**************************************************/

/* Function: FUN_1000737b @ 1000737b */

void __cdecl FUN_1000737b(int param_1)

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
    if (param_1 == (&DAT_10015490)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_100160f4 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x10015494);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10016730,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_1001684d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10016749,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10016749,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10016749);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10016749);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x1001670e),
                           (int)&DAT_10016a44 - (int)(sVar5 + 0x1001670e),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10016730,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10016730,0x314,*(char **)(uVar6 * 8 + 0x10015494));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_10009a75(&DAT_10016730,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 1000751b */

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
    if (DAT_100160f4 != 1) {
      return;
    }
  }
  FUN_1000737b(0xfc);
  FUN_1000737b(0xff);
  return;
}



/**************************************************/

/* Function: __EH_prolog3_catch @ 10007554 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_100150b0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: _ValidateRead @ 1000758a */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/**************************************************/

/* Function: _memmove @ 100075a0 */

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
          goto switchD_10007783_caseD_2;
        case 3:
          goto switchD_10007783_caseD_3;
        }
        goto switchD_10007783_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10007783_caseD_0;
      case 1:
        goto switchD_10007783_caseD_1;
      case 2:
        goto switchD_10007783_caseD_2;
      case 3:
        goto switchD_10007783_caseD_3;
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
              goto switchD_10007783_caseD_2;
            case 3:
              goto switchD_10007783_caseD_3;
            }
            goto switchD_10007783_caseD_1;
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
              goto switchD_10007783_caseD_2;
            case 3:
              goto switchD_10007783_caseD_3;
            }
            goto switchD_10007783_caseD_1;
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
              goto switchD_10007783_caseD_2;
            case 3:
              goto switchD_10007783_caseD_3;
            }
            goto switchD_10007783_caseD_1;
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
switchD_10007783_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10007783_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10007783_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10007783_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10016cd8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_100075fc_caseD_2;
      case 3:
        goto switchD_100075fc_caseD_3;
      }
      goto switchD_100075fc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100075fc_caseD_0;
    case 1:
      goto switchD_100075fc_caseD_1;
    case 2:
      goto switchD_100075fc_caseD_2;
    case 3:
      goto switchD_100075fc_caseD_3;
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
            goto switchD_100075fc_caseD_2;
          case 3:
            goto switchD_100075fc_caseD_3;
          }
          goto switchD_100075fc_caseD_1;
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
            goto switchD_100075fc_caseD_2;
          case 3:
            goto switchD_100075fc_caseD_3;
          }
          goto switchD_100075fc_caseD_1;
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
            goto switchD_100075fc_caseD_2;
          case 3:
            goto switchD_100075fc_caseD_3;
          }
          goto switchD_100075fc_caseD_1;
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
switchD_100075fc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100075fc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100075fc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100075fc_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: ___freetlocinfo @ 10007905 */

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10015c58)) &&
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
  if ((ppuVar2 != &PTR_DAT_10015b98) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10015558) &&
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

/* Function: ___addlocaleref @ 10007a45 */

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
    if (((undefined *)pLVar1[-2] != &DAT_10015558) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: ___removelocaleref @ 10007acb */

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
      if (((undefined *)pLVar1[-2] != &DAT_10015558) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: __updatetlocinfoEx_nolock @ 10007b57 */

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
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10015560)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 10007b95 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10015b80) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_10007bff();
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

/* Function: FUN_10007bff @ 10007bff */

void FUN_10007bff(void)

{
  FUN_10006592(0xc);
  return;
}



/**************************************************/

/* Function: FUN_10007c0b @ 10007c0b */

undefined4 FUN_10007c0b(void)

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

/* Function: setSBCS @ 10007c3a */

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
    *puVar1 = puVar1[(int)&DAT_10015648 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10015648 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: setSBUpLow @ 10007c8f */

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
  
  local_8 = DAT_100150b0 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10007df6:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10007df6;
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
          goto LAB_10007d9d;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_10007d9d:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 10007e19 */

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
  if (((p_Var1->_ownlocale & DAT_10015b80) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10015a70) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10015648)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10015a70;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10015a70;
      InterlockedIncrement((LONG *)PTR_DAT_10015a70);
    }
    FUN_10007eb4();
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

/* Function: FUN_10007eb4 @ 10007eb4 */

void FUN_10007eb4(void)

{
  FUN_10006592(0xd);
  return;
}



/**************************************************/

/* Function: getSystemCP @ 10007ebd */

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
  DAT_10016a6c = 0;
  if (unaff_ESI == -2) {
    DAT_10016a6c = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10016a6c = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_10016a6c = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_10016a6c = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: FUN_10007f37 @ 10007f37 */

void __cdecl FUN_10007f37(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_10007f73:
    if (*(uint *)((int)&DAT_10015a78 + uVar5) != uVar4) goto code_r0x10007f7f;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10015a88 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x10015a74);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_10007c0b();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_10015a7c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_100080a4;
  }
LAB_10007f60:
  setSBCS(unaff_EDI);
LAB_10008101:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x10007f7f:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10007f8c;
  goto LAB_10007f73;
code_r0x10007f8c:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_10008101;
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
      uVar9 = FUN_10007c0b();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_100080a4:
    setSBUpLow(unaff_EDI);
    goto LAB_10008101;
  }
  if (DAT_10016a6c == 0) goto LAB_10008101;
  goto LAB_10007f60;
}



/**************************************************/

/* Function: __setmbcp @ 10008110 */

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
      local_24 = FUN_10007f37(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10015648)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10015b80 & 1) == 0)) {
          __lock(0xd);
          _DAT_10016a7c = ptVar3->mbcodepage;
          _DAT_10016a80 = ptVar3->ismbcodepage;
          _DAT_10016a84 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10016a70)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10015868)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10015970)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10015a70);
          if ((LVar4 == 0) && (PTR_DAT_10015a70 != &DAT_10015648)) {
            _free(PTR_DAT_10015a70);
          }
          PTR_DAT_10015a70 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_10008271();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10015648) {
          _free(ptVar3);
        }
        puVar5 = (undefined4 *)FUN_100067c6();
        *puVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_10008271 @ 10008271 */

void FUN_10008271(void)

{
  FUN_10006592(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 100082aa */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_10016ccc == 0) {
    __setmbcp(-3);
    DAT_10016ccc = 1;
  }
  return 0;
}



/**************************************************/

/* Function: _abort @ 100082c8 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if ((DAT_10015b68 & 1) != 0) {
    FUN_1000737b(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if ((DAT_10015b68 & 2) != 0) {
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

/* Function: __global_unwind2 @ 100083bc */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100083d4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 10008421 */

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
  puStack_1c = &LAB_100083dc;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_100084f0();
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify1 @ 100084c8 */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10015b74 = param_1;
  DAT_10015b70 = in_EAX;
  DAT_10015b78 = unaff_EBP;
  return in_EAX;
}



/**************************************************/

/* Function: __NLG_Notify @ 100084d1 */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10015b74 = param_1;
  DAT_10015b70 = in_EAX;
  DAT_10015b78 = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_100084f0 @ 100084f0 */

void FUN_100084f0(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: FUN_100084f3 @ 100084f3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100084f3(void)

{
  _DAT_10016b90 = 0;
  return;
}



/**************************************************/

/* Function: _strrchr @ 10008500 */

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

/* Function: __isdigit_l @ 1000852d */

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

/* Function: _isdigit @ 1000857c */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_10016a48 == 0) {
    return (byte)PTR_DAT_10015628[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __tolower_l @ 100085a5 */

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
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
LAB_10008604:
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
      puVar4 = (undefined4 *)FUN_100067c6();
      *puVar4 = 0x2a;
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
    if (iVar3 == 0) goto LAB_10008604;
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

/* Function: _tolower @ 100086bc */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_10016a48 == 0) {
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

/* Function: FID_conflict:__atoflt_l @ 100086e3 */

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
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1000b355((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_1000873a:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1000877a;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1000876c:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1000877a;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1000876c;
    goto LAB_1000873a;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_1000877a:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: FID_conflict:__atoflt_l @ 10008789 */

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
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1000b355((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_100087e0:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10008820;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10008812:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10008820;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10008812;
    goto LAB_100087e0;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10008820:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: __fptostr @ 1000882f */

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    puVar1 = (undefined4 *)FUN_100067c6();
    eVar7 = 0x16;
    *puVar1 = 0x16;
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
    puVar1 = (undefined4 *)FUN_100067c6();
    eVar7 = 0x22;
    *puVar1 = 0x22;
  }
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}



/**************************************************/

/* Function: ___dtold @ 100088ec */

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
      goto LAB_1000899e;
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
LAB_1000899e:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/**************************************************/

/* Function: __fltout2 @ 100089a7 */

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
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_1000ba15(local_14,uStack_10,uStack_c,0x11,0,&local_30);
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

/* Function: __alldvrm @ 10008a40 */

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

/* Function: _memset @ 10008b20 */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10016cd8 != 0)) {
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

/* Function: __aullshr @ 10008ba0 */

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

/* Function: __controlfp_s @ 10008bc8 */

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  undefined4 *puVar2;
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
    puVar2 = (undefined4 *)FUN_100067c6();
    eVar3 = 0x16;
    *puVar2 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}



/**************************************************/

/* Function: FUN_10008c32 @ 10008c32 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10008c32(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 10008c82 */

/* WARNING: Removing unreachable block (ram,0x10008cbd) */
/* WARNING: Removing unreachable block (ram,0x10008caa) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10008c32(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: __ValidateImageBase @ 10008cf0 */

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

/* Function: __FindPESection @ 10008d20 */

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

/* Function: __IsNonwritableInCurrentImage @ 10008d70 */

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
  local_c = DAT_100150b0 ^ 0x10014128;
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

/* Function: __initp_misc_winsig @ 10008e2b */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_10016a8c = param_1;
  DAT_10016a90 = param_1;
  DAT_10016a94 = param_1;
  DAT_10016a98 = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 10008e44 */

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
  } while (uVar1 < DAT_100151f4 * 0xc + param_1);
  if ((DAT_100151f4 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 10008e78 */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_1000406e(DAT_10016a94);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 10008e85 */

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
        puVar6 = &DAT_10016a8c;
        iVar3 = DAT_10016a8c;
        goto LAB_10008f3a;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10008f18;
        if (_SigNum != 8) goto LAB_10008efc;
      }
    }
    pDVar7 = FUN_10004213();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_10016a98;
      iVar3 = DAT_10016a98;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_10016a90;
      iVar3 = DAT_10016a90;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10008efc:
        puVar6 = (undefined4 *)FUN_100067c6();
        *puVar6 = 0x16;
        FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10008f18:
      puVar6 = &DAT_10016a94;
      iVar3 = DAT_10016a94;
    }
LAB_10008f3a:
    bVar1 = true;
    pcVar4 = (code *)FUN_1000406e(iVar3);
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
      goto LAB_10008f9e;
    }
  }
  else {
LAB_10008f9e:
    if (_SigNum == 8) {
      for (local_28 = DAT_100151e8; local_28 < DAT_100151ec + DAT_100151e8; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_10008fd8;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_10008fd8:
  FUN_10008ff9();
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

/* Function: FUN_10008ff9 @ 10008ff9 */

void FUN_10008ff9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_10006592(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_10009035 @ 10009035 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10009035(undefined4 param_1)

{
  _DAT_10016aa0 = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1000903f @ 1000903f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000903f(undefined4 param_1)

{
  _DAT_10016aac = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10009049 @ 10009049 */

void __cdecl FUN_10009049(undefined4 param_1)

{
  DAT_10016ab0 = param_1;
  return;
}



/**************************************************/

/* Function: ___crtInitCritSecNoSpinCount@8 @ 10009053 */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 10009063 */

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
  
  local_8 = &DAT_10014168;
  uStack_c = 0x1000906f;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_1000406e(DAT_10016ab0);
  if (pcVar1 != (FARPROC)0x0) goto LAB_100090d9;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_100090c8:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_100090c8;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_100090c8;
  }
  DAT_10016ab0 = FUN_10003ff7((int)pcVar1);
LAB_100090d9:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: __calloc_impl @ 10009128 */

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
        if ((DAT_10016bac == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_10016b9c)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_10009224();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_100091d9;
          }
        }
        else {
LAB_100091d9:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_10016594,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_10016a44 == 0) {
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
    puVar1 = (undefined4 *)FUN_100067c6();
    *puVar1 = 0xc;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: FUN_10009224 @ 10009224 */

void FUN_10009224(void)

{
  FUN_10006592(4);
  return;
}



/**************************************************/

/* Function: _realloc @ 10009246 */

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
  if (DAT_10016bac == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000941f;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_10006845(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_10016b9c) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_10006845(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_10016594,0,_NewSize);
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
      FUN_1000938a();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_10016594,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10016a44 == 0) {
        piVar4 = (int *)FUN_100067c6();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1000944c;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_100067c6();
    if (local_24 != (uint *)0x0) goto LAB_1000942b;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000941f;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_10016594,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_10016a44 == 0) {
        piVar4 = (int *)FUN_100067c6();
LAB_1000944c:
        DVar5 = GetLastError();
        iVar2 = FUN_1000678b(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_100067c6();
  }
  DVar5 = GetLastError();
  iVar2 = FUN_1000678b(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_1000941f:
  __callnewh(_NewSize);
  piVar4 = (int *)FUN_100067c6();
LAB_1000942b:
  *piVar4 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1000938a @ 1000938a */

void FUN_1000938a(void)

{
  FUN_10006592(4);
  return;
}



/**************************************************/

/* Function: x_ismbbtype_l @ 10009461 */

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
    if (uVar1 == 0) goto LAB_100094a3;
  }
  iVar2 = 1;
LAB_100094a3:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead @ 100094b2 */

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

/* Function: _memcpy @ 100094d0 */

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
          goto switchD_100096b3_caseD_2;
        case 3:
          goto switchD_100096b3_caseD_3;
        }
        goto switchD_100096b3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_100096b3_caseD_0;
      case 1:
        goto switchD_100096b3_caseD_1;
      case 2:
        goto switchD_100096b3_caseD_2;
      case 3:
        goto switchD_100096b3_caseD_3;
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
              goto switchD_100096b3_caseD_2;
            case 3:
              goto switchD_100096b3_caseD_3;
            }
            goto switchD_100096b3_caseD_1;
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
              goto switchD_100096b3_caseD_2;
            case 3:
              goto switchD_100096b3_caseD_3;
            }
            goto switchD_100096b3_caseD_1;
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
              goto switchD_100096b3_caseD_2;
            case 3:
              goto switchD_100096b3_caseD_3;
            }
            goto switchD_100096b3_caseD_1;
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
switchD_100096b3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_100096b3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_100096b3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_100096b3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10016cd8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000952c_caseD_2;
      case 3:
        goto switchD_1000952c_caseD_3;
      }
      goto switchD_1000952c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000952c_caseD_0;
    case 1:
      goto switchD_1000952c_caseD_1;
    case 2:
      goto switchD_1000952c_caseD_2;
    case 3:
      goto switchD_1000952c_caseD_3;
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
            goto switchD_1000952c_caseD_2;
          case 3:
            goto switchD_1000952c_caseD_3;
          }
          goto switchD_1000952c_caseD_1;
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
            goto switchD_1000952c_caseD_2;
          case 3:
            goto switchD_1000952c_caseD_3;
          }
          goto switchD_1000952c_caseD_1;
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
            goto switchD_1000952c_caseD_2;
          case 3:
            goto switchD_1000952c_caseD_3;
          }
          goto switchD_1000952c_caseD_1;
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
switchD_1000952c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000952c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000952c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000952c_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __local_unwind4 @ 10009838 */

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
  puStack_24 = &LAB_100098c8;
  pvStack_28 = ExceptionList;
  local_20 = DAT_100150b0 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_100084f0();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_1000990e @ 1000990e */

void FUN_1000990e(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 1000992a */

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

/* Function: _EH4_TransferToHandler @ 10009941 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x10009958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 1000995a */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000996f,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 10009974 */

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

/* Function: _atol @ 10009a64 */

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

/* Function: FUN_10009a75 @ 10009a75 */

undefined4 __cdecl FUN_10009a75(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_10016ab4 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10016ab4 = FUN_10003ff7((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_10016ab8 = FUN_10003ff7((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10016abc = FUN_10003ff7((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10016ac4 = FUN_10003ff7((int)pFVar1);
      if (DAT_10016ac4 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_10016ac0 = FUN_10003ff7((int)pFVar1);
      }
    }
  }
  if ((DAT_10016ac0 != local_c) && (DAT_10016ac4 != local_c)) {
    pcVar3 = (code *)FUN_1000406e(DAT_10016ac0);
    pcVar4 = (code *)FUN_1000406e(DAT_10016ac4);
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
      goto LAB_10009c0b;
    }
  }
  if ((((DAT_10016ab8 != local_c) &&
       (pcVar3 = (code *)FUN_1000406e(DAT_10016ab8), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10016abc != local_c &&
      (pcVar3 = (code *)FUN_1000406e(DAT_10016abc), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_10009c0b:
  pcVar3 = (code *)FUN_1000406e(DAT_10016ab4);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/**************************************************/

/* Function: _strcat_s @ 10009c32 */

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
        puVar2 = (undefined4 *)FUN_100067c6();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_10009c51;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_100067c6();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_10009c51:
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strncpy_s @ 10009ca3 */

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
LAB_10009cc7:
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
          puVar2 = (undefined4 *)FUN_100067c6();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_10009cd8;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_10009cc7;
  puVar2 = (undefined4 *)FUN_100067c6();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_10009cd8:
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: __set_error_mode @ 10009d56 */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_100160f0;
      DAT_100160f0 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_100160f0;
    }
  }
  puVar2 = (undefined4 *)FUN_100067c6();
  *puVar2 = 0x16;
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: FUN_10009d9c @ 10009d9c */

void __cdecl FUN_10009d9c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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

/* Function: __VEC_memcpy @ 10009e23 */

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
      FUN_10009d9c(param_1,param_2,param_3 - uVar3);
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

/* Function: ___free_lc_time @ 10009f06 */

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

/* Function: ___free_lconv_num @ 1000a096 */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10015c58) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10015c5c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10015c60) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 1000a0d6 */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10015c64) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10015c68) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10015c6c) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10015c70) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10015c74) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10015c78) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10015c7c) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: __freea @ 1000a15f */

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

/* Function: _strcspn @ 1000a180 */

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

/* Function: __crtGetStringTypeA_stat @ 1000a1c6 */

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
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10016acc == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10016acc = 2;
      }
      goto LAB_1000a21f;
    }
    DAT_10016acc = 1;
  }
  else {
LAB_1000a21f:
    if ((DAT_10016acc == 2) || (DAT_10016acc == 0)) {
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
      goto LAB_1000a36c;
    }
    if (DAT_10016acc != 1) goto LAB_1000a36c;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000a36c;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1000a2af:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1000a2af;
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
LAB_1000a36c:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 1000a37e */

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

/* Function: _strpbrk @ 1000a3c0 */

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

/* Function: __crtLCMapStringA_stat @ 1000a400 */

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
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  if (DAT_10016ad0 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_10016ad0 = 2;
      }
    }
    else {
      DAT_10016ad0 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1000a46f;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1000a46f:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_10016ad0 == 2) || (DAT_10016ad0 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1000a790;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_1000a790;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000a76d;
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
LAB_1000a76d:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1000a790;
  }
  if (DAT_10016ad0 != 1) goto LAB_1000a790;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000a790;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_1000a517:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1000a517;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_1000a790;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000a626;
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
LAB_1000a626:
  __freea(local_10);
LAB_1000a790:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 1000a7a2 */

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

/* Function: __isctype_l @ 1000a7e5 */

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

/* Function: __isleadbyte_l @ 1000a89b */

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

/* Function: FID_conflict:__ld12tod @ 1000a8d1 */

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
        goto LAB_1000add0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10015ca8 - 1;
    iVar4 = (int)(DAT_10015ca8 + ((int)DAT_10015ca8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10015ca8 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1000aa04;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1000aa0b;
LAB_1000aa04:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1000aa0b:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1000aa19;
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
LAB_1000aa19:
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
    if (iVar12 < (int)(DAT_10015ca4 - DAT_10015ca8)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10015ca4 < iVar12) {
        if (iVar12 < DAT_10015ca0) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10015cb4;
          iVar2 = (int)(DAT_10015cac + ((int)DAT_10015cac >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10015cac & 0x8000001f;
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
          iVar12 = (int)(DAT_10015cac + ((int)DAT_10015cac >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10015cac & 0x8000001f;
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
          iVar12 = DAT_10015cb4 + DAT_10015ca0;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1000add0;
      }
      local_14 = DAT_10015ca4 - local_14;
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
      iVar2 = DAT_10015ca8 - 1;
      iVar12 = (int)(DAT_10015ca8 + ((int)DAT_10015ca8 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10015ca8 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_1000abbc;
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
LAB_1000abbc:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10015cac + 1;
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
LAB_1000add0:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10015cac & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10015cb0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10015cb0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FID_conflict:__ld12tod @ 1000ae13 */

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
        goto LAB_1000b312;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10015cc0 - 1;
    iVar4 = (int)(DAT_10015cc0 + ((int)DAT_10015cc0 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10015cc0 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1000af46;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1000af4d;
LAB_1000af46:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1000af4d:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1000af5b;
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
LAB_1000af5b:
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
    if (iVar12 < (int)(DAT_10015cbc - DAT_10015cc0)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10015cbc < iVar12) {
        if (iVar12 < DAT_10015cb8) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10015ccc;
          iVar2 = (int)(DAT_10015cc4 + ((int)DAT_10015cc4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10015cc4 & 0x8000001f;
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
          iVar12 = (int)(DAT_10015cc4 + ((int)DAT_10015cc4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10015cc4 & 0x8000001f;
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
          iVar12 = DAT_10015ccc + DAT_10015cb8;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1000b312;
      }
      local_14 = DAT_10015cbc - local_14;
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
      iVar2 = DAT_10015cc0 - 1;
      iVar12 = (int)(DAT_10015cc0 + ((int)DAT_10015cc0 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10015cc0 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_1000b0fe;
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
LAB_1000b0fe:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10015cc4 + 1;
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
LAB_1000b312:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10015cc4 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10015cc8 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10015cc8 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FUN_1000b355 @ 1000b355 */

void __cdecl
FUN_1000b355(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
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
  undefined4 *puVar10;
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
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
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
LAB_1000b3da:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_1000b3f7:
        iVar15 = 3;
        goto LAB_1000b3f9;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_1000b40e:
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
          if (cVar8 == '0') goto LAB_1000b428;
          goto LAB_1000b5b3;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_1000b3da;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1000b3f7;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1000b45f;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_1000b48f;
      if (cVar8 == '0') goto LAB_1000b428;
      goto LAB_1000b46f;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1000b3f7;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1000b40e;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_1000b5de;
LAB_1000b428:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_1000b3da;
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
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1000b502;
LAB_1000b45f:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_1000b3da;
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
LAB_1000b502:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_1000b48f:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_1000b46f:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_1000b5b3;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_1000b3da;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_1000b3f9;
      }
      goto LAB_1000b5de;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_1000b59a;
        if (cVar8 == '-') goto LAB_1000b58e;
LAB_1000b581:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_1000b5de;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_1000b3da;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1000b581;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1000b5b3;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_1000b640;
    default:
      goto switchD_1000b3e6_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_1000b59a:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_1000b5de;
LAB_1000b58e:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_1000b3da;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_1000b3e6_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_1000b3da;
      goto LAB_1000b5de;
    }
    iVar15 = 9;
LAB_1000b3f9:
    param_3 = pcVar18 + -1;
    goto LAB_1000b3da;
  }
  puVar10 = (undefined4 *)FUN_100067c6();
  *puVar10 = 0x16;
  FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_1000b9d6;
LAB_1000b640:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_1000b65b;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_1000b640;
  }
  local_68 = 0x1451;
LAB_1000b65b:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_1000b5b3:
  param_3 = pcVar18 + -1;
LAB_1000b5de:
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
    if (local_50 == 0) goto LAB_1000b9b8;
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
      if ((int)local_58 < -0x1450) goto LAB_1000b9b8;
      puVar20 = &DAT_10015d20;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_10015e80;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x1000b6e6:
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
LAB_1000b89c:
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
                    if ((short)uVar24 < 1) goto LAB_1000b89c;
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
                  if (0x7ffe < uVar24) goto LAB_1000b95b;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x1000b6e6;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_1000b95b:
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
          goto joined_r0x1000b6e6;
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
LAB_1000b9b8:
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
LAB_1000b9d6:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_1000ba15 @ 1000ba15 */

/* WARNING: Removing unreachable block (ram,0x1000bf06) */
/* WARNING: Removing unreachable block (ram,0x1000bf10) */
/* WARNING: Removing unreachable block (ram,0x1000bf15) */

void __cdecl
FUN_1000ba15(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

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
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
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
    goto LAB_1000c293;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000bb44;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_1000bb44:
          pcVar25 = "1#QNAN";
          goto LAB_1000bb49;
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
LAB_1000bb49:
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
    goto LAB_1000c293;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_10015d20;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_10015e80;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_1000be6a;
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
LAB_1000bd8e:
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
            if ((short)uVar24 < 1) goto LAB_1000bd8e;
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
          if (0x7ffe < uVar24) goto LAB_1000be4e;
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
LAB_1000be4e:
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
LAB_1000be6a:
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
          goto LAB_1000c0d2;
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
LAB_1000bfe0:
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
          if ((short)uVar24 < 1) goto LAB_1000bfe0;
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
        goto LAB_1000c0d2;
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
LAB_1000c0d2:
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
        goto LAB_1000c293;
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
LAB_1000c293:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: fastzero_I @ 1000c2db */

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

/* Function: __VEC_memzero @ 1000c332 */

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

/* Function: __hw_cw @ 1000c3c1 */

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

/* Function: ___hw_cw_sse2 @ 1000c44f */

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

/* Function: __control87 @ 1000c4ef */

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
  if (DAT_10016cd8 != 0) {
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

/* Function: strtoxl @ 1000c7f2 */

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
    puVar3 = (undefined4 *)FUN_100067c6();
    *puVar3 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_1000c8a9:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_1000c8a9;
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
      goto LAB_1000c90f;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_1000c90f;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_1000c90f;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_1000c90f:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_1000c969:
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
          puVar3 = (undefined4 *)FUN_100067c6();
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
    if ((uint)param_4 <= uVar6) goto LAB_1000c969;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_1000c969;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: _strtol @ 1000ca1d */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10016a48 == 0) {
    ppuVar2 = &PTR_DAT_10015640;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: ___ascii_stricmp @ 1000ca46 */

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}



/**************************************************/

/* Function: __stricmp_l @ 1000ca7b */

/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_100067c6();
    *puVar1 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_100067c6();
    *puVar1 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      do {
        iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
        _Str1 = _Str1 + 1;
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}



/**************************************************/

/* Function: __stricmp @ 1000cb4e */

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10016a48 == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_100067c6();
    *puVar1 = 0x16;
    FUN_100064d0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}



/**************************************************/

/* Function: __alloca_probe_16 @ 1000cba0 */

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

/* Function: __alloca_probe_8 @ 1000cbb6 */

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

/* Function: ___ansicp @ 1000cbcc */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___convertcp @ 1000cc13 */

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
  
  local_8 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1000cdb3;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1000cdb3;
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
LAB_1000ccf3:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_1000ccf3;
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
LAB_1000cdb3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___mtold12 @ 1000cdc5 */

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
  
  uVar7 = DAT_100150b0 ^ (uint)&stack0xfffffffc;
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

/* Function: ___set_fpsr_sse2 @ 1000cf91 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_10016cd8 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_10016054 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/**************************************************/

/* Function: __alloca_probe @ 1000d010 */

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

/* Function: ___ascii_strnicmp @ 1000d040 */

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
      if (bVar2 != (byte)uVar3) goto LAB_1000d091;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1000d091:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: FUN_1000d180 @ 1000d180 */

void __cdecl FUN_1000d180(DWORD param_1,DWORD param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint unaff_EBX;
  SIZE_T unaff_ESI;
  uint uVar3;
  undefined4 local_4;
  
  local_4 = 0;
  do {
    uVar3 = 0;
    do {
      iVar1 = _rand();
      if ((unaff_EBX == 0) || (iVar1 * 0x10000 + unaff_ESI < unaff_EBX)) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 1000);
    pvVar2 = VirtualAlloc((LPVOID)(iVar1 * 0x10000),unaff_ESI,param_1,param_2);
    if ((pvVar2 != (LPVOID)0x0) || (local_4 = local_4 + 1, 999 < local_4)) {
      return;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_1000d1e0 @ 1000d1e0 */

void __cdecl FUN_1000d1e0(DWORD param_1,DWORD param_2)

{
  SIZE_T in_EAX;
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  uVar1 = FID_conflict___time32((__time32_t *)0x0);
  FUN_100116d2(uVar1 % 0x3c);
  uVar1 = 0;
  do {
    uVar4 = 0;
    do {
      iVar2 = _rand();
      if (iVar2 * 0x10000 + in_EAX < 0x40000000) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 1000);
    pvVar3 = VirtualAlloc((LPVOID)(iVar2 * 0x10000),in_EAX,param_1,param_2);
    if (pvVar3 != (LPVOID)0x0) {
      return;
    }
    uVar1 = uVar1 + 1;
    if (999 < uVar1) {
      iVar2 = FUN_1000d180(param_1,param_2);
      if (iVar2 == 0) {
        VirtualAlloc((LPVOID)0x0,in_EAX,param_1,param_2);
      }
      return;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_1000d270 @ 1000d270 */

bool FUN_1000d270(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  if ((*param_1 & 0x11) != 0) {
    return true;
  }
  iVar3 = 0;
  iVar5 = *(int *)(param_1 + 1);
  local_8 = 0;
  if (*(int *)(param_1 + 3) == 0) {
LAB_1000d30d:
    return (bool)('\x01' - ((*param_1 & 0xe) != 0));
  }
  iVar1 = *(int *)(param_1 + 5);
  do {
    iVar4 = *(int *)(iVar3 + 4 + iVar1);
    if ((iVar4 == 2) || (iVar4 == 0x20)) {
      uVar2 = 0;
      iVar4 = 0;
      if (*(int *)(iVar3 + iVar1) != 0) {
        do {
          iVar4 = iVar4 + (uint)*(byte *)(uVar2 + iVar5);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(iVar3 + *(int *)(param_1 + 5)));
      }
      if (*(int *)(iVar3 + 8 + iVar1) != iVar4) {
        *param_1 = *param_1 | 4;
        goto LAB_1000d30d;
      }
    }
    iVar5 = iVar5 + *(int *)(iVar3 + iVar1);
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 0xc;
    if (*(uint *)(param_1 + 3) <= local_8) {
      return (bool)('\x01' - ((*param_1 & 0xe) != 0));
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_1000d330 @ 1000d330 */

undefined4 __cdecl FUN_1000d330(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    iVar1 = *(int *)(param_1 + 2);
    *param_2 = iVar1;
    if (*(int *)(param_1 + 2) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 2) + 0x3c) + iVar1;
      param_2[1] = iVar3;
      if (*(short *)(iVar3 + 0x14) != 0) {
        param_2[2] = *(int *)(iVar3 + 0xa0) + iVar1;
        param_2[3] = *(int *)(iVar3 + 0xa4);
        param_2[4] = *(int *)(iVar3 + 0x80) + iVar1;
        param_2[5] = *(int *)(iVar3 + 0x84);
        param_2[6] = *(int *)(iVar3 + 0x78) + iVar1;
        param_2[7] = *(int *)(iVar3 + 0x7c);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/**************************************************/

/* Function: FUN_1000d3c0 @ 1000d3c0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void * __cdecl FUN_1000d3c0(void *param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  void *pvVar8;
  int iVar9;
  int *piVar10;
  HMODULE hModule;
  LPCSTR lpProcName;
  FARPROC pFVar11;
  DWORD DVar12;
  ushort uVar13;
  uint uVar14;
  LPVOID pvVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined8 uVar18;
  uint local_10b0;
  int *local_10ac;
  int local_10a4 [12];
  int local_1074;
  int local_1070;
  int *local_106c;
  int local_1064;
  undefined4 local_1054 [1041];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10011846;
  pvStack_c = ExceptionList;
  uStack_10 = 0x1000d3df;
  iVar9 = *param_2;
  uVar5 = iVar9 + 0xfU & 0xfffffff8;
  uVar7 = *(undefined4 *)(uVar5 + (int)param_2);
  iVar3 = *(int *)(uVar5 + 4 + (int)param_2);
  ExceptionList = &pvStack_c;
  FUN_10011430(local_1054);
  local_4 = 0;
  puVar6 = operator_new(9);
  if (puVar6 != (uint *)0x0) {
    *(char *)((int)puVar6 + 7) = (char)((uint)iVar3 >> 0x18);
    *(char *)((int)puVar6 + 6) = (char)((uint)iVar3 >> 0x10);
    *(char *)((int)puVar6 + 5) = (char)((uint)iVar3 >> 8);
    *(char *)(puVar6 + 1) = (char)iVar3;
    *(undefined1 *)(puVar6 + 2) = 0;
    uVar18 = __allshr(0x18,iVar3);
    *(char *)((int)puVar6 + 3) = (char)uVar18;
    uVar18 = __allshr(0x10,iVar3);
    *(char *)((int)puVar6 + 2) = (char)uVar18;
    uVar18 = __allshr(8,iVar3);
    *(char *)((int)puVar6 + 1) = (char)uVar18;
    *(char *)puVar6 = (char)uVar7;
    FUN_10011450(local_1054,puVar6);
    _free(puVar6);
    uVar7 = FUN_100111e0(local_1054,(uint *)(param_2 + 2),iVar9 + 7U & 0xfffffff8);
    if ((char)uVar7 == '\x01') {
      uVar5 = param_2[2];
      iVar9 = param_2[3];
      *(int *)((int)param_1 + 6) = iVar9;
      puVar6 = (uint *)(param_2 + 4);
      pvVar8 = operator_new(iVar9 * 0xc);
      *(void **)((int)param_1 + 10) = pvVar8;
      if (pvVar8 != (void *)0x0) {
        uVar14 = 0;
        if (*(int *)((int)param_1 + 6) != 0) {
          iVar9 = 0;
          do {
            *(uint *)(iVar9 + *(int *)((int)param_1 + 10)) = *puVar6;
            *(uint *)(*(int *)((int)param_1 + 10) + 4 + iVar9) = puVar6[1];
            *(uint *)(*(int *)((int)param_1 + 10) + 8 + iVar9) = puVar6[2];
            puVar6 = puVar6 + 3;
            uVar14 = uVar14 + 1;
            iVar9 = iVar9 + 0xc;
          } while (uVar14 < *(uint *)((int)param_1 + 6));
        }
        uVar14 = *puVar6;
        iVar9 = FUN_1000d1e0(0x3000,0x40);
        *(int *)((int)param_1 + 2) = iVar9;
        if (iVar9 != 0) {
          FUN_10011490(local_10a4);
          local_4 = CONCAT31(local_4._1_3_,1);
          iVar9 = FUN_10011510(local_10a4,(int)(puVar6 + 1),uVar5);
          if (iVar9 == 0) goto LAB_1000d632;
          iVar9 = FUN_10011540(local_10a4,*(int *)((int)param_1 + 2),
                               (uVar14 - (uVar14 & 0xffff)) + 0x10000);
          if (iVar9 == 0) {
            VirtualFree(*(LPVOID *)((int)param_1 + 2),0,0x8000);
            _free(*(void **)((int)param_1 + 10));
            VirtualFree(param_2,0,0x8000);
            _free(param_1);
          }
          else {
            iVar9 = FUN_100115d0(local_10a4);
            if (iVar9 != 0) {
              puVar16 = (undefined4 *)((int)(puVar6 + 1) + (uVar5 + 7 & 0xfffffff8));
              pvVar8 = operator_new(*(int *)((int)param_1 + 6) << 2);
              if (pvVar8 != (void *)0x0) {
                uVar5 = 0;
                if (*(int *)((int)param_1 + 6) != 0) {
                  do {
                    *(undefined4 *)((int)pvVar8 + uVar5 * 4) = *puVar16;
                    puVar16 = puVar16 + 1;
                    uVar5 = uVar5 + 1;
                  } while (uVar5 < *(uint *)((int)param_1 + 6));
                }
                VirtualFree(param_2,0,0x8000);
                iVar9 = FUN_1000d330((int)param_1,&local_1074);
                if (iVar9 == 0) {
                  _free(pvVar8);
                  pvVar15 = *(LPVOID *)((int)param_1 + 2);
LAB_1000d93d:
                  VirtualFree(pvVar15,0,0x8000);
                }
                else {
                  if ((local_106c == (int *)0x0) || (local_1070 == 0)) {
                    _free(pvVar8);
                    pvVar15 = *(LPVOID *)((int)param_1 + 2);
                    goto LAB_1000d93d;
                  }
                  uVar5 = local_106c[1];
                  while (8 < uVar5) {
                    local_10ac = local_106c + 1;
                    uVar14 = *local_10ac - 8U >> 1;
                    uVar5 = 0;
                    if (uVar14 != 0) {
                      do {
                        uVar2 = *(ushort *)((int)local_106c + uVar5 * 2 + 8);
                        uVar13 = uVar2 & 0xf000;
                        if ((uVar13 == 0x3000) || (uVar13 == 0xa000)) {
                          piVar10 = (int *)((uVar2 & 0xfff) + *(int *)((int)param_1 + 2) +
                                           *local_106c);
                          *piVar10 = (*(int *)((int)param_1 + 2) - *(int *)(local_1070 + 0x34)) +
                                     *piVar10;
                        }
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < uVar14);
                    }
                    local_106c = (int *)((int)local_106c + *local_10ac);
                    uVar5 = local_106c[1];
                  }
                  if (local_1064 != 0) {
                    piVar10 = (int *)(local_1064 + 0x10);
                    iVar9 = *(int *)(local_1064 + 0x10);
                    while (iVar9 != 0) {
                      hModule = GetModuleHandleA((LPCSTR)(piVar10[-1] + *(int *)((int)param_1 + 2)))
                      ;
                      piVar17 = (int *)(*piVar10 + *(int *)((int)param_1 + 2));
                      puVar6 = (uint *)(piVar10[-4] + *(int *)((int)param_1 + 2));
                      iVar9 = *piVar17;
                      while (iVar9 != 0) {
                        uVar5 = *puVar6;
                        if ((int)uVar5 < 0) {
                          lpProcName = (LPCSTR)(uVar5 & 0xffff);
                        }
                        else {
                          lpProcName = (LPCSTR)(*(int *)((int)param_1 + 2) + uVar5 + 2);
                        }
                        pFVar11 = GetProcAddress(hModule,lpProcName);
                        *piVar17 = (int)pFVar11;
                        piVar1 = piVar17 + 1;
                        piVar17 = piVar17 + 1;
                        puVar6 = puVar6 + 1;
                        iVar9 = *piVar1;
                      }
                      piVar17 = piVar10 + 5;
                      piVar10 = piVar10 + 5;
                      iVar9 = *piVar17;
                    }
                  }
                  pvVar15 = *(LPVOID *)((int)param_1 + 2);
                  iVar9 = 0;
                  local_10b0 = 0;
                  if (*(int *)((int)param_1 + 6) != 0) {
                    do {
                      uVar5 = *(uint *)(*(int *)((int)param_1 + 10) + 4 + iVar9);
                      DVar12 = GetVersion();
                      if ((((int)DVar12 < 0) && ((uVar5 & 0xf) != uVar5)) &&
                         (uVar14 = uVar5 & 0x30, uVar5 = 4, uVar14 != 0)) {
                        uVar5 = 2;
                      }
                      VirtualAlloc(pvVar15,*(SIZE_T *)(*(int *)((int)param_1 + 10) + iVar9),0x1000,
                                   uVar5);
                      iVar3 = *(int *)((int)param_1 + 10) + iVar9;
                      iVar4 = *(int *)(iVar3 + 4);
                      if ((iVar4 == 2) || (iVar4 == 0x20)) {
                        *(undefined4 *)(iVar3 + 8) = 0;
                        uVar5 = 0;
                        if (*(int *)(iVar9 + *(int *)((int)param_1 + 10)) != 0) {
                          do {
                            *(uint *)(*(int *)((int)param_1 + 10) + 8 + iVar9) =
                                 *(int *)(*(int *)((int)param_1 + 10) + 8 + iVar9) +
                                 (uint)*(byte *)(uVar5 + (int)pvVar15);
                            uVar5 = uVar5 + 1;
                          } while (uVar5 < *(uint *)(iVar9 + *(int *)((int)param_1 + 10)));
                        }
                      }
                      pvVar15 = (LPVOID)((int)pvVar15 +
                                        *(int *)(*(int *)((int)param_1 + 10) + iVar9));
                      local_10b0 = local_10b0 + 1;
                      iVar9 = iVar9 + 0xc;
                    } while (local_10b0 < *(uint *)((int)param_1 + 6));
                  }
                  if ((*(int *)(local_1070 + 0x28) == 0) ||
                     (iVar9 = (*(code *)(*(int *)((int)param_1 + 2) + *(int *)(local_1070 + 0x28)))
                                        (*(int *)((int)param_1 + 2),1,0), iVar9 != 0)) {
                    uVar5 = 0;
                    if (*(int *)((int)param_1 + 6) != 0) {
                      iVar9 = 0;
                      do {
                        *(undefined4 *)(*(int *)((int)param_1 + 10) + 4 + iVar9) =
                             *(undefined4 *)((int)pvVar8 + uVar5 * 4);
                        uVar5 = uVar5 + 1;
                        iVar9 = iVar9 + 0xc;
                      } while (uVar5 < *(uint *)((int)param_1 + 6));
                    }
                    _free(pvVar8);
                    local_4 = local_4 & 0xffffff00;
                    FUN_100114e0(local_10a4);
                    local_4 = 0xffffffff;
                    FUN_10011440(local_1054);
                    ExceptionList = pvStack_c;
                    return param_1;
                  }
                  _free(pvVar8);
                  VirtualFree(*(LPVOID *)((int)param_1 + 2),0,0x8000);
                }
                _free(*(void **)((int)param_1 + 10));
                _free(param_1);
                goto LAB_1000d951;
              }
            }
LAB_1000d632:
            VirtualFree(*(LPVOID *)((int)param_1 + 2),0,0x8000);
            _free(*(void **)((int)param_1 + 10));
            VirtualFree(param_2,0,0x8000);
            _free(param_1);
          }
LAB_1000d951:
          local_4 = local_4 & 0xffffff00;
          FUN_100114e0(local_10a4);
          goto LAB_1000d962;
        }
        _free(*(void **)((int)param_1 + 10));
      }
      VirtualFree(param_2,0,0x8000);
      _free(param_1);
      goto LAB_1000d962;
    }
  }
  VirtualFree(param_2,0,0x8000);
  _free(param_1);
LAB_1000d962:
  local_4 = 0xffffffff;
  FUN_10011440(local_1054);
  ExceptionList = pvStack_c;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1000d9a0 @ 1000d9a0 */

void * FUN_1000d9a0(HMODULE param_1,LPCSTR param_2,LPCSTR param_3)

{
  byte *_Memory;
  BOOL BVar1;
  HRSRC pHVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  DWORD DVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *local_8;
  int local_4;
  
  _Memory = operator_new(0xe);
  if (_Memory == (byte *)0x0) {
    return (void *)0x0;
  }
  _Memory[0] = 0;
  _Memory[1] = 0;
  BVar1 = IsDebuggerPresent();
  if (BVar1 != 0) {
    *_Memory = *_Memory | 0x10;
  }
  if (param_3 == (LPCSTR)0x2) {
    pHVar2 = FindResourceA(param_1,param_2,(LPCSTR)0x2);
    if ((pHVar2 != (HRSRC)0x0) && (pvVar3 = LoadResource(param_1,pHVar2), pvVar3 != (HGLOBAL)0x0)) {
      piVar4 = LockResource(pvVar3);
      piVar5 = (int *)(piVar4[1] * piVar4[2]);
      if (*(short *)((int)piVar4 + 0xe) == 0x20) {
        if (*piVar4 == 0x28) {
          piVar5 = piVar4 + (int)piVar5 + 0xd;
        }
        else {
          piVar5 = (int *)(*piVar4 + (int)piVar5 * 4 + (int)piVar4);
        }
      }
      else {
        param_1 = (HMODULE)(piVar4[1] * 3);
        if (((uint)param_1 & 3) != 0) {
          param_1 = (HMODULE)((int)param_1 + (4 - ((uint)param_1 & 3)));
        }
        local_4 = piVar4[2] * (int)param_1 + *piVar4 + (int)piVar4;
      }
      local_8 = (byte *)FUN_1000d1e0(0x3000,0x40);
      if (local_8 != (byte *)0x0) {
        if (*(short *)((int)piVar4 + 0xe) == 0x20) {
          param_1 = (HMODULE)0x0;
          if (0 < piVar4[2]) {
            iVar9 = piVar4[1];
            pbVar6 = local_8;
            do {
              iVar12 = 0;
              piVar5 = piVar5 + -iVar9;
              if (0 < iVar9) {
                pcVar13 = (char *)((int)piVar5 + 2);
                do {
                  *pbVar6 = pcVar13[1];
                  pbVar6[1] = (pcVar13[-1] & 3U | *pcVar13 << 2) << 4 | pcVar13[-2] & 0xfU;
                  iVar9 = piVar4[1];
                  pbVar6 = pbVar6 + 2;
                  iVar12 = iVar12 + 1;
                  pcVar13 = pcVar13 + 4;
                } while (iVar12 < iVar9);
              }
              param_1 = (HMODULE)((int)&param_1->unused + 1);
            } while ((int)param_1 < piVar4[2]);
            DeleteObject(pvVar3);
            goto LAB_1000dc53;
          }
        }
        else {
          param_3 = (LPCSTR)0x0;
          if (0 < piVar4[2]) {
            iVar9 = piVar4[1];
            pbVar11 = (byte *)(local_4 + 1);
            pbVar6 = local_8;
            do {
              pbVar11 = pbVar11 + -(int)param_1;
              iVar12 = 0;
              pbVar14 = pbVar11;
              if (0 < iVar9) {
                do {
                  *pbVar6 = (pbVar14[1] << 2 | *pbVar14 & 3) << 4 | pbVar14[-1] & 0xf;
                  iVar9 = piVar4[1];
                  pbVar6 = pbVar6 + 1;
                  iVar12 = iVar12 + 1;
                  pbVar14 = pbVar14 + 3;
                } while (iVar12 < iVar9);
              }
              param_3 = param_3 + 1;
            } while ((int)param_3 < piVar4[2]);
          }
        }
        DeleteObject(pvVar3);
LAB_1000dc53:
        pvVar8 = FUN_1000d3c0(_Memory,(int *)local_8);
        return pvVar8;
      }
LAB_1000daa9:
      _free(_Memory);
      return (void *)0x0;
    }
  }
  else {
    pHVar2 = FindResourceA(param_1,param_2,param_3);
    if ((pHVar2 != (HRSRC)0x0) && (pvVar3 = LoadResource(param_1,pHVar2), pvVar3 != (HGLOBAL)0x0)) {
      DVar7 = SizeofResource(param_1,pHVar2);
      if (DVar7 == 0) {
        _free(_Memory);
        return (void *)0x0;
      }
      pbVar6 = LockResource(pvVar3);
      if (pbVar6 != (byte *)0x0) {
        local_8 = (byte *)FUN_1000d1e0(0x3000,0x40);
        if (local_8 == (byte *)0x0) {
          _free(_Memory);
          return (void *)0x0;
        }
        pbVar11 = local_8;
        for (uVar10 = DVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pbVar11 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + 4;
          pbVar11 = pbVar11 + 4;
        }
        for (uVar10 = DVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pbVar11 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar11 = pbVar11 + 1;
        }
        goto LAB_1000dc53;
      }
      goto LAB_1000daa9;
    }
  }
  _free(_Memory);
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1000dc80 @ 1000dc80 */

int FUN_1000dc80(uint param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_2c;
  int local_20 [6];
  int local_8;
  
  uVar6 = param_1;
  uVar9 = 0;
  local_2c = 0;
  iVar7 = FUN_1000d330(param_1,local_20);
  if (iVar7 == 0) {
    return 0;
  }
  if (local_8 != 0) {
    iVar7 = *(int *)(param_1 + 2);
    iVar1 = *(int *)(local_8 + 0x1c);
    uVar2 = *(uint *)(local_8 + 0x14);
    if (((uint)param_2 & 0xffff0000) == 0) {
      uVar2 = (int)param_2 - *(int *)(local_8 + 0x10);
    }
    else {
      iVar3 = *(int *)(param_1 + 2);
      iVar4 = *(int *)(local_8 + 0x20);
      iVar5 = *(int *)(local_8 + 0x24);
      if (*(int *)(local_8 + 0x18) != 0) {
        do {
          iVar8 = __stricmp(param_2,(char *)(*(int *)(iVar4 + iVar3 + uVar9 * 4) +
                                            *(int *)(param_1 + 2)));
          if (iVar8 == 0) {
            uVar2 = *(int *)(iVar5 + iVar3 + uVar9 * 4) - *(int *)(local_8 + 0x10);
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(local_8 + 0x18));
      }
    }
    param_1 = uVar2;
    if ((param_1 < *(uint *)(local_8 + 0x14)) &&
       (local_2c = *(int *)(iVar1 + iVar7 + param_1 * 4) + *(int *)(uVar6 + 2),
       local_2c == *(int *)(uVar6 + 2))) {
      local_2c = 0;
    }
  }
  return local_2c;
}



/**************************************************/

/* Function: FUN_1000dd60 @ 1000dd60 */

undefined4 FUN_1000dd60(void *param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  iVar1 = FUN_1000d330((int)param_1,&local_20);
  if (((iVar1 != 0) && (local_1c != 0)) && (*(int *)(local_1c + 0x28) != 0)) {
    (*(code *)(*(int *)((int)param_1 + 2) + *(int *)(local_1c + 0x28)))
              (*(int *)((int)param_1 + 2),0,0);
  }
  VirtualFree(*(LPVOID *)((int)param_1 + 2),0,0x8000);
  _free(*(void **)((int)param_1 + 10));
  _free(param_1);
  return 1;
}



/**************************************************/

/* Function: FUN_1000ddd0 @ 1000ddd0 */

void __thiscall FUN_1000ddd0(void *this,uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_1 ^ *(uint *)this;
  uVar6 = (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
           *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
          *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
          *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 4) ^ *param_2;
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 8);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0xc);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x10);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x14);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x18);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x1c);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x20);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x24);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x28);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x2c);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x30);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x34);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x38);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x3c);
  iVar1 = *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448);
  iVar2 = *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48);
  uVar3 = *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848);
  iVar4 = *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48);
  uVar5 = *(uint *)((int)this + 0x40);
  *param_1 = *(uint *)((int)this + 0x44) ^ uVar6;
  *param_2 = uVar7 ^ (iVar1 + iVar2 ^ uVar3) + iVar4 ^ uVar5;
  return;
}



/**************************************************/

/* Function: FUN_1000e1a0 @ 1000e1a0 */

void __thiscall FUN_1000e1a0(void *this,uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)((int)this + 0x44) ^ *param_1;
  uVar6 = (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
           *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
          *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
          *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x40) ^ *param_2;
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x3c);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x38);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x34);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x30);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x2c);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x28);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x24);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x20);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x1c);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x18);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x14);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0x10);
  uVar7 = uVar7 ^ (*(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 0xc);
  uVar6 = uVar6 ^ (*(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)((int)this + 8);
  iVar1 = *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448);
  iVar2 = *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48);
  uVar3 = *(uint *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848);
  iVar4 = *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48);
  uVar5 = *(uint *)((int)this + 4);
  *param_1 = *(uint *)this ^ uVar6;
  *param_2 = uVar7 ^ (iVar1 + iVar2 ^ uVar3) + iVar4 ^ uVar5;
  return;
}



/**************************************************/

/* Function: FUN_1000e570 @ 1000e570 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_1000e570(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_1000 [1024];
  
  local_1000[0] = 0xd1310ba6;
  local_1000[1] = 0x98dfb5ac;
  local_1000[2] = 0x2ffd72db;
  local_1000[3] = 0xd01adfb7;
  local_1000[4] = 0xb8e1afed;
  local_1000[5] = 0x6a267e96;
  local_1000[6] = 0xba7c9045;
  local_1000[7] = 0xf12c7f99;
  local_1000[8] = 0x24a19947;
  local_1000[9] = 0xb3916cf7;
  local_1000[10] = 0x801f2e2;
  local_1000[0xb] = 0x858efc16;
  local_1000[0xc] = 0x636920d8;
  local_1000[0xd] = 0x71574e69;
  local_1000[0xe] = 0xa458fea3;
  local_1000[0xf] = 0xf4933d7e;
  local_1000[0x10] = 0xd95748f;
  local_1000[0x11] = 0x728eb658;
  local_1000[0x12] = 0x718bcd58;
  local_1000[0x13] = 0x82154aee;
  local_1000[0x14] = 0x7b54a41d;
  local_1000[0x15] = 0xc25a59b5;
  local_1000[0x16] = 0x9c30d539;
  local_1000[0x17] = 0x2af26013;
  local_1000[0x18] = 0xc5d1b023;
  local_1000[0x19] = 0x286085f0;
  local_1000[0x1a] = 0xca417918;
  local_1000[0x1b] = 0xb8db38ef;
  local_1000[0x1c] = 0x8e79dcb0;
  local_1000[0x1d] = 0x603a180e;
  local_1000[0x1e] = 0x6c9e0e8b;
  local_1000[0x1f] = 0xb01e8a3e;
  local_1000[0x20] = 0xd71577c1;
  local_1000[0x21] = 0xbd314b27;
  local_1000[0x22] = 0x78af2fda;
  local_1000[0x23] = 0x55605c60;
  local_1000[0x24] = 0xe65525f3;
  local_1000[0x25] = 0xaa55ab94;
  local_1000[0x26] = 0x57489862;
  local_1000[0x27] = 0x63e81440;
  local_1000[0x28] = 0x55ca396a;
  local_1000[0x29] = 0x2aab10b6;
  local_1000[0x2a] = 0xb4cc5c34;
  local_1000[0x2b] = 0x1141e8ce;
  local_1000[0x2c] = 0xa15486af;
  local_1000[0x2d] = 0x7c72e993;
  local_1000[0x2e] = 0xb3ee1411;
  local_1000[0x2f] = 0x636fbc2a;
  local_1000[0x30] = 0x2ba9c55d;
  local_1000[0x31] = 0x741831f6;
  local_1000[0x32] = 0xce5c3e16;
  local_1000[0x33] = 0x9b87931e;
  local_1000[0x34] = 0xafd6ba33;
  local_1000[0x35] = 0x6c24cf5c;
  local_1000[0x36] = 0x7a325381;
  local_1000[0x37] = 0x28958677;
  local_1000[0x38] = 0x3b8f4898;
  local_1000[0x39] = 0x6b4bb9af;
  local_1000[0x3a] = 0xc4bfe81b;
  local_1000[0x3b] = 0x66282193;
  local_1000[0x3c] = 0x61d809cc;
  local_1000[0x3d] = 0xfb21a991;
  local_1000[0x3e] = 0x487cac60;
  local_1000[0x3f] = 0x5dec8032;
  local_1000[0x40] = 0xef845d5d;
  local_1000[0x41] = 0xe98575b1;
  local_1000[0x42] = 0xdc262302;
  local_1000[0x43] = 0xeb651b88;
  local_1000[0x44] = 0x23893e81;
  local_1000[0x45] = 0xd396acc5;
  local_1000[0x46] = 0xf6d6ff3;
  local_1000[0x47] = 0x83f44239;
  local_1000[0x48] = 0x2e0b4482;
  local_1000[0x49] = 0xa4842004;
  local_1000[0x4a] = 0x69c8f04a;
  local_1000[0x4b] = 0x9e1f9b5e;
  local_1000[0x4c] = 0x21c66842;
  local_1000[0x4d] = 0xf6e96c9a;
  local_1000[0x4e] = 0x670c9c61;
  local_1000[0x4f] = 0xabd388f0;
  local_1000[0x50] = 0x6a51a0d2;
  local_1000[0x51] = 0xd8542f68;
  local_1000[0x52] = 0x960fa728;
  local_1000[0x53] = 0xab5133a3;
  local_1000[0x54] = 0x6eef0b6c;
  local_1000[0x55] = 0x137a3be4;
  local_1000[0x56] = 0xba3bf050;
  local_1000[0x57] = 0x7efb2a98;
  local_1000[0x58] = 0xa1f1651d;
  local_1000[0x59] = 0x39af0176;
  local_1000[0x5a] = 0x66ca593e;
  local_1000[0x5b] = 0x82430e88;
  local_1000[0x5c] = 0x8cee8619;
  local_1000[0x5d] = 0x456f9fb4;
  local_1000[0x5e] = 0x7d84a5c3;
  local_1000[0x5f] = 0x3b8b5ebe;
  local_1000[0x60] = 0xe06f75d8;
  local_1000[0x61] = 0x85c12073;
  local_1000[0x62] = 0x401a449f;
  local_1000[99] = 0x56c16aa6;
  local_1000[100] = 0x4ed3aa62;
  local_1000[0x65] = 0x363f7706;
  local_1000[0x66] = 0x1bfedf72;
  local_1000[0x67] = 0x429b023d;
  local_1000[0x68] = 0x37d0d724;
  local_1000[0x69] = 0xd00a1248;
  local_1000[0x6a] = 0xdb0fead3;
  local_1000[0x6b] = 0x49f1c09b;
  local_1000[0x6c] = 0x75372c9;
  local_1000[0x6d] = 0x80991b7b;
  local_1000[0x6e] = 0x25d479d8;
  local_1000[0x6f] = 0xf6e8def7;
  local_1000[0x70] = 0xe3fe501a;
  local_1000[0x71] = 0xb6794c3b;
  local_1000[0x72] = 0x976ce0bd;
  local_1000[0x73] = 0x4c006ba;
  local_1000[0x74] = 0xc1a94fb6;
  local_1000[0x75] = 0x409f60c4;
  local_1000[0x76] = 0x5e5c9ec2;
  local_1000[0x77] = 0x196a2463;
  local_1000[0x78] = 0x68fb6faf;
  local_1000[0x79] = 0x3e6c53b5;
  local_1000[0x7a] = 0x1339b2eb;
  local_1000[0x7b] = 0x3b52ec6f;
  local_1000[0x7c] = 0x6dfc511f;
  local_1000[0x7d] = 0x9b30952c;
  local_1000[0x7e] = 0xcc814544;
  local_1000[0x7f] = 0xaf5ebd09;
  local_1000[0x80] = 0xbee3d004;
  local_1000[0x81] = 0xde334afd;
  local_1000[0x82] = 0x660f2807;
  local_1000[0x83] = 0x192e4bb3;
  local_1000[0x84] = 0xc0cba857;
  local_1000[0x85] = 0x45c8740f;
  local_1000[0x86] = 0xd20b5f39;
  local_1000[0x87] = 0xb9d3fbdb;
  local_1000[0x88] = 0x5579c0bd;
  local_1000[0x89] = 0x1a60320a;
  local_1000[0x8a] = 0xd6a100c6;
  local_1000[0x8b] = 0x402c7279;
  local_1000[0x8c] = 0x679f25fe;
  local_1000[0x8d] = 0xfb1fa3cc;
  local_1000[0x8e] = 0x8ea5e9f8;
  local_1000[0x8f] = 0xdb3222f8;
  local_1000[0x90] = 0x3c7516df;
  local_1000[0x91] = 0xfd616b15;
  local_1000[0x92] = 0x2f501ec8;
  local_1000[0x93] = 0xad0552ab;
  local_1000[0x94] = 0x323db5fa;
  local_1000[0x95] = 0xfd238760;
  local_1000[0x96] = 0x53317b48;
  local_1000[0x97] = 0x3e00df82;
  local_1000[0x98] = 0x9e5c57bb;
  local_1000[0x99] = 0xca6f8ca0;
  local_1000[0x9a] = 0x1a87562e;
  local_1000[0x9b] = 0xdf1769db;
  local_1000[0x9c] = 0xd542a8f6;
  local_1000[0x9d] = 0x287effc3;
  local_1000[0x9e] = 0xac6732c6;
  local_1000[0x9f] = 0x8c4f5573;
  local_1000[0xa0] = 0x695b27b0;
  local_1000[0xa1] = 0xbbca58c8;
  local_1000[0xa2] = 0xe1ffa35d;
  local_1000[0xa3] = 0xb8f011a0;
  local_1000[0xa4] = 0x10fa3d98;
  local_1000[0xa5] = 0xfd2183b8;
  local_1000[0xa6] = 0x4afcb56c;
  local_1000[0xa7] = 0x2dd1d35b;
  local_1000[0xa8] = 0x9a53e479;
  local_1000[0xa9] = 0xb6f84565;
  local_1000[0xaa] = 0xd28e49bc;
  local_1000[0xab] = 0x4bfb9790;
  local_1000[0xac] = 0xe1ddf2da;
  local_1000[0xad] = 0xa4cb7e33;
  local_1000[0xae] = 0x62fb1341;
  local_1000[0xaf] = 0xcee4c6e8;
  local_1000[0xb0] = 0xef20cada;
  local_1000[0xb1] = 0x36774c01;
  local_1000[0xb2] = 0xd07e9efe;
  local_1000[0xb3] = 0x2bf11fb4;
  local_1000[0xb4] = 0x95dbda4d;
  local_1000[0xb5] = 0xae909198;
  local_1000[0xb6] = 0xeaad8e71;
  local_1000[0xb7] = 0x6b93d5a0;
  local_1000[0xb8] = 0xd08ed1d0;
  local_1000[0xb9] = 0xafc725e0;
  local_1000[0xba] = 0x8e3c5b2f;
  local_1000[0xbb] = 0x8e7594b7;
  local_1000[0xbc] = 0x8ff6e2fb;
  local_1000[0xbd] = 0xf2122b64;
  local_1000[0xbe] = 0x8888b812;
  local_1000[0xbf] = 0x900df01c;
  local_1000[0xc0] = 0x4fad5ea0;
  local_1000[0xc1] = 0x688fc31c;
  local_1000[0xc2] = 0xd1cff191;
  local_1000[0xc3] = 0xb3a8c1ad;
  local_1000[0xc4] = 0x2f2f2218;
  local_1000[0xc5] = 0xbe0e1777;
  local_1000[0xc6] = 0xea752dfe;
  local_1000[199] = 0x8b021fa1;
  local_1000[200] = 0xe5a0cc0f;
  local_1000[0xc9] = 0xb56f74e8;
  local_1000[0xca] = 0x18acf3d6;
  local_1000[0xcb] = 0xce89e299;
  local_1000[0xcc] = 0xb4a84fe0;
  local_1000[0xcd] = 0xfd13e0b7;
  local_1000[0xce] = 0x7cc43b81;
  local_1000[0xcf] = 0xd2ada8d9;
  local_1000[0xd0] = 0x165fa266;
  local_1000[0xd1] = 0x80957705;
  local_1000[0xd2] = 0x93cc7314;
  local_1000[0xd3] = 0x211a1477;
  local_1000[0xd4] = 0xe6ad2065;
  local_1000[0xd5] = 0x77b5fa86;
  local_1000[0xd6] = 0xc75442f5;
  local_1000[0xd7] = 0xfb9d35cf;
  local_1000[0xd8] = 0xebcdaf0c;
  local_1000[0xd9] = 0x7b3e89a0;
  local_1000[0xda] = 0xd6411bd3;
  local_1000[0xdb] = 0xae1e7e49;
  local_1000[0xdc] = 0x250e2d;
  local_1000[0xdd] = 0x2071b35e;
  local_1000[0xde] = 0x226800bb;
  local_1000[0xdf] = 0x57b8e0af;
  local_1000[0xe0] = 0x2464369b;
  local_1000[0xe1] = 0xf009b91e;
  local_1000[0xe2] = 0x5563911d;
  local_1000[0xe3] = 0x59dfa6aa;
  local_1000[0xe4] = 0x78c14389;
  local_1000[0xe5] = 0xd95a537f;
  local_1000[0xe6] = 0x207d5ba2;
  local_1000[0xe7] = 0x2e5b9c5;
  local_1000[0xe8] = 0x83260376;
  local_1000[0xe9] = 0x6295cfa9;
  local_1000[0xea] = 0x11c81968;
  local_1000[0xeb] = 0x4e734a41;
  local_1000[0xec] = 0xb3472dca;
  local_1000[0xed] = 0x7b14a94a;
  local_1000[0xee] = 0x1b510052;
  local_1000[0xef] = 0x9a532915;
  local_1000[0xf0] = 0xd60f573f;
  local_1000[0xf1] = 0xbc9bc6e4;
  local_1000[0xf2] = 0x2b60a476;
  local_1000[0xf3] = 0x81e67400;
  local_1000[0xf4] = 0x8ba6fb5;
  local_1000[0xf5] = 0x571be91f;
  local_1000[0xf6] = 0xf296ec6b;
  local_1000[0xf7] = 0x2a0dd915;
  local_1000[0xf8] = 0xb6636521;
  local_1000[0xf9] = 0xe7b9f9b6;
  local_1000[0xfa] = 0xff34052e;
  local_1000[0xfb] = 0xc5855664;
  local_1000[0xfc] = 0x53b02d5d;
  local_1000[0xfd] = 0xa99f8fa1;
  local_1000[0xfe] = 0x8ba4799;
  local_1000[0xff] = 0x6e85076a;
  local_1000[0x100] = 0x4b7a70e9;
  local_1000[0x101] = 0xb5b32944;
  local_1000[0x102] = 0xdb75092e;
  local_1000[0x103] = 0xc4192623;
  local_1000[0x104] = 0xad6ea6b0;
  local_1000[0x105] = 0x49a7df7d;
  local_1000[0x106] = 0x9cee60b8;
  local_1000[0x107] = 0x8fedb266;
  local_1000[0x108] = 0xecaa8c71;
  local_1000[0x109] = 0x699a17ff;
  local_1000[0x10a] = 0x5664526c;
  local_1000[0x10b] = 0xc2b19ee1;
  local_1000[0x10c] = 0x193602a5;
  local_1000[0x10d] = 0x75094c29;
  local_1000[0x10e] = 0xa0591340;
  local_1000[0x10f] = 0xe4183a3e;
  local_1000[0x110] = 0x3f54989a;
  local_1000[0x111] = 0x5b429d65;
  local_1000[0x112] = 0x6b8fe4d6;
  local_1000[0x113] = 0x99f73fd6;
  local_1000[0x114] = 0xa1d29c07;
  local_1000[0x115] = 0xefe830f5;
  local_1000[0x116] = 0x4d2d38e6;
  local_1000[0x117] = 0xf0255dc1;
  local_1000[0x118] = 0x4cdd2086;
  local_1000[0x119] = 0x8470eb26;
  local_1000[0x11a] = 0x6382e9c6;
  local_1000[0x11b] = 0x21ecc5e;
  local_1000[0x11c] = 0x9686b3f;
  local_1000[0x11d] = 0x3ebaefc9;
  local_1000[0x11e] = 0x3c971814;
  local_1000[0x11f] = 0x6b6a70a1;
  local_1000[0x120] = 0x687f3584;
  local_1000[0x121] = 0x52a0e286;
  local_1000[0x122] = 0xb79c5305;
  local_1000[0x123] = 0xaa500737;
  local_1000[0x124] = 0x3e07841c;
  local_1000[0x125] = 0x7fdeae5c;
  local_1000[0x126] = 0x8e7d44ec;
  local_1000[0x127] = 0x5716f2b8;
  local_1000[0x128] = 0xb03ada37;
  local_1000[0x129] = 0xf0500c0d;
  local_1000[0x12a] = 0xf01c1f04;
  local_1000[299] = 0x200b3ff;
  local_1000[300] = 0xae0cf51a;
  local_1000[0x12d] = 0x3cb574b2;
  local_1000[0x12e] = 0x25837a58;
  local_1000[0x12f] = 0xdc0921bd;
  local_1000[0x130] = 0xd19113f9;
  local_1000[0x131] = 0x7ca92ff6;
  local_1000[0x132] = 0x94324773;
  local_1000[0x133] = 0x22f54701;
  local_1000[0x134] = 0x3ae5e581;
  local_1000[0x135] = 0x37c2dadc;
  local_1000[0x136] = 0xc8b57634;
  local_1000[0x137] = 0x9af3dda7;
  local_1000[0x138] = 0xa9446146;
  local_1000[0x139] = 0xfd0030e;
  local_1000[0x13a] = 0xecc8c73e;
  local_1000[0x13b] = 0xa4751e41;
  local_1000[0x13c] = 0xe238cd99;
  local_1000[0x13d] = 0x3bea0e2f;
  local_1000[0x13e] = 0x3280bba1;
  local_1000[0x13f] = 0x183eb331;
  local_1000[0x140] = 0x4e548b38;
  local_1000[0x141] = 0x4f6db908;
  local_1000[0x142] = 0x6f420d03;
  local_1000[0x143] = 0xf60a04bf;
  local_1000[0x144] = 0x2cb81290;
  local_1000[0x145] = 0x24977c79;
  local_1000[0x146] = 0x5679b072;
  local_1000[0x147] = 0xbcaf89af;
  local_1000[0x148] = 0xde9a771f;
  local_1000[0x149] = 0xd9930810;
  local_1000[0x14a] = 0xb38bae12;
  local_1000[0x14b] = 0xdccf3f2e;
  local_1000[0x14c] = 0x5512721f;
  local_1000[0x14d] = 0x2e6b7124;
  local_1000[0x14e] = 0x501adde6;
  local_1000[0x14f] = 0x9f84cd87;
  local_1000[0x150] = 0x7a584718;
  local_1000[0x151] = 0x7408da17;
  local_1000[0x152] = 0xbc9f9abc;
  local_1000[0x153] = 0xe94b7d8c;
  local_1000[0x154] = 0xec7aec3a;
  local_1000[0x155] = 0xdb851dfa;
  local_1000[0x156] = 0x63094366;
  local_1000[0x157] = 0xc464c3d2;
  local_1000[0x158] = 0xef1c1847;
  local_1000[0x159] = 0x3215d908;
  local_1000[0x15a] = 0xdd433b37;
  local_1000[0x15b] = 0x24c2ba16;
  local_1000[0x15c] = 0x12a14d43;
  local_1000[0x15d] = 0x2a65c451;
  local_1000[0x15e] = 0x50940002;
  local_1000[0x15f] = 0x133ae4dd;
  local_1000[0x160] = 0x71dff89e;
  local_1000[0x161] = 0x10314e55;
  local_1000[0x162] = 0x81ac77d6;
  local_1000[0x163] = 0x5f11199b;
  local_1000[0x164] = 0x43556f1;
  local_1000[0x165] = 0xd7a3c76b;
  local_1000[0x166] = 0x3c11183b;
  local_1000[0x167] = 0x5924a509;
  local_1000[0x168] = 0xf28fe6ed;
  local_1000[0x169] = 0x97f1fbfa;
  local_1000[0x16a] = 0x9ebabf2c;
  local_1000[0x16b] = 0x1e153c6e;
  local_1000[0x16c] = 0x86e34570;
  local_1000[0x16d] = 0xeae96fb1;
  local_1000[0x16e] = 0x860e5e0a;
  local_1000[0x16f] = 0x5a3e2ab3;
  local_1000[0x170] = 0x771fe71c;
  local_1000[0x171] = 0x4e3d06fa;
  local_1000[0x172] = 0x2965dcb9;
  local_1000[0x173] = 0x99e71d0f;
  local_1000[0x174] = 0x803e89d6;
  local_1000[0x175] = 0x5266c825;
  local_1000[0x176] = 0x2e4cc978;
  local_1000[0x177] = 0x9c10b36a;
  local_1000[0x178] = 0xc6150eba;
  local_1000[0x179] = 0x94e2ea78;
  local_1000[0x17a] = 0xa5fc3c53;
  local_1000[0x17b] = 0x1e0a2df4;
  local_1000[0x17c] = 0xf2f74ea7;
  local_1000[0x17d] = 0x361d2b3d;
  local_1000[0x17e] = 0x1939260f;
  local_1000[0x17f] = 0x19c27960;
  local_1000[0x180] = 0x5223a708;
  local_1000[0x181] = 0xf71312b6;
  local_1000[0x182] = 0xebadfe6e;
  local_1000[0x183] = 0xeac31f66;
  local_1000[0x184] = 0xe3bc4595;
  local_1000[0x185] = 0xa67bc883;
  local_1000[0x186] = 0xb17f37d1;
  local_1000[0x187] = 0x18cff28;
  local_1000[0x188] = 0xc332ddef;
  local_1000[0x189] = 0xbe6c5aa5;
  local_1000[0x18a] = 0x65582185;
  local_1000[0x18b] = 0x68ab9802;
  local_1000[0x18c] = 0xeecea50f;
  local_1000[0x18d] = 0xdb2f953b;
  local_1000[0x18e] = 0x2aef7dad;
  local_1000[399] = 0x5b6e2f84;
  local_1000[400] = 0x1521b628;
  local_1000[0x191] = 0x29076170;
  local_1000[0x192] = 0xecdd4775;
  local_1000[0x193] = 0x619f1510;
  local_1000[0x194] = 0x13cca830;
  local_1000[0x195] = 0xeb61bd96;
  local_1000[0x196] = 0x334fe1e;
  local_1000[0x197] = 0xaa0363cf;
  local_1000[0x198] = 0xb5735c90;
  local_1000[0x199] = 0x4c70a239;
  local_1000[0x19a] = 0xd59e9e0b;
  local_1000[0x19b] = 0xcbaade14;
  local_1000[0x19c] = 0xeecc86bc;
  local_1000[0x19d] = 0x60622ca7;
  local_1000[0x19e] = 0x9cab5cab;
  local_1000[0x19f] = 0xb2f3846e;
  local_1000[0x1a0] = 0x648b1eaf;
  local_1000[0x1a1] = 0x19bdf0ca;
  local_1000[0x1a2] = 0xa02369b9;
  local_1000[0x1a3] = 0x655abb50;
  local_1000[0x1a4] = 0x40685a32;
  local_1000[0x1a5] = 0x3c2ab4b3;
  local_1000[0x1a6] = 0x319ee9d5;
  local_1000[0x1a7] = 0xc021b8f7;
  local_1000[0x1a8] = 0x9b540b19;
  local_1000[0x1a9] = 0x875fa099;
  local_1000[0x1aa] = 0x95f7997e;
  local_1000[0x1ab] = 0x623d7da8;
  local_1000[0x1ac] = 0xf837889a;
  local_1000[0x1ad] = 0x97e32d77;
  local_1000[0x1ae] = 0x11ed935f;
  local_1000[0x1af] = 0x16681281;
  local_1000[0x1b0] = 0xe358829;
  local_1000[0x1b1] = 0xc7e61fd6;
  local_1000[0x1b2] = 0x96dedfa1;
  local_1000[0x1b3] = 0x7858ba99;
  local_1000[0x1b4] = 0x57f584a5;
  local_1000[0x1b5] = 0x1b227263;
  local_1000[0x1b6] = 0x9b83c3ff;
  local_1000[0x1b7] = 0x1ac24696;
  local_1000[0x1b8] = 0xcdb30aeb;
  local_1000[0x1b9] = 0x532e3054;
  local_1000[0x1ba] = 0x8fd948e4;
  local_1000[0x1bb] = 0x6dbc3128;
  local_1000[0x1bc] = 0x58ebf2ef;
  local_1000[0x1bd] = 0x34c6ffea;
  local_1000[0x1be] = 0xfe28ed61;
  local_1000[0x1bf] = 0xee7c3c73;
  local_1000[0x1c0] = 0x5d4a14d9;
  local_1000[0x1c1] = 0xe864b7e3;
  local_1000[0x1c2] = 0x42105d14;
  local_1000[0x1c3] = 0x203e13e0;
  local_1000[0x1c4] = 0x45eee2b6;
  local_1000[0x1c5] = 0xa3aaabea;
  local_1000[0x1c6] = 0xdb6c4f15;
  local_1000[0x1c7] = 0xfacb4fd0;
  local_1000[0x1c8] = 0xc742f442;
  local_1000[0x1c9] = 0xef6abbb5;
  local_1000[0x1ca] = 0x654f3b1d;
  local_1000[0x1cb] = 0x41cd2105;
  local_1000[0x1cc] = 0xd81e799e;
  local_1000[0x1cd] = 0x86854dc7;
  local_1000[0x1ce] = 0xe44b476a;
  local_1000[0x1cf] = 0x3d816250;
  local_1000[0x1d0] = 0xcf62a1f2;
  local_1000[0x1d1] = 0x5b8d2646;
  local_1000[0x1d2] = 0xfc8883a0;
  local_1000[0x1d3] = 0xc1c7b6a3;
  local_1000[0x1d4] = 0x7f1524c3;
  local_1000[0x1d5] = 0x69cb7492;
  local_1000[0x1d6] = 0x47848a0b;
  local_1000[0x1d7] = 0x5692b285;
  local_1000[0x1d8] = 0x95bbf00;
  local_1000[0x1d9] = 0xad19489d;
  local_1000[0x1da] = 0x1462b174;
  local_1000[0x1db] = 0x23820e00;
  local_1000[0x1dc] = 0x58428d2a;
  local_1000[0x1dd] = 0xc55f5ea;
  local_1000[0x1de] = 0x1dadf43e;
  local_1000[0x1df] = 0x233f7061;
  local_1000[0x1e0] = 0x3372f092;
  local_1000[0x1e1] = 0x8d937e41;
  local_1000[0x1e2] = 0xd65fecf1;
  local_1000[0x1e3] = 0x6c223bdb;
  local_1000[0x1e4] = 0x7cde3759;
  local_1000[0x1e5] = 0xcbee7460;
  local_1000[0x1e6] = 0x4085f2a7;
  local_1000[0x1e7] = 0xce77326e;
  local_1000[0x1e8] = 0xa6078084;
  local_1000[0x1e9] = 0x19f8509e;
  local_1000[0x1ea] = 0xe8efd855;
  local_1000[0x1eb] = 0x61d99735;
  local_1000[0x1ec] = 0xa969a7aa;
  local_1000[0x1ed] = 0xc50c06c2;
  local_1000[0x1ee] = 0x5a04abfc;
  local_1000[0x1ef] = 0x800bcadc;
  local_1000[0x1f0] = 0x9e447a2e;
  local_1000[0x1f1] = 0xc3453484;
  local_1000[0x1f2] = 0xfdd56705;
  local_1000[499] = 0xe1e9ec9;
  local_1000[500] = 0xdb73dbd3;
  local_1000[0x1f5] = 0x105588cd;
  local_1000[0x1f6] = 0x675fda79;
  local_1000[0x1f7] = 0xe3674340;
  local_1000[0x1f8] = 0xc5c43465;
  local_1000[0x1f9] = 0x713e38d8;
  local_1000[0x1fa] = 0x3d28f89e;
  local_1000[0x1fb] = 0xf16dff20;
  local_1000[0x1fc] = 0x153e21e7;
  local_1000[0x1fd] = 0x8fb03d4a;
  local_1000[0x1fe] = 0xe6e39f2b;
  local_1000[0x1ff] = 0xdb83adf7;
  local_1000[0x200] = 0xe93d5a68;
  local_1000[0x201] = 0x948140f7;
  local_1000[0x202] = 0xf64c261c;
  local_1000[0x203] = 0x94692934;
  local_1000[0x204] = 0x411520f7;
  local_1000[0x205] = 0x7602d4f7;
  local_1000[0x206] = 0xbcf46b2e;
  local_1000[0x207] = 0xd4a20068;
  local_1000[0x208] = 0xd4082471;
  local_1000[0x209] = 0x3320f46a;
  local_1000[0x20a] = 0x43b7d4b7;
  local_1000[0x20b] = 0x500061af;
  local_1000[0x20c] = 0x1e39f62e;
  local_1000[0x20d] = 0x97244546;
  local_1000[0x20e] = 0x14214f74;
  local_1000[0x20f] = 0xbf8b8840;
  local_1000[0x210] = 0x4d95fc1d;
  local_1000[0x211] = 0x96b591af;
  local_1000[0x212] = 0x70f4ddd3;
  local_1000[0x213] = 0x66a02f45;
  local_1000[0x214] = 0xbfbc09ec;
  local_1000[0x215] = 0x3bd9785;
  local_1000[0x216] = 0x7fac6dd0;
  local_1000[0x217] = 0x31cb8504;
  local_1000[0x218] = 0x96eb27b3;
  local_1000[0x219] = 0x55fd3941;
  local_1000[0x21a] = 0xda2547e6;
  local_1000[0x21b] = 0xabca0a9a;
  local_1000[0x21c] = 0x28507825;
  local_1000[0x21d] = 0x530429f4;
  local_1000[0x21e] = 0xa2c86da;
  local_1000[0x21f] = 0xe9b66dfb;
  local_1000[0x220] = 0x68dc1462;
  local_1000[0x221] = 0xd7486900;
  local_1000[0x222] = 0x680ec0a4;
  local_1000[0x223] = 0x27a18dee;
  local_1000[0x224] = 0x4f3ffea2;
  local_1000[0x225] = 0xe887ad8c;
  local_1000[0x226] = 0xb58ce006;
  local_1000[0x227] = 0x7af4d6b6;
  local_1000[0x228] = 0xaace1e7c;
  local_1000[0x229] = 0xd3375fec;
  local_1000[0x22a] = 0xce78a399;
  local_1000[0x22b] = 0x406b2a42;
  local_1000[0x22c] = 0x20fe9e35;
  local_1000[0x22d] = 0xd9f385b9;
  local_1000[0x22e] = 0xee39d7ab;
  local_1000[0x22f] = 0x3b124e8b;
  local_1000[0x230] = 0x1dc9faf7;
  local_1000[0x231] = 0x4b6d1856;
  local_1000[0x232] = 0x26a36631;
  local_1000[0x233] = 0xeae397b2;
  local_1000[0x234] = 0x3a6efa74;
  local_1000[0x235] = 0xdd5b4332;
  local_1000[0x236] = 0x6841e7f7;
  local_1000[0x237] = 0xca7820fb;
  local_1000[0x238] = 0xfb0af54e;
  local_1000[0x239] = 0xd8feb397;
  local_1000[0x23a] = 0x454056ac;
  local_1000[0x23b] = 0xba489527;
  local_1000[0x23c] = 0x55533a3a;
  local_1000[0x23d] = 0x20838d87;
  local_1000[0x23e] = 0xfe6ba9b7;
  local_1000[0x23f] = 0xd096954b;
  local_1000[0x240] = 0x55a867bc;
  local_1000[0x241] = 0xa1159a58;
  local_1000[0x242] = 0xcca92963;
  local_1000[0x243] = 0x99e1db33;
  local_1000[0x244] = 0xa62a4a56;
  local_1000[0x245] = 0x3f3125f9;
  local_1000[0x246] = 0x5ef47e1c;
  local_1000[0x247] = 0x9029317c;
  local_1000[0x248] = 0xfdf8e802;
  local_1000[0x249] = 0x4272f70;
  local_1000[0x24a] = 0x80bb155c;
  local_1000[0x24b] = 0x5282ce3;
  local_1000[0x24c] = 0x95c11548;
  local_1000[0x24d] = 0xe4c66d22;
  local_1000[0x24e] = 0x48c1133f;
  local_1000[0x24f] = 0xc70f86dc;
  local_1000[0x250] = 0x7f9c9ee;
  local_1000[0x251] = 0x41041f0f;
  local_1000[0x252] = 0x404779a4;
  local_1000[0x253] = 0x5d886e17;
  local_1000[0x254] = 0x325f51eb;
  local_1000[0x255] = 0xd59bc0d1;
  local_1000[0x256] = 0xf2bcc18f;
  local_1000[599] = 0x41113564;
  local_1000[600] = 0x257b7834;
  local_1000[0x259] = 0x602a9c60;
  local_1000[0x25a] = 0xdff8e8a3;
  local_1000[0x25b] = 0x1f636c1b;
  local_1000[0x25c] = 0xe12b4c2;
  local_1000[0x25d] = 0x2e1329e;
  local_1000[0x25e] = 0xaf664fd1;
  local_1000[0x25f] = 0xcad18115;
  local_1000[0x260] = 0x6b2395e0;
  local_1000[0x261] = 0x333e92e1;
  local_1000[0x262] = 0x3b240b62;
  local_1000[0x263] = 0xeebeb922;
  local_1000[0x264] = 0x85b2a20e;
  local_1000[0x265] = 0xe6ba0d99;
  local_1000[0x266] = 0xde720c8c;
  local_1000[0x267] = 0x2da2f728;
  local_1000[0x268] = 0xd0127845;
  local_1000[0x269] = 0x95b794fd;
  local_1000[0x26a] = 0x647d0862;
  local_1000[0x26b] = 0xe7ccf5f0;
  local_1000[0x26c] = 0x5449a36f;
  local_1000[0x26d] = 0x877d48fa;
  local_1000[0x26e] = 0xc39dfd27;
  local_1000[0x26f] = 0xf33e8d1e;
  local_1000[0x270] = 0xa476341;
  local_1000[0x271] = 0x992eff74;
  local_1000[0x272] = 0x3a6f6eab;
  local_1000[0x273] = 0xf4f8fd37;
  local_1000[0x274] = 0xa812dc60;
  local_1000[0x275] = 0xa1ebddf8;
  local_1000[0x276] = 0x991be14c;
  local_1000[0x277] = 0xdb6e6b0d;
  local_1000[0x278] = 0xc67b5510;
  local_1000[0x279] = 0x6d672c37;
  local_1000[0x27a] = 0x2765d43b;
  local_1000[0x27b] = 0xdcd0e804;
  local_1000[0x27c] = 0xf1290dc7;
  local_1000[0x27d] = 0xcc00ffa3;
  local_1000[0x27e] = 0xb5390f92;
  local_1000[0x27f] = 0x690fed0b;
  local_1000[0x280] = 0x667b9ffb;
  local_1000[0x281] = 0xcedb7d9c;
  local_1000[0x282] = 0xa091cf0b;
  local_1000[0x283] = 0xd9155ea3;
  local_1000[0x284] = 0xbb132f88;
  local_1000[0x285] = 0x515bad24;
  local_1000[0x286] = 0x7b9479bf;
  local_1000[0x287] = 0x763bd6eb;
  local_1000[0x288] = 0x37392eb3;
  local_1000[0x289] = 0xcc115979;
  local_1000[0x28a] = 0x8026e297;
  local_1000[0x28b] = 0xf42e312d;
  local_1000[0x28c] = 0x6842ada7;
  local_1000[0x28d] = 0xc66a2b3b;
  local_1000[0x28e] = 0x12754ccc;
  local_1000[0x28f] = 0x782ef11c;
  local_1000[0x290] = 0x6a124237;
  local_1000[0x291] = 0xb79251e7;
  local_1000[0x292] = 0x6a1bbe6;
  local_1000[0x293] = 0x4bfb6350;
  local_1000[0x294] = 0x1a6b1018;
  local_1000[0x295] = 0x11caedfa;
  local_1000[0x296] = 0x3d25bdd8;
  local_1000[0x297] = 0xe2e1c3c9;
  local_1000[0x298] = 0x44421659;
  local_1000[0x299] = 0xa121386;
  local_1000[0x29a] = 0xd90cec6e;
  local_1000[0x29b] = 0xd5abea2a;
  local_1000[0x29c] = 0x64af674e;
  local_1000[0x29d] = 0xda86a85f;
  local_1000[0x29e] = 0xbebfe988;
  local_1000[0x29f] = 0x64e4c3fe;
  local_1000[0x2a0] = 0x9dbc8057;
  local_1000[0x2a1] = 0xf0f7c086;
  local_1000[0x2a2] = 0x60787bf8;
  local_1000[0x2a3] = 0x6003604d;
  local_1000[0x2a4] = 0xd1fd8346;
  local_1000[0x2a5] = 0xf6381fb0;
  local_1000[0x2a6] = 0x7745ae04;
  local_1000[0x2a7] = 0xd736fccc;
  local_1000[0x2a8] = 0x83426b33;
  local_1000[0x2a9] = 0xf01eab71;
  local_1000[0x2aa] = 0xb0804187;
  local_1000[0x2ab] = 0x3c005e5f;
  local_1000[0x2ac] = 0x77a057be;
  local_1000[0x2ad] = 0xbde8ae24;
  local_1000[0x2ae] = 0x55464299;
  local_1000[0x2af] = 0xbf582e61;
  local_1000[0x2b0] = 0x4e58f48f;
  local_1000[0x2b1] = 0xf2ddfda2;
  local_1000[0x2b2] = 0xf474ef38;
  local_1000[0x2b3] = 0x8789bdc2;
  local_1000[0x2b4] = 0x5366f9c3;
  local_1000[0x2b5] = 0xc8b38e74;
  local_1000[0x2b6] = 0xb475f255;
  local_1000[0x2b7] = 0x46fcd9b9;
  local_1000[0x2b8] = 0x7aeb2661;
  local_1000[0x2b9] = 0x8b1ddf84;
  local_1000[0x2ba] = 0x846a0e79;
  local_1000[699] = 0x915f95e2;
  local_1000[700] = 0x466e598e;
  local_1000[0x2bd] = 0x20b45770;
  local_1000[0x2be] = 0x8cd55591;
  local_1000[0x2bf] = 0xc902de4c;
  local_1000[0x2c0] = 0xb90bace1;
  local_1000[0x2c1] = 0xbb8205d0;
  local_1000[0x2c2] = 0x11a86248;
  local_1000[0x2c3] = 0x7574a99e;
  local_1000[0x2c4] = 0xb77f19b6;
  local_1000[0x2c5] = 0xe0a9dc09;
  local_1000[0x2c6] = 0x662d09a1;
  local_1000[0x2c7] = 0xc4324633;
  local_1000[0x2c8] = 0xe85a1f02;
  local_1000[0x2c9] = 0x9f0be8c;
  local_1000[0x2ca] = 0x4a99a025;
  local_1000[0x2cb] = 0x1d6efe10;
  local_1000[0x2cc] = 0x1ab93d1d;
  local_1000[0x2cd] = 0xba5a4df;
  local_1000[0x2ce] = 0xa186f20f;
  local_1000[0x2cf] = 0x2868f169;
  local_1000[0x2d0] = 0xdcb7da83;
  local_1000[0x2d1] = 0x573906fe;
  local_1000[0x2d2] = 0xa1e2ce9b;
  local_1000[0x2d3] = 0x4fcd7f52;
  local_1000[0x2d4] = 0x50115e01;
  local_1000[0x2d5] = 0xa70683fa;
  local_1000[0x2d6] = 0xa002b5c4;
  local_1000[0x2d7] = 0xde6d027;
  local_1000[0x2d8] = 0x9af88c27;
  local_1000[0x2d9] = 0x773f8641;
  local_1000[0x2da] = 0xc3604c06;
  local_1000[0x2db] = 0x61a806b5;
  local_1000[0x2dc] = 0xf0177a28;
  local_1000[0x2dd] = 0xc0f586e0;
  local_1000[0x2de] = 0x6058aa;
  local_1000[0x2df] = 0x30dc7d62;
  local_1000[0x2e0] = 0x11e69ed7;
  local_1000[0x2e1] = 0x2338ea63;
  local_1000[0x2e2] = 0x53c2dd94;
  local_1000[0x2e3] = 0xc2c21634;
  local_1000[0x2e4] = 0xbbcbee56;
  local_1000[0x2e5] = 0x90bcb6de;
  local_1000[0x2e6] = 0xebfc7da1;
  local_1000[0x2e7] = 0xce591d76;
  local_1000[0x2e8] = 0x6f05e409;
  local_1000[0x2e9] = 0x4b7c0188;
  local_1000[0x2ea] = 0x39720a3d;
  local_1000[0x2eb] = 0x7c927c24;
  local_1000[0x2ec] = 0x86e3725f;
  local_1000[0x2ed] = 0x724d9db9;
  local_1000[0x2ee] = 0x1ac15bb4;
  local_1000[0x2ef] = 0xd39eb8fc;
  local_1000[0x2f0] = 0xed545578;
  local_1000[0x2f1] = 0x8fca5b5;
  local_1000[0x2f2] = 0xd83d7cd3;
  local_1000[0x2f3] = 0x4dad0fc4;
  local_1000[0x2f4] = 0x1e50ef5e;
  local_1000[0x2f5] = 0xb161e6f8;
  local_1000[0x2f6] = 0xa28514d9;
  local_1000[0x2f7] = 0x6c51133c;
  local_1000[0x2f8] = 0x6fd5c7e7;
  local_1000[0x2f9] = 0x56e14ec4;
  local_1000[0x2fa] = 0x362abfce;
  local_1000[0x2fb] = 0xddc6c837;
  local_1000[0x2fc] = 0xd79a3234;
  local_1000[0x2fd] = 0x92638212;
  local_1000[0x2fe] = 0x670efa8e;
  local_1000[0x2ff] = 0x406000e0;
  local_1000[0x300] = 0x3a39ce37;
  local_1000[0x301] = 0xd3faf5cf;
  local_1000[0x302] = 0xabc27737;
  local_1000[0x303] = 0x5ac52d1b;
  local_1000[0x304] = 0x5cb0679e;
  local_1000[0x305] = 0x4fa33742;
  local_1000[0x306] = 0xd3822740;
  local_1000[0x307] = 0x99bc9bbe;
  local_1000[0x308] = 0xd5118e9d;
  local_1000[0x309] = 0xbf0f7315;
  local_1000[0x30a] = 0xd62d1c7e;
  local_1000[0x30b] = 0xc700c47b;
  local_1000[0x30c] = 0xb78c1b6b;
  local_1000[0x30d] = 0x21a19045;
  local_1000[0x30e] = 0xb26eb1be;
  local_1000[0x30f] = 0x6a366eb4;
  local_1000[0x310] = 0x5748ab2f;
  local_1000[0x311] = 0xbc946e79;
  local_1000[0x312] = 0xc6a376d2;
  local_1000[0x313] = 0x6549c2c8;
  local_1000[0x314] = 0x530ff8ee;
  local_1000[0x315] = 0x468dde7d;
  local_1000[0x316] = 0xd5730a1d;
  local_1000[0x317] = 0x4cd04dc6;
  local_1000[0x318] = 0x2939bbdb;
  local_1000[0x319] = 0xa9ba4650;
  local_1000[0x31a] = 0xac9526e8;
  local_1000[0x31b] = 0xbe5ee304;
  local_1000[0x31c] = 0xa1fad5f0;
  local_1000[0x31d] = 0x6a2d519a;
  local_1000[0x31e] = 0x63ef8ce2;
  local_1000[799] = 0x9a86ee22;
  local_1000[800] = 0xc089c2b8;
  local_1000[0x321] = 0x43242ef6;
  local_1000[0x322] = 0xa51e03aa;
  local_1000[0x323] = 0x9cf2d0a4;
  local_1000[0x324] = 0x83c061ba;
  local_1000[0x325] = 0x9be96a4d;
  local_1000[0x326] = 0x8fe51550;
  local_1000[0x327] = 0xba645bd6;
  local_1000[0x328] = 0x2826a2f9;
  local_1000[0x329] = 0xa73a3ae1;
  local_1000[0x32a] = 0x4ba99586;
  local_1000[0x32b] = 0xef5562e9;
  local_1000[0x32c] = 0xc72fefd3;
  local_1000[0x32d] = 0xf752f7da;
  local_1000[0x32e] = 0x3f046f69;
  local_1000[0x32f] = 0x77fa0a59;
  local_1000[0x330] = 0x80e4a915;
  local_1000[0x331] = 0x87b08601;
  local_1000[0x332] = 0x9b09e6ad;
  local_1000[0x333] = 0x3b3ee593;
  local_1000[0x334] = 0xe990fd5a;
  local_1000[0x335] = 0x9e34d797;
  local_1000[0x336] = 0x2cf0b7d9;
  local_1000[0x337] = 0x22b8b51;
  local_1000[0x338] = 0x96d5ac3a;
  local_1000[0x339] = 0x17da67d;
  local_1000[0x33a] = 0xd1cf3ed6;
  local_1000[0x33b] = 0x7c7d2d28;
  local_1000[0x33c] = 0x1f9f25cf;
  local_1000[0x33d] = 0xadf2b89b;
  local_1000[0x33e] = 0x5ad6b472;
  local_1000[0x33f] = 0x5a88f54c;
  local_1000[0x340] = 0xe029ac71;
  local_1000[0x341] = 0xe019a5e6;
  local_1000[0x342] = 0x47b0acfd;
  local_1000[0x343] = 0xed93fa9b;
  local_1000[0x344] = 0xe8d3c48d;
  local_1000[0x345] = 0x283b57cc;
  local_1000[0x346] = 0xf8d56629;
  local_1000[0x347] = 0x79132e28;
  local_1000[0x348] = 0x785f0191;
  local_1000[0x349] = 0xed756055;
  local_1000[0x34a] = 0xf7960e44;
  local_1000[0x34b] = 0xe3d35e8c;
  local_1000[0x34c] = 0x15056dd4;
  local_1000[0x34d] = 0x88f46dba;
  local_1000[0x34e] = 0x3a16125;
  local_1000[0x34f] = 0x564f0bd;
  local_1000[0x350] = 0xc3eb9e15;
  local_1000[0x351] = 0x3c9057a2;
  local_1000[0x352] = 0x97271aec;
  local_1000[0x353] = 0xa93a072a;
  local_1000[0x354] = 0x1b3f6d9b;
  local_1000[0x355] = 0x1e6321f5;
  local_1000[0x356] = 0xf59c66fb;
  local_1000[0x357] = 0x26dcf319;
  local_1000[0x358] = 0x7533d928;
  local_1000[0x359] = 0xb155fdf5;
  local_1000[0x35a] = 0x3563482;
  local_1000[0x35b] = 0x8aba3cbb;
  local_1000[0x35c] = 0x28517711;
  local_1000[0x35d] = 0xc20ad9f8;
  local_1000[0x35e] = 0xabcc5167;
  local_1000[0x35f] = 0xccad925f;
  local_1000[0x360] = 0x4de81751;
  local_1000[0x361] = 0x3830dc8e;
  local_1000[0x362] = 0x379d5862;
  local_1000[0x363] = 0x9320f991;
  local_1000[0x364] = 0xea7a90c2;
  local_1000[0x365] = 0xfb3e7bce;
  local_1000[0x366] = 0x5121ce64;
  local_1000[0x367] = 0x774fbe32;
  local_1000[0x368] = 0xa8b6e37e;
  local_1000[0x369] = 0xc3293d46;
  local_1000[0x36a] = 0x48de5369;
  local_1000[0x36b] = 0x6413e680;
  local_1000[0x36c] = 0xa2ae0810;
  local_1000[0x36d] = 0xdd6db224;
  local_1000[0x36e] = 0x69852dfd;
  local_1000[0x36f] = 0x9072166;
  local_1000[0x370] = 0xb39a460a;
  local_1000[0x371] = 0x6445c0dd;
  local_1000[0x372] = 0x586cdecf;
  local_1000[0x373] = 0x1c20c8ae;
  local_1000[0x374] = 0x5bbef7dd;
  local_1000[0x375] = 0x1b588d40;
  local_1000[0x376] = 0xccd2017f;
  local_1000[0x377] = 0x6bb4e3bb;
  local_1000[0x378] = 0xdda26a7e;
  local_1000[0x379] = 0x3a59ff45;
  local_1000[0x37a] = 0x3e350a44;
  local_1000[0x37b] = 0xbcb4cdd5;
  local_1000[0x37c] = 0x72eacea8;
  local_1000[0x37d] = 0xfa6484bb;
  local_1000[0x37e] = 0x8d6612ae;
  local_1000[0x37f] = 0xbf3c6f47;
  local_1000[0x380] = 0xd29be463;
  local_1000[0x381] = 0x542f5d9e;
  local_1000[0x382] = 0xaec2771b;
  local_1000[899] = 0xf64e6370;
  local_1000[900] = 0x740e0d8d;
  local_1000[0x385] = 0xe75b1357;
  local_1000[0x386] = 0xf8721671;
  local_1000[0x387] = 0xaf537d5d;
  local_1000[0x388] = 0x4040cb08;
  local_1000[0x389] = 0x4eb4e2cc;
  local_1000[0x38a] = 0x34d2466a;
  local_1000[0x38b] = 0x115af84;
  local_1000[0x38c] = 0xe1b00428;
  local_1000[0x38d] = 0x95983a1d;
  local_1000[0x38e] = 0x6b89fb4;
  local_1000[0x38f] = 0xce6ea048;
  local_1000[0x390] = 0x6f3f3b82;
  local_1000[0x391] = 0x3520ab82;
  local_1000[0x392] = 0x11a1d4b;
  local_1000[0x393] = 0x277227f8;
  local_1000[0x394] = 0x611560b1;
  local_1000[0x395] = 0xe7933fdc;
  local_1000[0x396] = 0xbb3a792b;
  local_1000[0x397] = 0x344525bd;
  local_1000[0x398] = 0xa08839e1;
  local_1000[0x399] = 0x51ce794b;
  local_1000[0x39a] = 0x2f32c9b7;
  local_1000[0x39b] = 0xa01fbac9;
  local_1000[0x39c] = 0xe01cc87e;
  local_1000[0x39d] = 0xbcc7d1f6;
  local_1000[0x39e] = 0xcf0111c3;
  local_1000[0x39f] = 0xa1e8aac7;
  local_1000[0x3a0] = 0x1a908749;
  local_1000[0x3a1] = 0xd44fbd9a;
  local_1000[0x3a2] = 0xd0dadecb;
  local_1000[0x3a3] = 0xd50ada38;
  local_1000[0x3a4] = 0x339c32a;
  local_1000[0x3a5] = 0xc6913667;
  local_1000[0x3a6] = 0x8df9317c;
  local_1000[0x3a7] = 0xe0b12b4f;
  local_1000[0x3a8] = 0xf79e59b7;
  local_1000[0x3a9] = 0x43f5bb3a;
  local_1000[0x3aa] = 0xf2d519ff;
  local_1000[0x3ab] = 0x27d9459c;
  local_1000[0x3ac] = 0xbf97222c;
  local_1000[0x3ad] = 0x15e6fc2a;
  local_1000[0x3ae] = 0xf91fc71;
  local_1000[0x3af] = 0x9b941525;
  local_1000[0x3b0] = 0xfae59361;
  local_1000[0x3b1] = 0xceb69ceb;
  local_1000[0x3b2] = 0xc2a86459;
  local_1000[0x3b3] = 0x12baa8d1;
  local_1000[0x3b4] = 0xb6c1075e;
  local_1000[0x3b5] = 0xe3056a0c;
  local_1000[0x3b6] = 0x10d25065;
  local_1000[0x3b7] = 0xcb03a442;
  local_1000[0x3b8] = 0xe0ec6e0e;
  local_1000[0x3b9] = 0x1698db3b;
  local_1000[0x3ba] = 0x4c98a0be;
  local_1000[0x3bb] = 0x3278e964;
  local_1000[0x3bc] = 0x9f1f9532;
  local_1000[0x3bd] = 0xe0d392df;
  local_1000[0x3be] = 0xd3a0342b;
  local_1000[0x3bf] = 0x8971f21e;
  local_1000[0x3c0] = 0x1b0a7441;
  *param_1 = 0x243f6a88;
  param_1[1] = 0x85a308d3;
  param_1[2] = 0x13198a2e;
  param_1[3] = 0x3707344;
  param_1[4] = 0xa4093822;
  param_1[5] = 0x299f31d0;
  param_1[6] = 0x82efa98;
  param_1[7] = 0xec4e6c89;
  param_1[8] = 0x452821e6;
  param_1[9] = 0x38d01377;
  local_1000[0x3c1] = 0x4ba3348c;
  local_1000[0x3c2] = 0xc5be7120;
  local_1000[0x3c3] = 0xc37632d8;
  local_1000[0x3c4] = 0xdf359f8d;
  local_1000[0x3c5] = 0x9b992f2e;
  local_1000[0x3c6] = 0xe60b6f47;
  local_1000[0x3c7] = 0xfe3f11d;
  local_1000[0x3c8] = 0xe54cda54;
  local_1000[0x3c9] = 0x1edad891;
  local_1000[0x3ca] = 0xce6279cf;
  local_1000[0x3cb] = 0xcd3e7e6f;
  local_1000[0x3cc] = 0x1618b166;
  local_1000[0x3cd] = 0xfd2c1d05;
  local_1000[0x3ce] = 0x848fd2c5;
  local_1000[0x3cf] = 0xf6fb2299;
  local_1000[0x3d0] = 0xf523f357;
  local_1000[0x3d1] = 0xa6327623;
  local_1000[0x3d2] = 0x93a83531;
  local_1000[0x3d3] = 0x56cccd02;
  local_1000[0x3d4] = 0xacf08162;
  local_1000[0x3d5] = 0x5a75ebb5;
  local_1000[0x3d6] = 0x6e163697;
  local_1000[0x3d7] = 0x88d273cc;
  local_1000[0x3d8] = 0xde966292;
  local_1000[0x3d9] = 0x81b949d0;
  local_1000[0x3da] = 0x4c50901b;
  local_1000[0x3db] = 0x71c65614;
  local_1000[0x3dc] = 0xe6c6c7bd;
  local_1000[0x3dd] = 0x327a140a;
  local_1000[0x3de] = 0x45e1d006;
  local_1000[0x3df] = 0xc3f27b9a;
  local_1000[0x3e0] = 0xc9aa53fd;
  local_1000[0x3e1] = 0x62a80f00;
  local_1000[0x3e2] = 0xbb25bfe2;
  local_1000[0x3e3] = 0x35bdd2f6;
  local_1000[0x3e4] = 0x71126905;
  local_1000[0x3e5] = 0xb2040222;
  local_1000[0x3e6] = 0xb6cbcf7c;
  local_1000[999] = 0xcd769c2b;
  local_1000[1000] = 0x53113ec0;
  local_1000[0x3e9] = 0x1640e3d3;
  local_1000[0x3ea] = 0x38abbd60;
  local_1000[0x3eb] = 0x2547adf0;
  local_1000[0x3ec] = 0xba38209c;
  local_1000[0x3ed] = 0xf746ce76;
  local_1000[0x3ee] = 0x77afa1c5;
  local_1000[0x3ef] = 0x20756060;
  local_1000[0x3f0] = 0x85cbfe4e;
  local_1000[0x3f1] = 0x8ae88dd8;
  local_1000[0x3f2] = 0x7aaaf9b0;
  local_1000[0x3f3] = 0x4cf9aa7e;
  local_1000[0x3f4] = 0x1948c25c;
  local_1000[0x3f5] = 0x2fb8a8c;
  local_1000[0x3f6] = 0x1c36ae4;
  local_1000[0x3f7] = 0xd6ebe1f9;
  local_1000[0x3f8] = 0x90d4f869;
  local_1000[0x3f9] = 0xa65cdea0;
  local_1000[0x3fa] = 0x3f09252d;
  local_1000[0x3fb] = 0xc208e69f;
  local_1000[0x3fc] = 0xb74e6132;
  local_1000[0x3fd] = 0xce77e25b;
  local_1000[0x3fe] = 0x578fdfe3;
  local_1000[0x3ff] = 0x3ac372e6;
  param_1[10] = 0xbe5466cf;
  param_1[0xb] = 0x34e90c6c;
  param_1[0xc] = 0xc0ac29b7;
  param_1[0xd] = 0xc97c50dd;
  param_1[0xe] = 0x3f84d5b5;
  param_1[0xf] = 0xb5470917;
  param_1[0x10] = 0x9216d5d9;
  param_1[0x11] = 0x8979fb1b;
  puVar2 = local_1000;
  puVar3 = param_1 + 0x12;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



/**************************************************/

/* Function: FUN_100111e0 @ 100111e0 */

uint __thiscall FUN_100111e0(void *this,uint *param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = in_EAX & 0xffffff00;
  if ((param_2 & 7) == 0) {
    for (uVar2 = param_2 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar1 = FUN_1000e1a0(this,param_1,param_1 + 1);
      param_1 = param_1 + 2;
    }
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_10011220 @ 10011220 */

void __thiscall FUN_10011220(void *this,uint *param_1)

{
  void *this_00;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint local_8;
  void *local_4;
  
  puVar6 = param_1;
  iVar4 = (int)param_1 + 1;
  do {
    uVar3 = *param_1;
    param_1 = (uint *)((int)param_1 + 1);
  } while ((char)uVar3 != '\0');
  uVar3 = (int)param_1 - iVar4;
  if (uVar3 != 0) {
    uVar1 = 0;
    puVar2 = (uint *)((int)this + 8);
    local_8 = 6;
    param_1 = puVar2;
    do {
      uVar5 = (int)*(char *)(uVar1 % uVar3 + (int)puVar6) << 0x18 | (uint)puVar2 & 0xffffff;
      uVar5 = uVar5 ^ ((int)*(char *)((uVar1 + 1) % uVar3 + (int)puVar6) << 0x10 ^ uVar5) & 0xff0000
      ;
      uVar5 = uVar5 ^ ((int)*(char *)((uVar1 + 2) % uVar3 + (int)puVar6) << 8 ^ uVar5) & 0xff00;
      uVar5 = uVar5 ^ (*(byte *)((uVar1 + 3) % uVar3 + (int)puVar6) ^ uVar5) & 0xff;
      param_1[-2] = param_1[-2] ^ uVar5;
      uVar5 = (int)*(char *)((uVar1 + 4) % uVar3 + (int)puVar6) << 0x18 | uVar5 & 0xffffff;
      uVar5 = uVar5 ^ ((int)*(char *)((uVar1 + 5) % uVar3 + (int)puVar6) << 0x10 ^ uVar5) & 0xff0000
      ;
      uVar5 = uVar5 ^ ((int)*(char *)((uVar1 + 6) % uVar3 + (int)puVar6) << 8 ^ uVar5) & 0xff00;
      uVar5 = uVar5 ^ ((int)*(char *)((uVar1 + 7) % uVar3 + (int)puVar6) ^ uVar5) & 0xff;
      param_1[-1] = param_1[-1] ^ uVar5;
      uVar5 = uVar5 & 0xffffff | (int)*(char *)((uVar1 + 8) % uVar3 + (int)puVar6) << 0x18;
      uVar5 = uVar5 ^ ((int)*(char *)((uVar1 + 9) % uVar3 + (int)puVar6) << 0x10 ^ uVar5) & 0xff0000
      ;
      uVar5 = uVar5 ^ ((int)*(char *)((uVar1 + 10) % uVar3 + (int)puVar6) << 8 ^ uVar5) & 0xff00;
      puVar2 = (uint *)(uVar5 ^ ((int)*(char *)((uVar1 + 0xb) % uVar3 + (int)puVar6) ^ uVar5) & 0xff
                       );
      *param_1 = *param_1 ^ (uint)puVar2;
      uVar1 = uVar1 + 0xc;
      local_8 = local_8 - 1;
      param_1 = param_1 + 3;
    } while (local_8 != 0);
    uVar3 = 0;
    local_8 = 0;
    param_1 = (uint *)0x0;
    local_4 = this;
    do {
      this_00 = local_4;
      FUN_1000ddd0(local_4,(uint *)&param_1,&local_8);
      *(uint **)((int)this_00 + uVar3 * 4) = param_1;
      *(uint *)((int)this_00 + uVar3 * 4 + 4) = local_8;
      uVar3 = uVar3 + 2;
    } while (uVar3 < 0x12);
    puVar6 = (uint *)((int)this_00 + 0x4c);
    iVar4 = 4;
    do {
      iVar7 = 0x80;
      do {
        FUN_1000ddd0(this_00,(uint *)&param_1,&local_8);
        puVar6[-1] = (uint)param_1;
        *puVar6 = local_8;
        puVar6 = puVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



/**************************************************/

/* Function: FUN_10011430 @ 10011430 */

undefined4 * __fastcall FUN_10011430(undefined4 *param_1)

{
  FUN_1000e570(param_1);
  return param_1;
}



/**************************************************/

/* Function: FUN_10011440 @ 10011440 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_10011440(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_1000 [1024];
  
  auStack_1000[0] = 0xd1310ba6;
  auStack_1000[1] = 0x98dfb5ac;
  auStack_1000[2] = 0x2ffd72db;
  auStack_1000[3] = 0xd01adfb7;
  auStack_1000[4] = 0xb8e1afed;
  auStack_1000[5] = 0x6a267e96;
  auStack_1000[6] = 0xba7c9045;
  auStack_1000[7] = 0xf12c7f99;
  auStack_1000[8] = 0x24a19947;
  auStack_1000[9] = 0xb3916cf7;
  auStack_1000[10] = 0x801f2e2;
  auStack_1000[0xb] = 0x858efc16;
  auStack_1000[0xc] = 0x636920d8;
  auStack_1000[0xd] = 0x71574e69;
  auStack_1000[0xe] = 0xa458fea3;
  auStack_1000[0xf] = 0xf4933d7e;
  auStack_1000[0x10] = 0xd95748f;
  auStack_1000[0x11] = 0x728eb658;
  auStack_1000[0x12] = 0x718bcd58;
  auStack_1000[0x13] = 0x82154aee;
  auStack_1000[0x14] = 0x7b54a41d;
  auStack_1000[0x15] = 0xc25a59b5;
  auStack_1000[0x16] = 0x9c30d539;
  auStack_1000[0x17] = 0x2af26013;
  auStack_1000[0x18] = 0xc5d1b023;
  auStack_1000[0x19] = 0x286085f0;
  auStack_1000[0x1a] = 0xca417918;
  auStack_1000[0x1b] = 0xb8db38ef;
  auStack_1000[0x1c] = 0x8e79dcb0;
  auStack_1000[0x1d] = 0x603a180e;
  auStack_1000[0x1e] = 0x6c9e0e8b;
  auStack_1000[0x1f] = 0xb01e8a3e;
  auStack_1000[0x20] = 0xd71577c1;
  auStack_1000[0x21] = 0xbd314b27;
  auStack_1000[0x22] = 0x78af2fda;
  auStack_1000[0x23] = 0x55605c60;
  auStack_1000[0x24] = 0xe65525f3;
  auStack_1000[0x25] = 0xaa55ab94;
  auStack_1000[0x26] = 0x57489862;
  auStack_1000[0x27] = 0x63e81440;
  auStack_1000[0x28] = 0x55ca396a;
  auStack_1000[0x29] = 0x2aab10b6;
  auStack_1000[0x2a] = 0xb4cc5c34;
  auStack_1000[0x2b] = 0x1141e8ce;
  auStack_1000[0x2c] = 0xa15486af;
  auStack_1000[0x2d] = 0x7c72e993;
  auStack_1000[0x2e] = 0xb3ee1411;
  auStack_1000[0x2f] = 0x636fbc2a;
  auStack_1000[0x30] = 0x2ba9c55d;
  auStack_1000[0x31] = 0x741831f6;
  auStack_1000[0x32] = 0xce5c3e16;
  auStack_1000[0x33] = 0x9b87931e;
  auStack_1000[0x34] = 0xafd6ba33;
  auStack_1000[0x35] = 0x6c24cf5c;
  auStack_1000[0x36] = 0x7a325381;
  auStack_1000[0x37] = 0x28958677;
  auStack_1000[0x38] = 0x3b8f4898;
  auStack_1000[0x39] = 0x6b4bb9af;
  auStack_1000[0x3a] = 0xc4bfe81b;
  auStack_1000[0x3b] = 0x66282193;
  auStack_1000[0x3c] = 0x61d809cc;
  auStack_1000[0x3d] = 0xfb21a991;
  auStack_1000[0x3e] = 0x487cac60;
  auStack_1000[0x3f] = 0x5dec8032;
  auStack_1000[0x40] = 0xef845d5d;
  auStack_1000[0x41] = 0xe98575b1;
  auStack_1000[0x42] = 0xdc262302;
  auStack_1000[0x43] = 0xeb651b88;
  auStack_1000[0x44] = 0x23893e81;
  auStack_1000[0x45] = 0xd396acc5;
  auStack_1000[0x46] = 0xf6d6ff3;
  auStack_1000[0x47] = 0x83f44239;
  auStack_1000[0x48] = 0x2e0b4482;
  auStack_1000[0x49] = 0xa4842004;
  auStack_1000[0x4a] = 0x69c8f04a;
  auStack_1000[0x4b] = 0x9e1f9b5e;
  auStack_1000[0x4c] = 0x21c66842;
  auStack_1000[0x4d] = 0xf6e96c9a;
  auStack_1000[0x4e] = 0x670c9c61;
  auStack_1000[0x4f] = 0xabd388f0;
  auStack_1000[0x50] = 0x6a51a0d2;
  auStack_1000[0x51] = 0xd8542f68;
  auStack_1000[0x52] = 0x960fa728;
  auStack_1000[0x53] = 0xab5133a3;
  auStack_1000[0x54] = 0x6eef0b6c;
  auStack_1000[0x55] = 0x137a3be4;
  auStack_1000[0x56] = 0xba3bf050;
  auStack_1000[0x57] = 0x7efb2a98;
  auStack_1000[0x58] = 0xa1f1651d;
  auStack_1000[0x59] = 0x39af0176;
  auStack_1000[0x5a] = 0x66ca593e;
  auStack_1000[0x5b] = 0x82430e88;
  auStack_1000[0x5c] = 0x8cee8619;
  auStack_1000[0x5d] = 0x456f9fb4;
  auStack_1000[0x5e] = 0x7d84a5c3;
  auStack_1000[0x5f] = 0x3b8b5ebe;
  auStack_1000[0x60] = 0xe06f75d8;
  auStack_1000[0x61] = 0x85c12073;
  auStack_1000[0x62] = 0x401a449f;
  auStack_1000[99] = 0x56c16aa6;
  auStack_1000[100] = 0x4ed3aa62;
  auStack_1000[0x65] = 0x363f7706;
  auStack_1000[0x66] = 0x1bfedf72;
  auStack_1000[0x67] = 0x429b023d;
  auStack_1000[0x68] = 0x37d0d724;
  auStack_1000[0x69] = 0xd00a1248;
  auStack_1000[0x6a] = 0xdb0fead3;
  auStack_1000[0x6b] = 0x49f1c09b;
  auStack_1000[0x6c] = 0x75372c9;
  auStack_1000[0x6d] = 0x80991b7b;
  auStack_1000[0x6e] = 0x25d479d8;
  auStack_1000[0x6f] = 0xf6e8def7;
  auStack_1000[0x70] = 0xe3fe501a;
  auStack_1000[0x71] = 0xb6794c3b;
  auStack_1000[0x72] = 0x976ce0bd;
  auStack_1000[0x73] = 0x4c006ba;
  auStack_1000[0x74] = 0xc1a94fb6;
  auStack_1000[0x75] = 0x409f60c4;
  auStack_1000[0x76] = 0x5e5c9ec2;
  auStack_1000[0x77] = 0x196a2463;
  auStack_1000[0x78] = 0x68fb6faf;
  auStack_1000[0x79] = 0x3e6c53b5;
  auStack_1000[0x7a] = 0x1339b2eb;
  auStack_1000[0x7b] = 0x3b52ec6f;
  auStack_1000[0x7c] = 0x6dfc511f;
  auStack_1000[0x7d] = 0x9b30952c;
  auStack_1000[0x7e] = 0xcc814544;
  auStack_1000[0x7f] = 0xaf5ebd09;
  auStack_1000[0x80] = 0xbee3d004;
  auStack_1000[0x81] = 0xde334afd;
  auStack_1000[0x82] = 0x660f2807;
  auStack_1000[0x83] = 0x192e4bb3;
  auStack_1000[0x84] = 0xc0cba857;
  auStack_1000[0x85] = 0x45c8740f;
  auStack_1000[0x86] = 0xd20b5f39;
  auStack_1000[0x87] = 0xb9d3fbdb;
  auStack_1000[0x88] = 0x5579c0bd;
  auStack_1000[0x89] = 0x1a60320a;
  auStack_1000[0x8a] = 0xd6a100c6;
  auStack_1000[0x8b] = 0x402c7279;
  auStack_1000[0x8c] = 0x679f25fe;
  auStack_1000[0x8d] = 0xfb1fa3cc;
  auStack_1000[0x8e] = 0x8ea5e9f8;
  auStack_1000[0x8f] = 0xdb3222f8;
  auStack_1000[0x90] = 0x3c7516df;
  auStack_1000[0x91] = 0xfd616b15;
  auStack_1000[0x92] = 0x2f501ec8;
  auStack_1000[0x93] = 0xad0552ab;
  auStack_1000[0x94] = 0x323db5fa;
  auStack_1000[0x95] = 0xfd238760;
  auStack_1000[0x96] = 0x53317b48;
  auStack_1000[0x97] = 0x3e00df82;
  auStack_1000[0x98] = 0x9e5c57bb;
  auStack_1000[0x99] = 0xca6f8ca0;
  auStack_1000[0x9a] = 0x1a87562e;
  auStack_1000[0x9b] = 0xdf1769db;
  auStack_1000[0x9c] = 0xd542a8f6;
  auStack_1000[0x9d] = 0x287effc3;
  auStack_1000[0x9e] = 0xac6732c6;
  auStack_1000[0x9f] = 0x8c4f5573;
  auStack_1000[0xa0] = 0x695b27b0;
  auStack_1000[0xa1] = 0xbbca58c8;
  auStack_1000[0xa2] = 0xe1ffa35d;
  auStack_1000[0xa3] = 0xb8f011a0;
  auStack_1000[0xa4] = 0x10fa3d98;
  auStack_1000[0xa5] = 0xfd2183b8;
  auStack_1000[0xa6] = 0x4afcb56c;
  auStack_1000[0xa7] = 0x2dd1d35b;
  auStack_1000[0xa8] = 0x9a53e479;
  auStack_1000[0xa9] = 0xb6f84565;
  auStack_1000[0xaa] = 0xd28e49bc;
  auStack_1000[0xab] = 0x4bfb9790;
  auStack_1000[0xac] = 0xe1ddf2da;
  auStack_1000[0xad] = 0xa4cb7e33;
  auStack_1000[0xae] = 0x62fb1341;
  auStack_1000[0xaf] = 0xcee4c6e8;
  auStack_1000[0xb0] = 0xef20cada;
  auStack_1000[0xb1] = 0x36774c01;
  auStack_1000[0xb2] = 0xd07e9efe;
  auStack_1000[0xb3] = 0x2bf11fb4;
  auStack_1000[0xb4] = 0x95dbda4d;
  auStack_1000[0xb5] = 0xae909198;
  auStack_1000[0xb6] = 0xeaad8e71;
  auStack_1000[0xb7] = 0x6b93d5a0;
  auStack_1000[0xb8] = 0xd08ed1d0;
  auStack_1000[0xb9] = 0xafc725e0;
  auStack_1000[0xba] = 0x8e3c5b2f;
  auStack_1000[0xbb] = 0x8e7594b7;
  auStack_1000[0xbc] = 0x8ff6e2fb;
  auStack_1000[0xbd] = 0xf2122b64;
  auStack_1000[0xbe] = 0x8888b812;
  auStack_1000[0xbf] = 0x900df01c;
  auStack_1000[0xc0] = 0x4fad5ea0;
  auStack_1000[0xc1] = 0x688fc31c;
  auStack_1000[0xc2] = 0xd1cff191;
  auStack_1000[0xc3] = 0xb3a8c1ad;
  auStack_1000[0xc4] = 0x2f2f2218;
  auStack_1000[0xc5] = 0xbe0e1777;
  auStack_1000[0xc6] = 0xea752dfe;
  auStack_1000[199] = 0x8b021fa1;
  auStack_1000[200] = 0xe5a0cc0f;
  auStack_1000[0xc9] = 0xb56f74e8;
  auStack_1000[0xca] = 0x18acf3d6;
  auStack_1000[0xcb] = 0xce89e299;
  auStack_1000[0xcc] = 0xb4a84fe0;
  auStack_1000[0xcd] = 0xfd13e0b7;
  auStack_1000[0xce] = 0x7cc43b81;
  auStack_1000[0xcf] = 0xd2ada8d9;
  auStack_1000[0xd0] = 0x165fa266;
  auStack_1000[0xd1] = 0x80957705;
  auStack_1000[0xd2] = 0x93cc7314;
  auStack_1000[0xd3] = 0x211a1477;
  auStack_1000[0xd4] = 0xe6ad2065;
  auStack_1000[0xd5] = 0x77b5fa86;
  auStack_1000[0xd6] = 0xc75442f5;
  auStack_1000[0xd7] = 0xfb9d35cf;
  auStack_1000[0xd8] = 0xebcdaf0c;
  auStack_1000[0xd9] = 0x7b3e89a0;
  auStack_1000[0xda] = 0xd6411bd3;
  auStack_1000[0xdb] = 0xae1e7e49;
  auStack_1000[0xdc] = 0x250e2d;
  auStack_1000[0xdd] = 0x2071b35e;
  auStack_1000[0xde] = 0x226800bb;
  auStack_1000[0xdf] = 0x57b8e0af;
  auStack_1000[0xe0] = 0x2464369b;
  auStack_1000[0xe1] = 0xf009b91e;
  auStack_1000[0xe2] = 0x5563911d;
  auStack_1000[0xe3] = 0x59dfa6aa;
  auStack_1000[0xe4] = 0x78c14389;
  auStack_1000[0xe5] = 0xd95a537f;
  auStack_1000[0xe6] = 0x207d5ba2;
  auStack_1000[0xe7] = 0x2e5b9c5;
  auStack_1000[0xe8] = 0x83260376;
  auStack_1000[0xe9] = 0x6295cfa9;
  auStack_1000[0xea] = 0x11c81968;
  auStack_1000[0xeb] = 0x4e734a41;
  auStack_1000[0xec] = 0xb3472dca;
  auStack_1000[0xed] = 0x7b14a94a;
  auStack_1000[0xee] = 0x1b510052;
  auStack_1000[0xef] = 0x9a532915;
  auStack_1000[0xf0] = 0xd60f573f;
  auStack_1000[0xf1] = 0xbc9bc6e4;
  auStack_1000[0xf2] = 0x2b60a476;
  auStack_1000[0xf3] = 0x81e67400;
  auStack_1000[0xf4] = 0x8ba6fb5;
  auStack_1000[0xf5] = 0x571be91f;
  auStack_1000[0xf6] = 0xf296ec6b;
  auStack_1000[0xf7] = 0x2a0dd915;
  auStack_1000[0xf8] = 0xb6636521;
  auStack_1000[0xf9] = 0xe7b9f9b6;
  auStack_1000[0xfa] = 0xff34052e;
  auStack_1000[0xfb] = 0xc5855664;
  auStack_1000[0xfc] = 0x53b02d5d;
  auStack_1000[0xfd] = 0xa99f8fa1;
  auStack_1000[0xfe] = 0x8ba4799;
  auStack_1000[0xff] = 0x6e85076a;
  auStack_1000[0x100] = 0x4b7a70e9;
  auStack_1000[0x101] = 0xb5b32944;
  auStack_1000[0x102] = 0xdb75092e;
  auStack_1000[0x103] = 0xc4192623;
  auStack_1000[0x104] = 0xad6ea6b0;
  auStack_1000[0x105] = 0x49a7df7d;
  auStack_1000[0x106] = 0x9cee60b8;
  auStack_1000[0x107] = 0x8fedb266;
  auStack_1000[0x108] = 0xecaa8c71;
  auStack_1000[0x109] = 0x699a17ff;
  auStack_1000[0x10a] = 0x5664526c;
  auStack_1000[0x10b] = 0xc2b19ee1;
  auStack_1000[0x10c] = 0x193602a5;
  auStack_1000[0x10d] = 0x75094c29;
  auStack_1000[0x10e] = 0xa0591340;
  auStack_1000[0x10f] = 0xe4183a3e;
  auStack_1000[0x110] = 0x3f54989a;
  auStack_1000[0x111] = 0x5b429d65;
  auStack_1000[0x112] = 0x6b8fe4d6;
  auStack_1000[0x113] = 0x99f73fd6;
  auStack_1000[0x114] = 0xa1d29c07;
  auStack_1000[0x115] = 0xefe830f5;
  auStack_1000[0x116] = 0x4d2d38e6;
  auStack_1000[0x117] = 0xf0255dc1;
  auStack_1000[0x118] = 0x4cdd2086;
  auStack_1000[0x119] = 0x8470eb26;
  auStack_1000[0x11a] = 0x6382e9c6;
  auStack_1000[0x11b] = 0x21ecc5e;
  auStack_1000[0x11c] = 0x9686b3f;
  auStack_1000[0x11d] = 0x3ebaefc9;
  auStack_1000[0x11e] = 0x3c971814;
  auStack_1000[0x11f] = 0x6b6a70a1;
  auStack_1000[0x120] = 0x687f3584;
  auStack_1000[0x121] = 0x52a0e286;
  auStack_1000[0x122] = 0xb79c5305;
  auStack_1000[0x123] = 0xaa500737;
  auStack_1000[0x124] = 0x3e07841c;
  auStack_1000[0x125] = 0x7fdeae5c;
  auStack_1000[0x126] = 0x8e7d44ec;
  auStack_1000[0x127] = 0x5716f2b8;
  auStack_1000[0x128] = 0xb03ada37;
  auStack_1000[0x129] = 0xf0500c0d;
  auStack_1000[0x12a] = 0xf01c1f04;
  auStack_1000[299] = 0x200b3ff;
  auStack_1000[300] = 0xae0cf51a;
  auStack_1000[0x12d] = 0x3cb574b2;
  auStack_1000[0x12e] = 0x25837a58;
  auStack_1000[0x12f] = 0xdc0921bd;
  auStack_1000[0x130] = 0xd19113f9;
  auStack_1000[0x131] = 0x7ca92ff6;
  auStack_1000[0x132] = 0x94324773;
  auStack_1000[0x133] = 0x22f54701;
  auStack_1000[0x134] = 0x3ae5e581;
  auStack_1000[0x135] = 0x37c2dadc;
  auStack_1000[0x136] = 0xc8b57634;
  auStack_1000[0x137] = 0x9af3dda7;
  auStack_1000[0x138] = 0xa9446146;
  auStack_1000[0x139] = 0xfd0030e;
  auStack_1000[0x13a] = 0xecc8c73e;
  auStack_1000[0x13b] = 0xa4751e41;
  auStack_1000[0x13c] = 0xe238cd99;
  auStack_1000[0x13d] = 0x3bea0e2f;
  auStack_1000[0x13e] = 0x3280bba1;
  auStack_1000[0x13f] = 0x183eb331;
  auStack_1000[0x140] = 0x4e548b38;
  auStack_1000[0x141] = 0x4f6db908;
  auStack_1000[0x142] = 0x6f420d03;
  auStack_1000[0x143] = 0xf60a04bf;
  auStack_1000[0x144] = 0x2cb81290;
  auStack_1000[0x145] = 0x24977c79;
  auStack_1000[0x146] = 0x5679b072;
  auStack_1000[0x147] = 0xbcaf89af;
  auStack_1000[0x148] = 0xde9a771f;
  auStack_1000[0x149] = 0xd9930810;
  auStack_1000[0x14a] = 0xb38bae12;
  auStack_1000[0x14b] = 0xdccf3f2e;
  auStack_1000[0x14c] = 0x5512721f;
  auStack_1000[0x14d] = 0x2e6b7124;
  auStack_1000[0x14e] = 0x501adde6;
  auStack_1000[0x14f] = 0x9f84cd87;
  auStack_1000[0x150] = 0x7a584718;
  auStack_1000[0x151] = 0x7408da17;
  auStack_1000[0x152] = 0xbc9f9abc;
  auStack_1000[0x153] = 0xe94b7d8c;
  auStack_1000[0x154] = 0xec7aec3a;
  auStack_1000[0x155] = 0xdb851dfa;
  auStack_1000[0x156] = 0x63094366;
  auStack_1000[0x157] = 0xc464c3d2;
  auStack_1000[0x158] = 0xef1c1847;
  auStack_1000[0x159] = 0x3215d908;
  auStack_1000[0x15a] = 0xdd433b37;
  auStack_1000[0x15b] = 0x24c2ba16;
  auStack_1000[0x15c] = 0x12a14d43;
  auStack_1000[0x15d] = 0x2a65c451;
  auStack_1000[0x15e] = 0x50940002;
  auStack_1000[0x15f] = 0x133ae4dd;
  auStack_1000[0x160] = 0x71dff89e;
  auStack_1000[0x161] = 0x10314e55;
  auStack_1000[0x162] = 0x81ac77d6;
  auStack_1000[0x163] = 0x5f11199b;
  auStack_1000[0x164] = 0x43556f1;
  auStack_1000[0x165] = 0xd7a3c76b;
  auStack_1000[0x166] = 0x3c11183b;
  auStack_1000[0x167] = 0x5924a509;
  auStack_1000[0x168] = 0xf28fe6ed;
  auStack_1000[0x169] = 0x97f1fbfa;
  auStack_1000[0x16a] = 0x9ebabf2c;
  auStack_1000[0x16b] = 0x1e153c6e;
  auStack_1000[0x16c] = 0x86e34570;
  auStack_1000[0x16d] = 0xeae96fb1;
  auStack_1000[0x16e] = 0x860e5e0a;
  auStack_1000[0x16f] = 0x5a3e2ab3;
  auStack_1000[0x170] = 0x771fe71c;
  auStack_1000[0x171] = 0x4e3d06fa;
  auStack_1000[0x172] = 0x2965dcb9;
  auStack_1000[0x173] = 0x99e71d0f;
  auStack_1000[0x174] = 0x803e89d6;
  auStack_1000[0x175] = 0x5266c825;
  auStack_1000[0x176] = 0x2e4cc978;
  auStack_1000[0x177] = 0x9c10b36a;
  auStack_1000[0x178] = 0xc6150eba;
  auStack_1000[0x179] = 0x94e2ea78;
  auStack_1000[0x17a] = 0xa5fc3c53;
  auStack_1000[0x17b] = 0x1e0a2df4;
  auStack_1000[0x17c] = 0xf2f74ea7;
  auStack_1000[0x17d] = 0x361d2b3d;
  auStack_1000[0x17e] = 0x1939260f;
  auStack_1000[0x17f] = 0x19c27960;
  auStack_1000[0x180] = 0x5223a708;
  auStack_1000[0x181] = 0xf71312b6;
  auStack_1000[0x182] = 0xebadfe6e;
  auStack_1000[0x183] = 0xeac31f66;
  auStack_1000[0x184] = 0xe3bc4595;
  auStack_1000[0x185] = 0xa67bc883;
  auStack_1000[0x186] = 0xb17f37d1;
  auStack_1000[0x187] = 0x18cff28;
  auStack_1000[0x188] = 0xc332ddef;
  auStack_1000[0x189] = 0xbe6c5aa5;
  auStack_1000[0x18a] = 0x65582185;
  auStack_1000[0x18b] = 0x68ab9802;
  auStack_1000[0x18c] = 0xeecea50f;
  auStack_1000[0x18d] = 0xdb2f953b;
  auStack_1000[0x18e] = 0x2aef7dad;
  auStack_1000[399] = 0x5b6e2f84;
  auStack_1000[400] = 0x1521b628;
  auStack_1000[0x191] = 0x29076170;
  auStack_1000[0x192] = 0xecdd4775;
  auStack_1000[0x193] = 0x619f1510;
  auStack_1000[0x194] = 0x13cca830;
  auStack_1000[0x195] = 0xeb61bd96;
  auStack_1000[0x196] = 0x334fe1e;
  auStack_1000[0x197] = 0xaa0363cf;
  auStack_1000[0x198] = 0xb5735c90;
  auStack_1000[0x199] = 0x4c70a239;
  auStack_1000[0x19a] = 0xd59e9e0b;
  auStack_1000[0x19b] = 0xcbaade14;
  auStack_1000[0x19c] = 0xeecc86bc;
  auStack_1000[0x19d] = 0x60622ca7;
  auStack_1000[0x19e] = 0x9cab5cab;
  auStack_1000[0x19f] = 0xb2f3846e;
  auStack_1000[0x1a0] = 0x648b1eaf;
  auStack_1000[0x1a1] = 0x19bdf0ca;
  auStack_1000[0x1a2] = 0xa02369b9;
  auStack_1000[0x1a3] = 0x655abb50;
  auStack_1000[0x1a4] = 0x40685a32;
  auStack_1000[0x1a5] = 0x3c2ab4b3;
  auStack_1000[0x1a6] = 0x319ee9d5;
  auStack_1000[0x1a7] = 0xc021b8f7;
  auStack_1000[0x1a8] = 0x9b540b19;
  auStack_1000[0x1a9] = 0x875fa099;
  auStack_1000[0x1aa] = 0x95f7997e;
  auStack_1000[0x1ab] = 0x623d7da8;
  auStack_1000[0x1ac] = 0xf837889a;
  auStack_1000[0x1ad] = 0x97e32d77;
  auStack_1000[0x1ae] = 0x11ed935f;
  auStack_1000[0x1af] = 0x16681281;
  auStack_1000[0x1b0] = 0xe358829;
  auStack_1000[0x1b1] = 0xc7e61fd6;
  auStack_1000[0x1b2] = 0x96dedfa1;
  auStack_1000[0x1b3] = 0x7858ba99;
  auStack_1000[0x1b4] = 0x57f584a5;
  auStack_1000[0x1b5] = 0x1b227263;
  auStack_1000[0x1b6] = 0x9b83c3ff;
  auStack_1000[0x1b7] = 0x1ac24696;
  auStack_1000[0x1b8] = 0xcdb30aeb;
  auStack_1000[0x1b9] = 0x532e3054;
  auStack_1000[0x1ba] = 0x8fd948e4;
  auStack_1000[0x1bb] = 0x6dbc3128;
  auStack_1000[0x1bc] = 0x58ebf2ef;
  auStack_1000[0x1bd] = 0x34c6ffea;
  auStack_1000[0x1be] = 0xfe28ed61;
  auStack_1000[0x1bf] = 0xee7c3c73;
  auStack_1000[0x1c0] = 0x5d4a14d9;
  auStack_1000[0x1c1] = 0xe864b7e3;
  auStack_1000[0x1c2] = 0x42105d14;
  auStack_1000[0x1c3] = 0x203e13e0;
  auStack_1000[0x1c4] = 0x45eee2b6;
  auStack_1000[0x1c5] = 0xa3aaabea;
  auStack_1000[0x1c6] = 0xdb6c4f15;
  auStack_1000[0x1c7] = 0xfacb4fd0;
  auStack_1000[0x1c8] = 0xc742f442;
  auStack_1000[0x1c9] = 0xef6abbb5;
  auStack_1000[0x1ca] = 0x654f3b1d;
  auStack_1000[0x1cb] = 0x41cd2105;
  auStack_1000[0x1cc] = 0xd81e799e;
  auStack_1000[0x1cd] = 0x86854dc7;
  auStack_1000[0x1ce] = 0xe44b476a;
  auStack_1000[0x1cf] = 0x3d816250;
  auStack_1000[0x1d0] = 0xcf62a1f2;
  auStack_1000[0x1d1] = 0x5b8d2646;
  auStack_1000[0x1d2] = 0xfc8883a0;
  auStack_1000[0x1d3] = 0xc1c7b6a3;
  auStack_1000[0x1d4] = 0x7f1524c3;
  auStack_1000[0x1d5] = 0x69cb7492;
  auStack_1000[0x1d6] = 0x47848a0b;
  auStack_1000[0x1d7] = 0x5692b285;
  auStack_1000[0x1d8] = 0x95bbf00;
  auStack_1000[0x1d9] = 0xad19489d;
  auStack_1000[0x1da] = 0x1462b174;
  auStack_1000[0x1db] = 0x23820e00;
  auStack_1000[0x1dc] = 0x58428d2a;
  auStack_1000[0x1dd] = 0xc55f5ea;
  auStack_1000[0x1de] = 0x1dadf43e;
  auStack_1000[0x1df] = 0x233f7061;
  auStack_1000[0x1e0] = 0x3372f092;
  auStack_1000[0x1e1] = 0x8d937e41;
  auStack_1000[0x1e2] = 0xd65fecf1;
  auStack_1000[0x1e3] = 0x6c223bdb;
  auStack_1000[0x1e4] = 0x7cde3759;
  auStack_1000[0x1e5] = 0xcbee7460;
  auStack_1000[0x1e6] = 0x4085f2a7;
  auStack_1000[0x1e7] = 0xce77326e;
  auStack_1000[0x1e8] = 0xa6078084;
  auStack_1000[0x1e9] = 0x19f8509e;
  auStack_1000[0x1ea] = 0xe8efd855;
  auStack_1000[0x1eb] = 0x61d99735;
  auStack_1000[0x1ec] = 0xa969a7aa;
  auStack_1000[0x1ed] = 0xc50c06c2;
  auStack_1000[0x1ee] = 0x5a04abfc;
  auStack_1000[0x1ef] = 0x800bcadc;
  auStack_1000[0x1f0] = 0x9e447a2e;
  auStack_1000[0x1f1] = 0xc3453484;
  auStack_1000[0x1f2] = 0xfdd56705;
  auStack_1000[499] = 0xe1e9ec9;
  auStack_1000[500] = 0xdb73dbd3;
  auStack_1000[0x1f5] = 0x105588cd;
  auStack_1000[0x1f6] = 0x675fda79;
  auStack_1000[0x1f7] = 0xe3674340;
  auStack_1000[0x1f8] = 0xc5c43465;
  auStack_1000[0x1f9] = 0x713e38d8;
  auStack_1000[0x1fa] = 0x3d28f89e;
  auStack_1000[0x1fb] = 0xf16dff20;
  auStack_1000[0x1fc] = 0x153e21e7;
  auStack_1000[0x1fd] = 0x8fb03d4a;
  auStack_1000[0x1fe] = 0xe6e39f2b;
  auStack_1000[0x1ff] = 0xdb83adf7;
  auStack_1000[0x200] = 0xe93d5a68;
  auStack_1000[0x201] = 0x948140f7;
  auStack_1000[0x202] = 0xf64c261c;
  auStack_1000[0x203] = 0x94692934;
  auStack_1000[0x204] = 0x411520f7;
  auStack_1000[0x205] = 0x7602d4f7;
  auStack_1000[0x206] = 0xbcf46b2e;
  auStack_1000[0x207] = 0xd4a20068;
  auStack_1000[0x208] = 0xd4082471;
  auStack_1000[0x209] = 0x3320f46a;
  auStack_1000[0x20a] = 0x43b7d4b7;
  auStack_1000[0x20b] = 0x500061af;
  auStack_1000[0x20c] = 0x1e39f62e;
  auStack_1000[0x20d] = 0x97244546;
  auStack_1000[0x20e] = 0x14214f74;
  auStack_1000[0x20f] = 0xbf8b8840;
  auStack_1000[0x210] = 0x4d95fc1d;
  auStack_1000[0x211] = 0x96b591af;
  auStack_1000[0x212] = 0x70f4ddd3;
  auStack_1000[0x213] = 0x66a02f45;
  auStack_1000[0x214] = 0xbfbc09ec;
  auStack_1000[0x215] = 0x3bd9785;
  auStack_1000[0x216] = 0x7fac6dd0;
  auStack_1000[0x217] = 0x31cb8504;
  auStack_1000[0x218] = 0x96eb27b3;
  auStack_1000[0x219] = 0x55fd3941;
  auStack_1000[0x21a] = 0xda2547e6;
  auStack_1000[0x21b] = 0xabca0a9a;
  auStack_1000[0x21c] = 0x28507825;
  auStack_1000[0x21d] = 0x530429f4;
  auStack_1000[0x21e] = 0xa2c86da;
  auStack_1000[0x21f] = 0xe9b66dfb;
  auStack_1000[0x220] = 0x68dc1462;
  auStack_1000[0x221] = 0xd7486900;
  auStack_1000[0x222] = 0x680ec0a4;
  auStack_1000[0x223] = 0x27a18dee;
  auStack_1000[0x224] = 0x4f3ffea2;
  auStack_1000[0x225] = 0xe887ad8c;
  auStack_1000[0x226] = 0xb58ce006;
  auStack_1000[0x227] = 0x7af4d6b6;
  auStack_1000[0x228] = 0xaace1e7c;
  auStack_1000[0x229] = 0xd3375fec;
  auStack_1000[0x22a] = 0xce78a399;
  auStack_1000[0x22b] = 0x406b2a42;
  auStack_1000[0x22c] = 0x20fe9e35;
  auStack_1000[0x22d] = 0xd9f385b9;
  auStack_1000[0x22e] = 0xee39d7ab;
  auStack_1000[0x22f] = 0x3b124e8b;
  auStack_1000[0x230] = 0x1dc9faf7;
  auStack_1000[0x231] = 0x4b6d1856;
  auStack_1000[0x232] = 0x26a36631;
  auStack_1000[0x233] = 0xeae397b2;
  auStack_1000[0x234] = 0x3a6efa74;
  auStack_1000[0x235] = 0xdd5b4332;
  auStack_1000[0x236] = 0x6841e7f7;
  auStack_1000[0x237] = 0xca7820fb;
  auStack_1000[0x238] = 0xfb0af54e;
  auStack_1000[0x239] = 0xd8feb397;
  auStack_1000[0x23a] = 0x454056ac;
  auStack_1000[0x23b] = 0xba489527;
  auStack_1000[0x23c] = 0x55533a3a;
  auStack_1000[0x23d] = 0x20838d87;
  auStack_1000[0x23e] = 0xfe6ba9b7;
  auStack_1000[0x23f] = 0xd096954b;
  auStack_1000[0x240] = 0x55a867bc;
  auStack_1000[0x241] = 0xa1159a58;
  auStack_1000[0x242] = 0xcca92963;
  auStack_1000[0x243] = 0x99e1db33;
  auStack_1000[0x244] = 0xa62a4a56;
  auStack_1000[0x245] = 0x3f3125f9;
  auStack_1000[0x246] = 0x5ef47e1c;
  auStack_1000[0x247] = 0x9029317c;
  auStack_1000[0x248] = 0xfdf8e802;
  auStack_1000[0x249] = 0x4272f70;
  auStack_1000[0x24a] = 0x80bb155c;
  auStack_1000[0x24b] = 0x5282ce3;
  auStack_1000[0x24c] = 0x95c11548;
  auStack_1000[0x24d] = 0xe4c66d22;
  auStack_1000[0x24e] = 0x48c1133f;
  auStack_1000[0x24f] = 0xc70f86dc;
  auStack_1000[0x250] = 0x7f9c9ee;
  auStack_1000[0x251] = 0x41041f0f;
  auStack_1000[0x252] = 0x404779a4;
  auStack_1000[0x253] = 0x5d886e17;
  auStack_1000[0x254] = 0x325f51eb;
  auStack_1000[0x255] = 0xd59bc0d1;
  auStack_1000[0x256] = 0xf2bcc18f;
  auStack_1000[599] = 0x41113564;
  auStack_1000[600] = 0x257b7834;
  auStack_1000[0x259] = 0x602a9c60;
  auStack_1000[0x25a] = 0xdff8e8a3;
  auStack_1000[0x25b] = 0x1f636c1b;
  auStack_1000[0x25c] = 0xe12b4c2;
  auStack_1000[0x25d] = 0x2e1329e;
  auStack_1000[0x25e] = 0xaf664fd1;
  auStack_1000[0x25f] = 0xcad18115;
  auStack_1000[0x260] = 0x6b2395e0;
  auStack_1000[0x261] = 0x333e92e1;
  auStack_1000[0x262] = 0x3b240b62;
  auStack_1000[0x263] = 0xeebeb922;
  auStack_1000[0x264] = 0x85b2a20e;
  auStack_1000[0x265] = 0xe6ba0d99;
  auStack_1000[0x266] = 0xde720c8c;
  auStack_1000[0x267] = 0x2da2f728;
  auStack_1000[0x268] = 0xd0127845;
  auStack_1000[0x269] = 0x95b794fd;
  auStack_1000[0x26a] = 0x647d0862;
  auStack_1000[0x26b] = 0xe7ccf5f0;
  auStack_1000[0x26c] = 0x5449a36f;
  auStack_1000[0x26d] = 0x877d48fa;
  auStack_1000[0x26e] = 0xc39dfd27;
  auStack_1000[0x26f] = 0xf33e8d1e;
  auStack_1000[0x270] = 0xa476341;
  auStack_1000[0x271] = 0x992eff74;
  auStack_1000[0x272] = 0x3a6f6eab;
  auStack_1000[0x273] = 0xf4f8fd37;
  auStack_1000[0x274] = 0xa812dc60;
  auStack_1000[0x275] = 0xa1ebddf8;
  auStack_1000[0x276] = 0x991be14c;
  auStack_1000[0x277] = 0xdb6e6b0d;
  auStack_1000[0x278] = 0xc67b5510;
  auStack_1000[0x279] = 0x6d672c37;
  auStack_1000[0x27a] = 0x2765d43b;
  auStack_1000[0x27b] = 0xdcd0e804;
  auStack_1000[0x27c] = 0xf1290dc7;
  auStack_1000[0x27d] = 0xcc00ffa3;
  auStack_1000[0x27e] = 0xb5390f92;
  auStack_1000[0x27f] = 0x690fed0b;
  auStack_1000[0x280] = 0x667b9ffb;
  auStack_1000[0x281] = 0xcedb7d9c;
  auStack_1000[0x282] = 0xa091cf0b;
  auStack_1000[0x283] = 0xd9155ea3;
  auStack_1000[0x284] = 0xbb132f88;
  auStack_1000[0x285] = 0x515bad24;
  auStack_1000[0x286] = 0x7b9479bf;
  auStack_1000[0x287] = 0x763bd6eb;
  auStack_1000[0x288] = 0x37392eb3;
  auStack_1000[0x289] = 0xcc115979;
  auStack_1000[0x28a] = 0x8026e297;
  auStack_1000[0x28b] = 0xf42e312d;
  auStack_1000[0x28c] = 0x6842ada7;
  auStack_1000[0x28d] = 0xc66a2b3b;
  auStack_1000[0x28e] = 0x12754ccc;
  auStack_1000[0x28f] = 0x782ef11c;
  auStack_1000[0x290] = 0x6a124237;
  auStack_1000[0x291] = 0xb79251e7;
  auStack_1000[0x292] = 0x6a1bbe6;
  auStack_1000[0x293] = 0x4bfb6350;
  auStack_1000[0x294] = 0x1a6b1018;
  auStack_1000[0x295] = 0x11caedfa;
  auStack_1000[0x296] = 0x3d25bdd8;
  auStack_1000[0x297] = 0xe2e1c3c9;
  auStack_1000[0x298] = 0x44421659;
  auStack_1000[0x299] = 0xa121386;
  auStack_1000[0x29a] = 0xd90cec6e;
  auStack_1000[0x29b] = 0xd5abea2a;
  auStack_1000[0x29c] = 0x64af674e;
  auStack_1000[0x29d] = 0xda86a85f;
  auStack_1000[0x29e] = 0xbebfe988;
  auStack_1000[0x29f] = 0x64e4c3fe;
  auStack_1000[0x2a0] = 0x9dbc8057;
  auStack_1000[0x2a1] = 0xf0f7c086;
  auStack_1000[0x2a2] = 0x60787bf8;
  auStack_1000[0x2a3] = 0x6003604d;
  auStack_1000[0x2a4] = 0xd1fd8346;
  auStack_1000[0x2a5] = 0xf6381fb0;
  auStack_1000[0x2a6] = 0x7745ae04;
  auStack_1000[0x2a7] = 0xd736fccc;
  auStack_1000[0x2a8] = 0x83426b33;
  auStack_1000[0x2a9] = 0xf01eab71;
  auStack_1000[0x2aa] = 0xb0804187;
  auStack_1000[0x2ab] = 0x3c005e5f;
  auStack_1000[0x2ac] = 0x77a057be;
  auStack_1000[0x2ad] = 0xbde8ae24;
  auStack_1000[0x2ae] = 0x55464299;
  auStack_1000[0x2af] = 0xbf582e61;
  auStack_1000[0x2b0] = 0x4e58f48f;
  auStack_1000[0x2b1] = 0xf2ddfda2;
  auStack_1000[0x2b2] = 0xf474ef38;
  auStack_1000[0x2b3] = 0x8789bdc2;
  auStack_1000[0x2b4] = 0x5366f9c3;
  auStack_1000[0x2b5] = 0xc8b38e74;
  auStack_1000[0x2b6] = 0xb475f255;
  auStack_1000[0x2b7] = 0x46fcd9b9;
  auStack_1000[0x2b8] = 0x7aeb2661;
  auStack_1000[0x2b9] = 0x8b1ddf84;
  auStack_1000[0x2ba] = 0x846a0e79;
  auStack_1000[699] = 0x915f95e2;
  auStack_1000[700] = 0x466e598e;
  auStack_1000[0x2bd] = 0x20b45770;
  auStack_1000[0x2be] = 0x8cd55591;
  auStack_1000[0x2bf] = 0xc902de4c;
  auStack_1000[0x2c0] = 0xb90bace1;
  auStack_1000[0x2c1] = 0xbb8205d0;
  auStack_1000[0x2c2] = 0x11a86248;
  auStack_1000[0x2c3] = 0x7574a99e;
  auStack_1000[0x2c4] = 0xb77f19b6;
  auStack_1000[0x2c5] = 0xe0a9dc09;
  auStack_1000[0x2c6] = 0x662d09a1;
  auStack_1000[0x2c7] = 0xc4324633;
  auStack_1000[0x2c8] = 0xe85a1f02;
  auStack_1000[0x2c9] = 0x9f0be8c;
  auStack_1000[0x2ca] = 0x4a99a025;
  auStack_1000[0x2cb] = 0x1d6efe10;
  auStack_1000[0x2cc] = 0x1ab93d1d;
  auStack_1000[0x2cd] = 0xba5a4df;
  auStack_1000[0x2ce] = 0xa186f20f;
  auStack_1000[0x2cf] = 0x2868f169;
  auStack_1000[0x2d0] = 0xdcb7da83;
  auStack_1000[0x2d1] = 0x573906fe;
  auStack_1000[0x2d2] = 0xa1e2ce9b;
  auStack_1000[0x2d3] = 0x4fcd7f52;
  auStack_1000[0x2d4] = 0x50115e01;
  auStack_1000[0x2d5] = 0xa70683fa;
  auStack_1000[0x2d6] = 0xa002b5c4;
  auStack_1000[0x2d7] = 0xde6d027;
  auStack_1000[0x2d8] = 0x9af88c27;
  auStack_1000[0x2d9] = 0x773f8641;
  auStack_1000[0x2da] = 0xc3604c06;
  auStack_1000[0x2db] = 0x61a806b5;
  auStack_1000[0x2dc] = 0xf0177a28;
  auStack_1000[0x2dd] = 0xc0f586e0;
  auStack_1000[0x2de] = 0x6058aa;
  auStack_1000[0x2df] = 0x30dc7d62;
  auStack_1000[0x2e0] = 0x11e69ed7;
  auStack_1000[0x2e1] = 0x2338ea63;
  auStack_1000[0x2e2] = 0x53c2dd94;
  auStack_1000[0x2e3] = 0xc2c21634;
  auStack_1000[0x2e4] = 0xbbcbee56;
  auStack_1000[0x2e5] = 0x90bcb6de;
  auStack_1000[0x2e6] = 0xebfc7da1;
  auStack_1000[0x2e7] = 0xce591d76;
  auStack_1000[0x2e8] = 0x6f05e409;
  auStack_1000[0x2e9] = 0x4b7c0188;
  auStack_1000[0x2ea] = 0x39720a3d;
  auStack_1000[0x2eb] = 0x7c927c24;
  auStack_1000[0x2ec] = 0x86e3725f;
  auStack_1000[0x2ed] = 0x724d9db9;
  auStack_1000[0x2ee] = 0x1ac15bb4;
  auStack_1000[0x2ef] = 0xd39eb8fc;
  auStack_1000[0x2f0] = 0xed545578;
  auStack_1000[0x2f1] = 0x8fca5b5;
  auStack_1000[0x2f2] = 0xd83d7cd3;
  auStack_1000[0x2f3] = 0x4dad0fc4;
  auStack_1000[0x2f4] = 0x1e50ef5e;
  auStack_1000[0x2f5] = 0xb161e6f8;
  auStack_1000[0x2f6] = 0xa28514d9;
  auStack_1000[0x2f7] = 0x6c51133c;
  auStack_1000[0x2f8] = 0x6fd5c7e7;
  auStack_1000[0x2f9] = 0x56e14ec4;
  auStack_1000[0x2fa] = 0x362abfce;
  auStack_1000[0x2fb] = 0xddc6c837;
  auStack_1000[0x2fc] = 0xd79a3234;
  auStack_1000[0x2fd] = 0x92638212;
  auStack_1000[0x2fe] = 0x670efa8e;
  auStack_1000[0x2ff] = 0x406000e0;
  auStack_1000[0x300] = 0x3a39ce37;
  auStack_1000[0x301] = 0xd3faf5cf;
  auStack_1000[0x302] = 0xabc27737;
  auStack_1000[0x303] = 0x5ac52d1b;
  auStack_1000[0x304] = 0x5cb0679e;
  auStack_1000[0x305] = 0x4fa33742;
  auStack_1000[0x306] = 0xd3822740;
  auStack_1000[0x307] = 0x99bc9bbe;
  auStack_1000[0x308] = 0xd5118e9d;
  auStack_1000[0x309] = 0xbf0f7315;
  auStack_1000[0x30a] = 0xd62d1c7e;
  auStack_1000[0x30b] = 0xc700c47b;
  auStack_1000[0x30c] = 0xb78c1b6b;
  auStack_1000[0x30d] = 0x21a19045;
  auStack_1000[0x30e] = 0xb26eb1be;
  auStack_1000[0x30f] = 0x6a366eb4;
  auStack_1000[0x310] = 0x5748ab2f;
  auStack_1000[0x311] = 0xbc946e79;
  auStack_1000[0x312] = 0xc6a376d2;
  auStack_1000[0x313] = 0x6549c2c8;
  auStack_1000[0x314] = 0x530ff8ee;
  auStack_1000[0x315] = 0x468dde7d;
  auStack_1000[0x316] = 0xd5730a1d;
  auStack_1000[0x317] = 0x4cd04dc6;
  auStack_1000[0x318] = 0x2939bbdb;
  auStack_1000[0x319] = 0xa9ba4650;
  auStack_1000[0x31a] = 0xac9526e8;
  auStack_1000[0x31b] = 0xbe5ee304;
  auStack_1000[0x31c] = 0xa1fad5f0;
  auStack_1000[0x31d] = 0x6a2d519a;
  auStack_1000[0x31e] = 0x63ef8ce2;
  auStack_1000[799] = 0x9a86ee22;
  auStack_1000[800] = 0xc089c2b8;
  auStack_1000[0x321] = 0x43242ef6;
  auStack_1000[0x322] = 0xa51e03aa;
  auStack_1000[0x323] = 0x9cf2d0a4;
  auStack_1000[0x324] = 0x83c061ba;
  auStack_1000[0x325] = 0x9be96a4d;
  auStack_1000[0x326] = 0x8fe51550;
  auStack_1000[0x327] = 0xba645bd6;
  auStack_1000[0x328] = 0x2826a2f9;
  auStack_1000[0x329] = 0xa73a3ae1;
  auStack_1000[0x32a] = 0x4ba99586;
  auStack_1000[0x32b] = 0xef5562e9;
  auStack_1000[0x32c] = 0xc72fefd3;
  auStack_1000[0x32d] = 0xf752f7da;
  auStack_1000[0x32e] = 0x3f046f69;
  auStack_1000[0x32f] = 0x77fa0a59;
  auStack_1000[0x330] = 0x80e4a915;
  auStack_1000[0x331] = 0x87b08601;
  auStack_1000[0x332] = 0x9b09e6ad;
  auStack_1000[0x333] = 0x3b3ee593;
  auStack_1000[0x334] = 0xe990fd5a;
  auStack_1000[0x335] = 0x9e34d797;
  auStack_1000[0x336] = 0x2cf0b7d9;
  auStack_1000[0x337] = 0x22b8b51;
  auStack_1000[0x338] = 0x96d5ac3a;
  auStack_1000[0x339] = 0x17da67d;
  auStack_1000[0x33a] = 0xd1cf3ed6;
  auStack_1000[0x33b] = 0x7c7d2d28;
  auStack_1000[0x33c] = 0x1f9f25cf;
  auStack_1000[0x33d] = 0xadf2b89b;
  auStack_1000[0x33e] = 0x5ad6b472;
  auStack_1000[0x33f] = 0x5a88f54c;
  auStack_1000[0x340] = 0xe029ac71;
  auStack_1000[0x341] = 0xe019a5e6;
  auStack_1000[0x342] = 0x47b0acfd;
  auStack_1000[0x343] = 0xed93fa9b;
  auStack_1000[0x344] = 0xe8d3c48d;
  auStack_1000[0x345] = 0x283b57cc;
  auStack_1000[0x346] = 0xf8d56629;
  auStack_1000[0x347] = 0x79132e28;
  auStack_1000[0x348] = 0x785f0191;
  auStack_1000[0x349] = 0xed756055;
  auStack_1000[0x34a] = 0xf7960e44;
  auStack_1000[0x34b] = 0xe3d35e8c;
  auStack_1000[0x34c] = 0x15056dd4;
  auStack_1000[0x34d] = 0x88f46dba;
  auStack_1000[0x34e] = 0x3a16125;
  auStack_1000[0x34f] = 0x564f0bd;
  auStack_1000[0x350] = 0xc3eb9e15;
  auStack_1000[0x351] = 0x3c9057a2;
  auStack_1000[0x352] = 0x97271aec;
  auStack_1000[0x353] = 0xa93a072a;
  auStack_1000[0x354] = 0x1b3f6d9b;
  auStack_1000[0x355] = 0x1e6321f5;
  auStack_1000[0x356] = 0xf59c66fb;
  auStack_1000[0x357] = 0x26dcf319;
  auStack_1000[0x358] = 0x7533d928;
  auStack_1000[0x359] = 0xb155fdf5;
  auStack_1000[0x35a] = 0x3563482;
  auStack_1000[0x35b] = 0x8aba3cbb;
  auStack_1000[0x35c] = 0x28517711;
  auStack_1000[0x35d] = 0xc20ad9f8;
  auStack_1000[0x35e] = 0xabcc5167;
  auStack_1000[0x35f] = 0xccad925f;
  auStack_1000[0x360] = 0x4de81751;
  auStack_1000[0x361] = 0x3830dc8e;
  auStack_1000[0x362] = 0x379d5862;
  auStack_1000[0x363] = 0x9320f991;
  auStack_1000[0x364] = 0xea7a90c2;
  auStack_1000[0x365] = 0xfb3e7bce;
  auStack_1000[0x366] = 0x5121ce64;
  auStack_1000[0x367] = 0x774fbe32;
  auStack_1000[0x368] = 0xa8b6e37e;
  auStack_1000[0x369] = 0xc3293d46;
  auStack_1000[0x36a] = 0x48de5369;
  auStack_1000[0x36b] = 0x6413e680;
  auStack_1000[0x36c] = 0xa2ae0810;
  auStack_1000[0x36d] = 0xdd6db224;
  auStack_1000[0x36e] = 0x69852dfd;
  auStack_1000[0x36f] = 0x9072166;
  auStack_1000[0x370] = 0xb39a460a;
  auStack_1000[0x371] = 0x6445c0dd;
  auStack_1000[0x372] = 0x586cdecf;
  auStack_1000[0x373] = 0x1c20c8ae;
  auStack_1000[0x374] = 0x5bbef7dd;
  auStack_1000[0x375] = 0x1b588d40;
  auStack_1000[0x376] = 0xccd2017f;
  auStack_1000[0x377] = 0x6bb4e3bb;
  auStack_1000[0x378] = 0xdda26a7e;
  auStack_1000[0x379] = 0x3a59ff45;
  auStack_1000[0x37a] = 0x3e350a44;
  auStack_1000[0x37b] = 0xbcb4cdd5;
  auStack_1000[0x37c] = 0x72eacea8;
  auStack_1000[0x37d] = 0xfa6484bb;
  auStack_1000[0x37e] = 0x8d6612ae;
  auStack_1000[0x37f] = 0xbf3c6f47;
  auStack_1000[0x380] = 0xd29be463;
  auStack_1000[0x381] = 0x542f5d9e;
  auStack_1000[0x382] = 0xaec2771b;
  auStack_1000[899] = 0xf64e6370;
  auStack_1000[900] = 0x740e0d8d;
  auStack_1000[0x385] = 0xe75b1357;
  auStack_1000[0x386] = 0xf8721671;
  auStack_1000[0x387] = 0xaf537d5d;
  auStack_1000[0x388] = 0x4040cb08;
  auStack_1000[0x389] = 0x4eb4e2cc;
  auStack_1000[0x38a] = 0x34d2466a;
  auStack_1000[0x38b] = 0x115af84;
  auStack_1000[0x38c] = 0xe1b00428;
  auStack_1000[0x38d] = 0x95983a1d;
  auStack_1000[0x38e] = 0x6b89fb4;
  auStack_1000[0x38f] = 0xce6ea048;
  auStack_1000[0x390] = 0x6f3f3b82;
  auStack_1000[0x391] = 0x3520ab82;
  auStack_1000[0x392] = 0x11a1d4b;
  auStack_1000[0x393] = 0x277227f8;
  auStack_1000[0x394] = 0x611560b1;
  auStack_1000[0x395] = 0xe7933fdc;
  auStack_1000[0x396] = 0xbb3a792b;
  auStack_1000[0x397] = 0x344525bd;
  auStack_1000[0x398] = 0xa08839e1;
  auStack_1000[0x399] = 0x51ce794b;
  auStack_1000[0x39a] = 0x2f32c9b7;
  auStack_1000[0x39b] = 0xa01fbac9;
  auStack_1000[0x39c] = 0xe01cc87e;
  auStack_1000[0x39d] = 0xbcc7d1f6;
  auStack_1000[0x39e] = 0xcf0111c3;
  auStack_1000[0x39f] = 0xa1e8aac7;
  auStack_1000[0x3a0] = 0x1a908749;
  auStack_1000[0x3a1] = 0xd44fbd9a;
  auStack_1000[0x3a2] = 0xd0dadecb;
  auStack_1000[0x3a3] = 0xd50ada38;
  auStack_1000[0x3a4] = 0x339c32a;
  auStack_1000[0x3a5] = 0xc6913667;
  auStack_1000[0x3a6] = 0x8df9317c;
  auStack_1000[0x3a7] = 0xe0b12b4f;
  auStack_1000[0x3a8] = 0xf79e59b7;
  auStack_1000[0x3a9] = 0x43f5bb3a;
  auStack_1000[0x3aa] = 0xf2d519ff;
  auStack_1000[0x3ab] = 0x27d9459c;
  auStack_1000[0x3ac] = 0xbf97222c;
  auStack_1000[0x3ad] = 0x15e6fc2a;
  auStack_1000[0x3ae] = 0xf91fc71;
  auStack_1000[0x3af] = 0x9b941525;
  auStack_1000[0x3b0] = 0xfae59361;
  auStack_1000[0x3b1] = 0xceb69ceb;
  auStack_1000[0x3b2] = 0xc2a86459;
  auStack_1000[0x3b3] = 0x12baa8d1;
  auStack_1000[0x3b4] = 0xb6c1075e;
  auStack_1000[0x3b5] = 0xe3056a0c;
  auStack_1000[0x3b6] = 0x10d25065;
  auStack_1000[0x3b7] = 0xcb03a442;
  auStack_1000[0x3b8] = 0xe0ec6e0e;
  auStack_1000[0x3b9] = 0x1698db3b;
  auStack_1000[0x3ba] = 0x4c98a0be;
  auStack_1000[0x3bb] = 0x3278e964;
  auStack_1000[0x3bc] = 0x9f1f9532;
  auStack_1000[0x3bd] = 0xe0d392df;
  auStack_1000[0x3be] = 0xd3a0342b;
  auStack_1000[0x3bf] = 0x8971f21e;
  auStack_1000[0x3c0] = 0x1b0a7441;
  *param_1 = 0x243f6a88;
  param_1[1] = 0x85a308d3;
  param_1[2] = 0x13198a2e;
  param_1[3] = 0x3707344;
  param_1[4] = 0xa4093822;
  param_1[5] = 0x299f31d0;
  param_1[6] = 0x82efa98;
  param_1[7] = 0xec4e6c89;
  param_1[8] = 0x452821e6;
  param_1[9] = 0x38d01377;
  auStack_1000[0x3c1] = 0x4ba3348c;
  auStack_1000[0x3c2] = 0xc5be7120;
  auStack_1000[0x3c3] = 0xc37632d8;
  auStack_1000[0x3c4] = 0xdf359f8d;
  auStack_1000[0x3c5] = 0x9b992f2e;
  auStack_1000[0x3c6] = 0xe60b6f47;
  auStack_1000[0x3c7] = 0xfe3f11d;
  auStack_1000[0x3c8] = 0xe54cda54;
  auStack_1000[0x3c9] = 0x1edad891;
  auStack_1000[0x3ca] = 0xce6279cf;
  auStack_1000[0x3cb] = 0xcd3e7e6f;
  auStack_1000[0x3cc] = 0x1618b166;
  auStack_1000[0x3cd] = 0xfd2c1d05;
  auStack_1000[0x3ce] = 0x848fd2c5;
  auStack_1000[0x3cf] = 0xf6fb2299;
  auStack_1000[0x3d0] = 0xf523f357;
  auStack_1000[0x3d1] = 0xa6327623;
  auStack_1000[0x3d2] = 0x93a83531;
  auStack_1000[0x3d3] = 0x56cccd02;
  auStack_1000[0x3d4] = 0xacf08162;
  auStack_1000[0x3d5] = 0x5a75ebb5;
  auStack_1000[0x3d6] = 0x6e163697;
  auStack_1000[0x3d7] = 0x88d273cc;
  auStack_1000[0x3d8] = 0xde966292;
  auStack_1000[0x3d9] = 0x81b949d0;
  auStack_1000[0x3da] = 0x4c50901b;
  auStack_1000[0x3db] = 0x71c65614;
  auStack_1000[0x3dc] = 0xe6c6c7bd;
  auStack_1000[0x3dd] = 0x327a140a;
  auStack_1000[0x3de] = 0x45e1d006;
  auStack_1000[0x3df] = 0xc3f27b9a;
  auStack_1000[0x3e0] = 0xc9aa53fd;
  auStack_1000[0x3e1] = 0x62a80f00;
  auStack_1000[0x3e2] = 0xbb25bfe2;
  auStack_1000[0x3e3] = 0x35bdd2f6;
  auStack_1000[0x3e4] = 0x71126905;
  auStack_1000[0x3e5] = 0xb2040222;
  auStack_1000[0x3e6] = 0xb6cbcf7c;
  auStack_1000[999] = 0xcd769c2b;
  auStack_1000[1000] = 0x53113ec0;
  auStack_1000[0x3e9] = 0x1640e3d3;
  auStack_1000[0x3ea] = 0x38abbd60;
  auStack_1000[0x3eb] = 0x2547adf0;
  auStack_1000[0x3ec] = 0xba38209c;
  auStack_1000[0x3ed] = 0xf746ce76;
  auStack_1000[0x3ee] = 0x77afa1c5;
  auStack_1000[0x3ef] = 0x20756060;
  auStack_1000[0x3f0] = 0x85cbfe4e;
  auStack_1000[0x3f1] = 0x8ae88dd8;
  auStack_1000[0x3f2] = 0x7aaaf9b0;
  auStack_1000[0x3f3] = 0x4cf9aa7e;
  auStack_1000[0x3f4] = 0x1948c25c;
  auStack_1000[0x3f5] = 0x2fb8a8c;
  auStack_1000[0x3f6] = 0x1c36ae4;
  auStack_1000[0x3f7] = 0xd6ebe1f9;
  auStack_1000[0x3f8] = 0x90d4f869;
  auStack_1000[0x3f9] = 0xa65cdea0;
  auStack_1000[0x3fa] = 0x3f09252d;
  auStack_1000[0x3fb] = 0xc208e69f;
  auStack_1000[0x3fc] = 0xb74e6132;
  auStack_1000[0x3fd] = 0xce77e25b;
  auStack_1000[0x3fe] = 0x578fdfe3;
  auStack_1000[0x3ff] = 0x3ac372e6;
  param_1[10] = 0xbe5466cf;
  param_1[0xb] = 0x34e90c6c;
  param_1[0xc] = 0xc0ac29b7;
  param_1[0xd] = 0xc97c50dd;
  param_1[0xe] = 0x3f84d5b5;
  param_1[0xf] = 0xb5470917;
  param_1[0x10] = 0x9216d5d9;
  param_1[0x11] = 0x8979fb1b;
  puVar2 = auStack_1000;
  puVar3 = param_1 + 0x12;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



/**************************************************/

/* Function: FUN_10011450 @ 10011450 */

void __thiscall FUN_10011450(void *this,uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_1;
  do {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
  FUN_1000e570(this);
  if (puVar2 != (uint *)((int)param_1 + 1)) {
    FUN_10011220(this,param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10011490 @ 10011490 */

undefined4 * __fastcall FUN_10011490(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[7] = 0;
  param_1[2] = 0;
  puVar1 = operator_new(0x1000);
  *param_1 = puVar1;
  for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = operator_new(0xc00c);
  param_1[1] = puVar1;
  for (iVar2 = 0x3003; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_100114e0 @ 100114e0 */

void __fastcall FUN_100114e0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10011510 @ 10011510 */

undefined4 __thiscall FUN_10011510(void *this,int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0xc) = 0x80;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0xd) = 0;
  return 1;
}



/**************************************************/

/* Function: FUN_10011540 @ 10011540 */

undefined4 __thiscall FUN_10011540(void *this,int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(int *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x20) = 0x80;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x21) = 0;
  return 1;
}



/**************************************************/

/* Function: FUN_10011570 @ 10011570 */

uint __thiscall FUN_10011570(void *this,char param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1 << (param_1 - 1U & 0x1f);
  uVar3 = 0;
  while (uVar4 != 0) {
    bVar1 = *(byte *)((int)this + 0xc);
    if (bVar1 == 0x80) {
      uVar2 = *(undefined1 *)(*(int *)((int)this + 0x14) + *(int *)((int)this + 8));
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      *(undefined1 *)((int)this + 0xd) = uVar2;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    }
    if ((*(byte *)((int)this + 0xd) & bVar1) != 0) {
      uVar3 = uVar3 | uVar4;
    }
    uVar4 = uVar4 >> 1;
    *(byte *)((int)this + 0xc) = bVar1 >> 1;
    if (bVar1 >> 1 == 0) {
      *(undefined1 *)((int)this + 0xc) = 0x80;
    }
  }
  return uVar3;
}



/**************************************************/

/* Function: FUN_100115d0 @ 100115d0 */

undefined4 __fastcall FUN_100115d0(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (((param_1[2] != 0) && (param_1[7] != 0)) && (param_1[2] != param_1[7])) {
    param_1[10] = 0;
    uVar6 = 1;
    while( true ) {
      while( true ) {
        bVar1 = *(byte *)(param_1 + 3);
        if (bVar1 == 0x80) {
          uVar2 = *(undefined1 *)(param_1[5] + param_1[2]);
          param_1[5] = param_1[5] + 1;
          *(undefined1 *)((int)param_1 + 0xd) = uVar2;
          param_1[4] = param_1[4] + 1;
        }
        *(byte *)(param_1 + 3) = bVar1 >> 1;
        if (bVar1 >> 1 == 0) {
          *(undefined1 *)(param_1 + 3) = 0x80;
        }
        if ((*(byte *)((int)param_1 + 0xd) & bVar1) == 0) break;
        uVar3 = FUN_10011570(param_1,'\b');
        *(char *)(param_1[10] + param_1[7]) = (char)uVar3;
        param_1[10] = param_1[10] + 1;
        *(char *)(uVar6 + *param_1) = (char)uVar3;
        uVar6 = uVar6 + 1 & 0xfff;
      }
      uVar3 = FUN_10011570(param_1,'\f');
      if (uVar3 == 0) break;
      uVar4 = FUN_10011570(param_1,'\x04');
      iVar5 = 0;
      if (-1 < (int)(uVar4 + 1)) {
        do {
          uVar2 = *(undefined1 *)((iVar5 + uVar3 & 0xfff) + *param_1);
          *(undefined1 *)(param_1[10] + param_1[7]) = uVar2;
          param_1[10] = param_1[10] + 1;
          *(undefined1 *)(uVar6 + *param_1) = uVar2;
          uVar6 = uVar6 + 1 & 0xfff;
          iVar5 = iVar5 + 1;
        } while (iVar5 <= (int)(uVar4 + 1));
      }
    }
    param_1[0xb] = param_1[10];
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: RtlUnwind @ 100116cc */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x100116cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

/* Function: FUN_100116d2 @ 100116d2 */

void __cdecl FUN_100116d2(ulong param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  p_Var1->_holdrand = param_1;
  return;
}



/**************************************************/

/* Function: _rand @ 100116df */

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  _ptiddata p_Var1;
  uint uVar2;
  
  p_Var1 = __getptd();
  uVar2 = p_Var1->_holdrand * 0x343fd + 0x269ec3;
  p_Var1->_holdrand = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



/**************************************************/

/* Function: __allshr @ 10011710 */

/* Library Function - Single Match
    __allshr
   
   Library: Visual Studio */

undefined8 __fastcall __allshr(byte param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_1) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_1 & 0x1f));
}



/**************************************************/

/* Function: FID_conflict:__time32 @ 10011731 */

/* Library Function - Multiple Matches With Different Base Names
    __time32
    _time
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__time32_t __cdecl FID_conflict___time32(__time32_t *_Time)

{
  undefined8 uVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  uVar1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (_Time != (__time32_t *)0x0) {
    *_Time = (__time32_t)uVar1;
  }
  return (__time32_t)uVar1;
}



/**************************************************/

/* Function: __aulldiv @ 10011770 */

/* Library Function - Single Match
    __aulldiv
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

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

/* Function: Unwind@100117e0 @ 100117e0 */

void Unwind_100117e0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@10011830 @ 10011830 */

void Unwind_10011830(void)

{
  int unaff_EBP;
  
  FUN_10011440((undefined4 *)(unaff_EBP + -0x1054));
  return;
}



/**************************************************/

/* Function: Unwind@1001183b @ 1001183b */

void Unwind_1001183b(void)

{
  int unaff_EBP;
  
  FUN_100114e0((undefined4 *)(unaff_EBP + -0x10a4));
  return;
}



/**************************************************/

