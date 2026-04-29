/* Function: FUN_10001000 @ 10001000 */

undefined4 __thiscall FUN_10001000(void *this,int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *unaff_EBP;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    *(undefined4 *)((int)this + 0x60) = 0xc300f201;
    return 0;
  }
  FUN_10002150();
  iVar1 = (**(code **)(*(int *)this + 0x3c))
                    (param_1,param_2,(int *)((int)this + 0x6c),(int *)((int)this + 0x70));
  if (((iVar1 != 0) && (*(int *)((int)this + 0x6c) != 0)) &&
     (iVar1 = *(int *)((int)this + 0x70), iVar1 != 0)) {
    *unaff_EBP = iVar1;
    return 1;
  }
  *(undefined4 *)((int)this + 0x60) = 0xc300f202;
  return 0;
}



/**************************************************/

/* Function: FUN_10001070 @ 10001070 */

undefined4 __thiscall
FUN_10001070(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4,
            int *param_5)

{
  uint uVar1;
  int iVar2;
  
  if ((param_3 != (undefined4 *)0x0) && ((uint)(*(int *)((int)this + 0x70) * 4) <= param_4)) {
    uVar1 = 0;
    if (*(int *)((int)this + 0x70) != 0) {
      iVar2 = 0;
      do {
        *param_3 = *(undefined4 *)(iVar2 + *(int *)((int)this + 0x6c));
        uVar1 = uVar1 + 1;
        param_3 = param_3 + 1;
        iVar2 = iVar2 + 0x20;
      } while (uVar1 < *(uint *)((int)this + 0x70));
    }
    *param_5 = *(int *)((int)this + 0x70) * 4;
    return 1;
  }
  *(undefined4 *)((int)this + 0x60) = 0xc300f201;
  return 0;
}



/**************************************************/

/* Function: FUN_100010d0 @ 100010d0 */

undefined4 __thiscall FUN_100010d0(void *this,int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  
  if ((param_1 != (int *)0x0) && (param_3 != (int *)0x0)) {
    uVar1 = 0;
    if (*(int *)((int)this + 0x70) != 0) {
      piVar2 = *(int **)((int)this + 0x6c);
      do {
        if (*param_1 == *piVar2) {
          *param_3 = (*(int **)((int)this + 0x6c))[uVar1 * 8 + 2];
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 8;
      } while (uVar1 < *(uint *)((int)this + 0x70));
    }
    *(undefined4 *)((int)this + 0x60) = 0x8300f203;
    return 0;
  }
  *(undefined4 *)((int)this + 0x60) = 0xc300f201;
  return 0;
}



/**************************************************/

/* Function: FUN_10001130 @ 10001130 */

undefined4 __thiscall FUN_10001130(void *this,int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  
  if ((param_1 != (int *)0x0) && (param_3 != (int *)0x0)) {
    uVar1 = 0;
    if (*(int *)((int)this + 0x70) != 0) {
      piVar2 = *(int **)((int)this + 0x6c);
      do {
        if (*param_1 == *piVar2) {
          *param_3 = (*(int **)((int)this + 0x6c))[uVar1 * 8 + 4];
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 8;
      } while (uVar1 < *(uint *)((int)this + 0x70));
    }
    *(undefined4 *)((int)this + 0x60) = 0x8300f203;
    return 0;
  }
  *(undefined4 *)((int)this + 0x60) = 0xc300f201;
  return 0;
}



/**************************************************/

/* Function: FUN_10001190 @ 10001190 */

int __thiscall FUN_10001190(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EDI;
  
  puVar2 = param_3;
  if ((param_1 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    *(undefined4 *)((int)this + 0x60) = 0xc300f201;
  }
  else {
    uVar1 = *param_1;
    param_3 = (undefined4 *)0x0;
    param_1 = (undefined4 *)0x0;
    iVar3 = (**(code **)(*(int *)this + 0x5c))(uVar1,&param_3,&param_1);
    if (iVar3 != 0) {
      if (unaff_EDI == 0) {
        *puVar2 = uRam00000001;
        return iVar3;
      }
      if (unaff_EDI == 2) {
        *puVar2 = uRam00000011;
        return iVar3;
      }
      if (unaff_EDI == 3) {
        *puVar2 = uRam00000005;
        return iVar3;
      }
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001220 @ 10001220 */

undefined4 __thiscall FUN_10001220(void *this,uint *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_ESI;
  uint unaff_retaddr;
  
  puVar1 = param_3;
  if ((param_1 == (uint *)0x0) || (param_3 == (undefined4 *)0x0)) {
    *(undefined4 *)((int)this + 0x60) = 0xc300f201;
  }
  else {
    uVar4 = *param_1;
    param_1 = (uint *)0x0;
    param_3 = (undefined4 *)0x0;
    iVar2 = (**(code **)(*(int *)this + 0x5c))(uVar4,&param_1,&param_3);
    if (iVar2 != 0) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(PTR_caseD_0_10001364) {
      default:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar4 = 0x18;
        break;
      case (undefined *)0x3:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar4 = *unaff_ESI * 4 + 0x18;
      }
      *param_1 = uVar4;
      if (uVar4 <= unaff_retaddr) {
        *puVar1 = 1;
                    /* WARNING: Could not recover jumptable at 0x100012b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)PTR_LAB_10001374)();
        return uVar3;
      }
      *(undefined4 *)((int)this + 0x60) = 0x8300f207;
      return 0;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001380 @ 10001380 */

void __thiscall
FUN_10001380(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x60) = 0xc300f201;
    return;
  }
  (**(code **)(*(int *)this + 0x60))(*param_1,param_3,1,param_5);
  return;
}



/**************************************************/

/* Function: FUN_100013b0 @ 100013b0 */

int __thiscall
FUN_100013b0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  FARPROC lpfn;
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = 1;
  if (*(int *)((int)this + 0x70) != 0) {
    piVar3 = *(int **)((int)this + 0x6c);
    do {
      if (param_1 == *piVar3) {
        if (param_4 != 0) {
          lpfn = (FARPROC)(*(int **)((int)this + 0x6c))[uVar4 * 8 + 6];
          if (lpfn != (FARPROC)0x0) {
            BVar2 = IsBadCodePtr(lpfn);
            if (BVar2 != 0) {
              *(undefined4 *)((int)this + 0x60) = 0xc300f202;
              return 0;
            }
            iVar1 = (**(code **)(*(int *)((int)this + 0x6c) + 0x18 + uVar4 * 0x20))(this);
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
        *param_2 = *(undefined4 *)(*(int *)((int)this + 0x6c) + 4 + uVar4 * 0x20);
        *param_3 = *(undefined4 *)(*(int *)((int)this + 0x6c) + 0x1c + uVar4 * 0x20);
        return iVar1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 8;
    } while (uVar4 < *(uint *)((int)this + 0x70));
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001450 @ 10001450 */

bool __thiscall FUN_10001450(void *this,int param_1,uint *param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int local_4;
  
  uVar7 = 0;
  *param_4 = 0;
  local_4 = 0;
  if (*(int *)((int)this + 0x70) != 0) {
    piVar1 = *(int **)((int)this + 0x6c);
    piVar4 = piVar1;
LAB_10001476:
    if (param_1 != *piVar4) goto code_r0x1000147a;
    switch(piVar1[uVar7 * 8 + 1]) {
    case 0:
      if (*(uint *)piVar1[uVar7 * 8 + 7] == *param_2) {
        return true;
      }
      break;
    case 1:
      puVar6 = (uint *)piVar1[uVar7 * 8 + 7];
      if ((((*puVar6 == *param_2) && (puVar6[1] == param_2[1])) && (puVar6[2] == param_2[2])) &&
         (puVar6[3] == param_2[3])) {
        return true;
      }
      break;
    case 2:
      uVar5 = *(uint *)(piVar1[uVar7 * 8 + 7] + 0x10);
      goto LAB_100014f6;
    case 3:
      uVar5 = *(uint *)(piVar1[uVar7 * 8 + 7] + 4);
LAB_100014f6:
      if (uVar5 == *param_2) {
        return true;
      }
      break;
    default:
      goto switchD_1000149a_default;
    }
    if (param_3 != 0) {
      if (piVar1[uVar7 * 8 + 3] == 1) {
        local_4 = -0x7cff0dfc;
        goto LAB_10001580;
      }
      if ((FARPROC)piVar1[uVar7 * 8 + 5] != (FARPROC)0x0) {
        BVar2 = IsBadCodePtr((FARPROC)piVar1[uVar7 * 8 + 5]);
        if (BVar2 != 0) {
          return false;
        }
        iVar3 = (**(code **)(*(int *)((int)this + 0x6c) + 0x14 + uVar7 * 0x20))(this,param_2);
        if (iVar3 == 0) {
          return false;
        }
      }
    }
    iVar3 = *(int *)((int)this + 0x6c) + uVar7 * 0x20;
    switch(*(undefined4 *)(iVar3 + 4)) {
    case 0:
      **(uint **)(iVar3 + 0x1c) = *param_2;
      break;
    case 1:
      puVar6 = *(uint **)(iVar3 + 0x1c);
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      puVar6[2] = param_2[2];
      puVar6[3] = param_2[3];
      break;
    case 2:
      puVar6 = *(uint **)(iVar3 + 0x1c);
      uVar7 = *param_2;
      if (((puVar6[1] < uVar7) || (uVar7 < *puVar6)) || ((uVar7 - *puVar6) % puVar6[2] != 0))
      goto LAB_10001605;
      puVar6[4] = uVar7;
      break;
    case 3:
      piVar1 = *(int **)(iVar3 + 0x1c);
      iVar3 = 0;
      if (*piVar1 < 1) goto LAB_100015fd;
      puVar6 = (uint *)piVar1[3];
      goto LAB_100015e3;
    default:
switchD_1000149a_default:
      *(undefined4 *)((int)this + 0x60) = 0xc300f202;
      return false;
    }
    *param_4 = 1;
  }
  goto LAB_10001580;
code_r0x1000147a:
  uVar7 = uVar7 + 1;
  piVar4 = piVar4 + 8;
  if (*(uint *)((int)this + 0x70) <= uVar7) goto LAB_10001580;
  goto LAB_10001476;
  while( true ) {
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 1;
    if (*piVar1 <= iVar3) break;
LAB_100015e3:
    if (*param_2 == *puVar6) {
      piVar1[1] = *param_2;
      *param_4 = 1;
      break;
    }
  }
LAB_100015fd:
  if (iVar3 == *piVar1) {
LAB_10001605:
    local_4 = 0x57;
  }
LAB_10001580:
  *(int *)((int)this + 0x60) = local_4;
  return local_4 == 0;
}



/**************************************************/

/* Function: FUN_10001650 @ 10001650 */

int __thiscall FUN_10001650(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *local_8;
  undefined4 local_4;
  
  ppuVar3 = &local_8;
  puVar2 = &local_4;
  local_4 = 0;
  local_8 = (undefined4 *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x5c))(param_1,puVar2,ppuVar3,0);
  if (iVar1 != 0) {
    if (ppuVar3 != (undefined4 **)0x0) {
      if (ppuVar3 == (undefined4 **)0x2) {
        *local_8 = puVar2[3];
        return iVar1;
      }
      if (ppuVar3 != (undefined4 **)0x3) {
        *(undefined4 *)((int)this + 0x60) = 0xc300f202;
        return 0;
      }
      *local_8 = puVar2[2];
      return iVar1;
    }
    *local_8 = puVar2[1];
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_100016f0 @ 100016f0 */

int __thiscall FUN_100016f0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *local_8;
  undefined4 local_4;
  
  ppuVar3 = &local_8;
  puVar2 = &local_4;
  local_4 = 0;
  local_8 = (undefined4 *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x5c))(param_1,puVar2,ppuVar3,0);
  if (iVar1 != 0) {
    if (ppuVar3 != (undefined4 **)0x0) {
      if (ppuVar3 == (undefined4 **)0x2) {
        *local_8 = puVar2[4];
        return iVar1;
      }
      if (ppuVar3 != (undefined4 **)0x3) {
        *(undefined4 *)((int)this + 0x60) = 0xc300f202;
        return 0;
      }
      *local_8 = puVar2[1];
      return iVar1;
    }
    *local_8 = *puVar2;
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_10001790 @ 10001790 */

void __thiscall FUN_10001790(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  undefined4 local_4;
  
  puVar2 = &local_4;
  local_4 = 0;
  local_8 = (undefined4 *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x5c))(param_1,puVar2,&local_8,0);
  if (iVar1 != 0) {
    *local_8 = *puVar2;
    local_8[1] = puVar2[1];
    local_8[2] = puVar2[2];
    local_8[3] = puVar2[3];
  }
  return;
}



/**************************************************/

/* Function: FUN_100017e0 @ 100017e0 */

bool __thiscall FUN_100017e0(void *this,int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  uVar4 = 0;
  iVar5 = 0;
  if (*(int *)((int)this + 0x70) == 0) {
LAB_10001923:
    *(int *)((int)this + 0x60) = iVar5;
    return iVar5 == 0;
  }
  piVar1 = *(int **)((int)this + 0x6c);
  piVar6 = piVar1;
  while (param_1 != *piVar6) {
    uVar4 = uVar4 + 1;
    piVar6 = piVar6 + 8;
    if (*(uint *)((int)this + 0x70) <= uVar4) {
      *(undefined4 *)((int)this + 0x60) = 0;
      return true;
    }
  }
  iVar5 = uVar4 * 0x20;
  switch(piVar1[uVar4 * 8 + 1]) {
  case 0:
    bVar7 = param_2 == 0;
    break;
  case 1:
    bVar7 = param_2 == 1;
    break;
  case 2:
    if (param_2 == 2) {
      puVar2 = (uint *)piVar1[uVar4 * 8 + 7];
      uVar4 = *param_3;
      if (((*puVar2 != uVar4) || (puVar2[1] != param_3[1])) || (puVar2[2] != param_3[2])) {
        uVar3 = puVar2[4];
        if ((uVar3 != puVar2[3]) && (uVar3 != param_3[4])) {
          if (param_3[1] < uVar3) {
            param_3[4] = param_3[1];
            *(uint **)(*(int *)((int)this + 0x6c) + 0x1c + iVar5) = param_3;
            *(undefined4 *)((int)this + 0x60) = 0;
            return true;
          }
          if (uVar3 < uVar4) {
            param_3[4] = uVar4;
            *(uint **)(*(int *)((int)this + 0x6c) + 0x1c + iVar5) = param_3;
            *(undefined4 *)((int)this + 0x60) = 0;
            return true;
          }
          param_3[4] = uVar3;
        }
        *(uint **)(*(int *)((int)this + 0x6c) + 0x1c + iVar5) = param_3;
        *(undefined4 *)((int)this + 0x60) = 0;
        return true;
      }
    }
    goto LAB_10001906;
  case 3:
    bVar7 = param_2 == 3;
    break;
  default:
    iVar5 = -0x3cff0dfe;
    goto LAB_10001923;
  }
  if ((bVar7) && ((uint *)piVar1[uVar4 * 8 + 7] != param_3)) {
    piVar1[uVar4 * 8 + 7] = (int)param_3;
    *(undefined4 *)((int)this + 0x60) = 0;
    return true;
  }
LAB_10001906:
  *(undefined4 *)((int)this + 0x60) = 0xc300f201;
  return false;
}



/**************************************************/

/* Function: FUN_10001950 @ 10001950 */

undefined4 __thiscall FUN_10001950(void *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  if (param_1 == 0) {
    iVar1 = (**(code **)(*(int *)this + 0x1c))();
    if (iVar1 != 0) {
      FUN_100073b0(0xe8,auStack_8,0,0,0);
      (**(code **)(*(int *)this + 0x60))();
      FUN_100073b0(0xe9,&stack0xffffffe0,0,0,0);
      puVar2 = &stack0xffffffe4;
LAB_10001a8f:
      (**(code **)(*(int *)this + 0x60))(0x1112,puVar2);
      *(undefined4 *)((int)this + 0x60) = 0;
      return 1;
    }
  }
  else if (param_1 == 1) {
    iVar1 = (**(code **)(*(int *)this + 0x30))();
    if (iVar1 != 0) {
      FUN_100073b0(0xe6,auStack_10,0,0,0);
      (**(code **)(*(int *)this + 0x60))();
      FUN_100073b0(0xe7,&stack0xffffffe8,0,0,0);
      puVar2 = &stack0xffffffec;
      goto LAB_10001a8f;
    }
  }
  else if (param_1 == 2) {
    (**(code **)(*(int *)this + 100))();
    (**(code **)(*(int *)this + 0x60))();
    (**(code **)(*(int *)this + 100))(0x1112,&stack0xffffffec);
    (**(code **)(*(int *)this + 0x60))(0x1112,&stack0xffffffe4,0,&stack0xffffffd0);
    *(undefined4 *)((int)this + 0x60) = 0;
    return 1;
  }
  *(undefined4 *)((int)this + 0x60) = 0xc300f201;
  return 0;
}



/**************************************************/

/* Function: FUN_10001ae0 @ 10001ae0 */

undefined4 * __fastcall FUN_10001ae0(undefined4 *param_1)

{
  *param_1 = BaseUSD::vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



/**************************************************/

/* Function: FUN_10001b10 @ 10001b10 */

undefined4 FUN_10001b10(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10001b20 @ 10001b20 */

void __fastcall FUN_10001b20(undefined4 *param_1)

{
  *param_1 = BaseUSD::vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  return;
}



/**************************************************/

/* Function: FUN_10001b40 @ 10001b40 */

undefined4 FUN_10001b40(int param_1,undefined4 *param_2)

{
  *param_2 = 0x1000002;
  param_2[1] = *(undefined4 *)(param_1 + 100);
  return 0;
}



/**************************************************/

/* Function: FUN_10001b60 @ 10001b60 */

undefined4 FUN_10001b60(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    BVar1 = IsBadWritePtr(param_2,4);
    if (BVar1 == 0) {
      *param_2 = *(undefined4 *)(param_1 + 0x60);
      return 0;
    }
  }
  return 0x80070057;
}



/**************************************************/

/* Function: FUN_10001b90 @ 10001b90 */

uint FUN_10001b90(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *unaff_ESI;
  int iVar2;
  int *unaff_retaddr;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x12);
  iVar2 = 1;
  EnterCriticalSection(lpCriticalSection);
  switch(param_2) {
  case 0x1006:
    iVar2 = (**(code **)(*param_1 + 0x28))(param_5);
    break;
  default:
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  case 0x1034:
    iVar2 = (**(code **)(*param_1 + 0x40))(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x1035:
    iVar2 = (**(code **)(*param_1 + 0x44))(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x1036:
    iVar2 = (**(code **)(*param_1 + 0x48))(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x1037:
    iVar2 = (**(code **)(*param_1 + 0x4c))(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x1038:
    iVar2 = (**(code **)(*param_1 + 0x50))(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x1039:
    iVar2 = (**(code **)(*param_1 + 0x54))(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x103a:
    iVar2 = (**(code **)(*param_1 + 0x58))(param_3,param_4,param_5,param_6,param_7);
    break;
  case 0x103d:
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    *unaff_retaddr = iVar1;
    break;
  case 0x103e:
    iVar1 = (**(code **)(*param_1 + 0x20))();
    *unaff_ESI = iVar1;
    if (iVar1 == 0) {
      *unaff_retaddr = param_1[0x18];
    }
    break;
  case 0x1040:
    iVar2 = (**(code **)(*param_1 + 0x2c))(*param_3);
    break;
  case 0x1041:
    iVar1 = (**(code **)(*param_1 + 0x30))();
    *unaff_retaddr = iVar1;
    break;
  case 0x1046:
    iVar2 = (**(code **)(*param_1 + 0x34))(param_5,param_6);
    break;
  case 0x1047:
    iVar2 = (**(code **)(*param_1 + 0x38))(param_5,param_6);
    break;
  case 0x1058:
    iVar1 = (**(code **)(*param_1 + 0x14))();
    *unaff_retaddr = iVar1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return -(uint)(iVar2 != 1) & 0x80004005;
}



/**************************************************/

/* Function: FUN_10001e40 @ 10001e40 */

undefined4 * __thiscall FUN_10001e40(void *this,byte param_1)

{
  FUN_10001b20(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10001e60 @ 10001e60 */

void FUN_10001e60(int param_1,int param_2)

{
  DWORD DVar1;
  WCHAR local_204 [256];
  uint local_4;
  
  local_4 = DAT_1001ef38 ^ (uint)local_204;
  if (param_2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_204);
    return;
  }
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x60);
  *(wchar_t *)(param_2 + 0xc) = L'\0';
  DVar1 = FormatMessageW(0x800,DAT_10020580,*(DWORD *)(param_1 + 0x60),0,local_204,0xfe,
                         (va_list *)0x0);
  if (DVar1 == 0) {
    DVar1 = FormatMessageW(0x1000,DAT_10020580,*(DWORD *)(param_1 + 0x60),0,local_204,0xfe,
                           (va_list *)0x0);
    if (DVar1 == 0) goto LAB_10001f1a;
  }
  _wcscpy_s((wchar_t *)(param_2 + 0xc),0xff,local_204);
LAB_10001f1a:
  __security_check_cookie(local_4 ^ (uint)local_204);
  return;
}



/**************************************************/

/* Function: FUN_10001f40 @ 10001f40 */

undefined4 __cdecl FUN_10001f40(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *unaff_retaddr;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_c [8];
  int iStack_4;
  
  iVar1 = (**(code **)(*param_1 + 0x68))();
  if (iVar1 != 1) {
    return 0;
  }
  if (iStack_4 == 0) {
    if (*unaff_retaddr != 1) {
      return 0;
    }
    pcVar3 = *(code **)(*param_1 + 0x60);
  }
  else {
    if (iStack_4 != 1) {
      if (iStack_4 != 2) {
        return 0;
      }
      if ((*unaff_retaddr != 0x18) && (*unaff_retaddr != 0x30)) {
        return 0;
      }
      puStack_20 = auStack_c;
      uStack_24 = 0;
      uStack_2c = 0x112b;
      (**(code **)(*param_1 + 0x60))();
      (**(code **)(*param_1 + 0x68))(0x1118,&uStack_24);
      puVar2 = &uStack_28;
      goto LAB_1000200f;
    }
    if ((*unaff_retaddr != 8) && (*unaff_retaddr != 0x10)) {
      return 0;
    }
    pcVar3 = *(code **)(*param_1 + 0x60);
  }
  puStack_20 = auStack_c;
  uStack_24 = 0;
  uStack_2c = 0x112b;
  (*pcVar3)();
  (**(code **)(*param_1 + 0x68))(0x1118,&puStack_20);
  puVar2 = &uStack_2c;
LAB_1000200f:
  (**(code **)(*param_1 + 0x68))(0x1119,puVar2);
  return 1;
}



/**************************************************/

/* Function: FUN_10002060 @ 10002060 */

bool __cdecl FUN_10002060(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  if (*param_2 == 1) {
    iVar1 = (**(code **)(*param_1 + 0x30))();
    if (iVar1 == 0) {
      iVar2 = -0x7cff0dfb;
      goto LAB_100020ae;
    }
    (**(code **)(*param_1 + 0x70))(0x1114,1,&DAT_1001e0e0);
    iVar1 = *param_1;
    uVar3 = 1;
  }
  else {
    if (*param_2 != 0) {
      iVar2 = -0x3cff0dff;
      goto LAB_100020ae;
    }
    (**(code **)(*param_1 + 0x70))(0x1114,1,&DAT_1001e0d0);
    iVar1 = *param_1;
    uVar3 = 2;
  }
  iVar1 = (**(code **)(iVar1 + 0x74))(uVar3);
  if (iVar1 == 0) {
    return false;
  }
LAB_100020ae:
  param_2 = (int *)0x0;
  (**(code **)(*param_1 + 0x68))(0x1118,&param_2);
  (**(code **)(*param_1 + 0x68))(0x1119,&stack0xfffffff4);
  param_1[0x18] = iVar2;
  return iVar2 == 0;
}



/**************************************************/

/* Function: FUN_10002120 @ 10002120 */

void __cdecl FUN_10002120(int param_1,undefined *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_1001e480;
  do {
    if (*piVar1 == param_1) {
      (&PTR_DAT_1001e49c)[iVar2 * 8] = param_2;
      return;
    }
    piVar1 = piVar1 + 8;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x1001e980);
  return;
}



/**************************************************/

/* Function: FUN_10002150 @ 10002150 */

void FUN_10002150(void)

{
  int iVar1;
  undefined *puVar2;
  int local_4;
  
  iVar1 = FUN_100073b0(0xe1,&local_4,0,0,0);
  if (iVar1 == 0) {
    if (local_4 == 1) {
      puVar2 = &DAT_1001e2b0;
    }
    else {
      puVar2 = &DAT_1001e2cc;
    }
    FUN_10002120(0x112b,puVar2);
  }
  FUN_100073b0(0xe2,&DAT_1001e3a0,0,0,0);
  FUN_100073b0(0xe3,&DAT_1001e3a8,0,0,0);
  FUN_100073b0(0xe4,&DAT_1001e3d8,0,0,0);
  FUN_100073b0(0xe5,&DAT_1001e3e0,0,0,0);
  FUN_100073b0(0xea,&DAT_1001e3b0,0,0,0);
  FUN_100073b0(0xeb,&DAT_1001e3c4,0,0,0);
  FUN_100073b0(0xec,&DAT_1001e3e8,0,0,0);
  FUN_100073b0(0xed,&DAT_1001e410,0,0,0);
  FUN_100073b0(0xee,&DAT_1001e400,0,0,0);
  FUN_100073b0(0xef,&DAT_1001e42c,0,0,0);
  FUN_10002120(0x1116,&DAT_1001e3a0);
  FUN_10002120(0x1117,&DAT_1001e3a8);
  FUN_10002120(0x1111,&DAT_1001e3d8);
  FUN_10002120(0x1112,&DAT_1001e3e0);
  FUN_10002120(0x1118,&DAT_1001e3b0);
  FUN_10002120(0x1119,&DAT_1001e3c4);
  FUN_10002120(0x8431,&DAT_1001e470);
  iVar1 = FUN_100073b0(0x2a,&local_4,0,0,0);
  if (iVar1 == 0) {
    if (local_4 == 1) {
      FUN_10002120(0x1007,&DAT_1001e28c);
      FUN_10002120(0x1002,&DAT_1001e25c);
      FUN_10002120(0x1003,&DAT_1001e274);
      iVar1 = FUN_100073b0(0x2c,&local_4,0,0,0);
      if ((iVar1 != 0) || (local_4 != 0)) goto LAB_1000235b;
    }
    FUN_10002120(0x1012,&DAT_1001e1f4);
    FUN_10002120(0x1013,&DAT_1001e204);
  }
LAB_1000235b:
  iVar1 = FUN_100073b0(0xe0,&local_4,0,0,0);
  if (iVar1 == 0) {
    if (local_4 == 1) {
      FUN_10002120(0x1006,&DAT_1001e43c);
      return;
    }
    FUN_10002120(0x1006,&DAT_1001e450);
  }
  return;
}



/**************************************************/

/* Function: FUN_100023b0 @ 100023b0 */

undefined4 __thiscall
FUN_100023b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  *param_3 = &DAT_1001e480;
  *param_4 = 0x28;
  iVar1 = (**(code **)(*(int *)this + 0x30))();
  puVar2 = &DAT_1001e110;
  if (iVar1 == 0) {
    puVar2 = &DAT_1001e0f8;
  }
  (**(code **)(*(int *)this + 0x70))(0x111e,3,puVar2);
  FUN_10002060(this,(int *)&stack0x00000000);
  return 1;
}



/**************************************************/

/* Function: FUN_10002410 @ 10002410 */

bool __cdecl FUN_10002410(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint unaff_ESI;
  int iVar3;
  uint *unaff_retaddr;
  undefined4 uVar4;
  uint uVar5;
  uint *puStack_8;
  int iStack_4;
  
  piVar1 = param_1;
  uVar5 = 0x1002;
  iVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0x68))(0x1002,&param_1);
  if ((iVar2 == 0) || (iStack_4 != 1)) {
    iVar2 = (**(code **)(*piVar1 + 0x68))(0x111e,&iStack_4);
    if ((iVar2 != 0) && (iStack_4 == 1)) {
      uVar4 = 0xe6;
      goto LAB_10002446;
    }
    (**(code **)(*piVar1 + 100))(0x1111,&stack0xfffffff0);
    if ((*puStack_8 < 8) || (uVar5 < *puStack_8)) goto LAB_10002479;
    iVar2 = (**(code **)(*piVar1 + 0x60))(0x1111,puStack_8,0,&stack0xfffffff4);
  }
  else {
    uVar4 = 0xe8;
LAB_10002446:
    iVar3 = FUN_100073b0(uVar4,&stack0xfffffff0,0,0,0);
    if ((*unaff_retaddr < 8) || (unaff_ESI < *unaff_retaddr)) {
LAB_10002479:
      iVar3 = -0x3cff0dff;
      goto LAB_1000247e;
    }
    iVar2 = (**(code **)(*piVar1 + 0x60))(0x1111,unaff_retaddr,0,&iStack_4);
  }
  if (iVar2 == 0) {
    return false;
  }
LAB_1000247e:
  piVar1[0x18] = iVar3;
  return iVar3 == 0;
}



/**************************************************/

/* Function: FUN_10002510 @ 10002510 */

bool __cdecl FUN_10002510(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint unaff_EBX;
  int iVar3;
  uint *unaff_retaddr;
  undefined4 uVar4;
  uint uVar5;
  uint *puStack_8;
  int iStack_4;
  
  piVar1 = param_1;
  uVar5 = 0x1002;
  iVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0x68))(0x1002,&param_1);
  if ((iVar2 == 0) || (iStack_4 != 1)) {
    iVar2 = (**(code **)(*piVar1 + 0x68))(0x111e,&iStack_4);
    if ((iVar2 != 0) && (iStack_4 == 1)) {
      uVar4 = 0xe7;
      goto LAB_10002546;
    }
    (**(code **)(*piVar1 + 100))(0x1112,&stack0xfffffff0);
    if ((*puStack_8 < 8) || (uVar5 < *puStack_8)) goto LAB_10002577;
    iVar2 = (**(code **)(*piVar1 + 0x60))(0x1112,puStack_8,0,&stack0xfffffff4);
  }
  else {
    uVar4 = 0xe9;
LAB_10002546:
    FUN_100073b0(uVar4,&stack0xfffffff0,0,0,0);
    if ((*unaff_retaddr < 8) || (unaff_EBX < *unaff_retaddr)) {
LAB_10002577:
      iVar3 = -0x3cff0dff;
      goto LAB_1000257c;
    }
    iVar2 = (**(code **)(*piVar1 + 0x60))(0x1112,unaff_retaddr,0,&iStack_4);
  }
  if (iVar2 == 0) {
    return false;
  }
LAB_1000257c:
  piVar1[0x18] = iVar3;
  return iVar3 == 0;
}



/**************************************************/

/* Function: FUN_10002890 @ 10002890 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_10002890(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  uStack_14 = 0;
  puStack_18 = &local_c;
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  (**(code **)(*param_1 + 0x5c))(0x1012);
  uVar1 = 0;
  if (local_4 != 0) {
    do {
      if (*(int *)(param_2 + uVar1 * 4) == 2) {
        puStack_18 = (undefined4 *)0x2;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_4);
  }
  (**(code **)(*param_1 + 0x60))(0x1012,&puStack_18,0,&local_c);
  return;
}



/**************************************************/

/* Function: FUN_10002920 @ 10002920 */

undefined4 * __fastcall FUN_10002920(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100183f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10001ae0(param_1);
  local_4 = 0;
  FUN_10004130(param_1 + 0x20);
  *param_1 = D241UUSD::vftable;
  param_1[0x19] = 1;
  param_1[0x1a] = 0;
  ExceptionList = local_c;
  return param_1;
}



/**************************************************/

/* Function: FUN_10002990 @ 10002990 */

undefined4 __fastcall FUN_10002990(int param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



/**************************************************/

/* Function: FUN_100029a0 @ 100029a0 */

void __fastcall FUN_100029a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10018451;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = D241UUSD::vftable;
  local_4 = 1;
  FUN_100042b0(param_1 + 0x20);
  local_4 = local_4 & 0xffffff00;
  FUN_100042f0(param_1 + 0x20);
  local_4 = 0xffffffff;
  FUN_10001b20(param_1);
  ExceptionList = local_c;
  return;
}



/**************************************************/

/* Function: FUN_10002a20 @ 10002a20 */

void __fastcall FUN_10002a20(int param_1)

{
  int iVar1;
  uint local_18;
  char local_14 [8];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_1001ef38 ^ (uint)&local_18;
  if (DAT_10020340 == 0) {
    local_18 = 0;
    FUN_100073b0(0x129,&local_18,0,0,0);
    if ((local_18 != 0) && (local_18 < 3)) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x34))(local_14);
      DAT_10020340 = *(int *)(iVar1 + 4);
      if ((DAT_10020340 == 0) || (DAT_1002033c = 1, local_14[0] != '\x01')) {
        DAT_1002033c = 0;
      }
      __security_check_cookie(local_c ^ (uint)&stack0xffffffe0);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}



/**************************************************/

/* Function: FUN_10002ad0 @ 10002ad0 */

undefined4 __thiscall FUN_10002ad0(void *this,char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar2 = 0;
  if (0 < param_2 + -1) {
    do {
      cVar1 = *(char *)((int)this + iVar2 + 0x98);
      if ((cVar1 == '\0') || (cVar1 == ' ')) break;
      param_1[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2 + -1);
  }
  param_1[iVar2] = '\0';
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)(param_1 + 1);
  if (uVar4 < 0x10) {
    _memset(param_1 + uVar4,0x20,0x10 - uVar4);
    uVar4 = uVar4 + (0x10 - uVar4);
  }
  param_1[uVar4] = '\0';
  return 1;
}



/**************************************************/

/* Function: FUN_10002b40 @ 10002b40 */

undefined4 __fastcall FUN_10002b40(int *param_1)

{
  int iVar1;
  char unaff_SI;
  int *local_4;
  
  if (param_1[0x47] != 1) {
    local_4 = param_1;
    iVar1 = (**(code **)(*param_1 + 0x28))(&local_4);
    if ((iVar1 == 0) || (unaff_SI == -0x10)) {
      param_1[0x47] = 0;
      return 0;
    }
    param_1[0x47] = 1;
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10002b90 @ 10002b90 */

undefined4 __fastcall FUN_10002b90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  char unaff_SI;
  int *local_4;
  
  pcVar1 = *(code **)(*param_1 + 0x28);
  param_1[0x48] = 0;
  local_4 = param_1;
  iVar2 = (*pcVar1)(&local_4);
  if (iVar2 != 0) {
    if (unaff_SI == '\0') {
      param_1[0x48] = 1;
      return 1;
    }
    if (unaff_SI == '\x01') {
      param_1[0x18] = -0x7eff0fed;
      return 0;
    }
    if (unaff_SI == -0x10) {
      param_1[0x18] = -0x7eff0feb;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002bf0 @ 10002bf0 */

undefined4 __fastcall FUN_10002bf0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10002c20 @ 10002c20 */

void __thiscall FUN_10002c20(void *this,undefined1 *param_1)

{
  int iVar1;
  uint local_18;
  int local_14 [2];
  undefined1 local_c;
  char cStack_b;
  char cStack_a;
  uint local_4;
  
  local_4 = DAT_1001ef38 ^ (uint)&local_18;
  if (param_1 != (undefined1 *)0x0) {
    local_18 = 0;
    FUN_100073b0(0x129,&local_18,0,0,0);
    if (((local_18 != 0) && (local_18 < 3)) &&
       (iVar1 = (**(code **)(**(int **)((int)this + 0x88) + 0x34))(local_14,&local_c),
       *(int *)(iVar1 + 4) != 0)) {
      *param_1 = 0xf0;
      param_1[1] = 3;
      if (cStack_b == '\x01') {
        if ((local_18 != 0) && (local_18 < 3)) {
          local_14[0] = 0;
          (**(code **)(*(int *)this + 0x68))(0x8431,local_14);
          if (local_14[0] == 1) {
            param_1[1] = 0;
            *param_1 = 0;
          }
          else if (cStack_a == '\x01') {
            param_1[1] = 0;
            *param_1 = 1;
          }
          else {
            param_1[1] = 5;
            *param_1 = 0;
          }
        }
      }
      else {
        *param_1 = 0xf0;
      }
    }
    __security_check_cookie(local_4 ^ (uint)&local_18);
    return;
  }
  *(undefined4 *)((int)this + 0x60) = 0xc300f201;
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}



/**************************************************/

/* Function: FUN_10002d20 @ 10002d20 */

undefined4 FUN_10002d20(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10002d30 @ 10002d30 */

int * __cdecl FUN_10002d30(LPCWSTR param_1,undefined **param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined **lpString2;
  uint uStack_34;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001847b;
  local_10 = ExceptionList;
  uStack_34 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_20 = (int *)0x0;
  local_18 = 0;
  local_1c = 0;
  FUN_100073b0(0x127,&local_18,0,0,0);
  FUN_100073b0(0x21,&local_1c,0,0,0);
  local_8 = 0;
  local_24 = (int *)FUN_1000a8e8(0x124);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_24 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_10002920(local_24);
  }
  local_8 = 0xffffffff;
  lpString2 = param_2;
  if (param_2 == (undefined **)0x0) {
    lpString2 = &PTR_10019354;
  }
  local_20 = piVar1;
  lstrcpyW((LPWSTR)(piVar1 + 1),(LPCWSTR)lpString2);
  uVar2 = FUN_10004340(piVar1 + 0x20,param_1,(int)param_2,param_3);
  if (uVar2 == 0) {
    (**(code **)(*piVar1 + 4))(piVar1,0x1058,0,0,&local_24,4,0);
    iVar3 = (**(code **)(*local_24 + 0x20))();
    piVar1[0x11] = iVar3;
  }
  else {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
    uVar4 = (int)uVar2 >> 0xc & 0xffff;
    local_20 = (int *)0x0;
    switch(uVar2 & 0xfff) {
    case 1:
      iVar5 = -0x3bff0cfd;
      break;
    case 2:
      if (((uVar4 == 0xb0) || (uVar4 == 0xb2)) || (uVar4 == 0xb3)) {
        iVar5 = -0x3eff0fd9;
      }
      else {
        iVar5 = (-(uint)(uVar4 != 0xbd) & 0x20001fc) + 0xc100f005;
      }
      break;
    default:
      iVar5 = -0x3cff0dff;
      break;
    case 0x35:
    case 0x37:
      if (uVar4 == 3) {
        if (local_18 == 1) {
          iVar5 = (uint)(local_1c == 0) * 2 + -0x3cff0df0;
        }
        else {
          iVar5 = -0x3cff0df5;
        }
      }
      else if (local_18 == 1) {
        iVar5 = (uint)(local_1c == 0) * 2 + -0x3cff0def;
      }
      else {
        iVar5 = -0x3cff0df3;
      }
    }
  }
  *param_4 = iVar5;
  ExceptionList = local_10;
  return local_20;
}



/**************************************************/

/* Function: Catch@10002dc9 @ 10002dc9 */

undefined * Catch_10002dc9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = 0xc400f303;
  return &DAT_10002ee5;
}



/**************************************************/

/* Function: FUN_10002f50 @ 10002f50 */

undefined4 * __thiscall FUN_10002f50(void *this,byte param_1)

{
  FUN_100029a0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: operator= @ 10002f70 */

/* public: class ScannerInterface & __thiscall ScannerInterface::operator=(class ScannerInterface
   const &) */

ScannerInterface * __thiscall
ScannerInterface::operator=(ScannerInterface *this,ScannerInterface *param_1)

{
  int iVar1;
  ScannerInterface *pSVar2;
  
                    /* 0x2f70  3  ??4ScannerInterface@@QAEAAV0@ABV0@@Z */
  pSVar2 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pSVar2 = pSVar2 + 4;
  }
  return this;
}



/**************************************************/

/* Function: FUN_10002f90 @ 10002f90 */

void __fastcall FUN_10002f90(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[2]) {
    do {
      _free(*(void **)(*param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[2]);
  }
  _free((void *)*param_1);
  _free((void *)param_1[1]);
  return;
}



/**************************************************/

/* Function: FUN_10002fd0 @ 10002fd0 */

void __thiscall FUN_10002fd0(void *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100184a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(uint *)((int)this + 8) = param_1;
  local_8 = 0;
  uVar1 = thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_1 * 4));
  *(undefined4 *)((int)this + 4) = uVar1;
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = thunk_FUN_1000a8e8(*(int *)((int)this + 8) * 4);
  *(undefined4 *)this = uVar1;
  local_8 = 3;
  for (iVar2 = 0; iVar2 < *(int *)((int)this + 8); iVar2 = iVar2 + 1) {
    uVar1 = thunk_FUN_1000a8e8(0x98);
    *(undefined4 *)(*(int *)this + iVar2 * 4) = uVar1;
  }
  ExceptionList = local_10;
  return;
}



/**************************************************/

/* Function: Catch@10003067 @ 10003067 */

void Catch_10003067(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(unaff_EBP + 8);
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    _free(*(void **)(*piVar1 + iVar3 * 4));
    *(undefined4 *)(*piVar1 + iVar3 * 4) = 0;
  }
  _free((void *)*piVar1);
  _free((void *)piVar1[1]);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@100030ad @ 100030ad */

void Catch_100030ad(void)

{
  int unaff_EBP;
  
  _free(*(void **)(*(int *)(unaff_EBP + -0x14) + 4));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@100030c5 @ 100030c5 */

undefined4 Catch_100030c5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return 0x100030d8;
}



/**************************************************/

/* Function: InitCapabilityTable @ 100030f0 */

/* protected: unsigned long __thiscall ScannerInterface::InitCapabilityTable(void) */

ulong __thiscall ScannerInterface::InitCapabilityTable(ScannerInterface *this)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint local_208;
  WCHAR local_204 [256];
  uint local_4;
  
                    /* 0x30f0  19  ?InitCapabilityTable@ScannerInterface@@IAEKXZ */
  local_4 = DAT_1001ef38 ^ (uint)&local_208;
  FUN_100073b0(299,local_204,0x200,0,0);
  uVar5 = 0;
  uVar4 = 4;
  puVar3 = &local_208;
  local_208 = 0;
  iVar1 = lstrlenW(local_204);
  iVar1 = FUN_10003d60(0x1034,local_204,iVar1 + 1,puVar3,uVar4,uVar5);
  if ((iVar1 == 0) && (local_208 != 0)) {
    FUN_10002fd0(&DAT_10020348,local_208);
    FUN_10003d60(0x1035,0,0,DAT_1002034c,local_208 * 4,&local_208);
    uVar2 = __security_check_cookie(local_4 ^ (uint)&local_208);
    return uVar2;
  }
  uVar2 = __security_check_cookie(local_4 ^ (uint)&local_208);
  return uVar2;
}



/**************************************************/

/* Function: GetCapabilityList @ 100031c0 */

/* public: unsigned long __thiscall ScannerInterface::GetCapabilityList(unsigned long * *,unsigned
   long *) */

ulong __thiscall
ScannerInterface::GetCapabilityList(ScannerInterface *this,ulong **param_1,ulong *param_2)

{
                    /* 0x31c0  11  ?GetCapabilityList@ScannerInterface@@QAEKPAPAKPAK@Z */
  if ((param_1 != (ulong **)0x0) && (param_2 != (ulong *)0x0)) {
    *param_1 = DAT_1002034c;
    *param_2 = DAT_10020350;
    return 0;
  }
  return 0xc300f201;
}



/**************************************************/

/* Function: GetCapabilityUnits @ 100031f0 */

/* public: unsigned long __thiscall ScannerInterface::GetCapabilityUnits(unsigned long) */

ulong __thiscall ScannerInterface::GetCapabilityUnits(ScannerInterface *this,ulong param_1)

{
  ulong local_4;
  
                    /* 0x31f0  12  ?GetCapabilityUnits@ScannerInterface@@QAEKK@Z */
  local_4 = 0;
  FUN_10003d60(0x1036,&param_1,4,&local_4,4,0);
  return local_4;
}



/**************************************************/

/* Function: GetCapabilityFlags @ 10003220 */

/* public: unsigned long __thiscall ScannerInterface::GetCapabilityFlags(unsigned long,unsigned long
   *) */

ulong __thiscall
ScannerInterface::GetCapabilityFlags(ScannerInterface *this,ulong param_1,ulong *param_2)

{
  ulong uVar1;
  
                    /* 0x3220  10  ?GetCapabilityFlags@ScannerInterface@@QAEKKPAK@Z */
  if (param_2 == (ulong *)0x0) {
    return 0xc300f201;
  }
  uVar1 = FUN_10003d60(0x1037,&param_1,4,param_2,4,0);
  return uVar1;
}



/**************************************************/

/* Function: GetCapabilityValue @ 10003250 */

/* public: unsigned long __thiscall ScannerInterface::GetCapabilityValue(unsigned long,unsigned long
   *) */

ulong __thiscall
ScannerInterface::GetCapabilityValue(ScannerInterface *this,ulong param_1,ulong *param_2)

{
  ulong uVar1;
  
                    /* 0x3250  13  ?GetCapabilityValue@ScannerInterface@@QAEKKPAK@Z */
  if (param_2 == (ulong *)0x0) {
    return 0xc300f201;
  }
  uVar1 = FUN_10003d60(0x1038,&param_1,4,param_2,4,0);
  return uVar1;
}



/**************************************************/

/* Function: GetCapability @ 10003280 */

/* public: unsigned long __thiscall ScannerInterface::GetCapability(unsigned long,int *,void * *) */

ulong __thiscall
ScannerInterface::GetCapability(ScannerInterface *this,ulong param_1,int *param_2,void **param_3)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  ulong uVar5;
  
  ppvVar3 = param_3;
                    /* 0x3280  8  ?GetCapability@ScannerInterface@@QAEKKPAHPAPAX@Z */
  piVar2 = param_2;
  iVar4 = 0;
  if ((param_2 != (int *)0x0) && (param_3 != (void **)0x0)) {
    *param_3 = (void *)0x0;
    param_2 = (int *)0x0;
    if (0 < DAT_10020350) {
      do {
        if (*(ulong *)(DAT_1002034c + iVar4 * 4) == param_1) {
          piVar1 = *(int **)(DAT_10020348 + iVar4 * 4);
          iVar4 = FUN_10003d60(0x1039,&param_1,4,piVar1,0x98,&param_2);
          if (iVar4 != 0) {
            uVar5 = FUN_100034a0();
            return uVar5;
          }
          *piVar2 = *piVar1;
          *ppvVar3 = piVar1 + 1;
          if (*piVar2 == 3) {
            piVar1[4] = (int)(piVar1 + 6);
          }
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_10020350);
    }
    return 0x8300f203;
  }
  return 0xc300f201;
}



/**************************************************/

/* Function: SetCapability @ 10003330 */

/* public: unsigned long __thiscall ScannerInterface::SetCapability(unsigned long,unsigned long) */

ulong __thiscall ScannerInterface::SetCapability(ScannerInterface *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  int local_4;
  
                    /* 0x3330  22  ?SetCapability@ScannerInterface@@QAEKKK@Z */
  local_4 = 0;
  if (param_1 == 0x1114) {
    uVar3 = 0x10;
    puVar2 = (ulong *)param_2;
  }
  else {
    uVar3 = 4;
    puVar2 = &param_2;
  }
  uVar1 = FUN_10003d60(0x103a,&param_1,4,puVar2,uVar3,&local_4);
  if ((uVar1 == 0) && (local_4 == 1)) {
    FUN_100038a0();
    if (param_1 == 0x101) {
      FUN_100038a0();
      FUN_100038a0();
    }
    else if ((param_1 == 0x1002) || (param_1 == 0x111e)) {
      FUN_100038a0();
      FUN_100038a0();
      FUN_100038a0();
      FUN_100038a0();
      return 0;
    }
  }
  return uVar1;
}



/**************************************************/

/* Function: GetCapabilityCurrentValue @ 10003420 */

/* protected: unsigned long __thiscall ScannerInterface::GetCapabilityCurrentValue(unsigned long) */

ulong __thiscall ScannerInterface::GetCapabilityCurrentValue(ScannerInterface *this,ulong param_1)

{
  ulong uVar1;
  ScannerInterface *local_4;
  
                    /* 0x3420  9  ?GetCapabilityCurrentValue@ScannerInterface@@IAEKK@Z */
  local_4 = this;
  uVar1 = GetCapability(this,param_1,(int *)&local_4,(void **)&param_1);
  if (uVar1 == 0) {
    if (local_4 == (ScannerInterface *)0x0) {
      return *(ulong *)param_1;
    }
    if (local_4 == (ScannerInterface *)0x2) {
      return *(ulong *)(param_1 + 0x10);
    }
    if (local_4 == (ScannerInterface *)0x3) {
      return *(ulong *)(param_1 + 4);
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003480 @ 10003480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10003480(undefined4 param_1,undefined4 param_2)

{
  _DAT_10020358 = param_1;
  DAT_10020354 = param_2;
  return;
}



/**************************************************/

/* Function: FUN_100034a0 @ 100034a0 */

undefined4 FUN_100034a0(void)

{
  return DAT_10020354;
}



/**************************************************/

/* Function: FUN_100034b0 @ 100034b0 */

void __cdecl FUN_100034b0(undefined4 param_1)

{
  DAT_1002035c = param_1;
  return;
}



/**************************************************/

/* Function: FUN_100034c0 @ 100034c0 */

undefined4 FUN_100034c0(void)

{
  return DAT_1002035c;
}



/**************************************************/

/* Function: FUN_100034d0 @ 100034d0 */

void __cdecl FUN_100034d0(undefined4 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  LPCWSTR *ppWVar3;
  DWORD nSize;
  va_list *ppcVar4;
  va_list *Arguments;
  LPCWSTR local_4;
  
  ppcVar4 = (va_list *)0x0;
  nSize = 1;
  ppWVar3 = &local_4;
  DVar2 = 0;
  DVar1 = FUN_100034a0();
  ppcVar4 = (va_list *)FormatMessageW(0x900,DAT_10020580,DVar1,DVar2,(LPWSTR)ppWVar3,nSize,ppcVar4);
  if (ppcVar4 == (va_list *)0x0) {
    DVar2 = 1;
    ppWVar3 = &local_4;
    Arguments = ppcVar4;
    DVar1 = FUN_100034a0();
    ppcVar4 = (va_list *)
              FormatMessageW(0x1100,DAT_10020580,DVar1,(DWORD)ppcVar4,(LPWSTR)ppWVar3,DVar2,
                             Arguments);
  }
  if (0 < (int)ppcVar4) {
    FUN_100076c0(param_1,local_4);
    LocalFree(local_4);
    return;
  }
  *(undefined2 *)*param_1 = 0;
  return;
}



/**************************************************/

/* Function: thunk_FUN_10007470 @ 10003550 */

void __fastcall thunk_FUN_10007470(undefined4 *param_1)

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

/* Function: ScannerInterface @ 10003560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall ScannerInterface::ScannerInterface(wchar_t const *,int (__cdecl*)(int,unsigned
   long)) */

ScannerInterface * __thiscall
ScannerInterface::ScannerInterface
          (ScannerInterface *this,wchar_t *param_1,_func_int_int_ulong *param_2)

{
                    /* 0x3560  1  ??0ScannerInterface@@QAE@PB_WP6AHHK@Z@Z */
  if (DAT_10020580 == 0) {
    DAT_10020580 = FUN_10009ea0(DAT_1002057c);
  }
  lstrcpyW((LPWSTR)&DAT_10020360,param_1);
  _DAT_10020584 = param_2;
  FUN_100096e0(&DAT_1002058c,DAT_1002057c);
  *(undefined4 *)this = 0;
  _memset(this + 4,0,0x2c);
  return this;
}



/**************************************************/

/* Function: GetKeyName @ 100035d0 */

/* public: wchar_t const * __thiscall ScannerInterface::GetKeyName(void) */

wchar_t * __thiscall ScannerInterface::GetKeyName(ScannerInterface *this)

{
                    /* 0x35d0  16  ?GetKeyName@ScannerInterface@@QAEPB_WXZ */
  return (wchar_t *)&DAT_10020360;
}



/**************************************************/

/* Function: DeviceIsOpen @ 100035e0 */

/* protected: int __thiscall ScannerInterface::DeviceIsOpen(void) */

int __thiscall ScannerInterface::DeviceIsOpen(ScannerInterface *this)

{
  int iVar1;
  
                    /* 0x35e0  7  ?DeviceIsOpen@ScannerInterface@@IAEHXZ */
  iVar1 = FUN_100034c0();
  return (uint)(iVar1 != 0);
}



/**************************************************/

/* Function: DeviceIsClosed @ 100035f0 */

/* protected: int __thiscall ScannerInterface::DeviceIsClosed(void) */

int __thiscall ScannerInterface::DeviceIsClosed(ScannerInterface *this)

{
  int iVar1;
  
                    /* 0x35f0  6  ?DeviceIsClosed@ScannerInterface@@IAEHXZ */
  iVar1 = FUN_100034c0();
  return (uint)(iVar1 == 0);
}



/**************************************************/

/* Function: DeviceIsBusy @ 10003600 */

/* protected: int __thiscall ScannerInterface::DeviceIsBusy(void) */

int __thiscall ScannerInterface::DeviceIsBusy(ScannerInterface *this)

{
  int iVar1;
  
                    /* 0x3600  5  ?DeviceIsBusy@ScannerInterface@@IAEHXZ */
  iVar1 = FUN_100034c0();
  if ((iVar1 != 4) && (iVar1 != 3)) {
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: SetDeviceOpen @ 10003620 */

/* protected: void __thiscall ScannerInterface::SetDeviceOpen(int) */

void __thiscall ScannerInterface::SetDeviceOpen(ScannerInterface *this,int param_1)

{
                    /* 0x3620  23  ?SetDeviceOpen@ScannerInterface@@IAEXH@Z */
  FUN_100034b0((uint)(param_1 == 1));
  return;
}



/**************************************************/

/* Function: Get_Client @ 10003640 */

/* public: void * __thiscall ScannerInterface::Get_Client(void) */

void * __thiscall ScannerInterface::Get_Client(ScannerInterface *this)

{
  ScannerInterface *local_4;
  
                    /* 0x3640  18  ?Get_Client@ScannerInterface@@QAEPAXXZ */
  local_4 = this;
  FUN_10003d60(0x1058,0,0,&local_4,4,0);
  return local_4;
}



/**************************************************/

/* Function: FUN_10003660 @ 10003660 */

void __fastcall FUN_10003660(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined2 *local_428 [2];
  undefined4 local_420;
  LPCWSTR local_21c [2];
  undefined4 local_214;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100184d6;
  local_c = ExceptionList;
  local_10 = DAT_1001ef38 ^ (uint)local_428;
  ExceptionList = &local_c;
  local_420 = 0;
  FUN_10007470(local_428);
  local_4 = 0;
  local_214 = 0;
  FUN_10007470(local_21c);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_100034a0();
  if (iVar1 != 0) {
    *param_1 = 0x228;
    uVar2 = FUN_100034a0();
    param_1[1] = uVar2;
    *(undefined2 *)param_1[7] = 0;
    *local_428[0] = 0;
    iVar1 = 0;
    if (DAT_1001e9f8 != 0) {
      piVar4 = &DAT_1001e9f8;
      do {
        iVar3 = FUN_100034a0();
        if (*piVar4 == iVar3) {
          FUN_10007590(local_428,DAT_10020580,*(UINT *)(iVar1 * 0xc + 0x1001ea00));
          iVar1 = *(int *)(iVar1 * 0xc + 0x1001ea00);
          if ((iVar1 == 0x29c) || (iVar1 == 0x298)) {
            FUN_10007610(local_21c,L"(Code:%X)");
            FUN_10007700(local_428,local_21c[0]);
          }
          goto LAB_1000377f;
        }
        iVar1 = iVar1 + 1;
        piVar4 = &DAT_1001e9f8 + iVar1 * 3;
      } while ((&DAT_1001e9f8)[iVar1 * 3] != 0);
    }
    iVar1 = FUN_100034a0();
    if (iVar1 != 0) {
      FUN_10007590(local_428,DAT_10020580,0x29c);
      FUN_100034a0();
      FUN_10007610(local_21c,L"(Code:%X)");
      FUN_10007700(local_428,local_21c[0]);
LAB_1000377f:
      FUN_10007680(param_1 + 7,local_428);
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_10007470(local_21c);
  local_4 = 0xffffffff;
  FUN_10007470(local_428);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_428);
  return;
}



/**************************************************/

/* Function: FUN_10003850 @ 10003850 */

int FUN_10003850(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = in_EAX;
  if ((((in_EAX != -0x40000000) && (in_EAX != -0x7fffff9a)) && (in_EAX != 0x40000065)) &&
     (iVar2 = 0, iVar1 = 0, iVar3 = DAT_1001e9f8, DAT_1001e9f8 != 0)) {
    while (iVar3 != in_EAX) {
      iVar2 = iVar2 + 1;
      iVar3 = (&DAT_1001e9f8)[iVar2 * 3];
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar1 = *(int *)(iVar2 * 0xc + 0x1001e9fc);
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_100038a0 @ 100038a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100038a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x100038a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_10020584)();
  return;
}



/**************************************************/

/* Function: FUN_100038b0 @ 100038b0 */

undefined4 FUN_100038b0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_1002057c = param_1;
  }
  return 1;
}



/**************************************************/

/* Function: Close @ 100038d0 */

/* public: unsigned long __thiscall ScannerInterface::Close(void) */

ulong __thiscall ScannerInterface::Close(ScannerInterface *this)

{
  int iVar1;
  DWORD DVar2;
  ulong uVar3;
  int iVar4;
  
                    /* 0x38d0  4  ?Close@ScannerInterface@@QAEKXZ */
  iVar4 = 0;
  iVar1 = DeviceIsOpen(this);
  if (iVar1 != 0) {
    FUN_100034b0(1);
    iVar4 = FUN_10004570();
    if (iVar4 == 0) {
      SetDeviceOpen(this,0);
    }
  }
  DVar2 = GetLastError();
  FUN_10003480(DVar2,iVar4);
  uVar3 = FUN_10003850();
  return uVar3;
}



/**************************************************/

/* Function: GetDeviceID @ 10003920 */

/* public: unsigned long __thiscall ScannerInterface::GetDeviceID(void) */

ulong __thiscall ScannerInterface::GetDeviceID(ScannerInterface *this)

{
  int *piVar1;
  ulong uVar2;
  
                    /* 0x3920  14  ?GetDeviceID@ScannerInterface@@QAEKXZ */
  piVar1 = Get_Client(this);
                    /* WARNING: Could not recover jumptable at 0x1000392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*piVar1 + 0x20))();
  return uVar2;
}



/**************************************************/

/* Function: IsFilmUnitAttached @ 10003930 */

/* public: int __thiscall ScannerInterface::IsFilmUnitAttached(void) */

int __thiscall ScannerInterface::IsFilmUnitAttached(ScannerInterface *this)

{
  int iVar1;
  
                    /* 0x3930  20  ?IsFilmUnitAttached@ScannerInterface@@QAEHXZ */
  iVar1 = DeviceIsOpen(this);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_1001e9f4;
    if (DAT_1001e9f4 == -1) {
      DAT_1001e9f4 = FUN_10003e50();
      return DAT_1001e9f4;
    }
  }
  return iVar1;
}



/**************************************************/

/* Function: ~ScannerInterface @ 10003960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall ScannerInterface::~ScannerInterface(void) */

void __thiscall ScannerInterface::~ScannerInterface(ScannerInterface *this)

{
  int iVar1;
  
                    /* 0x3960  2  ??1ScannerInterface@@QAE@XZ */
  iVar1 = DeviceIsOpen(this);
  if (iVar1 != 0) {
    Close(this);
    SetDeviceOpen(this,0);
  }
  FUN_10003dc0();
  lstrcpyW((LPWSTR)&DAT_10020360,(LPCWSTR)&PTR_10019354);
  _DAT_10020584 = 0;
  if (DAT_10020580 != (HMODULE)0x0) {
    FreeLibrary(DAT_10020580);
    DAT_10020580 = (HMODULE)0x0;
  }
  return;
}



/**************************************************/

/* Function: Open @ 100039c0 */

/* public: unsigned long __thiscall ScannerInterface::Open(void) */

ulong __thiscall ScannerInterface::Open(ScannerInterface *this)

{
  int iVar1;
  ulong uVar2;
  DWORD DVar3;
  
                    /* 0x39c0  21  ?Open@ScannerInterface@@QAEKXZ */
  iVar1 = DeviceIsOpen(this);
  if (iVar1 != 0) {
    uVar2 = Close(this);
    if (uVar2 != 0) goto LAB_10003a05;
  }
  iVar1 = FUN_10003e80();
  if (iVar1 == 0) {
    SetDeviceOpen(this,1);
    InitCapabilityTable(this);
    DVar3 = GetLastError();
    FUN_10003480(DVar3,iVar1);
  }
LAB_10003a05:
  uVar2 = FUN_10003850();
  return uVar2;
}



/**************************************************/

/* Function: GetDeviceName @ 10003a10 */

/* public: unsigned long __thiscall ScannerInterface::GetDeviceName(char *,int *) */

ulong __thiscall ScannerInterface::GetDeviceName(ScannerInterface *this,char *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  DWORD DVar4;
  
                    /* 0x3a10  15  ?GetDeviceName@ScannerInterface@@QAEKPADPAH@Z */
  uVar1 = *param_2;
  *param_2 = 0x11;
  if (uVar1 < 0x11) {
    uVar2 = FUN_10003850();
    return uVar2;
  }
  if (DAT_10020588 != 0) {
    _strcpy_s(param_1,0x11,&DAT_10020568);
    uVar2 = FUN_10003850();
    return uVar2;
  }
  iVar3 = DeviceIsClosed(this);
  if (iVar3 == 0) {
    iVar3 = DeviceIsBusy(this);
    if (iVar3 == 0) {
      uVar2 = FUN_10003e00(param_1,param_2);
      if (uVar2 == 0) {
        _strcpy_s(&DAT_10020568,0x12,param_1);
        DAT_10020588 = 1;
        goto LAB_10003aaa;
      }
    }
    else {
      uVar2 = 0x8300f20c;
    }
  }
  else {
    uVar2 = Open(this);
    if (uVar2 == 0) {
      uVar2 = FUN_10003e00(param_1,param_2);
      if (uVar2 == 0) {
        _strcpy_s(&DAT_10020568,0x12,param_1);
        DAT_10020588 = 1;
      }
      Close(this);
LAB_10003aaa:
      if (uVar2 == 0) goto LAB_10003abe;
    }
  }
  DVar4 = GetLastError();
  FUN_10003480(DVar4,uVar2);
LAB_10003abe:
  uVar2 = FUN_10003850();
  return uVar2;
}



/**************************************************/

/* Function: GetLastErrorInfo @ 10003b10 */

/* public: unsigned long __thiscall ScannerInterface::GetLastErrorInfo(struct DrvErrorInfo *) */

ulong __thiscall ScannerInterface::GetLastErrorInfo(ScannerInterface *this,DrvErrorInfo *param_1)

{
  DrvErrorInfo *pDVar1;
  int iVar2;
  ulong uVar3;
  
                    /* 0x3b10  17  ?GetLastErrorInfo@ScannerInterface@@QAEKPAUDrvErrorInfo@@@Z */
  pDVar1 = param_1;
  FUN_10003ea0((undefined4 *)param_1);
  FUN_10003660((undefined4 *)pDVar1);
  iVar2 = DeviceIsOpen(this);
  if (iVar2 != 0) {
    param_1 = (DrvErrorInfo *)0x11;
    uVar3 = GetDeviceName(this,(char *)(pDVar1 + 8),(int *)&param_1);
    return uVar3;
  }
  uVar3 = FUN_10003850();
  return uVar3;
}



/**************************************************/

/* Function: FUN_10003b70 @ 10003b70 */

void FUN_10003b70(void)

{
  undefined4 *puVar1;
  int *piVar2;
  wchar_t *_Str1;
  wchar_t *_Str1_00;
  DWORD DVar3;
  int iVar4;
  undefined2 *puVar5;
  void *local_424;
  undefined1 *puStack_420;
  undefined4 local_41c;
  undefined2 local_418;
  undefined1 local_416 [518];
  undefined2 local_210;
  undefined1 local_20e [518];
  uint local_8;
  
  local_41c = 0xffffffff;
  puStack_420 = &LAB_1001851b;
  local_424 = ExceptionList;
  local_8 = DAT_1001ef38 ^ (uint)&local_418;
  ExceptionList = &local_424;
  iVar4 = 0;
  if (DAT_100205a0 != (int *)0x0) {
code_r0x10003d1d:
    DVar3 = GetLastError();
    FUN_10003480(DVar3,iVar4);
    ExceptionList = local_424;
    __security_check_cookie(local_8 ^ (uint)&local_418);
    return;
  }
  local_41c = 0;
  puVar1 = (undefined4 *)FUN_1000a8e8(0x10);
  local_41c = CONCAT31(local_41c._1_3_,1);
  if (puVar1 == (undefined4 *)0x0) {
    DAT_100205a0 = (int *)0x0;
  }
  else {
    DAT_100205a0 = (int *)FUN_10003ed0(puVar1);
  }
  local_41c = 0xffffffff;
  iVar4 = (**(code **)(*DAT_100205a0 + 4))(DAT_1002057c);
  if (iVar4 != 0) goto code_r0x10003d1d;
  local_418 = 0;
  _memset(local_416,0,0x206);
  local_210 = 0;
  _memset(local_20e,0,0x206);
  FUN_100073b0(0x12a,&local_418,0x208,0,0);
  FUN_100073b0(299,&local_210,0x208,0,0);
  puVar5 = &local_210;
  piVar2 = (int *)(**(code **)(DAT_1002058c + 0xc))(L"PortName");
  _Str1 = (wchar_t *)(**(code **)(*piVar2 + 8))();
  iVar4 = FUN_10007c30(&DAT_1002058c,L"PortName");
  if (((iVar4 != 0) && (*_Str1 != L'\0')) && (*_Str1 != L'-')) {
    iVar4 = __wcsicmp(_Str1,L"empty");
    if (iVar4 != 0) goto LAB_10003cbd;
  }
  _Str1 = (wchar_t *)0x0;
LAB_10003cbd:
  piVar2 = (int *)(**(code **)(DAT_1002058c + 0xc))(L"NONSTI");
  _Str1_00 = (wchar_t *)(**(code **)(*piVar2 + 8))();
  iVar4 = __wcsicmp(_Str1_00,L"Enable");
  if (iVar4 != 0) {
    puVar5 = (undefined2 *)0x0;
  }
  (**(code **)(*DAT_100205a0 + 0xc))(&local_418,puVar5,_Str1);
  FUN_10003d1d();
  return;
}



/**************************************************/

/* Function: Catch@10003d06 @ 10003d06 */

undefined * Catch_10003d06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0xc400f303;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_10003d1a;
}



/**************************************************/

/* Function: FUN_10003d1d @ 10003d1d */

void FUN_10003d1d(void)

{
  DWORD DVar1;
  uint unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 uStack0000000c;
  
  DVar1 = GetLastError();
  FUN_10003480(DVar1,unaff_ESI);
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x10003d4a;
  __security_check_cookie(*(uint *)(unaff_EBP + 0x410) ^ unaff_EBP);
  return;
}



/**************************************************/

/* Function: FUN_10003d60 @ 10003d60 */

int __cdecl
FUN_10003d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  if (DAT_100205a0 == (int *)0x0) {
    FUN_10003480(0,0xc300f209);
    return -0x3cff0df7;
  }
  iVar1 = (**(code **)(*DAT_100205a0 + 0x1c))(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 != 0) {
    iVar3 = iVar1;
    DVar2 = GetLastError();
    FUN_10003480(DVar2,iVar3);
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_10003dc0 @ 10003dc0 */

undefined4 FUN_10003dc0(void)

{
  if (DAT_100205a0 != (int *)0x0) {
    (**(code **)(*DAT_100205a0 + 0x10))();
    (**(code **)(*DAT_100205a0 + 8))();
    if (DAT_100205a0 != (int *)0x0) {
      (**(code **)*DAT_100205a0)(1);
    }
    DAT_100205a0 = (int *)0x0;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003e00 @ 10003e00 */

int __cdecl FUN_10003e00(undefined4 param_1,int *param_2)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_2 < 0x11) {
    uVar3 = 0x8300f207;
    *param_2 = 0x11;
    DVar1 = GetLastError();
    FUN_10003480(DVar1,uVar3);
    return -0x7cff0df9;
  }
  iVar2 = FUN_10003d60(0x1046,0,0,param_1,*param_2,0);
  return iVar2;
}



/**************************************************/

/* Function: FUN_10003e50 @ 10003e50 */

uint FUN_10003e50(void)

{
  int iVar1;
  uint local_4;
  
  local_4 = 0;
  iVar1 = FUN_10003d60(0x1041,0,0,&local_4,4,0);
  return ~-(uint)(iVar1 != 0) & local_4;
}



/**************************************************/

/* Function: FUN_10003e80 @ 10003e80 */

undefined4 FUN_10003e80(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_10003b70();
  uVar3 = uVar1;
  DVar2 = GetLastError();
  FUN_10003480(DVar2,uVar3);
  return uVar1;
}



/**************************************************/

/* Function: FUN_10003ea0 @ 10003ea0 */

undefined4 __cdecl FUN_10003ea0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x228;
  uVar1 = FUN_100034a0();
  param_1[1] = uVar1;
  FUN_100034d0(param_1 + 7);
  return 0;
}



/**************************************************/

/* Function: FUN_10003ed0 @ 10003ed0 */

void __fastcall FUN_10003ed0(undefined4 *param_1)

{
  *param_1 = SimpleDriverInterface::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/**************************************************/

/* Function: FUN_10003ef0 @ 10003ef0 */

undefined4 __fastcall FUN_10003ef0(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,1,1,L"SimpleDriverInterface_Lock");
  *(HANDLE *)(param_1 + 4) = pvVar1;
  pvVar1 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,1,1,L"SimpleDriverInterface_Cmd");
  *(HANDLE *)(param_1 + 8) = pvVar1;
  return 0;
}



/**************************************************/

/* Function: FUN_10003f30 @ 10003f30 */

void __fastcall FUN_10003f30(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



/**************************************************/

/* Function: FUN_10003f60 @ 10003f60 */

int __thiscall FUN_10003f60(void *this,LPCWSTR param_1,undefined **param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = FUN_10002d30(param_1,param_2,param_3,&param_3);
  *(int **)((int)this + 0xc) = piVar1;
  return param_3;
}



/**************************************************/

/* Function: FUN_10003f90 @ 10003f90 */

void __fastcall FUN_10003f90(int param_1)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



/**************************************************/

/* Function: FUN_10003fb0 @ 10003fb0 */

undefined4 __fastcall FUN_10003fb0(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  ReleaseSemaphore(*(HANDLE *)(param_1 + 4),1,(LPLONG)0x0);
  return 0;
}



/**************************************************/

/* Function: FUN_10003fe0 @ 10003fe0 */

void __thiscall
FUN_10003fe0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_230;
  undefined4 local_214 [125];
  uint uStack_20;
  uint local_4;
  
  local_4 = DAT_1001ef38 ^ (uint)local_214;
  local_214[0] = 0;
  uStack_230 = 0x10004023;
  WaitForSingleObject(*(HANDLE *)((int)this + 8),0xffffffff);
  (**(code **)(*(int *)this + 0x14))();
  uStack_230 = param_4;
  iVar1 = (**(code **)(**(int **)((int)this + 0xc) + 4))
                    (*(int **)((int)this + 0xc),param_1,param_2,param_3);
  if (iVar1 < 0) {
    (**(code **)(**(int **)((int)this + 0xc) + 0xc))(*(int **)((int)this + 0xc),&stack0xfffffdd4);
  }
  (**(code **)(*(int *)this + 0x18))();
  ReleaseSemaphore(*(HANDLE *)((int)this + 8),1,(LPLONG)0x0);
  __security_check_cookie(uStack_20 ^ (uint)&uStack_230);
  return;
}



/**************************************************/

/* Function: FUN_100040b0 @ 100040b0 */

void __fastcall FUN_100040b0(int param_1)

{
  int *piStack_218;
  undefined1 *puStack_214;
  undefined1 local_210 [516];
  uint uStack_c;
  uint local_4;
  
  puStack_214 = local_210;
  local_4 = DAT_1001ef38 ^ (uint)local_210;
  piStack_218 = *(int **)(param_1 + 0xc);
  (**(code **)(*piStack_218 + 0xc))();
  __security_check_cookie(uStack_c ^ (uint)&piStack_218);
  return;
}



/**************************************************/

/* Function: FUN_100040f0 @ 100040f0 */

void __fastcall FUN_100040f0(undefined4 *param_1)

{
  *param_1 = SimpleDriverInterface::vftable;
  FUN_10003f90((int)param_1);
  FUN_10003f30((int)param_1);
  return;
}



/**************************************************/

/* Function: FUN_10004110 @ 10004110 */

undefined4 * __thiscall FUN_10004110(void *this,byte param_1)

{
  FUN_100040f0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10004130 @ 10004130 */

void __fastcall FUN_10004130(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  return;
}



/**************************************************/

/* Function: FUN_10004140 @ 10004140 */

void __fastcall FUN_10004140(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  return;
}



/**************************************************/

/* Function: FUN_10004150 @ 10004150 */

void __fastcall FUN_10004150(void *param_1)

{
  uint *puVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort unaff_BX;
  undefined4 *puVar6;
  uint uStack_144;
  int iStack_140;
  void *local_13c;
  undefined1 local_138 [4];
  undefined1 auStack_134 [8];
  undefined1 auStack_12c [8];
  undefined4 auStack_124 [34];
  undefined4 auStack_9c [3];
  char acStack_90 [128];
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_1001ef38 ^ (uint)&uStack_144;
  local_13c = param_1;
  puVar1 = (uint *)(**(code **)(**(int **)((int)param_1 + 8) + 0x28))(local_138);
  if ((*puVar1 == 0) && (puVar1[1] == 1)) {
    uStack_144 = *puVar1;
    FUN_100073b0(0x129,&uStack_144,0,0,0);
    if ((uStack_144 != 0) && (uStack_144 < 3)) {
      piVar2 = (int *)(**(code **)(**(int **)((int)param_1 + 8) + 0x2c))
                                (auStack_12c,&stack0xfffffeb8);
      if ((*piVar2 == 0) && (piVar2[1] == 1)) {
        pvVar3 = _malloc((uint)unaff_BX);
        local_13c = pvVar3;
        if (pvVar3 != (void *)0x0) {
          piVar2 = (int *)(**(code **)(**(int **)((int)param_1 + 8) + 0x30))
                                    (auStack_134,pvVar3,unaff_BX);
          if ((*piVar2 == 0) && (piVar2[1] == 1)) {
            _memset(auStack_9c,0,0x88);
            puVar4 = FUN_10009880(auStack_124,(int)pvVar3);
            puVar6 = auStack_9c;
            for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            _free(local_13c);
            _strcpy_s((char *)(iStack_140 + 0x18),0x14,acStack_90);
            FUN_10009a70((int)auStack_9c);
          }
        }
      }
    }
  }
  __security_check_cookie(uStack_10 ^ (uint)&stack0xfffffeb8);
  return;
}



/**************************************************/

/* Function: FUN_100042b0 @ 100042b0 */

undefined4 __fastcall FUN_100042b0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10004140(param_1);
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 8))();
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1);
    }
    param_1[2] = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: FUN_100042f0 @ 100042f0 */

void __fastcall FUN_100042f0(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  return;
}



/**************************************************/

/* Function: FUN_10004300 @ 10004300 */

void __fastcall FUN_10004300(int *param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  FUN_10004140(param_1);
  piVar1 = (int *)(**(code **)(*(int *)param_1[2] + 0x24))(local_8);
  if ((*piVar1 == 0) && (piVar1[1] == 1)) {
    *param_1 = 1;
  }
  return;
}



/**************************************************/

/* Function: FUN_10004340 @ 10004340 */

int __thiscall FUN_10004340(void *this,LPCWSTR param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10018566;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_2 == 0) {
    puVar1 = (undefined4 *)FUN_1000a8e8(0x8fc);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_10005bc0(puVar1);
      goto LAB_1000439c;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_1000a8e8(0x238);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_10004530(puVar1);
      goto LAB_1000439c;
    }
  }
  piVar2 = (int *)0x0;
LAB_1000439c:
  *(int **)((int)this + 8) = piVar2;
  local_8 = 0xffffffff;
  iVar3 = (**(code **)(*piVar2 + 4))(param_1,param_2,param_3);
  if (iVar3 != 0) {
    ExceptionList = local_10;
    return iVar3;
  }
  if ((param_1 == (LPCWSTR)0x0) || (iVar3 = lstrlenW(param_1), iVar3 == 0)) {
    ExceptionList = local_10;
    return 0x11;
  }
  if (*(int *)((int)this + 4) != 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar3 = FUN_10004300(this);
  if (iVar3 != 0) {
    ExceptionList = local_10;
    return iVar3;
  }
  iVar3 = FUN_10004150(this);
  if (iVar3 != 0) {
    ExceptionList = local_10;
    return iVar3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@10004407 @ 10004407 */

undefined * Catch_10004407(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = 1;
  return &DAT_1000443a;
}



/**************************************************/

/* Function: FUN_10004480 @ 10004480 */

FARPROC FUN_10004480(undefined4 *param_1,int *param_2,LPCSTR param_3)

{
  DWORD DVar1;
  FARPROC pFVar2;
  HMODULE hModule;
  undefined4 uVar3;
  code *pcVar4;
  
  if (DAT_100205a8 == 0) {
    DVar1 = GetVersion();
    if ((int)DVar1 < 0) {
      GetFileAttributesW(L"???.???");
      DAT_100205a4 = GetModuleHandleA("Unicows.dll");
    }
    DAT_100205a8 = 1;
  }
  if (DAT_100205a4 != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(DAT_100205a4,param_3);
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

/* Function: FUN_10004530 @ 10004530 */

undefined4 * __fastcall FUN_10004530(undefined4 *param_1)

{
  BOOL BVar1;
  
  FUN_100054a0(param_1);
  *param_1 = SG_NonStiClient::vftable;
  BVar1 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x87),4000);
  param_1[0x8d] = BVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



/**************************************************/

/* Function: FUN_10004570 @ 10004570 */

undefined4 FUN_10004570(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10004580 @ 10004580 */

void __thiscall FUN_10004580(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 4) = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10004590 @ 10004590 */

undefined1 __fastcall FUN_10004590(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}



/**************************************************/

/* Function: FUN_100045a0 @ 100045a0 */

undefined4 __thiscall FUN_100045a0(void *this,LPWSTR param_1)

{
  lstrcpyW(param_1,(LPCWSTR)((int)this + 0x1c));
  return 1;
}



/**************************************************/

/* Function: FUN_100045c0 @ 100045c0 */

undefined4 __fastcall FUN_100045c0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(param_1 + 0x18))(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(HMODULE *)(param_1 + 0xc) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10004600 @ 10004600 */

DWORD __fastcall FUN_10004600(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x18;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x28))(*(int **)(param_1 + 0x10));
  if (iVar1 < 0) {
                    /* WARNING: Could not recover jumptable at 0x1000461b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004630 @ 10004630 */

DWORD __fastcall FUN_10004630(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x18;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))(*(int **)(param_1 + 0x10));
  if (iVar1 < 0) {
                    /* WARNING: Could not recover jumptable at 0x1000464b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004660 @ 10004660 */

void __thiscall
FUN_10004660(void *this,int *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 uStack_14;
  byte bStack_13;
  uint local_10;
  LPCRITICAL_SECTION local_c;
  undefined1 auStack_8 [8];
  
  local_10 = 1;
  if (*(char *)((int)this + 4) == '\0') {
    local_c = (LPCRITICAL_SECTION)((int)this + 0x21c);
    EnterCriticalSection(local_c);
    iVar3 = (**(code **)(*(int *)this + 0x10))();
    while (iVar3 == 0) {
      if (param_3 == 0) {
        param_3 = -1;
      }
      iVar1 = (**(code **)(**(int **)((int)this + 0x10) + 0x20))
                        (*(int **)((int)this + 0x10),param_2,param_3,param_4,param_5,param_6,
                         &local_10);
      iVar3 = (**(code **)(*(int *)this + 0x14))();
      if (iVar3 != 0) {
        if (iVar1 != -0x7fffbffb) {
          iVar3 = 0x1a;
        }
        break;
      }
      if (local_10 != 0) {
        local_10 = 1;
        break;
      }
      piVar2 = (int *)(**(code **)(*(int *)this + 0x60))(auStack_8,&uStack_14);
      if ((*piVar2 != 0) || (piVar2[1] != 1)) break;
      if (bStack_13 != 0x96) {
        local_10 = 1;
        iVar3 = (uint)bStack_13 * 0x1000 + 2;
        break;
      }
      Sleep(5);
      iVar3 = (**(code **)(*(int *)this + 0x10))();
    }
    LeaveCriticalSection(local_c);
  }
  else {
    iVar3 = 0;
    local_10 = 1;
  }
  *param_1 = iVar3;
  param_1[1] = ~-(uint)(iVar3 != 0) & local_10;
  return;
}



/**************************************************/

/* Function: FUN_10004790 @ 10004790 */

undefined4 * __thiscall FUN_10004790(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x2;
  puVar3 = (undefined4 *)FUN_10004660(this,local_8,0x102e,(int)&param_1,4,param_2,2);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_100047e0 @ 100047e0 */

undefined4 * __thiscall
FUN_100047e0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  param_1 = param_3;
  *puVar2 = 0;
  puVar2[1] = 1;
  puVar3 = (undefined4 *)FUN_10004660(this,local_8,0x102f,(int)&param_1,4,param_2,param_3);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10004830 @ 10004830 */

undefined4 * __thiscall FUN_10004830(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x8;
  puVar3 = (undefined4 *)FUN_10004660(this,local_8,0x1036,(int)&param_1,4,param_2,8);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10004880 @ 10004880 */

undefined4 * __thiscall FUN_10004880(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x1;
  *puVar2 = 0;
  puVar3 = (undefined4 *)FUN_10004660(this,local_8,0x1030,param_2,1,&param_1,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_100048d0 @ 100048d0 */

undefined4 * __thiscall FUN_100048d0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x1;
  *puVar2 = 0;
  puVar3 = (undefined4 *)FUN_10004660(this,local_8,0x1037,param_2,1,&param_1,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10004920 @ 10004920 */

int * __thiscall FUN_10004920(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 0x2c;
  FUN_10004660(this,param_1,0x100b,param_2,0x2c,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004950 @ 10004950 */

int * __thiscall
FUN_10004950(void *this,int *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  undefined1 uStack00000009;
  undefined2 uStack0000000a;
  
  uStack00000009 = param_3;
  uStack0000000a = param_4;
  _param_3 = 4;
  FUN_10004660(this,param_1,0x100d,(int)&param_2,4,&param_3,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_100049a0 @ 100049a0 */

int * __thiscall FUN_100049a0(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 8;
  FUN_10004660(this,param_1,0x102b,param_2,8,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_100049d0 @ 100049d0 */

int * __thiscall
FUN_100049d0(void *this,int *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = 4;
  FUN_10004660(this,param_1,0x100f,(int)&local_4,4,param_3,param_4);
  *param_2 = 0;
  return param_1;
}



/**************************************************/

/* Function: FUN_10004a10 @ 10004a10 */

int * __thiscall FUN_10004a10(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 8;
  FUN_10004660(this,param_1,0x102c,param_2,8,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004a40 @ 10004a40 */

int * __thiscall FUN_10004a40(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0xc;
  FUN_10004660(this,param_1,0x1011,(int)&local_4,4,param_2,0xc);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004a70 @ 10004a70 */

int * __thiscall FUN_10004a70(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_10004660(this,param_1,0x1012,(int)&local_4,2,param_2,2);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004aa0 @ 10004aa0 */

int * __thiscall FUN_10004aa0(void *this,int *param_1,undefined4 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)this & 0xffffff;
  FUN_10004660(this,param_1,0x1013,(int)&uStack_4 + 3,1,param_2,1);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004ad0 @ 10004ad0 */

int * __thiscall FUN_10004ad0(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 0x2c;
  FUN_10004660(this,param_1,0x1016,param_2,0x2c,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004b00 @ 10004b00 */

int * __thiscall FUN_10004b00(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0x2c;
  FUN_10004660(this,param_1,0x1017,(int)&local_4,4,param_2,0x2c);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004b30 @ 10004b30 */

undefined4 * __thiscall
FUN_10004b30(void *this,undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4
            ,undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  int local_8 [2];
  
  uStack0000000a = param_4;
  uStack00000009 = param_3;
  uStack0000000b = param_5;
  *param_1 = 0;
  param_1[1] = 1;
  _param_3 = 4;
  puVar2 = (undefined4 *)FUN_10004660(this,local_8,0x1018,(int)&param_2,4,&param_3,4);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



/**************************************************/

/* Function: FUN_10004ba0 @ 10004ba0 */

int * __thiscall FUN_10004ba0(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 0x18;
  FUN_10004660(this,param_1,0x101a,param_2,0x18,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004bd0 @ 10004bd0 */

int * __thiscall FUN_10004bd0(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10004660(this,param_1,0x101b,(int)&param_2,1,param_3,0x10);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004c00 @ 10004c00 */

undefined4 * __thiscall
FUN_10004c00(void *this,undefined4 *param_1,int param_2,undefined1 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_28 [2];
  int local_20 [2];
  int local_18 [2];
  int local_10 [2];
  int local_8 [2];
  
  puVar1 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = param_4;
  switch(param_3) {
  case 0:
    piVar3 = local_28;
    goto LAB_10004c8e;
  case 1:
    uVar4 = 0x1032;
    piVar3 = local_20;
    break;
  case 2:
    uVar4 = 0x1033;
    piVar3 = local_18;
    break;
  case 3:
    uVar4 = 0x1034;
    piVar3 = local_10;
    break;
  default:
    piVar3 = local_8;
LAB_10004c8e:
    uVar4 = 0x1031;
  }
  puVar2 = (undefined4 *)FUN_10004660(this,piVar3,uVar4,param_2,param_4,&param_1,4);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  return puVar1;
}



/**************************************************/

/* Function: FUN_10004cd0 @ 10004cd0 */

undefined4 * __thiscall
FUN_10004cd0(void *this,undefined4 *param_1,int param_2,undefined1 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_28 [2];
  int local_20 [2];
  int local_18 [2];
  int local_10 [2];
  int local_8 [2];
  
  puVar1 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = param_4;
  switch(param_3) {
  case 0:
    piVar3 = local_28;
    goto LAB_10004d5e;
  case 1:
    uVar4 = 0x1027;
    piVar3 = local_20;
    break;
  case 2:
    uVar4 = 0x1028;
    piVar3 = local_18;
    break;
  case 3:
    uVar4 = 0x1029;
    piVar3 = local_10;
    break;
  default:
    piVar3 = local_8;
LAB_10004d5e:
    uVar4 = 0x101f;
  }
  puVar2 = (undefined4 *)FUN_10004660(this,piVar3,uVar4,param_2,param_4,&param_1,4);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  return puVar1;
}



/**************************************************/

/* Function: FUN_10004da0 @ 10004da0 */

int * __thiscall
FUN_10004da0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10004660(this,param_1,0x1020,(int)&param_4,4,param_3,param_4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004dd0 @ 10004dd0 */

undefined4 * __thiscall FUN_10004dd0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x4;
  puVar3 = (undefined4 *)FUN_10004660(this,local_8,0x1006,(int)&param_1,4,param_2,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10004e20 @ 10004e20 */

undefined4 * __thiscall FUN_10004e20(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x1;
  *puVar2 = 0;
  puVar3 = (undefined4 *)FUN_10004660(this,local_8,0x1038,param_2,1,&param_1,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10004e70 @ 10004e70 */

undefined4 * __thiscall FUN_10004e70(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x4;
  puVar3 = (undefined4 *)FUN_10004660(this,local_8,0x1039,(int)&param_1,4,&param_1,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10004ec0 @ 10004ec0 */

int * __thiscall FUN_10004ec0(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0x10;
  FUN_10004660(this,param_1,0x103c,(int)&local_4,0x10,param_2,0x10);
  return param_1;
}



/**************************************************/

/* Function: FUN_10004ef0 @ 10004ef0 */

int FUN_10004ef0(void)

{
  int iVar1;
  
  if (DAT_100205b0 == (FARPROC)0x0) {
    DAT_100205b0 = FUN_10004480(&PTR_LAB_1001945c,(int *)&DAT_100205ac,"CreateActCtxW");
    if (DAT_100205b0 == (FARPROC)0x0) {
      return -1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10004f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*DAT_100205b0)();
  return iVar1;
}



/**************************************************/

/* Function: FUN_10004f20 @ 10004f20 */

void FUN_10004f20(void)

{
  if (DAT_100205b4 == (FARPROC)0x0) {
    DAT_100205b4 = FUN_10004480(&PTR_LAB_1001945c,(int *)&DAT_100205ac,"ActivateActCtx");
    if (DAT_100205b4 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10004f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100205b4)();
  return;
}



/**************************************************/

/* Function: FUN_10004f50 @ 10004f50 */

void FUN_10004f50(void)

{
  if (DAT_100205b8 == (FARPROC)0x0) {
    DAT_100205b8 = FUN_10004480(&PTR_LAB_1001945c,(int *)&DAT_100205ac,"DeactivateActCtx");
    if (DAT_100205b8 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10004f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100205b8)();
  return;
}



/**************************************************/

/* Function: FUN_10004f80 @ 10004f80 */

void FUN_10004f80(void)

{
  if (DAT_100205bc == (FARPROC)0x0) {
    DAT_100205bc = FUN_10004480(&PTR_LAB_1001945c,(int *)&DAT_100205ac,"FindActCtxSectionStringW");
    if (DAT_100205bc == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10004fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100205bc)();
  return;
}



/**************************************************/

/* Function: FUN_10004fb0 @ 10004fb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004fb0(void)

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
  local_21c = DAT_1001ef38 ^ 0x1001bdb8;
  uVar1 = DAT_1001ef38 ^ (uint)local_214;
  ExceptionList = &local_224;
  local_230 = 0;
  local_8 = uVar1;
  if ((((DAT_10020300 != 0) || (DAT_1001e000 != -1)) ||
      ((DAT_100205c0 == (FARPROC)0x0 &&
       (DAT_100205c0 = FUN_10004480(&PTR_LAB_1001945c,(int *)&DAT_100205ac,"QueryActCtxW"),
       DAT_100205c0 == (FARPROC)0x0)))) ||
     (iVar2 = (*DAT_100205c0)(0x80000010,&DAT_1001e000,0,1,local_23c,8,0,uVar1), iVar2 == 0))
  goto LAB_10005184;
  if (local_23c[0] == 0) {
    pFVar3 = FUN_10004480(&PTR_LAB_1001945c,(int *)&DAT_100205ac,"GetModuleHandleExW");
    if ((pFVar3 == (FARPROC)0x0) || (iVar2 = (*pFVar3)(6,&DAT_1001e000,&local_234), iVar2 == 0))
    goto LAB_10005184;
    local_a = 0;
    local_c = 0;
    DVar4 = GetModuleFileNameW(local_234,local_214,0x105);
    if (DVar4 == 0) goto LAB_10005184;
    if (local_c != 0) {
      SetLastError(0x6f);
      goto LAB_10005184;
    }
    local_23c[0] = FUN_10004ef0();
    if (local_23c[0] == -1) {
      DVar4 = GetLastError();
      if ((((DVar4 != 0x714) && (DVar4 != 0x715)) && (DVar4 != 0x717)) && (DVar4 != 0x716))
      goto LAB_10005184;
      local_23c[0] = 0;
    }
    _DAT_10020304 = 1;
  }
  DAT_1001e000 = local_23c[0];
  iVar2 = FUN_10004f20();
  if (iVar2 != 0) {
    local_218 = 0;
    iVar2 = FUN_10004f80();
    if (iVar2 != 0) {
      LoadLibraryW(L"Comctl32.dll");
    }
    local_218 = 0xfffffffe;
    FUN_100051ad();
  }
LAB_10005184:
  ExceptionList = local_224;
  __security_check_cookie(local_8 ^ (uint)local_214);
  return;
}



/**************************************************/

/* Function: FUN_100051ad @ 100051ad */

void FUN_100051ad(void)

{
  FUN_10004f50();
  return;
}



/**************************************************/

/* Function: FUN_100051c0 @ 100051c0 */

undefined4 FUN_100051c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  
  if (DAT_10020308 != 0) {
    OutputDebugStringA("IsolationAware function called after IsolationAwareCleanup\n");
  }
  if (DAT_10020300 != 0) {
    return 1;
  }
  if (DAT_10020308 == 0) {
    iVar2 = FUN_10004fb0();
    if (iVar2 == 0) goto LAB_1000523b;
  }
  uVar1 = DAT_1001e000;
  if (DAT_100205b4 == (FARPROC)0x0) {
    DAT_100205b4 = FUN_10004480(&PTR_LAB_1001945c,(int *)&DAT_100205ac,"ActivateActCtx");
    if (DAT_100205b4 == (FARPROC)0x0) goto LAB_1000523b;
  }
  iVar2 = (*DAT_100205b4)(uVar1,param_1);
  if (iVar2 != 0) {
    return 1;
  }
LAB_1000523b:
  DVar3 = GetLastError();
  if (((DVar3 != 0x7f) && (DVar3 != 0x7e)) && (DVar3 != 0x78)) {
    return 0;
  }
  DAT_10020300 = 1;
  return 1;
}



/**************************************************/

/* Function: FUN_10005270 @ 10005270 */

undefined4 * __thiscall FUN_10005270(void *this,byte param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x21c));
  FUN_10005590(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_100052a0 @ 100052a0 */

HMODULE FUN_100052a0(LPCWSTR param_1)

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
  local_c = DAT_1001ef38 ^ 0x1001bdd8;
  ExceptionList = &local_14;
  local_20 = (HMODULE)0x0;
  local_24 = 0;
  if (DAT_10020300 == 0) {
    iVar1 = FUN_100051c0(&local_24);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (HMODULE)0x0;
    }
  }
  local_8 = 0;
  local_20 = LoadLibraryW(param_1);
  local_8 = 0xfffffffe;
  FUN_10005336();
  ExceptionList = local_14;
  return local_20;
}



/**************************************************/

/* Function: FUN_10005336 @ 10005336 */

void FUN_10005336(void)

{
  DWORD DVar1;
  FARPROC pFVar2;
  FARPROC unaff_EBX;
  int unaff_EBP;
  
  if (DAT_10020300 == unaff_EBX) {
    pFVar2 = (FARPROC)(uint)(*(FARPROC *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (pFVar2 == unaff_EBX) {
      *(FARPROC *)(unaff_EBP + 8) = unaff_EBX;
    }
    else {
      DVar1 = GetLastError();
      *(DWORD *)(unaff_EBP + 8) = DVar1;
    }
    if ((DAT_100205b8 != unaff_EBX) ||
       (DAT_100205b8 = FUN_10004480(&PTR_LAB_1001945c,(int *)&DAT_100205ac,"DeactivateActCtx"),
       DAT_100205b8 != unaff_EBX)) {
      (*DAT_100205b8)();
    }
    if (pFVar2 != unaff_EBX) {
      SetLastError(*(DWORD *)(unaff_EBP + 8));
    }
    return;
  }
  return;
}



/**************************************************/

/* Function: FUN_100053a0 @ 100053a0 */

void __thiscall FUN_100053a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  undefined4 uVar3;
  WCHAR local_414 [260];
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_1001ef38 ^ (uint)local_414;
  FUN_100073b0(0x6b,local_414,0x208,0,0);
  FUN_100073b0(0x6c,local_20c,0x208,0,0);
  pHVar1 = FUN_100052a0(local_414);
  *(HMODULE *)((int)this + 0xc) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    pHVar1 = FUN_100052a0(local_20c);
    *(HMODULE *)((int)this + 0xc) = pHVar1;
    if (pHVar1 == (HMODULE)0x0) goto LAB_10005481;
  }
  pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 0xc),"CreateUSD");
  *(FARPROC *)((int)this + 0x14) = pFVar2;
  pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 0xc),"DeleteUSD");
  *(FARPROC *)((int)this + 0x18) = pFVar2;
  if ((*(code **)((int)this + 0x14) == (code *)0x0) || (pFVar2 == (FARPROC)0x0)) {
    FreeLibrary(*(HMODULE *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    uVar3 = (**(code **)((int)this + 0x14))(param_2,param_3);
    *(undefined4 *)((int)this + 0x10) = uVar3;
  }
LAB_10005481:
  __security_check_cookie(local_4 ^ (uint)local_414);
  return;
}



/**************************************************/

/* Function: FUN_100054a0 @ 100054a0 */

void __fastcall FUN_100054a0(undefined4 *param_1)

{
  *param_1 = SG_Client::vftable;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/**************************************************/

/* Function: FUN_100054c0 @ 100054c0 */

undefined4 FUN_100054c0(void)

{
  return 1;
}



/**************************************************/

/* Function: FUN_100054d0 @ 100054d0 */

undefined4 FUN_100054d0(void)

{
  return 1;
}



/**************************************************/

/* Function: FUN_100054e0 @ 100054e0 */

undefined4 FUN_100054e0(undefined2 *param_1)

{
  *param_1 = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100054f0 @ 100054f0 */

void FUN_100054f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  return;
}



/**************************************************/

/* Function: FUN_10005510 @ 10005510 */

void FUN_10005510(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  return;
}



/**************************************************/

/* Function: FUN_10005530 @ 10005530 */

void FUN_10005530(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  return;
}



/**************************************************/

/* Function: FUN_10005550 @ 10005550 */

void FUN_10005550(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  return;
}



/**************************************************/

/* Function: FUN_10005570 @ 10005570 */

void FUN_10005570(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  return;
}



/**************************************************/

/* Function: FUN_10005590 @ 10005590 */

void __fastcall FUN_10005590(undefined4 *param_1)

{
  *param_1 = SG_Client::vftable;
  return;
}



/**************************************************/

/* Function: FUN_100055a0 @ 100055a0 */

undefined4 * __thiscall
FUN_100055a0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = (**(code **)(*(int *)this + 0xac))(param_3);
    *param_4 = uVar1;
    param_4[1] = 1;
    return param_4;
  }
  (**(code **)(*(int *)this + 0x54))(param_1,param_2,param_3,param_4);
  return param_1;
}



/**************************************************/

/* Function: FUN_100055f0 @ 100055f0 */

undefined4 * __thiscall
FUN_100055f0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = (**(code **)(*(int *)this + 0xac))(param_3);
    *param_4 = uVar1;
    param_4[1] = 1;
    return param_4;
  }
  (**(code **)(*(int *)this + 0x88))(param_1,param_2,param_3,param_4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10005670 @ 10005670 */

int __fastcall FUN_10005670(int *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  undefined1 auStack_18 [3];
  undefined1 local_15 [5];
  undefined1 auStack_10 [16];
  
  local_15[0] = 0;
  (**(code **)(*param_1 + 0x10))();
  iVar1 = (int)(0x10000 / (longlong)DAT_100205e0) * DAT_100205e0;
  iVar3 = DAT_100205c8;
  if (iVar1 <= DAT_100205c8) {
    iVar3 = iVar1;
  }
  (**(code **)(*param_1 + 0x14))();
  (**(code **)(*param_1 + 0x54))(auStack_10,local_15,DAT_100205d8,iVar3);
  if (unaff_EBX == 0) {
    DAT_100205d0 = 1;
  }
  (**(code **)(*param_1 + 0x10))();
  iVar1 = DAT_100205dc;
  DAT_100205c4 = iVar3;
  if (DAT_100205d0 == 0) {
    while (DAT_100205c8 != iVar3) {
      iVar2 = DAT_100205c8 - iVar3;
      iVar4 = DAT_100205d4;
      if (iVar2 <= DAT_100205d4) {
        iVar4 = iVar2;
      }
      if (DAT_100205d0 != 0) break;
      if (iVar1 - DAT_100205c4 < iVar4) {
        iVar4 = DAT_100205d4;
        if (iVar2 <= DAT_100205d4) {
          iVar4 = iVar2;
        }
        while( true ) {
          iVar2 = iVar1 + -0x60000;
          if (iVar1 + -0x60000 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar2 <= iVar1 - DAT_100205c4) break;
          (**(code **)(*param_1 + 0x14))();
          Sleep(DAT_100205e8);
          (**(code **)(*param_1 + 0x10))();
          iVar1 = DAT_100205dc;
          if (DAT_100205d0 != 0) goto LAB_1000581f;
        }
      }
      iVar2 = iVar3 % iVar1;
      (**(code **)(*param_1 + 0x14))();
      Sleep(DAT_100205e8);
      (**(code **)(*param_1 + 0x54))(auStack_18,&stack0xffffffdb,(int)DAT_100205d8 + iVar2,iVar4);
      Sleep(DAT_100205e8);
      (**(code **)(*param_1 + 0x10))();
      iVar1 = DAT_100205dc;
      iVar3 = iVar3 + iVar4;
      DAT_100205c4 = DAT_100205c4 + iVar4;
      iVar2 = iVar2 + iVar4;
      if (DAT_100205dc <= iVar2) {
        _memcpy(DAT_100205d8,(void *)((int)DAT_100205d8 + DAT_100205dc),iVar2 - DAT_100205dc);
      }
      if (DAT_100205d0 != 0) break;
    }
  }
LAB_1000581f:
  (**(code **)(*param_1 + 0x14))();
  return DAT_100205d0;
}



/**************************************************/

/* Function: FUN_10005840 @ 10005840 */

undefined4 __thiscall
FUN_10005840(void *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uintptr_t uVar1;
  void *pvStack_4;
  
  pvStack_4 = this;
  if (*(int *)((int)this + 8) != 0) {
    (**(code **)(*(int *)this + 0xa8))();
  }
  DAT_100205e0 = param_4;
  DAT_100205e8 = 1;
  DAT_100205c4 = 0;
  DAT_100205d0 = 0;
  DAT_100205d4 = param_3;
  DAT_100205c8 = param_2;
  DAT_100205e4 = 0;
  if (param_1 <= param_3) {
    param_1 = param_3;
  }
  DAT_100205dc = (param_1 / param_3) * param_3;
  DAT_100205d8 = _malloc(DAT_100205dc + param_3);
  DAT_100205cc = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,1,1,L"SG_Client_ReadSemapho");
  uVar1 = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_10005650,this,0,(uint *)&pvStack_4);
  *(uintptr_t *)((int)this + 8) = uVar1;
  return 0;
}



/**************************************************/

/* Function: FUN_10005900 @ 10005900 */

undefined4 __fastcall FUN_10005900(int *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x10))();
    if (DAT_100205d0 == 0) {
      DAT_100205d0 = 2;
    }
    (**(code **)(*param_1 + 0x14))();
    DVar2 = WaitForSingleObject((HANDLE)param_1[2],5000);
    if (DVar2 == 0x102) {
      DVar2 = WaitForSingleObject((HANDLE)param_1[2],30000);
      if (DVar2 == 0x102) {
        __endthreadex(DAT_100205d0);
      }
    }
    (**(code **)(*param_1 + 0x10))();
    CloseHandle((HANDLE)param_1[2]);
    pcVar1 = *(code **)(*param_1 + 0x14);
    param_1[2] = 0;
    (*pcVar1)();
    CloseHandle(DAT_100205cc);
    DAT_100205cc = (HANDLE)0x0;
    _free(DAT_100205d8);
    DAT_100205d8 = (void *)0x0;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100059c0 @ 100059c0 */

int __thiscall FUN_100059c0(void *this,void *param_1,size_t param_2)

{
  int iVar1;
  size_t _Size;
  
  if (*(int *)((int)this + 8) != 0) {
    (**(code **)(*(int *)this + 0x10))();
    if (DAT_100205d0 == 0) {
      while (DAT_100205c4 < (int)param_2) {
        (**(code **)(*(int *)this + 0x14))();
        Sleep(DAT_100205e8);
        (**(code **)(*(int *)this + 0x10))();
        if (DAT_100205d0 != 0) {
          (**(code **)(*(int *)this + 0x14))();
          return DAT_100205d0;
        }
      }
      if (DAT_100205d0 == 0) {
        iVar1 = DAT_100205e4 % DAT_100205dc;
        _Size = DAT_100205dc - iVar1;
        if ((int)param_2 < (int)_Size) {
          (**(code **)(*(int *)this + 0x14))();
          _memcpy(param_1,(void *)((int)DAT_100205d8 + iVar1),param_2);
        }
        else {
          (**(code **)(*(int *)this + 0x14))();
          _memcpy(param_1,(void *)((int)DAT_100205d8 + iVar1),_Size);
          _memcpy((void *)(_Size + (int)param_1),DAT_100205d8,param_2 - _Size);
        }
        (**(code **)(*(int *)this + 0x10))();
        DAT_100205e4 = DAT_100205e4 + param_2;
        DAT_100205c4 = DAT_100205c4 - param_2;
      }
    }
    (**(code **)(*(int *)this + 0x14))();
  }
  return DAT_100205d0;
}



/**************************************************/

/* Function: FUN_10005ad0 @ 10005ad0 */

undefined4 * __thiscall FUN_10005ad0(void *this,byte param_1)

{
  FUN_10005590(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10005af0 @ 10005af0 */

int FUN_10005af0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  char *lpProcName;
  int *piVar3;
  int local_4;
  
  if (DAT_100205ec == 1) {
    return DAT_100205f0;
  }
  lpProcName = "IsWow64Process";
  local_4 = 0;
  hModule = GetModuleHandleW(L"kernel32");
  pFVar1 = GetProcAddress(hModule,lpProcName);
  if (pFVar1 != (FARPROC)0x0) {
    piVar3 = &local_4;
    pvVar2 = GetCurrentProcess();
    DAT_100205f0 = (*pFVar1)(pvVar2,piVar3);
    if (DAT_100205f0 == 0) {
      DAT_100205ec = 1;
      return 0;
    }
  }
  DAT_100205ec = 1;
  DAT_100205f0 = local_4;
  return local_4;
}



/**************************************************/

/* Function: FUN_10005b70 @ 10005b70 */

undefined4 FUN_10005b70(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int unaff_EBX;
  short *unaff_ESI;
  
  sVar2 = *unaff_ESI;
  iVar3 = 0;
  if (sVar2 != 0) {
    iVar1 = 0;
    do {
      if (*(short *)(iVar1 + unaff_EBX) != sVar2) break;
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 2;
      sVar2 = unaff_ESI[iVar3];
    } while (sVar2 != 0);
  }
  if ((unaff_ESI[iVar3] == 0) && (iVar3 = _iswalnum(*(wint_t *)(unaff_EBX + iVar3 * 2)), iVar3 == 0)
     ) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10005bc0 @ 10005bc0 */

undefined4 * __fastcall FUN_10005bc0(undefined4 *param_1)

{
  BOOL BVar1;
  
  FUN_100054a0(param_1);
  *param_1 = SG_StiClient::vftable;
  BVar1 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x230),4000);
  param_1[0x236] = BVar1;
  BVar1 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x237),4000);
  param_1[0x23d] = BVar1;
  param_1[0x1ae] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1af] = 0;
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  param_1[0x23e] = 0;
  return param_1;
}



/**************************************************/

/* Function: FUN_10005c30 @ 10005c30 */

undefined4 __thiscall FUN_10005c30(void *this,LPWSTR param_1)

{
  lstrcpyW(param_1,(LPCWSTR)((int)this + 0x6c0));
  return 1;
}



/**************************************************/

/* Function: FUN_10005c50 @ 10005c50 */

undefined4 __thiscall FUN_10005c50(void *this,int param_1)

{
  int *piVar1;
  HMODULE hLibModule;
  DWORD DVar2;
  int iVar3;
  DWORD *pDVar4;
  
  ResetEvent(*(HANDLE *)((int)this + 0x6a0));
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    pDVar4 = (DWORD *)(iVar3 * 0x10 + 8 + (int)this);
    do {
      DVar2 = GetCurrentThreadId();
      if (*pDVar4 == DVar2) {
        if (-1 < iVar3) {
          iVar3 = iVar3 * 0x10;
          piVar1 = *(int **)(iVar3 + 0x10 + (int)this);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)((int)this + iVar3 + 0x10) = 0;
          }
          piVar1 = *(int **)((int)this + iVar3 + 0xc);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)((int)this + iVar3 + 0xc) = 0;
          }
          hLibModule = *(HMODULE *)((int)this + iVar3 + 0x14);
          if (hLibModule != (HMODULE)0x0) {
            FreeLibrary(hLibModule);
            *(undefined4 *)((int)this + iVar3 + 0x14) = 0;
          }
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
        }
        break;
      }
      iVar3 = iVar3 + -1;
      pDVar4 = pDVar4 + -4;
    } while (-1 < iVar3);
  }
  SetEvent(*(HANDLE *)((int)this + 0x6a0));
  if ((param_1 != 0) && (*(HANDLE *)((int)this + 0x6a0) != (HANDLE)0x0)) {
    CloseHandle(*(HANDLE *)((int)this + 0x6a0));
    *(undefined4 *)((int)this + 0x6a0) = 0;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10005d10 @ 10005d10 */

int __fastcall FUN_10005d10(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if (*param_1 == 0) {
    return param_1[4];
  }
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    pDVar3 = (DWORD *)(param_1 + iVar2 * 4 + 2);
    do {
      DVar1 = GetCurrentThreadId();
      if (*pDVar3 == DVar1) {
        return param_1[(iVar2 + 1) * 4];
      }
      iVar2 = iVar2 + -1;
      pDVar3 = pDVar3 + -4;
    } while (-1 < iVar2);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10005d60 @ 10005d60 */

undefined4 * __thiscall FUN_10005d60(void *this,byte param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8dc));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8c0));
  FUN_10005590(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10005da0 @ 10005da0 */

bool __fastcall FUN_10005da0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10005af0();
  if (iVar1 != 0) {
    iVar1 = FUN_10005d10((int *)(param_1 + 0xc));
    return iVar1 != 0;
  }
  return *(int *)(param_1 + 0x6b4) != 0;
}



/**************************************************/

/* Function: FUN_10005dd0 @ 10005dd0 */

undefined4 __fastcall FUN_10005dd0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 4) != '\0') {
    *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + 1;
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x8c0);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x8f8) == 0) {
    iVar3 = 0;
    while( true ) {
      iVar1 = FUN_10005af0();
      if (iVar1 == 0) {
        piVar2 = *(int **)(param_1 + 0x6b4);
      }
      else {
        piVar2 = (int *)FUN_10005d10((int *)(param_1 + 0xc));
      }
      iVar1 = (**(code **)(*piVar2 + 0x28))(piVar2,2000);
      if (-1 < iVar1) break;
      iVar3 = iVar3 + 1;
      if (4 < iVar3) {
        LeaveCriticalSection(lpCriticalSection);
        return 0x18;
      }
    }
    *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + 1;
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



/**************************************************/

/* Function: FUN_10005e80 @ 10005e80 */

undefined4 __fastcall FUN_10005e80(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 4) == '\0') {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x8c0);
    EnterCriticalSection(lpCriticalSection);
    iVar3 = *(int *)(param_1 + 0x8f8);
    if (iVar3 < 1) {
      LeaveCriticalSection(lpCriticalSection);
      return 4;
    }
    if (1 < iVar3) {
      *(int *)(param_1 + 0x8f8) = iVar3 + -1;
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    iVar3 = 0;
    while( true ) {
      iVar1 = FUN_10005af0();
      if (iVar1 == 0) {
        piVar2 = *(int **)(param_1 + 0x6b4);
      }
      else {
        piVar2 = (int *)FUN_10005d10((int *)(param_1 + 0xc));
      }
      iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2);
      if (-1 < iVar1) break;
      iVar3 = iVar3 + 1;
      if (4 < iVar3) {
        LeaveCriticalSection(lpCriticalSection);
        return 0x19;
      }
    }
    *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + -1;
    LeaveCriticalSection(lpCriticalSection);
  }
  else if (0 < *(int *)(param_1 + 0x8f8)) {
    *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + -1;
    return 0;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10005f50 @ 10005f50 */

void __thiscall
FUN_10005f50(void *this,int *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 uStack_14;
  byte bStack_13;
  uint local_10;
  LPCRITICAL_SECTION local_c;
  undefined1 auStack_8 [8];
  
  local_10 = 1;
  iVar1 = FUN_10005af0();
  if ((iVar1 != 0) && (iVar1 = FUN_10005d10((int *)((int)this + 0xc)), iVar1 == 0)) {
    param_1[1] = 1;
    *param_1 = 0;
    return;
  }
  if (*(char *)((int)this + 4) == '\0') {
    local_c = (LPCRITICAL_SECTION)((int)this + 0x8dc);
    EnterCriticalSection(local_c);
    iVar1 = (**(code **)(*(int *)this + 0x10))();
    while (iVar1 == 0) {
      if (param_3 == 0) {
        param_3 = -1;
      }
      iVar1 = FUN_10005af0();
      if (iVar1 == 0) {
        piVar2 = *(int **)((int)this + 0x6b4);
      }
      else {
        piVar2 = (int *)FUN_10005d10((int *)((int)this + 0xc));
      }
      iVar3 = (**(code **)(*piVar2 + 0x20))
                        (piVar2,param_2,param_3,param_4,param_5,param_6,&local_10);
      iVar1 = (**(code **)(*(int *)this + 0x14))();
      if (iVar1 != 0) {
        if (iVar3 != -0x7fffbffb) {
          iVar1 = 0x1a;
        }
        break;
      }
      if (local_10 != 0) {
        local_10 = 1;
        break;
      }
      piVar2 = (int *)(**(code **)(*(int *)this + 0x60))(auStack_8,&uStack_14);
      if ((*piVar2 != 0) || (piVar2[1] != 1)) break;
      if (bStack_13 != 0x96) {
        local_10 = 1;
        iVar1 = (uint)bStack_13 * 0x1000 + 2;
        break;
      }
      Sleep(1000);
      iVar1 = (**(code **)(*(int *)this + 0x10))();
    }
    LeaveCriticalSection(local_c);
  }
  else {
    iVar1 = 0;
    local_10 = 1;
  }
  *param_1 = iVar1;
  param_1[1] = ~-(uint)(iVar1 != 0) & local_10;
  return;
}



/**************************************************/

/* Function: FUN_100060c0 @ 100060c0 */

undefined4 * __thiscall FUN_100060c0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x2;
  puVar3 = (undefined4 *)FUN_10005f50(this,local_8,0x102e,(int)&param_1,4,param_2,2);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10006110 @ 10006110 */

undefined4 * __thiscall
FUN_10006110(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  param_1 = param_3;
  *puVar2 = 0;
  puVar2[1] = 1;
  puVar3 = (undefined4 *)FUN_10005f50(this,local_8,0x102f,(int)&param_1,4,param_2,param_3);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10006160 @ 10006160 */

undefined4 * __thiscall FUN_10006160(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x8;
  puVar3 = (undefined4 *)FUN_10005f50(this,local_8,0x1036,(int)&param_1,4,param_2,8);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_100061b0 @ 100061b0 */

undefined4 * __thiscall FUN_100061b0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x1;
  *puVar2 = 0;
  puVar3 = (undefined4 *)FUN_10005f50(this,local_8,0x1030,param_2,1,&param_1,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10006200 @ 10006200 */

undefined4 * __thiscall FUN_10006200(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x1;
  *puVar2 = 0;
  puVar3 = (undefined4 *)FUN_10005f50(this,local_8,0x1037,param_2,1,&param_1,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10006250 @ 10006250 */

int * __thiscall FUN_10006250(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 0x2c;
  FUN_10005f50(this,param_1,0x100b,param_2,0x2c,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006280 @ 10006280 */

int * __thiscall
FUN_10006280(void *this,int *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  undefined1 uStack00000009;
  undefined2 uStack0000000a;
  
  uStack00000009 = param_3;
  uStack0000000a = param_4;
  _param_3 = 4;
  FUN_10005f50(this,param_1,0x100d,(int)&param_2,4,&param_3,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_100062d0 @ 100062d0 */

int * __thiscall FUN_100062d0(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 8;
  FUN_10005f50(this,param_1,0x102b,param_2,8,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006300 @ 10006300 */

int * __thiscall
FUN_10006300(void *this,int *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
  local_4 = 4;
  FUN_10005f50(this,param_1,0x100f,(int)&local_4,4,param_3,param_4);
  *param_2 = 0;
  return param_1;
}



/**************************************************/

/* Function: FUN_10006340 @ 10006340 */

int * __thiscall FUN_10006340(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 8;
  FUN_10005f50(this,param_1,0x102c,param_2,8,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006370 @ 10006370 */

int * __thiscall FUN_10006370(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0xc;
  FUN_10005f50(this,param_1,0x1011,(int)&local_4,4,param_2,0xc);
  return param_1;
}



/**************************************************/

/* Function: FUN_100063a0 @ 100063a0 */

int * __thiscall FUN_100063a0(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_10005f50(this,param_1,0x1012,(int)&local_4,2,param_2,2);
  return param_1;
}



/**************************************************/

/* Function: FUN_100063d0 @ 100063d0 */

int * __thiscall FUN_100063d0(void *this,int *param_1,undefined4 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)this & 0xffffff;
  FUN_10005f50(this,param_1,0x1013,(int)&uStack_4 + 3,1,param_2,1);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006400 @ 10006400 */

int * __thiscall FUN_10006400(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 0x2c;
  FUN_10005f50(this,param_1,0x1016,param_2,0x2c,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006430 @ 10006430 */

int * __thiscall FUN_10006430(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0x2c;
  FUN_10005f50(this,param_1,0x1017,(int)&local_4,4,param_2,0x2c);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006460 @ 10006460 */

undefined4 * __thiscall
FUN_10006460(void *this,undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4
            ,undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  int local_8 [2];
  
  uStack0000000a = param_4;
  uStack00000009 = param_3;
  uStack0000000b = param_5;
  *param_1 = 0;
  param_1[1] = 1;
  _param_3 = 4;
  puVar2 = (undefined4 *)FUN_10005f50(this,local_8,0x1018,(int)&param_2,4,&param_3,4);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



/**************************************************/

/* Function: FUN_100064d0 @ 100064d0 */

int * __thiscall FUN_100064d0(void *this,int *param_1,int param_2)

{
  undefined4 local_4;
  
  local_4 = 0x18;
  FUN_10005f50(this,param_1,0x101a,param_2,0x18,&local_4,4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006500 @ 10006500 */

int * __thiscall FUN_10006500(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10005f50(this,param_1,0x101b,(int)&param_2,1,param_3,0x10);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006530 @ 10006530 */

undefined4 * __thiscall
FUN_10006530(void *this,undefined4 *param_1,int param_2,undefined1 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_28 [2];
  int local_20 [2];
  int local_18 [2];
  int local_10 [2];
  int local_8 [2];
  
  puVar1 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = param_4;
  switch(param_3) {
  case 0:
    piVar3 = local_28;
    goto LAB_100065be;
  case 1:
    uVar4 = 0x1032;
    piVar3 = local_20;
    break;
  case 2:
    uVar4 = 0x1033;
    piVar3 = local_18;
    break;
  case 3:
    uVar4 = 0x1034;
    piVar3 = local_10;
    break;
  default:
    piVar3 = local_8;
LAB_100065be:
    uVar4 = 0x1031;
  }
  puVar2 = (undefined4 *)FUN_10005f50(this,piVar3,uVar4,param_2,param_4,&param_1,4);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  return puVar1;
}



/**************************************************/

/* Function: FUN_10006600 @ 10006600 */

undefined4 * __thiscall
FUN_10006600(void *this,undefined4 *param_1,int param_2,undefined1 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_28 [2];
  int local_20 [2];
  int local_18 [2];
  int local_10 [2];
  int local_8 [2];
  
  puVar1 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = param_4;
  switch(param_3) {
  case 0:
    piVar3 = local_28;
    goto LAB_1000668e;
  case 1:
    uVar4 = 0x1027;
    piVar3 = local_20;
    break;
  case 2:
    uVar4 = 0x1028;
    piVar3 = local_18;
    break;
  case 3:
    uVar4 = 0x1029;
    piVar3 = local_10;
    break;
  default:
    piVar3 = local_8;
LAB_1000668e:
    uVar4 = 0x101f;
  }
  puVar2 = (undefined4 *)FUN_10005f50(this,piVar3,uVar4,param_2,param_4,&param_1,4);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  return puVar1;
}



/**************************************************/

/* Function: FUN_100066d0 @ 100066d0 */

int * __thiscall
FUN_100066d0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10005f50(this,param_1,0x1020,(int)&param_4,4,param_3,param_4);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006700 @ 10006700 */

undefined4 * __thiscall FUN_10006700(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x4;
  puVar3 = (undefined4 *)FUN_10005f50(this,local_8,0x1006,(int)&param_1,4,param_2,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_10006750 @ 10006750 */

undefined4 * __thiscall FUN_10006750(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x1;
  *puVar2 = 0;
  puVar3 = (undefined4 *)FUN_10005f50(this,local_8,0x1038,param_2,1,&param_1,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_100067a0 @ 100067a0 */

undefined4 * __thiscall FUN_100067a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8 [2];
  
  puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 1;
  param_1 = (undefined4 *)0x4;
  puVar3 = (undefined4 *)FUN_10005f50(this,local_8,0x1039,(int)&param_1,4,&param_1,4);
  uVar1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return puVar2;
}



/**************************************************/

/* Function: FUN_100067f0 @ 100067f0 */

int * __thiscall FUN_100067f0(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 0x10;
  FUN_10005f50(this,param_1,0x103c,(int)&local_4,0x10,param_2,0x10);
  return param_1;
}



/**************************************************/

/* Function: FUN_10006820 @ 10006820 */

undefined4 __fastcall FUN_10006820(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10005af0();
  if (iVar1 != 0) {
    uVar2 = FUN_10005c50((void *)(param_1 + 0xc),0);
    return uVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10006840 @ 10006840 */

undefined4 __thiscall FUN_10006840(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *_Dst;
  int iVar1;
  HANDLE pvVar2;
  
  iVar1 = FUN_10005af0();
  *(int *)this = iVar1;
  *(undefined4 *)((int)this + 4) = 0;
  _memset((void *)((int)this + 8),0,0x80);
  _Dst = (wchar_t *)((int)this + 0x88);
  if (param_1 == (wchar_t *)0x0) {
    *_Dst = L'\0';
  }
  else {
    _wcscpy_s(_Dst,0x104,param_1);
  }
  if (param_2 == (wchar_t *)0x0) {
    *(undefined2 *)((int)this + 0x290) = 0;
  }
  else {
    _wcscpy_s((wchar_t *)((int)this + 0x290),0x104,param_2);
  }
  if (param_3 == (wchar_t *)0x0) {
    *(undefined2 *)((int)this + 0x498) = 0;
  }
  else {
    _wcscpy_s((wchar_t *)((int)this + 0x498),0x104,param_3);
  }
  if (*_Dst != L'\0') {
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,1,L"ScanGear_STI_Terminate_Process");
    *(HANDLE *)((int)this + 0x6a0) = pvVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10006900 @ 10006900 */

undefined4 __fastcall FUN_10006900(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_10005af0();
  if (iVar2 == 0) {
    if (*(HANDLE *)(param_1 + 0x6bc) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x6bc));
      *(undefined4 *)(param_1 + 0x6bc) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x6b4);
    if (piVar1 != (int *)0x0) {
      *(undefined2 *)(param_1 + 0x6c0) = 0;
      if (*(char *)(param_1 + 4) == '\0') {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(param_1 + 0x6b4) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x6b0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x6b0) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x6b8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x6b8));
      *(undefined4 *)(param_1 + 0x6b8) = 0;
    }
  }
  else {
    FUN_10005c50((void *)(param_1 + 0xc),1);
    FUN_10006840((void *)(param_1 + 0xc),(wchar_t *)&PTR_10019354,(wchar_t *)&PTR_10019354,
                 (wchar_t *)0x0);
    if (*(HANDLE *)(param_1 + 0x6bc) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x6bc));
      *(undefined4 *)(param_1 + 0x6bc) = 0;
      return 1;
    }
  }
  return 1;
}



/**************************************************/

/* Function: FUN_100069c0 @ 100069c0 */

void __fastcall FUN_100069c0(void *param_1)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  void *pvVar7;
  uint *puVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  DWORD DVar14;
  undefined4 *puVar15;
  uint uStack_254;
  uint local_240;
  uint uStack_23c;
  wchar_t *pwStack_238;
  void *local_234;
  wchar_t *pwStack_230;
  char local_229;
  int local_228;
  HLOCAL local_224;
  undefined1 *local_220;
  void *local_21c;
  undefined1 *puStack_218;
  undefined4 local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_214 = 0xffffffff;
  puStack_218 = &LAB_10018590;
  local_21c = ExceptionList;
  uStack_254 = DAT_1001ef38 ^ (uint)local_210;
  local_220 = (undefined1 *)&uStack_254;
  ExceptionList = &local_21c;
  uVar4 = *(uint *)((int)param_1 + 4);
  local_228 = 0;
  if (uVar4 == 8) {
    local_228 = 0x11;
  }
  local_234 = param_1;
  local_8 = uStack_254;
  if (7 < uVar4) {
    local_228 = 0x11;
    local_220 = (undefined1 *)&uStack_254;
    FUN_10005c50(param_1,0);
    goto LAB_10006e59;
  }
  puVar8 = &uStack_254;
  if (local_228 == 0) {
    GetSystemDirectoryW(local_210,0x104);
    _wcscat_s(local_210,0x104,L"\\STI.DLL");
    hModule = FUN_100052a0(local_210);
    *(HMODULE *)((int)param_1 + uVar4 * 0x10 + 0x14) = hModule;
    if (hModule == (HMODULE)0x0) goto LAB_10006e59;
    pFVar9 = GetProcAddress(hModule,"StiCreateInstance");
    puVar15 = (undefined4 *)((int)param_1 + uVar4 * 0x10 + 0xc);
    local_224 = (HLOCAL)0x0;
    local_229 = '\0';
    iVar10 = (*pFVar9)(DAT_1002057c,0x1000002,puVar15,0);
    if (iVar10 < 0) {
      local_228 = 0x1035;
    }
    else {
      piVar5 = (int *)*puVar15;
      iVar10 = (**(code **)(*piVar5 + 0x10))(piVar5,0,0,&local_240,&local_224);
      if (iVar10 < 0) {
        local_228 = 0x2035;
      }
    }
    local_214 = 0;
    uStack_23c = 0;
FUN_10006ad1:
    while( true ) {
      if (((local_228 != 0) || (local_240 <= uStack_23c)) ||
         (iVar10 = uStack_23c * 0x124, *(int *)(iVar10 + (int)local_224) != 0x124))
      goto LAB_10006d99;
      if (*(short *)(iVar10 + 6 + (int)local_224) == 1) break;
LAB_10006c20:
      uStack_23c = uStack_23c + 1;
    }
    psVar13 = *(short **)(iVar10 + 0x114 + (int)local_224);
    psVar1 = psVar13 + 1;
    do {
      sVar3 = *psVar13;
      psVar13 = psVar13 + 1;
    } while (sVar3 != 0);
    iVar11 = (int)psVar13 - (int)psVar1 >> 1;
    if (iVar11 == 0) goto LAB_10006c20;
    uVar2 = iVar11 + 1;
    lVar6 = (ulonglong)uVar2 * 2;
    pwStack_230 = (wchar_t *)
                  thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
    _wcscpy_s(pwStack_230,uVar2,*(wchar_t **)(iVar10 + 0x114 + (int)local_224));
    iVar11 = FUN_10005b70();
    if (iVar11 == 0) {
LAB_10006ba5:
      _free(pwStack_230);
      uStack_23c = uStack_23c + 1;
      goto FUN_10006ad1;
    }
    pwStack_238 = (wchar_t *)((int)local_234 + 0x498);
    if (*pwStack_238 == L'\0') {
      psVar13 = *(short **)(iVar10 + 0x118 + (int)local_224);
      psVar1 = psVar13 + 1;
      do {
        sVar3 = *psVar13;
        psVar13 = psVar13 + 1;
      } while (sVar3 != 0);
      iVar11 = (int)psVar13 - (int)psVar1 >> 1;
      if (iVar11 != 0) {
        uVar2 = iVar11 + 1;
        lVar6 = (ulonglong)uVar2 * 2;
        local_214 = CONCAT31(local_214._1_3_,3);
        pwVar12 = (wchar_t *)
                  thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
        local_214 = 0;
        _wcscpy_s(pwVar12,uVar2,*(wchar_t **)(iVar10 + 0x118 + (int)local_224));
        iVar11 = FUN_10005b70();
        _free(pwVar12);
        if (iVar11 == 0) goto LAB_10006cbb;
      }
LAB_10006c14:
      _free(pwStack_230);
      goto LAB_10006c20;
    }
    psVar13 = *(short **)(iVar10 + 0x118 + (int)local_224);
    psVar1 = psVar13 + 1;
    do {
      sVar3 = *psVar13;
      psVar13 = psVar13 + 1;
    } while (sVar3 != 0);
    iVar11 = (int)psVar13 - (int)psVar1 >> 1;
    if (iVar11 == 0) goto LAB_10006ba5;
    uVar2 = iVar11 + 1;
    lVar6 = (ulonglong)uVar2 * 2;
    local_214 = CONCAT31(local_214._1_3_,1);
    pwVar12 = (wchar_t *)
              thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
    local_214 = 0;
    _wcscpy_s(pwVar12,uVar2,*(wchar_t **)(iVar10 + 0x118 + (int)local_224));
    iVar11 = FUN_10005b70();
    _free(pwVar12);
    if (iVar11 == 0) goto LAB_10006c14;
LAB_10006cbb:
    psVar13 = (short *)(iVar10 + 8 + (int)local_224);
    psVar1 = psVar13 + 1;
    do {
      sVar3 = *psVar13;
      psVar13 = psVar13 + 1;
    } while (sVar3 != 0);
    iVar11 = (int)psVar13 - (int)psVar1 >> 1;
    if (iVar11 == 0) {
      _free(pwStack_230);
      uStack_23c = uStack_23c + 1;
      goto FUN_10006ad1;
    }
    uVar2 = iVar11 + 1;
    lVar6 = (ulonglong)uVar2 * 2;
    local_214 = CONCAT31(local_214._1_3_,5);
    pwStack_238 = (wchar_t *)
                  thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
    local_214 = 0;
    _wcscpy_s(pwStack_238,uVar2,(wchar_t *)(iVar10 + 8 + (int)local_224));
    pvVar7 = local_234;
    piVar5 = *(int **)((int)local_234 + uVar4 * 0x10 + 0xc);
    puVar15 = (undefined4 *)((int)local_234 + uVar4 * 0x10 + 0x10);
    iVar10 = (**(code **)(*piVar5 + 0x18))(piVar5,iVar10 + 8 + (int)local_224,3,puVar15,0);
    if (iVar10 < 0) {
LAB_10006de0:
      _free(pwStack_238);
      goto LAB_10006ba5;
    }
    iVar10 = (**(code **)(*(int *)*puVar15 + 0x28))((int *)*puVar15,2000);
    if (iVar10 < 0) {
      (**(code **)(*(int *)*puVar15 + 0x2c))((int *)*puVar15);
      (**(code **)(*(int *)*puVar15 + 8))((int *)*puVar15);
      *puVar15 = 0;
      goto LAB_10006de0;
    }
    (**(code **)(*(int *)*puVar15 + 0x2c))((int *)*puVar15);
    DVar14 = GetCurrentThreadId();
    *(DWORD *)((int)pvVar7 + uVar4 * 0x10 + 8) = DVar14;
    local_229 = '\x01';
    _free(pwStack_238);
    _free(pwStack_230);
LAB_10006d99:
    param_1 = local_234;
    local_214 = 0xffffffff;
    if (local_228 == 0) {
      if (local_229 == '\0') {
        local_228 = 0x3035;
        goto LAB_10006db7;
      }
    }
    else {
LAB_10006db7:
      FUN_10005c50(local_234,0);
    }
    if (local_224 != (HLOCAL)0x0) {
      LocalFree(local_224);
      local_224 = (HLOCAL)0x0;
    }
    puVar8 = (uint *)local_220;
    if (local_228 == 0) {
      *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
      goto LAB_10006e59;
    }
  }
  local_220 = (undefined1 *)puVar8;
  FUN_10005c50(param_1,0);
LAB_10006e59:
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}



/**************************************************/

/* Function: FUN_10006ad1 @ 10006ad1 */

void FUN_10006ad1(void)

{
  uint uVar1;
  undefined4 *puVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  wchar_t *pwVar6;
  short *psVar7;
  short *psVar8;
  wchar_t *pwVar9;
  DWORD DVar10;
  uint unaff_EBP;
  uint unaff_EDI;
  int iVar11;
  void *pvVar12;
  undefined4 uStack0000000c;
  
code_r0x10006ad1:
  while( true ) {
    iVar5 = *(int *)(unaff_EBP - 0x18);
    *(uint *)(unaff_EBP - 0x2c) = unaff_EDI;
    if ((iVar5 != 0) || (*(uint *)(unaff_EBP - 0x30) <= unaff_EDI)) goto LAB_10006d99;
    iVar5 = *(int *)(unaff_EBP - 0x14);
    iVar11 = unaff_EDI * 0x124;
    if (*(int *)(iVar11 + iVar5) != 0x124) goto LAB_10006d99;
    if (*(short *)(iVar11 + 6 + iVar5) == 1) break;
LAB_10006c20:
    unaff_EDI = *(int *)(unaff_EBP - 0x2c) + 1;
  }
  psVar8 = *(short **)(iVar11 + 0x114 + iVar5);
  psVar7 = psVar8 + 1;
  do {
    sVar3 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar3 != 0);
  iVar5 = (int)psVar8 - (int)psVar7 >> 1;
  if (iVar5 == 0) goto LAB_10006c20;
  uVar1 = iVar5 + 1;
  lVar4 = (ulonglong)uVar1 * 2;
  pwVar6 = (wchar_t *)
           thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
  pwVar9 = *(wchar_t **)(iVar11 + 0x114 + *(int *)(unaff_EBP - 0x14));
  *(wchar_t **)(unaff_EBP - 0x20) = pwVar6;
  _wcscpy_s(pwVar6,uVar1,pwVar9);
  iVar5 = FUN_10005b70();
  if (iVar5 == 0) {
LAB_10006ba5:
    _free(*(void **)(unaff_EBP - 0x20));
    unaff_EDI = *(int *)(unaff_EBP - 0x2c) + 1;
    goto code_r0x10006ad1;
  }
  psVar7 = (short *)(*(int *)(unaff_EBP - 0x24) + 0x498);
  sVar3 = *psVar7;
  *(short **)(unaff_EBP - 0x28) = psVar7;
  if (sVar3 == 0) {
    psVar8 = *(short **)(iVar11 + 0x118 + *(int *)(unaff_EBP - 0x14));
    psVar7 = psVar8 + 1;
    do {
      sVar3 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar3 != 0);
    iVar5 = (int)psVar8 - (int)psVar7 >> 1;
    if (iVar5 != 0) {
      uVar1 = iVar5 + 1;
      lVar4 = (ulonglong)uVar1 * 2;
      *(undefined1 *)(unaff_EBP - 4) = 3;
      pwVar6 = (wchar_t *)
               thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
      pwVar9 = *(wchar_t **)(iVar11 + 0x118 + *(int *)(unaff_EBP - 0x14));
      *(undefined4 *)(unaff_EBP - 4) = 0;
      _wcscpy_s(pwVar6,uVar1,pwVar9);
      iVar5 = FUN_10005b70();
      _free(pwVar6);
      if (iVar5 == 0) goto LAB_10006cbb;
    }
LAB_10006c14:
    _free(*(void **)(unaff_EBP - 0x20));
    goto LAB_10006c20;
  }
  psVar8 = *(short **)(iVar11 + 0x118 + *(int *)(unaff_EBP - 0x14));
  psVar7 = psVar8 + 1;
  do {
    sVar3 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar3 != 0);
  iVar5 = (int)psVar8 - (int)psVar7 >> 1;
  if (iVar5 == 0) goto LAB_10006ba5;
  uVar1 = iVar5 + 1;
  lVar4 = (ulonglong)uVar1 * 2;
  *(undefined1 *)(unaff_EBP - 4) = 1;
  pwVar6 = (wchar_t *)
           thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
  pwVar9 = *(wchar_t **)(iVar11 + 0x118 + *(int *)(unaff_EBP - 0x14));
  *(undefined4 *)(unaff_EBP - 4) = 0;
  _wcscpy_s(pwVar6,uVar1,pwVar9);
  iVar5 = FUN_10005b70();
  _free(pwVar6);
  if (iVar5 == 0) goto LAB_10006c14;
LAB_10006cbb:
  psVar8 = (short *)(iVar11 + 8 + *(int *)(unaff_EBP - 0x14));
  psVar7 = psVar8 + 1;
  do {
    sVar3 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar3 != 0);
  iVar5 = (int)psVar8 - (int)psVar7 >> 1;
  if (iVar5 == 0) {
    _free(*(void **)(unaff_EBP - 0x20));
    unaff_EDI = *(int *)(unaff_EBP - 0x2c) + 1;
    goto code_r0x10006ad1;
  }
  uVar1 = iVar5 + 1;
  lVar4 = (ulonglong)uVar1 * 2;
  *(undefined1 *)(unaff_EBP - 4) = 5;
  pwVar9 = (wchar_t *)
           thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
  iVar5 = *(int *)(unaff_EBP - 0x14);
  *(wchar_t **)(unaff_EBP - 0x28) = pwVar9;
  *(undefined4 *)(unaff_EBP - 4) = 0;
  _wcscpy_s(pwVar9,uVar1,(wchar_t *)(iVar11 + 8 + iVar5));
  iVar5 = *(int *)(unaff_EBP - 0x34) * 0x10 + *(int *)(unaff_EBP - 0x24);
  puVar2 = (undefined4 *)(iVar5 + 0x10);
  iVar11 = (**(code **)(**(int **)(iVar5 + 0xc) + 0x18))
                     (*(int **)(iVar5 + 0xc),iVar11 + 8 + *(int *)(unaff_EBP - 0x14),3,puVar2,0);
  if (iVar11 < 0) {
LAB_10006de0:
    _free(*(void **)(unaff_EBP - 0x28));
    goto LAB_10006ba5;
  }
  iVar11 = (**(code **)(*(int *)*puVar2 + 0x28))((int *)*puVar2,2000);
  if (iVar11 < 0) {
    (**(code **)(*(int *)*puVar2 + 0x2c))((int *)*puVar2);
    (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
    *puVar2 = 0;
    goto LAB_10006de0;
  }
  (**(code **)(*(int *)*puVar2 + 0x2c))((int *)*puVar2);
  DVar10 = GetCurrentThreadId();
  pvVar12 = *(void **)(unaff_EBP - 0x28);
  *(DWORD *)(iVar5 + 8) = DVar10;
  *(undefined1 *)(unaff_EBP - 0x19) = 1;
  _free(pvVar12);
  _free(*(void **)(unaff_EBP - 0x20));
LAB_10006d99:
  iVar5 = *(int *)(unaff_EBP - 0x18);
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  if (iVar5 == 0) {
    if (*(char *)(unaff_EBP - 0x19) != '\0') {
      pvVar12 = *(void **)(unaff_EBP - 0x24);
      goto LAB_10006e32;
    }
    *(undefined4 *)(unaff_EBP - 0x18) = 0x3035;
  }
  pvVar12 = *(void **)(unaff_EBP - 0x24);
  FUN_10005c50(pvVar12,0);
LAB_10006e32:
  if (*(HLOCAL *)(unaff_EBP - 0x14) != (HLOCAL)0x0) {
    LocalFree(*(HLOCAL *)(unaff_EBP - 0x14));
    *(undefined4 *)(unaff_EBP - 0x14) = 0;
  }
  if (*(int *)(unaff_EBP - 0x18) == 0) {
    *(int *)((int)pvVar12 + 4) = *(int *)((int)pvVar12 + 4) + 1;
  }
  else {
    FUN_10005c50(pvVar12,0);
  }
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x10006e74;
  __security_check_cookie(*(uint *)(unaff_EBP + 0x208) ^ unaff_EBP);
  return;
}



/**************************************************/

/* Function: Catch@10006c2b @ 10006c2b */

void Catch_10006c2b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x20));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@10006df1 @ 10006df1 */

void Catch_10006df1(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x20));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@10006e06 @ 10006e06 */

void Catch_10006e06(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x20));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@10006e1b @ 10006e1b */

undefined4 Catch_10006e1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x10006db7;
}



/**************************************************/

/* Function: FUN_10006e80 @ 10006e80 */

void __thiscall FUN_10006e80(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  HANDLE pvVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  short *psVar12;
  uint uStack_258;
  uint local_244;
  wchar_t *pwStack_240;
  uint uStack_23c;
  wchar_t *local_238;
  int *local_234;
  int local_230;
  wchar_t *pwStack_22c;
  char local_225;
  HLOCAL local_224;
  undefined1 *local_220;
  void *local_21c;
  undefined1 *puStack_218;
  undefined4 local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_214 = 0xffffffff;
  puStack_218 = &LAB_100185c0;
  local_21c = ExceptionList;
  uStack_258 = DAT_1001ef38 ^ (uint)local_210;
  local_220 = (undefined1 *)&uStack_258;
  ExceptionList = &local_21c;
  local_238 = param_3;
  local_230 = 0;
  local_234 = this;
  local_8 = uStack_258;
  iVar7 = FUN_10005af0();
  if (iVar7 != 0) {
    pvVar8 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,1,1,L"StiInterface");
    *(HANDLE *)((int)this + 0x6bc) = pvVar8;
    FUN_10006840((void *)((int)this + 0xc),param_1,param_2,local_238);
    FUN_100069c0((void *)((int)this + 0xc));
    goto LAB_1000735b;
  }
  GetSystemDirectoryW(local_210,0x104);
  _wcscat_s(local_210,0x104,L"\\STI.DLL");
  hModule = FUN_100052a0(local_210);
  *(HMODULE *)((int)this + 0x6b8) = hModule;
  if (hModule == (HMODULE)0x0) goto LAB_1000735b;
  pFVar9 = GetProcAddress(hModule,"StiCreateInstance");
  local_224 = (HLOCAL)0x0;
  local_225 = '\0';
  pvVar8 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,1,1,L"StiInterface");
  *(HANDLE *)((int)this + 0x6bc) = pvVar8;
  iVar7 = (*pFVar9)(DAT_1002057c,0x1000002,(undefined4 *)((int)this + 0x6b0),0);
  if (iVar7 < 0) {
    local_230 = 0x1035;
  }
  else {
    piVar4 = *(int **)((int)this + 0x6b0);
    iVar7 = (**(code **)(*piVar4 + 0x10))(piVar4,0,0,&local_244,&local_224);
    if (iVar7 < 0) {
      local_230 = 0x2035;
    }
  }
  local_214 = 0;
  uStack_23c = 0;
FUN_10006fdc:
  while( true ) {
    if (((local_230 != 0) || (local_244 <= uStack_23c)) ||
       (iVar7 = uStack_23c * 0x124, *(int *)(iVar7 + (int)local_224) != 0x124)) goto LAB_1000729b;
    if (*(short *)(iVar7 + 6 + (int)local_224) == 1) break;
LAB_1000711c:
    uStack_23c = uStack_23c + 1;
  }
  psVar12 = *(short **)(iVar7 + 0x114 + (int)local_224);
  psVar1 = psVar12 + 1;
  do {
    sVar3 = *psVar12;
    psVar12 = psVar12 + 1;
  } while (sVar3 != 0);
  iVar10 = (int)psVar12 - (int)psVar1 >> 1;
  if (iVar10 == 0) goto LAB_1000711c;
  uVar2 = iVar10 + 1;
  lVar5 = (ulonglong)uVar2 * 2;
  pwStack_22c = (wchar_t *)
                thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
  _wcscpy_s(pwStack_22c,uVar2,*(wchar_t **)(iVar7 + 0x114 + (int)local_224));
  iVar10 = FUN_10005b70();
  if (iVar10 == 0) {
LAB_100070a1:
    _free(pwStack_22c);
    uStack_23c = uStack_23c + 1;
    goto FUN_10006fdc;
  }
  if (local_238 == (wchar_t *)0x0) {
    psVar12 = *(short **)(iVar7 + 0x118 + (int)local_224);
    psVar1 = psVar12 + 1;
    do {
      sVar3 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar3 != 0);
    iVar10 = (int)psVar12 - (int)psVar1 >> 1;
    if (iVar10 != 0) {
      uVar2 = iVar10 + 1;
      lVar5 = (ulonglong)uVar2 * 2;
      local_214 = CONCAT31(local_214._1_3_,3);
      pwVar11 = (wchar_t *)
                thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
      local_214 = 0;
      _wcscpy_s(pwVar11,uVar2,*(wchar_t **)(iVar7 + 0x118 + (int)local_224));
      iVar10 = FUN_10005b70();
      _free(pwVar11);
      if (iVar10 == 0) goto LAB_100071bb;
    }
LAB_10007110:
    _free(pwStack_22c);
    goto LAB_1000711c;
  }
  psVar12 = *(short **)(iVar7 + 0x118 + (int)local_224);
  psVar1 = psVar12 + 1;
  do {
    sVar3 = *psVar12;
    psVar12 = psVar12 + 1;
  } while (sVar3 != 0);
  iVar10 = (int)psVar12 - (int)psVar1 >> 1;
  if (iVar10 == 0) goto LAB_100070a1;
  uVar2 = iVar10 + 1;
  lVar5 = (ulonglong)uVar2 * 2;
  local_214 = CONCAT31(local_214._1_3_,1);
  pwVar11 = (wchar_t *)
            thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
  local_214 = 0;
  _wcscpy_s(pwVar11,uVar2,*(wchar_t **)(iVar7 + 0x118 + (int)local_224));
  iVar10 = FUN_10005b70();
  _free(pwVar11);
  if (iVar10 == 0) goto LAB_10007110;
LAB_100071bb:
  psVar12 = (short *)(iVar7 + 8 + (int)local_224);
  psVar1 = psVar12 + 1;
  do {
    sVar3 = *psVar12;
    psVar12 = psVar12 + 1;
  } while (sVar3 != 0);
  iVar10 = (int)psVar12 - (int)psVar1 >> 1;
  if (iVar10 == 0) {
    _free(pwStack_22c);
    uStack_23c = uStack_23c + 1;
    goto FUN_10006fdc;
  }
  uVar2 = iVar10 + 1;
  lVar5 = (ulonglong)uVar2 * 2;
  local_214 = CONCAT31(local_214._1_3_,5);
  pwStack_240 = (wchar_t *)
                thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
  local_214 = 0;
  _wcscpy_s(pwStack_240,uVar2,(wchar_t *)(iVar7 + 8 + (int)local_224));
  piVar6 = local_234;
  piVar4 = local_234 + 0x1ad;
  iVar7 = (**(code **)(*(int *)local_234[0x1ac] + 0x18))
                    ((int *)local_234[0x1ac],iVar7 + 8 + (int)local_224,3,piVar4,0);
  if (iVar7 < 0) {
LAB_100072e5:
    _free(pwStack_240);
    goto LAB_100070a1;
  }
  iVar7 = (**(code **)(*(int *)*piVar4 + 0x28))((int *)*piVar4,2000);
  if (iVar7 < 0) {
    (**(code **)(*(int *)*piVar4 + 0x2c))((int *)*piVar4);
    (**(code **)(*(int *)*piVar4 + 8))((int *)*piVar4);
    *piVar4 = 0;
    goto LAB_100072e5;
  }
  (**(code **)(*(int *)*piVar4 + 0x2c))((int *)*piVar4);
  pwVar11 = pwStack_240;
  local_225 = '\x01';
  lstrcpyW((LPWSTR)(piVar6 + 0x1b0),pwStack_240);
  _free(pwVar11);
  _free(pwStack_22c);
LAB_1000729b:
  piVar4 = local_234;
  local_214 = 0xffffffff;
  if (local_230 == 0) {
    if (local_225 == '\0') {
      local_230 = 0x3035;
      goto LAB_100072ba;
    }
  }
  else {
LAB_100072ba:
    (**(code **)(*local_234 + 8))();
  }
  iVar7 = local_230;
  if (local_224 != (HLOCAL)0x0) {
    LocalFree(local_224);
    local_224 = (HLOCAL)0x0;
  }
  if (iVar7 != 0) {
    (**(code **)(*piVar4 + 8))();
  }
LAB_1000735b:
  ExceptionList = local_21c;
  __security_check_cookie(local_8 ^ (uint)local_210);
  return;
}



/**************************************************/

/* Function: FUN_10006fdc @ 10006fdc */

void FUN_10006fdc(void)

{
  short *psVar1;
  uint uVar2;
  undefined4 *puVar3;
  short sVar4;
  LPCWSTR lpString2;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  short *psVar8;
  wchar_t *pwVar9;
  uint unaff_EBP;
  int *piVar10;
  uint unaff_EDI;
  int iVar11;
  undefined4 uStack0000000c;
  
code_r0x10006fdc:
  while( true ) {
    iVar6 = *(int *)(unaff_EBP - 0x20);
    *(uint *)(unaff_EBP - 0x2c) = unaff_EDI;
    if ((iVar6 != 0) || (*(uint *)(unaff_EBP - 0x34) <= unaff_EDI)) goto LAB_1000729b;
    iVar6 = *(int *)(unaff_EBP - 0x14);
    iVar11 = unaff_EDI * 0x124;
    if (*(int *)(iVar11 + iVar6) != 0x124) goto LAB_1000729b;
    if (*(short *)(iVar11 + 6 + iVar6) == 1) break;
LAB_1000711c:
    unaff_EDI = *(int *)(unaff_EBP - 0x2c) + 1;
  }
  psVar8 = *(short **)(iVar11 + 0x114 + iVar6);
  psVar1 = psVar8 + 1;
  do {
    sVar4 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar4 != 0);
  iVar6 = (int)psVar8 - (int)psVar1 >> 1;
  if (iVar6 == 0) goto LAB_1000711c;
  uVar2 = iVar6 + 1;
  lVar5 = (ulonglong)uVar2 * 2;
  pwVar7 = (wchar_t *)
           thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
  pwVar9 = *(wchar_t **)(iVar11 + 0x114 + *(int *)(unaff_EBP - 0x14));
  *(wchar_t **)(unaff_EBP - 0x1c) = pwVar7;
  _wcscpy_s(pwVar7,uVar2,pwVar9);
  iVar6 = FUN_10005b70();
  if (iVar6 == 0) {
LAB_100070a1:
    _free(*(void **)(unaff_EBP - 0x1c));
    unaff_EDI = *(int *)(unaff_EBP - 0x2c) + 1;
    goto code_r0x10006fdc;
  }
  if (*(int *)(unaff_EBP - 0x28) == 0) {
    psVar8 = *(short **)(iVar11 + 0x118 + *(int *)(unaff_EBP - 0x14));
    psVar1 = psVar8 + 1;
    do {
      sVar4 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar4 != 0);
    iVar6 = (int)psVar8 - (int)psVar1 >> 1;
    if (iVar6 != 0) {
      uVar2 = iVar6 + 1;
      lVar5 = (ulonglong)uVar2 * 2;
      *(undefined1 *)(unaff_EBP - 4) = 3;
      pwVar7 = (wchar_t *)
               thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
      pwVar9 = *(wchar_t **)(iVar11 + 0x118 + *(int *)(unaff_EBP - 0x14));
      *(undefined4 *)(unaff_EBP - 4) = 0;
      _wcscpy_s(pwVar7,uVar2,pwVar9);
      iVar6 = FUN_10005b70();
      _free(pwVar7);
      if (iVar6 == 0) goto LAB_100071bb;
    }
LAB_10007110:
    _free(*(void **)(unaff_EBP - 0x1c));
    goto LAB_1000711c;
  }
  psVar8 = *(short **)(iVar11 + 0x118 + *(int *)(unaff_EBP - 0x14));
  psVar1 = psVar8 + 1;
  do {
    sVar4 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar4 != 0);
  iVar6 = (int)psVar8 - (int)psVar1 >> 1;
  if (iVar6 == 0) goto LAB_100070a1;
  uVar2 = iVar6 + 1;
  lVar5 = (ulonglong)uVar2 * 2;
  *(undefined1 *)(unaff_EBP - 4) = 1;
  pwVar7 = (wchar_t *)
           thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
  pwVar9 = *(wchar_t **)(iVar11 + 0x118 + *(int *)(unaff_EBP - 0x14));
  *(undefined4 *)(unaff_EBP - 4) = 0;
  _wcscpy_s(pwVar7,uVar2,pwVar9);
  iVar6 = FUN_10005b70();
  _free(pwVar7);
  if (iVar6 == 0) goto LAB_10007110;
LAB_100071bb:
  psVar8 = (short *)(iVar11 + 8 + *(int *)(unaff_EBP - 0x14));
  psVar1 = psVar8 + 1;
  do {
    sVar4 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar4 != 0);
  iVar6 = (int)psVar8 - (int)psVar1 >> 1;
  if (iVar6 == 0) {
    _free(*(void **)(unaff_EBP - 0x1c));
    unaff_EDI = *(int *)(unaff_EBP - 0x2c) + 1;
    goto code_r0x10006fdc;
  }
  uVar2 = iVar6 + 1;
  lVar5 = (ulonglong)uVar2 * 2;
  *(undefined1 *)(unaff_EBP - 4) = 5;
  pwVar9 = (wchar_t *)
           thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
  iVar6 = *(int *)(unaff_EBP - 0x14);
  *(wchar_t **)(unaff_EBP - 0x30) = pwVar9;
  *(undefined4 *)(unaff_EBP - 4) = 0;
  _wcscpy_s(pwVar9,uVar2,(wchar_t *)(iVar11 + 8 + iVar6));
  iVar6 = *(int *)(unaff_EBP - 0x24);
  puVar3 = (undefined4 *)(iVar6 + 0x6b4);
  iVar11 = (**(code **)(**(int **)(iVar6 + 0x6b0) + 0x18))
                     (*(int **)(iVar6 + 0x6b0),iVar11 + 8 + *(int *)(unaff_EBP - 0x14),3,puVar3,0);
  if (iVar11 < 0) {
LAB_100072e5:
    _free(*(void **)(unaff_EBP - 0x30));
    goto LAB_100070a1;
  }
  iVar11 = (**(code **)(*(int *)*puVar3 + 0x28))((int *)*puVar3,2000);
  if (iVar11 < 0) {
    (**(code **)(*(int *)*puVar3 + 0x2c))((int *)*puVar3);
    (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3);
    *puVar3 = 0;
    goto LAB_100072e5;
  }
  (**(code **)(*(int *)*puVar3 + 0x2c))((int *)*puVar3);
  lpString2 = *(LPCWSTR *)(unaff_EBP - 0x30);
  *(undefined1 *)(unaff_EBP - 0x15) = 1;
  lstrcpyW((LPWSTR)(iVar6 + 0x6c0),lpString2);
  _free(lpString2);
  _free(*(void **)(unaff_EBP - 0x1c));
LAB_1000729b:
  iVar6 = *(int *)(unaff_EBP - 0x20);
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  if (iVar6 == 0) {
    if (*(char *)(unaff_EBP - 0x15) != '\0') {
      piVar10 = *(int **)(unaff_EBP - 0x24);
      iVar6 = 0;
      goto LAB_10007337;
    }
    *(undefined4 *)(unaff_EBP - 0x20) = 0x3035;
  }
  piVar10 = *(int **)(unaff_EBP - 0x24);
  (**(code **)(*piVar10 + 8))();
  iVar6 = *(int *)(unaff_EBP - 0x20);
LAB_10007337:
  if (*(HLOCAL *)(unaff_EBP - 0x14) != (HLOCAL)0x0) {
    LocalFree(*(HLOCAL *)(unaff_EBP - 0x14));
    *(undefined4 *)(unaff_EBP - 0x14) = 0;
  }
  if (iVar6 != 0) {
    (**(code **)(*piVar10 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x10007376;
  __security_check_cookie(*(uint *)(unaff_EBP + 0x208) ^ unaff_EBP);
  return;
}



/**************************************************/

/* Function: Catch@10007127 @ 10007127 */

void Catch_10007127(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@100072f6 @ 100072f6 */

void Catch_100072f6(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@1000730b @ 1000730b */

void Catch_1000730b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@10007320 @ 10007320 */

undefined4 Catch_10007320(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x100072ba;
}



/**************************************************/

/* Function: FUN_10007390 @ 10007390 */

undefined4 __fastcall FUN_10007390(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10005af0();
  if (iVar1 != 0) {
    uVar2 = FUN_100069c0((void *)(param_1 + 0xc));
    return uVar2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100073b0 @ 100073b0 */

undefined4 __cdecl
FUN_100073b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  LPVOID lpBaseAddress;
  undefined4 uVar1;
  
  if (DAT_10020610 == (HANDLE)0x0) {
    DAT_10020610 = OpenFileMappingW(0xf001f,0,L"_SG_IPM_DATA_");
    if (DAT_10020610 == (HANDLE)0x0) {
      return 0x40;
    }
  }
  if ((DAT_10020618 == (code *)0x0) || (DAT_1002061c == (LPCRITICAL_SECTION)0x0)) {
    lpBaseAddress = MapViewOfFile(DAT_10020610,4,0,0,0xc);
    if (lpBaseAddress == (LPVOID)0x0) {
      return 0x40;
    }
    DAT_1002061c = *(LPCRITICAL_SECTION *)((int)lpBaseAddress + 8);
    DAT_10020618 = *(code **)((int)lpBaseAddress + 4);
    UnmapViewOfFile(lpBaseAddress);
    CloseHandle(DAT_10020610);
  }
  EnterCriticalSection(DAT_1002061c);
  uVar1 = (*DAT_10020618)(param_1,param_2,param_3,param_4,param_5);
  LeaveCriticalSection(DAT_1002061c);
  return uVar1;
}



/**************************************************/

/* Function: FUN_10007470 @ 10007470 */

void __fastcall FUN_10007470(undefined4 *param_1)

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

/* Function: FUN_100074b0 @ 100074b0 */

undefined4 __thiscall FUN_100074b0(void *this,int param_1)

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
    if (pvVar1 == (HGLOBAL)0x0) goto LAB_1000755f;
    puVar2 = GlobalLock(pvVar1);
    *(undefined2 **)this = puVar2;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
      lpString = (LPCWSTR)((int)this + 0xc);
      iVar3 = lstrlenW(lpString);
      if ((0 < iVar3) && (iVar3 = lstrlenW(lpString), iVar3 < *(int *)((int)this + 4))) {
        lstrcpyW(*(LPWSTR *)this,lpString);
      }
      goto LAB_1000755f;
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
      if (pvVar4 != (LPVOID)0x0) goto LAB_1000755f;
      pvVar1 = *(HGLOBAL *)((int)this + 8);
    }
  }
  GlobalFree(pvVar1);
  *(undefined4 *)((int)this + 8) = 0;
LAB_1000755f:
  if (*(int *)((int)this + 8) != 0) {
    *(uint *)((int)this + 4) = uVar5;
    return 0;
  }
  FUN_10007470(this);
  return 1;
}



/**************************************************/

/* Function: FUN_10007590 @ 10007590 */

int __thiscall FUN_10007590(void *this,HINSTANCE param_1,UINT param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 == (HINSTANCE)0x0) {
    FUN_10007470(this);
  }
  else {
    iVar1 = LoadStringW(param_1,param_2,*(LPWSTR *)this,*(int *)((int)this + 4));
    if (iVar1 != 0) {
      while( true ) {
        iVar1 = *(int *)((int)this + 4);
        iVar2 = lstrlenW(*(LPCWSTR *)this);
        if ((iVar2 < iVar1 + -2) || (iVar3 = FUN_100074b0(this,iVar1 + 0x40), iVar3 != 0)) break;
        LoadStringW(param_1,param_2,*(LPWSTR *)this,*(int *)((int)this + 4));
      }
      return iVar3;
    }
  }
  return 0x31;
}



/**************************************************/

/* Function: FUN_10007610 @ 10007610 */

int __cdecl FUN_10007610(undefined4 *param_1,wchar_t *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *_DstBuf;
  size_t _SizeInWords;
  
  _SizeInWords = param_1[1];
  _DstBuf = (wchar_t *)*param_1;
  iVar2 = 0;
  do {
    iVar1 = __vsnwprintf_s(_DstBuf,_SizeInWords,0xffffffff,param_2,&stack0x0000000c);
    if ((iVar2 == 0) && (iVar1 < 0)) goto LAB_10007643;
    do {
      if (iVar1 != param_1[1]) {
        return iVar2;
      }
LAB_10007643:
      iVar2 = FUN_100074b0(param_1,param_1[1] + 0x40);
    } while (iVar2 != 0);
    _SizeInWords = param_1[1];
    _DstBuf = (wchar_t *)*param_1;
  } while( true );
}



/**************************************************/

/* Function: FUN_10007680 @ 10007680 */

undefined4 * __thiscall FUN_10007680(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lstrlenW((LPCWSTR)*param_1);
  iVar2 = FUN_100074b0(this,iVar1 + 1);
  if (iVar2 == 0) {
    _memcpy(*(void **)this,(void *)*param_1,(iVar1 + 1) * 2);
  }
  return this;
}



/**************************************************/

/* Function: FUN_100076c0 @ 100076c0 */

undefined4 * __thiscall FUN_100076c0(void *this,LPCWSTR param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lstrlenW(param_1);
  iVar2 = FUN_100074b0(this,iVar1 + 1);
  if (iVar2 == 0) {
    _memcpy(*(void **)this,param_1,(iVar1 + 1) * 2);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10007700 @ 10007700 */

int * __thiscall FUN_10007700(void *this,LPCWSTR param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = lstrlenW(*(LPCWSTR *)this);
  iVar2 = lstrlenW(param_1);
  iVar3 = FUN_100074b0(this,iVar2 + 1 + iVar1);
  if (iVar3 == 0) {
    _memcpy((void *)(*(int *)this + iVar1 * 2),param_1,(iVar2 + 1) * 2);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10007750 @ 10007750 */

void __thiscall FUN_10007750(void *this,LPCSTR param_1)

{
  uint uVar1;
  LPWSTR _Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100185f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_1000a2d0((LPWSTR)0x0,0,param_1);
  local_8 = 0;
  _Memory = (LPWSTR)thunk_FUN_1000a8e8(-(uint)((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) |
                                       (uint)((ulonglong)uVar1 * 2));
  FUN_1000a2d0(_Memory,uVar1,param_1);
  *(undefined4 *)((int)this + 8) = 0;
  FUN_10007470(this);
  FUN_100076c0(this,_Memory);
  _free(_Memory);
  FUN_100077f6();
  return;
}



/**************************************************/

/* Function: Catch@100077e0 @ 100077e0 */

undefined * Catch_100077e0(void)

{
  int unaff_EBP;
  
  FUN_100076c0(*(void **)(unaff_EBP + -0x14),(LPCWSTR)&PTR_10019354);
  return &DAT_100077f3;
}



/**************************************************/

/* Function: FUN_100077f6 @ 100077f6 */

void FUN_100077f6(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/**************************************************/

/* Function: FUN_10007810 @ 10007810 */

void __fastcall FUN_10007810(undefined4 *param_1)

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

/* Function: FUN_10007840 @ 10007840 */

undefined4 __fastcall FUN_10007840(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/**************************************************/

/* Function: FUN_10007850 @ 10007850 */

undefined4 __fastcall FUN_10007850(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/**************************************************/

/* Function: FUN_10007860 @ 10007860 */

undefined4 __thiscall FUN_10007860(void *this,wchar_t *param_1)

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

/* Function: FUN_100078e0 @ 100078e0 */

undefined4 __fastcall FUN_100078e0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/**************************************************/

/* Function: FUN_100078f0 @ 100078f0 */

undefined4 __fastcall FUN_100078f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/**************************************************/

/* Function: FUN_10007900 @ 10007900 */

undefined4 __thiscall FUN_10007900(void *this,wchar_t *param_1,undefined4 param_2)

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

/* Function: FUN_100079b0 @ 100079b0 */

uint __thiscall FUN_100079b0(void *this,void *param_1,uint param_2,undefined4 param_3)

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

/* Function: FUN_10007a40 @ 10007a40 */

int __thiscall FUN_10007a40(void *this,int param_1,int *param_2)

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
LAB_10007ae6:
          iVar2 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto switchD_10007a66_default;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar7[1];
        bVar10 = uVar1 < puVar8[1];
        if (uVar1 != puVar8[1]) goto LAB_10007ae6;
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
switchD_10007a66_default:
  if (param_1 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10007b30 @ 10007b30 */

int __thiscall FUN_10007b30(void *this,int param_1,ushort *param_2)

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
LAB_10007ba4:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto switchD_10007b3a_default;
      }
      if (uVar1 == 0) break;
      uVar1 = param_2[1];
      bVar6 = uVar1 < puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_10007ba4;
      param_2 = param_2 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != 0);
  case 3:
    iVar2 = 0;
  }
switchD_10007b3a_default:
  if (param_1 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10007bc0 @ 10007bc0 */

undefined4 * __fastcall FUN_10007bc0(undefined4 *param_1)

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

/* Function: FUN_10007bf0 @ 10007bf0 */

undefined4 __fastcall FUN_10007bf0(int param_1)

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

/* Function: FUN_10007c30 @ 10007c30 */

undefined4 __thiscall FUN_10007c30(void *this,wchar_t *param_1)

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

/* Function: FUN_10007c80 @ 10007c80 */

undefined4 __thiscall FUN_10007c80(void *this,LPCSTR param_1)

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
  puStack_8 = &LAB_1001861b;
  local_c = ExceptionList;
  uVar1 = DAT_1001ef38 ^ (uint)&stack0xfffffdd8;
  ExceptionList = &local_c;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      puVar2 = (undefined4 *)FUN_10007750(local_218,param_1);
      _Str2 = (wchar_t *)*puVar2;
      uStack_4 = 0;
      _Str1 = (wchar_t *)
              (**(code **)**(undefined4 **)(*(int *)((int)this + 4) + iVar4 * 4))(_Str2,uVar1);
      iVar3 = __wcsicmp(_Str1,_Str2);
      uStack_4 = 0xffffffff;
      FUN_10007470(local_218);
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

/* Function: FUN_10007d40 @ 10007d40 */

undefined4 __thiscall FUN_10007d40(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
}



/**************************************************/

/* Function: FUN_10007d50 @ 10007d50 */

void __thiscall FUN_10007d50(void *this,undefined4 param_1)

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

/* Function: FUN_10007d90 @ 10007d90 */

void __thiscall FUN_10007d90(void *this,LPCSTR param_1)

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
  puStack_8 = &LAB_1001864b;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_1001ef38 ^ (uint)local_21c);
  uVar1 = DAT_1001ef38 ^ (uint)&stack0xfffffddc;
  ExceptionList = &local_c;
  FUN_10007750(local_21c,param_1);
  uStack_4 = 0;
  iVar2 = (**(code **)(*(int *)this + 4))(local_21c[0],uVar1);
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x1c))(unaff_ESI,L"empty",2);
    (**(code **)(*(int *)this + 4))(local_21c[0]);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_10007470((undefined4 *)&stack0xfffffde0);
  ExceptionList = local_10;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffde0);
  return;
}



/**************************************************/

/* Function: FUN_10007e60 @ 10007e60 */

undefined4 __thiscall
FUN_10007e60(void *this,int param_1,wchar_t *param_2,rsize_t param_3,void *param_4,
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

/* Function: FUN_10007f10 @ 10007f10 */

undefined4 __thiscall FUN_10007f10(void *this,undefined4 param_1)

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

/* Function: FUN_10007f40 @ 10007f40 */

undefined4 __thiscall FUN_10007f40(void *this,undefined4 param_1)

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

/* Function: FUN_10007f70 @ 10007f70 */

undefined4 __thiscall FUN_10007f70(void *this,LPCSTR param_1)

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
  puStack_8 = &LAB_1001868b;
  local_c = ExceptionList;
  uVar1 = DAT_1001ef38 ^ (uint)&stack0xfffffde4;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_10007750(local_218,param_1);
  uStack_4 = 0;
  piVar3 = (int *)(**(code **)(*(int *)this + 4))(*puVar2,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_10007470((undefined4 *)&stack0xfffffde4);
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

/* Function: FUN_10008010 @ 10008010 */

undefined4 __thiscall FUN_10008010(void *this,LPCSTR param_1)

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
  puStack_8 = &LAB_100186bb;
  local_c = ExceptionList;
  uVar1 = DAT_1001ef38 ^ (uint)&stack0xfffffde4;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_10007750(local_218,param_1);
  uStack_4 = 0;
  piVar3 = (int *)(**(code **)(*(int *)this + 4))(*puVar2,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_10007470((undefined4 *)&stack0xfffffde4);
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

/* Function: FUN_100080b0 @ 100080b0 */

int __thiscall FUN_100080b0(void *this,ushort *param_1)

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
LAB_100080f6:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_100080fb;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar2[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_100080f6;
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      iVar3 = 0;
LAB_100080fb:
      if (iVar3 == 0) {
        _Memory = *(undefined4 **)(*(int *)((int)this + 4) + iVar4 * 4);
        if (_Memory != (undefined4 *)0x0) {
          FUN_10007810(_Memory);
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

/* Function: FUN_10008170 @ 10008170 */

undefined4 __thiscall FUN_10008170(void *this,int param_1)

{
  void *_Dst;
  size_t _Size;
  undefined4 *_Memory;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8))) {
    _Memory = *(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_10007810(_Memory);
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

/* Function: FUN_100081f0 @ 100081f0 */

undefined4 __fastcall FUN_100081f0(int *param_1)

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

/* Function: FUN_10008220 @ 10008220 */

void __thiscall
FUN_10008220(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4)

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
  
  local_4 = DAT_1001ef38 ^ (uint)&local_230;
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
  iVar1 = RegOpenKeyExW(param_4,(LPCWSTR)PTR_u_SOFTWARE_1001eed8,0,0x20019,&local_21c);
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
            goto LAB_100083d4;
            RegQueryValueExW(local_22c,aWStack_20c,(LPDWORD)0x0,&local_214,lpData,&local_230);
            switch(local_214) {
            case 0:
              uVar3 = 0;
              break;
            case 1:
              uVar3 = 2;
              goto LAB_10008398;
            case 2:
            case 3:
            case 6:
            case 7:
            case 8:
              uVar3 = 3;
LAB_10008398:
              (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_230,uVar3);
              goto switchD_1000838f_default;
            case 4:
            case 5:
              uVar3 = 1;
              break;
            default:
              goto switchD_1000838f_default;
            }
            (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_230,uVar3);
switchD_1000838f_default:
            _free(lpData);
LAB_100083d4:
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

/* Function: FUN_100084a0 @ 100084a0 */

void __thiscall
FUN_100084a0(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4)

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
  
  local_4 = DAT_1001ef38 ^ (uint)&local_234;
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
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_1001eed8,0,0x20019,&local_228),
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
  local_21c = RegOpenKeyExW(param_4,(LPCWSTR)PTR_u_SOFTWARE_1001eed8,0,0x20019,&local_228);
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
            goto LAB_10008786;
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
LAB_10008786:
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

/* Function: FUN_10008800 @ 10008800 */

void __thiscall
FUN_10008800(void *this,LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
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
  
  local_4 = DAT_1001ef38 ^ (uint)&local_238;
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
  iVar1 = RegOpenKeyExW(param_6,(LPCWSTR)PTR_u_SOFTWARE_1001eed8,0,0x20019,&local_224);
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
              goto LAB_100089e0;
              RegQueryValueExW(local_230,aWStack_20c,(LPDWORD)0x0,&local_220,lpData,&local_234);
              switch(local_220) {
              case 0:
                uVar3 = 0;
                break;
              case 1:
                uVar3 = 2;
                goto LAB_100089a4;
              case 2:
              case 3:
              case 6:
              case 7:
              case 8:
                uVar3 = 3;
LAB_100089a4:
                (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_234,uVar3);
                goto switchD_1000899b_default;
              case 4:
              case 5:
                uVar3 = 1;
                break;
              default:
                goto switchD_1000899b_default;
              }
              (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_234,uVar3);
switchD_1000899b_default:
              _free(lpData);
LAB_100089e0:
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

/* Function: FUN_10008ac0 @ 10008ac0 */

void __thiscall
FUN_10008ac0(void *this,LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
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
  
  local_4 = DAT_1001ef38 ^ (uint)&local_23c;
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
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_1001eed8,0,0x20019,&local_230),
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
  local_228 = RegOpenKeyExW(local_214,(LPCWSTR)PTR_u_SOFTWARE_1001eed8,0,0x20019,&local_230);
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
              goto LAB_10008e20;
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
LAB_10008e20:
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

/* Function: FUN_10008ea0 @ 10008ea0 */

void __thiscall
FUN_10008ea0(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4,
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
  
  local_4 = DAT_1001ef38 ^ (uint)&local_244;
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
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_1001eed8,0,0x20019,&local_234),
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
  LVar2 = RegOpenKeyExW(local_228,(LPCWSTR)PTR_u_SOFTWARE_1001eed8,0,0x20019,&local_234);
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
                goto LAB_10009236;
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
LAB_10009236:
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

/* Function: FUN_100092c0 @ 100092c0 */

void __thiscall FUN_100092c0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x3c))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000002);
  return;
}



/**************************************************/

/* Function: FUN_100092f0 @ 100092f0 */

void __thiscall FUN_100092f0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x44))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000002,0);
  return;
}



/**************************************************/

/* Function: FUN_10009320 @ 10009320 */

void __thiscall FUN_10009320(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x3c))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001);
  return;
}



/**************************************************/

/* Function: FUN_10009350 @ 10009350 */

void __thiscall FUN_10009350(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x44))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001,0);
  return;
}



/**************************************************/

/* Function: FUN_10009380 @ 10009380 */

void __thiscall FUN_10009380(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x60))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001,0);
  return;
}



/**************************************************/

/* Function: FUN_100093b0 @ 100093b0 */

void FUN_100093b0(HMODULE param_1,wchar_t *param_2,rsize_t param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_1001ef38 ^ (uint)local_20c;
  pwVar2 = (wchar_t *)0x0;
  GetModuleFileNameW(param_1,local_20c,0x104);
  pwVar1 = _wcsrchr(local_20c,L'\\');
  if (pwVar1 != (wchar_t *)0x0) {
    *pwVar1 = L'\0';
    pwVar2 = _wcsrchr(local_20c,L'\\');
    if (pwVar2 == (wchar_t *)0x0) goto LAB_1000942c;
    pwVar2 = pwVar2 + 1;
  }
  _wcscpy_s(param_2,param_3,pwVar2);
LAB_1000942c:
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}



/**************************************************/

/* Function: FUN_10009450 @ 10009450 */

undefined4 * __thiscall
FUN_10009450(void *this,wchar_t *param_1,wchar_t *param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = Association::vftable;
  FUN_10007860(this,param_1);
  FUN_10007900(this,param_2,param_3);
  return this;
}



/**************************************************/

/* Function: FUN_10009490 @ 10009490 */

undefined4 * __thiscall
FUN_10009490(void *this,wchar_t *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = Association::vftable;
  FUN_10007860(this,param_1);
  FUN_100079b0(this,param_2,param_3,param_4);
  return this;
}



/**************************************************/

/* Function: FUN_100094d0 @ 100094d0 */

void __fastcall FUN_100094d0(undefined4 *param_1)

{
  undefined4 *_Memory;
  int iVar1;
  
  iVar1 = 0;
  *param_1 = AssociationSet::vftable;
  if (0 < (int)param_1[2]) {
    do {
      _Memory = *(undefined4 **)(param_1[1] + iVar1 * 4);
      if (_Memory != (undefined4 *)0x0) {
        FUN_10007810(_Memory);
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[2]);
  }
  _free((void *)param_1[1]);
  return;
}



/**************************************************/

/* Function: FUN_10009520 @ 10009520 */

undefined4 __thiscall FUN_10009520(void *this,wchar_t *param_1,wchar_t *param_2,undefined4 param_3)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100186e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 4))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(param_2,param_3);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0;
  this_00 = (void *)FUN_1000a8e8(0x14);
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_10009450(this_00,param_1,param_2,param_3);
  }
  *(undefined4 **)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  FUN_10007bf0((int)this);
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@100095d4 @ 100095d4 */

undefined1 * Catch_100095d4(void)

{
  return &LAB_100095da;
}



/**************************************************/

/* Function: FUN_10009600 @ 10009600 */

undefined4 __thiscall
FUN_10009600(void *this,wchar_t *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10018700;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 4))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(param_2,param_3,param_4);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0;
  this_00 = (void *)FUN_1000a8e8(0x14);
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_10009490(this_00,param_1,param_2,param_3,param_4);
  }
  *(undefined4 **)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  FUN_10007bf0((int)this);
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@100096bc @ 100096bc */

undefined1 * Catch_100096bc(void)

{
  return &LAB_100096c2;
}



/**************************************************/

/* Function: FUN_100096e0 @ 100096e0 */

void __thiscall FUN_100096e0(void *this,HMODULE param_1)

{
  int iVar1;
  wchar_t *pwStack_224;
  undefined4 uStack_220;
  wchar_t local_20c [248];
  uint uStack_1c;
  uint local_4;
  
  local_4 = DAT_1001ef38 ^ (uint)local_20c;
  uStack_220 = 0x10009710;
  iVar1 = FUN_100093b0(param_1,local_20c,0x104);
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

/* Function: FUN_10009770 @ 10009770 */

undefined4 __cdecl FUN_10009770(uint param_1,uint param_2,undefined4 *param_3)

{
  if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) != 0) {
    *param_3 = 0xffffffff;
    return 0x80070216;
  }
  *param_3 = (int)((ulonglong)param_1 * (ulonglong)param_2);
  return 0;
}



/**************************************************/

/* Function: FUN_100097a0 @ 100097a0 */

undefined8 __cdecl FUN_100097a0(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)*param_1;
  *param_1 = (int)((undefined8 *)*param_1 + 1);
  return uVar1;
}



/**************************************************/

/* Function: FUN_100097c0 @ 100097c0 */

void __cdecl FUN_100097c0(uint param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  void *_Dst;
  
  uVar1 = param_1 >> 0x10;
  if (uVar1 == 1) {
    if ((short)param_2 == 1) {
      *(undefined1 *)param_4 = param_2._2_1_;
      return;
    }
    if ((short)param_2 == 2) {
      *(undefined2 *)param_4 = param_2._2_2_;
      return;
    }
    if ((short)param_2 == 4) {
      *param_4 = *(undefined4 *)*param_3;
      *param_3 = *param_3 + 4;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      _memcpy(param_4,(void *)*param_3,param_2 & 0xffff);
      *param_3 = *param_3 + (param_2 & 0xffff);
      return;
    }
    if (uVar1 == 3) {
      if ((short)param_2 == 0) {
        *param_4 = 0;
        return;
      }
      uVar1 = param_2 & 0xffff;
      _Dst = _malloc(uVar1);
      *param_4 = _Dst;
      _memcpy(_Dst,(void *)*param_3,uVar1);
      *param_3 = *param_3 + uVar1;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_10009880 @ 10009880 */

undefined4 * __cdecl FUN_10009880(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int local_4;
  
  local_4 = param_2;
  _memset(param_1,0,0x88);
  do {
    uVar1 = FUN_100097a0(&local_4);
    switch((uint)uVar1 & 0xffff) {
    case 1:
      puVar2 = param_1;
      break;
    case 2:
      puVar2 = param_1 + 3;
      break;
    case 3:
      puVar2 = param_1 + 8;
      break;
    case 4:
      puVar2 = param_1 + 10;
      break;
    case 5:
      puVar2 = param_1 + 0xd;
      break;
    case 6:
      puVar2 = (undefined4 *)((int)param_1 + 0x35);
      break;
    case 7:
      puVar2 = (undefined4 *)((int)param_1 + 0x36);
      break;
    case 8:
      puVar2 = (undefined4 *)((int)param_1 + 0x37);
      break;
    case 9:
      puVar2 = param_1 + 0xe;
      break;
    case 10:
      puVar2 = param_1 + 0xf;
      break;
    case 0xb:
      puVar2 = (undefined4 *)((int)param_1 + 0x3e);
      break;
    case 0xc:
      puVar2 = param_1 + 0x10;
      break;
    case 0xd:
      puVar2 = param_1 + 0x11;
      break;
    case 0xe:
      puVar2 = param_1 + 0x12;
      break;
    case 0xf:
      puVar2 = (undefined4 *)((int)param_1 + 0x4a);
      break;
    case 0x10:
      puVar2 = param_1 + 0x13;
      break;
    case 0x11:
      puVar2 = param_1 + 0x14;
      break;
    case 0x12:
      puVar2 = param_1 + 0x16;
      break;
    case 0x13:
      puVar2 = param_1 + 0x17;
      break;
    case 0x14:
      puVar2 = param_1 + 0x18;
      break;
    case 0x15:
      puVar2 = param_1 + 0x19;
      break;
    case 0x16:
      puVar2 = param_1 + 0x1a;
      break;
    case 0x17:
      puVar2 = param_1 + 0x1b;
      break;
    case 0x18:
      puVar2 = (undefined4 *)((int)param_1 + 0x6d);
      break;
    case 0x19:
      puVar2 = (undefined4 *)((int)param_1 + 0x6e);
      break;
    case 0x1a:
      puVar2 = param_1 + 0x1c;
      break;
    case 0x1b:
      puVar2 = param_1 + 0x1d;
      break;
    case 0x1c:
      puVar2 = (undefined4 *)((int)param_1 + 0x75);
      break;
    case 0x1d:
      puVar2 = (undefined4 *)((int)param_1 + 0x76);
      break;
    case 0x1e:
      puVar2 = param_1 + 0x1e;
      break;
    case 0x1f:
      puVar2 = param_1 + 0x1f;
      break;
    case 0x20:
      puVar2 = (undefined4 *)((int)param_1 + 0x7d);
      break;
    case 0x21:
      puVar2 = (undefined4 *)((int)param_1 + 0x7e);
      break;
    case 0x22:
      puVar2 = param_1 + 0x20;
      break;
    case 0x23:
      puVar2 = param_1 + 0x21;
      break;
    case 0x24:
      puVar2 = (undefined4 *)((int)param_1 + 0x85);
      break;
    case 0x25:
      puVar2 = (undefined4 *)((int)param_1 + 0x86);
      break;
    case 0x26:
      puVar2 = param_1 + 0x15;
      break;
    default:
      goto switchD_100098be_default;
    }
    FUN_100097c0((uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),&local_4,puVar2);
switchD_100098be_default:
    if ((short)uVar1 == -1) {
      return param_1;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_10009a70 @ 10009a70 */

void __cdecl FUN_10009a70(int param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x38));
  }
  if (*(void **)(param_1 + 0x44) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x44));
  }
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x50));
  }
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x54));
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x58));
  }
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x5c));
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x60));
  }
  if (*(void **)(param_1 + 100) != (void *)0x0) {
    _free(*(void **)(param_1 + 100));
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x68));
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x70));
  }
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x78));
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x80));
  }
  return;
}



/**************************************************/

/* Function: FUN_10009b40 @ 10009b40 */

undefined4 __cdecl FUN_10009b40(undefined4 *param_1,int *param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  void *_Memory;
  int local_10;
  uint local_c;
  undefined4 local_8;
  size_t local_4;
  
  _Memory = (void *)0x0;
  local_10 = 0;
  local_8 = 0;
  uVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 != (int *)0x0) {
      hModule = FUN_100052a0(L"kernel32.dll");
      if ((hModule == (HMODULE)0x0) ||
         (pFVar1 = GetProcAddress(hModule,"GetThreadPreferredUILanguages"), pFVar1 == (FARPROC)0x0))
      {
        local_8 = 2;
      }
      else {
        local_4 = 0;
        local_c = 0;
        iVar2 = (*pFVar1)(0x34,&local_10,0,&local_c);
        if ((iVar2 != 0) || (DVar3 = GetLastError(), DVar3 == 0x7a)) {
          if ((local_10 == 0) || (local_c < 3)) {
            SetLastError(2);
          }
          else {
            iVar2 = FUN_10009770(local_c,2,&local_4);
            if (-1 < iVar2) {
              _Memory = _malloc(local_4);
              if (_Memory == (void *)0x0) {
                SetLastError(8);
              }
              else {
                iVar2 = (*pFVar1)(0x34,&local_10,_Memory,&local_c);
                if (iVar2 == 0) {
                  _free(_Memory);
                  _Memory = (void *)0x0;
                }
                else {
                  local_8 = 1;
                }
              }
            }
          }
        }
      }
      if (hModule != (HMODULE)0x0) {
        DVar3 = GetLastError();
        FreeLibrary(hModule);
        SetLastError(DVar3);
      }
    }
    *param_1 = _Memory;
    uVar4 = local_8;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_10;
  }
  return uVar4;
}



/**************************************************/

/* Function: FUN_10009c70 @ 10009c70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10009c70(int *param_1,ushort param_2)

{
  ushort uVar1;
  HMODULE pHVar2;
  
  if (*param_1 != 0) {
    return;
  }
  _DAT_10020624 = 0;
  _DAT_10020628 = 0;
  if (param_2 != 0x804) {
    if (((param_2 == 0x404) || (param_2 == 0xc04)) || (param_2 == 0x1404)) {
      pHVar2 = FUN_100052a0(L"SGRES_TW.DLL");
      *param_1 = (int)pHVar2;
      return;
    }
    if (param_2 != 0x1004) {
      uVar1 = param_2 & 0x3ff;
      if (uVar1 == 9) {
        pHVar2 = FUN_100052a0(L"SGRES_US.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0xc) {
        pHVar2 = FUN_100052a0(L"SGRES_FR.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 7) {
        pHVar2 = FUN_100052a0(L"SGRES_DE.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x10) {
        pHVar2 = FUN_100052a0(L"SGRES_IT.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 10) {
        pHVar2 = FUN_100052a0(L"SGRES_ES.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x16) {
        pHVar2 = FUN_100052a0(L"SGRES_PT.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x13) {
        pHVar2 = FUN_100052a0(L"SGRES_NL.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x15) {
        pHVar2 = FUN_100052a0(L"SGRES_PL.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x19) {
        pHVar2 = FUN_100052a0(L"SGRES_RU.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0xe) {
        pHVar2 = FUN_100052a0(L"SGRES_HU.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 5) {
        pHVar2 = FUN_100052a0(L"SGRES_CZ.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x12) {
        pHVar2 = FUN_100052a0(L"SGRES_KR.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 6) {
        pHVar2 = FUN_100052a0(L"SGRES_DK.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x14) {
        pHVar2 = FUN_100052a0(L"SGRES_NO.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x1d) {
        pHVar2 = FUN_100052a0(L"SGRES_SE.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 != 0xb) {
        if (uVar1 == 8) {
          pHVar2 = FUN_100052a0(L"SGRES_GR.DLL");
          *param_1 = (int)pHVar2;
          return;
        }
        if (uVar1 == 0x1f) {
          pHVar2 = FUN_100052a0(L"SGRES_TR.DLL");
          *param_1 = (int)pHVar2;
          return;
        }
        if (uVar1 == 1) {
          pHVar2 = FUN_100052a0(L"SGRES_AR.DLL");
          *param_1 = (int)pHVar2;
          _DAT_10020624 = 1;
          _DAT_10020628 = 0x180000;
          return;
        }
        if (uVar1 != 0x1e) {
          if (uVar1 == 0x21) {
            pHVar2 = FUN_100052a0(L"SGRES_ID.DLL");
            *param_1 = (int)pHVar2;
            return;
          }
          if (uVar1 != 0x11) {
            _DAT_10020624 = 0;
            _DAT_10020628 = 0;
            return;
          }
          pHVar2 = FUN_100052a0(L"SGRES_JP.DLL");
          *param_1 = (int)pHVar2;
          return;
        }
        pHVar2 = FUN_100052a0(L"SGRES_TH.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      pHVar2 = FUN_100052a0(L"SGRES_FI.DLL");
      *param_1 = (int)pHVar2;
      return;
    }
  }
  pHVar2 = FUN_100052a0(L"SGRES_CN.DLL");
  *param_1 = (int)pHVar2;
  return;
}



/**************************************************/

/* Function: FUN_10009ea0 @ 10009ea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10009ea0(HMODULE param_1)

{
  wchar_t wVar1;
  LANGID LVar2;
  ushort uVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  wchar_t *pwVar8;
  HMODULE pHVar9;
  uint uVar10;
  int iVar11;
  int local_31c;
  wchar_t *local_318;
  uint local_314;
  int local_310;
  WCHAR local_30c;
  undefined1 local_30a [254];
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_1001ef38 ^ (uint)&local_31c;
  uVar10 = 0;
  local_31c = 0;
  GetModuleFileNameW(param_1,local_20c,0x104);
  pwVar4 = _wcsrchr(local_20c,L'\\');
  if (pwVar4 != (wchar_t *)0x0) {
    *pwVar4 = L'\0';
    _wcscat_s(local_20c,0x104,L"\\_SETSCN_.INI");
  }
  local_30c = L'\0';
  _memset(local_30a,0,0xfe);
  GetPrivateProfileStringW(L"Language",L"LangID",(LPCWSTR)0x0,&local_30c,0x80,local_20c);
  FUN_100073b0(0x128,&local_310,0,0,0);
  if (local_310 == 1) {
    iVar11 = 0;
    if (local_30c != L'\0') {
      uVar5 = _wcstoul(&local_30c,(wchar_t **)0x0,0x10);
      uVar3 = (ushort)uVar5;
      FUN_10009c70(&local_31c,uVar3);
      iVar11 = local_31c;
      _DAT_1002062c = uVar3;
      if ((uVar3 != 0) && (local_31c != 0)) goto LAB_1000a2a8;
    }
    iVar6 = FUN_10009b40(&local_318,(int *)&local_314);
    if (iVar6 == 1) {
      pwVar4 = local_318;
      LVar2 = _DAT_1002062c;
      if (local_314 != 0) {
        while (LVar2 = _DAT_1002062c, *pwVar4 != L'\0') {
          lVar7 = _wcstol(pwVar4,(wchar_t **)0x0,0x10);
          FUN_10009c70(&local_31c,(ushort)lVar7);
          pwVar8 = pwVar4;
          do {
            wVar1 = *pwVar8;
            pwVar8 = pwVar8 + 1;
          } while (wVar1 != L'\0');
          iVar11 = local_31c;
          LVar2 = (ushort)lVar7;
          if ((local_31c != 0) ||
             (uVar10 = uVar10 + 1, pwVar4 = pwVar4 + ((int)pwVar8 - (int)(pwVar4 + 1) >> 1) + 1,
             LVar2 = _DAT_1002062c, local_314 <= uVar10)) break;
        }
      }
    }
    else {
      if (iVar6 != 2) goto LAB_1000a2a8;
      LVar2 = GetUserDefaultLangID();
      FUN_10009c70(&local_31c,LVar2);
      iVar11 = local_31c;
      if (local_31c == 0) {
        LVar2 = GetSystemDefaultLangID();
        FUN_10009c70(&local_31c,LVar2);
        iVar11 = local_31c;
      }
    }
    _DAT_1002062c = LVar2;
    if (local_318 != (wchar_t *)0x0) {
      _free(local_318);
    }
    if (iVar11 == 0) {
      FUN_100052a0(L"SGRES_US.DLL");
      _DAT_10020624 = 0;
      _DAT_10020628 = 0;
    }
    goto LAB_1000a2a8;
  }
  uVar5 = _wcstoul(&local_30c,(wchar_t **)0x0,0x10);
  _DAT_1002062c = (LANGID)uVar5;
  if (_DAT_1002062c == 0) {
    _DAT_1002062c = GetSystemDefaultLangID();
  }
  if (_DAT_1002062c == 0x804) {
    pwVar4 = L"SGRES_CN.DLL";
LAB_1000a28f:
    pHVar9 = FUN_100052a0(pwVar4);
  }
  else {
    if (_DAT_1002062c == 0x404) {
      pwVar4 = L"SGRES_TW.DLL";
      goto LAB_1000a28f;
    }
    if (_DAT_1002062c == 0xc04) {
      pwVar4 = L"SGRES_TW.DLL";
      goto LAB_1000a28f;
    }
    if (_DAT_1002062c == 0x1404) {
      pwVar4 = L"SGRES_TW.DLL";
      goto LAB_1000a28f;
    }
    if (_DAT_1002062c == 0x1004) {
      pwVar4 = L"SGRES_CN.DLL";
      goto LAB_1000a28f;
    }
    uVar3 = _DAT_1002062c & 0x3ff;
    if (uVar3 == 9) {
LAB_1000a28a:
      pwVar4 = L"SGRES_US.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0xc) {
      pwVar4 = L"SGRES_FR.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 7) {
      pwVar4 = L"SGRES_DE.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x10) {
      pwVar4 = L"SGRES_IT.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 10) {
      pwVar4 = L"SGRES_ES.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x16) {
      pwVar4 = L"SGRES_PT.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x13) {
      pwVar4 = L"SGRES_NL.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x15) {
      pwVar4 = L"SGRES_PL.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x19) {
      pwVar4 = L"SGRES_RU.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0xe) {
      pwVar4 = L"SGRES_HU.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 5) {
      pwVar4 = L"SGRES_CZ.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x12) {
      pwVar4 = L"SGRES_KR.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 6) {
      pwVar4 = L"SGRES_DK.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x14) {
      pwVar4 = L"SGRES_NO.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x1d) {
      pwVar4 = L"SGRES_SE.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0xb) {
      pwVar4 = L"SGRES_FI.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 8) {
      pwVar4 = L"SGRES_GR.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 == 0x1f) {
      pwVar4 = L"SGRES_TR.DLL";
      goto LAB_1000a28f;
    }
    if (uVar3 != 1) {
      if (uVar3 == 0x1e) {
        pwVar4 = L"SGRES_TH.DLL";
      }
      else if (uVar3 == 0x21) {
        pwVar4 = L"SGRES_ID.DLL";
      }
      else {
        if (uVar3 != 0x11) goto LAB_1000a28a;
        pwVar4 = L"SGRES_JP.DLL";
      }
      goto LAB_1000a28f;
    }
    pHVar9 = FUN_100052a0(L"SGRES_AR.DLL");
    _DAT_10020624 = 1;
    _DAT_10020628 = 0x180000;
  }
  if (pHVar9 == (HMODULE)0x0) {
    FUN_100052a0(L"SGRES_US.DLL");
  }
LAB_1000a2a8:
  __security_check_cookie(local_4 ^ (uint)&local_31c);
  return;
}



/**************************************************/

/* Function: FUN_1000a2d0 @ 1000a2d0 */

int __cdecl FUN_1000a2d0(LPWSTR param_1,int param_2,LPCSTR param_3)

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

/* Function: ~type_info @ 1000a350 */

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

/* Function: `scalar_deleting_destructor' @ 1000a35e */

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

/* Function: operator== @ 1000a37a */

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

/* Function: __purecall @ 1000a395 */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1000ca15(DAT_10020994);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_1000c759(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/**************************************************/

/* Function: _wcscpy_s @ 1000a3bf */

/* Library Function - Single Match
    _wcscpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  DWORD *pDVar2;
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
      pDVar2 = FUN_1000d0fa();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000a3de;
    }
    *_Dst = L'\0';
  }
  pDVar2 = FUN_1000d0fa();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000a3de:
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _free @ 1000a42b */

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
    if (DAT_10022278 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000f449(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000adb9();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10020d58,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1000d0fa();
      DVar4 = GetLastError();
      DVar4 = FUN_1000d0bf(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: __security_check_cookie @ 1000a430 */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_1001ef38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/**************************************************/

/* Function: _JumpToContinuation @ 1000a43f */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000a468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/**************************************************/

/* Function: FID_conflict:_CallMemberFunction1 @ 1000a46f */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000a474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _UnwindNestedFrames @ 1000a476 */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000a49f,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/**************************************************/

/* Function: FID_conflict:___CxxFrameHandler3 @ 1000a4c8 */

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

/* Function: _CallSETranslator @ 1000a52e */

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
    *(undefined4 *)param_2 = 0x1000a5d7;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_1001ef38 ^ (uint)&local_2c;
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

/* Function: TranslatorGuardHandler @ 1000a603 */

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
                    /* WARNING: Could not recover jumptable at 0x1000a698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/**************************************************/

/* Function: _GetRangeOfTrysToCheck @ 1000a6a0 */

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

/* Function: __CreateFrameInfo @ 1000a713 */

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

/* Function: __IsExceptionObjectToBeDestroyed @ 1000a73b */

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

/* Function: __FindAndUnlinkFrame @ 1000a75c */

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

/* Function: _CallCatchBlock2 @ 1000a7a8 */

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
  
  local_14 = DAT_1001ef38 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1000a4fe;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/**************************************************/

/* Function: _memset @ 1000a810 */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10022294 != 0)) {
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

/* Function: bad_alloc @ 1000a88a */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_1001ef40,1);
  *(undefined ***)this = vftable;
  return this;
}



/**************************************************/

/* Function: FUN_1000a8ae @ 1000a8ae */

exception * __thiscall FUN_1000a8ae(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000a8e8 @ 1000a8e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000a8e8(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined **local_10 [3];
  
  do {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = __callnewh(param_1);
  } while (iVar1 != 0);
  if ((_DAT_1002063c & 1) == 0) {
    _DAT_1002063c = _DAT_1002063c | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_10020630);
    _atexit((_func_4879 *)&LAB_1001878a);
  }
  std::exception::exception((exception *)local_10,(exception *)&DAT_10020630);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_1001c194);
}



/**************************************************/

/* Function: _free @ 1000a952 */

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
    if (DAT_10022278 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000f449(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000adb9();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10020d58,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1000d0fa();
      DVar4 = GetLastError();
      DVar4 = FUN_1000d0bf(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: thunk_FUN_1000a8e8 @ 1000a957 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl thunk_FUN_1000a8e8(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined **appuStack_10 [3];
  
  do {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = __callnewh(param_1);
  } while (iVar1 != 0);
  if ((_DAT_1002063c & 1) == 0) {
    _DAT_1002063c = _DAT_1002063c | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_10020630);
    _atexit((_func_4879 *)&LAB_1001878a);
  }
  std::exception::exception((exception *)appuStack_10,(exception *)&DAT_10020630);
  appuStack_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_10,&DAT_1001c194);
}



/**************************************************/

/* Function: __CxxThrowException@8 @ 1000a95c */

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
  
  pDVar2 = &DAT_10019cb8;
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

/* Function: FUN_1000a9a6 @ 1000a9a6 */

int __cdecl FUN_1000a9a6(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_1000ca15(DAT_10022284);
  piVar2 = (int *)FUN_1000ca15(DAT_10022280);
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
        DAT_10022284 = FUN_1000c99e((int)pvVar5);
      }
      iVar6 = FUN_1000c99e(param_1);
      *piVar2 = iVar6;
      DAT_10022280 = FUN_1000c99e((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __onexit @ 1000aa8e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_1000e3a4();
  p_Var1 = (_onexit_t)FUN_1000a9a6((int)_Func);
  FUN_1000aac4();
  return p_Var1;
}



/**************************************************/

/* Function: FUN_1000aac4 @ 1000aac4 */

void FUN_1000aac4(void)

{
  FUN_1000e3ad();
  return;
}



/**************************************************/

/* Function: _atexit @ 1000aaca */

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

/* Function: _strcpy_s @ 1000aadc */

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
      pDVar2 = FUN_1000d0fa();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000aafb;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1000d0fa();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000aafb:
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _LocaleUpdate @ 1000ab41 */

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
    if ((*(undefined **)this != PTR_DAT_1001f7f0) && ((p_Var2->_ownlocale & DAT_1001f70c) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_1001f610) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_1001f70c) == 0)) {
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

/* Function: __wcsicmp_l @ 1000abc3 */

/* Library Function - Single Match
    __wcsicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wint_t wVar3;
  wint_t wVar4;
  DWORD *pDVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (wchar_t *)0x0) {
    pDVar5 = FUN_1000d0fa();
    *pDVar5 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar6 = 0x7fffffff;
  }
  else if (_Str2 == (wchar_t *)0x0) {
    pDVar5 = FUN_1000d0fa();
    *pDVar5 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __wcsicmp @ 1000acd2 */

/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (DAT_10020d34 == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      pDVar3 = FUN_1000d0fa();
      *pDVar3 = 0x16;
      FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: _free @ 1000ad63 */

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
    if (DAT_10022278 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000f449(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000adb9();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10020d58,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1000d0fa();
      DVar4 = GetLastError();
      DVar4 = FUN_1000d0bf(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1000adb9 @ 1000adb9 */

void FUN_1000adb9(void)

{
  FUN_1000f2d4(4);
  return;
}



/**************************************************/

/* Function: _V6_HeapAlloc @ 1000adf1 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_10022268) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1000ae37();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000ae37 @ 1000ae37 */

void FUN_1000ae37(void)

{
  FUN_1000f2d4(4);
  return;
}



/**************************************************/

/* Function: _malloc @ 1000ae40 */

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
    pDVar3 = FUN_1000d0fa();
    *pDVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_10020d58 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_1000c759(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_10022278 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_1000aeb1:
      piVar1 = HeapAlloc(DAT_10020d58,0,dwBytes);
    }
    else if ((DAT_10022278 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_1000aeb1;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_10020eb4 == 0) {
      pDVar3 = FUN_1000d0fa();
      *pDVar3 = 0xc;
      goto LAB_1000aedf;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_1000aedf:
      pDVar3 = FUN_1000d0fa();
      *pDVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: __except_handler4 @ 1000af10 */

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_1001ef38);
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
          goto LAB_1000afbb;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_1001a318 != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1001a318)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_1001a318)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_1001ef38);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_1001ef38);
  }
LAB_1000afbb:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/**************************************************/

/* Function: _memcpy @ 1000b0b0 */

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
          goto switchD_1000b293_caseD_2;
        case 3:
          goto switchD_1000b293_caseD_3;
        }
        goto switchD_1000b293_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000b293_caseD_0;
      case 1:
        goto switchD_1000b293_caseD_1;
      case 2:
        goto switchD_1000b293_caseD_2;
      case 3:
        goto switchD_1000b293_caseD_3;
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
              goto switchD_1000b293_caseD_2;
            case 3:
              goto switchD_1000b293_caseD_3;
            }
            goto switchD_1000b293_caseD_1;
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
              goto switchD_1000b293_caseD_2;
            case 3:
              goto switchD_1000b293_caseD_3;
            }
            goto switchD_1000b293_caseD_1;
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
              goto switchD_1000b293_caseD_2;
            case 3:
              goto switchD_1000b293_caseD_3;
            }
            goto switchD_1000b293_caseD_1;
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
switchD_1000b293_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1000b293_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1000b293_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1000b293_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10022294 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000b10c_caseD_2;
      case 3:
        goto switchD_1000b10c_caseD_3;
      }
      goto switchD_1000b10c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000b10c_caseD_0;
    case 1:
      goto switchD_1000b10c_caseD_1;
    case 2:
      goto switchD_1000b10c_caseD_2;
    case 3:
      goto switchD_1000b10c_caseD_3;
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
            goto switchD_1000b10c_caseD_2;
          case 3:
            goto switchD_1000b10c_caseD_3;
          }
          goto switchD_1000b10c_caseD_1;
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
            goto switchD_1000b10c_caseD_2;
          case 3:
            goto switchD_1000b10c_caseD_3;
          }
          goto switchD_1000b10c_caseD_1;
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
            goto switchD_1000b10c_caseD_2;
          case 3:
            goto switchD_1000b10c_caseD_3;
          }
          goto switchD_1000b10c_caseD_1;
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
switchD_1000b10c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000b10c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000b10c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000b10c_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __endthreadex @ 1000b415 */

/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 2005 Release */

void __cdecl __endthreadex(uint _Retval)

{
  BOOL BVar1;
  _ptiddata _Ptd;
  
  if (PTR_FUN_10019ce4 != (undefined *)0x0) {
    BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_10019ce4);
    if (BVar1 != 0) {
      (*(code *)PTR_FUN_10019ce4)();
    }
  }
  _Ptd = (_ptiddata)FUN_1000cbee();
  if (_Ptd != (_ptiddata)0x0) {
    __freeptd(_Ptd);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}



/**************************************************/

/* Function: __callthreadstartex @ 1000b44e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __callthreadstartex
   
   Library: Visual Studio 2005 Release */

void __callthreadstartex(void)

{
  _ptiddata p_Var1;
  uint _Retval;
  undefined4 *local_18;
  
  p_Var1 = __getptd();
  _Retval = (*p_Var1->_initaddr)(p_Var1->_initarg);
  __endthreadex(_Retval);
  FUN_100102d5(*(int *)*local_18,(DWORD)local_18);
  return;
}



/**************************************************/

/* Function: __beginthreadex @ 1000b50f */

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2005 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _StartAddress *p_Var1;
  DWORD *pDVar2;
  void *lpParameter;
  _ptiddata p_Var3;
  _StartAddress **lpThreadId;
  HANDLE pvVar4;
  DWORD local_8;
  
  p_Var1 = _StartAddress;
  local_8 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    pDVar2 = FUN_1000d0fa();
    *pDVar2 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    FUN_1000caa7();
    lpParameter = __calloc_crt(1,0x214);
    if (lpParameter != (void *)0x0) {
      p_Var3 = __getptd();
      FUN_1000cb2f((int)lpParameter,(int)p_Var3->ptlocinfo);
      *(undefined4 *)((int)lpParameter + 4) = 0xffffffff;
      *(void **)((int)lpParameter + 0x58) = _ArgList;
      *(_StartAddress **)((int)lpParameter + 0x54) = p_Var1;
      lpThreadId = (_StartAddress **)_ThrdAddr;
      if (_ThrdAddr == (uint *)0x0) {
        lpThreadId = &_StartAddress;
      }
      pvVar4 = CreateThread(_Security,_StackSize,(LPTHREAD_START_ROUTINE)&LAB_1000b48f,lpParameter,
                            _InitFlag,(LPDWORD)lpThreadId);
      if (pvVar4 != (HANDLE)0x0) {
        return (uintptr_t)pvVar4;
      }
      local_8 = GetLastError();
    }
    _free(lpParameter);
    if (local_8 != 0) {
      FUN_1000d120(local_8);
    }
  }
  return 0;
}



/**************************************************/

/* Function: __isleadbyte_l @ 1000b5bd */

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

/* Function: _isleadbyte @ 1000b5f3 */

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

/* Function: _iswalnum @ 1000b601 */

/* Library Function - Single Match
    _iswalnum
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswalnum(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  return iVar1;
}



/**************************************************/

/* Function: _wcscat_s @ 1000b612 */

/* Library Function - Single Match
    _wcscat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  DWORD *pDVar2;
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
        pDVar2 = FUN_1000d0fa();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_1000b631;
      }
    }
    *_Dst = L'\0';
  }
  pDVar2 = FUN_1000d0fa();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000b631:
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: __CRT_INIT@12 @ 1000b68c */

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
        _DAT_10020cdc = DVar2 * 0x100 + DVar3;
        DAT_10020cd4 = DVar1;
        _DAT_10020cd8 = uVar8;
        DAT_10020ce0 = DVar2;
        _DAT_10020ce4 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_10022298 = GetCommandLineA();
            DAT_10020644 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_10020640 = DAT_10020640 + 1;
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
    if (0 < DAT_10020640) {
      DAT_10020640 = DAT_10020640 + -1;
      if (DAT_10020d10 == 0) {
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
    FUN_1000caa7();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_1001f040;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_1000ca15(DAT_10020984);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_1000cb2f((int)_Memory,0);
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

/* Function: ___DllMainCRTStartup @ 1000b865 */

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
  if ((param_2 == 0) && (DAT_10020640 == 0)) {
LAB_1000b953:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_10019cd8 != (code *)0x0) {
        local_20 = (*DAT_10019cd8)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_1000b953;
    }
    local_20 = FUN_100038b0(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_100038b0(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (DAT_10019cd8 != (code *)0x0) {
        (*DAT_10019cd8)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_10019cd8 != (code *)0x0)) {
        local_20 = (*DAT_10019cd8)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/**************************************************/

/* Function: entry @ 1000b95b */

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/**************************************************/

/* Function: _memmove @ 1000b980 */

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
          goto switchD_1000bb63_caseD_2;
        case 3:
          goto switchD_1000bb63_caseD_3;
        }
        goto switchD_1000bb63_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000bb63_caseD_0;
      case 1:
        goto switchD_1000bb63_caseD_1;
      case 2:
        goto switchD_1000bb63_caseD_2;
      case 3:
        goto switchD_1000bb63_caseD_3;
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
              goto switchD_1000bb63_caseD_2;
            case 3:
              goto switchD_1000bb63_caseD_3;
            }
            goto switchD_1000bb63_caseD_1;
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
              goto switchD_1000bb63_caseD_2;
            case 3:
              goto switchD_1000bb63_caseD_3;
            }
            goto switchD_1000bb63_caseD_1;
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
              goto switchD_1000bb63_caseD_2;
            case 3:
              goto switchD_1000bb63_caseD_3;
            }
            goto switchD_1000bb63_caseD_1;
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
switchD_1000bb63_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1000bb63_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1000bb63_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1000bb63_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10022294 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000b9dc_caseD_2;
      case 3:
        goto switchD_1000b9dc_caseD_3;
      }
      goto switchD_1000b9dc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000b9dc_caseD_0;
    case 1:
      goto switchD_1000b9dc_caseD_1;
    case 2:
      goto switchD_1000b9dc_caseD_2;
    case 3:
      goto switchD_1000b9dc_caseD_3;
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
            goto switchD_1000b9dc_caseD_2;
          case 3:
            goto switchD_1000b9dc_caseD_3;
          }
          goto switchD_1000b9dc_caseD_1;
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
            goto switchD_1000b9dc_caseD_2;
          case 3:
            goto switchD_1000b9dc_caseD_3;
          }
          goto switchD_1000b9dc_caseD_1;
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
            goto switchD_1000b9dc_caseD_2;
          case 3:
            goto switchD_1000b9dc_caseD_3;
          }
          goto switchD_1000b9dc_caseD_1;
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
switchD_1000b9dc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000b9dc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000b9dc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000b9dc_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __vswprintf_helper @ 1000bce5 */

/* Library Function - Single Match
    __vswprintf_helper
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vswprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  FILE local_24;
  
  if (param_4 == 0) {
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if ((param_3 != 0) && (param_2 == (char *)0x0)) {
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  local_24._flag = 0x42;
  local_24._base = param_2;
  local_24._ptr = param_2;
  if (param_3 < 0x40000000) {
    local_24._cnt = param_3 * 2;
  }
  else {
    local_24._cnt = 0x7fffffff;
  }
  iVar2 = (*(code *)param_1)(&local_24,param_4,param_5,param_6);
  if (param_2 == (char *)0x0) {
    return iVar2;
  }
  if (-1 < iVar2) {
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      iVar3 = __flsbuf(0,&local_24);
      if (iVar3 == -1) goto LAB_1000bdc7;
    }
    else {
      *local_24._ptr = '\0';
      local_24._ptr = local_24._ptr + 1;
    }
    local_24._cnt = local_24._cnt + -1;
    if (-1 < local_24._cnt) {
      *local_24._ptr = '\0';
      return iVar2;
    }
    iVar3 = __flsbuf(0,&local_24);
    if (iVar3 != -1) {
      return iVar2;
    }
  }
LAB_1000bdc7:
  (param_2 + param_3 * 2 + -2)[0] = '\0';
  (param_2 + param_3 * 2 + -2)[1] = '\0';
  return (-1 < local_24._cnt) - 2;
}



/**************************************************/

/* Function: __vsnwprintf_s_l @ 1000bddb */

/* Library Function - Single Match
    __vsnwprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,wchar_t *_Format,
                _locale_t _Locale,va_list _ArgList)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (_Format == (wchar_t *)0x0) {
    pDVar2 = FUN_1000d0fa();
    *pDVar2 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (wchar_t *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_1000be25:
      if (_DstSize != 0) {
        pDVar2 = FUN_1000d0fa();
        if (_MaxCount < _DstSize) {
          DVar1 = *pDVar2;
          iVar3 = __vswprintf_helper(&DAT_10010f00,(char *)_DstBuf,_MaxCount + 1,(int)_Format,
                                     _Locale,_ArgList);
          if (iVar3 == -2) {
            pDVar2 = FUN_1000d0fa();
            if (*pDVar2 != 0x22) {
              return -1;
            }
            pDVar2 = FUN_1000d0fa();
            *pDVar2 = DVar1;
            return -1;
          }
LAB_1000beb6:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          DVar1 = *pDVar2;
          iVar3 = __vswprintf_helper(&DAT_10010f00,(char *)_DstBuf,_DstSize,(int)_Format,_Locale,
                                     _ArgList);
          _DstBuf[_DstSize - 1] = L'\0';
          if (iVar3 != -2) goto LAB_1000beb6;
          if (_MaxCount == 0xffffffff) {
            pDVar2 = FUN_1000d0fa();
            if (*pDVar2 != 0x22) {
              return -1;
            }
            pDVar2 = FUN_1000d0fa();
            *pDVar2 = DVar1;
            return -1;
          }
        }
        *_DstBuf = L'\0';
        if (iVar3 != -2) {
          return -1;
        }
        pDVar2 = FUN_1000d0fa();
        *pDVar2 = 0x22;
        goto LAB_1000becd;
      }
    }
  }
  else if (_DstBuf != (wchar_t *)0x0) goto LAB_1000be25;
  pDVar2 = FUN_1000d0fa();
  *pDVar2 = 0x16;
LAB_1000becd:
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: __vsnwprintf_s @ 1000bee2 */

/* Library Function - Single Match
    __vsnwprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,
              va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnwprintf_s_l(_DstBuf,_SizeInWords,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}



/**************************************************/

/* Function: _wcsrchr @ 1000bf00 */

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

/* Function: _realloc @ 1000bf30 */

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
  if (DAT_10022278 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000c109;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1000f449(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_10022268) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1000f449(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_10020d58,0,_NewSize);
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
      FUN_1000c074();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_10020d58,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10020eb4 == 0) {
        pDVar4 = FUN_1000d0fa();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1000c136;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1000d0fa();
    if (local_24 != (uint *)0x0) goto LAB_1000c115;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000c109;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_10020d58,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_10020eb4 == 0) {
        pDVar4 = FUN_1000d0fa();
LAB_1000c136:
        DVar5 = GetLastError();
        DVar5 = FUN_1000d0bf(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1000d0fa();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_1000d0bf(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_1000c109:
  __callnewh(_NewSize);
  pDVar4 = FUN_1000d0fa();
LAB_1000c115:
  *pDVar4 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1000c074 @ 1000c074 */

void FUN_1000c074(void)

{
  FUN_1000f2d4(4);
  return;
}



/**************************************************/

/* Function: _atol @ 1000c239 */

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

/* Function: FUN_1000c24a @ 1000c24a */

void FUN_1000c24a(void)

{
  return;
}



/**************************************************/

/* Function: __cfltcvt_init @ 1000c24b */

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_1001fd70 = __cfltcvt;
  PTR_LAB_1001fd74 = &LAB_1001277d;
  PTR_LAB_1001fd78 = &LAB_1001273b;
  PTR_LAB_1001fd7c = &LAB_1001276f;
  PTR_LAB_1001fd80 = &LAB_100126e5;
  PTR_LAB_1001fd84 = __cfltcvt;
  PTR_LAB_1001fd88 = __cfltcvt_l;
  PTR_LAB_1001fd8c = __fassign_l;
  PTR_LAB_1001fd90 = __cropzeros_l;
  PTR_LAB_1001fd94 = __forcdecpt_l;
  return;
}



/**************************************************/

/* Function: __fpmath @ 1000c2ab */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_10020658 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



/**************************************************/

/* Function: __alloca_probe @ 1000c2d0 */

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

/* Function: wcstoxl @ 1000c2fb */

/* Library Function - Single Match
    unsigned long __cdecl wcstoxl(struct localeinfo_struct *,wchar_t const *,wchar_t const *
   *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
wcstoxl(localeinfo_struct *param_1,wchar_t *param_2,wchar_t **param_3,int param_4,int param_5)

{
  wchar_t _C;
  wchar_t *pwVar1;
  DWORD *pDVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  ushort uVar8;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  uint local_c;
  ulong uVar9;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_1);
  if (param_3 != (wchar_t **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (wchar_t *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    pDVar2 = FUN_1000d0fa();
    *pDVar2 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  _C = *param_2;
  uVar9 = 0;
  pwVar1 = param_2;
  while( true ) {
    pwVar7 = pwVar1 + 1;
    iVar3 = __iswctype_l(_C,8,&local_1c);
    if (iVar3 == 0) break;
    _C = *pwVar7;
    pwVar1 = pwVar7;
  }
  if (_C == L'-') {
    param_5 = param_5 | 2;
LAB_1000c392:
    _C = *pwVar7;
    pwVar7 = pwVar1 + 2;
  }
  else if (_C == L'+') goto LAB_1000c392;
  uVar6 = (uint)(ushort)_C;
  if (param_4 == 0) {
    iVar3 = __wchartodigit(_C);
    if (iVar3 != 0) {
      param_4 = 10;
      goto LAB_1000c3f6;
    }
    if ((*pwVar7 != L'x') && (*pwVar7 != L'X')) {
      param_4 = 8;
      goto LAB_1000c3f6;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (iVar3 = __wchartodigit(_C), iVar3 == 0)) &&
     ((*pwVar7 == L'x' || (*pwVar7 == L'X')))) {
    uVar6 = (uint)(ushort)pwVar7[1];
    pwVar7 = pwVar7 + 2;
  }
LAB_1000c3f6:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  local_c = (uint)(0xffffffff % (ulonglong)(uint)param_4);
  do {
    uVar8 = (ushort)uVar6;
    uVar5 = __wchartodigit(uVar8);
    if (uVar5 == 0xffffffff) {
      if (((uVar8 < 0x41) || (0x5a < uVar8)) && (0x19 < (ushort)(uVar8 - 0x61))) {
LAB_1000c455:
        pwVar7 = pwVar7 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (wchar_t **)0x0) {
            pwVar7 = param_2;
          }
          uVar9 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < uVar9)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < uVar9)))))))) {
          pDVar2 = FUN_1000d0fa();
          *pDVar2 = 0x22;
          if ((param_5 & 1U) == 0) {
            uVar9 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            uVar9 = 0xffffffff;
          }
        }
        if (param_3 != (wchar_t **)0x0) {
          *param_3 = pwVar7;
        }
        if ((param_5 & 2U) != 0) {
          uVar9 = -uVar9;
        }
        if (local_10 != '\0') {
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
        }
        return uVar9;
      }
      if ((ushort)(uVar8 - 0x61) < 0x1a) {
        uVar6 = uVar6 - 0x20;
      }
      uVar5 = uVar6 - 0x37;
    }
    if ((uint)param_4 <= uVar5) goto LAB_1000c455;
    if ((uVar9 < uVar4) || ((uVar9 == uVar4 && (uVar5 <= local_c)))) {
      uVar9 = uVar9 * param_4 + uVar5;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (wchar_t **)0x0) goto LAB_1000c455;
    }
    uVar6 = (uint)(ushort)*pwVar7;
    pwVar7 = pwVar7 + 1;
  } while( true );
}



/**************************************************/

/* Function: _wcstol @ 1000c4f2 */

/* Library Function - Single Match
    _wcstol
   
   Library: Visual Studio 2005 Release */

long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10020d34 == 0) {
    ppuVar2 = &PTR_DAT_1001f7f8;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: _wcstoul @ 1000c51b */

/* Library Function - Single Match
    _wcstoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10020d34 == 0) {
    ppuVar2 = &PTR_DAT_1001f7f8;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}



/**************************************************/

/* Function: _Type_info_dtor @ 1000c545 */

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
  _Memory = DAT_10020660;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_1002065c;
    do {
      piVar2 = piVar1;
      if (DAT_10020660 == (int *)0x0) goto LAB_1000c589;
      piVar1 = DAT_10020660;
    } while (*DAT_10020660 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_10020660[1];
    _free(_Memory);
LAB_1000c589:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_1000c5ac();
  return;
}



/**************************************************/

/* Function: FUN_1000c5ac @ 1000c5ac */

void FUN_1000c5ac(void)

{
  FUN_1000f2d4(0xe);
  return;
}



/**************************************************/

/* Function: _strcmp @ 1000c5c0 */

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
      if (bVar4 != *_Str2) goto LAB_1000c604;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000c5d0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1000c604;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1000c604;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000c5d0:
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
LAB_1000c604:
  return (uint)bVar5 * -2 + 1;
}



/**************************************************/

/* Function: _abort @ 1000c648 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_1001ef80 & 1) != 0) {
    FUN_1000c759(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_1001ef80 & 2) != 0) {
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

/* Function: __set_abort_behavior @ 1000c73b */

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_1001ef80;
  DAT_1001ef80 = ~_Mask & DAT_1001ef80 | _Flags & _Mask;
  return uVar1;
}



/**************************************************/

/* Function: FUN_1000c759 @ 1000c759 */

void __cdecl FUN_1000c759(int param_1)

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
    if (param_1 == (&DAT_1001ef88)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_10020650 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1001ef8c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10020668,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10020785 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10020681,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10020681,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10020681);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10020681);
        _Dst = (char *)((int)&DAT_10020644 + sVar5 + 2);
        eVar3 = _strncpy_s(_Dst,(int)&DAT_1002097c - (int)_Dst,"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10020668,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10020668,0x314,*(char **)(uVar6 * 8 + 0x1001ef8c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_10013575(&DAT_10020668,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 1000c8f9 */

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
    if (DAT_10020650 != 1) {
      return;
    }
  }
  FUN_1000c759(0xfc);
  FUN_1000c759(0xff);
  return;
}



/**************************************************/

/* Function: FUN_1000c932 @ 1000c932 */

undefined4 FUN_1000c932(void)

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

/* Function: FUN_1000c99e @ 1000c99e */

int __cdecl FUN_1000c99e(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1001f044);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001f040 != -1)) {
    iVar3 = DAT_1001f040;
    pcVar2 = TlsGetValue(DAT_1001f044);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1000c9f8;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1000c932();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1000c9f8:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 1000ca0c */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_1000c99e(0);
  return;
}



/**************************************************/

/* Function: FUN_1000ca15 @ 1000ca15 */

int __cdecl FUN_1000ca15(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1001f044);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001f040 != -1)) {
    iVar3 = DAT_1001f040;
    pcVar2 = TlsGetValue(DAT_1001f044);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_1000ca6f;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1000c932();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_1000ca6f:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_1000ca8c @ 1000ca8c */

void FUN_1000ca8c(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = TlsGetValue(DAT_1001f044);
  (*pcVar1)(param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000caa1 @ 1000caa1 */

undefined4 FUN_1000caa1(void)

{
  return DAT_1001f040;
}



/**************************************************/

/* Function: FUN_1000caa7 @ 1000caa7 */

LPVOID FUN_1000caa7(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1001f044);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1000ca15(DAT_10020980);
    TlsSetValue(DAT_1001f044,lpTlsValue);
  }
  return lpTlsValue;
}



/**************************************************/

/* Function: FUN_1000cad9 @ 1000cad9 */

void FUN_1000cad9(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1000ca15(DAT_10020984);
  (*pcVar1)(param_1,param_2);
  return;
}



/**************************************************/

/* Function: __mtterm @ 1000caf2 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_1001f040 != -1) {
    iVar2 = DAT_1001f040;
    pcVar1 = (code *)FUN_1000ca15(DAT_10020988);
    (*pcVar1)(iVar2);
    DAT_1001f040 = -1;
  }
  if (DAT_1001f044 != 0xffffffff) {
    TlsFree(DAT_1001f044);
    DAT_1001f044 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: FUN_1000cb2f @ 1000cb2f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_1000cb2f(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_1001f928;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_1000c932();
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
  *(undefined **)(param_1 + 0x68) = &DAT_1001f1e8;
  InterlockedIncrement((LONG *)&DAT_1001f1e8);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_1001f7f0;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_1000cbe5();
  return;
}



/**************************************************/

/* Function: FUN_1000cbe5 @ 1000cbe5 */

void FUN_1000cbe5(void)

{
  FUN_1000f2d4(0xc);
  return;
}



/**************************************************/

/* Function: FUN_1000cbee @ 1000cbee */

DWORD * FUN_1000cbee(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_1001f040;
  pcVar1 = FUN_1000caa7();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_1001f040;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_1000ca15(DAT_10020984);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_1000cb2f((int)_Memory,0);
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

/* Function: __getptd @ 1000cc65 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_1000cbee();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: __freefls@4 @ 1000cc7d */

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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_1001f928) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_1001f1e8)) {
        _free(pLVar1);
      }
    }
    FUN_1000cd89();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_1001f7f0) && (pLVar1 != (LONG *)&DAT_1001f718)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_1000cd95();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000cd89 @ 1000cd89 */

void FUN_1000cd89(void)

{
  FUN_1000f2d4(0xd);
  return;
}



/**************************************************/

/* Function: FUN_1000cd95 @ 1000cd95 */

void FUN_1000cd95(void)

{
  FUN_1000f2d4(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 1000cd9e */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_1001f040 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1001f044), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_1001f040;
      pcVar2 = TlsGetValue(DAT_1001f044);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_1001f040;
    pcVar2 = (code *)FUN_1000ca15(DAT_10020984);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_1001f044 != 0xffffffff) {
    TlsSetValue(DAT_1001f044,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: __mtinit @ 1000ce07 */

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
  DAT_1002097c = GetProcAddress(hModule,"FlsAlloc");
  DAT_10020980 = GetProcAddress(hModule,"FlsGetValue");
  DAT_10020984 = GetProcAddress(hModule,"FlsSetValue");
  DAT_10020988 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_1002097c == (FARPROC)0x0) || (DAT_10020980 == (FARPROC)0x0)) ||
      (DAT_10020984 == (FARPROC)0x0)) || (DAT_10020988 == (FARPROC)0x0)) {
    DAT_10020980 = TlsGetValue_exref;
    DAT_1002097c = (FARPROC)&LAB_1000ca83;
    DAT_10020984 = TlsSetValue_exref;
    DAT_10020988 = TlsFree_exref;
  }
  DAT_1001f044 = TlsAlloc();
  if ((DAT_1001f044 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_1001f044,DAT_10020980), BVar1 != 0))
  {
    __init_pointers();
    DAT_1002097c = (FARPROC)FUN_1000c99e((int)DAT_1002097c);
    DAT_10020980 = (FARPROC)FUN_1000c99e((int)DAT_10020980);
    DAT_10020984 = (FARPROC)FUN_1000c99e((int)DAT_10020984);
    DAT_10020988 = (FARPROC)FUN_1000c99e((int)DAT_10020988);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_1000ca15((int)DAT_1002097c);
      DAT_1001f040 = (*pcVar3)(pcVar6);
      if ((DAT_1001f040 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_1001f040;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_1000ca15((int)DAT_10020984);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_1000cb2f((int)pDVar4,0);
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

/* Function: FUN_1000cf8b @ 1000cf8b */

void __cdecl FUN_1000cf8b(undefined4 param_1)

{
  DAT_10020994 = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1000cf95 @ 1000cf95 */

void __cdecl FUN_1000cf95(undefined4 param_1)

{
  DAT_10020998 = param_1;
  return;
}



/**************************************************/

/* Function: __invoke_watson @ 1000cf9f */

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
  
  iVar1 = DAT_1001ef38;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1001392f();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/**************************************************/

/* Function: FUN_1000d09b @ 1000d09b */

void __cdecl
FUN_1000d09b(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_1000ca15(DAT_10020998);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000d0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1001392f();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/**************************************************/

/* Function: FUN_1000d0bf @ 1000d0bf */

int __cdecl FUN_1000d0bf(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1001f048)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1001f04c);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_1000d0fa @ 1000d0fa */

DWORD * FUN_1000d0fa(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000cbee();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1001f1b0;
  }
  return pDVar1 + 2;
}



/**************************************************/

/* Function: FUN_1000d10d @ 1000d10d */

DWORD * FUN_1000d10d(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000cbee();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1001f1b4;
  }
  return pDVar1 + 3;
}



/**************************************************/

/* Function: FUN_1000d120 @ 1000d120 */

void __cdecl FUN_1000d120(DWORD param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  pDVar1 = FUN_1000d10d();
  *pDVar1 = param_1;
  DVar2 = FUN_1000d0bf(param_1);
  pDVar1 = FUN_1000d0fa();
  *pDVar1 = DVar2;
  return;
}



/**************************************************/

/* Function: ___report_gsfailure @ 1000d13e */

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
  
  _DAT_10020ab8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10020abc = &stack0x00000004;
  _DAT_100209f8 = 0x10001;
  _DAT_100209a0 = 0xc0000409;
  _DAT_100209a4 = 1;
  local_32c = DAT_1001ef38;
  local_328 = DAT_1001ef3c;
  _DAT_100209ac = unaff_retaddr;
  _DAT_10020a84 = in_GS;
  _DAT_10020a88 = in_FS;
  _DAT_10020a8c = in_ES;
  _DAT_10020a90 = in_DS;
  _DAT_10020a94 = unaff_EDI;
  _DAT_10020a98 = unaff_ESI;
  _DAT_10020a9c = unaff_EBX;
  _DAT_10020aa0 = in_EDX;
  _DAT_10020aa4 = in_ECX;
  _DAT_10020aa8 = in_EAX;
  _DAT_10020aac = unaff_EBP;
  DAT_10020ab0 = unaff_retaddr;
  _DAT_10020ab4 = in_CS;
  _DAT_10020ac0 = in_SS;
  DAT_100209f0 = IsDebuggerPresent();
  FUN_1001392f();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1001a310);
  if (DAT_100209f0 == 0) {
    FUN_1001392f();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: FUN_1000d24d @ 1000d24d */

exception * __thiscall FUN_1000d24d(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: ___TypeMatch @ 1000d26f */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1000d2c5:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1000d2a3:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1000d2c5;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1000d2a3;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: ___FrameUnwindToState @ 1000d30f */

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
  FUN_1000d3d5();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/**************************************************/

/* Function: FUN_1000d3d5 @ 1000d3d5 */

void FUN_1000d3d5(void)

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

/* Function: ___DestructExceptionObject @ 1000d435 */

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

/* Function: ___AdjustPointer @ 1000d489 */

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

/* Function: IsInExceptionSpec @ 1000d4ae */

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

/* Function: CallUnexpected @ 1000d527 */

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

/* Function: Catch_All@1000d558 @ 1000d558 */

void Catch_All_1000d558(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: CallCatchBlock @ 1000d570 */

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
  
  local_8 = &DAT_1001c3d0;
  uStack_c = 0x1000d57c;
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
  FUN_1000d696();
  return local_20;
}



/**************************************************/

/* Function: FUN_1000d696 @ 1000d696 */

void FUN_1000d696(void)

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

/* Function: ___BuildCatchObjectHelper @ 1000d70c */

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
        goto LAB_1000d791;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_1000d791:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/**************************************************/

/* Function: ___BuildCatchObject @ 1000d88b */

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

/* Function: CatchIt @ 1000d91c */

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

/* Function: FindHandlerForForeignException @ 1000d988 */

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

/* Function: FindHandler @ 1000da7a */

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
                param_1 = (EHExceptionRecord *)s_bad_exception_1001a328;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_1001c434);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_1000dbb8;
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
                  goto LAB_1000dce2;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_1000dce2:
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
         uVar3 != '\0')) goto LAB_1000ddb8;
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
LAB_1000dbb8:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_1000ddb8:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/**************************************************/

/* Function: ___InternalCxxFrameHandler @ 1000dde8 */

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

/* Function: terminate @ 1000decc */

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

/* Function: unexpected @ 1000df05 */

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

/* Function: _inconsistency @ 1000df18 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1000ca15(DAT_10020cc4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/**************************************************/

/* Function: __initp_eh_hooks @ 1000df4f */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_10020cc4 = FUN_1000c99e(0x1000decc);
  return;
}



/**************************************************/

/* Function: __CallSettingFrame@12 @ 1000df60 */

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

/* Function: fastzero_I @ 1000dfac */

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

/* Function: __VEC_memzero @ 1000e003 */

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

/* Function: exception @ 1000e0a6 */

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

/* Function: exception @ 1000e0f4 */

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

/* Function: exception @ 1000e10c */

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

/* Function: ~exception @ 1000e164 */

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

/* Function: FUN_1000e17a @ 1000e17a */

char * __fastcall FUN_1000e17a(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/**************************************************/

/* Function: FUN_1000e187 @ 1000e187 */

exception * __thiscall FUN_1000e187(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000e1a3 @ 1000e1a3 */

void __cdecl FUN_1000e1a3(undefined4 param_1)

{
  DAT_10020cc8 = param_1;
  return;
}



/**************************************************/

/* Function: __callnewh @ 1000e1ad */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_1000ca15(DAT_10020cc8);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __malloc_crt @ 1000e1cf */

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
    if (DAT_10020ccc == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10020ccc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __calloc_crt @ 1000e20f */

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
    if (DAT_10020ccc == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10020ccc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __realloc_crt @ 1000e257 */

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
    if (DAT_10020ccc == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10020ccc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/**************************************************/

/* Function: __msize @ 1000e2a2 */

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
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_10022278 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_1000f449(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_1000e33c();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_10020d58,0,_Memory);
  }
  return sVar2;
}



/**************************************************/

/* Function: FUN_1000e33c @ 1000e33c */

void FUN_1000e33c(void)

{
  FUN_1000f2d4(4);
  return;
}



/**************************************************/

/* Function: __amsg_exit @ 1000e345 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_1000c759(param_1);
  pcVar1 = (code *)FUN_1000ca15((int)PTR___exit_1001f1e4);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: FUN_1000e369 @ 1000e369 */

void __cdecl FUN_1000e369(undefined4 param_1)

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

/* Function: ___crtExitProcess @ 1000e38f */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_1000e369(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: FUN_1000e3a4 @ 1000e3a4 */

void FUN_1000e3a4(void)

{
  __lock(8);
  return;
}



/**************************************************/

/* Function: FUN_1000e3ad @ 1000e3ad */

void FUN_1000e3ad(void)

{
  FUN_1000f2d4(8);
  return;
}



/**************************************************/

/* Function: FUN_1000e3b6 @ 1000e3b6 */

void __cdecl FUN_1000e3b6(undefined4 *param_1)

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

/* Function: __initterm_e @ 1000e3ce */

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

/* Function: __get_osplatform @ 1000e3ee */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_10020cd4 != 0)) {
    *param_1 = DAT_10020cd4;
    return 0;
  }
  pDVar1 = FUN_1000d0fa();
  *pDVar1 = 0x16;
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __get_winmajor @ 1000e425 */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_10020cd4 != 0)) {
    *param_1 = DAT_10020ce0;
    return 0;
  }
  pDVar1 = FUN_1000d0fa();
  *pDVar1 = 0x16;
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __cinit @ 1000e461 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_10019cdc != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_10019cdc), BVar1 != 0)) {
    (*(code *)PTR___fpmath_10019cdc)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_100191e4,(undefined4 *)&DAT_100191fc);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_10010c4f);
    puVar3 = &DAT_100191d4;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_100191e0);
    if ((DAT_1002228c != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1002228c), BVar1 != 0)) {
      (*DAT_1002228c)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000e4f3 @ 1000e4f3 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1000e5c6) */

void __cdecl FUN_1000e4f3(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10020d14 != 1) {
    DAT_10020d10 = 1;
    DAT_10020d0c = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_1000ca15(DAT_10022284);
      piVar3 = (int *)FUN_1000ca15(DAT_10022280);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_1000ca15(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_1000e3b6((undefined4 *)&DAT_1001920c);
    }
    FUN_1000e3b6((undefined4 *)&DAT_10019214);
  }
  FUN_1000e5c0();
  if (param_3 != 0) {
    return;
  }
  DAT_10020d14 = 1;
  FUN_1000f2d4(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000e5c0 @ 1000e5c0 */

void FUN_1000e5c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_1000f2d4(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 1000e5d5 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000e4f3(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 1000e5e6 */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1000e4f3(0,0,1);
  return;
}



/**************************************************/

/* Function: __init_pointers @ 1000e5f5 */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1000e1a3(uVar1);
  FUN_10013c98(uVar1);
  FUN_1000cf95(uVar1);
  FUN_1000cf8b(uVar1);
  FUN_10013c8e(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_1000c24a();
  __initp_eh_hooks();
  PTR___exit_1001f1e4 = (undefined *)FUN_1000c99e(0x1000e5d5);
  return;
}



/**************************************************/

/* Function: __SEH_prolog4 @ 1000e644 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001ef38 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 1000e689 */

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

/* Function: FUN_1000e69d @ 1000e69d */

undefined4 FUN_1000e69d(void)

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

/* Function: setSBCS @ 1000e6cc */

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
    *puVar1 = puVar1[(int)&DAT_1001f1e8 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_1001f1e8 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: setSBUpLow @ 1000e721 */

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
  
  local_8 = DAT_1001ef38 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_1000e888:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_1000e888;
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
          goto LAB_1000e82f;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_1000e82f:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 1000e8ab */

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
  if (((p_Var1->_ownlocale & DAT_1001f70c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_1001f610) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_1001f1e8)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_1001f610;
      lpAddend = (pthreadmbcinfo)PTR_DAT_1001f610;
      InterlockedIncrement((LONG *)PTR_DAT_1001f610);
    }
    FUN_1000e946();
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

/* Function: FUN_1000e946 @ 1000e946 */

void FUN_1000e946(void)

{
  FUN_1000f2d4(0xd);
  return;
}



/**************************************************/

/* Function: getSystemCP @ 1000e94f */

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
  DAT_10020d18 = 0;
  if (unaff_ESI == -2) {
    DAT_10020d18 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10020d18 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_10020d18 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_10020d18 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: FUN_1000e9c9 @ 1000e9c9 */

void __cdecl FUN_1000e9c9(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_1000ea05:
    if (*(uint *)((int)&DAT_1001f618 + uVar5) != uVar4) goto code_r0x1000ea11;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_1001f628 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1001f614);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_1000e69d();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1001f61c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_1000eb36;
  }
LAB_1000e9f2:
  setSBCS(unaff_EDI);
LAB_1000eb93:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x1000ea11:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x1000ea1e;
  goto LAB_1000ea05;
code_r0x1000ea1e:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_1000eb93;
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
      uVar9 = FUN_1000e69d();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1000eb36:
    setSBUpLow(unaff_EDI);
    goto LAB_1000eb93;
  }
  if (DAT_10020d18 == 0) goto LAB_1000eb93;
  goto LAB_1000e9f2;
}



/**************************************************/

/* Function: __setmbcp @ 1000eba2 */

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
      local_24 = FUN_1000e9c9(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_1001f1e8)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_1001f70c & 1) == 0)) {
          __lock(0xd);
          _DAT_10020d28 = ptVar3->mbcodepage;
          _DAT_10020d2c = ptVar3->ismbcodepage;
          _DAT_10020d30 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10020d1c)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_1001f408)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_1001f510)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_1001f610);
          if ((LVar4 == 0) && (PTR_DAT_1001f610 != &DAT_1001f1e8)) {
            _free(PTR_DAT_1001f610);
          }
          PTR_DAT_1001f610 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_1000ed03();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_1001f1e8) {
          _free(ptVar3);
        }
        pDVar5 = FUN_1000d0fa();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_1000ed03 @ 1000ed03 */

void FUN_1000ed03(void)

{
  FUN_1000f2d4(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 1000ed3c */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_10022288 == 0) {
    __setmbcp(-3);
    DAT_10022288 = 1;
  }
  return 0;
}



/**************************************************/

/* Function: ___freetlocinfo @ 1000ed5a */

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_1001fe78)) &&
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
  if ((ppuVar2 != &PTR_DAT_1001fdb8) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1001f710) &&
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

/* Function: ___addlocaleref @ 1000ee9a */

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
    if (((undefined *)pLVar1[-2] != &DAT_1001f710) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: ___removelocaleref @ 1000ef20 */

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
      if (((undefined *)pLVar1[-2] != &DAT_1001f710) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: __updatetlocinfoEx_nolock @ 1000efac */

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
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_1001f718)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 1000efea */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1001f70c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1000f054();
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

/* Function: FUN_1000f054 @ 1000f054 */

void FUN_1000f054(void)

{
  FUN_1000f2d4(0xc);
  return;
}



/**************************************************/

/* Function: __towlower_l @ 1000f060 */

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

/* Function: ___heap_select @ 1000f10d */

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

/* Function: __heap_init @ 1000f168 */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_10020d58 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_10020d58 == (HANDLE)0x0) {
    return 0;
  }
  DAT_10022278 = ___heap_select();
  if ((DAT_10022278 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_10020d58);
    DAT_10020d58 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 1000f1c2 */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10022278 == 3) {
    iVar2 = 0;
    if (0 < DAT_10022260) {
      puVar1 = (undefined4 *)((int)DAT_10022264 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_10020d58,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10022260);
    }
    HeapFree(DAT_10020d58,0,DAT_10022264);
  }
  HeapDestroy(DAT_10020d58);
  DAT_10020d58 = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: __mtinitlocks @ 1000f236 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10020d60;
  do {
    if ((&DAT_1001f80c)[iVar2 * 2] == 1) {
      (&DAT_1001f808)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_1001f808)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_1001f808)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 1000f27f */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_1001f808;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1001f928);
  puVar1 = &DAT_1001f808;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1001f928);
  return;
}



/**************************************************/

/* Function: FUN_1000f2d4 @ 1000f2d4 */

void __cdecl FUN_1000f2d4(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1001f808)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 1000f2e9 */

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
  if (DAT_10020d58 == 0) {
    __FF_MSGBANNER();
    FUN_1000c759(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_1001f808 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_1000d0fa();
      *pDVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_1000d0fa();
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
      FUN_1000f3a3();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_1000f3a3 @ 1000f3a3 */

void FUN_1000f3a3(void)

{
  FUN_1000f2d4(10);
  return;
}



/**************************************************/

/* Function: __lock @ 1000f3ac */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_1001f808)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1001f808)[_File * 2]);
  return;
}



/**************************************************/

/* Function: ___sbh_heap_init @ 1000f3dd */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_10022264 = HeapAlloc(DAT_10020d58,0,0x140);
  if (DAT_10022264 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10020eb0 = 0;
  DAT_10022260 = 0;
  DAT_1002226c = DAT_10022264;
  DAT_10022268 = param_1;
  DAT_10022270 = 0x10;
  return 1;
}



/**************************************************/

/* Function: thunk_FUN_1000f449 @ 1000f425 */

void __thiscall thunk_FUN_1000f449(void *this,int param_1)

{
  FUN_1000f449((void *)(DAT_10022260 * 0x14 + DAT_10022264),param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000f449 @ 1000f449 */

void __thiscall FUN_1000f449(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/**************************************************/

/* Function: ___sbh_free_block @ 1000f450 */

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
      if (DAT_10020eb0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10022274 * 0x8000 + DAT_10020eb0[3]),0x8000,0x4000);
        DAT_10020eb0[2] = DAT_10020eb0[2] | 0x80000000U >> ((byte)DAT_10022274 & 0x1f);
        *(undefined4 *)(DAT_10020eb0[4] + 0xc4 + DAT_10022274 * 4) = 0;
        *(char *)(DAT_10020eb0[4] + 0x43) = *(char *)(DAT_10020eb0[4] + 0x43) + -1;
        if (*(char *)(DAT_10020eb0[4] + 0x43) == '\0') {
          DAT_10020eb0[1] = DAT_10020eb0[1] & 0xfffffffe;
        }
        if (DAT_10020eb0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10020eb0[3],0,0x8000);
          HeapFree(DAT_10020d58,0,(LPVOID)DAT_10020eb0[4]);
          _memmove(DAT_10020eb0,DAT_10020eb0 + 5,
                   (DAT_10022260 * 0x14 - (int)DAT_10020eb0) + -0x14 + DAT_10022264);
          DAT_10022260 = DAT_10022260 + -1;
          if (DAT_10020eb0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1002226c = DAT_10022264;
        }
      }
      DAT_10020eb0 = param_1;
      DAT_10022274 = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 1000f764 */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10022260 == DAT_10022270) {
    pvVar1 = HeapReAlloc(DAT_10020d58,0,DAT_10022264,(DAT_10022270 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10022270 = DAT_10022270 + 0x10;
    DAT_10022264 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10022260 * 0x14 + (int)DAT_10022264);
  pvVar1 = HeapAlloc(DAT_10020d58,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10022260 = DAT_10022260 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_10020d58,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 1000f814 */

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

/* Function: ___sbh_resize_block @ 1000f91a */

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

/* Function: ___sbh_alloc_block @ 1000fbf9 */

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
  
  puVar9 = DAT_10022264 + DAT_10022260 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_1002226c;
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
  puVar13 = DAT_10022264;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_1002226c && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_1002226c) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_10022264;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_1002226c && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_1002226c) &&
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
  DAT_1002226c = param_1;
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
    if (iVar10 == 0) goto LAB_1000fe99;
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
LAB_1000fe99:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_10020eb0)) && (local_8 == DAT_10022274)) {
    DAT_10020eb0 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/**************************************************/

/* Function: __local_unwind4 @ 1000fedc */

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
  puStack_24 = &LAB_1000ff6c;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1001ef38 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_10013ab0();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_1000ffb2 @ 1000ffb2 */

void FUN_1000ffb2(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 1000ffce */

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

/* Function: _EH4_TransferToHandler @ 1000ffe5 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1000fffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 1000fffe */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10010013,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 10010018 */

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

/* Function: __ValidateImageBase @ 10010030 */

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

/* Function: __FindPESection @ 10010060 */

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

/* Function: __IsNonwritableInCurrentImage @ 100100b0 */

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
  local_c = DAT_1001ef38 ^ 0x1001c570;
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

/* Function: FUN_1001016b @ 1001016b */

void __cdecl FUN_1001016b(undefined4 *param_1,undefined4 *param_2,uint param_3)

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

/* Function: __VEC_memcpy @ 100101f2 */

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
      FUN_1001016b(param_1,param_2,param_3 - uVar3);
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

/* Function: FUN_100102d5 @ 100102d5 */

undefined4 __cdecl FUN_100102d5(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_1000cbee();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_1001f9ac * 3);
    if ((piVar1 + DAT_1001f9ac * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_1001f9a0 < DAT_1001f9a4 + DAT_1001f9a0) {
            iVar8 = DAT_1001f9a0 * 0xc;
            iVar9 = DAT_1001f9a0;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_1001f9a4 + DAT_1001f9a0);
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

/* Function: __iswctype_l @ 1001044e */

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
    local_8[0] = *(ushort *)(PTR_DAT_1001fdb4 + (uint)_C * 2) & _Type;
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

/* Function: _iswctype @ 100104d0 */

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_1001fdb4 + (uint)_C * 2) & _Type);
  }
  if (DAT_10020d34 == 0) {
    ___crtGetStringTypeW
              ((localeinfo_struct *)&PTR_DAT_1001f7f8,1,(wchar_t *)&_C,1,local_8,DAT_1001f71c,
               DAT_1001f72c);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __ioinit @ 1001053e */

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
  
  uStack_c = 0x1001054a;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10010775:
    iVar7 = -1;
  }
  else {
    DAT_10022144 = 0x20;
    DAT_10022160 = puVar2;
    for (; puVar2 < DAT_10022160 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_10022144 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_10022144, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_10022160)[iVar7] = puVar2;
        DAT_10022144 = DAT_10022144 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_10022160)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_10022160)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_10010775;
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
      piVar8 = DAT_10022160 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_10010775;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_10022144);
    iVar7 = 0;
  }
  return iVar7;
}



/**************************************************/

/* Function: __ioterm @ 1001077e */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_10022160;
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
  } while ((int)puVar2 < 0x10022260);
  return;
}



/**************************************************/

/* Function: __setenvp @ 100107ca */

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
  
  if (DAT_10022288 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_10020644;
  if (DAT_10020644 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_10020644;
    DAT_10020cf4 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_10020644);
          DAT_10020644 = (char *)0x0;
          *puVar1 = 0;
          _DAT_1002227c = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10020cf4);
            DAT_10020cf4 = (undefined4 *)0x0;
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

/* Function: parse_cmdline @ 100108a5 */

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
        goto LAB_10010937;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_10010937:
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

/* Function: __setargv @ 10010a3d */

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
  
  if (DAT_10022288 == 0) {
    ___initmbctable();
  }
  DAT_10020fbc = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10020eb8,0x104);
  _DAT_10020d04 = &DAT_10020eb8;
  if ((DAT_10022298 == (char *)0x0) || (local_8 = DAT_10022298, *DAT_10022298 == '\0')) {
    local_8 = &DAT_10020eb8;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_10020ce8 = local_c - 1;
      _DAT_10020cec = puVar2;
      return 0;
    }
  }
  return -1;
}



/**************************************************/

/* Function: ___crtGetEnvironmentStringsA @ 10010af6 */

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
  if (DAT_10020fc0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10020fc0 = 1;
      goto LAB_10010b48;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10020fc0 = 2;
    }
  }
  if (DAT_10020fc0 != 1) {
    if ((DAT_10020fc0 != 2) && (DAT_10020fc0 != 0)) {
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
LAB_10010b48:
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

/* Function: __RTC_Initialize @ 10010c2b */

/* WARNING: Removing unreachable block (ram,0x10010c3d) */
/* WARNING: Removing unreachable block (ram,0x10010c43) */
/* WARNING: Removing unreachable block (ram,0x10010c45) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/**************************************************/

/* Function: ___security_init_cookie @ 10010c73 */

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
  if ((DAT_1001ef38 == 0xbb40e64e) || ((DAT_1001ef38 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1001ef38 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1001ef38 == 0xbb40e64e) {
      DAT_1001ef38 = 0xbb40e64f;
    }
    else if ((DAT_1001ef38 & 0xffff0000) == 0) {
      DAT_1001ef38 = DAT_1001ef38 | DAT_1001ef38 << 0x10;
    }
  }
  DAT_1001ef3c = ~DAT_1001ef38;
  return;
}



/**************************************************/

/* Function: __flsbuf @ 10010d07 */

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
    pDVar2 = FUN_1000d0fa();
    *pDVar2 = 9;
LAB_10010d2b:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    pDVar2 = FUN_1000d0fa();
    *pDVar2 = 0x22;
    goto LAB_10010d2b;
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
     (((ppuVar3 = FUN_10011849(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_10011849(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
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
        puVar5 = &DAT_1001f9b0;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x38 + (&DAT_10022160)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_10010e51;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_10010e51:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/**************************************************/

/* Function: write_char @ 10010e67 */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(wchar_t param_1)

{
  wint_t wVar1;
  FILE *in_EAX;
  int *unaff_ESI;
  
  if (((in_EAX->_flag & 0x40) == 0) || (in_EAX->_base != (char *)0x0)) {
    wVar1 = __fputwc_nolock(param_1,in_EAX);
    if (wVar1 == 0xffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}



/**************************************************/

/* Function: write_multi_char @ 10010e8c */

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl write_multi_char(wchar_t param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char(param_1);
  } while (*in_EAX != -1);
  return;
}



/**************************************************/

/* Function: __fileno @ 1001181c */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  DWORD *pDVar1;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  return _File->_file;
}



/**************************************************/

/* Function: FUN_10011849 @ 10011849 */

undefined ** FUN_10011849(void)

{
  return &PTR_DAT_1001fae8;
}



/**************************************************/

/* Function: __write_nolock @ 10011cfe */

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
  
  local_8 = DAT_1001ef38 ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_100122ae;
  if (_Buf == (void *)0x0) {
    pDVar6 = FUN_1000d10d();
    *pDVar6 = 0;
    pDVar6 = FUN_1000d0fa();
    *pDVar6 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_100122ae;
  }
  iVar11 = (_FileHandle & 0x1fU) * 0x38;
  piVar16 = &DAT_10022160 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar16 + iVar11 + 0x24) * '\x02') >> 1;
  local_58c = piVar16;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    pDVar6 = FUN_1000d10d();
    *pDVar6 = 0;
    pDVar6 = FUN_1000d0fa();
    *pDVar6 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_100122ae;
  }
  if ((*(byte *)(*piVar16 + iVar11 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar16) & 0x80) == 0)) {
LAB_10011fe9:
    if ((*(byte *)((undefined4 *)(*piVar16 + iVar11) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar16 + iVar11),local_580,_MaxCharCount,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_10012243:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_1001224c:
      piVar16 = local_58c;
      if (local_57c != (char *)0x0) goto LAB_100122ae;
      goto LAB_10012256;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_1001227d;
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
        if (BVar9 == 0) goto LAB_10012243;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_1001224c;
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
          if (BVar9 == 0) goto LAB_10012243;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_1001224c;
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
          if (iVar7 == 0) goto LAB_10012243;
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
        goto LAB_1001224c;
      }
    }
LAB_1001227d:
    DVar10 = 0;
    if (((*(byte *)(iVar11 + 4 + *piVar16) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_100122ae;
    pDVar6 = FUN_1000d0fa();
    *pDVar6 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar16),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_10011fe9;
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
          if (BVar9 == 0) goto LAB_10012243;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)DVar10) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_10012243;
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
            if (wVar5 != (wchar_t)local_570) goto LAB_10012243;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_10012243;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_1001224c;
    }
LAB_10012256:
    if (local_570 == 0) goto LAB_1001227d;
    DVar10 = 5;
    if (local_570 != 5) {
      FUN_1000d120(local_570);
      goto LAB_100122ae;
    }
    pDVar6 = FUN_1000d0fa();
    *pDVar6 = 9;
  }
  pDVar6 = FUN_1000d10d();
  *pDVar6 = DVar10;
LAB_100122ae:
  iVar11 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar11;
}



/**************************************************/

/* Function: __write @ 100122c4 */

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
    pDVar1 = FUN_1000d10d();
    *pDVar1 = 0;
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10022144)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_10022160)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10022160)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1000d0fa();
          *pDVar1 = 9;
          pDVar1 = FUN_1000d10d();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_10012396();
        return local_20;
      }
    }
    pDVar1 = FUN_1000d10d();
    *pDVar1 = 0;
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 9;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10012396 @ 10012396 */

void FUN_10012396(void)

{
  int unaff_EBP;
  
  FUN_10015376(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: strtoxl @ 100123a0 */

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
    pDVar3 = FUN_1000d0fa();
    *pDVar3 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_10012457:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_10012457;
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
      goto LAB_100124bd;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_100124bd;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_100124bd;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_100124bd:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_10012517:
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
          pDVar3 = FUN_1000d0fa();
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
    if ((uint)param_4 <= uVar6) goto LAB_10012517;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_10012517;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: _strtol @ 100125cb */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10020d34 == 0) {
    ppuVar2 = &PTR_DAT_1001f7f8;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: __forcdecpt_l @ 100125f4 */

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

/* Function: __cropzeros_l @ 10012665 */

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

/* Function: __fassign_l @ 100126fb */

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

/* Function: __shift @ 10012752 */

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

/* Function: __cftoe2_l @ 1001278b */

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
    pDVar1 = FUN_1000d0fa();
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
      if (((DAT_10021050 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return (DWORD)pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return (DWORD)pcVar9;
    }
    pDVar1 = FUN_1000d0fa();
    DVar7 = 0x22;
  }
  DVar8 = 0;
  *pDVar1 = DVar7;
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return DVar8;
}



/**************************************************/

/* Function: __cftoe_l @ 100128f8 */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftoe @ 100129c6 */

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

/* Function: __cftoa_l @ 100129e4 */

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
    pDVar2 = FUN_1000d0fa();
    DVar14 = 0x16;
LAB_10012a1d:
    DVar15 = 0;
    *pDVar2 = DVar14;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return DVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    pDVar2 = FUN_1000d0fa();
    DVar14 = 0x22;
    goto LAB_10012a1d;
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
    goto LAB_10012d41;
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
LAB_10012cf0:
    if ((-1 < (int)uVar6) && ((0 < (int)uVar6 || (99 < uVar7)))) goto LAB_10012cfb;
  }
  else {
    uVar13 = __alldvrm(uVar7,uVar6,1000,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar9 = (char)uVar13 + '0';
    pcVar10 = pcVar4 + 3;
    uVar6 = 0;
    uVar7 = extraout_ECX;
    if (pcVar10 == pcVar9) goto LAB_10012cf0;
LAB_10012cfb:
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
LAB_10012d41:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}



/**************************************************/

/* Function: __cftof2_l @ 10012d55 */

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
    pDVar2 = FUN_1000d0fa();
    uVar4 = 0x16;
    *pDVar2 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftof_l @ 10012e4a */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftog_l @ 10012f03 */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_1000d0fa();
    *pDVar2 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cfltcvt_l @ 10012ffb */

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

/* Function: __cfltcvt @ 10013081 */

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

/* Function: __initp_misc_cfltcvt_tab @ 100130a2 */

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
    piVar1 = (int *)((int)&PTR_LAB_1001fd70 + uVar3);
    iVar2 = FUN_1000c99e(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: __setdefaultprecision @ 100130c1 */

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

/* Function: __ms_p5_test_fdiv @ 100130ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_1001a518 - (_DAT_1001a518 / _DAT_1001a520) * _DAT_1001a520) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: __ms_p5_mp_test_fdiv @ 10013126 */

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

/* Function: __wchartodigit @ 1001314f */

/* Library Function - Single Match
    __wchartodigit
   
   Library: Visual Studio 2005 Release */

int __cdecl __wchartodigit(ushort param_1)

{
  int iVar1;
  bool bVar2;
  
  if (0x2f < param_1) {
    if (param_1 < 0x3a) {
      return param_1 - 0x30;
    }
    iVar1 = 0xff10;
    if (param_1 < 0xff10) {
      iVar1 = 0x660;
      if (param_1 < 0x660) {
        return -1;
      }
      if (param_1 < 0x66a) goto LAB_1001318d;
      iVar1 = 0x6f0;
      if (param_1 < 0x6f0) {
        return -1;
      }
      if (param_1 < 0x6fa) goto LAB_1001318d;
      iVar1 = 0x966;
      if (param_1 < 0x966) {
        return -1;
      }
      if (param_1 < 0x970) goto LAB_1001318d;
      iVar1 = 0x9e6;
      if (param_1 < 0x9e6) {
        return -1;
      }
      if (param_1 < 0x9f0) goto LAB_1001318d;
      iVar1 = 0xa66;
      if (param_1 < 0xa66) {
        return -1;
      }
      if (param_1 < 0xa70) goto LAB_1001318d;
      iVar1 = 0xae6;
      if (param_1 < 0xae6) {
        return -1;
      }
      if (param_1 < 0xaf0) goto LAB_1001318d;
      iVar1 = 0xb66;
      if (param_1 < 0xb66) {
        return -1;
      }
      if (param_1 < 0xb70) goto LAB_1001318d;
      iVar1 = 0xc66;
      if (param_1 < 0xc66) {
        return -1;
      }
      if (param_1 < 0xc70) goto LAB_1001318d;
      iVar1 = 0xce6;
      if (param_1 < 0xce6) {
        return -1;
      }
      if (param_1 < 0xcf0) goto LAB_1001318d;
      iVar1 = 0xd66;
      if (param_1 < 0xd66) {
        return -1;
      }
      if (param_1 < 0xd70) goto LAB_1001318d;
      iVar1 = 0xe50;
      if (param_1 < 0xe50) {
        return -1;
      }
      if (param_1 < 0xe5a) goto LAB_1001318d;
      iVar1 = 0xed0;
      if (param_1 < 0xed0) {
        return -1;
      }
      if (param_1 < 0xeda) goto LAB_1001318d;
      iVar1 = 0xf20;
      if (param_1 < 0xf20) {
        return -1;
      }
      if (param_1 < 0xf2a) goto LAB_1001318d;
      iVar1 = 0x1040;
      if (param_1 < 0x1040) {
        return -1;
      }
      if (param_1 < 0x104a) goto LAB_1001318d;
      iVar1 = 0x17e0;
      if (param_1 < 0x17e0) {
        return -1;
      }
      if (param_1 < 0x17ea) goto LAB_1001318d;
      iVar1 = 0x1810;
      if (param_1 < 0x1810) {
        return -1;
      }
      bVar2 = param_1 < 0x181a;
    }
    else {
      bVar2 = param_1 < 0xff1a;
    }
    if (bVar2) {
LAB_1001318d:
      return (uint)param_1 - iVar1;
    }
  }
  return -1;
}



/**************************************************/

/* Function: _strlen @ 100132e0 */

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10013310;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10013343:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10013310:
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
  goto LAB_10013343;
}



/**************************************************/

/* Function: __initp_misc_winsig @ 1001336b */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_10021004 = param_1;
  DAT_10021008 = param_1;
  DAT_1002100c = param_1;
  DAT_10021010 = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 10013384 */

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
  } while (uVar1 < DAT_1001f9ac * 0xc + param_1);
  if ((DAT_1001f9ac * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 100133b8 */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_1000ca15(DAT_1002100c);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 100133c5 */

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
        puVar6 = &DAT_10021004;
        iVar3 = DAT_10021004;
        goto LAB_1001347a;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10013458;
        if (_SigNum != 8) goto LAB_1001343c;
      }
    }
    pDVar7 = FUN_1000cbee();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_10021010;
      iVar3 = DAT_10021010;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_10021008;
      iVar3 = DAT_10021008;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1001343c:
        pDVar7 = FUN_1000d0fa();
        *pDVar7 = 0x16;
        FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10013458:
      puVar6 = &DAT_1002100c;
      iVar3 = DAT_1002100c;
    }
LAB_1001347a:
    bVar1 = true;
    pcVar4 = (code *)FUN_1000ca15(iVar3);
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
      goto LAB_100134de;
    }
  }
  else {
LAB_100134de:
    if (_SigNum == 8) {
      for (local_28 = DAT_1001f9a0; local_28 < DAT_1001f9a4 + DAT_1001f9a0; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_10013518;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_10013518:
  FUN_10013539();
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

/* Function: FUN_10013539 @ 10013539 */

void FUN_10013539(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1000f2d4(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_10013575 @ 10013575 */

undefined4 __cdecl FUN_10013575(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_10021018 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10021018 = FUN_1000c99e((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_1002101c = FUN_1000c99e((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10021020 = FUN_1000c99e((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10021028 = FUN_1000c99e((int)pFVar1);
      if (DAT_10021028 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_10021024 = FUN_1000c99e((int)pFVar1);
      }
    }
  }
  if ((DAT_10021024 != local_c) && (DAT_10021028 != local_c)) {
    pcVar3 = (code *)FUN_1000ca15(DAT_10021024);
    pcVar4 = (code *)FUN_1000ca15(DAT_10021028);
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
      goto LAB_1001370b;
    }
  }
  if ((((DAT_1002101c != local_c) &&
       (pcVar3 = (code *)FUN_1000ca15(DAT_1002101c), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10021020 != local_c &&
      (pcVar3 = (code *)FUN_1000ca15(DAT_10021020), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1001370b:
  pcVar3 = (code *)FUN_1000ca15(DAT_10021018);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/**************************************************/

/* Function: _strcat_s @ 10013732 */

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
        pDVar2 = FUN_1000d0fa();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_10013751;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1000d0fa();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_10013751:
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strncpy_s @ 100137a3 */

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
LAB_100137c7:
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
          pDVar2 = FUN_1000d0fa();
          eVar5 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_100137d8;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_100137c7;
  pDVar2 = FUN_1000d0fa();
  eVar5 = 0x16;
  *pDVar2 = 0x16;
LAB_100137d8:
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: __set_error_mode @ 10013856 */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_1002064c;
      DAT_1002064c = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_1002064c;
    }
  }
  pDVar2 = FUN_1000d0fa();
  *pDVar2 = 0x16;
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: __isdigit_l @ 1001389c */

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

/* Function: _isdigit @ 100138eb */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_10020d34 == 0) {
    return (byte)PTR_DAT_1001f7e0[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __freea @ 10013914 */

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

/* Function: FUN_1001392f @ 1001392f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001392f(void)

{
  _DAT_1002111c = 0;
  return;
}



/**************************************************/

/* Function: __EH_prolog3_catch @ 10013937 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001ef38 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: _ValidateRead @ 1001396d */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/**************************************************/

/* Function: __global_unwind2 @ 1001397c */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10013994,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 100139e1 */

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
  puStack_1c = &LAB_1001399c;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_10013ab0();
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify1 @ 10013a88 */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1001fda8 = param_1;
  DAT_1001fda4 = in_EAX;
  DAT_1001fdac = unaff_EBP;
  return in_EAX;
}



/**************************************************/

/* Function: __NLG_Notify @ 10013a91 */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1001fda8 = param_1;
  DAT_1001fda4 = in_EAX;
  DAT_1001fdac = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_10013ab0 @ 10013ab0 */

void FUN_10013ab0(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: FUN_10013ab3 @ 10013ab3 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10013ab3(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 10013b03 */

/* WARNING: Removing unreachable block (ram,0x10013b3e) */
/* WARNING: Removing unreachable block (ram,0x10013b2b) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10013ab3(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: __calloc_impl @ 10013b70 */

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
        if ((DAT_10022278 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_10022268)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_10013c6c();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_10013c21;
          }
        }
        else {
LAB_10013c21:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_10020d58,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_10020eb4 == 0) {
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
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 0xc;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: FUN_10013c6c @ 10013c6c */

void FUN_10013c6c(void)

{
  FUN_1000f2d4(4);
  return;
}



/**************************************************/

/* Function: FUN_10013c8e @ 10013c8e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10013c8e(undefined4 param_1)

{
  _DAT_1002102c = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10013c98 @ 10013c98 */

void __cdecl FUN_10013c98(undefined4 param_1)

{
  DAT_10021030 = param_1;
  return;
}



/**************************************************/

/* Function: ___crtInitCritSecNoSpinCount@8 @ 10013ca2 */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 10013cb2 */

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
  
  local_8 = &DAT_1001c678;
  uStack_c = 0x10013cbe;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_1000ca15(DAT_10021030);
  if (pcVar1 != (FARPROC)0x0) goto LAB_10013d28;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_10013d17:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_10013d17;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_10013d17;
  }
  DAT_10021030 = FUN_1000c99e((int)pcVar1);
LAB_10013d28:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: __crtLCMapStringA_stat @ 10013d77 */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  if (DAT_10021034 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_10021034 = 2;
      }
    }
    else {
      DAT_10021034 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_10013de6;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_10013de6:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_10021034 == 2) || (DAT_10021034 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_10014107;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_10014107;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_100140e4;
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
LAB_100140e4:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_10014107;
  }
  if (DAT_10021034 != 1) goto LAB_10014107;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10014107;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_10013e8e:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_10013e8e;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_10014107;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_10013f9d;
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
LAB_10013f9d:
  __freea(local_10);
LAB_10014107:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 10014119 */

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

/* Function: __crtGetStringTypeA_stat @ 1001415c */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10021038 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10021038 = 2;
      }
      goto LAB_100141b5;
    }
    DAT_10021038 = 1;
  }
  else {
LAB_100141b5:
    if ((DAT_10021038 == 2) || (DAT_10021038 == 0)) {
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
      goto LAB_10014302;
    }
    if (DAT_10021038 != 1) goto LAB_10014302;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10014302;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_10014245:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_10014245;
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
LAB_10014302:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 10014314 */

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

/* Function: ___free_lc_time @ 10014354 */

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

/* Function: ___free_lconv_num @ 100144e4 */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1001fe78) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1001fe7c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1001fe80) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 10014524 */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1001fe84) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1001fe88) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1001fe8c) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1001fe90) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1001fe94) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1001fe98) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1001fe9c) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: _strcspn @ 100145b0 */

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

/* Function: _strpbrk @ 10014600 */

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

/* Function: __crtLCMapStringW_stat @ 10014640 */

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
  
  uVar1 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  lpDestStr = (char *)0x0;
  if (DAT_10021040 == 0) {
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_10021040 = 2;
      }
    }
    else {
      DAT_10021040 = 1;
    }
  }
  psVar4 = (short *)param_3;
  pwVar7 = param_4;
  if (0 < (int)param_4) {
    do {
      pwVar7 = (wchar_t *)((int)pwVar7 + -1);
      if (*psVar4 == 0) goto LAB_100146b5;
      psVar4 = psVar4 + 1;
    } while (pwVar7 != (wchar_t *)0x0);
    pwVar7 = (wchar_t *)0xffffffff;
LAB_100146b5:
    param_4 = (wchar_t *)((int)param_4 + (-1 - (int)pwVar7));
  }
  if (DAT_10021040 == 1) {
    LCMapStringW((LCID)param_1,param_2,(LPCWSTR)param_3,(int)param_4,(LPWSTR)param_5,(int)param_6);
    goto LAB_1001488f;
  }
  if ((DAT_10021040 != 2) && (DAT_10021040 != 0)) goto LAB_1001488f;
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
  if (cbMultiByte == 0) goto LAB_1001488f;
  if (((int)cbMultiByte < 1) || (0xffffffe0 / cbMultiByte == 0)) {
    local_c = (LPCSTR)0x0;
  }
  else if (cbMultiByte + 8 < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe0;
    local_c = &stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_1001477e:
      local_c = (LPCSTR)(puVar5 + 2);
    }
  }
  else {
    puVar5 = _malloc(cbMultiByte + 8);
    local_c = (LPCSTR)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_1001477e;
    }
  }
  if (local_c == (LPCSTR)0x0) goto LAB_1001488f;
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
LAB_10014802:
          lpDestStr = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_MaxCount + 8);
        lpDestStr = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_10014802;
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
LAB_1001488f:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: ___crtLCMapStringW @ 100148a1 */

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

/* Function: __crtGetStringTypeW_stat @ 100148e1 */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_10014af3;
  if (DAT_10021044 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_10021044 = 2;
      }
      goto LAB_10014948;
    }
    DAT_10021044 = 1;
  }
  else {
LAB_10014948:
    if (DAT_10021044 != 1) {
      if ((DAT_10021044 != 2) && (DAT_10021044 != 0)) goto LAB_10014af3;
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
      if (_Size_00 == 0) goto LAB_10014af3;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_100149f9:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_100149f9;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_10014af3;
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
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_10014ae7;
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
LAB_10014ae7:
      __freea(local_c);
      goto LAB_10014af3;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_10014af3:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}



/**************************************************/

/* Function: ___crtGetStringTypeW @ 10014b05 */

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

/* Function: x_ismbbtype_l @ 10014b43 */

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
    if (uVar1 == 0) goto LAB_10014b85;
  }
  iVar2 = 1;
LAB_10014b85:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead @ 10014b94 */

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

/* Function: __lseeki64_nolock @ 10014ba7 */

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
    pDVar2 = FUN_1000d0fa();
    *pDVar2 = 9;
LAB_10014bd6:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_1000d120(DVar4);
        goto LAB_10014bd6;
      }
    }
    pbVar1 = (byte *)((&DAT_10022160)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/**************************************************/

/* Function: __lseeki64 @ 10014c2a */

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
    pDVar1 = FUN_1000d10d();
    *pDVar1 = 0;
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10022144)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_10022160)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        pDVar1 = FUN_1000d10d();
        *pDVar1 = 0;
        pDVar1 = FUN_1000d0fa();
        *pDVar1 = 9;
        FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10022160)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1000d0fa();
          *pDVar1 = 9;
          pDVar1 = FUN_1000d10d();
          *pDVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_10014d39();
      }
      goto LAB_10014d33;
    }
    pDVar1 = FUN_1000d10d();
    *pDVar1 = 0;
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 9;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_10014d33:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/**************************************************/

/* Function: FUN_10014d39 @ 10014d39 */

void FUN_10014d39(void)

{
  int unaff_EBP;
  
  FUN_10015376(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __getbuf @ 10014d43 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_10020fc4 = _DAT_10020fc4 + 1;
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

/* Function: __isatty @ 10014d87 */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  DWORD *pDVar1;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10022144)) {
    return *(byte *)((&DAT_10022160)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
  }
  pDVar1 = FUN_1000d0fa();
  *pDVar1 = 9;
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}



/**************************************************/

/* Function: __fputwc_nolock @ 10014de5 */

/* Library Function - Single Match
    __fputwc_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __fputwc_nolock(wchar_t _Ch,FILE *_File)

{
  int *piVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  errno_t eVar6;
  char cVar7;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  if ((_File->_flag & 0x40) == 0) {
    iVar3 = __fileno(_File);
    if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
      puVar5 = &DAT_1001f9b0;
    }
    else {
      iVar3 = __fileno(_File);
      uVar4 = __fileno(_File);
      puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_10022160)[iVar3 >> 5]);
    }
    if ((puVar5[0x24] & 0x7f) != 2) {
      iVar3 = __fileno(_File);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
        puVar5 = &DAT_1001f9b0;
      }
      else {
        iVar3 = __fileno(_File);
        uVar4 = __fileno(_File);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_10022160)[iVar3 >> 5]);
      }
      if ((puVar5[0x24] & 0x7f) == 1) {
        piVar1 = &_File->_cnt;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar4 = __flsbuf((int)(char)_Ch,_File);
        }
        else {
          *_File->_ptr = (char)_Ch;
          uVar4 = (uint)(byte)*_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
        }
        if (uVar4 != 0xffffffff) {
          piVar1 = &_File->_cnt;
          *piVar1 = *piVar1 + -1;
          cVar7 = (char)((ushort)_Ch >> 8);
          if (*piVar1 < 0) {
            __flsbuf((int)cVar7,_File);
          }
          else {
            *_File->_ptr = cVar7;
            _File->_ptr = _File->_ptr + 1;
          }
        }
        goto LAB_10014fb4;
      }
      iVar3 = __fileno(_File);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
        puVar5 = &DAT_1001f9b0;
      }
      else {
        iVar3 = __fileno(_File);
        uVar4 = __fileno(_File);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_10022160)[iVar3 >> 5]);
      }
      if ((puVar5[4] & 0x80) != 0) {
        eVar6 = _wctomb_s(&local_14,local_10,5,_Ch);
        if ((eVar6 == 0) && (iVar3 = 0, 0 < local_14)) {
          do {
            piVar1 = &_File->_cnt;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 < 0) {
              uVar4 = __flsbuf((int)local_10[iVar3],_File);
            }
            else {
              *_File->_ptr = local_10[iVar3];
              uVar4 = (uint)(byte)*_File->_ptr;
              _File->_ptr = _File->_ptr + 1;
            }
          } while ((uVar4 != 0xffffffff) && (iVar3 = iVar3 + 1, iVar3 < local_14));
        }
        goto LAB_10014fb4;
      }
    }
  }
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    __flswbuf((uint)(ushort)_Ch,_File);
  }
  else {
    *(wchar_t *)_File->_ptr = _Ch;
    _File->_ptr = _File->_ptr + 2;
  }
LAB_10014fb4:
  wVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar2;
}



/**************************************************/

/* Function: __mbtowc_l @ 10014fd9 */

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
          if (iVar2 != 0) goto LAB_10015024;
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
        pDVar3 = FUN_1000d0fa();
        *pDVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_10015024:
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

/* Function: _mbtowc @ 100150ec */

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

/* Function: __get_osfhandle @ 10015265 */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000d10d();
    *pDVar1 = 0;
    pDVar1 = FUN_1000d0fa();
    *pDVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10022144)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_10022160)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  pDVar1 = FUN_1000d10d();
  *pDVar1 = 0;
  pDVar1 = FUN_1000d0fa();
  *pDVar1 = 9;
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: ___lock_fhandle @ 100152d6 */

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
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_10022160)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_1001536d();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_10022160)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1001536d @ 1001536d */

void FUN_1001536d(void)

{
  FUN_1000f2d4(10);
  return;
}



/**************************************************/

/* Function: FUN_10015376 @ 10015376 */

void __cdecl FUN_10015376(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10022160)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x38));
  return;
}



/**************************************************/

/* Function: __putwch_nolock @ 10015518 */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  if (DAT_1001fec0 != 0) {
    if (DAT_1001ff84 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_1001ff84 == (HANDLE)0xffffffff) goto LAB_100155c1;
    BVar2 = WriteConsoleW(DAT_1001ff84,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_1001fec0 = 1;
      goto LAB_100155c1;
    }
    if ((DAT_1001fec0 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_100155c1;
    DAT_1001fec0 = 0;
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
  if (DAT_1001ff84 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_1001ff84,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_100155c1:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



/**************************************************/

/* Function: __wctomb_s_l @ 100155da */

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
LAB_100155fc:
    DVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      pDVar2 = FUN_1000d0fa();
      *pDVar2 = 0x16;
      FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_1001568c;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_100156c3:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_100155fc;
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
LAB_1001568c:
          pDVar2 = FUN_1000d0fa();
          *pDVar2 = 0x22;
          FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
        goto LAB_100156c3;
      }
    }
    pDVar2 = FUN_1000d0fa();
    *pDVar2 = 0x2a;
    pDVar2 = FUN_1000d0fa();
    DVar1 = *pDVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return DVar1;
}



/**************************************************/

/* Function: _wctomb_s @ 10015739 */

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

/* Function: __isctype_l @ 10015754 */

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

/* Function: _strrchr @ 10015810 */

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

/* Function: __tolower_l @ 1001583d */

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
LAB_1001589c:
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
      pDVar4 = FUN_1000d0fa();
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
    if (iVar3 == 0) goto LAB_1001589c;
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

/* Function: _tolower @ 10015954 */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_10020d34 == 0) {
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

/* Function: FID_conflict:__atoflt_l @ 1001597b */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_10016cb5((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_100159d2:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10015a12;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10015a04:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10015a12;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10015a04;
    goto LAB_100159d2;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10015a12:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: FID_conflict:__atoflt_l @ 10015a21 */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_10016cb5((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10015a78:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10015ab8;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10015aaa:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10015ab8;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10015aaa;
    goto LAB_10015a78;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10015ab8:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: __fptostr @ 10015ac7 */

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
    pDVar1 = FUN_1000d0fa();
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
    pDVar1 = FUN_1000d0fa();
    eVar7 = 0x22;
    *pDVar1 = 0x22;
  }
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}



/**************************************************/

/* Function: ___dtold @ 10015b84 */

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
      goto LAB_10015c36;
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
LAB_10015c36:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/**************************************************/

/* Function: __fltout2 @ 10015c3f */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_10017375(local_14,uStack_10,uStack_c,0x11,0,&local_30);
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

/* Function: __alldvrm @ 10015cd0 */

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

/* Function: __aullshr @ 10015db0 */

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

/* Function: __controlfp_s @ 10015dd8 */

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
    pDVar2 = FUN_1000d0fa();
    eVar3 = 0x16;
    *pDVar2 = 0x16;
    FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}



/**************************************************/

/* Function: __alloca_probe_16 @ 10015e50 */

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

/* Function: __alloca_probe_8 @ 10015e66 */

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

/* Function: ___ansicp @ 10015e7c */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___convertcp @ 10015ec3 */

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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_10016063;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_10016063;
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
LAB_10015fa3:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_10015fa3;
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
LAB_10016063:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __flswbuf @ 10016075 */

/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flswbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  char *_Buf;
  char *pcVar2;
  uint _FileHandle;
  DWORD *pDVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined *puVar6;
  int unaff_EDI;
  uint _MaxCharCount;
  longlong lVar7;
  uint local_8;
  
  _FileHandle = __fileno(_File);
  uVar1 = _File->_flag;
  if ((uVar1 & 0x82) == 0) {
    pDVar3 = FUN_1000d0fa();
    *pDVar3 = 9;
LAB_10016099:
    _File->_flag = _File->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    pDVar3 = FUN_1000d0fa();
    *pDVar3 = 0x22;
    goto LAB_10016099;
  }
  if ((uVar1 & 1) != 0) {
    _File->_cnt = 0;
    if ((uVar1 & 0x10) == 0) {
      _File->_flag = uVar1 | 0x20;
      return 0xffff;
    }
    _File->_ptr = _File->_base;
    _File->_flag = uVar1 & 0xfffffffe;
  }
  uVar1 = _File->_flag;
  _File->_cnt = 0;
  local_8 = 0;
  _MaxCharCount = 2;
  _File->_flag = uVar1 & 0xffffffef | 2;
  if (((uVar1 & 0x10c) == 0) &&
     (((ppuVar4 = FUN_10011849(), _File != (FILE *)(ppuVar4 + 8) &&
       (ppuVar4 = FUN_10011849(), _File != (FILE *)(ppuVar4 + 0x10))) ||
      (iVar5 = __isatty(_FileHandle), iVar5 == 0)))) {
    __getbuf(_File);
  }
  if ((_File->_flag & 0x108) == 0) {
    local_8 = CONCAT22(local_8._2_2_,(short)_Ch);
    local_8 = __write(_FileHandle,&local_8,2);
  }
  else {
    _Buf = _File->_base;
    pcVar2 = _File->_ptr;
    _File->_ptr = _Buf + 2;
    _MaxCharCount = (int)pcVar2 - (int)_Buf;
    _File->_cnt = _File->_bufsiz + -2;
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar6 = &DAT_1001f9b0;
      }
      else {
        puVar6 = (undefined *)((_FileHandle & 0x1f) * 0x38 + (&DAT_10022160)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar6[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_100161ce;
    }
    else {
      local_8 = __write(_FileHandle,_Buf,_MaxCharCount);
    }
    *(short *)_File->_base = (short)_Ch;
  }
  if (local_8 == _MaxCharCount) {
    return _Ch & 0xffff;
  }
LAB_100161ce:
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}



/**************************************************/

/* Function: ___initconout @ 100161e5 */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_1001ff84 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/**************************************************/

/* Function: FID_conflict:__ld12tod @ 10016231 */

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
        goto LAB_10016730;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1001ff90 - 1;
    iVar4 = (int)(DAT_1001ff90 + ((int)DAT_1001ff90 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1001ff90 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_10016364;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1001636b;
LAB_10016364:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1001636b:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_10016379;
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
LAB_10016379:
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
    if (iVar12 < (int)(DAT_1001ff8c - DAT_1001ff90)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1001ff8c < iVar12) {
        if (iVar12 < DAT_1001ff88) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1001ff9c;
          iVar2 = (int)(DAT_1001ff94 + ((int)DAT_1001ff94 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1001ff94 & 0x8000001f;
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
          iVar12 = (int)(DAT_1001ff94 + ((int)DAT_1001ff94 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1001ff94 & 0x8000001f;
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
          iVar12 = DAT_1001ff9c + DAT_1001ff88;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_10016730;
      }
      local_14 = DAT_1001ff8c - local_14;
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
      iVar2 = DAT_1001ff90 - 1;
      iVar12 = (int)(DAT_1001ff90 + ((int)DAT_1001ff90 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1001ff90 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_1001651c;
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
LAB_1001651c:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1001ff94 + 1;
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
LAB_10016730:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1001ff94 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1001ff98 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1001ff98 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FID_conflict:__ld12tod @ 10016773 */

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
        goto LAB_10016c72;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1001ffa8 - 1;
    iVar4 = (int)(DAT_1001ffa8 + ((int)DAT_1001ffa8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1001ffa8 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_100168a6;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_100168ad;
LAB_100168a6:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_100168ad:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_100168bb;
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
LAB_100168bb:
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
    if (iVar12 < (int)(DAT_1001ffa4 - DAT_1001ffa8)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1001ffa4 < iVar12) {
        if (iVar12 < DAT_1001ffa0) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1001ffb4;
          iVar2 = (int)(DAT_1001ffac + ((int)DAT_1001ffac >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1001ffac & 0x8000001f;
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
          iVar12 = (int)(DAT_1001ffac + ((int)DAT_1001ffac >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1001ffac & 0x8000001f;
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
          iVar12 = DAT_1001ffb4 + DAT_1001ffa0;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_10016c72;
      }
      local_14 = DAT_1001ffa4 - local_14;
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
      iVar2 = DAT_1001ffa8 - 1;
      iVar12 = (int)(DAT_1001ffa8 + ((int)DAT_1001ffa8 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1001ffa8 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_10016a5e;
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
LAB_10016a5e:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1001ffac + 1;
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
LAB_10016c72:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1001ffac & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1001ffb0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1001ffb0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FUN_10016cb5 @ 10016cb5 */

void __cdecl
FUN_10016cb5(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
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
  
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
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
LAB_10016d3a:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_10016d57:
        iVar15 = 3;
        goto LAB_10016d59;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_10016d6e:
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
          if (cVar8 == '0') goto LAB_10016d88;
          goto LAB_10016f13;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_10016d3a;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_10016d57;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10016dbf;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_10016def;
      if (cVar8 == '0') goto LAB_10016d88;
      goto LAB_10016dcf;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_10016d57;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10016d6e;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_10016f3e;
LAB_10016d88:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_10016d3a;
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
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10016e62;
LAB_10016dbf:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_10016d3a;
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
LAB_10016e62:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_10016def:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_10016dcf:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_10016f13;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_10016d3a;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_10016d59;
      }
      goto LAB_10016f3e;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_10016efa;
        if (cVar8 == '-') goto LAB_10016eee;
LAB_10016ee1:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_10016f3e;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_10016d3a;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_10016ee1;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_10016f13;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_10016fa0;
    default:
      goto switchD_10016d46_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_10016efa:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_10016f3e;
LAB_10016eee:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_10016d3a;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_10016d46_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_10016d3a;
      goto LAB_10016f3e;
    }
    iVar15 = 9;
LAB_10016d59:
    param_3 = pcVar18 + -1;
    goto LAB_10016d3a;
  }
  pDVar10 = FUN_1000d0fa();
  *pDVar10 = 0x16;
  FUN_1000d09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_10017336;
LAB_10016fa0:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_10016fbb;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_10016fa0;
  }
  local_68 = 0x1451;
LAB_10016fbb:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_10016f13:
  param_3 = pcVar18 + -1;
LAB_10016f3e:
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
    if (local_50 == 0) goto LAB_10017318;
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
      if ((int)local_58 < -0x1450) goto LAB_10017318;
      puVar20 = &DAT_1001ffc0;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_10020120;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x10017046:
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
LAB_100171fc:
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
                    if ((short)uVar24 < 1) goto LAB_100171fc;
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
                  if (0x7ffe < uVar24) goto LAB_100172bb;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x10017046;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_100172bb:
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
          goto joined_r0x10017046;
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
LAB_10017318:
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
LAB_10017336:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_10017375 @ 10017375 */

/* WARNING: Removing unreachable block (ram,0x10017866) */
/* WARNING: Removing unreachable block (ram,0x10017870) */
/* WARNING: Removing unreachable block (ram,0x10017875) */

void __cdecl
FUN_10017375(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

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
  local_8 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
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
    goto LAB_10017bf3;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_100174a4;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_100174a4:
          pcVar25 = "1#QNAN";
          goto LAB_100174a9;
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
LAB_100174a9:
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
    goto LAB_10017bf3;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_1001ffc0;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_10020120;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_100177ca;
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
LAB_100176ee:
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
            if ((short)uVar24 < 1) goto LAB_100176ee;
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
          if (0x7ffe < uVar24) goto LAB_100177ae;
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
LAB_100177ae:
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
LAB_100177ca:
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
          goto LAB_10017a32;
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
LAB_10017940:
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
          if ((short)uVar24 < 1) goto LAB_10017940;
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
        goto LAB_10017a32;
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
LAB_10017a32:
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
        goto LAB_10017bf3;
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
LAB_10017bf3:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __hw_cw @ 10017c3b */

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

/* Function: ___hw_cw_sse2 @ 10017cc9 */

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

/* Function: __control87 @ 10017d69 */

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
  if (DAT_10022294 != 0) {
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

/* Function: ___ascii_strnicmp @ 10018070 */

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
      if (bVar2 != (byte)uVar3) goto LAB_100180c1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_100180c1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: ___mtold12 @ 100180d1 */

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
  
  uVar7 = DAT_1001ef38 ^ (uint)&stack0xfffffffc;
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

/* Function: ___set_fpsr_sse2 @ 1001829d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_10022294 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_100202f4 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/**************************************************/

/* Function: RtlUnwind @ 100183de */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x100183de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

/* Function: Unwind@100183f0 @ 100183f0 */

void Unwind_100183f0(void)

{
  int unaff_EBP;
  
  FUN_10001b20(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@10018420 @ 10018420 */

void Unwind_10018420(void)

{
  int unaff_EBP;
  
  FUN_10001b20(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/**************************************************/

/* Function: Unwind@10018428 @ 10018428 */

void Unwind_10018428(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x80;
  }
  FUN_100042f0(*(int **)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@10018470 @ 10018470 */

void Unwind_10018470(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x20));
  return;
}



/**************************************************/

/* Function: Unwind@100184c0 @ 100184c0 */

void Unwind_100184c0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10007470((undefined4 *)(unaff_EBP + -0x428));
  return;
}



/**************************************************/

/* Function: Unwind@100184cb @ 100184cb */

void Unwind_100184cb(void)

{
  int unaff_EBP;
  
  thunk_FUN_10007470((undefined4 *)(unaff_EBP + -0x21c));
  return;
}



/**************************************************/

/* Function: Unwind@10018510 @ 10018510 */

void Unwind_10018510(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@10018550 @ 10018550 */

void Unwind_10018550(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 0xc));
  return;
}



/**************************************************/

/* Function: Unwind@1001855b @ 1001855b */

void Unwind_1001855b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 0xc));
  return;
}



/**************************************************/

/* Function: Unwind@10018610 @ 10018610 */

void Unwind_10018610(void)

{
  int unaff_EBP;
  
  thunk_FUN_10007470((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

/* Function: Unwind@10018640 @ 10018640 */

void Unwind_10018640(void)

{
  int unaff_EBP;
  
  thunk_FUN_10007470((undefined4 *)(unaff_EBP + -0x21c));
  return;
}



/**************************************************/

/* Function: Unwind@10018680 @ 10018680 */

void Unwind_10018680(void)

{
  int unaff_EBP;
  
  thunk_FUN_10007470((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

/* Function: Unwind@100186b0 @ 100186b0 */

void Unwind_100186b0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10007470((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

/* Function: FUN_10018740 @ 10018740 */

void FUN_10018740(void)

{
  _atexit((_func_4879 *)&LAB_10018770);
  return;
}



/**************************************************/

