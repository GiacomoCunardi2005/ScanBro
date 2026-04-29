/* Function: FUN_10001000 @ 10001000 */

void __fastcall FUN_10001000(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10001005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))();
  return;
}



/**************************************************/

/* Function: FUN_10001010 @ 10001010 */

int __thiscall FUN_10001010(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(int *)this + 8))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(*(int *)this + 0x24))(iVar3);
      if (*(int *)(iVar2 + 4) == param_1) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001050 @ 10001050 */

int __thiscall FUN_10001050(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(int *)this + 8))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(*(int *)this + 0x24))(iVar3);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == param_1)) {
        (**(code **)(*(int *)this + 0x40))();
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100010a0 @ 100010a0 */

undefined1 __thiscall FUN_100010a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(int *)this + 8))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(*(int *)this + 0x24))(iVar3);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == param_1)) {
        return *(undefined1 *)(iVar2 + 0xb);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100010f0 @ 100010f0 */

undefined1 __thiscall FUN_100010f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(int *)this + 8))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(*(int *)this + 0x24))(iVar3);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == param_1)) {
        return *(undefined1 *)(iVar2 + 9);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001140 @ 10001140 */

undefined4 __fastcall FUN_10001140(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + -4 + iVar1 * 4);
  *(int *)(param_1 + 0xc) = iVar1 + -1;
  return uVar2;
}



/**************************************************/

/* Function: FUN_10001160 @ 10001160 */

undefined4 __fastcall FUN_10001160(int param_1)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((-1 < iVar1) && (iVar2 = *(int *)(param_1 + 0x10), iVar1 < iVar2)) {
    if (iVar1 + 1 == iVar2) {
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    else {
      _Dst = (void *)(*(int *)(param_1 + 8) + iVar1 * 4);
      _memmove(_Dst,(void *)((int)_Dst + 4),(iVar2 - iVar1) * 4 - 4);
    }
    *(undefined4 *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 0x10) * 4) = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0xfffffffd;
}



/**************************************************/

/* Function: FUN_100011d0 @ 100011d0 */

void __thiscall FUN_100011d0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  *(int *)((int)this + 4) = param_1;
  pvVar1 = _malloc(param_1 * 4);
  *(void **)((int)this + 8) = pvVar1;
  if ((pvVar1 != (void *)0x0) && (iVar2 = 0, 0 < *(int *)((int)this + 4))) {
    do {
      *(undefined4 *)(*(int *)((int)this + 8) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}



/**************************************************/

/* Function: FUN_10001210 @ 10001210 */

undefined4 __thiscall FUN_10001210(void *this,int param_1)

{
  if ((param_1 < *(int *)((int)this + 0x10)) && (-1 < param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001230 @ 10001230 */

void __fastcall FUN_10001230(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10001235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



/**************************************************/

/* Function: FUN_10001240 @ 10001240 */

undefined4 __fastcall FUN_10001240(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/**************************************************/

/* Function: FUN_10001250 @ 10001250 */

int __fastcall FUN_10001250(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < *(int *)(param_1 + 0x10)) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar1 * 4);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    *(int *)(param_1 + 0xc) = iVar1 + -1;
  }
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001280 @ 10001280 */

undefined4 __fastcall FUN_10001280(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar1;
    return *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_100012a0 @ 100012a0 */

undefined4 __fastcall FUN_100012a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar1;
}



/**************************************************/

/* Function: FUN_100012b0 @ 100012b0 */

undefined4 __fastcall FUN_100012b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x10))) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100012d0 @ 100012d0 */

int __thiscall FUN_100012d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar3 = *(int **)((int)this + 8);
    while (param_1 != *piVar3) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)((int)this + 0x10) <= iVar2) {
        return 0;
      }
    }
    *(int *)((int)this + 0xc) = iVar2;
    iVar1 = param_1;
  }
  return iVar1;
}



/**************************************************/

/* Function: FUN_10001300 @ 10001300 */

int __thiscall FUN_10001300(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = -1;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar1 = *(int **)((int)this + 8);
    iVar2 = 0;
    while (param_1 != *piVar1) {
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      if (*(int *)((int)this + 0x10) <= iVar2) {
        return -1;
      }
    }
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10001330 @ 10001330 */

undefined4 __thiscall FUN_10001330(void *this,undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 < 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else {
    if (0x3fff < iVar1) {
      return 0xfffffffe;
    }
    if ((*(int *)((int)this + 0xc) < 0) || (iVar1 <= *(int *)((int)this + 0xc))) {
      return 0xfffffffd;
    }
  }
  if (*(int *)((int)this + 4) == 0) {
    *(undefined4 *)((int)this + 4) = 0x3f;
    pvVar2 = _realloc(*(void **)((int)this + 8),*(int *)((int)this + 0x10) * 4 + 0x100);
    if (pvVar2 == (void *)0x0) {
      return 0xfffffffc;
    }
    *(void **)((int)this + 8) = pvVar2;
  }
  else {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  if (0 < *(int *)((int)this + 0x10)) {
    pvVar2 = (void *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 4);
    _memmove((void *)((int)pvVar2 + 4),pvVar2,
             (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc)) * 4);
    *(undefined4 *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 4) = param_1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    return *(undefined4 *)((int)this + 0x10);
  }
  *(undefined4 *)((int)this + 0x10) = 1;
  **(undefined4 **)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  return *(undefined4 *)((int)this + 0x10);
}



/**************************************************/

/* Function: FUN_10001400 @ 10001400 */

void __thiscall FUN_10001400(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  (**(code **)(*(int *)this + 0x24))(param_2);
  (**(code **)(*(int *)this + 0x2c))(unaff_retaddr);
  return;
}



/**************************************************/

/* Function: FUN_10001430 @ 10001430 */

undefined4 __thiscall FUN_10001430(void *this,undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 < 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else {
    if (0x3fff < iVar2) {
      return 0xfffffffe;
    }
    if ((*(int *)((int)this + 0xc) < 0) || (iVar2 <= *(int *)((int)this + 0xc))) {
      return 0xfffffffd;
    }
  }
  if (*(int *)((int)this + 4) == 0) {
    *(undefined4 *)((int)this + 4) = 0x3f;
    pvVar1 = _realloc(*(void **)((int)this + 8),*(int *)((int)this + 0x10) * 4 + 0x100);
    if (pvVar1 == (void *)0x0) {
      return 0xfffffffc;
    }
    *(void **)((int)this + 8) = pvVar1;
  }
  else {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  if (0 < *(int *)((int)this + 0x10)) {
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    iVar2 = *(int *)((int)this + 0x10) + 1;
    *(int *)((int)this + 0x10) = iVar2;
    pvVar1 = (void *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 4);
    _memmove((void *)((int)pvVar1 + 4),pvVar1,(iVar2 - *(int *)((int)this + 0xc)) * 4 - 4);
    *(undefined4 *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 4) = param_1;
    return *(undefined4 *)((int)this + 0x10);
  }
  *(undefined4 *)((int)this + 0x10) = 1;
  **(undefined4 **)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  return *(undefined4 *)((int)this + 0x10);
}



/**************************************************/

/* Function: FUN_10001510 @ 10001510 */

undefined4 __thiscall FUN_10001510(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xc);
  iVar1 = (**(code **)(*(int *)this + 0x20))(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)((int)this + 0xc) == iVar3) {
    uVar2 = (**(code **)(*(int *)this + 0x40))();
    return uVar2;
  }
  (**(code **)(*(int *)this + 0x40))();
  if (*(int *)((int)this + 0xc) < iVar3) {
    iVar3 = iVar3 + -1;
  }
  *(int *)((int)this + 0xc) = iVar3;
  return 0;
}



/**************************************************/

/* Function: FUN_10001560 @ 10001560 */

undefined4 __thiscall FUN_10001560(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xc);
  iVar1 = (**(code **)(*(int *)this + 0x24))(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)((int)this + 0xc) == iVar3) {
    uVar2 = (**(code **)(*(int *)this + 0x40))();
    return uVar2;
  }
  (**(code **)(*(int *)this + 0x40))();
  if (*(int *)((int)this + 0xc) < iVar3) {
    iVar3 = iVar3 + -1;
  }
  *(int *)((int)this + 0xc) = iVar3;
  return 0;
}



/**************************************************/

/* Function: FUN_100015b0 @ 100015b0 */

int __fastcall FUN_100015b0(int *param_1)

{
  int iVar1;
  
  param_1[3] = 0;
  do {
    iVar1 = (**(code **)(*param_1 + 0x40))();
  } while (-1 < iVar1);
  return param_1[4];
}



/**************************************************/

/* Function: FUN_100015e0 @ 100015e0 */

undefined4 * __thiscall FUN_100015e0(void *this,int param_1)

{
  *(undefined ***)this = List<class_IopCapBase>::vftable;
  FUN_100011d0(this,param_1);
  return this;
}



/**************************************************/

/* Function: FUN_10001600 @ 10001600 */

void __fastcall FUN_10001600(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[4];
  *param_1 = List<class_IopCapBase>::vftable;
  param_1[3] = 0;
  while (0 < iVar1) {
    FUN_10001140((int)param_1);
    iVar1 = FUN_10001160((int)param_1);
    if (iVar1 < 0) break;
    iVar1 = param_1[4];
  }
  _free((void *)param_1[2]);
  return;
}



/**************************************************/

/* Function: FUN_10001640 @ 10001640 */

undefined4 * __thiscall FUN_10001640(void *this,byte param_1)

{
  FUN_10001600(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10001660 @ 10001660 */

undefined4 * __thiscall FUN_10001660(void *this,int param_1)

{
  FUN_100015e0(this,param_1);
  *(undefined ***)this = CapContainer::vftable;
  return this;
}



/**************************************************/

/* Function: FUN_10001680 @ 10001680 */

void __fastcall FUN_10001680(undefined4 *param_1)

{
  *param_1 = CapContainer::vftable;
  FUN_10001600(param_1);
  return;
}



/**************************************************/

/* Function: FUN_10001690 @ 10001690 */

undefined4 * __thiscall FUN_10001690(void *this,byte param_1)

{
  FUN_10001680(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: IopPaperPixSize @ 100016b0 */

/* public: __thiscall IopPaperPixSize::IopPaperPixSize(class IopPaperPixSize const &) */

void __thiscall IopPaperPixSize::IopPaperPixSize(IopPaperPixSize *this,IopPaperPixSize *param_1)

{
                    /* 0x16b0  7  ??0IopPaperPixSize@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/**************************************************/

/* Function: operator= @ 100016e0 */

/* public: class IopPaperPixSize & __thiscall IopPaperPixSize::operator=(class IopPaperPixSize const
   &) */

IopPaperPixSize * __thiscall
IopPaperPixSize::operator=(IopPaperPixSize *this,IopPaperPixSize *param_1)

{
                    /* 0x16e0  22  ??4IopPaperPixSize@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return this;
}



/**************************************************/

/* Function: FUN_10001700 @ 10001700 */

IopPaperPixSize * __thiscall FUN_10001700(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x20,*(int *)((int)this + -4),IopPaperPixSize::~IopPaperPixSize);
    if ((param_1 & 1) != 0) {
      _free((IopPaperPixSize *)((int)this + -4));
    }
    return (IopPaperPixSize *)((int)this + -4);
  }
  IopPaperPixSize::~IopPaperPixSize(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: IopPaperSize @ 10001760 */

/* public: __thiscall IopPaperSize::IopPaperSize(class IopPaperSize const &) */

void __thiscall IopPaperSize::IopPaperSize(IopPaperSize *this,IopPaperSize *param_1)

{
  int iVar1;
  IopPaperSize *pIVar2;
  IopPaperSize *pIVar3;
  
                    /* 0x1760  10  ??0IopPaperSize@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  pIVar2 = param_1 + 0x20;
  pIVar3 = this + 0x20;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pIVar3 = *(undefined4 *)pIVar2;
    pIVar2 = pIVar2 + 4;
    pIVar3 = pIVar3 + 4;
  }
  return;
}



/**************************************************/

/* Function: operator= @ 100017a0 */

/* public: class IopPaperSize & __thiscall IopPaperSize::operator=(class IopPaperSize const &) */

IopPaperSize * __thiscall IopPaperSize::operator=(IopPaperSize *this,IopPaperSize *param_1)

{
  IopPaperSize *pIVar1;
  int iVar2;
  
                    /* 0x17a0  23  ??4IopPaperSize@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  pIVar1 = this + 0x20;
  iVar2 = 0x100;
  do {
    *(undefined2 *)pIVar1 = *(undefined2 *)(pIVar1 + ((int)param_1 - (int)this));
    pIVar1 = pIVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return this;
}



/**************************************************/

/* Function: FUN_100017e0 @ 100017e0 */

IopPaperSize * __thiscall FUN_100017e0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x220,*(int *)((int)this + -4),IopPaperSize::~IopPaperSize)
    ;
    if ((param_1 & 1) != 0) {
      _free((IopPaperSize *)((int)this + -4));
    }
    return (IopPaperSize *)((int)this + -4);
  }
  IopPaperSize::~IopPaperSize(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: PixelWidth @ 10001840 */

/* public: int __thiscall CImageData::PixelWidth(void) */

int __thiscall CImageData::PixelWidth(CImageData *this)

{
                    /* 0x1840  67  ?PixelWidth@CImageData@@QAEHXZ */
  return *(int *)(this + 4);
}



/**************************************************/

/* Function: BitsPerPixel @ 10001850 */

/* public: int __thiscall CImageData::BitsPerPixel(void) */

int __thiscall CImageData::BitsPerPixel(CImageData *this)

{
                    /* 0x1850  32  ?BitsPerPixel@CImageData@@QAEHXZ */
  return *(int *)(this + 0x14);
}



/**************************************************/

/* Function: CImageData @ 10001860 */

/* public: __thiscall CImageData::CImageData(class CImageData const &) */

void __thiscall CImageData::CImageData(CImageData *this,CImageData *param_1)

{
                    /* 0x1860  4  ??0CImageData@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}



/**************************************************/

/* Function: operator= @ 100018a0 */

/* public: class CImageData & __thiscall CImageData::operator=(class CImageData const &) */

CImageData * __thiscall CImageData::operator=(CImageData *this,CImageData *param_1)

{
                    /* 0x18a0  21  ??4CImageData@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return this;
}



/**************************************************/

/* Function: GetPixel @ 100018e0 */

/* public: virtual unsigned long __thiscall CImageAnalysis::GetPixel(void) */

ulong __thiscall CImageAnalysis::GetPixel(CImageAnalysis *this)

{
                    /* 0x18e0  51  ?GetPixel@CImageAnalysis@@UAEKXZ
                       0x18e0  62  ?NextPixel@CImageAnalysis@@UAEKXZ */
  return 0;
}



/**************************************************/

/* Function: operator= @ 100018f0 */

/* public: class CImageAnalysis & __thiscall CImageAnalysis::operator=(class CImageAnalysis const &)
    */

CImageAnalysis * __thiscall CImageAnalysis::operator=(CImageAnalysis *this,CImageAnalysis *param_1)

{
                    /* 0x18f0  20  ??4CImageAnalysis@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}



/**************************************************/

/* Function: CImageData @ 10001940 */

/* public: __thiscall CImageData::CImageData(void) */

void __thiscall CImageData::CImageData(CImageData *this)

{
                    /* 0x1940  6  ??0CImageData@@QAE@XZ */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}



/**************************************************/

/* Function: CImageData @ 10001960 */

/* public: __thiscall CImageData::CImageData(char *,int,int,int) */

void __thiscall
CImageData::CImageData(CImageData *this,char *param_1,int param_2,int param_3,int param_4)

{
                    /* 0x1960  5  ??0CImageData@@QAE@PADHHH@Z */
  *(int *)(this + 8) = param_3;
  *(int *)(this + 4) = param_2;
  *(uint *)(this + 0xc) = param_2 * param_4 + 0x1fU >> 3 & 0xfffffffc;
  *(int *)(this + 0x14) = param_4;
  *(undefined ***)this = vftable;
  *(uint *)(this + 0x10) = (uint)(param_4 == 0x18) * 2 + 1;
  *(char **)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}



/**************************************************/

/* Function: ~CImageData @ 100019b0 */

/* public: virtual __thiscall CImageData::~CImageData(void) */

void __thiscall CImageData::~CImageData(CImageData *this)

{
                    /* 0x19b0  16  ??1CImageData@@UAE@XZ */
  *(undefined ***)this = vftable;
  if ((*(void **)(this + 0x1c) != (void *)0x0) && (*(int *)(this + 0x18) != 0)) {
    _free(*(void **)(this + 0x1c));
  }
  return;
}



/**************************************************/

/* Function: CImageAnalysis @ 100019d0 */

/* public: __thiscall CImageAnalysis::CImageAnalysis(char *,int,int,int) */

CImageAnalysis * __thiscall
CImageAnalysis::CImageAnalysis
          (CImageAnalysis *this,char *param_1,int param_2,int param_3,int param_4)

{
                    /* 0x19d0  2  ??0CImageAnalysis@@QAE@PADHHH@Z */
  CImageData::CImageData((CImageData *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  return this;
}



/**************************************************/

/* Function: SetPosition @ 10001a00 */

/* public: virtual void __thiscall CImageAnalysis::SetPosition(int,int) */

void __thiscall CImageAnalysis::SetPosition(CImageAnalysis *this,int param_1,int param_2)

{
                    /* 0x1a00  80  ?SetPosition@CImageAnalysis@@UAEXHH@Z */
  *(int *)(this + 0x20) = param_1;
  *(int *)(this + 0x24) = param_2;
  return;
}



/**************************************************/

/* Function: FUN_10001a20 @ 10001a20 */

void __thiscall FUN_10001a20(void *this,int param_1,uint param_2)

{
  int extraout_ECX;
  uint uVar1;
  
  CImageAnalysis::SetPosition(this,param_1,param_2);
  uVar1 = param_2 & 0x80000007;
  *(uint *)(extraout_ECX + 0x28) =
       *(int *)(extraout_ECX + 0xc) * param_2 + ((int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3) +
       *(int *)(extraout_ECX + 0x1c);
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  *(uint *)(extraout_ECX + 0x2c) = uVar1;
  return;
}



/**************************************************/

/* Function: FUN_10001a70 @ 10001a70 */

byte __fastcall FUN_10001a70(int param_1)

{
  return **(byte **)(param_1 + 0x28) >> (7U - *(char *)(param_1 + 0x2c) & 0x1f) & 1;
}



/**************************************************/

/* Function: FUN_10001a90 @ 10001a90 */

void __fastcall FUN_10001a90(int *param_1)

{
  param_1[0xb] = param_1[0xb] + 1;
  if (7 < param_1[0xb]) {
    param_1[10] = param_1[10] + 1;
    param_1[0xb] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/**************************************************/

/* Function: FUN_10001ab0 @ 10001ab0 */

void __thiscall FUN_10001ab0(void *this,int param_1,int param_2)

{
  int extraout_ECX;
  
  CImageAnalysis::SetPosition(this,param_1,param_2);
  *(int *)(extraout_ECX + 0x28) =
       *(int *)(extraout_ECX + 0xc) * param_2 + *(int *)(extraout_ECX + 0x1c) + param_1;
  return;
}



/**************************************************/

/* Function: FUN_10001ae0 @ 10001ae0 */

undefined1 __fastcall FUN_10001ae0(int param_1)

{
  return **(undefined1 **)(param_1 + 0x28);
}



/**************************************************/

/* Function: FUN_10001af0 @ 10001af0 */

void __fastcall FUN_10001af0(int *param_1)

{
  param_1[10] = param_1[10] + 1;
                    /* WARNING: Could not recover jumptable at 0x10001af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/**************************************************/

/* Function: FUN_10001b00 @ 10001b00 */

void __thiscall FUN_10001b00(void *this,int param_1,int param_2)

{
  int extraout_ECX;
  
  CImageAnalysis::SetPosition(this,param_1,param_2);
  *(int *)(extraout_ECX + 0x28) =
       *(int *)(extraout_ECX + 0xc) * param_2 + param_1 * 3 + *(int *)(extraout_ECX + 0x1c);
  return;
}



/**************************************************/

/* Function: FUN_10001b30 @ 10001b30 */

void __thiscall FUN_10001b30(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*(int *)this + 4))(param_1,param_2);
  (**(code **)(*(int *)this + 8))();
  return;
}



/**************************************************/

/* Function: FUN_10001b60 @ 10001b60 */

uint __fastcall FUN_10001b60(int param_1)

{
  return (uint)**(uint3 **)(param_1 + 0x28);
}



/**************************************************/

/* Function: FUN_10001b80 @ 10001b80 */

void __fastcall FUN_10001b80(int *param_1)

{
  param_1[10] = param_1[10] + 3;
                    /* WARNING: Could not recover jumptable at 0x10001b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/**************************************************/

/* Function: FUN_10001b90 @ 10001b90 */

undefined4 FUN_10001b90(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 & 0xff) - (param_2 & 0xff);
  uVar2 = (int)uVar1 >> 0x1f;
  if ((((int)((uVar1 ^ uVar2) - uVar2) <= DAT_10025050) &&
      (uVar1 = (param_1 >> 8 & 0xff) - (param_2 >> 8 & 0xff), uVar2 = (int)uVar1 >> 0x1f,
      (int)((uVar1 ^ uVar2) - uVar2) <= DAT_10025050)) &&
     (uVar1 = (param_1 >> 0x10 & 0xff) - (param_2 >> 0x10 & 0xff), uVar2 = (int)uVar1 >> 0x1f,
     (int)((uVar1 ^ uVar2) - uVar2) <= DAT_10025050)) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001bf0 @ 10001bf0 */

bool FUN_10001bf0(int param_1,int param_2)

{
  return param_1 == param_2;
}



/**************************************************/

/* Function: FUN_10001c00 @ 10001c00 */

bool FUN_10001c00(byte param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = (int)((uint)param_1 - (uint)param_2) >> 0x1f;
  return (int)(((uint)param_1 - (uint)param_2 ^ uVar1) - uVar1) <= DAT_1002504c;
}



/**************************************************/

/* Function: NumberofNonBorderNeighbors @ 10001c30 */

/* private: int __thiscall CImageAnalysis::NumberofNonBorderNeighbors(class CImageAnalysis
   *,unsigned long,int,int) */

int __thiscall
CImageAnalysis::NumberofNonBorderNeighbors
          (CImageAnalysis *this,CImageAnalysis *param_1,ulong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
                    /* 0x1c30  64  ?NumberofNonBorderNeighbors@CImageAnalysis@@AAEHPAV1@KHH@Z */
  iVar3 = param_3 + -1;
  local_4 = 0;
  if (param_3 + 1 < iVar3) {
    return 0;
  }
  do {
    iVar4 = param_4 + -1;
    if (iVar4 <= param_4 + 1) {
      do {
        if ((((0 < iVar3) && (iVar3 < *(int *)(param_1 + 4))) && (0 < iVar4)) &&
           ((iVar4 < *(int *)(param_1 + 8) && ((iVar3 != param_3 || (iVar4 != param_4)))))) {
          uVar1 = (**(code **)(*(int *)param_1 + 0xc))(iVar3,iVar4);
          iVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_2,uVar1);
          if (iVar2 == 0) {
            local_4 = local_4 + 1;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= param_4 + 1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 <= param_3 + 1);
  return local_4;
}



/**************************************************/

/* Function: FindBorderColor @ 10001cd0 */

/* private: int __thiscall CImageAnalysis::FindBorderColor(class CImageAnalysis *,enum
   EnhImageSide,unsigned long *,struct tagRECT &) */

int __thiscall
CImageAnalysis::FindBorderColor
          (CImageAnalysis *this,CImageAnalysis *param_1,EnhImageSide param_2,ulong *param_3,
          tagRECT *param_4)

{
  CImageAnalysis *pCVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
                    /* 0x1cd0  41
                       ?FindBorderColor@CImageAnalysis@@AAEHPAV1@W4EnhImageSide@@PAKAAUtagRECT@@@Z
                        */
  pCVar1 = param_1;
  iVar5 = 0;
  if ((*(int *)(param_1 + 4) < 4) || (*(int *)(param_1 + 8) < 4)) {
    return 1;
  }
  *param_3 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar8 = 0;
  switch(param_2) {
  case 0:
    uVar3 = (**(code **)(*(int *)param_1 + 0xc))(param_4->left,param_4->top);
    uVar9 = uVar3 & 0xff;
    uVar4 = uVar3 >> 8 & 0xff;
    uVar3 = uVar3 >> 0x10 & 0xff;
    iVar5 = *(int *)param_2 + 1;
    if (iVar5 <= *(int *)(param_2 + 8)) {
      do {
        uVar2 = (**(code **)(*(int *)param_1 + 0x10))();
        uVar3 = uVar3 + (uVar2 >> 0x10 & 0xff);
        uVar9 = uVar9 + (uVar2 & 0xff);
        iVar5 = iVar5 + 1;
        uVar4 = uVar4 + (uVar2 >> 8 & 0xff);
      } while (iVar5 <= *(int *)(param_2 + 8));
    }
    uVar2 = (**(code **)(*(int *)param_1 + 0xc))(*(undefined4 *)param_2,*(int *)(param_2 + 4) + 1);
    iVar8 = uVar9 + (uVar2 & 0xff);
    iVar7 = uVar3 + (uVar2 >> 0x10 & 0xff);
    param_1 = (CImageAnalysis *)(param_4->left + 1);
    iVar6 = uVar4 + (uVar2 >> 8 & 0xff);
    if ((int)param_1 <= param_4->right) {
      do {
        uVar3 = (**(code **)(*(int *)pCVar1 + 0x10))();
        iVar7 = iVar7 + (uVar3 >> 0x10 & 0xff);
        iVar8 = iVar8 + (uVar3 & 0xff);
        param_1 = param_1 + 1;
        iVar6 = iVar6 + (uVar3 >> 8 & 0xff);
      } while ((int)param_1 <= param_4->right);
    }
    iVar5 = (param_4->right - param_4->left) * 2 + 2;
    break;
  case 1:
    iVar5 = param_4->top;
    if (iVar5 <= param_4->bottom) {
      do {
        uVar3 = (**(code **)(*(int *)param_1 + 0xc))(param_4->left + 1,iVar5);
        uVar4 = (**(code **)(*(int *)param_1 + 0x10))();
        iVar7 = iVar7 + (uVar3 >> 0x10 & 0xff) + (uVar4 >> 0x10 & 0xff);
        iVar8 = iVar8 + (uVar3 & 0xff) + (uVar4 & 0xff);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + (uVar3 >> 8 & 0xff) + (uVar4 >> 8 & 0xff);
      } while (iVar5 <= param_4->bottom);
    }
    goto LAB_10001fa9;
  case 2:
    uVar3 = (**(code **)(*(int *)param_1 + 0xc))(param_4->left,param_4->bottom + -1);
    uVar9 = uVar3 & 0xff;
    uVar4 = uVar3 >> 8 & 0xff;
    uVar3 = uVar3 >> 0x10 & 0xff;
    iVar5 = *(int *)param_2 + 1;
    if (iVar5 <= *(int *)(param_2 + 8)) {
      do {
        uVar2 = (**(code **)(*(int *)param_1 + 0x10))();
        uVar3 = uVar3 + (uVar2 >> 0x10 & 0xff);
        uVar9 = uVar9 + (uVar2 & 0xff);
        iVar5 = iVar5 + 1;
        uVar4 = uVar4 + (uVar2 >> 8 & 0xff);
      } while (iVar5 <= *(int *)(param_2 + 8));
    }
    uVar2 = (**(code **)(*(int *)param_1 + 0xc))
                      (*(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc));
    iVar8 = uVar9 + (uVar2 & 0xff);
    iVar7 = uVar3 + (uVar2 >> 0x10 & 0xff);
    param_1 = (CImageAnalysis *)(param_4->left + 1);
    iVar6 = uVar4 + (uVar2 >> 8 & 0xff);
    if ((int)param_1 <= param_4->right) {
      do {
        uVar3 = (**(code **)(*(int *)pCVar1 + 0x10))();
        iVar7 = iVar7 + (uVar3 >> 0x10 & 0xff);
        iVar8 = iVar8 + (uVar3 & 0xff);
        param_1 = param_1 + 1;
        iVar6 = iVar6 + (uVar3 >> 8 & 0xff);
      } while ((int)param_1 <= param_4->right);
    }
    iVar5 = (param_4->right - param_4->left) * 2 + 2;
    break;
  case 3:
    iVar5 = param_4->top;
    if (iVar5 <= param_4->bottom) {
      do {
        uVar3 = (**(code **)(*(int *)param_1 + 0xc))(param_4->right + -1,iVar5);
        uVar4 = (**(code **)(*(int *)param_1 + 0x10))();
        iVar7 = iVar7 + (uVar3 >> 0x10 & 0xff) + (uVar4 >> 0x10 & 0xff);
        iVar8 = iVar8 + (uVar3 & 0xff) + (uVar4 & 0xff);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + (uVar3 >> 8 & 0xff) + (uVar4 >> 8 & 0xff);
      } while (iVar5 <= param_4->bottom);
    }
LAB_10001fa9:
    iVar5 = (param_4->bottom - param_4->top) * 2 + 2;
  }
  *param_3 = (CONCAT31((int3)(iVar7 / iVar5),(char)(iVar6 / iVar5)) & 0xffff) << 8 |
             iVar8 / iVar5 & 0xffU;
  return 0;
}



/**************************************************/

/* Function: AutoCrop @ 10002010 */

/* private: int __thiscall CImageAnalysis::AutoCrop(class CImageAnalysis *,struct tagRECT &) */

int __thiscall
CImageAnalysis::AutoCrop(CImageAnalysis *this,CImageAnalysis *param_1,tagRECT *param_2)

{
  tagRECT *lprc;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  
                    /* 0x2010  30  ?AutoCrop@CImageAnalysis@@AAEHPAV1@AAUtagRECT@@@Z */
  lprc = param_2;
  BVar1 = IsRectEmpty(param_2);
  if (BVar1 != 0) {
    SetRect(lprc,0,0,*(int *)(param_1 + 4) + -1,*(int *)(param_1 + 8) + -1);
  }
  iVar2 = FindBorderColor(this,param_1,1,(ulong *)&param_2,lprc);
  if ((iVar2 == 0) && (iVar2 = lprc->left, iVar2 <= lprc->right)) {
    do {
      iVar5 = lprc->top;
      if (iVar5 <= lprc->bottom) {
        do {
          uVar3 = (**(code **)(*(int *)param_1 + 0xc))(iVar2,iVar5);
          iVar4 = (**(code **)(*(int *)param_1 + 0x14))(unaff_retaddr,uVar3);
          if ((iVar4 == 0) &&
             (iVar4 = NumberofNonBorderNeighbors(this,param_1,(ulong)param_2,iVar2,iVar5), 1 < iVar4
             )) {
            lprc->left = iVar2;
            goto LAB_100020b8;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 <= lprc->bottom);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= lprc->right);
  }
LAB_100020b8:
  iVar2 = FindBorderColor(this,param_1,0,(ulong *)&param_2,lprc);
  if ((iVar2 == 0) && (iVar2 = lprc->top, iVar2 <= lprc->bottom)) {
    do {
      iVar5 = lprc->left;
      if (iVar5 <= lprc->right) {
        do {
          uVar3 = (**(code **)(*(int *)param_1 + 0xc))(iVar5,iVar2);
          iVar4 = (**(code **)(*(int *)param_1 + 0x14))(unaff_retaddr,uVar3);
          if ((iVar4 == 0) &&
             (iVar4 = NumberofNonBorderNeighbors(this,param_1,(ulong)param_2,iVar5,iVar2), 1 < iVar4
             )) {
            lprc->top = iVar2;
            goto LAB_10002129;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 <= lprc->right);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= lprc->bottom);
  }
LAB_10002129:
  iVar2 = FindBorderColor(this,param_1,3,(ulong *)&param_2,lprc);
  if ((iVar2 == 0) && (iVar2 = lprc->right, lprc->left <= iVar2)) {
    do {
      iVar5 = lprc->top;
      if (iVar5 <= lprc->bottom) {
        do {
          uVar3 = (**(code **)(*(int *)param_1 + 0xc))(iVar2,iVar5);
          iVar4 = (**(code **)(*(int *)param_1 + 0x14))(unaff_retaddr,uVar3);
          if ((iVar4 == 0) &&
             (iVar4 = NumberofNonBorderNeighbors(this,param_1,(ulong)param_2,iVar2,iVar5), 1 < iVar4
             )) {
            lprc->right = iVar2;
            goto LAB_10002198;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 <= lprc->bottom);
      }
      iVar2 = iVar2 + -1;
    } while (lprc->left <= iVar2);
  }
LAB_10002198:
  iVar2 = FindBorderColor(this,param_1,2,(ulong *)&param_2,lprc);
  if ((iVar2 != 0) || (iVar2 = lprc->bottom, iVar2 < lprc->top)) {
    return 0;
  }
  do {
    iVar5 = lprc->left;
    if (iVar5 <= lprc->right) {
      do {
        uVar3 = (**(code **)(*(int *)param_1 + 0xc))(iVar5,iVar2);
        iVar4 = (**(code **)(*(int *)param_1 + 0x14))(unaff_retaddr,uVar3);
        if ((iVar4 == 0) &&
           (iVar4 = NumberofNonBorderNeighbors(this,param_1,(ulong)param_2,iVar5,iVar2), 1 < iVar4))
        {
          lprc->bottom = iVar2;
          return 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= lprc->right);
    }
    iVar2 = iVar2 + -1;
    if (iVar2 < lprc->top) {
      return 0;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_10002220 @ 10002220 */

CImageData * __thiscall FUN_10002220(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x20,*(int *)((int)this + -4),CImageData::~CImageData);
    if ((param_1 & 1) != 0) {
      _free((CImageData *)((int)this + -4));
    }
    return (CImageData *)((int)this + -4);
  }
  CImageData::~CImageData(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: CImageAnalysis @ 10002280 */

/* public: __thiscall CImageAnalysis::CImageAnalysis(void) */

undefined4 * __thiscall CImageAnalysis::CImageAnalysis(CImageAnalysis *this)

{
  undefined4 *extraout_EDX;
  
                    /* 0x2280  3  ??0CImageAnalysis@@QAE@XZ */
  CImageData::CImageData((CImageData *)this);
  *extraout_EDX = vftable;
  return extraout_EDX;
}



/**************************************************/

/* Function: AutoCrop @ 10002290 */

/* public: int __thiscall CImageAnalysis::AutoCrop(struct tagRECT &) */

int __thiscall CImageAnalysis::AutoCrop(CImageAnalysis *this,tagRECT *param_1)

{
  int iVar1;
  
                    /* 0x2290  31  ?AutoCrop@CImageAnalysis@@QAEHAAUtagRECT@@@Z */
  iVar1 = AutoCrop(this,this,param_1);
  return iVar1;
}



/**************************************************/

/* Function: ~CImageAnalysis @ 100022a0 */

/* public: virtual __thiscall CImageAnalysis::~CImageAnalysis(void) */

void __thiscall CImageAnalysis::~CImageAnalysis(CImageAnalysis *this)

{
  *(undefined ***)this = CImageData::vftable;
  if ((*(void **)(this + 0x1c) != (void *)0x0) && (*(int *)(this + 0x18) != 0)) {
    _free(*(void **)(this + 0x1c));
  }
  return;
}



/**************************************************/

/* Function: CImageAnalysis @ 100022b0 */

/* public: __thiscall CImageAnalysis::CImageAnalysis(class CImageAnalysis const &) */

void __thiscall CImageAnalysis::CImageAnalysis(CImageAnalysis *this,CImageAnalysis *param_1)

{
                    /* 0x22b0  1  ??0CImageAnalysis@@QAE@ABV0@@Z */
  *(undefined ***)this = CImageData::vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/**************************************************/

/* Function: FUN_10002310 @ 10002310 */

CImageData * __thiscall FUN_10002310(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x2c,*(int *)((int)this + -4),CImageAnalysis::~CImageAnalysis);
    if ((param_1 & 1) != 0) {
      _free((CImageData *)((int)this + -4));
    }
    return (CImageData *)((int)this + -4);
  }
  CImageData::~CImageData(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10002370 @ 10002370 */

CImageAnalysis * __thiscall
FUN_10002370(void *this,char *param_1,int param_2,int param_3,int param_4)

{
  CImageAnalysis::CImageAnalysis(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = CImageAnalysisBW::vftable;
  return this;
}



/**************************************************/

/* Function: FUN_100023a0 @ 100023a0 */

CImageAnalysis * __thiscall
FUN_100023a0(void *this,char *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  LPCWSTR lpString1;
  undefined4 *puVar5;
  wchar_t *lpString2;
  void *local_24;
  int local_20 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c830;
  local_c = ExceptionList;
  uVar2 = DAT_10025bf4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  local_24 = this;
  CImageAnalysis::CImageAnalysis(this,param_1,param_2,param_3,param_4);
  local_4 = 0;
  *(undefined ***)this = CImageAnalysisGray8::vftable;
  FUN_10008de0(local_20);
  uVar1 = param_5;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_1000a540(local_20,param_5);
  iVar3 = FUN_10008e50(local_20,L"GreyDelta");
  if (iVar3 == 0) {
    DAT_1002504c = 0x60;
    param_4 = 0x60;
    piVar4 = (int *)(**(code **)(local_20[0] + 0xc))(L"GreyDelta",uVar2);
    (**(code **)(*piVar4 + 0x10))(&param_3,4,1);
    FUN_1000a570(&local_24,uVar1);
    goto LAB_100024a3;
  }
  piVar4 = (int *)(**(code **)(local_20[0] + 0xc))();
  if (piVar4[4] == 2) {
    lpString2 = L"empty";
    lpString1 = (LPCWSTR)(**(code **)(*piVar4 + 8))();
    iVar3 = lstrcmpW(lpString1,lpString2);
    if (iVar3 != 0) goto LAB_10002455;
  }
  else {
LAB_10002455:
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))();
    if (puVar5 != (undefined4 *)0x0) {
      DAT_1002504c = *puVar5;
      goto LAB_100024a3;
    }
  }
  DAT_1002504c = 0;
LAB_100024a3:
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_1000a6f0(&local_24);
  ExceptionList = pvStack_10;
  return this;
}



/**************************************************/

/* Function: FUN_100024d0 @ 100024d0 */

CImageAnalysis * __thiscall
FUN_100024d0(void *this,char *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  LPCWSTR lpString1;
  undefined4 *puVar5;
  wchar_t *lpString2;
  void *local_24;
  int local_20 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c860;
  local_c = ExceptionList;
  uVar2 = DAT_10025bf4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  local_24 = this;
  CImageAnalysis::CImageAnalysis(this,param_1,param_2,param_3,param_4);
  local_4 = 0;
  *(undefined ***)this = CImageAnalysisColor::vftable;
  FUN_10008de0(local_20);
  uVar1 = param_5;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_1000a540(local_20,param_5);
  iVar3 = FUN_10008e50(local_20,L"ColorDelta");
  if (iVar3 == 0) {
    DAT_10025050 = 0x60;
    param_4 = 0x60;
    piVar4 = (int *)(**(code **)(local_20[0] + 0xc))(L"ColorDelta",uVar2);
    (**(code **)(*piVar4 + 0x10))(&param_3,4,1);
    FUN_1000a570(&local_24,uVar1);
    goto LAB_100025d3;
  }
  piVar4 = (int *)(**(code **)(local_20[0] + 0xc))();
  if (piVar4[4] == 2) {
    lpString2 = L"empty";
    lpString1 = (LPCWSTR)(**(code **)(*piVar4 + 8))();
    iVar3 = lstrcmpW(lpString1,lpString2);
    if (iVar3 != 0) goto LAB_10002585;
  }
  else {
LAB_10002585:
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))();
    if (puVar5 != (undefined4 *)0x0) {
      DAT_10025050 = *puVar5;
      goto LAB_100025d3;
    }
  }
  DAT_10025050 = 0;
LAB_100025d3:
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_1000a6f0(&local_24);
  ExceptionList = pvStack_10;
  return this;
}



/**************************************************/

/* Function: FUN_10002600 @ 10002600 */

CImageData * __thiscall FUN_10002600(void *this,byte param_1)

{
  CImageData::~CImageData(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: CreateImageObject @ 10002620 */

/* public: static class CImageAnalysis * __cdecl CImageAnalysis::CreateImageObject(char
   *,int,int,int,wchar_t *) */

CImageAnalysis * __cdecl
CImageAnalysis::CreateImageObject
          (char *param_1,int param_2,int param_3,int param_4,wchar_t *param_5)

{
  void *pvVar1;
  CImageAnalysis *pCVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x2620  37  ?CreateImageObject@CImageAnalysis@@SAPAV1@PADHHHPA_W@Z */
  puStack_c = &LAB_1001c896;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_4 == 1) {
    ExceptionList = &local_10;
    pvVar1 = (void *)FUN_1000ce3e(0x30);
    if (pvVar1 != (void *)0x0) {
      pCVar2 = FUN_10002370(pvVar1,param_1,param_2,param_3,1);
      ExceptionList = local_10;
      return pCVar2;
    }
  }
  else if (param_4 == 8) {
    ExceptionList = &local_10;
    pvVar1 = (void *)FUN_1000ce3e(0x2c);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (pvVar1 != (void *)0x0) {
      pCVar2 = FUN_100023a0(pvVar1,param_1,param_2,param_3,8,param_5);
      ExceptionList = local_10;
      return pCVar2;
    }
  }
  else {
    if (param_4 != 0x18) {
      return (CImageAnalysis *)0x0;
    }
    ExceptionList = &local_10;
    pvVar1 = (void *)FUN_1000ce3e(0x2c);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (pvVar1 != (void *)0x0) {
      pCVar2 = FUN_100024d0(pvVar1,param_1,param_2,param_3,0x18,param_5);
      ExceptionList = local_10;
      return pCVar2;
    }
  }
  ExceptionList = local_10;
  return (CImageAnalysis *)0x0;
}



/**************************************************/

/* Function: Catch@10002739 @ 10002739 */

undefined * Catch_10002739(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = 0;
  return &DAT_10002746;
}



/**************************************************/

/* Function: FUN_10002780 @ 10002780 */

FARPROC FUN_10002780(undefined4 *param_1,int *param_2,LPCSTR param_3)

{
  DWORD DVar1;
  FARPROC pFVar2;
  HMODULE hModule;
  undefined4 uVar3;
  code *pcVar4;
  
  if (DAT_100271cc == 0) {
    DVar1 = GetVersion();
    if ((int)DVar1 < 0) {
      GetFileAttributesW(L"???.???");
      DAT_100271c8 = GetModuleHandleA("Unicows.dll");
    }
    DAT_100271cc = 1;
  }
  if (DAT_100271c8 != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(DAT_100271c8,param_3);
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

/* Function: FUN_10002830 @ 10002830 */

void __fastcall FUN_10002830(undefined4 *param_1)

{
  *param_1 = IopCapBase::vftable;
  param_1[3] = 0;
  return;
}



/**************************************************/

/* Function: thunk_FUN_1000aa20 @ 10002840 */

void __fastcall thunk_FUN_1000aa20(undefined4 *param_1)

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

/* Function: Get_AppHwnd @ 10002850 */

/* public: struct HWND__ * __thiscall Iop_Manager::Get_AppHwnd(void) */

HWND__ * __thiscall Iop_Manager::Get_AppHwnd(Iop_Manager *this)

{
                    /* 0x2850  53  ?Get_AppHwnd@Iop_Manager@@QAEPAUHWND__@@XZ */
  return *(HWND__ **)(this + 0x110);
}



/**************************************************/

/* Function: Iop_Manager @ 10002860 */

/* public: __thiscall Iop_Manager::Iop_Manager(class Iop_Manager const &) */

void __thiscall Iop_Manager::Iop_Manager(Iop_Manager *this,Iop_Manager *param_1)

{
  int iVar1;
  Iop_Manager *pIVar2;
  Iop_Manager *pIVar3;
  
                    /* 0x2860  13  ??0Iop_Manager@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  pIVar2 = param_1 + 8;
  pIVar3 = this + 8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pIVar3 = *(undefined4 *)pIVar2;
    pIVar2 = pIVar2 + 4;
    pIVar3 = pIVar3 + 4;
  }
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  pIVar2 = param_1 + 0x10c;
  pIVar3 = this + 0x10c;
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pIVar3 = *(undefined4 *)pIVar2;
    pIVar2 = pIVar2 + 4;
    pIVar3 = pIVar3 + 4;
  }
  *(undefined4 *)(this + 0x314) = *(undefined4 *)(param_1 + 0x314);
  pIVar2 = param_1 + 0x318;
  pIVar3 = this + 0x318;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pIVar3 = *(undefined4 *)pIVar2;
    pIVar2 = pIVar2 + 4;
    pIVar3 = pIVar3 + 4;
  }
  *(undefined4 *)(this + 0x398) = *(undefined4 *)(param_1 + 0x398);
  *(undefined4 *)(this + 0x39c) = *(undefined4 *)(param_1 + 0x39c);
  *(undefined4 *)(this + 0x3a0) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(this + 0x3a4) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(this + 0x3a8) = *(undefined4 *)(param_1 + 0x3a8);
  return;
}



/**************************************************/

/* Function: operator= @ 10002900 */

/* public: class Iop_Manager & __thiscall Iop_Manager::operator=(class Iop_Manager const &) */

Iop_Manager * __thiscall Iop_Manager::operator=(Iop_Manager *this,Iop_Manager *param_1)

{
  Iop_Manager *pIVar1;
  int iVar2;
  Iop_Manager *pIVar3;
  
                    /* 0x2900  24  ??4Iop_Manager@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  pIVar1 = this + 8;
  iVar2 = 0x100;
  do {
    *pIVar1 = pIVar1[(int)param_1 - (int)this];
    pIVar1 = pIVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  pIVar1 = param_1 + 0x10c;
  pIVar3 = this + 0x10c;
  for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pIVar3 = *(undefined4 *)pIVar1;
    pIVar1 = pIVar1 + 4;
    pIVar3 = pIVar3 + 4;
  }
  *(undefined4 *)(this + 0x314) = *(undefined4 *)(param_1 + 0x314);
  pIVar1 = this + 0x318;
  iVar2 = 0x20;
  do {
    *(undefined4 *)pIVar1 = *(undefined4 *)(pIVar1 + ((int)param_1 - (int)this));
    pIVar1 = pIVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x398) = *(undefined4 *)(param_1 + 0x398);
  *(undefined4 *)(this + 0x39c) = *(undefined4 *)(param_1 + 0x39c);
  *(undefined4 *)(this + 0x3a0) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(this + 0x3a4) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(this + 0x3a8) = *(undefined4 *)(param_1 + 0x3a8);
  return this;
}



/**************************************************/

/* Function: bad_alloc @ 100029c0 */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_10025150,1);
  *(undefined ***)this = vftable;
  return this;
}



/**************************************************/

/* Function: FUN_100029f0 @ 100029f0 */

exception * __thiscall FUN_100029f0(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10002a20 @ 10002a20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10002a20(int param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + (float10)_DAT_1001e520;
  }
  fVar2 = (float10)param_2;
  if (param_2 < 0) {
    fVar2 = fVar2 + (float10)_DAT_1001e520;
  }
  return (fVar1 * (float10)_DAT_1001e518) / fVar2;
}



/**************************************************/

/* Function: Iop_Manager @ 10002a50 */

/* public: __thiscall Iop_Manager::Iop_Manager(void) */

void __thiscall Iop_Manager::Iop_Manager(Iop_Manager *this)

{
                    /* 0x2a50  14  ??0Iop_Manager@@QAE@XZ */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10c) = 0x208;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined2 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x334) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(undefined4 *)(this + 0x33c) = 0;
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x344) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x354) = 0;
  *(undefined4 *)(this + 0x358) = 0;
  *(undefined4 *)(this + 0x35c) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  *(undefined4 *)(this + 0x374) = 0;
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 900) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  *(undefined4 *)(this + 0x38c) = 0;
  *(undefined4 *)(this + 0x390) = 0;
  *(undefined4 *)(this + 0x394) = 0;
  *(undefined4 *)(this + 0x398) = 0;
  *(undefined4 *)(this + 0x39c) = 1;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x3a0) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  pThisObj = this;
  *(undefined4 *)(this + 0x3a8) = 0;
  *(undefined4 *)(this + 0x3a4) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/**************************************************/

/* Function: ~Iop_Manager @ 10002b70 */

/* public: virtual __thiscall Iop_Manager::~Iop_Manager(void) */

void __thiscall Iop_Manager::~Iop_Manager(Iop_Manager *this)

{
                    /* 0x2b70  19  ??1Iop_Manager@@UAE@XZ */
  *(undefined ***)this = vftable;
  if (*(void **)(this + 0x3a4) != (void *)0x0) {
    _free(*(void **)(this + 0x3a4));
    *(undefined4 *)(this + 0x3a4) = 0;
    *(undefined4 *)(this + 0x3a8) = 0;
  }
  return;
}



/**************************************************/

/* Function: GetApplicationName @ 10002bb0 */

/* public: char * __thiscall Iop_Manager::GetApplicationName(void) */

char * __thiscall Iop_Manager::GetApplicationName(Iop_Manager *this)

{
                    /* 0x2bb0  43  ?GetApplicationName@Iop_Manager@@QAEPADXZ */
  return (char *)(this + 8);
}



/**************************************************/

/* Function: CheckOSUpgrade @ 10002bc0 */

/* private: int __thiscall Iop_Manager::CheckOSUpgrade(struct HINSTANCE__ *) */

int __thiscall Iop_Manager::CheckOSUpgrade(Iop_Manager *this,HINSTANCE__ *param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_138 [5];
  _OSVERSIONINFOW local_124;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2bc0  34  ?CheckOSUpgrade@Iop_Manager@@AAEHPAUHINSTANCE__@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c8cb;
  local_c = ExceptionList;
  local_10 = DAT_10025bf4 ^ (uint)local_138;
  ExceptionList = &local_c;
  local_124.dwOSVersionInfoSize = 0x114;
  BVar1 = GetVersionExW(&local_124);
  if (BVar1 != 0) {
    if (local_124.dwPlatformId == 2) {
      if (local_124.dwMajorVersion < 5) goto LAB_10002c83;
    }
    else if ((local_124.dwPlatformId == 1) &&
            ((local_124.dwMajorVersion < 4 ||
             ((local_124.dwMajorVersion == 4 && (local_124.dwMinorVersion == 0))))))
    goto LAB_10002c83;
    FUN_10008de0(local_138);
    local_4 = 0;
    iVar2 = FUN_1000a900(local_138,param_1);
    local_4 = 0xffffffff;
    if (iVar2 < 0) {
      FUN_1000a6f0(local_138);
    }
    else {
      FUN_1000a6f0(local_138);
    }
  }
LAB_10002c83:
  ExceptionList = local_c;
  iVar2 = __security_check_cookie(local_10 ^ (uint)local_138);
  return iVar2;
}



/**************************************************/

/* Function: Unregister @ 10002cb0 */

/* public: virtual int __thiscall Iop_Manager::Unregister(void (__stdcall*)(unsigned long,unsigned
   long)) */

int __thiscall Iop_Manager::Unregister(Iop_Manager *this,_func_void_ulong_ulong *param_1)

{
  int iVar1;
  int iVar2;
  Iop_Manager *pIVar3;
  
                    /* 0x2cb0  87  ?Unregister@Iop_Manager@@UAEHP6GXKK@Z@Z */
  iVar1 = *(int *)(this + 0x3a0);
  iVar2 = 0;
  if (0 < iVar1) {
    pIVar3 = this + 0x318;
    do {
      if (*(_func_void_ulong_ulong **)pIVar3 == param_1) {
        if (iVar2 < iVar1 + -1) {
          pIVar3 = this + iVar2 * 4 + 0x318;
          do {
            *(undefined4 *)pIVar3 = *(undefined4 *)(pIVar3 + 4);
            iVar2 = iVar2 + 1;
            pIVar3 = pIVar3 + 4;
          } while (iVar2 < *(int *)(this + 0x3a0) + -1);
        }
        *(int *)(this + 0x3a0) = *(int *)(this + 0x3a0) + -1;
        return 0;
      }
      iVar2 = iVar2 + 1;
      pIVar3 = pIVar3 + 4;
    } while (iVar2 < iVar1);
  }
  return -0x3fff0009;
}



/**************************************************/

/* Function: NotifyClients @ 10002d20 */

/* public: void __thiscall Iop_Manager::NotifyClients(unsigned long,unsigned long) */

void __thiscall Iop_Manager::NotifyClients(Iop_Manager *this,ulong param_1,ulong param_2)

{
  BOOL BVar1;
  Iop_Manager *pIVar2;
  int iVar3;
  
                    /* 0x2d20  63  ?NotifyClients@Iop_Manager@@QAEXKK@Z */
  iVar3 = 0;
  if (0 < *(int *)(this + 0x3a0)) {
    pIVar2 = this + 0x318;
    do {
      BVar1 = IsBadCodePtr(*(FARPROC *)pIVar2);
      if (BVar1 == 0) {
        (**(code **)pIVar2)(param_1,param_2);
      }
      iVar3 = iVar3 + 1;
      pIVar2 = pIVar2 + 4;
    } while (iVar3 < *(int *)(this + 0x3a0));
  }
  return;
}



/**************************************************/

/* Function: DisableIop @ 10002d70 */

/* public: virtual int __thiscall Iop_Manager::DisableIop(void) */

int __thiscall Iop_Manager::DisableIop(Iop_Manager *this)

{
                    /* 0x2d70  38  ?DisableIop@Iop_Manager@@UAEHXZ */
  if (*(HMODULE *)(this + 4) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return 0;
}



/**************************************************/

/* Function: CloseUIRequest @ 10002d90 */

/* public: virtual void __thiscall Iop_Manager::CloseUIRequest(void) */

void __thiscall Iop_Manager::CloseUIRequest(Iop_Manager *this)

{
                    /* 0x2d90  36  ?CloseUIRequest@Iop_Manager@@UAEXXZ */
  NotifyClients(this,1,0);
  return;
}



/**************************************************/

/* Function: XferReady @ 10002da0 */

/* public: virtual void __thiscall Iop_Manager::XferReady(void) */

void __thiscall Iop_Manager::XferReady(Iop_Manager *this)

{
                    /* 0x2da0  89  ?XferReady@Iop_Manager@@UAEXXZ */
  NotifyClients(this,4,0);
  return;
}



/**************************************************/

/* Function: GetSupportedCapabilities @ 10002db0 */

/* public: virtual int __thiscall Iop_Manager::GetSupportedCapabilities(struct S_IopSupportedCaps
   *,int *) */

int __thiscall
Iop_Manager::GetSupportedCapabilities(Iop_Manager *this,S_IopSupportedCaps *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  S_IopSupportedCaps *pSVar3;
  
                    /* 0x2db0  52
                       ?GetSupportedCapabilities@Iop_Manager@@UAEHPAUS_IopSupportedCaps@@PAH@Z */
  iVar2 = 0;
  iVar1 = (**(code **)(**(int **)(this + 0x398) + 8))();
  if (iVar1 <= *param_2) {
    iVar1 = (**(code **)(**(int **)(this + 0x398) + 0x14))();
    if (iVar1 != 0) {
      pSVar3 = param_1 + 5;
      do {
        *(undefined4 *)(pSVar3 + -5) = *(undefined4 *)(iVar1 + 4);
        pSVar3[-1] = *(S_IopSupportedCaps *)(iVar1 + 8);
        *pSVar3 = *(S_IopSupportedCaps *)(iVar1 + 9);
        pSVar3[1] = *(S_IopSupportedCaps *)(iVar1 + 10);
        pSVar3[2] = *(S_IopSupportedCaps *)(iVar1 + 0xb);
        iVar2 = iVar2 + 1;
        pSVar3 = pSVar3 + 8;
        iVar1 = (**(code **)(**(int **)(this + 0x398) + 0xc))();
      } while (iVar1 != 0);
    }
    *param_2 = iVar2;
    return 0;
  }
  *param_2 = iVar1;
  return -0x3fff001d;
}



/**************************************************/

/* Function: HasCapChanged @ 10002e40 */

/* public: virtual int __thiscall Iop_Manager::HasCapChanged(long) */

int __thiscall Iop_Manager::HasCapChanged(Iop_Manager *this,long param_1)

{
  int iVar1;
  
                    /* 0x2e40  55  ?HasCapChanged@Iop_Manager@@UAEHJ@Z */
  if ((param_1 != 0x1005) && (param_1 != 0x83f2)) {
    iVar1 = FUN_10001010(*(void **)(this + 0x398),param_1);
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 0x10);
    }
  }
  return 0;
}



/**************************************************/

/* Function: GetCurrentCapabilitySetting @ 10002e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall Iop_Manager::GetCurrentCapabilitySetting(long,void *) */

int __thiscall
Iop_Manager::GetCurrentCapabilitySetting(Iop_Manager *this,long param_1,void *param_2)

{
  long lVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  double *pdVar5;
  code *pcVar6;
  int local_28;
  int local_24;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
                    /* 0x2e70  45  ?GetCurrentCapabilitySetting@Iop_Manager@@UAEHJPAX@Z */
  lVar1 = param_1;
  if ((param_1 == 0x1005) || (param_1 == 0x83f2)) {
    return -0x3fff0005;
  }
  piVar3 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
  bVar2 = FUN_100010a0(*(void **)(this + 0x398),lVar1);
  if ((bVar2 & 1) == 0) goto switchD_10002eda_default;
  ScannerInterface::GetCapability
            (*(ScannerInterface **)(this + 0x314),lVar1,&local_28,(void **)&param_1);
  switch(local_28) {
  case 0:
    pcVar6 = *(code **)(*(int *)this + 0x30);
    pdVar5 = (double *)param_1;
    goto LAB_10002f6a;
  case 1:
    local_20 = (double)*(int *)param_1;
    if (*(int *)param_1 < 0) {
      local_20 = local_20 + _DAT_1001e520;
    }
    local_18 = (double)*(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      local_18 = local_18 + _DAT_1001e520;
    }
    iVar4 = *(int *)(param_1 + 8) + *(int *)param_1;
    local_10 = (double)iVar4;
    if (iVar4 < 0) {
      local_10 = local_10 + _DAT_1001e520;
    }
    local_24 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4);
    local_8 = (double)local_24;
    if (local_24 < 0) {
      local_8 = local_8 + _DAT_1001e520;
    }
    pdVar5 = &local_20;
    break;
  case 2:
    pdVar5 = (double *)(param_1 + 0x10);
    break;
  case 3:
    pdVar5 = (double *)(param_1 + 4);
    break;
  default:
    goto switchD_10002eda_default;
  }
  pcVar6 = *(code **)(*(int *)this + 0x30);
LAB_10002f6a:
  (*pcVar6)(lVar1,pdVar5);
switchD_10002eda_default:
  if (piVar3 == (int *)0x0) {
    return -0x3fff0005;
  }
  iVar4 = (**(code **)(*piVar3 + 0x10))(param_2);
  return iVar4;
}



/**************************************************/

/* Function: GetDefaultCapabilitySetting @ 10002fc0 */

/* public: virtual int __thiscall Iop_Manager::GetDefaultCapabilitySetting(long,void *) */

int __thiscall
Iop_Manager::GetDefaultCapabilitySetting(Iop_Manager *this,long param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x2fc0  46  ?GetDefaultCapabilitySetting@Iop_Manager@@UAEHJPAX@Z */
  if ((param_1 != 0x1005) && (param_1 != 0x83f2)) {
    piVar1 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(param_2);
      return iVar2;
    }
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: GetDeviceCapabilityRange @ 10003000 */

/* private: virtual int __thiscall Iop_Manager::GetDeviceCapabilityRange(long,void *,long *) */

int __thiscall
Iop_Manager::GetDeviceCapabilityRange(Iop_Manager *this,long param_1,void *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x3000  47  ?GetDeviceCapabilityRange@Iop_Manager@@EAEHJPAXPAJ@Z */
  if ((param_1 != 0x1005) && (param_1 != 0x83f2)) {
    piVar1 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x18))(param_2,param_3);
      return iVar2;
    }
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: ResetCurrentCapability @ 10003040 */

/* public: virtual int __thiscall Iop_Manager::ResetCurrentCapability(long) */

int __thiscall Iop_Manager::ResetCurrentCapability(Iop_Manager *this,long param_1)

{
  long lVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  
                    /* 0x3040  72  ?ResetCurrentCapability@Iop_Manager@@UAEHJ@Z */
  lVar1 = param_1;
  if ((((param_1 != 0x1005) && (param_1 != 0x83f2)) && (param_1 != 0x1110)) && (param_1 != 0x1122))
  {
    uVar2 = FUN_100010f0(*(void **)(this + 0x398),param_1);
    param_1 = CONCAT31(param_1._1_3_,uVar2);
    piVar3 = (int *)FUN_10001010(*(void **)(this + 0x398),lVar1);
    if (piVar3 == (int *)0x0) {
      iVar4 = -0x3fff0005;
    }
    else {
      iVar4 = (**(code **)(*piVar3 + 4))();
      if (iVar4 == 0) {
        if ((char)param_1 == '\x06') {
          iVar4 = (**(code **)(*piVar3 + 0x14))(&param_1);
          if (iVar4 == 0) {
            SynchronizeCapWithDriver(this,lVar1,&param_1);
          }
        }
        SynchronizeCaps(this,lVar1);
        return 0;
      }
    }
    return iVar4;
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: ResetCapabilityRange @ 10003100 */

/* public: virtual int __thiscall Iop_Manager::ResetCapabilityRange(long) */

int __thiscall Iop_Manager::ResetCapabilityRange(Iop_Manager *this,long param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x3100  70  ?ResetCapabilityRange@Iop_Manager@@UAEHJ@Z */
  if ((param_1 != 0x1005) && (param_1 != 0x83f2)) {
    piVar1 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
    if (piVar1 == (int *)0x0) {
      iVar2 = -0x3fff0005;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 0) {
        NotifyClients(this,0,param_1);
        return 0;
      }
    }
    return iVar2;
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: SetCurrentCapability @ 10003160 */

/* public: virtual int __thiscall Iop_Manager::SetCurrentCapability(long,void *) */

int __thiscall Iop_Manager::SetCurrentCapability(Iop_Manager *this,long param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x3160  75  ?SetCurrentCapability@Iop_Manager@@UAEHJPAX@Z */
  if ((param_1 != 0x1005) && (param_1 != 0x83f2)) {
    piVar1 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
    if (piVar1 == (int *)0x0) {
      iVar2 = -0x3fff0005;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x20))(param_2);
      piVar1[4] = 1;
      if (iVar2 == 0) {
        SynchronizeCapWithDriver(this,param_1,(void *)param_1);
        SynchronizeCaps(this,param_1);
        return 0;
      }
    }
    return iVar2;
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: SetCurrentCapabilityNoSyn @ 100031e0 */

/* private: int __thiscall Iop_Manager::SetCurrentCapabilityNoSyn(long,void *) */

int __thiscall Iop_Manager::SetCurrentCapabilityNoSyn(Iop_Manager *this,long param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  Iop_Manager *unaff_EBX;
  
                    /* 0x31e0  76  ?SetCurrentCapabilityNoSyn@Iop_Manager@@AAEHJPAX@Z */
  if ((param_1 != 0x1005) && (param_1 != 0x83f2)) {
    piVar1 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
    if (piVar1 == (int *)0x0) {
      iVar2 = -0x3fff0005;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x20))(param_2);
      piVar1[4] = 1;
      if (iVar2 == 0) {
        SynchronizeCapWithDriver(unaff_EBX,param_1,param_2);
        return 0;
      }
    }
    return iVar2;
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: SetFinalCapabilityRange @ 10003260 */

/* public: virtual int __thiscall Iop_Manager::SetFinalCapabilityRange(long,void *,long *) */

int __thiscall
Iop_Manager::SetFinalCapabilityRange(Iop_Manager *this,long param_1,void *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x3260  77  ?SetFinalCapabilityRange@Iop_Manager@@UAEHJPAXPAJ@Z */
  if ((param_1 != 0x1005) && (param_1 != 0x83f2)) {
    piVar1 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
    if (piVar1 == (int *)0x0) {
      iVar2 = -0x3fff0005;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x24))(param_2,*param_3);
      piVar1[4] = 1;
      if (iVar2 == 0) {
        NotifyClients(this,0,param_1);
        return 0;
      }
    }
    return iVar2;
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: GetDeviceObject @ 100032e0 */

/* public: virtual class ScannerInterface * __thiscall Iop_Manager::GetDeviceObject(void) */

ScannerInterface * __thiscall Iop_Manager::GetDeviceObject(Iop_Manager *this)

{
                    /* 0x32e0  48  ?GetDeviceObject@Iop_Manager@@UAEPAVScannerInterface@@XZ */
  return *(ScannerInterface **)(this + 0x314);
}



/**************************************************/

/* Function: FUN_100032f0 @ 100032f0 */

void __fastcall FUN_100032f0(int param_1)

{
  FUN_1000aa20((undefined4 *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: FormatErrorString @ 10003300 */

/* private: void __thiscall Iop_Manager::FormatErrorString(int,class FG_String &) */

void __thiscall Iop_Manager::FormatErrorString(Iop_Manager *this,int param_1,FG_String *param_2)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD dwMessageId;
  code *pcVar4;
  wchar_t *pwVar5;
  wchar_t *local_644;
  FG_String *local_640;
  DWORD local_63c;
  DrvErrorInfo local_638 [28];
  LPCVOID local_61c [2];
  undefined4 local_614;
  wchar_t local_410;
  undefined1 local_40e [1022];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3300  42  ?FormatErrorString@Iop_Manager@@AAEXHAAVFG_String@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c90b;
  local_c = ExceptionList;
  local_10 = DAT_10025bf4 ^ (uint)&local_644;
  uVar1 = DAT_10025bf4 ^ (uint)&stack0xfffff9ac;
  ExceptionList = &local_c;
  local_640 = param_2;
  local_410 = L'\0';
  _memset(local_40e,0,0x3fe);
  local_63c = GetLastError();
  pcVar4 = FormatMessageW_exref;
  switch(param_1) {
  case -0x3fff0065:
  case -0x3fff0025:
  case -0x3fff0024:
  case -0x3fff0023:
  case -0x3fff000f:
  case -0x3fff000e:
  case -0x3fff000b:
  case -0x3fff000a:
    dwMessageId = 0xc000ff9b;
    break;
  default:
    dwMessageId = 0xc000ff9a;
    DVar3 = FormatMessageW(0x2900,DAT_100271c4,0xc000ff9a,0x400,(LPWSTR)&local_644,0,(va_list *)0x0)
    ;
    if (DVar3 != 0) {
      wsprintfW(&local_410,local_644,param_1,uVar1);
      goto LAB_1000341f;
    }
    goto LAB_10003423;
  case -0x3fff001d:
  case -0x3fff0013:
  case -0x3fff0003:
    dwMessageId = 0xc000ffed;
    break;
  case -0x3fff0018:
  case -0x3fff0017:
  case -0x3fff0016:
  case -0x3fff0015:
  case -0x3fff0014:
    dwMessageId = 0xc000ff99;
    local_614 = 0;
    FUN_1000aa20(local_61c);
    local_4 = 0;
    ScannerInterface::GetLastErrorInfo(*(ScannerInterface **)(this + 0x314),local_638);
    pcVar4 = FormatMessageW_exref;
    DVar3 = FormatMessageW(0x2500,local_61c[0],0,0x400,(LPWSTR)&local_644,0,(va_list *)0x0);
    local_4 = 0xffffffff;
    FUN_1000aa20(local_61c);
    goto LAB_1000341f;
  }
  DVar3 = FormatMessageW(0x2900,DAT_100271c4,dwMessageId,0x400,(LPWSTR)&local_644,0,(va_list *)0x0);
LAB_1000341f:
  if (DVar3 == 0) {
LAB_10003423:
    iVar2 = 0;
    DVar3 = GetLastError();
    if (DVar3 == 0x13d) {
      iVar2 = (*pcVar4)(0x3100,DAT_100271c4,local_63c,0x400,&local_644,0,0);
    }
    if (iVar2 == 0) {
      (*pcVar4)(0x3100,DAT_100271c4,DVar3,0x400,&local_644,0,0);
    }
  }
  pwVar5 = local_644;
  if (dwMessageId == 0xc000ff9a) {
    pwVar5 = &local_410;
  }
  FUN_1000ab40((undefined4 *)local_640,pwVar5);
  LocalFree(local_644);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_644);
  return;
}



/**************************************************/

/* Function: GetCapabilities @ 100035a0 */

/* private: int __thiscall Iop_Manager::GetCapabilities(unsigned short *,long *) */

int __thiscall Iop_Manager::GetCapabilities(Iop_Manager *this,ushort *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  
                    /* 0x35a0  44  ?GetCapabilities@Iop_Manager@@AAEHPAGPAJ@Z */
  iVar2 = 0;
  iVar1 = (**(code **)(**(int **)(this + 0x398) + 8))();
  if (iVar1 <= *param_2) {
    iVar1 = (**(code **)(**(int **)(this + 0x398) + 0x14))();
    while (iVar1 != 0) {
      *param_1 = *(ushort *)(iVar1 + 4);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      iVar1 = (**(code **)(**(int **)(this + 0x398) + 0xc))();
    }
    *param_2 = iVar2;
    return 0;
  }
  *param_2 = iVar1;
  return -0x3fff001d;
}



/**************************************************/

/* Function: Read_DeviceParamFile @ 10003610 */

/* public: long __thiscall Iop_Manager::Read_DeviceParamFile(void) */

long __thiscall Iop_Manager::Read_DeviceParamFile(Iop_Manager *this)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  WCHAR *lpString2;
  FILE *local_664;
  undefined4 local_660;
  undefined4 local_65c [5];
  byte local_648 [12];
  size_t local_63c;
  WCHAR local_628;
  undefined1 local_626 [518];
  WCHAR local_420 [520];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3610  68  ?Read_DeviceParamFile@Iop_Manager@@QAEJXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c94b;
  local_c = ExceptionList;
  local_10 = DAT_10025bf4 ^ (uint)&local_664;
  ExceptionList = &local_c;
  iVar9 = 0;
  local_660 = 0;
  local_664 = (FILE *)0x0;
  GetModuleFileNameW(DAT_100271c0,local_420,0x207);
  FUN_10008de0(local_65c);
  local_4 = 0;
  iVar1 = FUN_1000a900(local_65c,DAT_100271c0);
  if (-1 < iVar1) {
    local_628 = L'\0';
    _memset(local_626,0,0x206);
    FUN_1000acb0(0x93,&local_628,0x208,0,0);
    lpString2 = &local_628;
    pwVar2 = _wcsrchr(local_420,L'\\');
    lstrcpyW(pwVar2 + 1,lpString2);
  }
  __wfopen_s(&local_664,local_420,L"rb");
  if (local_664 == (FILE *)0x0) {
    iVar9 = -0x3fff0065;
    local_660 = 0xc000ff9b;
  }
  local_4 = 0xffffffff;
  FUN_1000a6f0(local_65c);
  if ((iVar9 != 0) || (iVar1 = FUN_1000d4f0(local_648,1,0x20,local_664), iVar1 != 0x20))
  goto LAB_1000384f;
  uVar3 = 8;
  pbVar7 = (byte *)0x1001e528;
  pbVar8 = local_648;
  do {
    if (*(int *)pbVar8 != *(int *)pbVar7) goto LAB_10003770;
    uVar3 = uVar3 - 4;
    pbVar7 = pbVar7 + 4;
    pbVar8 = pbVar8 + 4;
  } while (3 < uVar3);
  if (uVar3 == 0) {
LAB_100037d5:
    iVar9 = 0;
  }
  else {
LAB_10003770:
    iVar1 = (uint)*pbVar8 - (uint)*pbVar7;
    if (iVar1 == 0) {
      if (uVar3 == 1) goto LAB_100037d5;
      iVar1 = (uint)pbVar8[1] - (uint)pbVar7[1];
      if (iVar1 == 0) {
        if (uVar3 == 2) goto LAB_100037d5;
        iVar1 = (uint)pbVar8[2] - (uint)pbVar7[2];
        if (iVar1 == 0) {
          if ((uVar3 == 3) || (iVar1 = (uint)pbVar8[3] - (uint)pbVar7[3], iVar1 == 0))
          goto LAB_100037d5;
        }
      }
    }
    iVar9 = 1;
    if (iVar1 < 1) {
      iVar9 = -1;
    }
  }
  if (iVar9 == 0) {
    pvVar4 = _malloc(local_63c);
    *(void **)(this + 0x3a4) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      _fseek(local_664,0,0);
      sVar5 = FUN_1000d4f0(*(void **)(this + 0x3a4),1,local_63c,local_664);
      if (sVar5 == local_63c) {
        *(size_t *)(this + 0x3a8) = sVar5;
      }
      else {
        _free(*(void **)(this + 0x3a4));
        *(undefined4 *)(this + 0x3a4) = 0;
      }
    }
  }
LAB_1000384f:
  if (local_664 != (FILE *)0x0) {
    _fclose(local_664);
  }
  ExceptionList = local_c;
  lVar6 = __security_check_cookie(local_10 ^ (uint)&local_664);
  return lVar6;
}



/**************************************************/

/* Function: Get_DeviceParam @ 10003890 */

/* public: long __thiscall Iop_Manager::Get_DeviceParam(void *,unsigned long *) */

long __thiscall Iop_Manager::Get_DeviceParam(Iop_Manager *this,void *param_1,ulong *param_2)

{
                    /* 0x3890  54  ?Get_DeviceParam@Iop_Manager@@QAEJPAXPAK@Z */
  if (*(int *)(this + 0x3a4) == 0) {
    Read_DeviceParamFile(this);
  }
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x3a4);
  *param_2 = *(ulong *)(this + 0x3a8);
  return 0;
}



/**************************************************/

/* Function: TranslatePxelTypeToBppAndClass @ 100038c0 */

/* public: int __thiscall Iop_Manager::TranslatePxelTypeToBppAndClass(unsigned long,unsigned long
   *,unsigned long *) */

int __thiscall
Iop_Manager::TranslatePxelTypeToBppAndClass
          (Iop_Manager *this,ulong param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  
                    /* 0x38c0  86  ?TranslatePxelTypeToBppAndClass@Iop_Manager@@QAEHKPAK0@Z */
  iVar1 = 0;
  if (param_1 == 0) {
    *param_2 = 0;
    *param_3 = 1;
    return iVar1;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return -0x3fff0005;
    }
    *param_2 = 3;
    *param_3 = 0x18;
    return iVar1;
  }
  *param_2 = 1;
  *param_3 = 8;
  return iVar1;
}



/**************************************************/

/* Function: FUN_10003920 @ 10003920 */

undefined4 FUN_10003920(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_100271c0 = param_1;
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10003940 @ 10003940 */

void __thiscall
FUN_10003940(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined4 param_10)

{
  *(undefined8 *)(param_1 + 6) = param_7;
  *(undefined8 *)(param_1 + 8) = param_7;
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 0xc) = param_8;
  *(undefined1 *)((int)param_1 + 9) = param_4;
  *(undefined1 *)((int)param_1 + 10) = param_5;
  *(undefined8 *)(param_1 + 0xe) = param_9;
  param_1[4] = 0;
  *param_1 = IopCapOneValue<double>::vftable;
  *(undefined1 *)((int)param_1 + 0xb) = param_6;
  param_1[3] = param_10;
  return;
}



/**************************************************/

/* Function: FUN_100039a0 @ 100039a0 */

undefined4 __thiscall FUN_100039a0(void *this,undefined8 *param_1)

{
  *(undefined8 *)((int)this + 0x30) = *param_1;
  return 0;
}



/**************************************************/

/* Function: FUN_100039b0 @ 100039b0 */

undefined4 __thiscall FUN_100039b0(void *this,undefined8 *param_1)

{
  if (*(double *)((int)this + 0x18) == 0.0) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined8 *)((int)this + 0x18);
  return 0;
}



/**************************************************/

/* Function: FUN_100039e0 @ 100039e0 */

undefined4 __thiscall FUN_100039e0(void *this,undefined8 *param_1)

{
  if (*(double *)((int)this + 0x20) == 0.0) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined8 *)((int)this + 0x20);
  return 0;
}



/**************************************************/

/* Function: FUN_10003a10 @ 10003a10 */

undefined4 __thiscall FUN_10003a10(void *this,undefined8 *param_1)

{
  *param_1 = *(undefined8 *)((int)this + 0x30);
  return 0;
}



/**************************************************/

/* Function: FUN_10003a20 @ 10003a20 */

undefined4 __thiscall FUN_10003a20(void *this,undefined8 *param_1)

{
  *param_1 = *(undefined8 *)((int)this + 0x38);
  return 0;
}



/**************************************************/

/* Function: FUN_10003a30 @ 10003a30 */

undefined4 __fastcall FUN_10003a30(int param_1)

{
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
  return 0;
}



/**************************************************/

/* Function: FUN_10003a40 @ 10003a40 */

undefined4 __fastcall FUN_10003a40(int param_1)

{
  if (*(double *)(param_1 + 0x20) != 0.0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003a60 @ 10003a60 */

undefined4 __thiscall FUN_10003a60(void *this,undefined8 *param_1)

{
  *(undefined8 *)((int)this + 0x28) = *param_1;
  *(undefined8 *)((int)this + 0x20) = *param_1;
  return 0;
}



/**************************************************/

/* Function: FUN_10003a80 @ 10003a80 */

undefined4 __thiscall FUN_10003a80(void *this,double *param_1)

{
  if (*(double *)((int)this + 0x20) == *param_1) {
    *(double *)((int)this + 0x38) = *param_1;
    return 0;
  }
  return 0xc000fffc;
}



/**************************************************/

/* Function: FUN_10003ab0 @ 10003ab0 */

void __thiscall
FUN_10003ab0(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_6;
  *(undefined4 *)((int)this + 0x20) = param_7;
  *(undefined ***)this = IopCapOneValue<unsigned_long>::vftable;
  *(undefined4 *)((int)this + 0x24) = param_8;
  *(undefined4 *)((int)this + 0xc) = param_9;
  return;
}



/**************************************************/

/* Function: FUN_10003b10 @ 10003b10 */

undefined4 __thiscall FUN_10003b10(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x20) = *param_1;
  return 0;
}



/**************************************************/

/* Function: FUN_10003b20 @ 10003b20 */

undefined4 FUN_10003b20(void)

{
  return 0xc000fffb;
}



/**************************************************/

/* Function: FUN_10003b30 @ 10003b30 */

undefined4 __thiscall FUN_10003b30(void *this,int *param_1)

{
  if (*(int *)((int)this + 0x14) == 0) {
    return 0xc000fffb;
  }
  *param_1 = *(int *)((int)this + 0x14);
  return 0;
}



/**************************************************/

/* Function: FUN_10003b50 @ 10003b50 */

undefined4 __thiscall FUN_10003b50(void *this,int *param_1)

{
  if (*(int *)((int)this + 0x18) == 0) {
    return 0xc000fffb;
  }
  *param_1 = *(int *)((int)this + 0x18);
  return 0;
}



/**************************************************/

/* Function: FUN_10003b70 @ 10003b70 */

undefined4 __thiscall FUN_10003b70(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x20);
  return 0;
}



/**************************************************/

/* Function: FUN_10003b80 @ 10003b80 */

undefined4 __thiscall FUN_10003b80(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x24);
  return 0;
}



/**************************************************/

/* Function: FUN_10003b90 @ 10003b90 */

undefined4 __fastcall FUN_10003b90(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
  return 0;
}



/**************************************************/

/* Function: FUN_10003ba0 @ 10003ba0 */

undefined4 __fastcall FUN_10003ba0(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003bb0 @ 10003bb0 */

undefined4 __thiscall FUN_10003bb0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 0;
}



/**************************************************/

/* Function: FUN_10003bc0 @ 10003bc0 */

undefined4 __thiscall FUN_10003bc0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x1c) = *param_1;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  return 0;
}



/**************************************************/

/* Function: FUN_10003be0 @ 10003be0 */

undefined4 __thiscall FUN_10003be0(void *this,int *param_1)

{
  if (*param_1 == *(int *)((int)this + 0x18)) {
    *(int *)((int)this + 0x24) = *param_1;
    return 0;
  }
  return 0xc000fffc;
}



/**************************************************/

/* Function: FUN_10003c00 @ 10003c00 */

void __thiscall
FUN_10003c00(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17,undefined8 param_18,undefined4 param_19)

{
  *(undefined8 *)(param_1 + 6) = param_7;
  *(undefined8 *)(param_1 + 8) = param_8;
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 10) = param_9;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 0xc) = param_10;
  *(undefined1 *)((int)param_1 + 9) = param_4;
  *(undefined8 *)(param_1 + 0x14) = param_10;
  *(undefined1 *)((int)param_1 + 10) = param_5;
  *(undefined8 *)(param_1 + 0xe) = param_7;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 0x10) = param_8;
  *param_1 = IopCapRectangle<double>::vftable;
  *(undefined1 *)((int)param_1 + 0xb) = param_6;
  *(undefined8 *)(param_1 + 0x12) = param_9;
  param_1[3] = param_19;
  *(undefined8 *)(param_1 + 0x16) = param_11;
  *(undefined8 *)(param_1 + 0x18) = param_12;
  *(undefined8 *)(param_1 + 0x1a) = param_13;
  *(undefined8 *)(param_1 + 0x1c) = param_14;
  *(undefined8 *)(param_1 + 0x1e) = param_15;
  *(undefined8 *)(param_1 + 0x20) = param_16;
  *(undefined8 *)(param_1 + 0x22) = param_17;
  *(undefined8 *)(param_1 + 0x24) = param_18;
  return;
}



/**************************************************/

/* Function: FUN_10003cb0 @ 10003cb0 */

undefined4 __thiscall FUN_10003cb0(void *this,double *param_1)

{
  if ((((*(double *)((int)this + 0x18) <= *param_1) && (*(double *)((int)this + 0x20) <= param_1[1])
       ) && (param_1[2] <= *(double *)((int)this + 0x28))) &&
     (param_1[3] <= *(double *)((int)this + 0x30))) {
    *(double *)((int)this + 0x38) = *param_1;
    *(double *)((int)this + 0x40) = param_1[1];
    *(double *)((int)this + 0x48) = param_1[2];
    *(double *)((int)this + 0x50) = param_1[3];
    return 0;
  }
  return 0xc000fffc;
}



/**************************************************/

/* Function: FUN_10003d10 @ 10003d10 */

undefined4 __thiscall FUN_10003d10(void *this,undefined8 *param_1)

{
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined8 *)((int)this + 0x58) = *param_1;
    *(undefined8 *)((int)this + 0x60) = param_1[1];
    *(undefined8 *)((int)this + 0x68) = param_1[2];
    *(undefined8 *)((int)this + 0x70) = param_1[3];
    return 0;
  }
  return 0xc000fffa;
}



/**************************************************/

/* Function: FUN_10003d40 @ 10003d40 */

undefined4 __thiscall FUN_10003d40(void *this,undefined8 *param_1)

{
  if ((((*(double *)((int)this + 0x18) == 0.0) && (*(double *)((int)this + 0x20) == 0.0)) &&
      (*(double *)((int)this + 0x28) == 0.0)) && (*(double *)((int)this + 0x30) == 0.0)) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined8 *)((int)this + 0x18);
  param_1[1] = *(undefined8 *)((int)this + 0x20);
  param_1[2] = *(undefined8 *)((int)this + 0x28);
  param_1[3] = *(undefined8 *)((int)this + 0x30);
  return 0;
}



/**************************************************/

/* Function: FUN_10003da0 @ 10003da0 */

undefined4 __thiscall FUN_10003da0(void *this,undefined8 *param_1)

{
  if ((((*(double *)((int)this + 0x38) == 0.0) && (*(double *)((int)this + 0x40) == 0.0)) &&
      (*(double *)((int)this + 0x48) == 0.0)) && (*(double *)((int)this + 0x50) == 0.0)) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined8 *)((int)this + 0x38);
  param_1[1] = *(undefined8 *)((int)this + 0x40);
  param_1[2] = *(undefined8 *)((int)this + 0x48);
  param_1[3] = *(undefined8 *)((int)this + 0x50);
  return 0;
}



/**************************************************/

/* Function: FUN_10003e00 @ 10003e00 */

undefined4 __thiscall FUN_10003e00(void *this,undefined8 *param_1)

{
  if ((((*(double *)((int)this + 0x38) == 0.0) && (*(double *)((int)this + 0x40) == 0.0)) &&
      (*(double *)((int)this + 0x48) == 0.0)) && (*(double *)((int)this + 0x50) == 0.0)) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined8 *)((int)this + 0x58);
  param_1[1] = *(undefined8 *)((int)this + 0x60);
  param_1[2] = *(undefined8 *)((int)this + 0x68);
  param_1[3] = *(undefined8 *)((int)this + 0x70);
  return 0;
}



/**************************************************/

/* Function: FUN_10003e60 @ 10003e60 */

undefined4 __thiscall FUN_10003e60(void *this,undefined8 *param_1)

{
  if ((((*(double *)((int)this + 0x38) == 0.0) && (*(double *)((int)this + 0x40) == 0.0)) &&
      (*(double *)((int)this + 0x48) == 0.0)) && (*(double *)((int)this + 0x50) == 0.0)) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined8 *)((int)this + 0x78);
  param_1[1] = *(undefined8 *)((int)this + 0x80);
  param_1[2] = *(undefined8 *)((int)this + 0x88);
  param_1[3] = *(undefined8 *)((int)this + 0x90);
  return 0;
}



/**************************************************/

/* Function: FUN_10003ec0 @ 10003ec0 */

undefined4 __fastcall FUN_10003ec0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((((*(double *)(param_1 + 0x38) == 0.0) && (*(double *)(param_1 + 0x40) == 0.0)) &&
      (*(double *)(param_1 + 0x48) == 0.0)) && (*(double *)(param_1 + 0x50) == 0.0)) {
    return 0xc000fffb;
  }
  puVar2 = (undefined4 *)(param_1 + 0x78);
  puVar3 = (undefined4 *)(param_1 + 0x58);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003f10 @ 10003f10 */

undefined4 __fastcall FUN_10003f10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((((*(double *)(param_1 + 0x38) == 0.0) && (*(double *)(param_1 + 0x40) == 0.0)) &&
      (*(double *)(param_1 + 0x48) == 0.0)) && (*(double *)(param_1 + 0x50) == 0.0)) {
    return 0xc000fffb;
  }
  puVar2 = (undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)(param_1 + 0x38);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10003f60 @ 10003f60 */

undefined4 __thiscall FUN_10003f60(void *this,undefined8 *param_1)

{
  *(undefined8 *)((int)this + 0x38) = *param_1;
  *(undefined8 *)((int)this + 0x40) = param_1[1];
  *(undefined8 *)((int)this + 0x48) = param_1[2];
  *(undefined8 *)((int)this + 0x50) = param_1[3];
  return 0xc002ffff;
}



/**************************************************/

/* Function: FUN_10003f90 @ 10003f90 */

undefined4 __thiscall FUN_10003f90(void *this,double *param_1)

{
  if ((((*(double *)((int)this + 0x38) < *param_1 != (*(double *)((int)this + 0x38) == *param_1)) &&
       (*(double *)((int)this + 0x40) < param_1[1] != (*(double *)((int)this + 0x40) == param_1[1]))
       ) && (param_1[2] <= *(double *)((int)this + 0x48))) &&
     (param_1[3] <= *(double *)((int)this + 0x50))) {
    *(double *)((int)this + 0x78) = *param_1;
    *(double *)((int)this + 0x80) = param_1[1];
    *(double *)((int)this + 0x88) = param_1[2];
    *(double *)((int)this + 0x90) = param_1[3];
    return 0;
  }
  return 0xc000fffc;
}



/**************************************************/

/* Function: FUN_10004000 @ 10004000 */

void __thiscall
FUN_10004000(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 0x24) = param_7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x20) = param_6;
  *(undefined4 *)((int)this + 0x38) = param_9;
  *(undefined4 *)((int)this + 0x1c) = param_8;
  *(undefined4 *)((int)this + 0x28) = param_8;
  *(undefined ***)this = IopCapRange<unsigned_long>::vftable;
  *(undefined4 *)((int)this + 0x3c) = param_10;
  *(undefined4 *)((int)this + 0xc) = param_11;
  return;
}



/**************************************************/

/* Function: FUN_10004080 @ 10004080 */

undefined4 __thiscall FUN_10004080(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if ((*(int *)((int)this + 0x1c) == 0) && (*(int *)((int)this + 0x34) == 0)) {
    return 0xc000fffb;
  }
  puVar3 = (uint *)((int)this + 0x14);
  if (*(int *)((int)this + 0x34) != 0) {
    puVar3 = (uint *)((int)this + 0x2c);
  }
  uVar1 = *param_1;
  if ((((uVar1 <= *puVar3) && (uVar2 = param_1[1], puVar3[1] <= uVar2)) && (uVar2 <= uVar1)) &&
     (((int)((ulonglong)param_1[2] % (ulonglong)puVar3[2]) == 0 &&
      ((int)(((ulonglong)param_1[2] % (ulonglong)puVar3[2] << 0x20 | (ulonglong)(uVar1 - uVar2)) %
            (ulonglong)param_1[2]) == 0)))) {
    *(uint *)((int)this + 0x20) = uVar1;
    *(uint *)((int)this + 0x24) = param_1[1];
    *(uint *)((int)this + 0x28) = param_1[2];
    return 0;
  }
  return 0xc000fffc;
}



/**************************************************/

/* Function: FUN_10004100 @ 10004100 */

undefined4 __thiscall FUN_10004100(void *this,uint *param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0xc000fffa;
  }
  uVar1 = *param_1;
  if (((uVar1 <= *(uint *)((int)this + 0x20)) && (*(uint *)((int)this + 0x24) <= uVar1)) &&
     ((uVar1 - *(uint *)((int)this + 0x24)) % *(uint *)((int)this + 0x28) == 0)) {
    *(uint *)((int)this + 0x38) = uVar1;
    return 0;
  }
  return 0xc000fffc;
}



/**************************************************/

/* Function: FUN_10004140 @ 10004140 */

undefined4 __thiscall FUN_10004140(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x1c) == 0) {
    if (*(int *)((int)this + 0x34) == 0) {
      return 0xc000fffb;
    }
  }
  else if (*(int *)((int)this + 0x34) == 0) {
    *param_1 = *(undefined4 *)((int)this + 0x14);
    param_1[1] = *(undefined4 *)((int)this + 0x18);
    param_1[2] = *(undefined4 *)((int)this + 0x1c);
    return 0;
  }
  *param_1 = *(undefined4 *)((int)this + 0x2c);
  param_1[1] = *(undefined4 *)((int)this + 0x30);
  param_1[2] = *(undefined4 *)((int)this + 0x34);
  return 0;
}



/**************************************************/

/* Function: FUN_10004190 @ 10004190 */

undefined4 __thiscall FUN_10004190(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x28) == 0) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined4 *)((int)this + 0x20);
  param_1[1] = *(undefined4 *)((int)this + 0x24);
  param_1[2] = *(undefined4 *)((int)this + 0x28);
  return 0;
}



/**************************************************/

/* Function: FUN_100041c0 @ 100041c0 */

undefined4 __thiscall FUN_100041c0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x28) == 0) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined4 *)((int)this + 0x38);
  return 0;
}



/**************************************************/

/* Function: FUN_100041e0 @ 100041e0 */

undefined4 __thiscall FUN_100041e0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x28) == 0) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined4 *)((int)this + 0x3c);
  return 0;
}



/**************************************************/

/* Function: FUN_10004200 @ 10004200 */

undefined4 __fastcall FUN_10004200(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0xc000fffb;
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
  return 0;
}



/**************************************************/

/* Function: FUN_10004220 @ 10004220 */

undefined4 __fastcall FUN_10004220(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      return 0xc000fffb;
    }
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x34) == 0) goto LAB_1000423e;
  }
  puVar1 = (undefined4 *)(param_1 + 0x2c);
LAB_1000423e:
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = puVar1[1];
  *(undefined4 *)(param_1 + 0x28) = puVar1[2];
  return 0;
}



/**************************************************/

/* Function: FUN_10004260 @ 10004260 */

undefined4 __thiscall FUN_10004260(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x2c) = *param_1;
  *(undefined4 *)((int)this + 0x30) = param_1[1];
  *(undefined4 *)((int)this + 0x34) = param_1[2];
  *(undefined4 *)((int)this + 0x20) = *param_1;
  *(undefined4 *)((int)this + 0x24) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_1[2];
  return 0;
}



/**************************************************/

/* Function: FUN_10004290 @ 10004290 */

undefined4 __thiscall FUN_10004290(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 <= *(uint *)((int)this + 0x20)) && (*(uint *)((int)this + 0x24) <= uVar1)) {
    *(uint *)((int)this + 0x3c) = uVar1;
    return 0;
  }
  return 0xc000fffc;
}



/**************************************************/

/* Function: FUN_100042b0 @ 100042b0 */

void __thiscall
FUN_100042b0(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,int param_6,uint param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_1001c988;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined ***)this = IopCapArray<unsigned_long>::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_8 = 1;
  uStack_7 = 0;
  uVar1 = thunk_FUN_1000ce3e(-(uint)((int)((ulonglong)param_7 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_7 * 4));
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  _local_8 = CONCAT31(uStack_7,2);
  uVar1 = thunk_FUN_1000ce3e(-(uint)((int)((ulonglong)param_7 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_7 * 4));
  *(undefined4 *)((int)this + 0x14) = uVar1;
  for (iVar2 = 0; iVar2 < (int)param_7; iVar2 = iVar2 + 1) {
    *(undefined4 *)(*(int *)((int)this + 0x1c) + iVar2 * 4) = *(undefined4 *)(param_6 + iVar2 * 4);
    *(undefined4 *)(*(int *)((int)this + 0x14) + iVar2 * 4) = *(undefined4 *)(param_6 + iVar2 * 4);
  }
  *(uint *)((int)this + 0x20) = param_7;
  *(uint *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 0x2c) = param_8;
  *(undefined4 *)((int)this + 0x30) = param_9;
  *(undefined4 *)((int)this + 0xc) = param_10;
  FUN_100043cb();
  return;
}



/**************************************************/

/* Function: Catch@10004396 @ 10004396 */

void Catch_10004396(void)

{
  int unaff_EBP;
  
  _free(*(void **)(*(int *)(unaff_EBP + -0x14) + 0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@100043ae @ 100043ae */

undefined * Catch_100043ae(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return &DAT_100043c8;
}



/**************************************************/

/* Function: FUN_100043cb @ 100043cb */

void FUN_100043cb(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/**************************************************/

/* Function: FUN_100043f0 @ 100043f0 */

void __fastcall FUN_100043f0(undefined4 *param_1)

{
  *param_1 = IopCapArray<unsigned_long>::vftable;
  if ((void *)param_1[5] != (void *)0x0) {
    _free((void *)param_1[5]);
  }
  if ((void *)param_1[9] != (void *)0x0) {
    _free((void *)param_1[9]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    _free((void *)param_1[7]);
  }
  param_1[3] = 0;
  *param_1 = IopCapBase::vftable;
  return;
}



/**************************************************/

/* Function: FUN_10004440 @ 10004440 */

undefined4 __thiscall FUN_10004440(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x14);
    iVar4 = *(int *)((int)this + 0x18);
  }
  else {
    iVar4 = *(int *)((int)this + 0x28);
  }
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = 0;
      if (0 < iVar4) {
        do {
          if (*(int *)(param_1 + iVar3 * 4) == *(int *)(iVar2 + iVar1 * 4)) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar4);
      }
      if (iVar1 == iVar4) {
        return 0xc000fffc;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  iVar4 = 0;
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          if (*(int *)(param_1 + iVar2 * 4) == *(int *)(param_1 + iVar3 * 4)) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
      if (iVar2 == iVar3) {
        *(undefined4 *)(*(int *)((int)this + 0x1c) + iVar4 * 4) =
             *(undefined4 *)(param_1 + iVar2 * 4);
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  *(int *)((int)this + 0x20) = iVar4;
  return 0;
}



/**************************************************/

/* Function: FUN_100044f0 @ 100044f0 */

uint __thiscall FUN_100044f0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 == 0) {
    return 0xc000fffb;
  }
  if (*(int *)((int)this + 0xc) == 0) {
    return 0xc000fffa;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)((int)this + 0x1c);
    do {
      if (*param_1 == *piVar3) {
        *(int *)((int)this + 0x2c) = *param_1;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return (iVar2 != iVar1) - 1 & 0xc000fffc;
}



/**************************************************/

/* Function: FUN_10004550 @ 10004550 */

undefined4 __thiscall FUN_10004550(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x14);
    iVar2 = *(int *)((int)this + 0x18);
  }
  else {
    iVar2 = *(int *)((int)this + 0x28);
  }
  if ((0 < iVar2) && (iVar1 != 0)) {
    if (iVar2 <= *param_2) {
      if (0 < iVar2) {
        iVar1 = iVar1 - (int)param_1;
        iVar3 = iVar2;
        do {
          *param_1 = *(undefined4 *)(iVar1 + (int)param_1);
          param_1 = param_1 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *param_2 = iVar2;
      return 0;
    }
    *param_2 = iVar2;
    return 0xc000ffe3;
  }
  return 0xc000fffb;
}



/**************************************************/

/* Function: FUN_100045b0 @ 100045b0 */

undefined4 __thiscall FUN_100045b0(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 == 0) {
    return 0xc000fffb;
  }
  if (iVar1 <= *param_2) {
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        *(undefined4 *)(param_1 + iVar2 * 4) =
             *(undefined4 *)(*(int *)((int)this + 0x1c) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0x20));
    }
    *param_2 = *(int *)((int)this + 0x20);
    return 0;
  }
  *param_2 = iVar1;
  return 0xc000ffe3;
}



/**************************************************/

/* Function: FUN_10004600 @ 10004600 */

undefined4 __thiscall FUN_10004600(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x20) == 0) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined4 *)((int)this + 0x2c);
  return 0;
}



/**************************************************/

/* Function: FUN_10004620 @ 10004620 */

undefined4 __thiscall FUN_10004620(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x20) == 0) {
    return 0xc000fffb;
  }
  *param_1 = *(undefined4 *)((int)this + 0x30);
  return 0;
}



/**************************************************/

/* Function: FUN_10004640 @ 10004640 */

undefined4 __fastcall FUN_10004640(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0xc000fffb;
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x30);
  return 0;
}



/**************************************************/

/* Function: FUN_10004660 @ 10004660 */

undefined4 __fastcall FUN_10004660(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 != 0) {
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) = *(undefined4 *)(iVar3 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    *(int *)(param_1 + 0x20) = iVar2;
    return 0;
  }
  return 0xc000fffb;
}



/**************************************************/

/* Function: FUN_100046a0 @ 100046a0 */

undefined4 __thiscall FUN_100046a0(void *this,int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001c9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    _free(*(void **)((int)this + 0x24));
  }
  local_8 = 0;
  uVar1 = thunk_FUN_1000ce3e(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_2 * 4));
  *(undefined4 *)((int)this + 0x24) = uVar1;
  iVar2 = 0;
  if (0 < (int)param_2) {
    do {
      *(undefined4 *)(*(int *)((int)this + 0x24) + iVar2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4)
      ;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_2);
  }
  *(uint *)((int)this + 0x28) = param_2;
  local_8 = 2;
  uVar1 = thunk_FUN_1000ce3e(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_2 * 4));
  _free(*(void **)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  for (iVar2 = 0; iVar2 < (int)param_2; iVar2 = iVar2 + 1) {
    *(undefined4 *)(*(int *)((int)this + 0x1c) + iVar2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
  }
  *(uint *)((int)this + 0x20) = param_2;
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@1000478b @ 1000478b */

undefined1 * Catch_1000478b(void)

{
  return &LAB_10004797;
}



/**************************************************/

/* Function: Catch@10004791 @ 10004791 */

undefined1 * Catch_10004791(void)

{
  return &LAB_10004797;
}



/**************************************************/

/* Function: FUN_100047b0 @ 100047b0 */

uint __thiscall FUN_100047b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 == 0) {
    return 0xc000fffb;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)((int)this + 0x1c);
    do {
      if (*param_1 == *piVar3) {
        *(int *)((int)this + 0x30) = *param_1;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return (iVar2 != iVar1) - 1 & 0xc000fffc;
}



/**************************************************/

/* Function: FUN_10004800 @ 10004800 */

undefined4 * __thiscall FUN_10004800(void *this,byte param_1)

{
  FUN_10002830(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10004820 @ 10004820 */

undefined4 * __thiscall FUN_10004820(void *this,byte param_1)

{
  FUN_100043f0(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10004840 @ 10004840 */

int FUN_10004840(void)

{
  int iVar1;
  
  if (DAT_100271d4 == (FARPROC)0x0) {
    DAT_100271d4 = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"CreateActCtxW");
    if (DAT_100271d4 == (FARPROC)0x0) {
      return -1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1000486c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*DAT_100271d4)();
  return iVar1;
}



/**************************************************/

/* Function: FUN_10004870 @ 10004870 */

void FUN_10004870(void)

{
  if (DAT_100271d8 == (FARPROC)0x0) {
    DAT_100271d8 = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"ActivateActCtx");
    if (DAT_100271d8 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10004899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100271d8)();
  return;
}



/**************************************************/

/* Function: FUN_100048a0 @ 100048a0 */

void FUN_100048a0(void)

{
  if (DAT_100271dc == (FARPROC)0x0) {
    DAT_100271dc = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"DeactivateActCtx");
    if (DAT_100271dc == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x100048c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100271dc)();
  return;
}



/**************************************************/

/* Function: FUN_100048d0 @ 100048d0 */

void FUN_100048d0(void)

{
  if (DAT_100271e0 == (FARPROC)0x0) {
    DAT_100271e0 = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"FindActCtxSectionStringW");
    if (DAT_100271e0 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x100048f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100271e0)();
  return;
}



/**************************************************/

/* Function: FUN_10004900 @ 10004900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004900(void)

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
  local_21c = DAT_10025bf4 ^ 0x10021748;
  uVar1 = DAT_10025bf4 ^ (uint)local_214;
  ExceptionList = &local_224;
  local_230 = 0;
  local_8 = uVar1;
  if ((((DAT_10026fa0 != 0) || (DAT_10025000 != -1)) ||
      ((DAT_100271e4 == (FARPROC)0x0 &&
       (DAT_100271e4 = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"QueryActCtxW"),
       DAT_100271e4 == (FARPROC)0x0)))) ||
     (iVar2 = (*DAT_100271e4)(0x80000010,&DAT_10025000,0,1,local_23c,8,0,uVar1), iVar2 == 0))
  goto LAB_10004ad4;
  if (local_23c[0] == 0) {
    pFVar3 = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"GetModuleHandleExW");
    if ((pFVar3 == (FARPROC)0x0) || (iVar2 = (*pFVar3)(6,&DAT_10025000,&local_234), iVar2 == 0))
    goto LAB_10004ad4;
    local_a = 0;
    local_c = 0;
    DVar4 = GetModuleFileNameW(local_234,local_214,0x105);
    if (DVar4 == 0) goto LAB_10004ad4;
    if (local_c != 0) {
      SetLastError(0x6f);
      goto LAB_10004ad4;
    }
    local_23c[0] = FUN_10004840();
    if (local_23c[0] == -1) {
      DVar4 = GetLastError();
      if ((((DVar4 != 0x714) && (DVar4 != 0x715)) && (DVar4 != 0x717)) && (DVar4 != 0x716))
      goto LAB_10004ad4;
      local_23c[0] = 0;
    }
    _DAT_10026fa4 = 1;
  }
  DAT_10025000 = local_23c[0];
  iVar2 = FUN_10004870();
  if (iVar2 != 0) {
    local_218 = 0;
    iVar2 = FUN_100048d0();
    if (iVar2 != 0) {
      LoadLibraryW(L"Comctl32.dll");
    }
    local_218 = 0xfffffffe;
    FUN_10004afd();
  }
LAB_10004ad4:
  ExceptionList = local_224;
  __security_check_cookie(local_8 ^ (uint)local_214);
  return;
}



/**************************************************/

/* Function: FUN_10004afd @ 10004afd */

void FUN_10004afd(void)

{
  FUN_100048a0();
  return;
}



/**************************************************/

/* Function: FUN_10004b10 @ 10004b10 */

undefined4 FUN_10004b10(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  
  if (DAT_10026fa8 != 0) {
    OutputDebugStringA("IsolationAware function called after IsolationAwareCleanup\n");
  }
  if (DAT_10026fa0 != 0) {
    return 1;
  }
  if (DAT_10026fa8 == 0) {
    iVar2 = FUN_10004900();
    if (iVar2 == 0) goto LAB_10004b8b;
  }
  uVar1 = DAT_10025000;
  if (DAT_100271d8 == (FARPROC)0x0) {
    DAT_100271d8 = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"ActivateActCtx");
    if (DAT_100271d8 == (FARPROC)0x0) goto LAB_10004b8b;
  }
  iVar2 = (*DAT_100271d8)(uVar1,param_1);
  if (iVar2 != 0) {
    return 1;
  }
LAB_10004b8b:
  DVar3 = GetLastError();
  if (((DVar3 != 0x7f) && (DVar3 != 0x7e)) && (DVar3 != 0x78)) {
    return 0;
  }
  DAT_10026fa0 = 1;
  return 1;
}



/**************************************************/

/* Function: FUN_10004bc0 @ 10004bc0 */

Iop_Manager * __thiscall FUN_10004bc0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x3ac,*(int *)((int)this + -4),Iop_Manager::~Iop_Manager);
    if ((param_1 & 1) != 0) {
      _free((Iop_Manager *)((int)this + -4));
    }
    return (Iop_Manager *)((int)this + -4);
  }
  Iop_Manager::~Iop_Manager(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: SetApplicationName @ 10004c20 */

/* public: void __thiscall Iop_Manager::SetApplicationName(char *) */

void __thiscall Iop_Manager::SetApplicationName(Iop_Manager *this,char *param_1)

{
                    /* 0x4c20  74  ?SetApplicationName@Iop_Manager@@QAEXPAD@Z */
  _strcpy_s((char *)(this + 8),0x100,param_1);
  return;
}



/**************************************************/

/* Function: CloseIopManager @ 10004c40 */

/* public: virtual void __thiscall Iop_Manager::CloseIopManager(void) */

void __thiscall Iop_Manager::CloseIopManager(Iop_Manager *this)

{
  ScannerInterface *this_00;
  undefined4 *puVar1;
  
                    /* 0x4c40  35  ?CloseIopManager@Iop_Manager@@UAEXXZ */
  if (*(ScannerInterface **)(this + 0x314) != (ScannerInterface *)0x0) {
    ScannerInterface::Close(*(ScannerInterface **)(this + 0x314));
    this_00 = *(ScannerInterface **)(this + 0x314);
    if (this_00 != (ScannerInterface *)0x0) {
      ScannerInterface::~ScannerInterface(this_00);
      _free(this_00);
    }
    *(undefined4 *)(this + 0x314) = 0;
  }
  if (*(int **)(this + 0x398) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(this + 0x398) + 0x14))();
    while (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
      puVar1 = (undefined4 *)(**(code **)(**(int **)(this + 0x398) + 0xc))();
    }
    if (*(undefined4 **)(this + 0x398) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x398))(1);
    }
  }
  if (*(void **)(this + 0x108) != (void *)0x0) {
    _free(*(void **)(this + 0x108));
    *(undefined4 *)(this + 0x108) = 0;
  }
  if (DAT_100271c4 != (HMODULE)0x0) {
    FreeLibrary(DAT_100271c4);
    DAT_100271c4 = (HMODULE)0x0;
  }
  return;
}



/**************************************************/

/* Function: GetFinalCapabilityRange @ 10004d00 */

/* public: virtual int __thiscall Iop_Manager::GetFinalCapabilityRange(long,void *,long *) */

int __thiscall
Iop_Manager::GetFinalCapabilityRange(Iop_Manager *this,long param_1,void *param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x4d00  49  ?GetFinalCapabilityRange@Iop_Manager@@UAEHJPAXPAJ@Z */
  if (param_1 == 0x83f2) {
    iVar1 = GetCapabilities(this,param_2,param_3);
    return iVar1;
  }
  piVar2 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x1c))(param_2,param_3);
    return iVar1;
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: ErrorMessage @ 10004d50 */

/* private: int __thiscall Iop_Manager::ErrorMessage(int) */

int __thiscall Iop_Manager::ErrorMessage(Iop_Manager *this,int param_1)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  code *pcVar4;
  WCHAR *pWVar5;
  DWORD local_648;
  uint local_644;
  WCHAR *local_640;
  DWORD local_63c;
  DrvErrorInfo local_638 [28];
  LPCVOID local_61c [2];
  undefined4 local_614;
  WCHAR local_410;
  undefined1 local_40e [1022];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4d50  40  ?ErrorMessage@Iop_Manager@@AAEHH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c9db;
  local_c = ExceptionList;
  local_10 = DAT_10025bf4 ^ (uint)&local_648;
  uVar1 = DAT_10025bf4 ^ (uint)&stack0xfffff9a8;
  ExceptionList = &local_c;
  local_644 = 0;
  local_410 = L'\0';
  _memset(local_40e,0,0x3fe);
  if (param_1 == 0) goto LAB_1000506a;
  switch((uint)param_1 >> 0x1e) {
  case 0:
  case 3:
    local_644 = 0x10;
    break;
  case 1:
    local_644 = 0x40;
    break;
  case 2:
    local_644 = 0x30;
  }
  local_644 = local_644 | 0x11000;
  local_63c = GetLastError();
  pcVar4 = FormatMessageW_exref;
  if (param_1 < -0x3fff0013) {
    if (-0x3fff0019 < param_1) {
LAB_10004fd9:
      local_648 = 0xc000ff99;
      local_614 = 0;
      FUN_1000aa20(local_61c);
      local_4 = 0;
      ScannerInterface::GetLastErrorInfo(*(ScannerInterface **)(this + 0x314),local_638);
      pcVar4 = FormatMessageW_exref;
      DVar2 = FormatMessageW(0x2500,local_61c[0],0,0x400,(LPWSTR)&local_640,0x200,(va_list *)0x0);
      local_4 = 0xffffffff;
      FUN_1000aa20(local_61c);
      goto LAB_10004e81;
    }
    if (param_1 < -0x3fff005e) {
      if (param_1 == -0x3fff005f) {
        local_648 = 0xc000ffa1;
      }
      else {
        if (param_1 == -0x7fffff9a) goto LAB_10004fd9;
        if (param_1 == -0x7fff002a) {
          local_648 = 0x8000ffd6;
        }
        else {
          if (param_1 != -0x3fff0060) goto LAB_10004f82;
          local_648 = param_1;
        }
      }
      goto LAB_10004e56;
    }
    if (-0x3fff0026 < param_1) {
      if (param_1 < -0x3fff0022) goto LAB_10004f65;
      if (param_1 == -0x3fff001d) goto LAB_10004f30;
    }
LAB_10004f82:
    local_648 = 0xc000ff9a;
    DVar2 = FormatMessageW(0x2900,DAT_100271c4,0xc000ff9a,0x400,(LPWSTR)&local_640,0x200,
                           (va_list *)0x0);
    if (DVar2 != 0) {
      wsprintfW(&local_410,local_640,param_1,uVar1);
      goto LAB_10004e81;
    }
LAB_10004e85:
    iVar3 = 0;
    DVar2 = GetLastError();
    if (DVar2 == 0x13d) {
      iVar3 = (*pcVar4)(0x3100,DAT_100271c4,local_63c,0x400,&local_640,0x200,0);
    }
    if (iVar3 == 0) {
      (*pcVar4)(0x3100,DAT_100271c4,DVar2,0x400,&local_640,0x200,0);
    }
  }
  else {
    if (param_1 < -0x3fff0009) {
      if (param_1 < -0x3fff000b) {
        if (param_1 == -0x3fff0013) goto LAB_10004f30;
        if ((param_1 < -0x3fff000f) || (-0x3fff000e < param_1)) goto LAB_10004f82;
      }
LAB_10004f65:
      local_648 = 0xc000ff9b;
    }
    else {
      if (param_1 != -0x3fff0003) {
        if (param_1 != 0x40000065) goto LAB_10004f82;
        goto LAB_10004fd9;
      }
LAB_10004f30:
      local_648 = 0xc000ffed;
    }
LAB_10004e56:
    DVar2 = FormatMessageW(0x2900,DAT_100271c4,local_648,0x400,(LPWSTR)&local_640,0x200,
                           (va_list *)0x0);
LAB_10004e81:
    if (DVar2 == 0) goto LAB_10004e85;
  }
  pWVar5 = local_640;
  if (local_648 == 0xc000ff9a) {
    pWVar5 = &local_410;
  }
  FUN_1000b140(0,pWVar5,&DAT_10026fb0,local_644);
  LocalFree(local_640);
LAB_1000506a:
  ExceptionList = local_c;
  iVar3 = __security_check_cookie(local_10 ^ (uint)&local_648);
  return iVar3;
}



/**************************************************/

/* Function: ChangeCapability @ 100050b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall Iop_Manager::ChangeCapability(long,unsigned char,unsigned char,unsigned
   char,void *) */

int __thiscall
Iop_Manager::ChangeCapability
          (Iop_Manager *this,long param_1,uchar param_2,uchar param_3,uchar param_4,void *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uStack_94;
  uint local_54 [2];
  undefined4 local_4c [3];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined **local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  Iop_Manager *local_1c;
  undefined1 local_18;
  undefined3 uStack_17;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x50b0  33  ?ChangeCapability@Iop_Manager@@QAEHJEEEPAX@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001ca1b;
  local_10 = ExceptionList;
  uStack_94 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_94;
  ExceptionList = &local_10;
  local_1c = this;
  uVar8 = FUN_100010a0(*(void **)(this + 0x398),param_1);
  _local_18 = CONCAT31(uStack_17,uVar8);
  piVar9 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
  local_24 = 0;
  local_20 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_54[0] = 0;
  local_8 = 0;
  switch(param_2) {
  case '\0':
    if (param_3 == '\a') {
      iVar11 = (**(code **)(*piVar9 + 0x10))(&local_40);
      if (iVar11 < 0) {
        local_40 = *(undefined8 *)param_5;
      }
      puVar13 = (undefined4 *)FUN_1000ce3e(0x40);
      if (puVar13 != (undefined4 *)0x0) {
        FUN_10003940(puVar13,param_1,1,7,param_4,(char)_local_18,*(undefined8 *)param_5,local_40,
                     *(undefined8 *)((int)param_5 + 8),1);
      }
    }
    else {
      iVar11 = (**(code **)(*piVar9 + 0x10))(&local_24);
      if (iVar11 < 0) {
        local_24 = *(undefined4 *)param_5;
      }
      pvVar12 = (void *)FUN_1000ce3e(0x28);
      if (pvVar12 != (void *)0x0) {
        FUN_10003ab0(pvVar12,param_1,1,param_3,param_4,(char)_local_18,*(undefined4 *)param_5,
                     local_24,*(undefined4 *)((int)param_5 + 4),1);
      }
    }
    break;
  case '\x01':
    iVar11 = *(int *)param_5;
    dVar4 = (double)iVar11;
    if (iVar11 < 0) {
      dVar4 = dVar4 + _DAT_1001e520;
    }
    iVar10 = *(int *)((int)param_5 + 4);
    dVar5 = (double)iVar10;
    if (iVar10 < 0) {
      dVar5 = dVar5 + _DAT_1001e520;
    }
    iVar11 = *(int *)((int)param_5 + 8) + iVar11;
    dVar6 = (double)iVar11;
    if (iVar11 < 0) {
      dVar6 = dVar6 + _DAT_1001e520;
    }
    iVar10 = *(int *)((int)param_5 + 0xc) + iVar10;
    dVar7 = (double)iVar10;
    if (iVar10 < 0) {
      dVar7 = dVar7 + _DAT_1001e520;
    }
    puVar13 = (undefined4 *)FUN_1000ce3e(0x98);
    if (puVar13 != (undefined4 *)0x0) {
      FUN_10003c00(puVar13,param_1,4,param_3,param_4,(char)_local_18,dVar4,dVar5,dVar6,dVar7,dVar4,
                   dVar5,dVar6,dVar7,dVar4,dVar5,dVar6,dVar7,1);
    }
    break;
  case '\x02':
    iVar11 = (**(code **)(*piVar9 + 0x10))(local_54);
    if (iVar11 < 0) {
      local_54[0] = *(uint *)((int)param_5 + 0x10);
    }
    uVar1 = *(uint *)((int)param_5 + 4);
    uVar14 = uVar1;
    if ((uVar1 < local_54[0]) || (uVar14 = *(uint *)param_5, local_54[0] < uVar14)) {
      local_54[0] = uVar14;
    }
    uVar2 = *(undefined4 *)param_5;
    uVar3 = *(undefined4 *)((int)param_5 + 8);
    pvVar12 = (void *)FUN_1000ce3e(0x40);
    if (pvVar12 != (void *)0x0) {
      FUN_10004000(pvVar12,param_1,3,param_3,param_4,(char)_local_18,uVar1,uVar2,uVar3,local_54[0],
                   *(undefined4 *)((int)param_5 + 0xc),1);
    }
    break;
  case '\x03':
    iVar11 = (**(code **)(*piVar9 + 0x10))(local_4c);
    if (iVar11 < 0) {
      local_4c[0] = *(undefined4 *)((int)param_5 + 4);
    }
    pvVar12 = (void *)FUN_1000ce3e(0x34);
    local_8._0_1_ = 1;
    if (pvVar12 != (void *)0x0) {
      FUN_100042b0(pvVar12,param_1,2,param_3,param_4,(char)_local_18,*(int *)((int)param_5 + 0xc),
                   *(uint *)param_5,*(undefined4 *)((int)param_5 + 4),
                   *(undefined4 *)((int)param_5 + 8),1);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    break;
  default:
    goto switchD_10005133_default;
  }
  this = local_1c;
  puVar13 = (undefined4 *)FUN_10001050(*(void **)(local_1c + 0x398),param_1);
  if (puVar13 != (undefined4 *)0x0) {
    (**(code **)*puVar13)(1);
  }
  iVar11 = FUN_10001000(*(int **)(this + 0x398));
  if (iVar11 < 1) {
    std::exception::exception((exception *)local_30,&PTR_s_bad_allocation_10025150,1);
    local_30[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_10021790);
  }
switchD_10005133_default:
  local_8 = 0xffffffff;
  NotifyClients(this,0,param_1);
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@100053fd @ 100053fd */

undefined1 * Catch_100053fd(void)

{
  return &LAB_10005403;
}



/**************************************************/

/* Function: FUN_10005480 @ 10005480 */

HMODULE FUN_10005480(LPCWSTR param_1)

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
  local_c = DAT_10025bf4 ^ 0x10021848;
  ExceptionList = &local_14;
  local_20 = (HMODULE)0x0;
  local_24 = 0;
  if (DAT_10026fa0 == 0) {
    iVar1 = FUN_10004b10(&local_24);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (HMODULE)0x0;
    }
  }
  local_8 = 0;
  local_20 = LoadLibraryW(param_1);
  local_8 = 0xfffffffe;
  FUN_10005516();
  ExceptionList = local_14;
  return local_20;
}



/**************************************************/

/* Function: FUN_10005516 @ 10005516 */

void FUN_10005516(void)

{
  DWORD DVar1;
  FARPROC pFVar2;
  FARPROC unaff_EBX;
  int unaff_EBP;
  
  if (DAT_10026fa0 == unaff_EBX) {
    pFVar2 = (FARPROC)(uint)(*(FARPROC *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (pFVar2 == unaff_EBX) {
      *(FARPROC *)(unaff_EBP + 8) = unaff_EBX;
    }
    else {
      DVar1 = GetLastError();
      *(DWORD *)(unaff_EBP + 8) = DVar1;
    }
    if ((DAT_100271dc != unaff_EBX) ||
       (DAT_100271dc = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"DeactivateActCtx"),
       DAT_100271dc != unaff_EBX)) {
      (*DAT_100271dc)();
    }
    if (pFVar2 != unaff_EBX) {
      SetLastError(*(DWORD *)(unaff_EBP + 8));
    }
    return;
  }
  return;
}



/**************************************************/

/* Function: Register @ 10005580 */

/* public: virtual int __thiscall Iop_Manager::Register(void (__stdcall*)(unsigned long,unsigned
   long)) */

int __thiscall Iop_Manager::Register(Iop_Manager *this,_func_void_ulong_ulong *param_1)

{
  int iVar1;
  int iVar2;
  Iop_Manager *pIVar3;
  
                    /* 0x5580  69  ?Register@Iop_Manager@@UAEHP6GXKK@Z@Z */
  iVar2 = *(int *)(this + 0x3a0);
  iVar1 = 0;
  if (0 < iVar2) {
    pIVar3 = this + 0x318;
    do {
      if (*(_func_void_ulong_ulong **)pIVar3 == param_1) {
        iVar2 = ErrorMessage(this,-0x3fff0008);
        return iVar2;
      }
      iVar1 = iVar1 + 1;
      pIVar3 = pIVar3 + 4;
    } while (iVar1 < iVar2);
  }
  if (0x1f < iVar2 + 1) {
    iVar2 = ErrorMessage(this,-0x3fff0007);
    return iVar2;
  }
  *(_func_void_ulong_ulong **)(this + iVar2 * 4 + 0x318) = param_1;
  *(int *)(this + 0x3a0) = *(int *)(this + 0x3a0) + 1;
  return 0;
}



/**************************************************/

/* Function: EnableIop @ 100055f0 */

/* public: virtual int __thiscall Iop_Manager::EnableIop(struct HWND__ *,int) */

int __thiscall Iop_Manager::EnableIop(Iop_Manager *this,HWND__ *param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
                    /* 0x55f0  39  ?EnableIop@Iop_Manager@@UAEHPAUHWND__@@H@Z */
  *(HWND__ **)(this + 0x110) = param_1;
  if (*(int *)(this + 4) == 0) {
    hModule = FUN_10005480(L"comctl32.dll");
    *(HMODULE *)(this + 4) = hModule;
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"InitCommonControls");
      if (pFVar1 != (FARPROC)0x0) {
        (*pFVar1)();
      }
    }
  }
  return 0;
}



/**************************************************/

/* Function: ScanEventProc @ 10005630 */

/* public: static int __cdecl Iop_Manager::ScanEventProc(int,unsigned long) */

int __cdecl Iop_Manager::ScanEventProc(int param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int *unaff_EBX;
  float10 fVar3;
  uchar uVar4;
  uchar uVar5;
  int *local_7c;
  int local_78;
  int local_74;
  undefined8 uStack_70;
  int local_68;
  int local_64;
  undefined1 local_60 [4];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [12];
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  
                    /* 0x5630  73  ?ScanEventProc@Iop_Manager@@SAHHK@Z */
  local_78 = 0;
  if ((m_ignoreScanEvent != 0) && (m_ignoreScanEvent == param_2)) {
    m_ignoreScanEvent = 0;
    return 0;
  }
  if (param_1 != 0x19191901) {
    if (param_1 != 0x19191902) {
      return 0;
    }
    ScannerInterface::GetCapability
              (*(ScannerInterface **)(pThisObj + 0x314),param_2,&local_68,&local_7c);
    local_68 = (**(code **)(*(int *)pThisObj + 0x18))(param_2);
    uVar1 = ScannerInterface::GetCapabilityUnits(*(ScannerInterface **)(pThisObj + 0x314),param_2);
    local_74 = CONCAT31(local_74._1_3_,(char)uVar1);
    iVar2 = local_74;
    switch(uStack_70._4_4_) {
    case 0:
      if (param_2 == 0x1111) {
        (**(code **)(*(int *)pThisObj + 0x1c))(0x1116,&local_74);
        iVar2 = local_74;
        fVar3 = FUN_10002a20(*unaff_EBX,local_74);
        auStack_5c = (undefined1  [8])(double)fVar3;
        fVar3 = FUN_10002a20(unaff_EBX[1],iVar2);
        auStack_54._0_8_ = (undefined8)fVar3;
        unaff_EBX = (int *)auStack_5c;
        uVar5 = '\a';
        uVar4 = '\0';
        iVar2 = 1;
      }
      else if (param_2 == 0x1112) {
        (**(code **)(*(int *)pThisObj + 0x1c))(0x1117,&local_74);
        iVar2 = local_74;
        fVar3 = FUN_10002a20(*unaff_EBX,local_74);
        auStack_5c = (undefined1  [8])(double)fVar3;
        fVar3 = FUN_10002a20(unaff_EBX[1],iVar2);
        auStack_54._0_8_ = (undefined8)fVar3;
        unaff_EBX = (int *)auStack_5c;
        uVar5 = '\a';
        uVar4 = '\0';
        iVar2 = 1;
      }
      else {
        uVar5 = '\x06';
        uVar4 = '\0';
      }
      break;
    case 1:
      if (param_2 == 0x1114) goto switchD_100056ca_default;
      uVar5 = '\a';
      uVar4 = '\x01';
      break;
    case 2:
      uVar5 = '\x06';
      uVar4 = '\x02';
      break;
    case 3:
      uVar5 = '\x06';
      uVar4 = '\x03';
      break;
    default:
      goto switchD_100056ca_default;
    }
    local_7c = (int *)ChangeCapability(pThisObj,param_2,uVar4,uVar5,(uchar)iVar2,unaff_EBX);
switchD_100056ca_default:
    iVar2 = FUN_10001010(*(void **)(pThisObj + 0x398),param_2);
    *(int *)(iVar2 + 0x10) = local_68;
    return (int)local_7c;
  }
  ScannerInterface::GetCapability
            (*(ScannerInterface **)(pThisObj + 0x314),param_2,&local_68,&local_7c);
  switch(local_68) {
  case 0:
    if (param_2 == 0x1111) {
      iVar2 = (**(code **)(*(int *)pThisObj + 0x1c))(0x1116,&local_64);
      if (iVar2 != 0) {
        return local_78;
      }
      fVar3 = FUN_10002a20(*local_7c,local_64);
      uStack_70 = (double)fVar3;
      iVar2 = (**(code **)(*(int *)pThisObj + 0x1c))(0x1111,auStack_5c + 4);
      if (iVar2 != 0) {
        return local_78;
      }
      if (uStack_70 == (double)CONCAT44(auStack_54._0_4_,auStack_5c._4_4_)) {
        return local_78;
      }
      (**(code **)(*(int *)pThisObj + 0x30))(0x1111,&uStack_70);
      return (int)unaff_EBX;
    }
    if (param_2 == 0x1112) {
      iVar2 = (**(code **)(*(int *)pThisObj + 0x1c))(0x1117,&local_64);
      if (iVar2 != 0) {
        return local_78;
      }
      fVar3 = FUN_10002a20(*local_7c,local_64);
      uStack_70 = (double)fVar3;
      iVar2 = (**(code **)(*(int *)pThisObj + 0x1c))(0x1112,auStack_5c + 4);
      if (iVar2 != 0) {
        return local_78;
      }
      if (uStack_70 == (double)CONCAT44(auStack_54._0_4_,auStack_5c._4_4_)) {
        return local_78;
      }
      (**(code **)(*(int *)pThisObj + 0x30))(0x1112,&uStack_70);
      return (int)unaff_EBX;
    }
    iVar2 = (**(code **)(*(int *)pThisObj + 0x1c))(param_2,&local_74);
    if (iVar2 != 0) {
      return local_78;
    }
    if (local_74 == *local_7c) {
      return local_78;
    }
    goto LAB_10005a94;
  case 1:
    if (param_2 != 0x1114) {
      return local_78;
    }
    (**(code **)(*(int *)pThisObj + 0x1c))(0x1118,local_60);
    (**(code **)(*(int *)pThisObj + 0x1c))(0x1119,&local_64);
    iVar2 = (int)uStack_70;
    fVar3 = FUN_10002a20(*local_7c,(int)uStack_70);
    unique0x0000aa00 = (double)fVar3;
    fVar3 = FUN_10002a20(local_7c[1],uStack_70._4_4_);
    auStack_54._4_8_ = (undefined8)fVar3;
    fVar3 = FUN_10002a20(local_7c[2] + *local_7c,iVar2);
    dStack_48 = (double)fVar3;
    fVar3 = FUN_10002a20(local_7c[3] + local_7c[1],uStack_70._4_4_);
    dStack_40 = (double)fVar3;
    (**(code **)(*(int *)pThisObj + 0x1c))(0x1114,&dStack_38);
    if ((((dStack_48 == dStack_28) && (dStack_40 == dStack_20)) && (dStack_38 == dStack_18)) &&
       (dStack_30 == dStack_10)) {
      return local_78;
    }
    (**(code **)(*(int *)pThisObj + 0x30))(0x1114,&dStack_48);
    return (int)unaff_EBX;
  case 2:
    (**(code **)(*(int *)pThisObj + 0x1c))(param_2,&local_74);
    local_7c = local_7c + 4;
    break;
  case 3:
    (**(code **)(*(int *)pThisObj + 0x1c))(param_2,&local_74);
    local_7c = local_7c + 1;
    break;
  default:
    goto switchD_10005815_default;
  }
  if (local_74 != *local_7c) {
LAB_10005a94:
    (**(code **)(*(int *)pThisObj + 0x30))(param_2,local_7c);
  }
switchD_10005815_default:
  return local_78;
}



/**************************************************/

/* Function: OpenIopManager @ 10005ad0 */

/* public: virtual int __thiscall Iop_Manager::OpenIopManager(wchar_t const *,class FG_String &) */

int __thiscall Iop_Manager::OpenIopManager(Iop_Manager *this,wchar_t *param_1,FG_String *param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  ScannerInterface *this_00;
  ulong uVar4;
  wchar_t *pwVar5;
  int *piVar6;
  uint uStack_40;
  int local_30 [5];
  ScannerInterface *local_1c;
  Iop_Manager *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  long local_8;
  
                    /* 0x5ad0  65  ?OpenIopManager@Iop_Manager@@UAEHPB_WAAVFG_String@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001ca53;
  local_10 = ExceptionList;
  uStack_40 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_18 = this;
  puVar1 = &uStack_40;
  if (DAT_100271c4 == 0) {
    DAT_100271c4 = FUN_1000b830(DAT_100271c0);
    FUN_1000acb0(0xa3,&DAT_10026fb0,0x208,0,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  iVar2 = CheckOSUpgrade(this,DAT_100271c0);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return -0x7fffff98;
  }
  lVar3 = Read_DeviceParamFile(this);
  if (lVar3 == 0) {
    local_8 = lVar3;
    local_1c = (ScannerInterface *)FUN_1000ce3e(0x30);
    local_8._0_1_ = 1;
    if (local_1c == (ScannerInterface *)0x0) {
      this_00 = (ScannerInterface *)0x0;
    }
    else {
      this_00 = (ScannerInterface *)
                ScannerInterface::ScannerInterface(local_1c,param_1,ScanEventProc);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    *(ScannerInterface **)(this + 0x314) = this_00;
    uVar4 = ScannerInterface::Open(this_00);
    if ((int)uVar4 < 0) {
      if ((uVar4 == 0xfffffffe) || (uVar4 == 0xfffffffd)) {
        lVar3 = -0x3fff000e;
      }
      else {
        lVar3 = -0x3fff0014;
      }
    }
    else {
      lVar3 = InitCapability(this);
    }
    local_8 = 0xffffffff;
    if (lVar3 == 0) {
      FUN_10008de0(local_30);
      local_8 = 3;
      pwVar5 = ScannerInterface::GetKeyName(*(ScannerInterface **)(this + 0x314));
      FUN_1000a540(local_30,pwVar5);
      param_1 = (wchar_t *)0xf;
      piVar6 = (int *)(**(code **)(local_30[0] + 0xc))(L"SensorType");
      (**(code **)(*piVar6 + 0x10))(&param_1,4,1);
      FUN_1000a570(local_30,pwVar5);
      local_8 = 0xffffffff;
      FUN_1000a6f0(local_30);
      ExceptionList = local_10;
      return 0;
    }
  }
  FormatErrorString(this,lVar3,param_2);
  ExceptionList = local_10;
  return lVar3;
}



/**************************************************/

/* Function: Catch@10005c5a @ 10005c5a */

undefined * Catch_10005c5a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = 0xc000fffd;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return &DAT_10005c6e;
}



/**************************************************/

/* Function: SynchronizeCaps @ 10005c90 */

/* private: void __thiscall Iop_Manager::SynchronizeCaps(long) */

void __thiscall Iop_Manager::SynchronizeCaps(Iop_Manager *this,long param_1)

{
  undefined1 local_26c [4];
  undefined1 local_268 [4];
  int local_264;
  ulong local_260;
  ulong local_25c;
  ulong uStack_258;
  ulong uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  IopPaperSize local_230 [16];
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5c90  84  ?SynchronizeCaps@Iop_Manager@@AAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ca7b;
  local_c = ExceptionList;
  local_10 = DAT_10025bf4 ^ (uint)local_26c;
  ExceptionList = &local_c;
  if (DAT_100271e8 != 0) goto LAB_10005ef7;
  DAT_100271e8 = 1;
  if (param_1 < 0x1119) {
    if (param_1 == 0x1118) {
      (**(code **)(*(int *)this + 0x1c))(0x1118,local_26c);
      SetCurrentCapabilityNoSyn(this,0x1119,local_26c);
    }
    else if (param_1 < 0x1104) {
      if (param_1 == 0x1103) {
LAB_10005d14:
        (**(code **)(*(int *)this + 0x1c))(0x101,&local_264);
        if (local_264 != 0) {
          *(undefined4 *)(this + 0x39c) = 1;
        }
      }
      else if (param_1 == 0x101) {
        (**(code **)(*(int *)this + 0x1c))(0x101,&local_25c);
        TranslatePxelTypeToBppAndClass(this,local_25c,&uStack_254,&uStack_258);
        SynchronizeBitdepths(this,uStack_258);
      }
      else if (param_1 == 0x1101) goto LAB_10005d14;
    }
    else if (param_1 == 0x1108) {
      *(undefined4 *)(this + 0x39c) = 2;
    }
    else if ((0x1110 < param_1) && (param_1 < 0x1113)) {
      ValidateSupportedsizesFinalRange(this);
      ResetCurrentCap(this,0x1122);
    }
  }
  else {
    switch(param_1) {
    case 0x1119:
      (**(code **)(*(int *)this + 0x1c))(0x1119,local_26c);
      SetCurrentCapabilityNoSyn(this,0x1118,local_26c);
      break;
    case 0x1122:
      IopPaperSize::IopPaperSize(local_230);
      local_4 = 0;
      (**(code **)(*(int *)this + 0x1c))(0x1122,&local_260);
      if (local_260 != 0) {
        IopPaperSize::SetPaperSize(local_230,local_260);
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_240 = uStack_220;
        uStack_238 = uStack_218;
        SetCurrentCapabilityNoSyn(this,0x1114,&uStack_250);
      }
      local_4 = 0xffffffff;
      IopPaperSize::~IopPaperSize(local_230);
      break;
    case 0x1124:
      (**(code **)(*(int *)this + 0x1c))(0x1124,local_268);
      SetCurrentCapabilityNoSyn(this,0x1125,local_268);
      break;
    case 0x1125:
      (**(code **)(*(int *)this + 0x1c))(0x1125,local_268,DAT_10025bf4 ^ (uint)&stack0xfffffd90);
      SetCurrentCapabilityNoSyn(this,0x1124,local_268);
    }
  }
  DAT_100271e8 = DAT_100271e8 + -1;
LAB_10005ef7:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_26c);
  return;
}



/**************************************************/

/* Function: ResetCurrentCap @ 10005f50 */

/* public: int __thiscall Iop_Manager::ResetCurrentCap(long) */

int __thiscall Iop_Manager::ResetCurrentCap(Iop_Manager *this,long param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x5f50  71  ?ResetCurrentCap@Iop_Manager@@QAEHJ@Z */
  piVar1 = (int *)FUN_10001010(*(void **)(this + 0x398),param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (iVar2 == 0) {
      SynchronizeCaps(this,param_1);
    }
    return iVar2;
  }
  return -0x3fff0005;
}



/**************************************************/

/* Function: TranslateClassToCompBpp @ 10005fa0 */

/* private: int __thiscall Iop_Manager::TranslateClassToCompBpp(int,unsigned long *,unsigned long *)
    */

int __thiscall
Iop_Manager::TranslateClassToCompBpp(Iop_Manager *this,int param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  
                    /* 0x5fa0  85  ?TranslateClassToCompBpp@Iop_Manager@@AAEHHPAK0@Z */
  iVar1 = 0;
  switch(param_1) {
  case 0:
  case 4:
    *param_2 = 0;
    *param_3 = 1;
    return iVar1;
  case 1:
    *param_2 = 1;
    *param_3 = 8;
    return iVar1;
  case 2:
    *param_2 = 3;
    *param_3 = 8;
    return iVar1;
  case 3:
    *param_2 = 2;
    *param_3 = 0x18;
    return iVar1;
  case 5:
    *param_2 = 1;
    *param_3 = 0x10;
    return iVar1;
  case 6:
    *param_2 = 2;
    *param_3 = 0x30;
    return iVar1;
  default:
    return -0x3fff0005;
  }
}



/**************************************************/

/* Function: SynchronizeCapWithDriver @ 10006060 */

/* private: void __thiscall Iop_Manager::SynchronizeCapWithDriver(long,void *) */

void __thiscall Iop_Manager::SynchronizeCapWithDriver(Iop_Manager *this,long param_1,void *param_2)

{
  long lVar1;
  byte bVar2;
  Iop_Manager *local_4;
  
                    /* 0x6060  83  ?SynchronizeCapWithDriver@Iop_Manager@@AAEXJPAX@Z */
  lVar1 = param_1;
  if (((param_1 != 0x1114) && (param_1 != 0x1111)) && (param_1 != 0x1112)) {
    local_4 = this;
    bVar2 = FUN_100010a0(*(void **)(this + 0x398),param_1);
    if ((bVar2 & 2) != 0) {
      ScannerInterface::GetCapability
                (*(ScannerInterface **)(this + 0x314),lVar1,(int *)&local_4,(void **)&param_1);
      m_ignoreScanEvent = lVar1;
      ScannerInterface::SetCapability(*(ScannerInterface **)(this + 0x314),lVar1,*(ulong *)param_2);
      m_ignoreScanEvent = 0;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_100060e0 @ 100060e0 */

void __thiscall
FUN_100060e0(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_7;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = IopCapCurve::vftable;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x14);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x114);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_6;
    param_6 = param_6 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



/**************************************************/

/* Function: FUN_10006140 @ 10006140 */

undefined4 FUN_10006140(void)

{
  return 0xc000fffb;
}



/**************************************************/

/* Function: FUN_10006150 @ 10006150 */

undefined4 __thiscall FUN_10006150(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x14);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10006170 @ 10006170 */

undefined4 __thiscall FUN_10006170(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x14);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10006190 @ 10006190 */

undefined4 __thiscall FUN_10006190(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x114);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100061b0 @ 100061b0 */

undefined4 __fastcall FUN_100061b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x114);
  puVar3 = (undefined4 *)(param_1 + 0x14);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100061d0 @ 100061d0 */

undefined4 FUN_100061d0(void)

{
  return 0xc000fffb;
}



/**************************************************/

/* Function: FUN_100061e0 @ 100061e0 */

undefined4 __thiscall FUN_100061e0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x114);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10006200 @ 10006200 */

undefined4 __thiscall FUN_10006200(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)((int)this + iVar1 + 0x14) = *(undefined1 *)(iVar1 + param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10006230 @ 10006230 */

undefined4 * __thiscall
FUN_10006230(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,void *param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = IopCapCurve16::vftable;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_7;
  _memcpy((void *)((int)this + 0x14),param_6,0x20000);
  _memcpy((void *)((int)this + 0x20014),param_6,0x20000);
  return this;
}



/**************************************************/

/* Function: FUN_100062a0 @ 100062a0 */

undefined4 __thiscall FUN_100062a0(void *this,void *param_1)

{
  _memcpy((void *)((int)this + 0x14),param_1,0x20000);
  return 0;
}



/**************************************************/

/* Function: FUN_100062c0 @ 100062c0 */

undefined4 __thiscall FUN_100062c0(void *this,void *param_1)

{
  _memcpy(param_1,(void *)((int)this + 0x14),0x20000);
  return 0;
}



/**************************************************/

/* Function: FUN_100062e0 @ 100062e0 */

undefined4 __thiscall FUN_100062e0(void *this,void *param_1)

{
  _memcpy(param_1,(void *)((int)this + 0x20014),0x20000);
  return 0;
}



/**************************************************/

/* Function: FUN_10006300 @ 10006300 */

undefined4 __fastcall FUN_10006300(int param_1)

{
  _memcpy((void *)(param_1 + 0x14),(void *)(param_1 + 0x20014),0x20000);
  return 0;
}



/**************************************************/

/* Function: FUN_10006320 @ 10006320 */

undefined4 __thiscall FUN_10006320(void *this,void *param_1)

{
  _memcpy((void *)((int)this + 0x20014),param_1,0x20000);
  return 0;
}



/**************************************************/

/* Function: FUN_10006340 @ 10006340 */

undefined4 __thiscall FUN_10006340(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = 0;
  if (0 < param_2) {
    puVar2 = (undefined2 *)((int)this + 0x14);
    do {
      *puVar2 = *(undefined2 *)(param_1 + iVar1 * 2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}



/**************************************************/

/* Function: InitRegistryInfo @ 10006370 */

/* private: void __thiscall Iop_Manager::InitRegistryInfo(void) */

void __thiscall Iop_Manager::InitRegistryInfo(Iop_Manager *this)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  LPCWSTR pWVar5;
  uint local_450;
  int local_44c [4];
  undefined1 auStack_43c [4];
  uint uStack_438;
  undefined4 local_434 [4];
  undefined1 auStack_424 [4];
  undefined1 auStack_420 [516];
  undefined1 auStack_21c [4];
  WCHAR aWStack_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x6370  60  ?InitRegistryInfo@Iop_Manager@@AAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cac6;
  local_c = ExceptionList;
  local_10 = DAT_10025bf4 ^ (uint)&local_450;
  ExceptionList = &local_c;
  FUN_10008de0(local_44c);
  local_4 = 0;
  FUN_10008de0(local_434);
  local_4 = CONCAT31(local_4._1_3_,1);
  pwVar1 = ScannerInterface::GetKeyName(*(ScannerInterface **)(this + 0x314));
  FUN_1000a4e0(local_434,pwVar1);
  FUN_1000a540(local_44c,pwVar1);
  iVar2 = FUN_10008e50(local_44c,L"Film Type");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"Film Type");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"FilmCutSmall");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"FilmCutSmall");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"Color ColorMatch");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"Color ColorMatch");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"Gray ColorMatch");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"Gray ColorMatch");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"HiQualityScan");
  if (iVar2 == 0) {
    local_450 = 1;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"HiQualityScan");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"ColorMatch Platen");
  if (iVar2 == 0) {
    _memset(auStack_420,0,0x208);
    FUN_1000acb0(0x96,auStack_420,0x208,0,0);
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"ColorMatch Platen");
    (**(code **)(*piVar3 + 0x14))(auStack_424,2);
  }
  iVar2 = FUN_10008e50(local_44c,L"ColorMatch Neg");
  if (iVar2 == 0) {
    _memset(auStack_420,0,0x208);
    FUN_1000acb0(0x97,auStack_420,0x208,0,0);
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"ColorMatch Neg");
    (**(code **)(*piVar3 + 0x14))(auStack_424,2);
  }
  iVar2 = FUN_10008e50(local_44c,L"ColorMatch Pos");
  if (iVar2 == 0) {
    _memset(auStack_420,0,0x208);
    FUN_1000acb0(0x98,auStack_420,0x208,0,0);
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"ColorMatch Pos");
    (**(code **)(*piVar3 + 0x14))(auStack_424,2);
  }
  iVar2 = FUN_10008e50(local_44c,L"ThumbCutOutSize");
  if (iVar2 == 0) {
    local_450 = 1;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"ThumbCutOutSize");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"RemoveWF");
  if (iVar2 == 0) {
    uVar4 = ScannerInterface::GetDeviceID(*(ScannerInterface **)(this + 0x314));
    local_450 = (uint)(uVar4 != 0);
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"RemoveWF");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"SilentMode");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"SilentMode");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"MonitorCorrect");
  if (iVar2 == 0) {
    local_450 = 1;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"MonitorCorrect");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"UserTempFolder");
  if (iVar2 == 0) {
LAB_10006770:
    FUN_1000ad70(1,aWStack_218);
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"UserTempFolder");
    (**(code **)(*piVar3 + 0x14))(auStack_21c,2);
  }
  else {
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"UserTempFolder");
    pWVar5 = (LPCWSTR)(**(code **)(*piVar3 + 8))();
    iVar2 = FUN_1000af90(pWVar5);
    if (iVar2 == 0) goto LAB_10006770;
  }
  iVar2 = FUN_10008e50(local_44c,L"DataFolder");
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"DataFolder");
    pWVar5 = (LPCWSTR)(**(code **)(*piVar3 + 8))();
    iVar2 = FUN_1000af90(pWVar5);
    if (iVar2 != 0) goto LAB_10006817;
  }
  FUN_1000ad70(0,aWStack_218);
  piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"DataFolder");
  (**(code **)(*piVar3 + 0x14))(auStack_21c,2);
LAB_10006817:
  iVar2 = FUN_10008e50(local_44c,L"ScanStartSound_Sw");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"ScanStartSound_Sw");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"ScanStartSound_File");
  if (iVar2 == 0) {
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"ScanStartSound_File");
    (**(code **)(*piVar3 + 0x14))(&DAT_1001e90c,2);
  }
  iVar2 = FUN_10008e50(local_44c,L"ScanEndSound_Sw");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"ScanEndSound_Sw");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"ScanEndSound_File");
  if (iVar2 == 0) {
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"ScanEndSound_File");
    (**(code **)(*piVar3 + 0x14))(&DAT_1001e90c,2);
  }
  iVar2 = FUN_10008e50(local_44c,L"Image Type FAUCOL ThumbSize");
  if (iVar2 == 0) {
    local_450 = 100;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"Image Type FAUCOL ThumbSize");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"Image Type FAUMON ThumbSize");
  if (iVar2 == 0) {
    local_450 = 100;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"Image Type FAUMON ThumbSize");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"SensorType");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"SensorType");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"MonitorGamma");
  if (iVar2 == 0) {
    local_450 = 0x898;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"MonitorGamma");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"DetailInfoBtn");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"DetailInfoBtn");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"SG_SecondBoot");
  if (iVar2 == 0) {
    local_450 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"SG_SecondBoot");
    (**(code **)(*piVar3 + 0x10))(&stack0xfffffbac,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"LampOffTime");
  if (iVar2 == 0) {
    FUN_1000acb0(0x119,&local_450,0,0,0);
    uStack_438 = local_450;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"LampOffTime");
    (**(code **)(*piVar3 + 0x10))(auStack_43c,4,1);
  }
  iVar2 = FUN_10008e50(local_44c,L"Execute Every Scan");
  if (iVar2 == 0) {
    uStack_438 = 0;
    piVar3 = (int *)(**(code **)(local_44c[0] + 0xc))(L"Execute Every Scan");
    (**(code **)(*piVar3 + 0x10))(auStack_43c,4,1);
  }
  FUN_1000a570(local_44c,pwVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_1000a6f0(local_434);
  local_4 = 0xffffffff;
  FUN_1000a6f0(local_44c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_450);
  return;
}



/**************************************************/

/* Function: FUN_10006b40 @ 10006b40 */

void __thiscall
FUN_10006b40(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = IopCap_ColorProfile::vftable;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_6;
  return;
}



/**************************************************/

/* Function: FUN_10006b80 @ 10006b80 */

void __fastcall FUN_10006b80(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10006b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/**************************************************/

/* Function: GetPixel @ 10006b90 */

/* public: virtual unsigned long __thiscall CImageAnalysis::GetPixel(int,int) */

ulong __thiscall CImageAnalysis::GetPixel(CImageAnalysis *this,int param_1,int param_2)

{
                    /* 0x6b90  50  ?GetPixel@CImageAnalysis@@UAEKHH@Z */
  return 0;
}



/**************************************************/

/* Function: FUN_10006ba0 @ 10006ba0 */

undefined4 FUN_10006ba0(void)

{
  return 0;
}



/**************************************************/

/* Function: FUN_10006bb0 @ 10006bb0 */

undefined4 * __thiscall FUN_10006bb0(void *this,byte param_1)

{
  *(undefined ***)this = IopCapBase::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: FUN_10006be0 @ 10006be0 */

undefined4 __fastcall FUN_10006be0(int param_1,int param_2)

{
  int unaff_ESI;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      if ((param_2 != 0x18) && (param_2 != 0x30)) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 2) {
      if ((unaff_ESI != 0) && (unaff_ESI != 4)) {
        if ((param_2 != 0x18) && (param_2 != 0x30)) {
          return 0;
        }
        return 2;
      }
      if ((((param_2 == 0x18) || (param_2 == 0x30)) || (param_2 == 8)) || (param_2 == 0x10)) {
        return 2;
      }
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10006c60 @ 10006c60 */

void FUN_10006c60(char *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  LPCWSTR pWVar3;
  int unaff_EDI;
  int iVar4;
  wchar_t *lpString2;
  ulong uStack_368;
  ulong *puStack_364;
  int iStack_360;
  undefined1 *puVar5;
  undefined1 auStack_348 [4];
  undefined1 local_344 [4];
  ulong uStack_340;
  CHAR aCStack_33c [8];
  undefined4 local_334 [63];
  WCHAR aWStack_238 [260];
  uint uStack_30;
  void *pvStack_2c;
  undefined4 uStack_24;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = DAT_10025bf4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cb0b;
  local_c = ExceptionList;
  local_10 = (uint)DAT_10025bf4 ^ (uint)auStack_348;
  ExceptionList = &local_c;
  FUN_10008de0(local_334);
  local_4 = 0;
  iStack_360 = 0x10006cc4;
  FUN_1000a990(local_334,DAT_100271c0);
  puVar5 = local_344;
  iStack_360 = 0x83ed;
  puStack_364 = (ulong *)0x10006cdb;
  (**(code **)(*(int *)Iop_Manager::pThisObj + 0x1c))();
  puStack_364 = &uStack_340;
  uStack_368 = 0x111e;
  (**(code **)(*(int *)Iop_Manager::pThisObj + 0x1c))();
  (**(code **)(*(int *)Iop_Manager::pThisObj + 0x1c))(0x842f,&stack0xfffffcb0);
  (**(code **)(*(int *)Iop_Manager::pThisObj + 0x1c))(0x101,&stack0xfffffcac);
  Iop_Manager::TranslatePxelTypeToBppAndClass
            (Iop_Manager::pThisObj,(ulong)puVar5,&uStack_368,&uStack_340);
  switch(uStack_368) {
  case 0:
    uStack_368 = 1;
    break;
  case 1:
    uStack_368 = 8;
    break;
  case 2:
  case 3:
    uStack_368 = 0x18;
    break;
  case 5:
    uStack_368 = 0x10;
    break;
  case 6:
    uStack_368 = 0x30;
  }
  puStack_364 = (ulong *)FUN_10006be0((int)puStack_364,uStack_368);
  if (puStack_364 == (ulong *)0x0) {
    _strcpy_s(param_1,0xff,"sRGB");
  }
  else {
    if (puStack_364 == (ulong *)0x1) {
      piVar2 = (int *)(**(code **)(unaff_EDI + 0xc))(L"ColorMatch Output");
      pWVar3 = (LPCWSTR)(**(code **)(*piVar2 + 8))();
      iVar4 = 0x104;
    }
    else {
      if (puStack_364 != (ulong *)0x2) goto LAB_10006e5f;
      if (puVar1 == &stack0xfffffcac) {
        lpString2 = L"ColorMatch Platen";
      }
      else if ((iStack_360 == 0) || (iStack_360 == 2)) {
        lpString2 = L"ColorMatch Neg";
      }
      else {
        lpString2 = L"ColorMatch Pos";
      }
      lstrcpyW(aWStack_238,lpString2);
      piVar2 = (int *)(**(code **)(unaff_EDI + 0xc))(aWStack_238);
      pWVar3 = (LPCWSTR)(**(code **)(*piVar2 + 8))();
      iVar4 = 0xff;
    }
    FUN_1000bce0(aCStack_33c,iVar4,pWVar3);
    _strcpy_s(param_1,0xff,aCStack_33c);
  }
LAB_10006e5f:
  uStack_24 = 0xffffffff;
  FUN_1000a6f0((undefined4 *)&stack0xfffffcac);
  ExceptionList = pvStack_2c;
  __security_check_cookie(uStack_30 ^ (uint)&uStack_368);
  return;
}



/**************************************************/

/* Function: InitCapAppFlag @ 10006ec0 */

/* private: int __thiscall Iop_Manager::InitCapAppFlag(void) */

int __thiscall Iop_Manager::InitCapAppFlag(Iop_Manager *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x6ec0  56  ?InitCapAppFlag@Iop_Manager@@AAEHXZ */
  iVar2 = 0;
  iVar1 = (**(code **)(**(int **)(this + 0x398) + 8))();
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(**(int **)(this + 0x398) + 4))(iVar2);
      *(undefined4 *)(iVar1 + 0x10) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(**(int **)(this + 0x398) + 8))();
    } while (iVar2 < iVar1);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10006f10 @ 10006f10 */

void __thiscall
FUN_10006f10(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined4 *)((int)this + 0x18) = param_6;
  *(undefined4 *)((int)this + 0x1c) = param_6;
  *(undefined ***)this = IopCapOneValue<unsigned_long>::vftable;
  *(undefined4 *)((int)this + 0x20) = param_7;
  *(undefined4 *)((int)this + 0x24) = param_8;
  *(undefined4 *)((int)this + 0xc) = 1;
  return;
}



/**************************************************/

/* Function: FUN_10006f70 @ 10006f70 */

void __thiscall
FUN_10006f70(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = param_7;
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 10) = param_7;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 0xc) = param_8;
  *(undefined1 *)((int)param_1 + 9) = param_4;
  *(undefined8 *)(param_1 + 0xe) = param_9;
  param_1[4] = 0;
  *param_1 = IopCapOneValue<double>::vftable;
  *(undefined1 *)((int)param_1 + 10) = param_5;
  *(undefined1 *)((int)param_1 + 0xb) = param_6;
  param_1[3] = 1;
  return;
}



/**************************************************/

/* Function: FUN_10006fd0 @ 10006fd0 */

void __thiscall
FUN_10006fd0(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = param_6;
  *(undefined4 *)((int)this + 0x30) = param_7;
  *(undefined4 *)((int)this + 0x20) = param_6;
  *(undefined4 *)((int)this + 0x24) = param_7;
  *(undefined4 *)((int)this + 0x34) = param_8;
  *(undefined4 *)((int)this + 0x28) = param_8;
  *(undefined ***)this = IopCapRange<unsigned_long>::vftable;
  *(undefined4 *)((int)this + 0x38) = param_9;
  *(undefined4 *)((int)this + 0x3c) = param_10;
  *(undefined4 *)((int)this + 0xc) = 1;
  return;
}



/**************************************************/

/* Function: FUN_10007050 @ 10007050 */

void __thiscall
FUN_10007050(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,int param_6,uint param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_1001cb48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 0xb) = param_5;
  *(undefined1 *)((int)this + 9) = param_3;
  *(undefined1 *)((int)this + 10) = param_4;
  *(undefined ***)this = IopCapArray<unsigned_long>::vftable;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_8 = 1;
  uStack_7 = 0;
  uVar1 = thunk_FUN_1000ce3e(-(uint)((int)((ulonglong)param_7 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_7 * 4));
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  _local_8 = CONCAT31(uStack_7,2);
  uVar1 = thunk_FUN_1000ce3e(-(uint)((int)((ulonglong)param_7 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_7 * 4));
  *(undefined4 *)((int)this + 0x24) = uVar1;
  for (iVar2 = 0; iVar2 < (int)param_7; iVar2 = iVar2 + 1) {
    *(undefined4 *)(*(int *)((int)this + 0x1c) + iVar2 * 4) = *(undefined4 *)(param_6 + iVar2 * 4);
    *(undefined4 *)(*(int *)((int)this + 0x24) + iVar2 * 4) = *(undefined4 *)(param_6 + iVar2 * 4);
  }
  *(uint *)((int)this + 0x20) = param_7;
  *(uint *)((int)this + 0x28) = param_7;
  *(undefined4 *)((int)this + 0x2c) = param_8;
  *(undefined4 *)((int)this + 0x30) = param_9;
  *(undefined4 *)((int)this + 0xc) = 1;
  FUN_1000716c();
  return;
}



/**************************************************/

/* Function: Catch@10007137 @ 10007137 */

void Catch_10007137(void)

{
  int unaff_EBP;
  
  _free(*(void **)(*(int *)(unaff_EBP + -0x14) + 0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: Catch@1000714f @ 1000714f */

undefined * Catch_1000714f(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return &DAT_10007169;
}



/**************************************************/

/* Function: FUN_1000716c @ 1000716c */

void FUN_1000716c(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/**************************************************/

/* Function: FUN_10007190 @ 10007190 */

void __thiscall
FUN_10007190(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17,undefined8 param_18)

{
  *(undefined8 *)(param_1 + 6) = param_7;
  *(undefined8 *)(param_1 + 8) = param_8;
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 10) = param_9;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 0xc) = param_10;
  *(undefined1 *)((int)param_1 + 9) = param_4;
  *(undefined8 *)(param_1 + 0x14) = param_10;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 0xe) = param_7;
  *param_1 = IopCapRectangle<double>::vftable;
  *(undefined1 *)((int)param_1 + 10) = param_5;
  *(undefined8 *)(param_1 + 0x10) = param_8;
  *(undefined1 *)((int)param_1 + 0xb) = param_6;
  param_1[3] = 1;
  *(undefined8 *)(param_1 + 0x12) = param_9;
  *(undefined8 *)(param_1 + 0x16) = param_11;
  *(undefined8 *)(param_1 + 0x18) = param_12;
  *(undefined8 *)(param_1 + 0x1a) = param_13;
  *(undefined8 *)(param_1 + 0x1c) = param_14;
  *(undefined8 *)(param_1 + 0x1e) = param_15;
  *(undefined8 *)(param_1 + 0x20) = param_16;
  *(undefined8 *)(param_1 + 0x22) = param_17;
  *(undefined8 *)(param_1 + 0x24) = param_18;
  return;
}



/**************************************************/

/* Function: SetSoftwareCap @ 10007240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: int __thiscall Iop_Manager::SetSoftwareCap(struct IOPCAPMATRIX) */

int __thiscall Iop_Manager::SetSoftwareCap(Iop_Manager *this,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *this_00;
  void *pvVar7;
  uint uStack_1d4;
  bad_alloc local_1c4 [12];
  bad_alloc local_1b8 [12];
  bad_alloc local_1ac [12];
  bad_alloc local_1a0 [12];
  bad_alloc local_194 [12];
  bad_alloc local_188 [12];
  bad_alloc local_17c [12];
  bad_alloc local_170 [12];
  undefined **local_164 [3];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  uint local_138;
  uint local_134;
  uint local_130;
  void *local_12c;
  int local_128;
  undefined1 local_124;
  char cStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 local_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  Iop_Manager *local_11c;
  undefined1 *local_118;
  void *local_114;
  undefined1 *puStack_110;
  int local_10c;
  undefined4 local_108 [64];
  uint local_8;
  
                    /* 0x7240  81  ?SetSoftwareCap@Iop_Manager@@AAEHUIOPCAPMATRIX@@@Z */
  local_10c = 0xffffffff;
  puStack_110 = &LAB_1001cb86;
  local_114 = ExceptionList;
  uStack_1d4 = DAT_10025bf4 ^ (uint)local_108;
  local_118 = (undefined1 *)&uStack_1d4;
  ExceptionList = &local_114;
  local_128 = param_2;
  local_124 = (undefined1)param_3;
  uVar3 = local_124;
  cStack_123 = (char)(param_3 >> 8);
  uStack_122 = (undefined1)(param_3 >> 0x10);
  uStack_121 = (undefined1)(param_3 >> 0x18);
  local_120 = SUB41(param_4,0);
  uStack_11f = (undefined1)((uint)param_4 >> 8);
  uStack_11e = (undefined1)((uint)param_4 >> 0x10);
  uStack_11d = (undefined1)((uint)param_4 >> 0x18);
  local_11c = this;
  local_8 = uStack_1d4;
  piVar4 = (int *)FUN_10001010(*(void **)(this + 0x398),param_2);
  local_10c = 0;
  switch(param_3 & 0xff) {
  case 1:
    if (cStack_123 != '\a') {
      if (piVar4 == (int *)0x0) {
        pvVar7 = (void *)FUN_1000ce3e(0x28);
        if (pvVar7 != (void *)0x0) {
          FUN_10006f10(pvVar7,local_128,uVar3,cStack_123,uStack_122,uStack_121,*param_4,*param_4,
                       param_4[1]);
        }
        iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
        if (iVar5 < 1) {
          std::bad_alloc::bad_alloc(local_1c4);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_1c4,&DAT_10021790);
        }
      }
      else {
        (**(code **)(*piVar4 + 0x28))(param_4 + 1,0);
      }
      break;
    }
    if (piVar4 == (int *)0x0) {
      puVar6 = (undefined4 *)FUN_1000ce3e(0x40);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_10006f70(puVar6,local_128,uVar3,7,uStack_122,uStack_121,*(undefined8 *)param_4,
                     *(undefined8 *)param_4,*(undefined8 *)(param_4 + 2));
      }
      iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
      if (iVar5 < 1) {
        std::bad_alloc::bad_alloc(local_1ac);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_1ac,&DAT_10021790);
      }
      break;
    }
    iVar5 = *piVar4;
    param_4 = param_4 + 2;
    goto LAB_10007350;
  case 2:
    if (piVar4 == (int *)0x0) {
      local_12c = (void *)FUN_1000ce3e(0x34);
      local_10c._0_1_ = 1;
      if (local_12c != (void *)0x0) {
        FUN_10007050(local_12c,local_128,uVar3,cStack_123,uStack_122,uStack_121,param_4[3],*param_4,
                     param_4[1],param_4[2]);
      }
      local_10c = (uint)local_10c._1_3_ << 8;
      iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
      if (iVar5 < 1) {
        std::bad_alloc::bad_alloc(local_188);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_188,&DAT_10021790);
      }
      break;
    }
    goto LAB_1000748e;
  case 3:
    local_138 = param_4[1];
    local_134 = *param_4;
    local_130 = param_4[2];
    if (piVar4 == (int *)0x0) {
      pvVar7 = (void *)FUN_1000ce3e(0x40);
      if (pvVar7 != (void *)0x0) {
        FUN_10006fd0(pvVar7,local_128,uVar3,cStack_123,uStack_122,uStack_121,local_138,local_134,
                     local_130,param_4[4],param_4[3]);
      }
      iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
      if (iVar5 < 1) {
        std::bad_alloc::bad_alloc(local_170);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_170,&DAT_10021790);
      }
    }
    else {
      (**(code **)(*piVar4 + 0x28))(&local_138,0);
    }
    break;
  case 4:
    uVar1 = *param_4;
    local_158 = (double)(int)uVar1;
    if ((int)uVar1 < 0) {
      local_158 = local_158 + _DAT_1001e520;
    }
    uVar2 = param_4[1];
    local_150 = (double)(int)uVar2;
    if ((int)uVar2 < 0) {
      local_150 = local_150 + _DAT_1001e520;
    }
    local_148 = (double)(int)(param_4[2] + uVar1);
    if ((int)(param_4[2] + uVar1) < 0) {
      local_148 = local_148 + _DAT_1001e520;
    }
    local_12c = (void *)(param_4[3] + uVar2);
    local_140 = (double)(int)local_12c;
    if ((int)local_12c < 0) {
      local_140 = local_140 + _DAT_1001e520;
    }
    if (piVar4 == (int *)0x0) {
      puVar6 = (undefined4 *)FUN_1000ce3e(0x98);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_10007190(puVar6,local_128,uVar3,cStack_123,uStack_122,uStack_121,local_158,local_150,
                     local_148,local_140,local_158,local_150,local_148,local_140,local_158,local_150
                     ,local_148,local_140);
      }
      iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
      if (iVar5 < 1) {
        std::bad_alloc::bad_alloc(local_1a0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_1a0,&DAT_10021790);
      }
    }
    else {
      (**(code **)(*piVar4 + 0x28))(&local_158,0);
    }
    break;
  case 6:
    for (iVar5 = 0; iVar5 < 0x100; iVar5 = iVar5 + 1) {
      *(char *)((int)local_108 + iVar5) = (char)iVar5;
    }
    if (piVar4 == (int *)0x0) {
      pvVar7 = (void *)FUN_1000ce3e(0x214);
      if (pvVar7 != (void *)0x0) {
        FUN_100060e0(pvVar7,local_128,6,2,0,0,local_108,1);
      }
      iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
      if (iVar5 < 1) {
        std::exception::exception((exception *)local_164,&PTR_s_bad_allocation_10025264,1);
        local_164[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_164,&DAT_10021790);
      }
    }
    else {
      (**(code **)(*piVar4 + 0x28))(local_108,0x100);
    }
    break;
  case 7:
    if (piVar4 == (int *)0x0) {
      local_12c = (void *)FUN_1000ce3e(0x34);
      local_10c._0_1_ = 2;
      if (local_12c != (void *)0x0) {
        FUN_10007050(local_12c,local_128,uVar3,cStack_123,uStack_122,uStack_121,param_4[3],*param_4,
                     param_4[1],param_4[2]);
      }
      local_10c = (uint)local_10c._1_3_ << 8;
      iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
      if (iVar5 < 1) {
        std::bad_alloc::bad_alloc(local_1b8);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_1b8,&DAT_10021790);
      }
      break;
    }
LAB_1000748e:
    (**(code **)(*piVar4 + 0x28))(param_4[3],*param_4);
    break;
  case 8:
    pvVar7 = _malloc(0x20000);
    if (pvVar7 != (void *)0x0) {
      for (iVar5 = 0; iVar5 < 0x10000; iVar5 = iVar5 + 1) {
        *(short *)((int)pvVar7 + iVar5 * 2) = (short)iVar5;
      }
      if (piVar4 == (int *)0x0) {
        this_00 = (void *)FUN_1000ce3e(0x40014);
        if (this_00 != (void *)0x0) {
          FUN_10006230(this_00,local_128,6,2,0,0,pvVar7,1);
        }
        iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
        if (iVar5 < 1) {
          std::bad_alloc::bad_alloc(local_17c);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_17c,&DAT_10021790);
        }
      }
      else {
        (**(code **)(*piVar4 + 0x28))(pvVar7);
      }
      _free(pvVar7);
    }
    break;
  case 9:
    if (piVar4 == (int *)0x0) {
      pvVar7 = (void *)FUN_1000ce3e(0x14);
      if (pvVar7 != (void *)0x0) {
        FUN_10006b40(pvVar7,local_128,uVar3,cStack_123,uStack_122,uStack_121,1);
      }
      iVar5 = FUN_10001000(*(int **)(local_11c + 0x398));
      if (iVar5 < 1) {
        std::bad_alloc::bad_alloc(local_194);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_194,&DAT_10021790);
      }
      break;
    }
    iVar5 = *piVar4;
    param_4 = (uint *)&DAT_1001eb54;
LAB_10007350:
    (**(code **)(iVar5 + 0x28))(param_4);
  }
  ExceptionList = local_114;
  iVar5 = __security_check_cookie(local_8 ^ (uint)local_108);
  return iVar5;
}



/**************************************************/

/* Function: Catch@10007857 @ 10007857 */

undefined * Catch_10007857(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = Iop_Manager::ErrorMessage(*(Iop_Manager **)(unaff_EBP + -0x14),-0x3fff0003);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  return &DAT_1000786d;
}



/**************************************************/

/* Function: ValidateSupportedsizesFinalRange @ 100078a0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* private: void __thiscall Iop_Manager::ValidateSupportedsizesFinalRange(void) */

void __thiscall Iop_Manager::ValidateSupportedsizesFinalRange(Iop_Manager *this)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  Iop_Manager *pIStack_33a4;
  int aiStack_33a0 [3];
  Iop_Manager *local_3394;
  int aiStack_3370 [9];
  undefined1 auStack_334c [36];
  undefined4 uStack_3328;
  double local_3320;
  undefined8 uStack_3318;
  wchar_t awStack_3310 [256];
  IopPaperSize aIStack_3110 [544];
  IopPaperSize aIStack_2ef0 [544];
  IopPaperSize aIStack_2cd0 [544];
  IopPaperSize aIStack_2ab0 [544];
  IopPaperSize aIStack_2890 [544];
  IopPaperSize aIStack_2670 [544];
  IopPaperSize aIStack_2450 [544];
  IopPaperSize aIStack_2230 [544];
  IopPaperSize aIStack_2010 [544];
  IopPaperSize aIStack_1df0 [544];
  IopPaperSize aIStack_1bd0 [516];
  undefined1 auStack_19cc [20];
  int aiStack_19b8 [6];
  double local_19a0 [811];
  uint uStack_48;
  void *pvStack_40;
  uint uStack_38;
  uint local_1c;
  Iop_Manager *pIStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x78a0  88  ?ValidateSupportedsizesFinalRange@Iop_Manager@@AAEXXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_1001cbf2;
  local_14 = ExceptionList;
  local_1c = DAT_10025bf4 ^ (uint)&pIStack_33a4;
  ExceptionList = &local_14;
  local_3394 = this;
  pIStack_18 = this;
  _eh_vector_constructor_iterator_
            (&local_3320,0x220,0xc,IopPaperSize::IopPaperSize,IopPaperSize::~IopPaperSize);
  iVar8 = 0;
  local_c = 0;
  _eh_vector_constructor_iterator_
            (local_19a0,0x220,0xc,IopPaperSize::IopPaperSize,IopPaperSize::~IopPaperSize);
  iVar10 = 0x1111;
  local_c = CONCAT31(local_c._1_3_,1);
  aiStack_33a0[1] = 0xc;
  (**(code **)(*(int *)this + 0x1c))();
  (**(code **)(*(int *)this + 0x1c))();
  local_3320 = (double)CONCAT44(aiStack_33a0[1],aiStack_33a0[0]);
  uStack_3318 = CONCAT44(local_3394,aiStack_33a0[2]);
  uStack_3328 = 0;
  _wcscpy_s(awStack_3310,0x100,L"platen");
  IopPaperSize::SetPaperSize(aIStack_3110,1);
  IopPaperSize::SetPaperSize(aIStack_2ef0,2);
  IopPaperSize::SetPaperSize(aIStack_2cd0,3);
  IopPaperSize::SetPaperSize(aIStack_2ab0,4);
  IopPaperSize::SetPaperSize(aIStack_2890,5);
  IopPaperSize::SetPaperSize(aIStack_2670,6);
  IopPaperSize::SetPaperSize(aIStack_2450,7);
  IopPaperSize::SetPaperSize(aIStack_2230,10);
  IopPaperSize::SetPaperSize(aIStack_2010,0x34);
  IopPaperSize::SetPaperSize(aIStack_1df0,0x35);
  IopPaperSize::SetPaperSize(aIStack_1bd0,0);
  iVar11 = 0;
  pdVar6 = local_19a0;
  pdVar5 = &local_3320;
  iVar12 = 0xc;
  do {
    if ((*pdVar5 < (double)CONCAT44(aiStack_33a0[1],aiStack_33a0[0]) !=
         (*pdVar5 == (double)CONCAT44(aiStack_33a0[1],aiStack_33a0[0]))) &&
       (pdVar5[1] <= (double)CONCAT44(local_3394,aiStack_33a0[2]))) {
      uVar2 = *(undefined4 *)(pdVar5 + -1);
      iVar8 = iVar11 + 1;
      *pdVar6 = *pdVar5;
      dVar1 = pdVar5[1];
      *(undefined4 *)(pdVar6 + -1) = uVar2;
      pdVar6[1] = dVar1;
      pdVar7 = pdVar5 + 2;
      pdVar9 = pdVar6 + 2;
      for (iVar11 = 0x80; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined4 *)pdVar9 = *(undefined4 *)pdVar7;
        pdVar7 = (double *)((int)pdVar7 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      pdVar6 = pdVar6 + 0x44;
      this = pIStack_33a4;
      iVar11 = iVar8;
    }
    pdVar5 = pdVar5 + 0x44;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  (**(code **)(*(int *)this + 0x2c))();
  (**(code **)(*(int *)this + 0x24))(0x1122);
  iVar11 = 0;
  iVar12 = 0;
  if (0 < iVar10) {
    do {
      iVar3 = 0;
      if (0 < iVar8) {
        piVar4 = aiStack_19b8;
        do {
          if (aiStack_3370[iVar11] == *piVar4) {
            aiStack_33a0[iVar12] = aiStack_3370[iVar11];
            iVar12 = iVar12 + 1;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x88;
        } while (iVar3 < iVar8);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar10);
  }
  (**(code **)(*(int *)this + 0x34))(0x1122,aiStack_33a0,&stack0xffffcc3c);
  uStack_38 = uStack_38 & 0xffffff00;
  _eh_vector_destructor_iterator_(auStack_19cc,0x220,0xc,IopPaperSize::~IopPaperSize);
  uStack_38 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_334c,0x220,0xc,IopPaperSize::~IopPaperSize);
  ExceptionList = pvStack_40;
  __security_check_cookie(uStack_48 ^ (uint)&stack0xffffcc30);
  return;
}



/**************************************************/

/* Function: InitDeviceCaps @ 10007ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: int __thiscall Iop_Manager::InitDeviceCaps(void) */

int __thiscall Iop_Manager::InitDeviceCaps(Iop_Manager *this)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint *puVar7;
  ulong uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  int *piVar17;
  uint uStack_e4;
  undefined **local_b4 [3];
  void *local_a8;
  undefined **local_a4 [3];
  undefined **local_98 [3];
  undefined1 *local_8c;
  void *local_88;
  undefined1 *puStack_84;
  int local_80;
  undefined **local_7c [3];
  int local_70;
  double local_6c;
  double local_64;
  double local_5c;
  double local_54;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  ulong local_28;
  int local_24;
  uint *local_20;
  Iop_Manager *local_1c;
  ulong *local_18;
  ulong local_14;
  undefined8 local_10;
  
                    /* 0x7ba0  59  ?InitDeviceCaps@Iop_Manager@@AAEHXZ */
  puStack_84 = &LAB_1001cc2b;
  local_88 = ExceptionList;
  uStack_e4 = DAT_10025bf4 ^ (uint)local_7c;
  local_8c = (undefined1 *)&uStack_e4;
  ExceptionList = &local_88;
  local_28 = 0;
  local_80 = 0;
  local_1c = this;
  ScannerInterface::GetCapabilityList(*(ScannerInterface **)(this + 0x314),&local_18,&local_28);
  uVar14 = 0;
  do {
    if (local_28 <= uVar14) {
      piVar17 = &local_44;
      uVar13 = 0x1116;
      (**(code **)(*(int *)this + 0x1c))();
      uVar16 = CONCAT44(uVar13,&local_30);
      uVar13 = 0x1111;
      (**(code **)(*(int *)this + 0x1c))();
      ScannerInterface::GetCapabilityFlags(*(ScannerInterface **)(this + 0x314),0x1111,&local_14);
      dVar3 = (double)local_30;
      if (local_30 < 0) {
        dVar3 = dVar3 + _DAT_1001e520;
      }
      local_10 = (double)local_44;
      if (local_44 < 0) {
        local_10 = local_10 + _DAT_1001e520;
      }
      local_10 = (dVar3 * _DAT_1001e518) / local_10;
      puVar10 = (undefined4 *)FUN_10001050(*(void **)(this + 0x398),0x1111);
      if (puVar10 != (undefined4 *)0x0) {
        (**(code **)*puVar10)(1,uVar13,uVar16,piVar17);
      }
      puVar10 = (undefined4 *)FUN_1000ce3e(0x40);
      if (puVar10 == (undefined4 *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_10003940(puVar10,0x1111,1,7,1,(char)local_14,local_10,local_10,local_10,1);
      }
      uVar16 = CONCAT44(uVar13,uVar11);
      iVar12 = FUN_10001000(*(int **)(this + 0x398));
      if (iVar12 < 1) {
        std::exception::exception((exception *)local_a4,&PTR_s_bad_allocation_10025264,1);
        local_a4[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_a4,&DAT_10021790);
      }
      (**(code **)(*(int *)this + 0x1c))(0x1117,&local_34,uVar16);
      (**(code **)(*(int *)this + 0x1c))(0x1112,&local_4c);
      ScannerInterface::GetCapabilityFlags(*(ScannerInterface **)(this + 0x314),0x1112,&local_14);
      dVar3 = (double)local_4c;
      if (local_4c < 0) {
        dVar3 = dVar3 + _DAT_1001e520;
      }
      local_10 = (double)local_34;
      if (local_34 < 0) {
        local_10 = local_10 + _DAT_1001e520;
      }
      local_10 = (dVar3 * _DAT_1001e518) / local_10;
      puVar10 = (undefined4 *)FUN_10001050(*(void **)(this + 0x398),0x1112);
      if (puVar10 != (undefined4 *)0x0) {
        (**(code **)*puVar10)(1);
      }
      puVar10 = (undefined4 *)FUN_1000ce3e(0x40);
      if (puVar10 == (undefined4 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_10003940(puVar10,0x1112,1,7,1,(char)local_14,local_10,local_10,local_10,1);
      }
      iVar12 = FUN_10001000(*(int **)(this + 0x398));
      if (0 < iVar12) {
        (**(code **)(*(int *)this + 0x1c))(0x1114,&local_6c,uVar13);
        (**(code **)(*(int *)this + 0x1c))(0x1118,&local_2c);
        (**(code **)(*(int *)this + 0x1c))(0x1119,&local_24);
        puVar10 = (undefined4 *)FUN_10001050(*(void **)(this + 0x398),0x1114);
        if (puVar10 != (undefined4 *)0x0) {
          (**(code **)*puVar10)(1);
        }
        dVar3 = (double)local_2c;
        if (local_2c < 0) {
          dVar3 = dVar3 + _DAT_1001e520;
        }
        local_10._0_4_ = (int)(longlong)ROUND(local_6c);
        dVar4 = (double)(int)local_10;
        if ((int)local_10 < 0) {
          dVar4 = dVar4 + _DAT_1001e520;
        }
        local_6c = (dVar4 * _DAT_1001e518) / dVar3;
        dVar4 = (double)local_24;
        if (local_24 < 0) {
          dVar4 = dVar4 + _DAT_1001e520;
        }
        local_10._0_4_ = (int)(longlong)ROUND(local_64);
        dVar5 = (double)(int)local_10;
        if ((int)local_10 < 0) {
          dVar5 = dVar5 + _DAT_1001e520;
        }
        local_64 = (dVar5 * _DAT_1001e518) / dVar4;
        local_10._0_4_ = (int)(longlong)ROUND(local_5c);
        dVar5 = (double)(int)local_10;
        if ((int)local_10 < 0) {
          dVar5 = dVar5 + _DAT_1001e520;
        }
        local_5c = (dVar5 * _DAT_1001e518) / dVar3;
        local_10 = (double)(longlong)ROUND(local_54);
        dVar3 = (double)(int)local_10;
        if ((int)local_10 < 0) {
          dVar3 = dVar3 + _DAT_1001e520;
        }
        local_54 = (dVar3 * _DAT_1001e518) / dVar4;
        ScannerInterface::GetCapabilityFlags(*(ScannerInterface **)(this + 0x314),0x1114,&local_14);
        puVar10 = (undefined4 *)FUN_1000ce3e(0x98);
        if (puVar10 != (undefined4 *)0x0) {
          FUN_10003c00(puVar10,0x1114,4,7,1,(char)local_14,local_6c,local_64,local_5c,local_54,
                       local_6c,local_64,local_5c,local_54,local_6c,local_64,local_5c,local_54,1);
        }
        iVar12 = FUN_10001000(*(int **)(this + 0x398));
        if (0 < iVar12) {
          local_80 = 0xffffffff;
          ScannerInterface::GetCapability
                    (*(ScannerInterface **)(this + 0x314),0x101,&local_70,&local_a8);
          iVar12 = FUN_10008284();
          return iVar12;
        }
        std::exception::exception((exception *)local_98,&PTR_s_bad_allocation_10025264,1);
        local_98[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_98,&DAT_10021790);
      }
      std::exception::exception((exception *)local_7c,&PTR_s_bad_allocation_10025264,1);
      local_7c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8((exception *)local_7c,&DAT_10021790);
    }
    local_14 = 0;
    uVar8 = ScannerInterface::GetCapability
                      (*(ScannerInterface **)(this + 0x314),local_18[uVar14],&local_48,&local_20);
    if (uVar8 == 0) {
      uVar8 = ScannerInterface::GetCapabilityUnits
                        (*(ScannerInterface **)(this + 0x314),local_18[uVar14]);
      ScannerInterface::GetCapabilityFlags
                (*(ScannerInterface **)(this + 0x314),local_18[uVar14],&local_14);
      puVar7 = local_20;
      uVar15 = (undefined1)uVar8;
      switch(local_48) {
      case 0:
        pvVar9 = (void *)FUN_1000ce3e(0x28);
        if (pvVar9 != (void *)0x0) {
          FUN_10003ab0(pvVar9,local_18[uVar14],1,6,uVar15,(char)local_14,*puVar7,*puVar7,puVar7[1],1
                      );
        }
        break;
      case 1:
        uVar1 = *local_20;
        dVar3 = (double)(int)uVar1;
        if ((int)uVar1 < 0) {
          dVar3 = dVar3 + _DAT_1001e520;
        }
        uVar2 = local_20[1];
        dVar4 = (double)(int)uVar2;
        if ((int)uVar2 < 0) {
          dVar4 = dVar4 + _DAT_1001e520;
        }
        dVar5 = (double)(int)(local_20[2] + uVar1);
        if ((int)(local_20[2] + uVar1) < 0) {
          dVar5 = dVar5 + _DAT_1001e520;
        }
        iVar12 = local_20[3] + uVar2;
        local_10 = (double)CONCAT44(iVar12,(int)local_10);
        dVar6 = (double)iVar12;
        if (iVar12 < 0) {
          dVar6 = dVar6 + _DAT_1001e520;
        }
        puVar10 = (undefined4 *)FUN_1000ce3e(0x98);
        if (puVar10 != (undefined4 *)0x0) {
          FUN_10003c00(puVar10,local_18[uVar14],4,7,uVar15,(char)local_14,dVar3,dVar4,dVar5,dVar6,
                       dVar3,dVar4,dVar5,dVar6,dVar3,dVar4,dVar5,dVar6,1);
        }
        break;
      case 2:
        local_40 = local_20[1];
        local_3c = *local_20;
        local_38 = local_20[2];
        pvVar9 = (void *)FUN_1000ce3e(0x40);
        if (pvVar9 != (void *)0x0) {
          FUN_10004000(pvVar9,local_18[uVar14],3,6,uVar15,(char)local_14,local_40,local_3c,local_38,
                       puVar7[4],puVar7[3],1);
        }
        break;
      case 3:
        pvVar9 = (void *)FUN_1000ce3e(0x34);
        local_10 = (double)CONCAT44(pvVar9,(int)local_10);
        local_80._0_1_ = 1;
        if (pvVar9 != (void *)0x0) {
          FUN_100042b0(pvVar9,local_18[uVar14],2,6,uVar15,(char)local_14,puVar7[3],*puVar7,puVar7[1]
                       ,puVar7[2],1);
        }
        local_80 = (uint)local_80._1_3_ << 8;
        break;
      default:
        goto switchD_10007c5a_default;
      }
      this = local_1c;
      iVar12 = FUN_10001000(*(int **)(local_1c + 0x398));
      if (iVar12 < 1) {
        std::exception::exception((exception *)local_b4,&PTR_s_bad_allocation_10025264,1);
        local_b4[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_b4,&DAT_10021790);
      }
    }
switchD_10007c5a_default:
    uVar14 = uVar14 + 1;
  } while( true );
}



/**************************************************/

/* Function: Catch@1000826b @ 1000826b */

undefined * Catch_1000826b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = Iop_Manager::ErrorMessage(*(Iop_Manager **)(unaff_EBP + 0x60),-0x3fff0003);
  *(int *)(unaff_EBP + 0x58) = iVar1;
  return &DAT_10008281;
}



/**************************************************/

/* Function: FUN_10008284 @ 10008284 */

void FUN_10008284(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/**************************************************/

/* Function: InitCapList @ 100082b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: int __thiscall Iop_Manager::InitCapList(void) */

int __thiscall Iop_Manager::InitCapList(Iop_Manager *this)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
                    /* 0x82b0  57  ?InitCapList@Iop_Manager@@AAEHXZ */
  iVar1 = (**(code **)(**(int **)(this + 0x398) + 8))();
  pvVar2 = _malloc(iVar1 * 4);
  *(void **)(this + 0x108) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    iVar1 = ErrorMessage(this,-0x3fff0003);
    return iVar1;
  }
  iVar3 = (**(code **)(**(int **)(this + 0x398) + 0x14))();
  if (iVar3 != 0) {
    iVar6 = 0;
    do {
      *(undefined4 *)(iVar6 + *(int *)(this + 0x108)) = *(undefined4 *)(iVar3 + 4);
      iVar6 = iVar6 + 4;
      iVar3 = (**(code **)(**(int **)(this + 0x398) + 0xc))();
    } while (iVar3 != 0);
  }
  _DAT_100271fc = *(undefined4 *)(this + 0x108);
  _DAT_100271f0 = iVar1;
  puVar4 = (undefined4 *)FUN_10001050(*(void **)(this + 0x398),0x1005);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
  iVar1 = 0;
  uVar5 = 0;
  do {
    if (*(int *)((int)&DAT_10025658 + uVar5) == 0x1005) {
      iVar1 = SetSoftwareCap(this,(&DAT_10025658)[iVar1 * 3],(&DAT_1002565c)[iVar1 * 3],
                             (&PTR_DAT_10025660)[iVar1 * 3]);
      return iVar1;
    }
    uVar5 = uVar5 + 0xc;
    iVar1 = iVar1 + 1;
  } while (uVar5 < 0x1bc);
  return 0;
}



/**************************************************/

/* Function: SynchronizeBitdepths @ 100083c0 */

/* private: int __thiscall Iop_Manager::SynchronizeBitdepths(unsigned long) */

int __thiscall Iop_Manager::SynchronizeBitdepths(Iop_Manager *this,ulong param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uStack_48;
  undefined **local_38 [3];
  undefined **local_2c [3];
  ulong local_20;
  void *local_1c;
  Iop_Manager *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  uVar1 = param_1;
                    /* 0x83c0  82  ?SynchronizeBitdepths@Iop_Manager@@AAEHK@Z */
  puStack_c = &LAB_1001cc66;
  local_10 = ExceptionList;
  uStack_48 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (param_1 == 0x18) {
    local_20 = param_1;
    local_1c = (void *)0x30;
    local_14 = (undefined1 *)&uStack_48;
    puVar2 = (undefined4 *)FUN_10001050(*(void **)(this + 0x398),0x112b);
    param_1 = FUN_1000ce3e(0x34);
    local_8._0_1_ = 1;
    if ((void *)param_1 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_10007050((void *)param_1,0x112b,2,6,0,0,(int)&local_20,2,0x18,0x18);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    iVar4 = FUN_10001000(*(int **)(this + 0x398));
    if (iVar4 < 1) {
      std::exception::exception((exception *)local_2c,&PTR_s_bad_allocation_10025264,1);
      local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_2c,&DAT_10021790);
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1,uVar3);
      ExceptionList = local_10;
      return 0;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_10001050(*(void **)(this + 0x398),0x112b);
    local_1c = (void *)FUN_1000ce3e(0x34);
    local_8._0_1_ = 2;
    if (local_1c == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_10007050(local_1c,0x112b,2,6,0,0,(int)&param_1,1,uVar1,uVar1);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    iVar4 = FUN_10001000(*(int **)(this + 0x398));
    if (iVar4 < 1) {
      std::exception::exception((exception *)local_38,&PTR_s_bad_allocation_10025264,1);
      local_38[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_38,&DAT_10021790);
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1,uVar3);
    }
  }
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@10008551 @ 10008551 */

undefined1 * Catch_10008551(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = Iop_Manager::ErrorMessage(*(Iop_Manager **)(unaff_EBP + -0x14),-0x3fff0003);
  *(int *)(unaff_EBP + 8) = iVar1;
  return &LAB_10008567;
}



/**************************************************/

/* Function: InitSoftwareCaps @ 10008580 */

/* WARNING: Removing unreachable block (ram,0x10008667) */
/* WARNING: Removing unreachable block (ram,0x1000865d) */
/* WARNING: Removing unreachable block (ram,0x10008662) */
/* WARNING: Removing unreachable block (ram,0x100086da) */
/* WARNING: Removing unreachable block (ram,0x1000866c) */
/* WARNING: Removing unreachable block (ram,0x10008681) */
/* WARNING: Removing unreachable block (ram,0x10008696) */
/* WARNING: Removing unreachable block (ram,0x100086a3) */
/* WARNING: Removing unreachable block (ram,0x100086d2) */
/* private: int __thiscall Iop_Manager::InitSoftwareCaps(void) */

int __thiscall Iop_Manager::InitSoftwareCaps(Iop_Manager *this)

{
  wchar_t *pwVar1;
  int *piVar2;
  LPCWSTR lpString1;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  wchar_t *local_3c;
  undefined1 local_38 [8];
  void *pvStack_30;
  void *local_28;
  int local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8580  61  ?InitSoftwareCaps@Iop_Manager@@AAEHXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cc98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10008de0(local_20);
  uVar4 = 0;
  local_4 = 0;
  local_3c = ScannerInterface::GetKeyName(*(ScannerInterface **)(this + 0x314));
  puVar5 = &DAT_10025658;
  do {
    pwVar1 = (wchar_t *)SetSoftwareCap(this,*puVar5,puVar5[1],puVar5[2]);
    if (pwVar1 != (wchar_t *)0x0) {
      local_4 = 0xffffffff;
      FUN_1000a6f0(local_20);
      ExceptionList = local_c;
      return (int)pwVar1;
    }
    uVar4 = uVar4 + 0xc;
    puVar5 = puVar5 + 3;
  } while (uVar4 < 0x1bc);
  ValidateSupportedsizesFinalRange(this);
  ScannerInterface::GetCapability(*(ScannerInterface **)(this + 0x314),0x101,&local_24,&local_28);
  FUN_1000a540(local_20,local_3c);
  (**(code **)(*(int *)this + 0x1c))(0x101,local_38);
  SetCurrentCapabilityNoSyn(this,0x83ed,&stack0xffffffb8);
  local_3c = pwVar1;
  (**(code **)(*(int *)this + 0x30))(0x111e,&local_3c);
  piVar2 = (int *)(**(code **)((int)pvStack_30 + 0xc))(L"Film Type");
  if (piVar2[4] == 2) {
    pwVar1 = L"empty";
    lpString1 = (LPCWSTR)(**(code **)(*piVar2 + 8))();
    iVar3 = lstrcmpW(lpString1,pwVar1);
    if (iVar3 == 0) goto LAB_1000874f;
  }
  (**(code **)(*piVar2 + 8))();
LAB_1000874f:
  (**(code **)(*(int *)this + 0x30))(0x842f,&stack0xffffffbc);
  (**(code **)(*(int *)this + 0x30))(0x8414,&stack0xffffffb8);
  SetSoftwareCap(this,DAT_1002583c,DAT_10025840,PTR_DAT_10025844);
  SetSoftwareCap(this,DAT_10025848,DAT_1002584c,PTR_DAT_10025850);
  local_28 = (void *)0xffffffff;
  FUN_1000a6f0((undefined4 *)&stack0xffffffbc);
  ExceptionList = pvStack_30;
  return 0;
}



/**************************************************/

/* Function: InitCapability @ 100087f0 */

/* private: int __thiscall Iop_Manager::InitCapability(void) */

int __thiscall Iop_Manager::InitCapability(Iop_Manager *this)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x87f0  58  ?InitCapability@Iop_Manager@@AAEHXZ */
  puStack_c = &LAB_1001cccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this_00 = (void *)FUN_1000ce3e(0x14);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_10001660(this_00,200);
  }
  *(undefined4 **)(this + 0x398) = puVar1;
  local_8 = 0xffffffff;
  iVar2 = InitDeviceCaps(this);
  if (iVar2 == 0) {
    InitRegistryInfo(this);
    InitSoftwareCaps(this);
    InitCapList(this);
    InitCapAppFlag(this);
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return iVar2;
}



/**************************************************/

/* Function: Catch@10008894 @ 10008894 */

undefined * Catch_10008894(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = Iop_Manager::ErrorMessage(*(Iop_Manager **)(unaff_EBP + -0x14),-0x3fff0003);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  return &DAT_100088aa;
}



/**************************************************/

/* Function: IopPaperPixSize @ 100088c0 */

/* public: __thiscall IopPaperPixSize::IopPaperPixSize(void) */

void __thiscall IopPaperPixSize::IopPaperPixSize(IopPaperPixSize *this)

{
                    /* 0x88c0  9  ??0IopPaperPixSize@@QAE@XZ */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/**************************************************/

/* Function: ~IopPaperPixSize @ 100088e0 */

/* public: virtual __thiscall IopPaperPixSize::~IopPaperPixSize(void) */

void __thiscall IopPaperPixSize::~IopPaperPixSize(IopPaperPixSize *this)

{
                    /* 0x88e0  17  ??1IopPaperPixSize@@UAE@XZ */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: SetPaperPixSize @ 100088f0 */

/* public: int __thiscall IopPaperPixSize::SetPaperPixSize(unsigned long) */

int __thiscall IopPaperPixSize::SetPaperPixSize(IopPaperPixSize *this,ulong param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x88f0  78  ?SetPaperPixSize@IopPaperPixSize@@QAEHK@Z */
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (param_1 == *(ulong *)((int)&DAT_1001eb68 + uVar1)) {
      *(undefined4 *)(this + 8) = (&DAT_1001eb68)[iVar2 * 6];
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(&UNK_1001eb70 + iVar2 * 0x18);
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(&UNK_1001eb78 + iVar2 * 0x18);
      return 0;
    }
    uVar1 = uVar1 + 0x18;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x108);
  return -1;
}



/**************************************************/

/* Function: ~IopPaperSize @ 10008950 */

/* public: virtual __thiscall IopPaperSize::~IopPaperSize(void) */

void __thiscall IopPaperSize::~IopPaperSize(IopPaperSize *this)

{
                    /* 0x8950  18  ??1IopPaperSize@@UAE@XZ */
  *(undefined ***)this = vftable;
  return;
}



/**************************************************/

/* Function: IopPaperPixSize @ 10008960 */

/* public: __thiscall IopPaperPixSize::IopPaperPixSize(unsigned long) */

undefined4 __thiscall IopPaperPixSize::IopPaperPixSize(IopPaperPixSize *this,ulong param_1)

{
  undefined4 extraout_ECX;
  
                    /* 0x8960  8  ??0IopPaperPixSize@@QAE@K@Z */
  *(undefined ***)this = vftable;
  SetPaperPixSize(this,param_1);
  return extraout_ECX;
}



/**************************************************/

/* Function: IopPaperSize @ 10008980 */

/* public: __thiscall IopPaperSize::IopPaperSize(void) */

IopPaperSize * __thiscall IopPaperSize::IopPaperSize(IopPaperSize *this)

{
                    /* 0x8980  12  ??0IopPaperSize@@QAE@XZ */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = 0;
  _wcscpy_s((wchar_t *)(this + 0x20),0x100,L"");
  return this;
}



/**************************************************/

/* Function: SetPaperSize @ 100089c0 */

/* public: int __thiscall IopPaperSize::SetPaperSize(unsigned long) */

int __thiscall IopPaperSize::SetPaperSize(IopPaperSize *this,ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  
                    /* 0x89c0  79  ?SetPaperSize@IopPaperSize@@QAEHK@Z */
  uVar1 = 0;
  puVar2 = &DAT_100258b0;
  do {
    if (param_1 == *puVar2) {
      *(undefined4 *)(this + 8) = (&DAT_100258b0)[uVar1 * 0x10];
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(&DAT_100258b8 + uVar1 * 0x40);
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(&DAT_100258c0 + uVar1 * 0x40);
      _wcscpy_s((wchar_t *)(this + 0x20),0x100,u_custom_100258c8 + uVar1 * 0x20);
      return 0;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0x10;
  } while (uVar1 < 0xb);
  return -1;
}



/**************************************************/

/* Function: IopPaperSize @ 10008a30 */

/* public: __thiscall IopPaperSize::IopPaperSize(unsigned long) */

IopPaperSize * __thiscall IopPaperSize::IopPaperSize(IopPaperSize *this,ulong param_1)

{
                    /* 0x8a30  11  ??0IopPaperSize@@QAE@K@Z */
  *(undefined ***)this = vftable;
  SetPaperSize(this,param_1);
  return this;
}



/**************************************************/

/* Function: FUN_10008a50 @ 10008a50 */

void __fastcall FUN_10008a50(undefined4 *param_1)

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

/* Function: FUN_10008a80 @ 10008a80 */

undefined4 __thiscall FUN_10008a80(void *this,wchar_t *param_1)

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

/* Function: PixelHeight @ 10008b00 */

/* public: int __thiscall CImageData::PixelHeight(void) */

int __thiscall CImageData::PixelHeight(CImageData *this)

{
                    /* 0x8b00  66  ?PixelHeight@CImageData@@QAEHXZ */
  return *(int *)(this + 8);
}



/**************************************************/

/* Function: FUN_10008b10 @ 10008b10 */

undefined4 __fastcall FUN_10008b10(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/**************************************************/

/* Function: FUN_10008b20 @ 10008b20 */

undefined4 __thiscall FUN_10008b20(void *this,wchar_t *param_1,undefined4 param_2)

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

/* Function: FUN_10008bd0 @ 10008bd0 */

uint __thiscall FUN_10008bd0(void *this,void *param_1,uint param_2,undefined4 param_3)

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

/* Function: FUN_10008c60 @ 10008c60 */

int __thiscall FUN_10008c60(void *this,int param_1,int *param_2)

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
LAB_10008d06:
          iVar2 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto switchD_10008c86_default;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar7[1];
        bVar10 = uVar1 < puVar8[1];
        if (uVar1 != puVar8[1]) goto LAB_10008d06;
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
switchD_10008c86_default:
  if (param_1 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10008d50 @ 10008d50 */

int __thiscall FUN_10008d50(void *this,int param_1,ushort *param_2)

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
LAB_10008dc4:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto switchD_10008d5a_default;
      }
      if (uVar1 == 0) break;
      uVar1 = param_2[1];
      bVar6 = uVar1 < puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_10008dc4;
      param_2 = param_2 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != 0);
  case 3:
    iVar2 = 0;
  }
switchD_10008d5a_default:
  if (param_1 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10008de0 @ 10008de0 */

undefined4 * __fastcall FUN_10008de0(undefined4 *param_1)

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

/* Function: FUN_10008e10 @ 10008e10 */

undefined4 __fastcall FUN_10008e10(int param_1)

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

/* Function: FUN_10008e50 @ 10008e50 */

undefined4 __thiscall FUN_10008e50(void *this,wchar_t *param_1)

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

/* Function: FUN_10008ea0 @ 10008ea0 */

undefined4 __thiscall FUN_10008ea0(void *this,LPCSTR param_1)

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
  puStack_8 = &LAB_1001ccfb;
  local_c = ExceptionList;
  uVar1 = DAT_10025bf4 ^ (uint)&stack0xfffffdd8;
  ExceptionList = &local_c;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      puVar2 = (undefined4 *)FUN_1000abf0(local_218,param_1);
      _Str2 = (wchar_t *)*puVar2;
      uStack_4 = 0;
      _Str1 = (wchar_t *)
              (**(code **)**(undefined4 **)(*(int *)((int)this + 4) + iVar4 * 4))(_Str2,uVar1);
      iVar3 = __wcsicmp(_Str1,_Str2);
      uStack_4 = 0xffffffff;
      FUN_1000aa20(local_218);
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

/* Function: FUN_10008f60 @ 10008f60 */

undefined4 __thiscall FUN_10008f60(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
}



/**************************************************/

/* Function: FUN_10008f70 @ 10008f70 */

void __thiscall FUN_10008f70(void *this,undefined4 param_1)

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

/* Function: FUN_10008fb0 @ 10008fb0 */

void __thiscall FUN_10008fb0(void *this,LPCSTR param_1)

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
  puStack_8 = &LAB_1001cd2b;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_10025bf4 ^ (uint)local_21c);
  uVar1 = DAT_10025bf4 ^ (uint)&stack0xfffffddc;
  ExceptionList = &local_c;
  FUN_1000abf0(local_21c,param_1);
  uStack_4 = 0;
  iVar2 = (**(code **)(*(int *)this + 4))(local_21c[0],uVar1);
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x1c))(unaff_ESI,L"empty",2);
    (**(code **)(*(int *)this + 4))(local_21c[0]);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_1000aa20((undefined4 *)&stack0xfffffde0);
  ExceptionList = local_10;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffde0);
  return;
}



/**************************************************/

/* Function: FUN_10009080 @ 10009080 */

undefined4 __thiscall
FUN_10009080(void *this,int param_1,wchar_t *param_2,rsize_t param_3,void *param_4,
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

/* Function: FUN_10009130 @ 10009130 */

undefined4 __thiscall FUN_10009130(void *this,undefined4 param_1)

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

/* Function: FUN_10009160 @ 10009160 */

undefined4 __thiscall FUN_10009160(void *this,undefined4 param_1)

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

/* Function: FUN_10009190 @ 10009190 */

undefined4 __thiscall FUN_10009190(void *this,LPCSTR param_1)

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
  puStack_8 = &LAB_1001cd6b;
  local_c = ExceptionList;
  uVar1 = DAT_10025bf4 ^ (uint)&stack0xfffffde4;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_1000abf0(local_218,param_1);
  uStack_4 = 0;
  piVar3 = (int *)(**(code **)(*(int *)this + 4))(*puVar2,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_1000aa20((undefined4 *)&stack0xfffffde4);
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

/* Function: FUN_10009230 @ 10009230 */

undefined4 __thiscall FUN_10009230(void *this,LPCSTR param_1)

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
  puStack_8 = &LAB_1001cd9b;
  local_c = ExceptionList;
  uVar1 = DAT_10025bf4 ^ (uint)&stack0xfffffde4;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_1000abf0(local_218,param_1);
  uStack_4 = 0;
  piVar3 = (int *)(**(code **)(*(int *)this + 4))(*puVar2,uVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_1000aa20((undefined4 *)&stack0xfffffde4);
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

/* Function: FUN_100092d0 @ 100092d0 */

int __thiscall FUN_100092d0(void *this,ushort *param_1)

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
LAB_10009316:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1000931b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar2[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_10009316;
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      iVar3 = 0;
LAB_1000931b:
      if (iVar3 == 0) {
        _Memory = *(undefined4 **)(*(int *)((int)this + 4) + iVar4 * 4);
        if (_Memory != (undefined4 *)0x0) {
          FUN_10008a50(_Memory);
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

/* Function: FUN_10009390 @ 10009390 */

undefined4 __thiscall FUN_10009390(void *this,int param_1)

{
  void *_Dst;
  size_t _Size;
  undefined4 *_Memory;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8))) {
    _Memory = *(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_10008a50(_Memory);
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

/* Function: FUN_10009410 @ 10009410 */

undefined4 __fastcall FUN_10009410(int *param_1)

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

/* Function: FUN_10009440 @ 10009440 */

void __thiscall
FUN_10009440(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4)

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
  
  local_4 = DAT_10025bf4 ^ (uint)&local_230;
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
  iVar1 = RegOpenKeyExW(param_4,(LPCWSTR)PTR_u_SOFTWARE_10025b78,0,0x20019,&local_21c);
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
            goto LAB_100095f4;
            RegQueryValueExW(local_22c,aWStack_20c,(LPDWORD)0x0,&local_214,lpData,&local_230);
            switch(local_214) {
            case 0:
              uVar3 = 0;
              break;
            case 1:
              uVar3 = 2;
              goto code_r0x100095b8;
            case 2:
            case 3:
            case 6:
            case 7:
            case 8:
              uVar3 = 3;
code_r0x100095b8:
              (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_230,uVar3);
              goto switchD_100095af_default;
            case 4:
            case 5:
              uVar3 = 1;
              break;
            default:
              goto switchD_100095af_default;
            }
            (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_230,uVar3);
switchD_100095af_default:
            _free(lpData);
LAB_100095f4:
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

/* Function: FUN_100096c0 @ 100096c0 */

void __thiscall
FUN_100096c0(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4)

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
  
  local_4 = DAT_10025bf4 ^ (uint)&local_234;
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
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_10025b78,0,0x20019,&local_228),
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
  local_21c = RegOpenKeyExW(param_4,(LPCWSTR)PTR_u_SOFTWARE_10025b78,0,0x20019,&local_228);
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
            goto LAB_100099a6;
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
LAB_100099a6:
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

/* Function: FUN_10009a20 @ 10009a20 */

void __thiscall
FUN_10009a20(void *this,LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
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
  
  local_4 = DAT_10025bf4 ^ (uint)&local_238;
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
  iVar1 = RegOpenKeyExW(param_6,(LPCWSTR)PTR_u_SOFTWARE_10025b78,0,0x20019,&local_224);
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
              goto LAB_10009c00;
              RegQueryValueExW(local_230,aWStack_20c,(LPDWORD)0x0,&local_220,lpData,&local_234);
              switch(local_220) {
              case 0:
                uVar3 = 0;
                break;
              case 1:
                uVar3 = 2;
                goto LAB_10009bc4;
              case 2:
              case 3:
              case 6:
              case 7:
              case 8:
                uVar3 = 3;
LAB_10009bc4:
                (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_234,uVar3);
                goto switchD_10009bbb_default;
              case 4:
              case 5:
                uVar3 = 1;
                break;
              default:
                goto switchD_10009bbb_default;
              }
              (**(code **)(*(int *)this + 0x18))(aWStack_20c,lpData,local_234,uVar3);
switchD_10009bbb_default:
              _free(lpData);
LAB_10009c00:
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

/* Function: FUN_10009ce0 @ 10009ce0 */

void __thiscall
FUN_10009ce0(void *this,LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
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
  
  local_4 = DAT_10025bf4 ^ (uint)&local_23c;
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
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_10025b78,0,0x20019,&local_230),
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
  local_228 = RegOpenKeyExW(local_214,(LPCWSTR)PTR_u_SOFTWARE_10025b78,0,0x20019,&local_230);
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
              goto LAB_1000a040;
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
LAB_1000a040:
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

/* Function: FUN_1000a0c0 @ 1000a0c0 */

void __thiscall
FUN_1000a0c0(void *this,LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4,
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
  
  local_4 = DAT_10025bf4 ^ (uint)&local_244;
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
     (LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)PTR_u_SOFTWARE_10025b78,0,0x20019,&local_234),
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
  LVar2 = RegOpenKeyExW(local_228,(LPCWSTR)PTR_u_SOFTWARE_10025b78,0,0x20019,&local_234);
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
                goto LAB_1000a456;
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
LAB_1000a456:
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

/* Function: FUN_1000a4e0 @ 1000a4e0 */

void __thiscall FUN_1000a4e0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x3c))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000002);
  return;
}



/**************************************************/

/* Function: FUN_1000a510 @ 1000a510 */

void __thiscall FUN_1000a510(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x44))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000002,0);
  return;
}



/**************************************************/

/* Function: FUN_1000a540 @ 1000a540 */

void __thiscall FUN_1000a540(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x3c))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001);
  return;
}



/**************************************************/

/* Function: FUN_1000a570 @ 1000a570 */

void __thiscall FUN_1000a570(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x44))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001,0);
  return;
}



/**************************************************/

/* Function: FUN_1000a5a0 @ 1000a5a0 */

void __thiscall FUN_1000a5a0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x60))(L"Canon",L"ScanGear",0,L"Devices",param_1,0x80000001,0);
  return;
}



/**************************************************/

/* Function: FUN_1000a5d0 @ 1000a5d0 */

void FUN_1000a5d0(HMODULE param_1,wchar_t *param_2,rsize_t param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_10025bf4 ^ (uint)local_20c;
  pwVar2 = (wchar_t *)0x0;
  GetModuleFileNameW(param_1,local_20c,0x104);
  pwVar1 = _wcsrchr(local_20c,L'\\');
  if (pwVar1 != (wchar_t *)0x0) {
    *pwVar1 = L'\0';
    pwVar2 = _wcsrchr(local_20c,L'\\');
    if (pwVar2 == (wchar_t *)0x0) goto LAB_1000a64c;
    pwVar2 = pwVar2 + 1;
  }
  _wcscpy_s(param_2,param_3,pwVar2);
LAB_1000a64c:
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}



/**************************************************/

/* Function: FUN_1000a670 @ 1000a670 */

undefined4 * __thiscall
FUN_1000a670(void *this,wchar_t *param_1,wchar_t *param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = Association::vftable;
  FUN_10008a80(this,param_1);
  FUN_10008b20(this,param_2,param_3);
  return this;
}



/**************************************************/

/* Function: FUN_1000a6b0 @ 1000a6b0 */

undefined4 * __thiscall
FUN_1000a6b0(void *this,wchar_t *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = Association::vftable;
  FUN_10008a80(this,param_1);
  FUN_10008bd0(this,param_2,param_3,param_4);
  return this;
}



/**************************************************/

/* Function: FUN_1000a6f0 @ 1000a6f0 */

void __fastcall FUN_1000a6f0(undefined4 *param_1)

{
  undefined4 *_Memory;
  int iVar1;
  
  iVar1 = 0;
  *param_1 = AssociationSet::vftable;
  if (0 < (int)param_1[2]) {
    do {
      _Memory = *(undefined4 **)(param_1[1] + iVar1 * 4);
      if (_Memory != (undefined4 *)0x0) {
        FUN_10008a50(_Memory);
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[2]);
  }
  _free((void *)param_1[1]);
  return;
}



/**************************************************/

/* Function: FUN_1000a740 @ 1000a740 */

undefined4 __thiscall FUN_1000a740(void *this,wchar_t *param_1,wchar_t *param_2,undefined4 param_3)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001cdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 4))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(param_2,param_3);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0;
  this_00 = (void *)FUN_1000ce3e(0x14);
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_1000a670(this_00,param_1,param_2,param_3);
  }
  *(undefined4 **)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  FUN_10008e10((int)this);
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@1000a7f4 @ 1000a7f4 */

undefined1 * Catch_1000a7f4(void)

{
  return &LAB_1000a7fa;
}



/**************************************************/

/* Function: FUN_1000a820 @ 1000a820 */

undefined4 __thiscall
FUN_1000a820(void *this,wchar_t *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001cde0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 4))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(param_2,param_3,param_4);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0;
  this_00 = (void *)FUN_1000ce3e(0x14);
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_1000a6b0(this_00,param_1,param_2,param_3,param_4);
  }
  *(undefined4 **)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4) = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  FUN_10008e10((int)this);
  ExceptionList = local_10;
  return 0;
}



/**************************************************/

/* Function: Catch@1000a8dc @ 1000a8dc */

undefined1 * Catch_1000a8dc(void)

{
  return &LAB_1000a8e2;
}



/**************************************************/

/* Function: FUN_1000a900 @ 1000a900 */

void __thiscall FUN_1000a900(void *this,HMODULE param_1)

{
  int iVar1;
  wchar_t *pwStack_224;
  undefined4 uStack_220;
  wchar_t local_20c [248];
  uint uStack_1c;
  uint local_4;
  
  local_4 = DAT_10025bf4 ^ (uint)local_20c;
  uStack_220 = 0x1000a930;
  iVar1 = FUN_1000a5d0(param_1,local_20c,0x104);
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

/* Function: FUN_1000a990 @ 1000a990 */

void __thiscall FUN_1000a990(void *this,HMODULE param_1)

{
  int iVar1;
  wchar_t *pwStack_224;
  undefined4 uStack_220;
  wchar_t local_20c [248];
  uint uStack_1c;
  uint local_4;
  
  local_4 = DAT_10025bf4 ^ (uint)local_20c;
  uStack_220 = 0x1000a9c0;
  iVar1 = FUN_1000a5d0(param_1,local_20c,0x104);
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

/* Function: FUN_1000aa20 @ 1000aa20 */

void __fastcall FUN_1000aa20(undefined4 *param_1)

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

/* Function: FUN_1000aa60 @ 1000aa60 */

undefined4 __thiscall FUN_1000aa60(void *this,int param_1)

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
    if (pvVar1 == (HGLOBAL)0x0) goto LAB_1000ab0f;
    puVar2 = GlobalLock(pvVar1);
    *(undefined2 **)this = puVar2;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
      lpString = (LPCWSTR)((int)this + 0xc);
      iVar3 = lstrlenW(lpString);
      if ((0 < iVar3) && (iVar3 = lstrlenW(lpString), iVar3 < *(int *)((int)this + 4))) {
        lstrcpyW(*(LPWSTR *)this,lpString);
      }
      goto LAB_1000ab0f;
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
      if (pvVar4 != (LPVOID)0x0) goto LAB_1000ab0f;
      pvVar1 = *(HGLOBAL *)((int)this + 8);
    }
  }
  GlobalFree(pvVar1);
  *(undefined4 *)((int)this + 8) = 0;
LAB_1000ab0f:
  if (*(int *)((int)this + 8) != 0) {
    *(uint *)((int)this + 4) = uVar5;
    return 0;
  }
  FUN_1000aa20(this);
  return 1;
}



/**************************************************/

/* Function: FUN_1000ab40 @ 1000ab40 */

int __cdecl FUN_1000ab40(undefined4 *param_1,wchar_t *param_2)

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
    if ((iVar2 == 0) && (iVar1 < 0)) goto LAB_1000ab73;
    do {
      if (iVar1 != param_1[1]) {
        return iVar2;
      }
LAB_1000ab73:
      iVar2 = FUN_1000aa60(param_1,param_1[1] + 0x40);
    } while (iVar2 != 0);
    _SizeInWords = param_1[1];
    _DstBuf = (wchar_t *)*param_1;
  } while( true );
}



/**************************************************/

/* Function: FUN_1000abb0 @ 1000abb0 */

undefined4 * __thiscall FUN_1000abb0(void *this,LPCWSTR param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lstrlenW(param_1);
  iVar2 = FUN_1000aa60(this,iVar1 + 1);
  if (iVar2 == 0) {
    _memcpy(*(void **)this,param_1,(iVar1 + 1) * 2);
  }
  return this;
}



/**************************************************/

/* Function: FUN_1000abf0 @ 1000abf0 */

void __thiscall FUN_1000abf0(void *this,LPCSTR param_1)

{
  uint uVar1;
  LPWSTR _Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001ce00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_1000bc60((LPWSTR)0x0,0,param_1);
  local_8 = 0;
  _Memory = (LPWSTR)thunk_FUN_1000ce3e(-(uint)((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) |
                                       (uint)((ulonglong)uVar1 * 2));
  FUN_1000bc60(_Memory,uVar1,param_1);
  *(undefined4 *)((int)this + 8) = 0;
  FUN_1000aa20(this);
  FUN_1000abb0(this,_Memory);
  _free(_Memory);
  FUN_1000ac96();
  return;
}



/**************************************************/

/* Function: Catch@1000ac80 @ 1000ac80 */

undefined * Catch_1000ac80(void)

{
  int unaff_EBP;
  
  FUN_1000abb0(*(void **)(unaff_EBP + -0x14),L"");
  return &DAT_1000ac93;
}



/**************************************************/

/* Function: FUN_1000ac96 @ 1000ac96 */

void FUN_1000ac96(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/**************************************************/

/* Function: FUN_1000acb0 @ 1000acb0 */

undefined4 __cdecl
FUN_1000acb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  LPVOID lpBaseAddress;
  undefined4 uVar1;
  
  if (DAT_10027220 == (HANDLE)0x0) {
    DAT_10027220 = OpenFileMappingW(0xf001f,0,L"_SG_IPM_DATA_");
    if (DAT_10027220 == (HANDLE)0x0) {
      return 0x40;
    }
  }
  if ((DAT_10027228 == (code *)0x0) || (DAT_1002722c == (LPCRITICAL_SECTION)0x0)) {
    lpBaseAddress = MapViewOfFile(DAT_10027220,4,0,0,0xc);
    if (lpBaseAddress == (LPVOID)0x0) {
      return 0x40;
    }
    DAT_1002722c = *(LPCRITICAL_SECTION *)((int)lpBaseAddress + 8);
    DAT_10027228 = *(code **)((int)lpBaseAddress + 4);
    UnmapViewOfFile(lpBaseAddress);
    CloseHandle(DAT_10027220);
  }
  EnterCriticalSection(DAT_1002722c);
  uVar1 = (*DAT_10027228)(param_1,param_2,param_3,param_4,param_5);
  LeaveCriticalSection(DAT_1002722c);
  return uVar1;
}



/**************************************************/

/* Function: FUN_1000ad70 @ 1000ad70 */

void __cdecl FUN_1000ad70(int param_1,LPWSTR param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  int local_508 [5];
  undefined4 auStack_4f4 [5];
  wchar_t awStack_4e0 [32];
  WCHAR aWStack_4a0 [64];
  wchar_t local_420 [260];
  wchar_t local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ce36;
  local_c = ExceptionList;
  local_10 = DAT_10025bf4 ^ (uint)local_508;
  uVar1 = DAT_10025bf4 ^ (uint)&stack0xfffffaf0;
  ExceptionList = &local_c;
  FUN_10008de0(local_508);
  local_4 = 0;
  _wcscpy_s(local_218,0x104,L"Microsoft\\Windows\\CurrentVersion");
  iVar2 = FUN_10009440(local_508,local_218,L"Explorer",L"Shell Folders",(HKEY)0x80000001);
  if (-1 < iVar2) {
    iVar2 = FUN_10008e50(local_508,L"AppData");
    if (iVar2 == 0) {
      GetTempPathW(0x104,local_420);
    }
    else {
      piVar3 = (int *)(**(code **)(local_508[0] + 0xc))(L"AppData",uVar1);
      pwVar4 = (wchar_t *)(**(code **)(*piVar3 + 8))();
      _wcscpy_s(local_420,0x104,pwVar4);
    }
  }
  PathAddBackslashW(local_420);
  FUN_10008de0(auStack_4f4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_1000a5d0(DAT_100271c0,awStack_4e0,0x20);
  if (param_1 == 0) {
    pwVar4 = L"Canon\\%s";
  }
  else {
    if (param_1 != 1) goto LAB_1000aecc;
    pwVar4 = L"Canon\\%s\\Temp";
  }
  wsprintfW(aWStack_4a0,pwVar4,awStack_4e0);
LAB_1000aecc:
  lstrcatW(local_420,aWStack_4a0);
  FUN_1000b200(local_420,local_420);
  PathAddBackslashW(local_420);
  lstrcpyW(param_2,local_420);
  local_4 = local_4 & 0xffffff00;
  FUN_1000a6f0(auStack_4f4);
  local_4 = 0xffffffff;
  FUN_1000a6f0(local_508);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_508);
  return;
}



/**************************************************/

/* Function: FUN_1000af60 @ 1000af60 */

undefined4 __cdecl FUN_1000af60(uint param_1,uint param_2,undefined4 *param_3)

{
  if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) != 0) {
    *param_3 = 0xffffffff;
    return 0x80070216;
  }
  *param_3 = (int)((ulonglong)param_1 * (ulonglong)param_2);
  return 0;
}



/**************************************************/

/* Function: FUN_1000af90 @ 1000af90 */

void __cdecl FUN_1000af90(LPCWSTR param_1)

{
  byte *pbVar1;
  DWORD DVar2;
  UINT UVar3;
  byte *pbVar4;
  byte *pbVar5;
  FILE *local_250;
  byte local_24c [32];
  undefined4 local_22c;
  char local_228 [4];
  char local_224 [2];
  undefined4 local_222;
  undefined4 local_21e;
  undefined4 local_21a;
  undefined4 local_216;
  undefined4 local_212;
  undefined2 local_20e;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_10025bf4 ^ (uint)&local_250;
  lstrcpyW(local_20c,param_1);
  PathRemoveBackslashW(local_20c);
  DVar2 = GetFileAttributesW(local_20c);
  if ((((DVar2 != 0xffffffff) && ((DVar2 & 0x10) != 0)) &&
      (UVar3 = GetTempFileNameW(param_1,L"~SG",0,local_20c), UVar3 != 0)) &&
     (__wfopen_s(&local_250,local_20c,L"wb"), local_250 != (FILE *)0x0)) {
    local_22c._0_1_ = s_DummyData_1001eed4[0];
    local_22c._1_1_ = s_DummyData_1001eed4[1];
    local_22c._2_1_ = s_DummyData_1001eed4[2];
    local_22c._3_1_ = s_DummyData_1001eed4[3];
    local_224[0] = s_DummyData_1001eed4[8];
    local_224[1] = s_DummyData_1001eed4[9];
    local_228[0] = s_DummyData_1001eed4[4];
    local_228[1] = s_DummyData_1001eed4[5];
    local_228[2] = s_DummyData_1001eed4[6];
    local_228[3] = s_DummyData_1001eed4[7];
    local_222 = 0;
    local_21e = 0;
    local_21a = 0;
    local_216 = 0;
    local_212 = 0;
    local_20e = 0;
    _fwrite(&local_22c,0x20,1,local_250);
    _fclose(local_250);
    __wfopen_s(&local_250,local_20c,L"rb");
    if (local_250 != (FILE *)0x0) {
      local_24c[0] = 0;
      local_24c[1] = 0;
      local_24c[2] = 0;
      local_24c[3] = 0;
      local_24c[4] = 0;
      local_24c[5] = 0;
      local_24c[6] = 0;
      local_24c[7] = 0;
      local_24c[8] = 0;
      local_24c[9] = 0;
      local_24c[10] = 0;
      local_24c[0xb] = 0;
      local_24c[0xc] = 0;
      local_24c[0xd] = 0;
      local_24c[0xe] = 0;
      local_24c[0xf] = 0;
      local_24c[0x10] = 0;
      local_24c[0x11] = 0;
      local_24c[0x12] = 0;
      local_24c[0x13] = 0;
      local_24c[0x14] = 0;
      local_24c[0x15] = 0;
      local_24c[0x16] = 0;
      local_24c[0x17] = 0;
      local_24c[0x18] = 0;
      local_24c[0x19] = 0;
      local_24c[0x1a] = 0;
      local_24c[0x1b] = 0;
      local_24c[0x1c] = 0;
      local_24c[0x1d] = 0;
      local_24c[0x1e] = 0;
      local_24c[0x1f] = 0;
      FUN_1000d4f0(local_24c,0x20,1,local_250);
      pbVar5 = local_24c;
      pbVar4 = (byte *)&local_22c;
      do {
        if (((*pbVar4 != *pbVar5) || (*pbVar4 == 0)) || (pbVar1 = pbVar4 + 1, *pbVar1 != pbVar5[1]))
        break;
        pbVar4 = pbVar4 + 2;
        pbVar5 = pbVar5 + 2;
      } while (*pbVar1 != 0);
      _fclose(local_250);
    }
    DeleteFileW(local_20c);
  }
  __security_check_cookie(local_4 ^ (uint)&local_250);
  return;
}



/**************************************************/

/* Function: FUN_1000b140 @ 1000b140 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_1000b140(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ce78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000c0f0(local_40,param_1,param_2,param_3,param_4 | _DAT_10027234);
  local_4 = 0;
  uVar1 = FUN_1000beb0(local_40);
  local_4 = 0xffffffff;
  FUN_1000bd70((int)local_40);
  ExceptionList = local_c;
  return uVar1;
}



/**************************************************/

/* Function: FUN_1000b1c0 @ 1000b1c0 */

void __cdecl
FUN_1000b1c0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,wchar_t *param_5)

{
  FUN_1000e6c8(param_1,param_2,3,param_3,0x100,param_4,0x100,param_5,0x100);
  return;
}



/**************************************************/

/* Function: FUN_1000b200 @ 1000b200 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl FUN_1000b200(LPCWSTR param_1,LPWSTR param_2)

{
  LPWSTR lpString1;
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  LPWSTR local_1230;
  wchar_t local_122c [4];
  WCHAR local_1224;
  short sStack_1222;
  short local_1220;
  short local_121e;
  wchar_t local_e14 [520];
  wchar_t local_a04 [256];
  wchar_t local_804 [256];
  wchar_t local_604 [256];
  wchar_t local_404 [256];
  wchar_t local_204 [256];
  uint local_4;
  
  local_4 = DAT_10025bf4 ^ (uint)&local_1230;
  local_1230 = param_2;
  lstrcpyW(&local_1224,param_1);
  PathRemoveBackslashW(&local_1224);
  iVar1 = _iswalpha((wint_t)_local_1224);
  if ((((iVar1 != 0) && (sStack_1222 == 0x3a)) && (local_1220 == 0x5c)) &&
     ((local_121e == 0 &&
      (BVar2 = GetVolumeInformationW
                         (&local_1224,(LPWSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                          (LPWSTR)0x0,0), (-(uint)(BVar2 != 0) & 0xffffffc1) != 0xffffffc1))))
  goto LAB_1000b4b6;
  DVar3 = GetFileAttributesW(&local_1224);
  DVar4 = GetLastError();
  if (DVar3 == 0xffffffff) {
    if (DVar4 == 5) goto LAB_1000b2c4;
    BVar2 = CreateDirectoryW(&local_1224,(LPSECURITY_ATTRIBUTES)0x0);
    if (BVar2 != 1) {
      FUN_1000e6c8(&local_1224,local_122c,3,local_a04,0x100,local_804,0x100,local_604,0x100);
      __wmakepath_s(local_e14,0x208,local_122c,local_a04,(wchar_t *)0x0,(wchar_t *)0x0);
      iVar1 = lstrcmpiW(&local_1224,local_e14);
      if (iVar1 == 0) goto LAB_1000b4b6;
      iVar6 = 0;
      iVar1 = FUN_1000b200(local_e14,local_e14);
      if (iVar1 != 0) {
        PathRemoveBackslashW(local_e14);
        iVar1 = lstrlenW(local_e14);
        do {
          wsprintfW(local_e14 + iVar1,L"_%i",iVar6);
          PathAddBackslashW(local_e14);
          iVar5 = FUN_1000b200(local_e14,local_e14);
          iVar6 = iVar6 + 1;
        } while (iVar5 != 0);
      }
      FUN_1000b1c0(local_e14,local_122c,local_a04,local_204,local_404);
      __wmakepath_s(&local_1224,0x208,local_122c,local_a04,local_804,(wchar_t *)0x0);
      iVar6 = 0;
      iVar1 = FUN_1000b200(&local_1224,&local_1224);
      if (iVar1 != 0) {
        PathRemoveBackslashW(&local_1224);
        iVar1 = lstrlenW(&local_1224);
        do {
          wsprintfW(&local_1224 + iVar1,L"_%i",iVar6);
          PathAddBackslashW(&local_1224);
          iVar5 = FUN_1000b200(&local_1224,&local_1224);
          iVar6 = iVar6 + 1;
        } while (iVar5 != 0);
      }
    }
  }
  else {
    if ((DVar3 & 0x10) == 0) goto LAB_1000b4b6;
LAB_1000b2c4:
    iVar1 = FUN_1000af90(&local_1224);
    if (iVar1 == 0) goto LAB_1000b4b6;
  }
  lpString1 = local_1230;
  if (local_1230 != (LPWSTR)0x0) {
    PathAddBackslashW(&local_1224);
    lstrcpyW(lpString1,&local_1224);
  }
LAB_1000b4b6:
  __security_check_cookie(local_4 ^ (uint)&local_1230);
  return;
}



/**************************************************/

/* Function: FUN_1000b4d0 @ 1000b4d0 */

undefined4 __cdecl FUN_1000b4d0(undefined4 *param_1,int *param_2)

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
      hModule = FUN_10005480(L"kernel32.dll");
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
            iVar2 = FUN_1000af60(local_c,2,&local_4);
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

/* Function: FUN_1000b600 @ 1000b600 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000b600(int *param_1,ushort param_2)

{
  ushort uVar1;
  HMODULE pHVar2;
  
  if (*param_1 != 0) {
    return;
  }
  _DAT_10027230 = 0;
  _DAT_10027234 = 0;
  if (param_2 != 0x804) {
    if (((param_2 == 0x404) || (param_2 == 0xc04)) || (param_2 == 0x1404)) {
      pHVar2 = FUN_10005480(L"SGRES_TW.DLL");
      *param_1 = (int)pHVar2;
      return;
    }
    if (param_2 != 0x1004) {
      uVar1 = param_2 & 0x3ff;
      if (uVar1 == 9) {
        pHVar2 = FUN_10005480(L"SGRES_US.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0xc) {
        pHVar2 = FUN_10005480(L"SGRES_FR.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 7) {
        pHVar2 = FUN_10005480(L"SGRES_DE.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x10) {
        pHVar2 = FUN_10005480(L"SGRES_IT.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 10) {
        pHVar2 = FUN_10005480(L"SGRES_ES.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x16) {
        pHVar2 = FUN_10005480(L"SGRES_PT.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x13) {
        pHVar2 = FUN_10005480(L"SGRES_NL.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x15) {
        pHVar2 = FUN_10005480(L"SGRES_PL.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x19) {
        pHVar2 = FUN_10005480(L"SGRES_RU.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0xe) {
        pHVar2 = FUN_10005480(L"SGRES_HU.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 5) {
        pHVar2 = FUN_10005480(L"SGRES_CZ.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x12) {
        pHVar2 = FUN_10005480(L"SGRES_KR.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 6) {
        pHVar2 = FUN_10005480(L"SGRES_DK.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x14) {
        pHVar2 = FUN_10005480(L"SGRES_NO.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 == 0x1d) {
        pHVar2 = FUN_10005480(L"SGRES_SE.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      if (uVar1 != 0xb) {
        if (uVar1 == 8) {
          pHVar2 = FUN_10005480(L"SGRES_GR.DLL");
          *param_1 = (int)pHVar2;
          return;
        }
        if (uVar1 == 0x1f) {
          pHVar2 = FUN_10005480(L"SGRES_TR.DLL");
          *param_1 = (int)pHVar2;
          return;
        }
        if (uVar1 == 1) {
          pHVar2 = FUN_10005480(L"SGRES_AR.DLL");
          *param_1 = (int)pHVar2;
          _DAT_10027230 = 1;
          _DAT_10027234 = 0x180000;
          return;
        }
        if (uVar1 != 0x1e) {
          if (uVar1 == 0x21) {
            pHVar2 = FUN_10005480(L"SGRES_ID.DLL");
            *param_1 = (int)pHVar2;
            return;
          }
          if (uVar1 != 0x11) {
            _DAT_10027230 = 0;
            _DAT_10027234 = 0;
            return;
          }
          pHVar2 = FUN_10005480(L"SGRES_JP.DLL");
          *param_1 = (int)pHVar2;
          return;
        }
        pHVar2 = FUN_10005480(L"SGRES_TH.DLL");
        *param_1 = (int)pHVar2;
        return;
      }
      pHVar2 = FUN_10005480(L"SGRES_FI.DLL");
      *param_1 = (int)pHVar2;
      return;
    }
  }
  pHVar2 = FUN_10005480(L"SGRES_CN.DLL");
  *param_1 = (int)pHVar2;
  return;
}



/**************************************************/

/* Function: FUN_1000b830 @ 1000b830 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000b830(HMODULE param_1)

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
  
  local_4 = DAT_10025bf4 ^ (uint)&local_31c;
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
  FUN_1000acb0(0x128,&local_310,0,0,0);
  if (local_310 == 1) {
    iVar11 = 0;
    if (local_30c != L'\0') {
      uVar5 = _wcstoul(&local_30c,(wchar_t **)0x0,0x10);
      uVar3 = (ushort)uVar5;
      FUN_1000b600(&local_31c,uVar3);
      iVar11 = local_31c;
      DAT_10027238 = uVar3;
      if ((uVar3 != 0) && (local_31c != 0)) goto LAB_1000bc38;
    }
    iVar6 = FUN_1000b4d0(&local_318,(int *)&local_314);
    if (iVar6 == 1) {
      pwVar4 = local_318;
      LVar2 = DAT_10027238;
      if (local_314 != 0) {
        while (LVar2 = DAT_10027238, *pwVar4 != L'\0') {
          lVar7 = _wcstol(pwVar4,(wchar_t **)0x0,0x10);
          FUN_1000b600(&local_31c,(ushort)lVar7);
          pwVar8 = pwVar4;
          do {
            wVar1 = *pwVar8;
            pwVar8 = pwVar8 + 1;
          } while (wVar1 != L'\0');
          iVar11 = local_31c;
          LVar2 = (ushort)lVar7;
          if ((local_31c != 0) ||
             (uVar10 = uVar10 + 1, pwVar4 = pwVar4 + ((int)pwVar8 - (int)(pwVar4 + 1) >> 1) + 1,
             LVar2 = DAT_10027238, local_314 <= uVar10)) break;
        }
      }
    }
    else {
      if (iVar6 != 2) goto LAB_1000bc38;
      LVar2 = GetUserDefaultLangID();
      FUN_1000b600(&local_31c,LVar2);
      iVar11 = local_31c;
      if (local_31c == 0) {
        LVar2 = GetSystemDefaultLangID();
        FUN_1000b600(&local_31c,LVar2);
        iVar11 = local_31c;
      }
    }
    DAT_10027238 = LVar2;
    if (local_318 != (wchar_t *)0x0) {
      _free(local_318);
    }
    if (iVar11 == 0) {
      FUN_10005480(L"SGRES_US.DLL");
      _DAT_10027230 = 0;
      _DAT_10027234 = 0;
    }
    goto LAB_1000bc38;
  }
  uVar5 = _wcstoul(&local_30c,(wchar_t **)0x0,0x10);
  DAT_10027238 = (LANGID)uVar5;
  if (DAT_10027238 == 0) {
    DAT_10027238 = GetSystemDefaultLangID();
  }
  if (DAT_10027238 == 0x804) {
    pwVar4 = L"SGRES_CN.DLL";
LAB_1000bc1f:
    pHVar9 = FUN_10005480(pwVar4);
  }
  else {
    if (DAT_10027238 == 0x404) {
      pwVar4 = L"SGRES_TW.DLL";
      goto LAB_1000bc1f;
    }
    if (DAT_10027238 == 0xc04) {
      pwVar4 = L"SGRES_TW.DLL";
      goto LAB_1000bc1f;
    }
    if (DAT_10027238 == 0x1404) {
      pwVar4 = L"SGRES_TW.DLL";
      goto LAB_1000bc1f;
    }
    if (DAT_10027238 == 0x1004) {
      pwVar4 = L"SGRES_CN.DLL";
      goto LAB_1000bc1f;
    }
    uVar3 = DAT_10027238 & 0x3ff;
    if (uVar3 == 9) {
LAB_1000bc1a:
      pwVar4 = L"SGRES_US.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0xc) {
      pwVar4 = L"SGRES_FR.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 7) {
      pwVar4 = L"SGRES_DE.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x10) {
      pwVar4 = L"SGRES_IT.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 10) {
      pwVar4 = L"SGRES_ES.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x16) {
      pwVar4 = L"SGRES_PT.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x13) {
      pwVar4 = L"SGRES_NL.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x15) {
      pwVar4 = L"SGRES_PL.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x19) {
      pwVar4 = L"SGRES_RU.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0xe) {
      pwVar4 = L"SGRES_HU.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 5) {
      pwVar4 = L"SGRES_CZ.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x12) {
      pwVar4 = L"SGRES_KR.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 6) {
      pwVar4 = L"SGRES_DK.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x14) {
      pwVar4 = L"SGRES_NO.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x1d) {
      pwVar4 = L"SGRES_SE.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0xb) {
      pwVar4 = L"SGRES_FI.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 8) {
      pwVar4 = L"SGRES_GR.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 == 0x1f) {
      pwVar4 = L"SGRES_TR.DLL";
      goto LAB_1000bc1f;
    }
    if (uVar3 != 1) {
      if (uVar3 == 0x1e) {
        pwVar4 = L"SGRES_TH.DLL";
      }
      else if (uVar3 == 0x21) {
        pwVar4 = L"SGRES_ID.DLL";
      }
      else {
        if (uVar3 != 0x11) goto LAB_1000bc1a;
        pwVar4 = L"SGRES_JP.DLL";
      }
      goto LAB_1000bc1f;
    }
    pHVar9 = FUN_10005480(L"SGRES_AR.DLL");
    _DAT_10027230 = 1;
    _DAT_10027234 = 0x180000;
  }
  if (pHVar9 == (HMODULE)0x0) {
    FUN_10005480(L"SGRES_US.DLL");
  }
LAB_1000bc38:
  __security_check_cookie(local_4 ^ (uint)&local_31c);
  return;
}



/**************************************************/

/* Function: FUN_1000bc60 @ 1000bc60 */

int __cdecl FUN_1000bc60(LPWSTR param_1,int param_2,LPCSTR param_3)

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

/* Function: FUN_1000bce0 @ 1000bce0 */

int __cdecl FUN_1000bce0(LPSTR param_1,int param_2,LPCWSTR param_3)

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

/* Function: FUN_1000bd70 @ 1000bd70 */

void __fastcall FUN_1000bd70(int param_1)

{
  if (*(HMODULE *)(param_1 + 0x1c) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x1c));
  }
  if (*(HMODULE *)(param_1 + 0x24) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x24));
  }
  return;
}



/**************************************************/

/* Function: FUN_1000bda0 @ 1000bda0 */

int FUN_1000bda0(HWND param_1,LPCWSTR param_2,LPCWSTR param_3,UINT param_4,WORD param_5)

{
  int iVar1;
  undefined4 local_24;
  int local_20;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_10025bf4 ^ 0x10021df8;
  ExceptionList = &local_14;
  local_20 = 0;
  local_24 = 0;
  if (DAT_10026fa0 == 0) {
    iVar1 = FUN_10004b10(&local_24);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return 0;
    }
  }
  local_8 = 0;
  local_20 = MessageBoxExW(param_1,param_2,param_3,param_4,param_5);
  local_8 = 0xfffffffe;
  FUN_1000be46();
  ExceptionList = local_14;
  return local_20;
}



/**************************************************/

/* Function: FUN_1000be46 @ 1000be46 */

void FUN_1000be46(void)

{
  FARPROC pFVar1;
  DWORD DVar2;
  FARPROC unaff_EBX;
  int unaff_EBP;
  
  if (DAT_10026fa0 == unaff_EBX) {
    pFVar1 = (FARPROC)(uint)(*(FARPROC *)(unaff_EBP + -0x1c) == unaff_EBX);
    if (pFVar1 == unaff_EBX) {
      *(FARPROC *)(unaff_EBP + 0x18) = unaff_EBX;
    }
    else {
      DVar2 = GetLastError();
      *(DWORD *)(unaff_EBP + 0x18) = DVar2;
    }
    if ((DAT_100271dc != unaff_EBX) ||
       (DAT_100271dc = FUN_10002780(&PTR_LAB_1001e448,(int *)&DAT_100271d0,"DeactivateActCtx"),
       DAT_100271dc != unaff_EBX)) {
      (*DAT_100271dc)();
    }
    if (pFVar1 != unaff_EBX) {
      SetLastError(*(DWORD *)(unaff_EBP + 0x18));
    }
    return;
  }
  return;
}



/**************************************************/

/* Function: FUN_1000beb0 @ 1000beb0 */

void __fastcall FUN_1000beb0(undefined4 *param_1)

{
  WCHAR WVar1;
  LPCWSTR lpchText;
  uint uVar2;
  int iVar3;
  HDC hdc;
  HFONT h;
  LPCWSTR pWVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBX;
  int unaff_EDI;
  int iStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  LONG *pLStack_f4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  HMODULE pHStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_b8;
  int iStack_ac;
  uint uStack_7c;
  LOGFONTW LStack_78;
  uint local_4;
  
  local_4 = DAT_10025bf4 ^ (uint)&local_d8;
  local_d8 = 0;
  if (param_1[8] == 0) {
    pLStack_f4 = (LONG *)0x1000bef1;
    FUN_1000bda0((HWND)*param_1,(LPCWSTR)param_1[1],(LPCWSTR)param_1[2],param_1[3],DAT_10027238);
    __security_check_cookie(local_4 ^ (uint)&local_d8);
    return;
  }
  pLStack_f4 = (LONG *)0x1000bf16;
  iVar3 = (*(code *)param_1[10])();
  pLStack_f4 = &LStack_78.lfWeight;
  uStack_f8 = 0x323;
  iStack_100 = 0x1000bf2b;
  iStack_fc = iVar3;
  (*(code *)param_1[0xc])();
  iStack_100 = iVar3;
  (*(code *)param_1[0xb])();
  hdc = GetDC((HWND)*param_1);
  h = CreateFontIndirectW(&LStack_78);
  SelectObject(hdc,h);
  SetRectEmpty((LPRECT)&stack0xffffff18);
  lpchText = (LPCWSTR)param_1[1];
  pWVar4 = lpchText;
  do {
    WVar1 = *pWVar4;
    pWVar4 = pWVar4 + 1;
  } while (WVar1 != L'\0');
  DrawTextW(hdc,lpchText,(int)pWVar4 - (int)(lpchText + 1) >> 1,(LPRECT)&stack0xffffff18,0x400);
  iVar5 = GetDeviceCaps(hdc,0x58);
  uVar6 = GetDialogBaseUnits();
  uVar6 = uVar6 & 0xffff;
  if (iVar3 == 0) {
    uVar7 = (uVar6 - 1) + (((uint)(iVar5 * 0x3f) / 0x60 - unaff_EDI) + unaff_EBX) * 4;
  }
  else {
    uVar7 = uVar6 + 0x7b + (((uint)(iVar5 << 5) / 0x60 - unaff_EDI) + unaff_EBX) * 4;
  }
  DeleteObject(h);
  ReleaseDC((HWND)*param_1,hdc);
  _memset(&local_d8,0,0x60);
  uStack_d4 = *param_1;
  local_d8 = 0x60;
  pHStack_d0 = GetModuleHandleW((LPCWSTR)0x0);
  if ((param_1[4] == 0) || (uStack_c8 = 9, param_1[4] != 1)) {
    uStack_c8 = 1;
  }
  iVar3 = param_1[5];
  if (iVar3 == 0x10) {
    iStack_c0 = 0xfffe;
  }
  else if (iVar3 == 0x30) {
    iStack_c0 = 0xffff;
  }
  else {
    iStack_c0 = (iVar3 != 0x40) + 0xfffd;
  }
  if (param_1[6] == 0) {
    iStack_ac = 1;
  }
  else {
    iStack_ac = (param_1[6] == 0x100) + 1;
  }
  uVar2 = uStack_cc | 0x1008;
  if ((param_1[3] & 0x180000) != 0) {
    uVar2 = uStack_cc | 0x3008;
  }
  uStack_cc = uVar2;
  uStack_c4 = param_1[2];
  uStack_b8 = param_1[1];
  uStack_7c = uVar7 / uVar6;
  (*(code *)param_1[8])(&local_d8,&stack0xffffff10,0,0);
  __security_check_cookie(LStack_78.lfFaceName._48_4_ ^ (uint)&iStack_100);
  return;
}



/**************************************************/

/* Function: FUN_1000c0f0 @ 1000c0f0 */

undefined4 * __thiscall
FUN_1000c0f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(uint *)((int)this + 0xc) = param_4;
  *(uint *)((int)this + 0x10) = param_4 & 0xf;
  *(uint *)((int)this + 0x14) = param_4 & 0xf0;
  *(uint *)((int)this + 0x18) = param_4 & 0xf00;
  pHVar1 = FUN_10005480(L"comctl32.dll");
  *(HMODULE *)((int)this + 0x1c) = pHVar1;
  if (pHVar1 != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(pHVar1,"TaskDialogIndirect");
    *(FARPROC *)((int)this + 0x20) = pFVar2;
  }
  pHVar1 = FUN_10005480(L"UxTheme.dll");
  *(HMODULE *)((int)this + 0x24) = pHVar1;
  if (pHVar1 != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(pHVar1,"OpenThemeData");
    *(FARPROC *)((int)this + 0x28) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 0x24),"CloseThemeData");
    *(FARPROC *)((int)this + 0x2c) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 0x24),"GetThemeSysFont");
    *(FARPROC *)((int)this + 0x30) = pFVar2;
  }
  return this;
}



/**************************************************/

/* Function: _memmove @ 1000c190 */

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
          goto switchD_1000c373_caseD_2;
        case 3:
          goto switchD_1000c373_caseD_3;
        }
        goto switchD_1000c373_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000c373_caseD_0;
      case 1:
        goto switchD_1000c373_caseD_1;
      case 2:
        goto switchD_1000c373_caseD_2;
      case 3:
        goto switchD_1000c373_caseD_3;
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
              goto switchD_1000c373_caseD_2;
            case 3:
              goto switchD_1000c373_caseD_3;
            }
            goto switchD_1000c373_caseD_1;
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
              goto switchD_1000c373_caseD_2;
            case 3:
              goto switchD_1000c373_caseD_3;
            }
            goto switchD_1000c373_caseD_1;
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
              goto switchD_1000c373_caseD_2;
            case 3:
              goto switchD_1000c373_caseD_3;
            }
            goto switchD_1000c373_caseD_1;
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
switchD_1000c373_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1000c373_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1000c373_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1000c373_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10028e98 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000c1ec_caseD_2;
      case 3:
        goto switchD_1000c1ec_caseD_3;
      }
      goto switchD_1000c1ec_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000c1ec_caseD_0;
    case 1:
      goto switchD_1000c1ec_caseD_1;
    case 2:
      goto switchD_1000c1ec_caseD_2;
    case 3:
      goto switchD_1000c1ec_caseD_3;
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
            goto switchD_1000c1ec_caseD_2;
          case 3:
            goto switchD_1000c1ec_caseD_3;
          }
          goto switchD_1000c1ec_caseD_1;
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
            goto switchD_1000c1ec_caseD_2;
          case 3:
            goto switchD_1000c1ec_caseD_3;
          }
          goto switchD_1000c1ec_caseD_1;
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
            goto switchD_1000c1ec_caseD_2;
          case 3:
            goto switchD_1000c1ec_caseD_3;
          }
          goto switchD_1000c1ec_caseD_1;
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
switchD_1000c1ec_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000c1ec_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000c1ec_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000c1ec_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: _V6_HeapAlloc @ 1000c4f5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_10028e84) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1000c53b();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000c53b @ 1000c53b */

void FUN_1000c53b(void)

{
  FUN_1000ee6d(4);
  return;
}



/**************************************************/

/* Function: _malloc @ 1000c544 */

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
    pDVar3 = FUN_1001010a();
    *pDVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_100273bc == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_1000fef6(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_10028e78 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_1000c5b5:
      piVar1 = HeapAlloc(DAT_100273bc,0,dwBytes);
    }
    else if ((DAT_10028e78 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_1000c5b5;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_10027720 == 0) {
      pDVar3 = FUN_1001010a();
      *pDVar3 = 0xc;
      goto LAB_1000c5e3;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_1000c5e3:
      pDVar3 = FUN_1001010a();
      *pDVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: ~type_info @ 1000c607 */

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

/* Function: `scalar_deleting_destructor' @ 1000c615 */

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

/* Function: operator== @ 1000c631 */

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

/* Function: _realloc @ 1000c64c */

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
  if (DAT_10028e78 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000c825;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1000efe2(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_10028e84) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1000efe2(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_100273bc,0,_NewSize);
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
      FUN_1000c790();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_100273bc,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10027720 == 0) {
        pDVar4 = FUN_1001010a();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1000c852;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1001010a();
    if (local_24 != (uint *)0x0) goto LAB_1000c831;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000c825;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_100273bc,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_10027720 == 0) {
        pDVar4 = FUN_1001010a();
LAB_1000c852:
        DVar5 = GetLastError();
        DVar5 = FUN_100100cf(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1001010a();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_100100cf(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_1000c825:
  __callnewh(_NewSize);
  pDVar4 = FUN_1001010a();
LAB_1000c831:
  *pDVar4 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1000c790 @ 1000c790 */

void FUN_1000c790(void)

{
  FUN_1000ee6d(4);
  return;
}



/**************************************************/

/* Function: _free @ 1000c867 */

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
    if (DAT_10028e78 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000efe2(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000c8bd();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100273bc,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1001010a();
      DVar4 = GetLastError();
      DVar4 = FUN_100100cf(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1000c8bd @ 1000c8bd */

void FUN_1000c8bd(void)

{
  FUN_1000ee6d(4);
  return;
}



/**************************************************/

/* Function: _free @ 1000c8f5 */

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
    if (DAT_10028e78 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000efe2(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000c8bd();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100273bc,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1001010a();
      DVar4 = GetLastError();
      DVar4 = FUN_100100cf(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: __cfltcvt_init @ 1000c8fa */

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_10025f70 = __cfltcvt;
  PTR_LAB_10025f74 = &LAB_100105ce;
  PTR_LAB_10025f78 = &LAB_1001058c;
  PTR_LAB_10025f7c = &LAB_100105c0;
  PTR_LAB_10025f80 = &LAB_10010536;
  PTR_LAB_10025f84 = __cfltcvt;
  PTR_LAB_10025f88 = __cfltcvt_l;
  PTR_LAB_10025f8c = __fassign_l;
  PTR_LAB_10025f90 = __cropzeros_l;
  PTR_LAB_10025f94 = __forcdecpt_l;
  return;
}



/**************************************************/

/* Function: __fpmath @ 1000c95a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_10027240 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



/**************************************************/

/* Function: _free @ 1000c978 */

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
    if (DAT_10028e78 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000efe2(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000c8bd();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100273bc,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1001010a();
      DVar4 = GetLastError();
      DVar4 = FUN_100100cf(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}



/**************************************************/

/* Function: __ArrayUnwind @ 1000c97d */

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

/* Function: `eh_vector_destructor_iterator' @ 1000c9db */

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
  FUN_1000ca26();
  return;
}



/**************************************************/

/* Function: FUN_1000ca26 @ 1000ca26 */

void FUN_1000ca26(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/**************************************************/

/* Function: __purecall @ 1000ca3e */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10011228(DAT_1002774c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_1000fef6(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/**************************************************/

/* Function: _JumpToContinuation @ 1000ca68 */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000ca91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/**************************************************/

/* Function: FID_conflict:_CallMemberFunction1 @ 1000ca98 */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000ca9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _UnwindNestedFrames @ 1000ca9f */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000cac8,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/**************************************************/

/* Function: FID_conflict:___CxxFrameHandler3 @ 1000caf1 */

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

/* Function: _CallSETranslator @ 1000cb57 */

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
    *(undefined4 *)param_2 = 0x1000cc00;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_10025bf4 ^ (uint)&local_2c;
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

/* Function: TranslatorGuardHandler @ 1000cc2c */

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
                    /* WARNING: Could not recover jumptable at 0x1000ccc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/**************************************************/

/* Function: _GetRangeOfTrysToCheck @ 1000ccc9 */

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

/* Function: __CreateFrameInfo @ 1000cd3c */

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

/* Function: __IsExceptionObjectToBeDestroyed @ 1000cd64 */

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

/* Function: __FindAndUnlinkFrame @ 1000cd85 */

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

/* Function: _CallCatchBlock2 @ 1000cdd1 */

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
  
  local_14 = DAT_10025bf4 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1000cb27;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/**************************************************/

/* Function: __security_check_cookie @ 1000ce2f */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_10025bf4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/**************************************************/

/* Function: FUN_1000ce3e @ 1000ce3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000ce3e(size_t param_1)

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
  if ((_DAT_10027250 & 1) == 0) {
    _DAT_10027250 = _DAT_10027250 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_10027244);
    _atexit((_func_4879 *)&LAB_1001d51b);
  }
  std::exception::exception((exception *)local_10,(exception *)&DAT_10027244);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_10021790);
}



/**************************************************/

/* Function: _wcsrchr @ 1000cea8 */

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

/* Function: exception @ 1000ced8 */

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

/* Function: exception @ 1000cf26 */

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

/* Function: exception @ 1000cf3e */

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

/* Function: ~exception @ 1000cf96 */

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

/* Function: FUN_1000cfac @ 1000cfac */

char * __fastcall FUN_1000cfac(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/**************************************************/

/* Function: FUN_1000cfb9 @ 1000cfb9 */

exception * __thiscall FUN_1000cfb9(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: _memset @ 1000cfe0 */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10028e98 != 0)) {
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

/* Function: FUN_1000d05a @ 1000d05a */

int __cdecl FUN_1000d05a(FILE *param_1)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (param_1 == (FILE *)0x0) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar3 = -1;
  }
  else {
    if ((param_1->_flag & 0x83) != 0) {
      iVar3 = __flush(param_1);
      __freebuf(param_1);
      iVar2 = __fileno(param_1);
      iVar2 = __close(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        _free(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    param_1->_flag = 0;
  }
  return iVar3;
}



/**************************************************/

/* Function: _fclose @ 1000d0cc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _fclose(FILE *_File)

{
  DWORD *pDVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    FUN_10012c19((uint)_File);
    local_20 = FUN_1000d05a(_File);
    FUN_1000d140();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000d140 @ 1000d140 */

void FUN_1000d140(void)

{
  uint unaff_ESI;
  
  FUN_10012c83(unaff_ESI);
  return;
}



/**************************************************/

/* Function: __fseek_nolock @ 1000d148 */

/* Library Function - Single Match
    __fseek_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fseek_nolock(FILE *_File,long _Offset,int _Origin)

{
  uint uVar1;
  DWORD *pDVar2;
  int iVar3;
  long lVar4;
  
  if ((_File->_flag & 0x83U) == 0) {
    pDVar2 = FUN_1001010a();
    *pDVar2 = 0x16;
    iVar3 = -1;
  }
  else {
    _File->_flag = _File->_flag & 0xffffffef;
    if (_Origin == 1) {
      lVar4 = __ftell_nolock(_File);
      _Offset = _Offset + lVar4;
      _Origin = 0;
    }
    __flush(_File);
    uVar1 = _File->_flag;
    if ((char)uVar1 < '\0') {
      _File->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      _File->_bufsiz = 0x200;
    }
    iVar3 = __fileno(_File);
    lVar4 = __lseek(iVar3,_Offset,_Origin);
    iVar3 = (lVar4 != -1) - 1;
  }
  return iVar3;
}



/**************************************************/

/* Function: _fseek @ 1000d1cf */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fseek
   
   Library: Visual Studio 2005 Release */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  DWORD *pDVar1;
  int iVar2;
  
  if ((_File == (FILE *)0x0) || (((_Origin != 0 && (_Origin != 1)) && (_Origin != 2)))) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    FUN_10012c19((uint)_File);
    iVar2 = __fseek_nolock(_File,_Offset,_Origin);
    FUN_1000d24a();
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000d24a @ 1000d24a */

void FUN_1000d24a(void)

{
  int unaff_EBP;
  
  FUN_10012c83(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_1000d254 @ 1000d254 */

uint __cdecl FUN_1000d254(LPWSTR param_1,LPWSTR param_2,uint param_3,uint param_4,FILE *param_5)

{
  LPWSTR pWVar1;
  LPWSTR pWVar2;
  DWORD *pDVar3;
  LPWSTR pWVar4;
  int iVar5;
  uint uVar6;
  LPWSTR pWVar7;
  LPWSTR pWVar8;
  LPWSTR pWVar9;
  LPWSTR local_10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_1 != (LPWSTR)0x0) {
      if ((param_5 != (FILE *)0x0) && (param_4 <= (uint)(0xffffffff / (ulonglong)param_3))) {
LAB_1000d2cd:
        pWVar8 = (LPWSTR)(param_3 * param_4);
        pWVar7 = pWVar8;
        pWVar2 = param_1;
        pWVar1 = param_2;
        if ((param_5->_flag & 0x10c) == 0) {
          local_10 = (LPWSTR)0x1000;
        }
        else {
          local_10 = (LPWSTR)param_5->_bufsiz;
        }
joined_r0x1000d2f2:
        do {
          while( true ) {
            if (pWVar7 == (LPWSTR)0x0) {
              return param_4;
            }
            if ((param_5->_flag & 0x10c) == 0) break;
            pWVar4 = (LPWSTR)param_5->_cnt;
            if (pWVar4 == (LPWSTR)0x0) break;
            if ((int)pWVar4 < 0) {
LAB_1000d442:
              param_5->_flag = param_5->_flag | 0x20;
LAB_1000d446:
              return (uint)((int)pWVar8 - (int)pWVar7) / param_3;
            }
            pWVar9 = pWVar7;
            if (pWVar4 <= pWVar7) {
              pWVar9 = pWVar4;
            }
            if (pWVar1 < pWVar9) {
              if (param_2 != (LPWSTR)0xffffffff) {
                _memset(param_1,0,(size_t)param_2);
              }
              pDVar3 = FUN_1001010a();
              *pDVar3 = 0x22;
              goto LAB_1000d289;
            }
            _memcpy_s(pWVar2,(rsize_t)pWVar1,param_5->_ptr,(rsize_t)pWVar9);
            param_5->_cnt = param_5->_cnt - (int)pWVar9;
            param_5->_ptr = param_5->_ptr + (int)pWVar9;
            pWVar7 = (LPWSTR)((int)pWVar7 - (int)pWVar9);
            pWVar1 = (LPWSTR)((int)pWVar1 - (int)pWVar9);
            pWVar2 = (LPWSTR)((int)pWVar2 + (int)pWVar9);
          }
          if (local_10 <= pWVar7) {
            if (local_10 == (LPWSTR)0x0) {
              pWVar4 = (LPWSTR)0x7fffffff;
              if (pWVar7 < (LPWSTR)0x80000000) {
                pWVar4 = pWVar7;
              }
            }
            else {
              if (pWVar7 < (LPWSTR)0x80000000) {
                uVar6 = (uint)pWVar7 % (uint)local_10;
                pWVar4 = pWVar7;
              }
              else {
                uVar6 = (uint)(0x7fffffff % ZEXT48(local_10));
                pWVar4 = (LPWSTR)0x7fffffff;
              }
              pWVar4 = (LPWSTR)((int)pWVar4 - uVar6);
            }
            if (pWVar1 < pWVar4) {
LAB_1000d415:
              if (param_2 != (LPWSTR)0xffffffff) {
                _memset(param_1,0,(size_t)param_2);
              }
              pDVar3 = FUN_1001010a();
              *pDVar3 = 0x22;
              goto LAB_1000d289;
            }
            pWVar9 = pWVar2;
            uVar6 = __fileno(param_5);
            iVar5 = FUN_100136aa(uVar6,pWVar9,pWVar4);
            if (iVar5 == 0) {
              param_5->_flag = param_5->_flag | 0x10;
              goto LAB_1000d446;
            }
            if (iVar5 == -1) goto LAB_1000d442;
            pWVar7 = (LPWSTR)((int)pWVar7 - iVar5);
            pWVar1 = (LPWSTR)((int)pWVar1 - iVar5);
            pWVar2 = (LPWSTR)((int)pWVar2 + iVar5);
            goto joined_r0x1000d2f2;
          }
          iVar5 = __filbuf(param_5);
          if (iVar5 == -1) goto LAB_1000d446;
          if (pWVar1 == (LPWSTR)0x0) goto LAB_1000d415;
          *(char *)pWVar2 = (char)iVar5;
          local_10 = (LPWSTR)param_5->_bufsiz;
          pWVar7 = (LPWSTR)((int)pWVar7 - 1);
          pWVar1 = (LPWSTR)((int)pWVar1 - 1);
          pWVar2 = (LPWSTR)((int)pWVar2 + 1);
        } while( true );
      }
      if (param_2 != (LPWSTR)0xffffffff) {
        _memset(param_1,0,(size_t)param_2);
      }
      if ((param_5 != (FILE *)0x0) && (param_4 <= (uint)(0xffffffff / (ulonglong)param_3)))
      goto LAB_1000d2cd;
    }
    pDVar3 = FUN_1001010a();
    *pDVar3 = 0x16;
LAB_1000d289:
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/**************************************************/

/* Function: _fread_s @ 1000d45a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fread_s
   
   Library: Visual Studio 2008 Release */

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  DWORD *pDVar1;
  uint uVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_10012c19((uint)_File);
      uVar2 = FUN_1000d254(_DstBuf,(LPWSTR)_DstSize,_ElementSize,_Count,_File);
      FUN_1000d4e6();
      return uVar2;
    }
    if (_DstSize != 0xffffffff) {
      _memset(_DstBuf,0,_DstSize);
    }
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000d4e6 @ 1000d4e6 */

void FUN_1000d4e6(void)

{
  int unaff_EBP;
  
  FUN_10012c83(*(uint *)(unaff_EBP + 0x18));
  return;
}



/**************************************************/

/* Function: FUN_1000d4f0 @ 1000d4f0 */

void __cdecl FUN_1000d4f0(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  _fread_s(param_1,0xffffffff,param_2,param_3,param_4);
  return;
}



/**************************************************/

/* Function: __wfsopen @ 1000d50b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wfsopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __wfsopen(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag)

{
  DWORD *pDVar1;
  FILE *pFVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10021f18;
  uStack_c = 0x1000d517;
  if (((_Filename == (wchar_t *)0x0) || (_Mode == (wchar_t *)0x0)) || (*_Mode == L'\0')) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    pFVar2 = (FILE *)FUN_10013aae();
    if (pFVar2 == (FILE *)0x0) {
      pDVar1 = FUN_1001010a();
      *pDVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != L'\0') {
        pFVar2 = __wopenfile(_Filename,_Mode,_ShFlag,pFVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_1000d5c7();
        return pFVar2;
      }
      pDVar1 = FUN_1001010a();
      *pDVar1 = 0x16;
      __local_unwind4(&DAT_10025bf4,(int)local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}



/**************************************************/

/* Function: FUN_1000d5c7 @ 1000d5c7 */

void FUN_1000d5c7(void)

{
  int unaff_EBP;
  
  FUN_10012c83(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __wfopen_s @ 1000d5d1 */

/* Library Function - Single Match
    __wfopen_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __wfopen_s(FILE **_File,wchar_t *_Filename,wchar_t *_Mode)

{
  DWORD *pDVar1;
  FILE *pFVar2;
  DWORD DVar3;
  
  if (_File == (FILE **)0x0) {
    pDVar1 = FUN_1001010a();
    DVar3 = 0x16;
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    pFVar2 = __wfsopen(_Filename,_Mode,0x80);
    *_File = pFVar2;
    if (pFVar2 == (FILE *)0x0) {
      pDVar1 = FUN_1001010a();
      DVar3 = *pDVar1;
    }
    else {
      DVar3 = 0;
    }
  }
  return DVar3;
}



/**************************************************/

/* Function: _strcpy_s @ 1000d621 */

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
      pDVar2 = FUN_1001010a();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000d640;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1001010a();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000d640:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: thunk_FUN_1000ce3e @ 1000d686 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl thunk_FUN_1000ce3e(size_t param_1)

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
  if ((_DAT_10027250 & 1) == 0) {
    _DAT_10027250 = _DAT_10027250 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_10027244);
    _atexit((_func_4879 *)&LAB_1001d51b);
  }
  std::exception::exception((exception *)appuStack_10,(exception *)&DAT_10027244);
  appuStack_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_10,&DAT_10021790);
}



/**************************************************/

/* Function: __CxxThrowException@8 @ 1000d68b */

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
  
  pDVar2 = &DAT_1001f2bc;
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

/* Function: __except_handler4 @ 1000d6e0 */

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_10025bf4);
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
          goto LAB_1000d78b;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_1001f964 != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1001f964)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_1001f964)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_10025bf4);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_10025bf4);
  }
LAB_1000d78b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/**************************************************/

/* Function: _memcpy @ 1000d880 */

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
          goto switchD_1000da63_caseD_2;
        case 3:
          goto switchD_1000da63_caseD_3;
        }
        goto switchD_1000da63_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000da63_caseD_0;
      case 1:
        goto switchD_1000da63_caseD_1;
      case 2:
        goto switchD_1000da63_caseD_2;
      case 3:
        goto switchD_1000da63_caseD_3;
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
              goto switchD_1000da63_caseD_2;
            case 3:
              goto switchD_1000da63_caseD_3;
            }
            goto switchD_1000da63_caseD_1;
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
              goto switchD_1000da63_caseD_2;
            case 3:
              goto switchD_1000da63_caseD_3;
            }
            goto switchD_1000da63_caseD_1;
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
              goto switchD_1000da63_caseD_2;
            case 3:
              goto switchD_1000da63_caseD_3;
            }
            goto switchD_1000da63_caseD_1;
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
switchD_1000da63_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1000da63_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1000da63_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1000da63_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10028e98 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1000d8dc_caseD_2;
      case 3:
        goto switchD_1000d8dc_caseD_3;
      }
      goto switchD_1000d8dc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000d8dc_caseD_0;
    case 1:
      goto switchD_1000d8dc_caseD_1;
    case 2:
      goto switchD_1000d8dc_caseD_2;
    case 3:
      goto switchD_1000d8dc_caseD_3;
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
            goto switchD_1000d8dc_caseD_2;
          case 3:
            goto switchD_1000d8dc_caseD_3;
          }
          goto switchD_1000d8dc_caseD_1;
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
            goto switchD_1000d8dc_caseD_2;
          case 3:
            goto switchD_1000d8dc_caseD_3;
          }
          goto switchD_1000d8dc_caseD_1;
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
            goto switchD_1000d8dc_caseD_2;
          case 3:
            goto switchD_1000d8dc_caseD_3;
          }
          goto switchD_1000d8dc_caseD_1;
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
switchD_1000d8dc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000d8dc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000d8dc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000d8dc_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: _wcscpy_s @ 1000dbe5 */

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
      pDVar2 = FUN_1001010a();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1000dc04;
    }
    *_Dst = L'\0';
  }
  pDVar2 = FUN_1001010a();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000dc04:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: `eh_vector_constructor_iterator' @ 1000dc51 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_1000dc9e();
  return;
}



/**************************************************/

/* Function: FUN_1000dc9e @ 1000dc9e */

void FUN_1000dc9e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}



/**************************************************/

/* Function: __alloca_probe @ 1000dcc0 */

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

/* Function: __CRT_INIT@12 @ 1000dceb */

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
        _DAT_100273cc = DVar2 * 0x100 + DVar3;
        DAT_100273c4 = DVar1;
        _DAT_100273c8 = uVar8;
        DAT_100273d0 = DVar2;
        _DAT_100273d4 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_10028e9c = GetCommandLineA();
            DAT_10027258 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_10027254 = DAT_10027254 + 1;
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
    if (0 < DAT_10027254) {
      DAT_10027254 = DAT_10027254 + -1;
      if (DAT_10027400 == 0) {
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
    FUN_1001129f();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_10025f9c;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_10011228(DAT_1002773c);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_1001130e((int)_Memory,0);
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

/* Function: ___DllMainCRTStartup @ 1000dec4 */

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
  if ((param_2 == 0) && (DAT_10027254 == 0)) {
LAB_1000dfb2:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_1001f2dc != (code *)0x0) {
        local_20 = (*DAT_1001f2dc)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_1000dfb2;
    }
    local_20 = FUN_10003920(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_10003920(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (DAT_1001f2dc != (code *)0x0) {
        (*DAT_1001f2dc)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_1001f2dc != (code *)0x0)) {
        local_20 = (*DAT_1001f2dc)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/**************************************************/

/* Function: entry @ 1000dfba */

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/**************************************************/

/* Function: _LocaleUpdate @ 1000dfdb */

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
    if ((*(undefined **)this != PTR_DAT_10026a18) && ((p_Var2->_ownlocale & DAT_10026934) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10026838) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10026934) == 0)) {
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

/* Function: __wcsicmp_l @ 1000e05d */

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
    pDVar5 = FUN_1001010a();
    *pDVar5 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar6 = 0x7fffffff;
  }
  else if (_Str2 == (wchar_t *)0x0) {
    pDVar5 = FUN_1001010a();
    *pDVar5 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __wcsicmp @ 1000e16c */

/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (DAT_10027ba8 == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      pDVar3 = FUN_1001010a();
      *pDVar3 = 0x16;
      FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __isleadbyte_l @ 1000e1fd */

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

/* Function: _isleadbyte @ 1000e233 */

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

/* Function: _iswalpha @ 1000e241 */

/* Library Function - Single Match
    _iswalpha
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswalpha(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  return iVar1;
}



/**************************************************/

/* Function: __vswprintf_helper @ 1000e252 */

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
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if ((param_3 != 0) && (param_2 == (char *)0x0)) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
      if (iVar3 == -1) goto LAB_1000e334;
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
LAB_1000e334:
  (param_2 + param_3 * 2 + -2)[0] = '\0';
  (param_2 + param_3 * 2 + -2)[1] = '\0';
  return (-1 < local_24._cnt) - 2;
}



/**************************************************/

/* Function: __vsnwprintf_s_l @ 1000e348 */

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
    pDVar2 = FUN_1001010a();
    *pDVar2 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (wchar_t *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_1000e392:
      if (_DstSize != 0) {
        pDVar2 = FUN_1001010a();
        if (_MaxCount < _DstSize) {
          DVar1 = *pDVar2;
          iVar3 = __vswprintf_helper(&DAT_100155ea,(char *)_DstBuf,_MaxCount + 1,(int)_Format,
                                     _Locale,_ArgList);
          if (iVar3 == -2) {
            pDVar2 = FUN_1001010a();
            if (*pDVar2 != 0x22) {
              return -1;
            }
            pDVar2 = FUN_1001010a();
            *pDVar2 = DVar1;
            return -1;
          }
LAB_1000e423:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          DVar1 = *pDVar2;
          iVar3 = __vswprintf_helper(&DAT_100155ea,(char *)_DstBuf,_DstSize,(int)_Format,_Locale,
                                     _ArgList);
          _DstBuf[_DstSize - 1] = L'\0';
          if (iVar3 != -2) goto LAB_1000e423;
          if (_MaxCount == 0xffffffff) {
            pDVar2 = FUN_1001010a();
            if (*pDVar2 != 0x22) {
              return -1;
            }
            pDVar2 = FUN_1001010a();
            *pDVar2 = DVar1;
            return -1;
          }
        }
        *_DstBuf = L'\0';
        if (iVar3 != -2) {
          return -1;
        }
        pDVar2 = FUN_1001010a();
        *pDVar2 = 0x22;
        goto LAB_1000e43a;
      }
    }
  }
  else if (_DstBuf != (wchar_t *)0x0) goto LAB_1000e392;
  pDVar2 = FUN_1001010a();
  *pDVar2 = 0x16;
LAB_1000e43a:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: __vsnwprintf_s @ 1000e44f */

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

/* Function: FUN_1000e46d @ 1000e46d */

uint __cdecl FUN_1000e46d(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  DWORD *pDVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint _Size;
  uint uVar5;
  uint uVar6;
  char *_Buf;
  uint local_c;
  char *local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (char *)0x0 && (param_3 <= (uint)(0xffffffff / (ulonglong)param_2))))) {
      uVar6 = param_2 * param_3;
      uVar5 = uVar6;
      if ((param_4->_flag & 0x10c) == 0) {
        local_c = 0x1000;
      }
      else {
        local_c = param_4->_bufsiz;
      }
      do {
        while( true ) {
          if (uVar5 == 0) {
            return param_3;
          }
          uVar4 = param_4->_flag & 0x108;
          if (uVar4 == 0) break;
          uVar3 = param_4->_cnt;
          if (uVar3 == 0) break;
          if ((int)uVar3 < 0) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_1000e5b7;
          }
          _Size = uVar5;
          if (uVar3 <= uVar5) {
            _Size = uVar3;
          }
          _memcpy(param_4->_ptr,param_1,_Size);
          param_4->_cnt = param_4->_cnt - _Size;
          param_4->_ptr = param_4->_ptr + _Size;
          uVar5 = uVar5 - _Size;
LAB_1000e573:
          local_8 = param_1 + _Size;
          param_1 = local_8;
        }
        if (local_c <= uVar5) {
          if ((uVar4 != 0) && (iVar2 = __flush(param_4), iVar2 != 0)) goto LAB_1000e5b7;
          uVar4 = uVar5;
          if (local_c != 0) {
            uVar4 = uVar5 - uVar5 % local_c;
          }
          _Buf = param_1;
          uVar3 = uVar4;
          iVar2 = __fileno(param_4);
          uVar3 = __write(iVar2,_Buf,uVar3);
          if (uVar3 != 0xffffffff) {
            _Size = uVar4;
            if (uVar3 <= uVar4) {
              _Size = uVar3;
            }
            uVar5 = uVar5 - _Size;
            if (uVar4 <= uVar3) goto LAB_1000e573;
          }
          param_4->_flag = param_4->_flag | 0x20;
LAB_1000e5b7:
          return (uVar6 - uVar5) / param_2;
        }
        iVar2 = __flsbuf((int)*param_1,param_4);
        if (iVar2 == -1) goto LAB_1000e5b7;
        param_1 = param_1 + 1;
        local_c = param_4->_bufsiz;
        uVar5 = uVar5 - 1;
        if ((int)local_c < 1) {
          local_c = 1;
        }
      } while( true );
    }
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/**************************************************/

/* Function: _fwrite @ 1000e5cc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2008 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  DWORD *pDVar1;
  uint uVar2;
  
  if ((_Size != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_10012c19((uint)_File);
      uVar2 = FUN_1000e46d(_Str,_Size,_Count,_File);
      FUN_1000e644();
      return uVar2;
    }
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000e644 @ 1000e644 */

void FUN_1000e644(void)

{
  int unaff_EBP;
  
  FUN_10012c83(*(uint *)(unaff_EBP + 0x14));
  return;
}



/**************************************************/

/* Function: _wcscat_s @ 1000e64e */

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
        pDVar2 = FUN_1001010a();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_1000e66d;
      }
    }
    *_Dst = L'\0';
  }
  pDVar2 = FUN_1001010a();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1000e66d:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: FUN_1000e6c8 @ 1000e6c8 */

undefined4 __cdecl
FUN_1000e6c8(wchar_t *param_1,wchar_t *param_2,uint param_3,wchar_t *param_4,uint param_5,
            wchar_t *param_6,uint param_7,wchar_t *param_8,uint param_9)

{
  bool bVar1;
  wchar_t wVar2;
  int iVar3;
  uint uVar4;
  DWORD *pDVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *local_8;
  
  bVar1 = false;
  if (param_1 != (wchar_t *)0x0) {
    if (param_2 == (wchar_t *)0x0) {
      if (param_3 == 0) {
LAB_1000e6f3:
        if (param_4 == (wchar_t *)0x0) {
          if (param_5 == 0) {
LAB_1000e704:
            if (param_6 == (wchar_t *)0x0) {
              if (param_7 == 0) {
LAB_1000e715:
                if (param_8 == (wchar_t *)0x0) {
                  if (param_9 == 0) {
LAB_1000e71f:
                    iVar3 = 1;
                    pwVar7 = param_1;
                    do {
                      if (*pwVar7 == L'\0') break;
                      iVar3 = iVar3 + -1;
                      pwVar7 = pwVar7 + 1;
                    } while (iVar3 != 0);
                    if (*pwVar7 == L':') {
                      if (param_2 != (wchar_t *)0x0) {
                        if (param_3 < 3) goto LAB_1000e84c;
                        _wcsncpy_s(param_2,param_3,param_1,2);
                      }
                      param_1 = pwVar7 + 1;
                    }
                    else if (param_2 != (wchar_t *)0x0) {
                      *param_2 = L'\0';
                    }
                    wVar2 = *param_1;
                    pwVar7 = (wchar_t *)0x0;
                    local_8 = (wchar_t *)0x0;
                    pwVar6 = param_1;
                    if (wVar2 == L'\0') {
LAB_1000e7da:
                      pwVar7 = param_1;
                      if (param_4 != (wchar_t *)0x0) {
                        *param_4 = L'\0';
                      }
                    }
                    else {
                      do {
                        if ((wVar2 == L'/') || (wVar2 == L'\\')) {
                          pwVar7 = pwVar6 + 1;
                        }
                        else if (wVar2 == L'.') {
                          local_8 = pwVar6;
                        }
                        pwVar6 = pwVar6 + 1;
                        wVar2 = *pwVar6;
                      } while (wVar2 != L'\0');
                      if (pwVar7 == (wchar_t *)0x0) goto LAB_1000e7da;
                      if (param_4 != (wchar_t *)0x0) {
                        uVar4 = (int)pwVar7 - (int)param_1 >> 1;
                        if (param_5 <= uVar4) goto LAB_1000e84c;
                        _wcsncpy_s(param_4,param_5,param_1,uVar4);
                      }
                    }
                    param_1 = pwVar7;
                    if ((local_8 == (wchar_t *)0x0) || (local_8 < param_1)) {
                      if (param_6 != (wchar_t *)0x0) {
                        uVar4 = (int)pwVar6 - (int)param_1 >> 1;
                        if (param_7 <= uVar4) goto LAB_1000e84c;
                        _wcsncpy_s(param_6,param_7,param_1,uVar4);
                      }
                      if (param_8 != (wchar_t *)0x0) {
                        *param_8 = L'\0';
                      }
                      return 0;
                    }
                    if (param_6 != (wchar_t *)0x0) {
                      uVar4 = (int)local_8 - (int)param_1 >> 1;
                      if (param_7 <= uVar4) goto LAB_1000e84c;
                      _wcsncpy_s(param_6,param_7,param_1,uVar4);
                    }
                    if (param_8 == (wchar_t *)0x0) {
                      return 0;
                    }
                    uVar4 = (int)pwVar6 - (int)local_8 >> 1;
                    if (uVar4 < param_9) {
                      _wcsncpy_s(param_8,param_9,local_8,uVar4);
                      return 0;
                    }
                    goto LAB_1000e84c;
                  }
                }
                else if (param_9 != 0) goto LAB_1000e71f;
              }
            }
            else if (param_7 != 0) goto LAB_1000e715;
          }
        }
        else if (param_5 != 0) goto LAB_1000e704;
      }
    }
    else if (param_3 != 0) goto LAB_1000e6f3;
  }
  bVar1 = true;
LAB_1000e84c:
  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
  }
  if ((param_4 != (wchar_t *)0x0) && (param_5 != 0)) {
    *param_4 = L'\0';
  }
  if ((param_6 != (wchar_t *)0x0) && (param_7 != 0)) {
    *param_6 = L'\0';
  }
  if ((param_8 != (wchar_t *)0x0) && (param_9 != 0)) {
    *param_8 = L'\0';
  }
  if (param_1 == (wchar_t *)0x0) {
    pDVar5 = FUN_1001010a();
  }
  else {
    pDVar5 = FUN_1001010a();
    if (!bVar1) {
      *pDVar5 = 0x22;
      return 0x22;
    }
  }
  *pDVar5 = 0x16;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __wmakepath_s @ 1000e8db */

/* Library Function - Single Match
    __wmakepath_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wmakepath_s(wchar_t *_PathResult,size_t _SIZE,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,
             wchar_t *_Ext)

{
  DWORD *pDVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  DWORD DVar7;
  uint uVar6;
  
  if ((_PathResult == (wchar_t *)0x0) || (_SIZE == 0)) {
    pDVar1 = FUN_1001010a();
    DVar7 = 0x16;
    goto LAB_1000e8f6;
  }
  pwVar3 = _PathResult;
  uVar5 = 0;
  if ((_Drive == (wchar_t *)0x0) || (*_Drive == L'\0')) {
LAB_1000e93a:
    if ((_Dir != (wchar_t *)0x0) && (*_Dir != L'\0')) {
      do {
        uVar6 = uVar5;
        pwVar4 = _Dir;
        pwVar2 = pwVar3;
        uVar5 = uVar6 + 1;
        if (_SIZE <= uVar5) goto LAB_1000e9da;
        *pwVar2 = *pwVar4;
        pwVar3 = pwVar2 + 1;
        _Dir = pwVar4 + 1;
      } while (pwVar4[1] != L'\0');
      if ((*pwVar4 != L'/') && (*pwVar4 != L'\\')) {
        uVar5 = uVar6 + 2;
        if (_SIZE <= uVar5) goto LAB_1000e9da;
        *pwVar3 = L'\\';
        pwVar3 = pwVar2 + 2;
      }
    }
    if (_Filename != (wchar_t *)0x0) {
      for (; *_Filename != L'\0'; _Filename = _Filename + 1) {
        uVar5 = uVar5 + 1;
        if (_SIZE <= uVar5) goto LAB_1000e9da;
        *pwVar3 = *_Filename;
        pwVar3 = pwVar3 + 1;
      }
    }
    if ((_Ext != (wchar_t *)0x0) && (*_Ext != L'\0')) {
      if (*_Ext != L'.') {
        uVar5 = uVar5 + 1;
        if (_SIZE <= uVar5) goto LAB_1000e9da;
        *pwVar3 = L'.';
        pwVar3 = pwVar3 + 1;
      }
      for (; *_Ext != L'\0'; _Ext = _Ext + 1) {
        uVar5 = uVar5 + 1;
        if (_SIZE <= uVar5) goto LAB_1000e9da;
        *pwVar3 = *_Ext;
        pwVar3 = pwVar3 + 1;
      }
    }
    if (uVar5 + 1 <= _SIZE) {
      *pwVar3 = L'\0';
      return 0;
    }
  }
  else if (2 < _SIZE) {
    *_PathResult = *_Drive;
    _PathResult[1] = L':';
    pwVar3 = _PathResult + 2;
    uVar5 = 2;
    goto LAB_1000e93a;
  }
LAB_1000e9da:
  *_PathResult = L'\0';
  pDVar1 = FUN_1001010a();
  DVar7 = 0x22;
LAB_1000e8f6:
  *pDVar1 = DVar7;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return DVar7;
}



/**************************************************/

/* Function: _atol @ 1000e9f6 */

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

/* Function: wcstoxl @ 1000ea07 */

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
    pDVar2 = FUN_1001010a();
    *pDVar2 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_1000ea9e:
    _C = *pwVar7;
    pwVar7 = pwVar1 + 2;
  }
  else if (_C == L'+') goto LAB_1000ea9e;
  uVar6 = (uint)(ushort)_C;
  if (param_4 == 0) {
    iVar3 = __wchartodigit(_C);
    if (iVar3 != 0) {
      param_4 = 10;
      goto LAB_1000eb02;
    }
    if ((*pwVar7 != L'x') && (*pwVar7 != L'X')) {
      param_4 = 8;
      goto LAB_1000eb02;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (iVar3 = __wchartodigit(_C), iVar3 == 0)) &&
     ((*pwVar7 == L'x' || (*pwVar7 == L'X')))) {
    uVar6 = (uint)(ushort)pwVar7[1];
    pwVar7 = pwVar7 + 2;
  }
LAB_1000eb02:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  local_c = (uint)(0xffffffff % (ulonglong)(uint)param_4);
  do {
    uVar8 = (ushort)uVar6;
    uVar5 = __wchartodigit(uVar8);
    if (uVar5 == 0xffffffff) {
      if (((uVar8 < 0x41) || (0x5a < uVar8)) && (0x19 < (ushort)(uVar8 - 0x61))) {
LAB_1000eb61:
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
          pDVar2 = FUN_1001010a();
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
    if ((uint)param_4 <= uVar5) goto LAB_1000eb61;
    if ((uVar9 < uVar4) || ((uVar9 == uVar4 && (uVar5 <= local_c)))) {
      uVar9 = uVar9 * param_4 + uVar5;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (wchar_t **)0x0) goto LAB_1000eb61;
    }
    uVar6 = (uint)(ushort)*pwVar7;
    pwVar7 = pwVar7 + 1;
  } while( true );
}



/**************************************************/

/* Function: _wcstol @ 1000ebfe */

/* Library Function - Single Match
    _wcstol
   
   Library: Visual Studio 2005 Release */

long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10027ba8 == 0) {
    ppuVar2 = &PTR_DAT_10026a20;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: _wcstoul @ 1000ec27 */

/* Library Function - Single Match
    _wcstoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10027ba8 == 0) {
    ppuVar2 = &PTR_DAT_10026a20;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}



/**************************************************/

/* Function: FUN_1000ec51 @ 1000ec51 */

void __cdecl FUN_1000ec51(undefined4 *param_1,undefined4 *param_2,uint param_3)

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

/* Function: __VEC_memcpy @ 1000ecd8 */

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
      FUN_1000ec51(param_1,param_2,param_3 - uVar3);
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

/* Function: __mtinitlocks @ 1000edcf */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10027268;
  do {
    if ((&DAT_10025c14)[iVar2 * 2] == 1) {
      (&DAT_10025c10)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10025c10)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10025c10)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 1000ee18 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10025c10;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10025d30);
  puVar1 = &DAT_10025c10;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10025d30);
  return;
}



/**************************************************/

/* Function: FUN_1000ee6d @ 1000ee6d */

void __cdecl FUN_1000ee6d(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10025c10)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 1000ee82 */

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
  if (DAT_100273bc == 0) {
    __FF_MSGBANNER();
    FUN_1000fef6(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10025c10 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_1001010a();
      *pDVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_1001010a();
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
      FUN_1000ef3c();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_1000ef3c @ 1000ef3c */

void FUN_1000ef3c(void)

{
  FUN_1000ee6d(10);
  return;
}



/**************************************************/

/* Function: __lock @ 1000ef45 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10025c10)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10025c10)[_File * 2]);
  return;
}



/**************************************************/

/* Function: ___sbh_heap_init @ 1000ef76 */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_10028e80 = HeapAlloc(DAT_100273bc,0,0x140);
  if (DAT_10028e80 == (LPVOID)0x0) {
    return 0;
  }
  DAT_100273b8 = 0;
  DAT_10028e7c = 0;
  DAT_10028e88 = DAT_10028e80;
  DAT_10028e84 = param_1;
  DAT_10028e8c = 0x10;
  return 1;
}



/**************************************************/

/* Function: thunk_FUN_1000efe2 @ 1000efbe */

void __thiscall thunk_FUN_1000efe2(void *this,int param_1)

{
  FUN_1000efe2((void *)(DAT_10028e7c * 0x14 + DAT_10028e80),param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000efe2 @ 1000efe2 */

void __thiscall FUN_1000efe2(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/**************************************************/

/* Function: ___sbh_free_block @ 1000efe9 */

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
      if (DAT_100273b8 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10028e90 * 0x8000 + DAT_100273b8[3]),0x8000,0x4000);
        DAT_100273b8[2] = DAT_100273b8[2] | 0x80000000U >> ((byte)DAT_10028e90 & 0x1f);
        *(undefined4 *)(DAT_100273b8[4] + 0xc4 + DAT_10028e90 * 4) = 0;
        *(char *)(DAT_100273b8[4] + 0x43) = *(char *)(DAT_100273b8[4] + 0x43) + -1;
        if (*(char *)(DAT_100273b8[4] + 0x43) == '\0') {
          DAT_100273b8[1] = DAT_100273b8[1] & 0xfffffffe;
        }
        if (DAT_100273b8[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_100273b8[3],0,0x8000);
          HeapFree(DAT_100273bc,0,(LPVOID)DAT_100273b8[4]);
          _memmove(DAT_100273b8,DAT_100273b8 + 5,
                   (DAT_10028e7c * 0x14 - (int)DAT_100273b8) + -0x14 + DAT_10028e80);
          DAT_10028e7c = DAT_10028e7c + -1;
          if (DAT_100273b8 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10028e88 = DAT_10028e80;
        }
      }
      DAT_100273b8 = param_1;
      DAT_10028e90 = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 1000f2fd */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10028e7c == DAT_10028e8c) {
    pvVar1 = HeapReAlloc(DAT_100273bc,0,DAT_10028e80,(DAT_10028e8c + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10028e8c = DAT_10028e8c + 0x10;
    DAT_10028e80 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_10028e7c * 0x14 + (int)DAT_10028e80);
  pvVar1 = HeapAlloc(DAT_100273bc,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_10028e7c = DAT_10028e7c + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_100273bc,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 1000f3ad */

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

/* Function: ___sbh_resize_block @ 1000f4b3 */

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

/* Function: ___sbh_alloc_block @ 1000f792 */

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
  
  puVar9 = DAT_10028e80 + DAT_10028e7c * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_10028e88;
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
  puVar13 = DAT_10028e80;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_10028e88 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_10028e88) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_10028e80;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_10028e88 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_10028e88) &&
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
  DAT_10028e88 = param_1;
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
    if (iVar10 == 0) goto LAB_1000fa32;
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
LAB_1000fa32:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_100273b8)) && (local_8 == DAT_10028e90)) {
    DAT_100273b8 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/**************************************************/

/* Function: __SEH_prolog4 @ 1000fa78 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10025bf4 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 1000fabd */

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

/* Function: ___heap_select @ 1000fad1 */

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

/* Function: __heap_init @ 1000fb2c */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_100273bc = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_100273bc == (HANDLE)0x0) {
    return 0;
  }
  DAT_10028e78 = ___heap_select();
  if ((DAT_10028e78 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_100273bc);
    DAT_100273bc = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 1000fb86 */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10028e78 == 3) {
    iVar2 = 0;
    if (0 < DAT_10028e7c) {
      puVar1 = (undefined4 *)((int)DAT_10028e80 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_100273bc,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10028e7c);
    }
    HeapFree(DAT_100273bc,0,DAT_10028e80);
  }
  HeapDestroy(DAT_100273bc);
  DAT_100273bc = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: __amsg_exit @ 1000fbfa */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_1000fef6(param_1);
  pcVar1 = (code *)FUN_10011228((int)PTR___exit_10025d34);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: FUN_1000fc1e @ 1000fc1e */

void __cdecl FUN_1000fc1e(undefined4 param_1)

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

/* Function: ___crtExitProcess @ 1000fc44 */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_1000fc1e(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: FUN_1000fc59 @ 1000fc59 */

void FUN_1000fc59(void)

{
  __lock(8);
  return;
}



/**************************************************/

/* Function: FUN_1000fc62 @ 1000fc62 */

void FUN_1000fc62(void)

{
  FUN_1000ee6d(8);
  return;
}



/**************************************************/

/* Function: FUN_1000fc6b @ 1000fc6b */

void __cdecl FUN_1000fc6b(undefined4 *param_1)

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

/* Function: __initterm_e @ 1000fc83 */

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

/* Function: __get_osplatform @ 1000fca3 */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_100273c4 != 0)) {
    *param_1 = DAT_100273c4;
    return 0;
  }
  pDVar1 = FUN_1001010a();
  *pDVar1 = 0x16;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __get_winmajor @ 1000fcda */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_100273c4 != 0)) {
    *param_1 = DAT_100273d0;
    return 0;
  }
  pDVar1 = FUN_1001010a();
  *pDVar1 = 0x16;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __cinit @ 1000fd16 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_1001f290 != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_1001f290), BVar1 != 0)) {
    (*(code *)PTR___fpmath_1001f290)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1001e258,(undefined4 *)&DAT_1001e270);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_1001465f);
    puVar3 = &DAT_1001e24c;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1001e254);
    if ((DAT_10028e74 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10028e74), BVar1 != 0)) {
      (*DAT_10028e74)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1000fda8 @ 1000fda8 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1000fe7b) */

void __cdecl FUN_1000fda8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10027404 != 1) {
    DAT_10027400 = 1;
    DAT_100273fc = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_10011228(DAT_10028e6c);
      piVar3 = (int *)FUN_10011228(DAT_10028e68);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_10011228(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_1000fc6b((undefined4 *)&DAT_1001e280);
    }
    FUN_1000fc6b((undefined4 *)&DAT_1001e288);
  }
  FUN_1000fe75();
  if (param_3 != 0) {
    return;
  }
  DAT_10027404 = 1;
  FUN_1000ee6d(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000fe75 @ 1000fe75 */

void FUN_1000fe75(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_1000ee6d(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 1000fe8a */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000fda8(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 1000fe9b */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1000fda8(0,0,1);
  return;
}



/**************************************************/

/* Function: __init_pointers @ 1000feaa */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1001014e(uVar1);
  FUN_10016b04(uVar1);
  FUN_1001031b(uVar1);
  FUN_1001176a(uVar1);
  FUN_10016ded(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_10014683();
  __initp_eh_hooks();
  PTR___exit_10025d34 = (undefined *)FUN_100111b1(0x1000fe8a);
  return;
}



/**************************************************/

/* Function: FUN_1000fef6 @ 1000fef6 */

void __cdecl FUN_1000fef6(int param_1)

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
    if (param_1 == (&DAT_10025d38)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_10027264 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x10025d3c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10027408,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10027525 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10027421,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10027421,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10027421);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10027421);
        _Dst = (char *)((int)&DAT_100273e4 + sVar5 + 2);
        eVar3 = _strncpy_s(_Dst,(int)&DAT_1002771c - (int)_Dst,"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10027408,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10027408,0x314,*(char **)(uVar6 * 8 + 0x10025d3c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_10016df7(&DAT_10027408,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 10010096 */

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
    if (DAT_10027264 != 1) {
      return;
    }
  }
  FUN_1000fef6(0xfc);
  FUN_1000fef6(0xff);
  return;
}



/**************************************************/

/* Function: FUN_100100cf @ 100100cf */

int __cdecl FUN_100100cf(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10025df0)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x10025df4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_1001010a @ 1001010a */

DWORD * FUN_1001010a(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100113cd();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10025f58;
  }
  return pDVar1 + 2;
}



/**************************************************/

/* Function: FUN_1001011d @ 1001011d */

DWORD * FUN_1001011d(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100113cd();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10025f5c;
  }
  return pDVar1 + 3;
}



/**************************************************/

/* Function: FUN_10010130 @ 10010130 */

void __cdecl FUN_10010130(DWORD param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  pDVar1 = FUN_1001011d();
  *pDVar1 = param_1;
  DVar2 = FUN_100100cf(param_1);
  pDVar1 = FUN_1001010a();
  *pDVar1 = DVar2;
  return;
}



/**************************************************/

/* Function: FUN_1001014e @ 1001014e */

void __cdecl FUN_1001014e(undefined4 param_1)

{
  DAT_1002771c = param_1;
  return;
}



/**************************************************/

/* Function: __callnewh @ 10010158 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_10011228(DAT_1002771c);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: _Type_info_dtor @ 1001017a */

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
  _Memory = DAT_10027728;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_10027724;
    do {
      piVar2 = piVar1;
      if (DAT_10027728 == (int *)0x0) goto LAB_100101be;
      piVar1 = DAT_10027728;
    } while (*DAT_10027728 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_10027728[1];
    _free(_Memory);
LAB_100101be:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_100101e1();
  return;
}



/**************************************************/

/* Function: FUN_100101e1 @ 100101e1 */

void FUN_100101e1(void)

{
  FUN_1000ee6d(0xe);
  return;
}



/**************************************************/

/* Function: _strcmp @ 100101f0 */

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
      if (bVar4 != *_Str2) goto LAB_10010234;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10010200;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10010234;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10010234;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10010200:
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
LAB_10010234:
  return (uint)bVar5 * -2 + 1;
}



/**************************************************/

/* Function: __msize @ 10010278 */

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
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_10028e78 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_1000efe2(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_10010312();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_100273bc,0,_Memory);
  }
  return sVar2;
}



/**************************************************/

/* Function: FUN_10010312 @ 10010312 */

void FUN_10010312(void)

{
  FUN_1000ee6d(4);
  return;
}



/**************************************************/

/* Function: FUN_1001031b @ 1001031b */

void __cdecl FUN_1001031b(undefined4 param_1)

{
  DAT_1002772c = param_1;
  return;
}



/**************************************************/

/* Function: __invoke_watson @ 10010325 */

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
  
  iVar1 = DAT_10025bf4;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1001711e();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/**************************************************/

/* Function: FUN_10010421 @ 10010421 */

void __cdecl
FUN_10010421(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_10011228(DAT_1002772c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10010435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1001711e();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/**************************************************/

/* Function: __forcdecpt_l @ 10010445 */

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

/* Function: __cropzeros_l @ 100104b6 */

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

/* Function: __fassign_l @ 1001054c */

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

/* Function: __shift @ 100105a3 */

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

/* Function: __cftoe2_l @ 100105dc */

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
    pDVar1 = FUN_1001010a();
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
      if (((DAT_10027c38 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return (DWORD)pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return (DWORD)pcVar9;
    }
    pDVar1 = FUN_1001010a();
    DVar7 = 0x22;
  }
  DVar8 = 0;
  *pDVar1 = DVar7;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return DVar8;
}



/**************************************************/

/* Function: __cftoe_l @ 10010749 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftoe @ 10010817 */

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

/* Function: __cftoa_l @ 10010835 */

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
    pDVar2 = FUN_1001010a();
    DVar14 = 0x16;
LAB_1001086e:
    DVar15 = 0;
    *pDVar2 = DVar14;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return DVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    pDVar2 = FUN_1001010a();
    DVar14 = 0x22;
    goto LAB_1001086e;
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
    goto LAB_10010b92;
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
LAB_10010b41:
    if ((-1 < (int)uVar6) && ((0 < (int)uVar6 || (99 < uVar7)))) goto LAB_10010b4c;
  }
  else {
    uVar13 = __alldvrm(uVar7,uVar6,1000,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar9 = (char)uVar13 + '0';
    pcVar10 = pcVar4 + 3;
    uVar6 = 0;
    uVar7 = extraout_ECX;
    if (pcVar10 == pcVar9) goto LAB_10010b41;
LAB_10010b4c:
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
LAB_10010b92:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}



/**************************************************/

/* Function: __cftof2_l @ 10010ba6 */

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
    pDVar2 = FUN_1001010a();
    uVar4 = 0x16;
    *pDVar2 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftof_l @ 10010c9b */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftog_l @ 10010d54 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_1001010a();
    *pDVar2 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cfltcvt_l @ 10010e4c */

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

/* Function: __cfltcvt @ 10010ed2 */

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

/* Function: __initp_misc_cfltcvt_tab @ 10010ef3 */

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
    piVar1 = (int *)((int)&PTR_LAB_10025f70 + uVar3);
    iVar2 = FUN_100111b1(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: __setdefaultprecision @ 10010f12 */

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

/* Function: __ms_p5_test_fdiv @ 10010f3b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_1001f8c8 - (_DAT_1001f8c8 / _DAT_1001f8d0) * _DAT_1001f8d0) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: __ms_p5_mp_test_fdiv @ 10010f77 */

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

/* Function: terminate @ 10010fa0 */

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

/* Function: unexpected @ 10010fd9 */

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

/* Function: _inconsistency @ 10010fec */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10011228(DAT_10027730);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}



/**************************************************/

/* Function: __initp_eh_hooks @ 10011023 */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_10027730 = FUN_100111b1(0x10010fa0);
  return;
}



/**************************************************/

/* Function: _abort @ 10011034 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_10025f98 & 1) != 0) {
    FUN_1000fef6(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_10025f98 & 2) != 0) {
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

/* Function: __set_abort_behavior @ 10011127 */

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_10025f98;
  DAT_10025f98 = ~_Mask & DAT_10025f98 | _Flags & _Mask;
  return uVar1;
}



/**************************************************/

/* Function: FUN_10011145 @ 10011145 */

undefined4 FUN_10011145(void)

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

/* Function: FUN_100111b1 @ 100111b1 */

int __cdecl FUN_100111b1(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10025fa0);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10025f9c != -1)) {
    iVar3 = DAT_10025f9c;
    pcVar2 = TlsGetValue(DAT_10025fa0);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1001120b;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10011145();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1001120b:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 1001121f */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_100111b1(0);
  return;
}



/**************************************************/

/* Function: FUN_10011228 @ 10011228 */

int __cdecl FUN_10011228(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10025fa0);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10025f9c != -1)) {
    iVar3 = DAT_10025f9c;
    pcVar2 = TlsGetValue(DAT_10025fa0);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_10011282;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10011145();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_10011282:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_1001129f @ 1001129f */

LPVOID FUN_1001129f(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_10025fa0);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_10011228(DAT_10027738);
    TlsSetValue(DAT_10025fa0,lpTlsValue);
  }
  return lpTlsValue;
}



/**************************************************/

/* Function: __mtterm @ 100112d1 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_10025f9c != -1) {
    iVar2 = DAT_10025f9c;
    pcVar1 = (code *)FUN_10011228(DAT_10027740);
    (*pcVar1)(iVar2);
    DAT_10025f9c = -1;
  }
  if (DAT_10025fa0 != 0xffffffff) {
    TlsFree(DAT_10025fa0);
    DAT_10025fa0 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: FUN_1001130e @ 1001130e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_1001130e(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10026388;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_10011145();
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
  *(undefined **)(param_1 + 0x68) = &DAT_10026410;
  InterlockedIncrement((LONG *)&DAT_10026410);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10026a18;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_100113c4();
  return;
}



/**************************************************/

/* Function: FUN_100113c4 @ 100113c4 */

void FUN_100113c4(void)

{
  FUN_1000ee6d(0xc);
  return;
}



/**************************************************/

/* Function: FUN_100113cd @ 100113cd */

DWORD * FUN_100113cd(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_10025f9c;
  pcVar1 = FUN_1001129f();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_10025f9c;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_10011228(DAT_1002773c);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_1001130e((int)_Memory,0);
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

/* Function: __getptd @ 10011444 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_100113cd();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: __freefls@4 @ 1001145c */

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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10026388) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10026410)) {
        _free(pLVar1);
      }
    }
    FUN_10011568();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10026a18) && (pLVar1 != (LONG *)&DAT_10026940)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_10011574();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_10011568 @ 10011568 */

void FUN_10011568(void)

{
  FUN_1000ee6d(0xd);
  return;
}



/**************************************************/

/* Function: FUN_10011574 @ 10011574 */

void FUN_10011574(void)

{
  FUN_1000ee6d(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 1001157d */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_10025f9c != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_10025fa0), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10025f9c;
      pcVar2 = TlsGetValue(DAT_10025fa0);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_10025f9c;
    pcVar2 = (code *)FUN_10011228(DAT_1002773c);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_10025fa0 != 0xffffffff) {
    TlsSetValue(DAT_10025fa0,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: __mtinit @ 100115e6 */

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
  DAT_10027734 = GetProcAddress(hModule,"FlsAlloc");
  DAT_10027738 = GetProcAddress(hModule,"FlsGetValue");
  DAT_1002773c = GetProcAddress(hModule,"FlsSetValue");
  DAT_10027740 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10027734 == (FARPROC)0x0) || (DAT_10027738 == (FARPROC)0x0)) ||
      (DAT_1002773c == (FARPROC)0x0)) || (DAT_10027740 == (FARPROC)0x0)) {
    DAT_10027738 = TlsGetValue_exref;
    DAT_10027734 = (FARPROC)&LAB_10011296;
    DAT_1002773c = TlsSetValue_exref;
    DAT_10027740 = TlsFree_exref;
  }
  DAT_10025fa0 = TlsAlloc();
  if ((DAT_10025fa0 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10025fa0,DAT_10027738), BVar1 != 0))
  {
    __init_pointers();
    DAT_10027734 = (FARPROC)FUN_100111b1((int)DAT_10027734);
    DAT_10027738 = (FARPROC)FUN_100111b1((int)DAT_10027738);
    DAT_1002773c = (FARPROC)FUN_100111b1((int)DAT_1002773c);
    DAT_10027740 = (FARPROC)FUN_100111b1((int)DAT_10027740);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_10011228((int)DAT_10027734);
      DAT_10025f9c = (*pcVar3)(pcVar6);
      if ((DAT_10025f9c != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_10025f9c;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_10011228((int)DAT_1002773c);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_1001130e((int)pDVar4,0);
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

/* Function: FUN_1001176a @ 1001176a */

void __cdecl FUN_1001176a(undefined4 param_1)

{
  DAT_1002774c = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1001177f @ 1001177f */

exception * __thiscall FUN_1001177f(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}



/**************************************************/

/* Function: ___TypeMatch @ 100117a1 */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100117f7:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100117d5:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100117f7;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100117d5;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/**************************************************/

/* Function: ___FrameUnwindToState @ 10011841 */

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
  FUN_10011907();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/**************************************************/

/* Function: FUN_10011907 @ 10011907 */

void FUN_10011907(void)

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

/* Function: ___DestructExceptionObject @ 10011967 */

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

/* Function: ___AdjustPointer @ 100119bb */

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

/* Function: IsInExceptionSpec @ 100119e0 */

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

/* Function: CallUnexpected @ 10011a59 */

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

/* Function: Catch_All@10011a8a @ 10011a8a */

void Catch_All_10011a8a(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/**************************************************/

/* Function: CallCatchBlock @ 10011aa2 */

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
  
  local_8 = &DAT_10022140;
  uStack_c = 0x10011aae;
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
  FUN_10011bc8();
  return local_20;
}



/**************************************************/

/* Function: FUN_10011bc8 @ 10011bc8 */

void FUN_10011bc8(void)

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

/* Function: ___BuildCatchObjectHelper @ 10011c3e */

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
        goto LAB_10011cc3;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_10011cc3:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/**************************************************/

/* Function: ___BuildCatchObject @ 10011dbd */

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

/* Function: CatchIt @ 10011e4e */

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

/* Function: FindHandlerForForeignException @ 10011eba */

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

/* Function: FindHandler @ 10011fac */

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
                param_1 = (EHExceptionRecord *)s_bad_exception_1001f974;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_100221a4);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_100120ea;
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
                  goto LAB_10012214;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_10012214:
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
         uVar3 != '\0')) goto LAB_100122ea;
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
LAB_100120ea:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_100122ea:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/**************************************************/

/* Function: ___InternalCxxFrameHandler @ 1001231a */

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

/* Function: __CallSettingFrame@12 @ 10012400 */

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

/* Function: ___report_gsfailure @ 1001244c */

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
  
  _DAT_10027868 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1002786c = &stack0x00000004;
  _DAT_100277a8 = 0x10001;
  _DAT_10027750 = 0xc0000409;
  _DAT_10027754 = 1;
  local_32c = DAT_10025bf4;
  local_328 = DAT_10025bf8;
  _DAT_1002775c = unaff_retaddr;
  _DAT_10027834 = in_GS;
  _DAT_10027838 = in_FS;
  _DAT_1002783c = in_ES;
  _DAT_10027840 = in_DS;
  _DAT_10027844 = unaff_EDI;
  _DAT_10027848 = unaff_ESI;
  _DAT_1002784c = unaff_EBX;
  _DAT_10027850 = in_EDX;
  _DAT_10027854 = in_ECX;
  _DAT_10027858 = in_EAX;
  _DAT_1002785c = unaff_EBP;
  DAT_10027860 = unaff_retaddr;
  _DAT_10027864 = in_CS;
  _DAT_10027870 = in_SS;
  DAT_100277a0 = IsDebuggerPresent();
  FUN_1001711e();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1001f984);
  if (DAT_100277a0 == 0) {
    FUN_1001711e();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: FUN_10012550 @ 10012550 */

int __cdecl FUN_10012550(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_10011228(DAT_10028e6c);
  piVar2 = (int *)FUN_10011228(DAT_10028e68);
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
        DAT_10028e6c = FUN_100111b1((int)pvVar5);
      }
      iVar6 = FUN_100111b1(param_1);
      *piVar2 = iVar6;
      DAT_10028e68 = FUN_100111b1((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __onexit @ 10012638 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_1000fc59();
  p_Var1 = (_onexit_t)FUN_10012550((int)_Func);
  FUN_1001266e();
  return p_Var1;
}



/**************************************************/

/* Function: FUN_1001266e @ 1001266e */

void FUN_1001266e(void)

{
  FUN_1000fc62();
  return;
}



/**************************************************/

/* Function: _atexit @ 10012674 */

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

/* Function: _strlen @ 10012690 */

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100126c0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100126f3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100126c0:
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
  goto LAB_100126f3;
}



/**************************************************/

/* Function: fastzero_I @ 1001271b */

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

/* Function: __VEC_memzero @ 10012772 */

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

/* Function: __close_nolock @ 10012801 */

/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_10027d40 + 0x74) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_10027d40 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_10012860;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10012862;
    }
  }
LAB_10012860:
  DVar4 = 0;
LAB_10012862:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_10010130(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}



/**************************************************/

/* Function: __close @ 10012895 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2005 Release */

int __cdecl __close(int _FileHandle)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10027d20)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1001010a();
          *pDVar1 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_10012958();
        return local_20;
      }
    }
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10012958 @ 10012958 */

void FUN_10012958(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __fileno @ 10012962 */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  DWORD *pDVar1;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  return _File->_file;
}



/**************************************************/

/* Function: __freebuf @ 1001298f */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2005 Release */

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

/* Function: __flush @ 100129bb */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2005 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}



/**************************************************/

/* Function: __fflush_nolock @ 10012a1d */

/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = __flush(_File);
  if (iVar1 != 0) {
    return -1;
  }
  if ((_File->_flag & 0x4000) != 0) {
    iVar1 = __fileno(_File);
    iVar1 = __commit(iVar1);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/**************************************************/

/* Function: flsall @ 10012a5f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2005 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  FILE *_File;
  int iVar2;
  int iVar3;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar3 = 0; iVar3 < DAT_10028e60; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(DAT_10027e40 + iVar3 * 4);
    if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_10012c55(iVar3,iVar2);
      _File = *(FILE **)(DAT_10027e40 + iVar3 * 4);
      if ((_File->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((_File->_flag & 2U) != 0)) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_10012b01();
    }
  }
  FUN_10012b30();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_10012b01 @ 10012b01 */

void FUN_10012b01(void)

{
  int unaff_ESI;
  
  FUN_10012cb9(unaff_ESI,*(int *)(DAT_10027e40 + unaff_ESI * 4));
  return;
}



/**************************************************/

/* Function: FUN_10012b30 @ 10012b30 */

void FUN_10012b30(void)

{
  FUN_1000ee6d(1);
  return;
}



/**************************************************/

/* Function: FUN_10012b42 @ 10012b42 */

undefined ** FUN_10012b42(void)

{
  return &PTR_DAT_10025fd0;
}



/**************************************************/

/* Function: FUN_10012c19 @ 10012c19 */

void __cdecl FUN_10012c19(uint param_1)

{
  if ((0x10025fcf < param_1) && (param_1 < 0x10026231)) {
    __lock(((int)(param_1 + 0xeffda030) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_10012c55 @ 10012c55 */

void __cdecl FUN_10012c55(int param_1,int param_2)

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

/* Function: FUN_10012c83 @ 10012c83 */

void __cdecl FUN_10012c83(uint param_1)

{
  if ((0x10025fcf < param_1) && (param_1 < 0x10026231)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_1000ee6d(((int)(param_1 + 0xeffda030) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_10012cb9 @ 10012cb9 */

void __cdecl FUN_10012cb9(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_1000ee6d(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/**************************************************/

/* Function: __lseek_nolock @ 10012ce3 */

/* Library Function - Single Match
    __lseek_nolock
   
   Library: Visual Studio 2005 Release */

long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1001010a();
    *pDVar2 = 9;
    return -1;
  }
  DVar3 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
  if (DVar3 == 0xffffffff) {
    DVar4 = GetLastError();
  }
  else {
    DVar4 = 0;
  }
  if (DVar4 == 0) {
    pbVar1 = (byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    FUN_10010130(DVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}



/**************************************************/

/* Function: __lseek @ 10012d55 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2005 Release */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  DWORD *pDVar1;
  int iVar2;
  long local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10027d20)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1001010a();
          *pDVar1 = 9;
          pDVar1 = FUN_1001011d();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __lseek_nolock(_FileHandle,_Offset,_Origin);
        }
        FUN_10012e27();
        return local_20;
      }
    }
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10012e27 @ 10012e27 */

void FUN_10012e27(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __ftell_nolock @ 10012e31 */

/* Library Function - Single Match
    __ftell_nolock
   
   Library: Visual Studio 2005 Release */

long __cdecl __ftell_nolock(FILE *_File)

{
  uint uVar1;
  char *pcVar2;
  DWORD *pDVar3;
  uint _FileHandle;
  FILE *pFVar4;
  long lVar5;
  char *pcVar6;
  FILE *pFVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  int local_10;
  int local_c;
  
  pFVar7 = _File;
  if (_File == (FILE *)0x0) {
    pDVar3 = FUN_1001010a();
    *pDVar3 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  _FileHandle = __fileno(_File);
  if (_File->_cnt < 0) {
    _File->_cnt = 0;
  }
  local_c = __lseek(_FileHandle,0,1);
  if (local_c < 0) {
    return -1;
  }
  uVar1 = _File->_flag;
  if ((uVar1 & 0x108) == 0) {
    return local_c - _File->_cnt;
  }
  pcVar6 = _File->_ptr;
  pcVar8 = _File->_base;
  local_10 = (int)pcVar6 - (int)pcVar8;
  if ((uVar1 & 3) == 0) {
    if (-1 < (char)uVar1) {
      pDVar3 = FUN_1001010a();
      *pDVar3 = 0x16;
      return -1;
    }
  }
  else {
    pcVar2 = pcVar8;
    if ((*(byte *)((&DAT_10027d40)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x38) & 0x80)
        != 0) {
      for (; pcVar2 < pcVar6; pcVar2 = pcVar2 + 1) {
        if (*pcVar2 == '\n') {
          local_10 = local_10 + 1;
        }
      }
    }
  }
  if (local_c != 0) {
    if ((_File->_flag & 1) != 0) {
      if (_File->_cnt == 0) {
        local_10 = 0;
      }
      else {
        iVar9 = (_FileHandle & 0x1f) * 0x38;
        pFVar4 = (FILE *)(pcVar6 + (_File->_cnt - (int)pcVar8));
        if ((*(byte *)((&DAT_10027d40)[(int)_FileHandle >> 5] + 4 + iVar9) & 0x80) != 0) {
          lVar5 = __lseek(_FileHandle,0,2);
          if (lVar5 == local_c) {
            pcVar6 = _File->_base;
            pcVar8 = pcVar6 + (int)&pFVar4->_ptr;
            _File = pFVar4;
            for (; pcVar6 < pcVar8; pcVar6 = pcVar6 + 1) {
              if (*pcVar6 == '\n') {
                _File = (FILE *)((int)&_File->_ptr + 1);
              }
            }
            bVar10 = (pFVar7->_flag & 0x2000) == 0;
          }
          else {
            lVar5 = __lseek(_FileHandle,local_c,0);
            if (lVar5 < 0) {
              return -1;
            }
            pFVar7 = (FILE *)0x200;
            if ((((FILE *)0x200 < pFVar4) || ((_File->_flag & 8U) == 0)) ||
               ((_File->_flag & 0x400U) != 0)) {
              pFVar7 = (FILE *)_File->_bufsiz;
            }
            bVar10 = (*(byte *)((&DAT_10027d40)[(int)_FileHandle >> 5] + 4 + iVar9) & 4) == 0;
            _File = pFVar7;
          }
          pFVar4 = _File;
          if (!bVar10) {
            pFVar4 = (FILE *)((int)&_File->_ptr + 1);
          }
        }
        _File = pFVar4;
        local_c = local_c - (int)_File;
      }
    }
    return local_10 + local_c;
  }
  return local_10;
}



/**************************************************/

/* Function: __filbuf @ 10012fc9 */

/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  LPWSTR pWVar6;
  LPWSTR pWVar7;
  
  if (_File == (FILE *)0x0) {
    pDVar2 = FUN_1001010a();
    *pDVar2 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    uVar3 = _File->_flag;
    if (((uVar3 & 0x83) != 0) && ((uVar3 & 0x40) == 0)) {
      if ((uVar3 & 2) == 0) {
        _File->_flag = uVar3 | 1;
        if ((uVar3 & 0x10c) == 0) {
          __getbuf(_File);
        }
        else {
          _File->_ptr = _File->_base;
        }
        pWVar7 = (LPWSTR)_File->_bufsiz;
        pWVar6 = (LPWSTR)_File->_base;
        uVar3 = __fileno(_File);
        iVar4 = FUN_100136aa(uVar3,pWVar6,pWVar7);
        _File->_cnt = iVar4;
        if ((iVar4 != 0) && (iVar4 != -1)) {
          if ((_File->_flag & 0x82) == 0) {
            iVar4 = __fileno(_File);
            if ((iVar4 == -1) || (iVar4 = __fileno(_File), iVar4 == -2)) {
              puVar5 = &DAT_10026350;
            }
            else {
              iVar4 = __fileno(_File);
              uVar3 = __fileno(_File);
              puVar5 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_10027d40)[iVar4 >> 5]);
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              _File->_flag = _File->_flag | 0x2000;
            }
          }
          if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
             ((_File->_flag & 0x400U) == 0)) {
            _File->_bufsiz = 0x1000;
          }
          _File->_cnt = _File->_cnt + -1;
          bVar1 = *_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
          return (uint)bVar1;
        }
        _File->_flag = _File->_flag | (-(uint)(iVar4 != 0) & 0x10) + 0x10;
        _File->_cnt = 0;
      }
      else {
        _File->_flag = uVar3 | 0x20;
      }
    }
  }
  return -1;
}



/**************************************************/

/* Function: FUN_100130e9 @ 100130e9 */

int __cdecl FUN_100130e9(uint param_1,LPWSTR param_2,LPWSTR param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  WCHAR WVar4;
  DWORD *pDVar5;
  LPWSTR pWVar6;
  BOOL BVar7;
  DWORD DVar8;
  LPWSTR pWVar9;
  int iVar10;
  LPWSTR pWVar11;
  int iVar12;
  int unaff_EDI;
  bool bVar13;
  longlong lVar14;
  LPWSTR local_1c;
  int local_18;
  LPWSTR local_14;
  LPWSTR local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  pWVar11 = param_3;
  local_18 = -2;
  if (param_1 == 0xfffffffe) {
    pDVar5 = FUN_1001011d();
    *pDVar5 = 0;
    pDVar5 = FUN_1001010a();
    *pDVar5 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_10027d20 <= param_1)) {
    pDVar5 = FUN_1001011d();
    *pDVar5 = 0;
    pDVar5 = FUN_1001010a();
    *pDVar5 = 9;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  iVar12 = (param_1 & 0x1f) * 0x38;
  piVar1 = &DAT_10027d40 + ((int)param_1 >> 5);
  bVar3 = *(byte *)(*piVar1 + iVar12 + 4);
  if ((bVar3 & 1) == 0) {
    pDVar5 = FUN_1001011d();
    *pDVar5 = 0;
    pDVar5 = FUN_1001010a();
    *pDVar5 = 9;
    goto LAB_100131f1;
  }
  if (param_3 < (LPWSTR)0x80000000) {
    local_14 = (LPWSTR)0x0;
    if ((param_3 == (LPWSTR)0x0) || ((bVar3 & 2) != 0)) {
      return 0;
    }
    if (param_2 != (LPWSTR)0x0) {
      local_6 = (char)(*(char *)(*piVar1 + iVar12 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~(uint)param_3 & 1) == 0) goto LAB_100131df;
        pWVar9 = (LPWSTR)((uint)param_3 >> 1);
        param_3 = (LPWSTR)0x4;
        if ((LPWSTR)0x3 < pWVar9) {
          param_3 = pWVar9;
        }
        local_10 = __malloc_crt((size_t)param_3);
        if (local_10 == (LPWSTR)0x0) {
          pDVar5 = FUN_1001010a();
          *pDVar5 = 0xc;
          pDVar5 = FUN_1001011d();
          *pDVar5 = 8;
          return -1;
        }
        lVar14 = __lseeki64_nolock(param_1,0x100000000,unaff_EDI);
        iVar10 = *piVar1;
        *(int *)(iVar12 + 0x28 + iVar10) = (int)lVar14;
        *(int *)(iVar12 + 0x2c + iVar10) = (int)((ulonglong)lVar14 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~(uint)param_3 & 1) == 0) goto LAB_100131df;
          param_3 = (LPWSTR)((uint)param_3 & 0xfffffffe);
        }
        local_10 = param_2;
      }
      pWVar6 = local_10;
      pWVar9 = param_3;
      if ((((*(byte *)(*piVar1 + iVar12 + 4) & 0x48) != 0) &&
          (bVar3 = *(byte *)(*piVar1 + iVar12 + 5), bVar3 != 10)) && (param_3 != (LPWSTR)0x0)) {
        *(byte *)local_10 = bVar3;
        pWVar6 = (LPWSTR)((int)local_10 + 1);
        pWVar9 = (LPWSTR)((int)param_3 + -1);
        local_14 = (LPWSTR)0x1;
        *(undefined1 *)(iVar12 + 5 + *piVar1) = 10;
        if (((local_6 != '\0') && (bVar3 = *(byte *)(iVar12 + 0x25 + *piVar1), bVar3 != 10)) &&
           (pWVar9 != (LPWSTR)0x0)) {
          *(byte *)pWVar6 = bVar3;
          pWVar6 = local_10 + 1;
          pWVar9 = param_3 + -1;
          local_14 = (LPWSTR)0x2;
          *(undefined1 *)(iVar12 + 0x25 + *piVar1) = 10;
          if (((local_6 == '\x01') && (bVar3 = *(byte *)(iVar12 + 0x26 + *piVar1), bVar3 != 10)) &&
             (pWVar9 != (LPWSTR)0x0)) {
            *(byte *)pWVar6 = bVar3;
            pWVar6 = (LPWSTR)((int)local_10 + 3);
            local_14 = (LPWSTR)0x3;
            *(undefined1 *)(iVar12 + 0x26 + *piVar1) = 10;
            pWVar9 = (LPWSTR)((int)param_3 + -3);
          }
        }
      }
      param_3 = pWVar9;
      BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),pWVar6,(DWORD)param_3,(LPDWORD)&local_1c,
                       (LPOVERLAPPED)0x0);
      if (((BVar7 == 0) || ((int)local_1c < 0)) || (param_3 < local_1c)) {
        DVar8 = GetLastError();
        if (DVar8 != 5) {
          if (DVar8 == 0x6d) {
            local_18 = 0;
            goto LAB_100134fe;
          }
          goto LAB_100134f3;
        }
        pDVar5 = FUN_1001010a();
        *pDVar5 = 9;
        pDVar5 = FUN_1001011d();
        *pDVar5 = 5;
      }
      else {
        local_14 = (LPWSTR)((int)local_14 + (int)local_1c);
        pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
        if ((*pbVar2 & 0x80) == 0) goto LAB_100134fe;
        if (local_6 == '\x02') {
          if ((local_1c == (LPWSTR)0x0) || (*local_10 != L'\n')) {
            *pbVar2 = *pbVar2 & 0xfb;
          }
          else {
            *pbVar2 = *pbVar2 | 4;
          }
          local_14 = (LPWSTR)((int)local_14 + (int)local_10);
          param_3 = local_10;
          pWVar11 = local_10;
          if (local_10 < local_14) {
            do {
              WVar4 = *param_3;
              if (WVar4 == L'\x1a') {
                pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
                if ((*pbVar2 & 0x40) == 0) {
                  *pbVar2 = *pbVar2 | 2;
                }
                else {
                  *pWVar11 = *param_3;
                  pWVar11 = pWVar11 + 1;
                }
                break;
              }
              if (WVar4 == L'\r') {
                if (param_3 < local_14 + -1) {
                  if (param_3[1] == L'\n') {
                    pWVar9 = param_3 + 2;
                    goto LAB_100135a1;
                  }
LAB_10013636:
                  param_3 = param_3 + 1;
                  *pWVar11 = L'\r';
                }
                else {
                  pWVar9 = param_3 + 1;
                  BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),&local_c,2,(LPDWORD)&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar7 == 0) && (DVar8 = GetLastError(), DVar8 != 0)) ||
                     (local_1c == (LPWSTR)0x0)) goto LAB_10013636;
                  if ((*(byte *)(iVar12 + 4 + *piVar1) & 0x48) == 0) {
                    if ((pWVar11 == local_10) && (local_c == 10)) goto LAB_100135a1;
                    __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_1001363d;
                    goto LAB_10013636;
                  }
                  if (local_c == 10) {
LAB_100135a1:
                    param_3 = pWVar9;
                    *pWVar11 = L'\n';
                  }
                  else {
                    *pWVar11 = L'\r';
                    *(undefined1 *)(iVar12 + 5 + *piVar1) = (undefined1)local_c;
                    *(undefined1 *)(iVar12 + 0x25 + *piVar1) = local_c._1_1_;
                    *(undefined1 *)(iVar12 + 0x26 + *piVar1) = 10;
                    param_3 = pWVar9;
                  }
                }
                pWVar11 = pWVar11 + 1;
                pWVar9 = param_3;
              }
              else {
                *pWVar11 = WVar4;
                pWVar11 = pWVar11 + 1;
                pWVar9 = param_3 + 1;
              }
LAB_1001363d:
              param_3 = pWVar9;
            } while (param_3 < local_14);
          }
          local_14 = (LPWSTR)((int)pWVar11 - (int)local_10);
          goto LAB_100134fe;
        }
        if ((local_1c == (LPWSTR)0x0) || ((byte)*local_10 != 10)) {
          *pbVar2 = *pbVar2 & 0xfb;
        }
        else {
          *pbVar2 = *pbVar2 | 4;
        }
        local_14 = (LPWSTR)((int)local_14 + (int)local_10);
        param_3 = local_10;
        pWVar9 = local_10;
        if (local_10 < local_14) {
          do {
            bVar3 = (byte)*param_3;
            if (bVar3 == 0x1a) {
              pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
              if ((*pbVar2 & 0x40) == 0) {
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                *(byte *)pWVar9 = (byte)*param_3;
                pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              }
              break;
            }
            if (bVar3 == 0xd) {
              if (param_3 < (LPWSTR)((int)local_14 + -1)) {
                if (*(char *)((int)param_3 + 1) == '\n') {
                  pWVar6 = param_3 + 1;
                  goto LAB_1001337e;
                }
LAB_100133f5:
                param_3 = (LPWSTR)((int)param_3 + 1);
                *(byte *)pWVar9 = 0xd;
              }
              else {
                pWVar6 = (LPWSTR)((int)param_3 + 1);
                BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),&local_5,1,(LPDWORD)&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar7 == 0) && (DVar8 = GetLastError(), DVar8 != 0)) ||
                   (local_1c == (LPWSTR)0x0)) goto LAB_100133f5;
                if ((*(byte *)(iVar12 + 4 + *piVar1) & 0x48) == 0) {
                  if ((pWVar9 == local_10) && (local_5 == '\n')) goto LAB_1001337e;
                  __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_100133f9;
                  goto LAB_100133f5;
                }
                if (local_5 == '\n') {
LAB_1001337e:
                  param_3 = pWVar6;
                  *(byte *)pWVar9 = 10;
                }
                else {
                  *(byte *)pWVar9 = 0xd;
                  *(char *)(iVar12 + 5 + *piVar1) = local_5;
                  param_3 = pWVar6;
                }
              }
              pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              pWVar6 = param_3;
            }
            else {
              *(byte *)pWVar9 = bVar3;
              pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              pWVar6 = (LPWSTR)((int)param_3 + 1);
            }
LAB_100133f9:
            param_3 = pWVar6;
          } while (param_3 < local_14);
        }
        local_14 = (LPWSTR)((int)pWVar9 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (LPWSTR)0x0)) goto LAB_100134fe;
        bVar3 = *(byte *)((int)pWVar9 + -1);
        if ((char)bVar3 < '\0') {
          iVar10 = 1;
          pWVar9 = (LPWSTR)((int)pWVar9 + -1);
          while ((((&DAT_10026250)[bVar3] == '\0' && (iVar10 < 5)) && (local_10 <= pWVar9))) {
            pWVar9 = (LPWSTR)((int)pWVar9 + -1);
            bVar3 = *(byte *)pWVar9;
            iVar10 = iVar10 + 1;
          }
          if ((char)(&DAT_10026250)[(byte)*pWVar9] == 0) {
            pDVar5 = FUN_1001010a();
            *pDVar5 = 0x2a;
            goto LAB_100134fa;
          }
          if ((char)(&DAT_10026250)[(byte)*pWVar9] + 1 == iVar10) {
            pWVar9 = (LPWSTR)((int)pWVar9 + iVar10);
          }
          else if ((*(byte *)(*piVar1 + iVar12 + 4) & 0x48) == 0) {
            __lseeki64_nolock(param_1,CONCAT44(1,-iVar10 >> 0x1f),unaff_EDI);
          }
          else {
            pWVar6 = (LPWSTR)((int)pWVar9 + 1);
            *(byte *)(*piVar1 + iVar12 + 5) = (byte)*pWVar9;
            if (1 < iVar10) {
              *(byte *)(iVar12 + 0x25 + *piVar1) = *(byte *)pWVar6;
              pWVar6 = pWVar9 + 1;
            }
            if (iVar10 == 3) {
              *(byte *)(iVar12 + 0x26 + *piVar1) = (byte)*pWVar6;
              pWVar6 = (LPWSTR)((int)pWVar6 + 1);
            }
            pWVar9 = (LPWSTR)((int)pWVar6 - iVar10);
          }
        }
        iVar10 = (int)pWVar9 - (int)local_10;
        local_14 = (LPWSTR)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_10,iVar10,param_2,
                                               (uint)pWVar11 >> 1);
        if (local_14 != (LPWSTR)0x0) {
          bVar13 = local_14 != (LPWSTR)iVar10;
          local_14 = (LPWSTR)((int)local_14 * 2);
          *(uint *)(iVar12 + 0x30 + *piVar1) = (uint)bVar13;
          goto LAB_100134fe;
        }
        DVar8 = GetLastError();
LAB_100134f3:
        FUN_10010130(DVar8);
      }
LAB_100134fa:
      local_18 = -1;
LAB_100134fe:
      if (local_10 != param_2) {
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_100131df:
  pDVar5 = FUN_1001011d();
  *pDVar5 = 0;
  pDVar5 = FUN_1001010a();
  *pDVar5 = 0x16;
LAB_100131f1:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: FUN_100136aa @ 100136aa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_100136aa(uint param_1,LPWSTR param_2,LPWSTR param_3)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_10027d20)) {
    iVar2 = (param_1 & 0x1f) * 0x38;
    if ((*(byte *)((&DAT_10027d40)[(int)param_1 >> 5] + 4 + iVar2) & 1) != 0) {
      if (param_3 < (LPWSTR)0x80000000) {
        ___lock_fhandle(param_1);
        if ((*(byte *)((&DAT_10027d40)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1001010a();
          *pDVar1 = 9;
          pDVar1 = FUN_1001011d();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = FUN_100130e9(param_1,param_2,param_3);
        }
        FUN_1001379d();
        return local_20;
      }
      pDVar1 = FUN_1001011d();
      *pDVar1 = 0;
      pDVar1 = FUN_1001010a();
      *pDVar1 = 0x16;
      goto LAB_100136f9;
    }
  }
  pDVar1 = FUN_1001011d();
  *pDVar1 = 0;
  pDVar1 = FUN_1001010a();
  *pDVar1 = 9;
LAB_100136f9:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: FUN_1001379d @ 1001379d */

void FUN_1001379d(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: _memcpy_s @ 100137a7 */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  DWORD *pDVar2;
  
  if (_MaxCount == 0) {
LAB_100137b5:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_100137be:
      pDVar2 = FUN_1001010a();
      eVar1 = 0x16;
      *pDVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_100137b5;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_100137be;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      pDVar2 = FUN_1001010a();
      eVar1 = 0x22;
      *pDVar2 = 0x22;
    }
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}



/**************************************************/

/* Function: __wopenfile @ 10013822 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __wopenfile
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __wopenfile(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag,FILE *_File)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t wVar5;
  DWORD *pDVar6;
  int iVar7;
  errno_t eVar8;
  uint _OpenFlag;
  wchar_t *_Str1;
  wchar_t *pwVar9;
  uint uVar10;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  for (pwVar9 = _Mode; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
  }
  wVar5 = *pwVar9;
  if (wVar5 == L'a') {
    _OpenFlag = 0x109;
LAB_1001388f:
    uVar10 = DAT_10027c3c | 2;
  }
  else {
    if (wVar5 != L'r') {
      if (wVar5 != L'w') goto LAB_1001385d;
      _OpenFlag = 0x301;
      goto LAB_1001388f;
    }
    _OpenFlag = 0;
    uVar10 = DAT_10027c3c | 1;
  }
  bVar1 = true;
  pwVar9 = pwVar9 + 1;
  wVar5 = *pwVar9;
  if (wVar5 != L'\0') {
    do {
      if (!bVar1) break;
      if ((ushort)wVar5 < 0x54) {
        if (wVar5 == L'S') {
          if (bVar2) goto LAB_100139bc;
          bVar2 = true;
          _OpenFlag = _OpenFlag | 0x20;
        }
        else if (wVar5 != L' ') {
          if (wVar5 == L'+') {
            if ((_OpenFlag & 2) != 0) goto LAB_100139bc;
            _OpenFlag = _OpenFlag & 0xfffffffe | 2;
            uVar10 = uVar10 & 0xfffffffc | 0x80;
          }
          else if (wVar5 == L',') {
            bVar4 = true;
LAB_100139bc:
            bVar1 = false;
          }
          else if (wVar5 == L'D') {
            if ((_OpenFlag & 0x40) != 0) goto LAB_100139bc;
            _OpenFlag = _OpenFlag | 0x40;
          }
          else if (wVar5 == L'N') {
            _OpenFlag = _OpenFlag | 0x80;
          }
          else {
            if (wVar5 != L'R') goto LAB_1001385d;
            if (bVar2) goto LAB_100139bc;
            bVar2 = true;
            _OpenFlag = _OpenFlag | 0x10;
          }
        }
      }
      else if (wVar5 == L'T') {
        if ((_OpenFlag & 0x1000) != 0) goto LAB_100139bc;
        _OpenFlag = _OpenFlag | 0x1000;
      }
      else if (wVar5 == L'b') {
        if ((_OpenFlag & 0xc000) != 0) goto LAB_100139bc;
        _OpenFlag = _OpenFlag | 0x8000;
      }
      else if (wVar5 == L'c') {
        if (bVar3) goto LAB_100139bc;
        bVar3 = true;
        uVar10 = uVar10 | 0x4000;
      }
      else if (wVar5 == L'n') {
        if (bVar3) goto LAB_100139bc;
        bVar3 = true;
        uVar10 = uVar10 & 0xffffbfff;
      }
      else {
        if (wVar5 != L't') goto LAB_1001385d;
        if ((_OpenFlag & 0xc000) != 0) goto LAB_100139bc;
        _OpenFlag = _OpenFlag | 0x4000;
      }
      pwVar9 = pwVar9 + 1;
      wVar5 = *pwVar9;
    } while (wVar5 != L'\0');
    if (bVar4) {
      for (; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
      }
      iVar7 = _wcsncmp(L"ccs=",pwVar9,4);
      if (iVar7 != 0) goto LAB_1001385d;
      _Str1 = pwVar9 + 4;
      iVar7 = __wcsicmp(_Str1,L"UTF-8");
      if (iVar7 == 0) {
        pwVar9 = pwVar9 + 9;
        _OpenFlag = _OpenFlag | 0x40000;
      }
      else {
        iVar7 = __wcsicmp(_Str1,L"UTF-16LE");
        if (iVar7 == 0) {
          pwVar9 = pwVar9 + 0xc;
          _OpenFlag = _OpenFlag | 0x20000;
        }
        else {
          iVar7 = __wcsicmp(_Str1,L"UNICODE");
          if (iVar7 != 0) goto LAB_1001385d;
          pwVar9 = pwVar9 + 0xb;
          _OpenFlag = _OpenFlag | 0x10000;
        }
      }
    }
  }
  for (; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
  }
  if (*pwVar9 == L'\0') {
    eVar8 = __wsopen_s((int *)&_Mode,_Filename,_OpenFlag,_ShFlag,0x180);
    if (eVar8 != 0) {
      return (FILE *)0x0;
    }
    _DAT_10027a74 = _DAT_10027a74 + 1;
    _File->_flag = uVar10;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = (int)_Mode;
    return _File;
  }
LAB_1001385d:
  pDVar6 = FUN_1001010a();
  *pDVar6 = 0x16;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return (FILE *)0x0;
}



/**************************************************/

/* Function: FUN_10013aae @ 10013aae */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 * FUN_10013aae(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = (undefined4 *)0x0;
  __lock(1);
  iVar5 = 0;
  do {
    puVar7 = puVar6;
    if (DAT_10028e60 <= iVar5) {
LAB_10013ba4:
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[3] = puVar7[3] & 0x8000;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7[7] = 0;
        puVar7[4] = 0xffffffff;
      }
      FUN_10013bd5();
      return puVar7;
    }
    piVar1 = (int *)(DAT_10027e40 + iVar5 * 4);
    if (*piVar1 == 0) {
      iVar5 = iVar5 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar5 + DAT_10027e40) = pvVar4;
      if (*(int *)(DAT_10027e40 + iVar5) != 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_10027e40 + iVar5) + 0x20,4000);
        if (iVar3 == 0) {
          _free(*(void **)(iVar5 + DAT_10027e40));
          *(undefined4 *)(iVar5 + DAT_10027e40) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_10027e40) + 0x20));
          puVar7 = *(undefined4 **)(iVar5 + DAT_10027e40);
        }
      }
      goto LAB_10013ba4;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && (-1 < (short)uVar2)) {
      if ((iVar5 - 3U < 0x11) && (iVar3 = __mtinitlocknum(iVar5 + 0x10), iVar3 == 0))
      goto LAB_10013ba4;
      FUN_10012c55(iVar5,*(int *)(DAT_10027e40 + iVar5 * 4));
      puVar7 = *(undefined4 **)(DAT_10027e40 + iVar5 * 4);
      if ((*(byte *)(puVar7 + 3) & 0x83) == 0) goto LAB_10013ba4;
      FUN_10012cb9(iVar5,(int)puVar7);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/**************************************************/

/* Function: FUN_10013bd5 @ 10013bd5 */

void FUN_10013bd5(void)

{
  FUN_1000ee6d(1);
  return;
}



/**************************************************/

/* Function: __local_unwind4 @ 10013be0 */

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

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
  puStack_24 = &LAB_10013c70;
  pvStack_28 = ExceptionList;
  local_20 = DAT_10025bf4 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_10017974();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_10013cb6 @ 10013cb6 */

void FUN_10013cb6(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 10013cd2 */

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

/* Function: _EH4_TransferToHandler @ 10013ce9 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x10013d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 10013d02 */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10013d17,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 10013d1c */

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

/* Function: __ValidateImageBase @ 10013d40 */

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

/* Function: __FindPESection @ 10013d70 */

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

/* Function: __IsNonwritableInCurrentImage @ 10013dc0 */

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
  local_c = DAT_10025bf4 ^ 0x100222a8;
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

/* Function: __malloc_crt @ 10013e7b */

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
    if (DAT_10027a78 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10027a78 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __calloc_crt @ 10013ebb */

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
    if (DAT_10027a78 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10027a78 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __realloc_crt @ 10013f03 */

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
    if (DAT_10027a78 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10027a78 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/**************************************************/

/* Function: __ioinit @ 10013f4e */

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
  
  uStack_c = 0x10013f5a;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10014185:
    iVar7 = -1;
  }
  else {
    DAT_10027d20 = 0x20;
    DAT_10027d40 = puVar2;
    for (; puVar2 < DAT_10027d40 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_10027d20 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_10027d20, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_10027d40)[iVar7] = puVar2;
        DAT_10027d20 = DAT_10027d20 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_10027d40)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_10027d40)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_10014185;
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
      piVar8 = DAT_10027d40 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_10014185;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_10027d20);
    iVar7 = 0;
  }
  return iVar7;
}



/**************************************************/

/* Function: __ioterm @ 1001418e */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_10027d40;
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
  } while ((int)puVar2 < 0x10027e40);
  return;
}



/**************************************************/

/* Function: __setenvp @ 100141da */

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
  
  if (DAT_10028e70 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_10027258;
  if (DAT_10027258 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_10027258;
    DAT_100273e4 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_10027258);
          DAT_10027258 = (char *)0x0;
          *puVar1 = 0;
          _DAT_10028e64 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_100273e4);
            DAT_100273e4 = (undefined4 *)0x0;
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

/* Function: parse_cmdline @ 100142b5 */

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
        goto LAB_10014347;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_10014347:
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

/* Function: __setargv @ 1001444d */

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
  
  if (DAT_10028e70 == 0) {
    ___initmbctable();
  }
  DAT_10027b84 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10027a80,0x104);
  _DAT_100273f4 = &DAT_10027a80;
  if ((DAT_10028e9c == (char *)0x0) || (local_8 = DAT_10028e9c, *DAT_10028e9c == '\0')) {
    local_8 = &DAT_10027a80;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_100273d8 = local_c - 1;
      _DAT_100273dc = puVar2;
      return 0;
    }
  }
  return -1;
}



/**************************************************/

/* Function: ___crtGetEnvironmentStringsA @ 10014506 */

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
  if (DAT_10027b88 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10027b88 = 1;
      goto LAB_10014558;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10027b88 = 2;
    }
  }
  if (DAT_10027b88 != 1) {
    if ((DAT_10027b88 != 2) && (DAT_10027b88 != 0)) {
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
LAB_10014558:
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

/* Function: __RTC_Initialize @ 1001463b */

/* WARNING: Removing unreachable block (ram,0x1001464d) */
/* WARNING: Removing unreachable block (ram,0x10014653) */
/* WARNING: Removing unreachable block (ram,0x10014655) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/**************************************************/

/* Function: FUN_10014683 @ 10014683 */

void FUN_10014683(void)

{
  return;
}



/**************************************************/

/* Function: FUN_10014684 @ 10014684 */

undefined4 __cdecl FUN_10014684(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_100113cd();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_1002640c * 3);
    if ((piVar1 + DAT_1002640c * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_10026400 < DAT_10026404 + DAT_10026400) {
            iVar8 = DAT_10026400 * 0xc;
            iVar9 = DAT_10026400;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_10026404 + DAT_10026400);
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

/* Function: ___security_init_cookie @ 100147fd */

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
  if ((DAT_10025bf4 == 0xbb40e64e) || ((DAT_10025bf4 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10025bf4 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10025bf4 == 0xbb40e64e) {
      DAT_10025bf4 = 0xbb40e64f;
    }
    else if ((DAT_10025bf4 & 0xffff0000) == 0) {
      DAT_10025bf4 = DAT_10025bf4 | DAT_10025bf4 << 0x10;
    }
  }
  DAT_10025bf8 = ~DAT_10025bf4;
  return;
}



/**************************************************/

/* Function: FUN_10014891 @ 10014891 */

undefined4 FUN_10014891(void)

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

/* Function: setSBCS @ 100148c0 */

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
    *puVar1 = puVar1[(int)&DAT_10026410 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10026410 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: setSBUpLow @ 10014915 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10014a7c:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10014a7c;
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
          goto LAB_10014a23;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_10014a23:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 10014a9f */

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
  if (((p_Var1->_ownlocale & DAT_10026934) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10026838) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10026410)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10026838;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10026838;
      InterlockedIncrement((LONG *)PTR_DAT_10026838);
    }
    FUN_10014b3a();
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

/* Function: FUN_10014b3a @ 10014b3a */

void FUN_10014b3a(void)

{
  FUN_1000ee6d(0xd);
  return;
}



/**************************************************/

/* Function: getSystemCP @ 10014b43 */

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
  DAT_10027b8c = 0;
  if (unaff_ESI == -2) {
    DAT_10027b8c = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10027b8c = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_10027b8c = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_10027b8c = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: FUN_10014bbd @ 10014bbd */

void __cdecl FUN_10014bbd(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_10014bf9:
    if (*(uint *)((int)&DAT_10026840 + uVar5) != uVar4) goto code_r0x10014c05;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10026850 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1002683c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_10014891();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_10026844 + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_10014d2a;
  }
LAB_10014be6:
  setSBCS(unaff_EDI);
LAB_10014d87:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x10014c05:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x10014c12;
  goto LAB_10014bf9;
code_r0x10014c12:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_10014d87;
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
      uVar9 = FUN_10014891();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_10014d2a:
    setSBUpLow(unaff_EDI);
    goto LAB_10014d87;
  }
  if (DAT_10027b8c == 0) goto LAB_10014d87;
  goto LAB_10014be6;
}



/**************************************************/

/* Function: __setmbcp @ 10014d96 */

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
      local_24 = FUN_10014bbd(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10026410)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10026934 & 1) == 0)) {
          __lock(0xd);
          _DAT_10027b9c = ptVar3->mbcodepage;
          _DAT_10027ba0 = ptVar3->ismbcodepage;
          _DAT_10027ba4 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10027b90)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10026630)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10026738)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10026838);
          if ((LVar4 == 0) && (PTR_DAT_10026838 != &DAT_10026410)) {
            _free(PTR_DAT_10026838);
          }
          PTR_DAT_10026838 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_10014ef7();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10026410) {
          _free(ptVar3);
        }
        pDVar5 = FUN_1001010a();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_10014ef7 @ 10014ef7 */

void FUN_10014ef7(void)

{
  FUN_1000ee6d(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 10014f30 */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_10028e70 == 0) {
    __setmbcp(-3);
    DAT_10028e70 = 1;
  }
  return 0;
}



/**************************************************/

/* Function: ___freetlocinfo @ 10014f4e */

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10026b08)) &&
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
  if ((ppuVar2 != &PTR_DAT_10026a48) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10026938) &&
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

/* Function: ___addlocaleref @ 1001508e */

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
    if (((undefined *)pLVar1[-2] != &DAT_10026938) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: ___removelocaleref @ 10015114 */

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
      if (((undefined *)pLVar1[-2] != &DAT_10026938) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: __updatetlocinfoEx_nolock @ 100151a0 */

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
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10026940)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 100151de */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10026934) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_10015248();
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

/* Function: FUN_10015248 @ 10015248 */

void FUN_10015248(void)

{
  FUN_1000ee6d(0xc);
  return;
}



/**************************************************/

/* Function: __towlower_l @ 10015254 */

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

/* Function: __iswctype_l @ 10015301 */

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
    local_8[0] = *(ushort *)(PTR_DAT_10026a44 + (uint)_C * 2) & _Type;
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

/* Function: _iswctype @ 10015383 */

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
    return (uint)(*(ushort *)(PTR_DAT_10026a44 + (uint)_C * 2) & _Type);
  }
  if (DAT_10027ba8 == 0) {
    ___crtGetStringTypeW
              ((localeinfo_struct *)&PTR_DAT_10026a20,1,(wchar_t *)&_C,1,local_8,DAT_10026944,
               DAT_10026954);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __flsbuf @ 100153f1 */

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
    pDVar2 = FUN_1001010a();
    *pDVar2 = 9;
LAB_10015415:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    pDVar2 = FUN_1001010a();
    *pDVar2 = 0x22;
    goto LAB_10015415;
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
     (((ppuVar3 = FUN_10012b42(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_10012b42(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
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
        puVar5 = &DAT_10026350;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x38 + (&DAT_10027d40)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_1001553b;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_1001553b:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/**************************************************/

/* Function: write_char @ 10015551 */

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

/* Function: write_multi_char @ 10015576 */

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

/* Function: __write_nolock @ 10015f06 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_100164b6;
  if (_Buf == (void *)0x0) {
    pDVar6 = FUN_1001011d();
    *pDVar6 = 0;
    pDVar6 = FUN_1001010a();
    *pDVar6 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_100164b6;
  }
  iVar11 = (_FileHandle & 0x1fU) * 0x38;
  piVar16 = &DAT_10027d40 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar16 + iVar11 + 0x24) * '\x02') >> 1;
  local_58c = piVar16;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    pDVar6 = FUN_1001011d();
    *pDVar6 = 0;
    pDVar6 = FUN_1001010a();
    *pDVar6 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_100164b6;
  }
  if ((*(byte *)(*piVar16 + iVar11 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar16) & 0x80) == 0)) {
LAB_100161f1:
    if ((*(byte *)((undefined4 *)(*piVar16 + iVar11) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar16 + iVar11),local_580,_MaxCharCount,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_1001644b:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_10016454:
      piVar16 = local_58c;
      if (local_57c != (char *)0x0) goto LAB_100164b6;
      goto LAB_1001645e;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_10016485;
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
        if (BVar9 == 0) goto LAB_1001644b;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_10016454;
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
          if (BVar9 == 0) goto LAB_1001644b;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_10016454;
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
          if (iVar7 == 0) goto LAB_1001644b;
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
        goto LAB_10016454;
      }
    }
LAB_10016485:
    DVar10 = 0;
    if (((*(byte *)(iVar11 + 4 + *piVar16) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_100164b6;
    pDVar6 = FUN_1001010a();
    *pDVar6 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar16),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_100161f1;
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
          if (BVar9 == 0) goto LAB_1001644b;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)DVar10) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_1001644b;
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
            if (wVar5 != (wchar_t)local_570) goto LAB_1001644b;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_1001644b;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_10016454;
    }
LAB_1001645e:
    if (local_570 == 0) goto LAB_10016485;
    DVar10 = 5;
    if (local_570 != 5) {
      FUN_10010130(local_570);
      goto LAB_100164b6;
    }
    pDVar6 = FUN_1001010a();
    *pDVar6 = 9;
  }
  pDVar6 = FUN_1001011d();
  *pDVar6 = DVar10;
LAB_100164b6:
  iVar11 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar11;
}



/**************************************************/

/* Function: __write @ 100164cc */

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
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10027d20)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1001010a();
          *pDVar1 = 9;
          pDVar1 = FUN_1001011d();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_1001659e();
        return local_20;
      }
    }
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_1001659e @ 1001659e */

void FUN_1001659e(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: _wcsncpy_s @ 100165a8 */

/* Library Function - Single Match
    _wcsncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wcsncpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src,rsize_t _MaxCount)

{
  wchar_t wVar1;
  DWORD *pDVar2;
  wchar_t *pwVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (wchar_t *)0x0) {
      if (_SizeInWords == 0) {
        return 0;
      }
    }
    else {
LAB_100165cc:
      if (_SizeInWords != 0) {
        if (_MaxCount == 0) {
          *_Dst = L'\0';
          return 0;
        }
        if (_Src != (wchar_t *)0x0) {
          pwVar3 = _Dst;
          rVar4 = _SizeInWords;
          if (_MaxCount == 0xffffffff) {
            do {
              wVar1 = *_Src;
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              _Src = _Src + 1;
              if (wVar1 == L'\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              wVar1 = *_Src;
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              _Src = _Src + 1;
              if ((wVar1 == L'\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pwVar3 = L'\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInWords - 1] = L'\0';
            return 0x50;
          }
          *_Dst = L'\0';
          pDVar2 = FUN_1001010a();
          eVar5 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_100165dd;
        }
        *_Dst = L'\0';
      }
    }
  }
  else if (_Dst != (wchar_t *)0x0) goto LAB_100165cc;
  pDVar2 = FUN_1001010a();
  eVar5 = 0x16;
  *pDVar2 = 0x16;
LAB_100165dd:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: strtoxl @ 10016671 */

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
    pDVar3 = FUN_1001010a();
    *pDVar3 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_10016728:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_10016728;
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
      goto LAB_1001678e;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_1001678e;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_1001678e;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_1001678e:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_100167e8:
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
          pDVar3 = FUN_1001010a();
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
    if ((uint)param_4 <= uVar6) goto LAB_100167e8;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_100167e8;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: _strtol @ 1001689c */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10027ba8 == 0) {
    ppuVar2 = &PTR_DAT_10026a20;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: __wchartodigit @ 100168c5 */

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
      if (param_1 < 0x66a) goto LAB_10016903;
      iVar1 = 0x6f0;
      if (param_1 < 0x6f0) {
        return -1;
      }
      if (param_1 < 0x6fa) goto LAB_10016903;
      iVar1 = 0x966;
      if (param_1 < 0x966) {
        return -1;
      }
      if (param_1 < 0x970) goto LAB_10016903;
      iVar1 = 0x9e6;
      if (param_1 < 0x9e6) {
        return -1;
      }
      if (param_1 < 0x9f0) goto LAB_10016903;
      iVar1 = 0xa66;
      if (param_1 < 0xa66) {
        return -1;
      }
      if (param_1 < 0xa70) goto LAB_10016903;
      iVar1 = 0xae6;
      if (param_1 < 0xae6) {
        return -1;
      }
      if (param_1 < 0xaf0) goto LAB_10016903;
      iVar1 = 0xb66;
      if (param_1 < 0xb66) {
        return -1;
      }
      if (param_1 < 0xb70) goto LAB_10016903;
      iVar1 = 0xc66;
      if (param_1 < 0xc66) {
        return -1;
      }
      if (param_1 < 0xc70) goto LAB_10016903;
      iVar1 = 0xce6;
      if (param_1 < 0xce6) {
        return -1;
      }
      if (param_1 < 0xcf0) goto LAB_10016903;
      iVar1 = 0xd66;
      if (param_1 < 0xd66) {
        return -1;
      }
      if (param_1 < 0xd70) goto LAB_10016903;
      iVar1 = 0xe50;
      if (param_1 < 0xe50) {
        return -1;
      }
      if (param_1 < 0xe5a) goto LAB_10016903;
      iVar1 = 0xed0;
      if (param_1 < 0xed0) {
        return -1;
      }
      if (param_1 < 0xeda) goto LAB_10016903;
      iVar1 = 0xf20;
      if (param_1 < 0xf20) {
        return -1;
      }
      if (param_1 < 0xf2a) goto LAB_10016903;
      iVar1 = 0x1040;
      if (param_1 < 0x1040) {
        return -1;
      }
      if (param_1 < 0x104a) goto LAB_10016903;
      iVar1 = 0x17e0;
      if (param_1 < 0x17e0) {
        return -1;
      }
      if (param_1 < 0x17ea) goto LAB_10016903;
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
LAB_10016903:
      return (uint)param_1 - iVar1;
    }
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10016a47 @ 10016a47 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10016a47(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 10016a97 */

/* WARNING: Removing unreachable block (ram,0x10016ad2) */
/* WARNING: Removing unreachable block (ram,0x10016abf) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10016a47(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: FUN_10016b04 @ 10016b04 */

void __cdecl FUN_10016b04(undefined4 param_1)

{
  DAT_10027bcc = param_1;
  return;
}



/**************************************************/

/* Function: ___crtInitCritSecNoSpinCount@8 @ 10016b0e */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 10016b1e */

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
  
  local_8 = &DAT_10022388;
  uStack_c = 0x10016b2a;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_10011228(DAT_10027bcc);
  if (pcVar1 != (FARPROC)0x0) goto LAB_10016b94;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_10016b83:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_10016b83;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_10016b83;
  }
  DAT_10027bcc = FUN_100111b1((int)pcVar1);
LAB_10016b94:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: __initp_misc_winsig @ 10016be3 */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_10027bd0 = param_1;
  DAT_10027bd4 = param_1;
  DAT_10027bd8 = param_1;
  DAT_10027bdc = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 10016bfc */

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
  } while (uVar1 < DAT_1002640c * 0xc + param_1);
  if ((DAT_1002640c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 10016c30 */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_10011228(DAT_10027bd8);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 10016c3d */

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
        puVar6 = &DAT_10027bd0;
        iVar3 = DAT_10027bd0;
        goto LAB_10016cf2;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10016cd0;
        if (_SigNum != 8) goto LAB_10016cb4;
      }
    }
    pDVar7 = FUN_100113cd();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_10027bdc;
      iVar3 = DAT_10027bdc;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_10027bd4;
      iVar3 = DAT_10027bd4;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10016cb4:
        pDVar7 = FUN_1001010a();
        *pDVar7 = 0x16;
        FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10016cd0:
      puVar6 = &DAT_10027bd8;
      iVar3 = DAT_10027bd8;
    }
LAB_10016cf2:
    bVar1 = true;
    pcVar4 = (code *)FUN_10011228(iVar3);
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
      goto LAB_10016d56;
    }
  }
  else {
LAB_10016d56:
    if (_SigNum == 8) {
      for (local_28 = DAT_10026400; local_28 < DAT_10026404 + DAT_10026400; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_10016d90;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_10016d90:
  FUN_10016db1();
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

/* Function: FUN_10016db1 @ 10016db1 */

void FUN_10016db1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1000ee6d(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_10016ded @ 10016ded */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10016ded(undefined4 param_1)

{
  _DAT_10027be4 = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10016df7 @ 10016df7 */

undefined4 __cdecl FUN_10016df7(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_10027be8 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10027be8 = FUN_100111b1((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_10027bec = FUN_100111b1((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10027bf0 = FUN_100111b1((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10027bf8 = FUN_100111b1((int)pFVar1);
      if (DAT_10027bf8 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_10027bf4 = FUN_100111b1((int)pFVar1);
      }
    }
  }
  if ((DAT_10027bf4 != local_c) && (DAT_10027bf8 != local_c)) {
    pcVar3 = (code *)FUN_10011228(DAT_10027bf4);
    pcVar4 = (code *)FUN_10011228(DAT_10027bf8);
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
      goto LAB_10016f8d;
    }
  }
  if ((((DAT_10027bec != local_c) &&
       (pcVar3 = (code *)FUN_10011228(DAT_10027bec), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10027bf0 != local_c &&
      (pcVar3 = (code *)FUN_10011228(DAT_10027bf0), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_10016f8d:
  pcVar3 = (code *)FUN_10011228(DAT_10027be8);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/**************************************************/

/* Function: _strcat_s @ 10016fb4 */

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
        pDVar2 = FUN_1001010a();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_10016fd3;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1001010a();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_10016fd3:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strncpy_s @ 10017025 */

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
LAB_10017049:
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
          pDVar2 = FUN_1001010a();
          eVar5 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_1001705a;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_10017049;
  pDVar2 = FUN_1001010a();
  eVar5 = 0x16;
  *pDVar2 = 0x16;
LAB_1001705a:
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: __set_error_mode @ 100170d8 */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_10027260;
      DAT_10027260 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_10027260;
    }
  }
  pDVar2 = FUN_1001010a();
  *pDVar2 = 0x16;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: FUN_1001711e @ 1001711e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001711e(void)

{
  _DAT_10027d1c = 0;
  return;
}



/**************************************************/

/* Function: _strrchr @ 10017130 */

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

/* Function: __isdigit_l @ 1001715d */

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

/* Function: _isdigit @ 100171ac */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_10027ba8 == 0) {
    return (byte)PTR_DAT_10026a08[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __tolower_l @ 100171d5 */

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
LAB_10017234:
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
      pDVar4 = FUN_1001010a();
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
    if (iVar3 == 0) goto LAB_10017234;
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

/* Function: _tolower @ 100172ec */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_10027ba8 == 0) {
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

/* Function: FID_conflict:__atoflt_l @ 10017313 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1001aa3a((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_1001736a:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_100173aa;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1001739c:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_100173aa;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1001739c;
    goto LAB_1001736a;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_100173aa:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: FID_conflict:__atoflt_l @ 100173b9 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1001aa3a((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10017410:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10017450;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10017442:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10017450;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10017442;
    goto LAB_10017410;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10017450:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: __fptostr @ 1001745f */

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
    pDVar1 = FUN_1001010a();
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
    pDVar1 = FUN_1001010a();
    eVar7 = 0x22;
    *pDVar1 = 0x22;
  }
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}



/**************************************************/

/* Function: ___dtold @ 1001751c */

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
      goto LAB_100175ce;
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
LAB_100175ce:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/**************************************************/

/* Function: __fltout2 @ 100175d7 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_1001b0fa(local_14,uStack_10,uStack_c,0x11,0,&local_30);
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

/* Function: __alldvrm @ 10017670 */

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

/* Function: __aullshr @ 10017750 */

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

/* Function: __controlfp_s @ 10017778 */

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
    pDVar2 = FUN_1001010a();
    eVar3 = 0x16;
    *pDVar2 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}



/**************************************************/

/* Function: __freea @ 100177e2 */

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

/* Function: __EH_prolog3_catch @ 100177fd */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10025bf4 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: _ValidateRead @ 10017833 */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/**************************************************/

/* Function: __global_unwind2 @ 10017840 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10017858,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 100178a5 */

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
  puStack_1c = &LAB_10017860;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_10017974();
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify1 @ 1001794c */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10026a38 = param_1;
  DAT_10026a34 = in_EAX;
  DAT_10026a3c = unaff_EBP;
  return in_EAX;
}



/**************************************************/

/* Function: __NLG_Notify @ 10017955 */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10026a38 = param_1;
  DAT_10026a34 = in_EAX;
  DAT_10026a3c = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_10017974 @ 10017974 */

void FUN_10017974(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: __set_osfhnd @ 10017977 */

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_10027d20)) {
    iVar2 = (param_1 & 0x1fU) * 0x38;
    if (*(int *)(iVar2 + (&DAT_10027d40)[param_1 >> 5]) == -1) {
      if (DAT_10027264 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100179d1;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_100179d1:
      *(intptr_t *)(iVar2 + (&DAT_10027d40)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1001010a();
  *pDVar1 = 9;
  pDVar1 = FUN_1001011d();
  *pDVar1 = 0;
  return -1;
}



/**************************************************/

/* Function: __free_osfhnd @ 100179f4 */

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_10027d20)) {
    iVar3 = (param_1 & 0x1fU) * 0x38;
    piVar1 = (int *)((&DAT_10027d40)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10027264 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10017a52;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10017a52:
      *(undefined4 *)(iVar3 + (&DAT_10027d40)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1001010a();
  *pDVar2 = 9;
  pDVar2 = FUN_1001011d();
  *pDVar2 = 0;
  return -1;
}



/**************************************************/

/* Function: __get_osfhandle @ 10017a75 */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10027d20)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_10027d40)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  pDVar1 = FUN_1001011d();
  *pDVar1 = 0;
  pDVar1 = FUN_1001010a();
  *pDVar1 = 9;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: ___lock_fhandle @ 10017ae6 */

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
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_10027d40)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_10017b7d();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_10027d40)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_10017b7d @ 10017b7d */

void FUN_10017b7d(void)

{
  FUN_1000ee6d(10);
  return;
}



/**************************************************/

/* Function: __unlock_fhandle @ 10017b86 */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10027d40)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  return;
}



/**************************************************/

/* Function: __alloc_osfhnd @ 10017ba8 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __alloc_osfhnd(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_20;
  
  local_20 = -1;
  iVar4 = 0;
  bVar1 = false;
  iVar2 = __mtinitlocknum(0xb);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    __lock(0xb);
    for (; iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = (undefined4 *)(&DAT_10027d40)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x38);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_10027d40)[iVar4] = puVar3;
          DAT_10027d20 = DAT_10027d20 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_10027d40)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_10027d40)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_10027d40)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                bVar1 = true;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            FUN_10017c7b();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_10027d40)[iVar4]) / 0x38 + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_10017d3e();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_10017c7b @ 10017c7b */

void FUN_10017c7b(void)

{
  FUN_1000ee6d(10);
  return;
}



/**************************************************/

/* Function: FUN_10017d3e @ 10017d3e */

void FUN_10017d3e(void)

{
  FUN_1000ee6d(0xb);
  return;
}



/**************************************************/

/* Function: __commit @ 10017d47 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2005 Release */

int __cdecl __commit(int _FileHandle)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10027d20)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)(iVar3 + 4 + (&DAT_10027d40)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar3 + 4 + (&DAT_10027d40)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_10017e09;
          pDVar1 = FUN_1001011d();
          *pDVar1 = local_20;
        }
        pDVar1 = FUN_1001010a();
        *pDVar1 = 9;
        local_20 = 0xffffffff;
LAB_10017e09:
        FUN_10017e1e();
        return local_20;
      }
    }
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10017e1e @ 10017e1e */

void FUN_10017e1e(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __getbuf @ 10017ec7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_10027a74 = _DAT_10027a74 + 1;
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

/* Function: __lseeki64_nolock @ 10017f0b */

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
    pDVar2 = FUN_1001010a();
    *pDVar2 = 9;
LAB_10017f3a:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_10010130(DVar4);
        goto LAB_10017f3a;
      }
    }
    pbVar1 = (byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/**************************************************/

/* Function: __lseeki64 @ 10017f8e */

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
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10027d20)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        pDVar1 = FUN_1001011d();
        *pDVar1 = 0;
        pDVar1 = FUN_1001010a();
        *pDVar1 = 9;
        FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1001010a();
          *pDVar1 = 9;
          pDVar1 = FUN_1001011d();
          *pDVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_1001809d();
      }
      goto LAB_10018097;
    }
    pDVar1 = FUN_1001011d();
    *pDVar1 = 0;
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_10018097:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/**************************************************/

/* Function: FUN_1001809d @ 1001809d */

void FUN_1001809d(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: FUN_100180a7 @ 100180a7 */

DWORD __cdecl
FUN_100180a7(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  HANDLE pvVar7;
  long lVar8;
  int iVar9;
  byte bVar10;
  int unaff_EDI;
  bool bVar11;
  longlong lVar12;
  _SECURITY_ATTRIBUTES local_3c;
  WCHAR local_30 [2];
  int local_2c;
  uint local_28 [2];
  HANDLE local_20;
  uint local_1c;
  DWORD local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar11 = (param_3 & 0x80) == 0;
  local_28[0] = 0;
  local_2c = 0;
  local_6 = 0;
  local_3c.nLength = 0xc;
  local_3c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar11) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_3c.bInheritHandle = (BOOL)bVar11;
  iVar3 = FUN_1001c09c(local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar3 = __get_osplatform(&local_2c);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28[0] != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_c = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_c = 0x40000000;
        goto LAB_10018190;
      }
    }
    else if (uVar4 != 2) goto LAB_1001814c;
    local_c = 0xc0000000;
  }
LAB_10018190:
  if (param_4 == 0x10) {
    local_14 = 0;
  }
  else if (param_4 == 0x20) {
    local_14 = 1;
  }
  else if (param_4 == 0x30) {
    local_14 = 2;
  }
  else if (param_4 == 0x40) {
    local_14 = 3;
  }
  else {
    if (param_4 != 0x80) goto LAB_1001814c;
    local_14 = (uint)(local_c == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_18 = 3;
    }
    else if (uVar4 == 0x100) {
      local_18 = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_1001829a;
      if (uVar4 != 0x300) goto LAB_1001814c;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_1001829a:
        local_18 = 5;
        goto LAB_10018244;
      }
      if (uVar4 != 0x700) {
LAB_1001814c:
        pDVar5 = FUN_1001011d();
        *pDVar5 = 0;
        *in_EAX = 0xffffffff;
        pDVar5 = FUN_1001010a();
        *pDVar5 = 0x16;
        FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_10018244:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_100273c0 & param_5))) {
    local_10 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_10 = local_10 | 0x4000000;
    local_c = local_c | 0x10000;
    if (local_2c == 2) {
      local_14 = local_14 | 4;
    }
  }
  if ((param_3 & 0x1000) != 0) {
    local_10 = local_10 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_10 = local_10 | 0x10000000;
    }
  }
  else {
    local_10 = local_10 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    pDVar5 = FUN_1001011d();
    *pDVar5 = 0;
    *in_EAX = 0xffffffff;
    pDVar5 = FUN_1001010a();
    *pDVar5 = 0x18;
    goto LAB_10018362;
  }
  *param_1 = 1;
  local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_1001836e;
    }
    pbVar1 = (byte *)((&DAT_10027d40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_10010130(DVar6);
    goto LAB_10018362;
  }
LAB_1001836e:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_10027d40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_10010130(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      pDVar5 = FUN_1001010a();
      *pDVar5 = 0xd;
    }
    goto LAB_10018362;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar10 = local_5 | 1;
  *(byte *)((&DAT_10027d40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar10;
  pbVar1 = (byte *)((&DAT_10027d40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar10;
    if (bVar2 == 0) goto LAB_10018579;
    if ((param_3 & 2) == 0) goto LAB_100184a9;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      pDVar5 = FUN_1001011d();
      bVar10 = local_5;
      if (*pDVar5 == 0x83) goto LAB_100184a9;
    }
    else {
      local_30[0] = L'\0';
      local_30[1] = L'\0';
      iVar3 = FUN_100130e9(*in_EAX,local_30,(LPWSTR)0x1);
      if ((((iVar3 != 0) || (local_30[0] != L'\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar10 = local_5, lVar8 != -1)) goto LAB_100184a9;
    }
LAB_1001845b:
    __close_nolock(*in_EAX);
    goto LAB_10018362;
  }
LAB_100184a9:
  local_5 = bVar10;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28[0] & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28[0] & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_10018518;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_10018518:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_10018579;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar12 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar12 == 0) goto LAB_1001877b;
            lVar12 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar12 & (uint)((ulonglong)lVar12 >> 0x20);
            goto LAB_10018711;
          }
LAB_10018570:
          if (local_18 != 5) goto LAB_10018579;
        }
LAB_1001877b:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_10018579;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar9 == -1) {
            __close_nolock(*in_EAX);
            pDVar5 = FUN_1001010a();
            return *pDVar5;
          }
          iVar3 = iVar3 + iVar9;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_10018570;
              lVar12 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar12 != 0) {
                lVar12 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar12 == -1) goto LAB_1001845b;
                goto LAB_1001869a;
              }
            }
            goto LAB_1001877b;
          }
          goto LAB_10018579;
        }
LAB_1001869a:
        iVar3 = FUN_100130e9(*in_EAX,(LPWSTR)&local_1c,(LPWSTR)0x3);
        if (iVar3 == -1) goto LAB_1001845b;
        if (iVar3 == 2) {
LAB_1001871f:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            pDVar5 = FUN_1001010a();
            *pDVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_1001845b;
            local_6 = 2;
            goto LAB_10018579;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_10018579;
          }
          goto LAB_1001871f;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_10018711:
        if (uVar4 == 0xffffffff) goto LAB_1001845b;
      }
    }
  }
LAB_10018579:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_10027d40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_10027d40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_10027d40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar7 = CreateFileW(param_2,uVar4 & 0x7fffffff,local_14,&local_3c,3,local_10,(HANDLE)0x0);
    if (pvVar7 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_10010130(DVar6);
      pbVar1 = (byte *)((&DAT_10027d40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_10018362:
      pDVar5 = FUN_1001010a();
      return *pDVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_10027d40)[(int)*in_EAX >> 5]) = pvVar7;
  }
  return 0;
}



/**************************************************/

/* Function: FID_conflict:__sopen_helper @ 10018801 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  DWORD *pDVar1;
  DWORD DVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10022470;
  uStack_c = 0x1001880d;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    pDVar1 = FUN_1001010a();
    DVar2 = 0x16;
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    DVar2 = FUN_100180a7(local_20,(LPCWSTR)_Filename,_OFlag,_ShFlag,(byte)_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_1001889f();
    if (DVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return DVar2;
}



/**************************************************/

/* Function: FUN_1001889f @ 1001889f */

void FUN_1001889f(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_10027d40)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}



/**************************************************/

/* Function: __wsopen_s @ 100188cd */

/* Library Function - Single Match
    __wsopen_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wsopen_s(int *_FileHandle,wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___sopen_helper
                    ((char *)_Filename,_OpenFlag,_ShareFlag,_PermissionFlag,_FileHandle,1);
  return eVar1;
}



/**************************************************/

/* Function: _wcsncmp @ 100188eb */

/* Library Function - Single Match
    _wcsncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount != 0) {
    for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
        _Str1 = _Str1 + 1) {
      _Str2 = _Str2 + 1;
    }
    return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
  }
  return 0;
}



/**************************************************/

/* Function: __calloc_impl @ 10018920 */

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
        if ((DAT_10028e78 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_10028e84)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_10018a1c();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_100189d1;
          }
        }
        else {
LAB_100189d1:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_100273bc,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_10027720 == 0) {
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
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0xc;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: FUN_10018a1c @ 10018a1c */

void FUN_10018a1c(void)

{
  FUN_1000ee6d(4);
  return;
}



/**************************************************/

/* Function: x_ismbbtype_l @ 10018a3e */

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
    if (uVar1 == 0) goto LAB_10018a80;
  }
  iVar2 = 1;
LAB_10018a80:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead @ 10018a8f */

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

/* Function: __crtLCMapStringA_stat @ 10018aa2 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  if (DAT_10027c40 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_10027c40 = 2;
      }
    }
    else {
      DAT_10027c40 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_10018b11;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_10018b11:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_10027c40 == 2) || (DAT_10027c40 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_10018e32;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_10018e32;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_10018e0f;
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
LAB_10018e0f:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_10018e32;
  }
  if (DAT_10027c40 != 1) goto LAB_10018e32;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10018e32;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_10018bb9:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_10018bb9;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_10018e32;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_10018cc8;
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
LAB_10018cc8:
  __freea(local_10);
LAB_10018e32:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 10018e44 */

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

/* Function: __crtGetStringTypeA_stat @ 10018e87 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10027c44 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10027c44 = 2;
      }
      goto LAB_10018ee0;
    }
    DAT_10027c44 = 1;
  }
  else {
LAB_10018ee0:
    if ((DAT_10027c44 == 2) || (DAT_10027c44 == 0)) {
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
      goto LAB_1001902d;
    }
    if (DAT_10027c44 != 1) goto LAB_1001902d;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1001902d;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_10018f70:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_10018f70;
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
LAB_1001902d:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 1001903f */

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

/* Function: ___free_lc_time @ 1001907f */

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

/* Function: ___free_lconv_num @ 1001920f */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10026b08) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10026b0c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10026b10) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 1001924f */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10026b14) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10026b18) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10026b1c) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10026b20) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10026b24) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10026b28) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10026b2c) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: _strcspn @ 100192e0 */

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

/* Function: _strpbrk @ 10019330 */

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

/* Function: __crtLCMapStringW_stat @ 10019370 */

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
  
  uVar1 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  lpDestStr = (char *)0x0;
  if (DAT_10027c4c == 0) {
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_10027c4c = 2;
      }
    }
    else {
      DAT_10027c4c = 1;
    }
  }
  psVar4 = (short *)param_3;
  pwVar7 = param_4;
  if (0 < (int)param_4) {
    do {
      pwVar7 = (wchar_t *)((int)pwVar7 + -1);
      if (*psVar4 == 0) goto LAB_100193e5;
      psVar4 = psVar4 + 1;
    } while (pwVar7 != (wchar_t *)0x0);
    pwVar7 = (wchar_t *)0xffffffff;
LAB_100193e5:
    param_4 = (wchar_t *)((int)param_4 + (-1 - (int)pwVar7));
  }
  if (DAT_10027c4c == 1) {
    LCMapStringW((LCID)param_1,param_2,(LPCWSTR)param_3,(int)param_4,(LPWSTR)param_5,(int)param_6);
    goto LAB_100195bf;
  }
  if ((DAT_10027c4c != 2) && (DAT_10027c4c != 0)) goto LAB_100195bf;
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
  if (cbMultiByte == 0) goto LAB_100195bf;
  if (((int)cbMultiByte < 1) || (0xffffffe0 / cbMultiByte == 0)) {
    local_c = (LPCSTR)0x0;
  }
  else if (cbMultiByte + 8 < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe0;
    local_c = &stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_100194ae:
      local_c = (LPCSTR)(puVar5 + 2);
    }
  }
  else {
    puVar5 = _malloc(cbMultiByte + 8);
    local_c = (LPCSTR)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_100194ae;
    }
  }
  if (local_c == (LPCSTR)0x0) goto LAB_100195bf;
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
LAB_10019532:
          lpDestStr = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_MaxCount + 8);
        lpDestStr = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_10019532;
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
LAB_100195bf:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: ___crtLCMapStringW @ 100195d1 */

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

/* Function: __crtGetStringTypeW_stat @ 10019611 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_10019823;
  if (DAT_10027c50 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_10027c50 = 2;
      }
      goto LAB_10019678;
    }
    DAT_10027c50 = 1;
  }
  else {
LAB_10019678:
    if (DAT_10027c50 != 1) {
      if ((DAT_10027c50 != 2) && (DAT_10027c50 != 0)) goto LAB_10019823;
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
      if (_Size_00 == 0) goto LAB_10019823;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_10019729:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_10019729;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_10019823;
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
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_10019817;
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
LAB_10019817:
      __freea(local_c);
      goto LAB_10019823;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_10019823:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}



/**************************************************/

/* Function: ___crtGetStringTypeW @ 10019835 */

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

/* Function: __isatty @ 10019873 */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  DWORD *pDVar1;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_10027d20)) {
    return *(byte *)((&DAT_10027d40)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
  }
  pDVar1 = FUN_1001010a();
  *pDVar1 = 9;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}



/**************************************************/

/* Function: __fputwc_nolock @ 100198d1 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  if ((_File->_flag & 0x40) == 0) {
    iVar3 = __fileno(_File);
    if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
      puVar5 = &DAT_10026350;
    }
    else {
      iVar3 = __fileno(_File);
      uVar4 = __fileno(_File);
      puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_10027d40)[iVar3 >> 5]);
    }
    if ((puVar5[0x24] & 0x7f) != 2) {
      iVar3 = __fileno(_File);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
        puVar5 = &DAT_10026350;
      }
      else {
        iVar3 = __fileno(_File);
        uVar4 = __fileno(_File);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_10027d40)[iVar3 >> 5]);
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
        goto LAB_10019aa0;
      }
      iVar3 = __fileno(_File);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
        puVar5 = &DAT_10026350;
      }
      else {
        iVar3 = __fileno(_File);
        uVar4 = __fileno(_File);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_10027d40)[iVar3 >> 5]);
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
        goto LAB_10019aa0;
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
LAB_10019aa0:
  wVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar2;
}



/**************************************************/

/* Function: __mbtowc_l @ 10019ac5 */

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
          if (iVar2 != 0) goto LAB_10019b10;
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
        pDVar3 = FUN_1001010a();
        *pDVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_10019b10:
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

/* Function: _mbtowc @ 10019bd8 */

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

/* Function: __putwch_nolock @ 10019cc4 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  if (DAT_10026b50 != 0) {
    if (DAT_10026c44 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_10026c44 == (HANDLE)0xffffffff) goto LAB_10019d6d;
    BVar2 = WriteConsoleW(DAT_10026c44,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10026b50 = 1;
      goto LAB_10019d6d;
    }
    if ((DAT_10026b50 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_10019d6d;
    DAT_10026b50 = 0;
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
  if (DAT_10026c44 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10026c44,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_10019d6d:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



/**************************************************/

/* Function: __wctomb_s_l @ 10019d86 */

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
LAB_10019da8:
    DVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      pDVar2 = FUN_1001010a();
      *pDVar2 = 0x16;
      FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_10019e38;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_10019e6f:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_10019da8;
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
LAB_10019e38:
          pDVar2 = FUN_1001010a();
          *pDVar2 = 0x22;
          FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
        goto LAB_10019e6f;
      }
    }
    pDVar2 = FUN_1001010a();
    *pDVar2 = 0x2a;
    pDVar2 = FUN_1001010a();
    DVar1 = *pDVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return DVar1;
}



/**************************************************/

/* Function: _wctomb_s @ 10019ee5 */

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

/* Function: __isctype_l @ 10019f00 */

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

/* Function: FID_conflict:__ld12tod @ 10019fb6 */

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
        goto LAB_1001a4b5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10026b5c - 1;
    iVar4 = (int)(DAT_10026b5c + ((int)DAT_10026b5c >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10026b5c & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1001a0e9;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1001a0f0;
LAB_1001a0e9:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1001a0f0:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1001a0fe;
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
LAB_1001a0fe:
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
    if (iVar12 < (int)(DAT_10026b58 - DAT_10026b5c)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10026b58 < iVar12) {
        if (iVar12 < DAT_10026b54) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10026b68;
          iVar2 = (int)(DAT_10026b60 + ((int)DAT_10026b60 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10026b60 & 0x8000001f;
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
          iVar12 = (int)(DAT_10026b60 + ((int)DAT_10026b60 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10026b60 & 0x8000001f;
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
          iVar12 = DAT_10026b68 + DAT_10026b54;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1001a4b5;
      }
      local_14 = DAT_10026b58 - local_14;
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
      iVar2 = DAT_10026b5c - 1;
      iVar12 = (int)(DAT_10026b5c + ((int)DAT_10026b5c >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10026b5c & 0x8000001f;
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
          if (2 < iVar12) goto LAB_1001a2a1;
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
LAB_1001a2a1:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10026b60 + 1;
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
LAB_1001a4b5:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10026b60 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10026b64 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10026b64 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FID_conflict:__ld12tod @ 1001a4f8 */

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
        goto LAB_1001a9f7;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10026b74 - 1;
    iVar4 = (int)(DAT_10026b74 + ((int)DAT_10026b74 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10026b74 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1001a62b;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1001a632;
LAB_1001a62b:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1001a632:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1001a640;
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
LAB_1001a640:
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
    if (iVar12 < (int)(DAT_10026b70 - DAT_10026b74)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10026b70 < iVar12) {
        if (iVar12 < DAT_10026b6c) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10026b80;
          iVar2 = (int)(DAT_10026b78 + ((int)DAT_10026b78 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10026b78 & 0x8000001f;
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
          iVar12 = (int)(DAT_10026b78 + ((int)DAT_10026b78 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_10026b78 & 0x8000001f;
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
          iVar12 = DAT_10026b80 + DAT_10026b6c;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1001a9f7;
      }
      local_14 = DAT_10026b70 - local_14;
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
      iVar2 = DAT_10026b74 - 1;
      iVar12 = (int)(DAT_10026b74 + ((int)DAT_10026b74 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10026b74 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_1001a7e3;
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
LAB_1001a7e3:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_10026b78 + 1;
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
LAB_1001a9f7:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_10026b78 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10026b7c == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10026b7c == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FUN_1001aa3a @ 1001aa3a */

void __cdecl
FUN_1001aa3a(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
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
LAB_1001aabf:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_1001aadc:
        iVar15 = 3;
        goto LAB_1001aade;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_1001aaf3:
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
          if (cVar8 == '0') goto LAB_1001ab0d;
          goto LAB_1001ac98;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_1001aabf;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1001aadc;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1001ab44;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_1001ab74;
      if (cVar8 == '0') goto LAB_1001ab0d;
      goto LAB_1001ab54;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1001aadc;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1001aaf3;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_1001acc3;
LAB_1001ab0d:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_1001aabf;
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
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1001abe7;
LAB_1001ab44:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_1001aabf;
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
LAB_1001abe7:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_1001ab74:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_1001ab54:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_1001ac98;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_1001aabf;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_1001aade;
      }
      goto LAB_1001acc3;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_1001ac7f;
        if (cVar8 == '-') goto LAB_1001ac73;
LAB_1001ac66:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_1001acc3;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_1001aabf;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1001ac66;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1001ac98;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_1001ad25;
    default:
      goto switchD_1001aacb_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_1001ac7f:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_1001acc3;
LAB_1001ac73:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_1001aabf;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_1001aacb_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_1001aabf;
      goto LAB_1001acc3;
    }
    iVar15 = 9;
LAB_1001aade:
    param_3 = pcVar18 + -1;
    goto LAB_1001aabf;
  }
  pDVar10 = FUN_1001010a();
  *pDVar10 = 0x16;
  FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_1001b0bb;
LAB_1001ad25:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_1001ad40;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_1001ad25;
  }
  local_68 = 0x1451;
LAB_1001ad40:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_1001ac98:
  param_3 = pcVar18 + -1;
LAB_1001acc3:
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
    if (local_50 == 0) goto LAB_1001b09d;
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
      if ((int)local_58 < -0x1450) goto LAB_1001b09d;
      puVar20 = &DAT_10026be8;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_10026d48;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x1001adcb:
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
LAB_1001af81:
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
                    if ((short)uVar24 < 1) goto LAB_1001af81;
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
                  if (0x7ffe < uVar24) goto LAB_1001b040;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x1001adcb;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_1001b040:
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
          goto joined_r0x1001adcb;
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
LAB_1001b09d:
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
LAB_1001b0bb:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_1001b0fa @ 1001b0fa */

/* WARNING: Removing unreachable block (ram,0x1001b5eb) */
/* WARNING: Removing unreachable block (ram,0x1001b5f5) */
/* WARNING: Removing unreachable block (ram,0x1001b5fa) */

void __cdecl
FUN_1001b0fa(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

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
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
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
    goto LAB_1001b978;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1001b229;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_1001b229:
          pcVar25 = "1#QNAN";
          goto LAB_1001b22e;
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
LAB_1001b22e:
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
    goto LAB_1001b978;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_10026be8;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_10026d48;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_1001b54f;
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
LAB_1001b473:
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
            if ((short)uVar24 < 1) goto LAB_1001b473;
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
          if (0x7ffe < uVar24) goto LAB_1001b533;
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
LAB_1001b533:
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
LAB_1001b54f:
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
          goto LAB_1001b7b7;
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
LAB_1001b6c5:
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
          if ((short)uVar24 < 1) goto LAB_1001b6c5;
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
        goto LAB_1001b7b7;
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
LAB_1001b7b7:
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
        goto LAB_1001b978;
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
LAB_1001b978:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __hw_cw @ 1001b9c0 */

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

/* Function: ___hw_cw_sse2 @ 1001ba4e */

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

/* Function: __control87 @ 1001baee */

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
  if (DAT_10028e98 != 0) {
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

/* Function: __alloca_probe_16 @ 1001be00 */

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

/* Function: __alloca_probe_8 @ 1001be16 */

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

/* Function: __chsize_nolock @ 1001be2c */

/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID _Buf;
  DWORD *pDVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  uint uVar7;
  int unaff_EDI;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint in_stack_00000008;
  DWORD DVar13;
  SIZE_T dwBytes;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  uVar11 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
  if (uVar11 == 0xffffffffffffffff) goto LAB_1001beb2;
  lVar12 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar4 = (int)((ulonglong)lVar12 >> 0x20);
  if (lVar12 == -1) goto LAB_1001beb2;
  uVar7 = in_stack_00000008 - (uint)lVar12;
  uVar5 = (uint)(in_stack_00000008 < (uint)lVar12);
  iVar1 = (int)_Size - iVar4;
  iVar8 = iVar1 - uVar5;
  if ((iVar8 < 0) ||
     ((iVar8 == 0 || SBORROW4((int)_Size,iVar4) != SBORROW4(iVar1,uVar5) && (uVar7 == 0)))) {
    if ((iVar8 < 1) && (iVar8 < 0)) {
      lVar12 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar12 == -1) goto LAB_1001beb2;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar6 = SetEndOfFile(pvVar2);
      local_14 = (BVar6 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        pDVar3 = FUN_1001010a();
        *pDVar3 = 0xd;
        pDVar3 = FUN_1001011d();
        DVar13 = GetLastError();
        *pDVar3 = DVar13;
        goto LAB_1001bfb0;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar13 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar13,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      pDVar3 = FUN_1001010a();
      *pDVar3 = 0xc;
      goto LAB_1001beb2;
    }
    iVar4 = __setmode_nolock(_FileHandle,0x8000);
    while( true ) {
      uVar5 = uVar7;
      if ((-1 < iVar8) && ((0 < iVar8 || (0xfff < uVar7)))) {
        uVar5 = 0x1000;
      }
      uVar5 = __write_nolock(_FileHandle,_Buf,uVar5);
      if (uVar5 == 0xffffffff) break;
      bVar9 = uVar7 < uVar5;
      uVar7 = uVar7 - uVar5;
      bVar10 = SBORROW4(iVar8,(int)uVar5 >> 0x1f);
      iVar1 = iVar8 - ((int)uVar5 >> 0x1f);
      iVar8 = iVar1 - (uint)bVar9;
      if ((iVar8 < 0) || ((iVar8 == 0 || bVar10 != SBORROW4(iVar1,(uint)bVar9) && (uVar7 == 0))))
      goto LAB_1001bf04;
    }
    pDVar3 = FUN_1001011d();
    if (*pDVar3 == 5) {
      pDVar3 = FUN_1001010a();
      *pDVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_1001bf04:
    __setmode_nolock(_FileHandle,iVar4);
    DVar13 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar13,_Buf);
LAB_1001bfb0:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_1001beb2;
  }
  lVar12 = __lseeki64_nolock(_FileHandle,uVar11 >> 0x20,unaff_EDI);
  if (lVar12 != -1) {
    return 0;
  }
LAB_1001beb2:
  pDVar3 = FUN_1001010a();
  return *pDVar3;
}



/**************************************************/

/* Function: __setmode_nolock @ 1001bfe0 */

/* Library Function - Single Match
    __setmode_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmode_nolock(int _FileHandle,int _Mode)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  
  iVar7 = (_FileHandle & 0x1fU) * 0x38;
  piVar1 = &DAT_10027d40 + (_FileHandle >> 5);
  iVar4 = *piVar1 + iVar7;
  bVar2 = *(byte *)(iVar4 + 4);
  cVar3 = *(char *)(iVar4 + 0x24);
  if (_Mode == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
    *pbVar5 = *pbVar5 & 0x80;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x7f;
  }
  else {
    if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x82 | 2;
    }
    else {
      if (_Mode != 0x40000) goto LAB_1001c07f;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_1001c07f:
  if ((bVar2 & 0x80) == 0) {
    iVar4 = 0x8000;
  }
  else {
    iVar4 = (-(uint)((char)(cVar3 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
  }
  return iVar4;
}



/**************************************************/

/* Function: FUN_1001c09c @ 1001c09c */

undefined4 __cdecl FUN_1001c09c(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    pDVar1 = FUN_1001010a();
    *pDVar1 = 0x16;
    FUN_10010421((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_10027d18;
  return 0;
}



/**************************************************/

/* Function: ___ansicp @ 1001c0d0 */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___convertcp @ 1001c117 */

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
  
  local_8 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1001c2b7;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1001c2b7;
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
LAB_1001c1f7:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_1001c1f7;
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
LAB_1001c2b7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __flswbuf @ 1001c2c9 */

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
    pDVar3 = FUN_1001010a();
    *pDVar3 = 9;
LAB_1001c2ed:
    _File->_flag = _File->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    pDVar3 = FUN_1001010a();
    *pDVar3 = 0x22;
    goto LAB_1001c2ed;
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
     (((ppuVar4 = FUN_10012b42(), _File != (FILE *)(ppuVar4 + 8) &&
       (ppuVar4 = FUN_10012b42(), _File != (FILE *)(ppuVar4 + 0x10))) ||
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
        puVar6 = &DAT_10026350;
      }
      else {
        puVar6 = (undefined *)((_FileHandle & 0x1f) * 0x38 + (&DAT_10027d40)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar6[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_1001c422;
    }
    else {
      local_8 = __write(_FileHandle,_Buf,_MaxCharCount);
    }
    *(short *)_File->_base = (short)_Ch;
  }
  if (local_8 == _MaxCharCount) {
    return _Ch & 0xffff;
  }
LAB_1001c422:
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}



/**************************************************/

/* Function: ___initconout @ 1001c439 */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10026c44 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/**************************************************/

/* Function: ___mtold12 @ 1001c485 */

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
  
  uVar7 = DAT_10025bf4 ^ (uint)&stack0xfffffffc;
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

/* Function: ___set_fpsr_sse2 @ 1001c651 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_10028e98 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_10026f1c == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/**************************************************/

/* Function: ___ascii_strnicmp @ 1001c6d0 */

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
      if (bVar2 != (byte)uVar3) goto LAB_1001c721;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1001c721:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: RtlUnwind @ 1001c80e */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1001c80e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

/* Function: Unwind@1001c820 @ 1001c820 */

void Unwind_1001c820(void)

{
  int unaff_EBP;
  
  CImageAnalysis::~CImageAnalysis(*(CImageAnalysis **)(unaff_EBP + -0x24));
  return;
}



/**************************************************/

/* Function: Unwind@1001c828 @ 1001c828 */

void Unwind_1001c828(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x20));
  return;
}



/**************************************************/

/* Function: Unwind@1001c850 @ 1001c850 */

void Unwind_1001c850(void)

{
  int unaff_EBP;
  
  CImageAnalysis::~CImageAnalysis(*(CImageAnalysis **)(unaff_EBP + -0x24));
  return;
}



/**************************************************/

/* Function: Unwind@1001c858 @ 1001c858 */

void Unwind_1001c858(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x20));
  return;
}



/**************************************************/

/* Function: Unwind@1001c880 @ 1001c880 */

void Unwind_1001c880(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001c88b @ 1001c88b */

void Unwind_1001c88b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001c8c0 @ 1001c8c0 */

void Unwind_1001c8c0(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x138));
  return;
}



/**************************************************/

/* Function: Unwind@1001c900 @ 1001c900 */

void Unwind_1001c900(void)

{
  int unaff_EBP;
  
  FUN_100032f0(unaff_EBP + -0x638);
  return;
}



/**************************************************/

/* Function: Unwind@1001c940 @ 1001c940 */

void Unwind_1001c940(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x65c));
  return;
}



/**************************************************/

/* Function: Unwind@1001c980 @ 1001c980 */

void Unwind_1001c980(void)

{
  int unaff_EBP;
  
  FUN_10002830(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001c9d0 @ 1001c9d0 */

void Unwind_1001c9d0(void)

{
  int unaff_EBP;
  
  FUN_100032f0(unaff_EBP + -0x638);
  return;
}



/**************************************************/

/* Function: Unwind@1001ca10 @ 1001ca10 */

void Unwind_1001ca10(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 0xc));
  return;
}



/**************************************************/

/* Function: Unwind@1001ca40 @ 1001ca40 */

void Unwind_1001ca40(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x18));
  return;
}



/**************************************************/

/* Function: Unwind@1001ca4b @ 1001ca4b */

void Unwind_1001ca4b(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x2c));
  return;
}



/**************************************************/

/* Function: Unwind@1001ca70 @ 1001ca70 */

void Unwind_1001ca70(void)

{
  int unaff_EBP;
  
  IopPaperSize::~IopPaperSize((IopPaperSize *)(unaff_EBP + -0x230));
  return;
}



/**************************************************/

/* Function: Unwind@1001cab0 @ 1001cab0 */

void Unwind_1001cab0(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x44c));
  return;
}



/**************************************************/

/* Function: Unwind@1001cabb @ 1001cabb */

void Unwind_1001cabb(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x434));
  return;
}



/**************************************************/

/* Function: Unwind@1001cb00 @ 1001cb00 */

void Unwind_1001cb00(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x334));
  return;
}



/**************************************************/

/* Function: Unwind@1001cb40 @ 1001cb40 */

void Unwind_1001cb40(void)

{
  int unaff_EBP;
  
  FUN_10002830(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}



/**************************************************/

/* Function: Unwind@1001cb70 @ 1001cb70 */

void Unwind_1001cb70(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x24));
  return;
}



/**************************************************/

/* Function: Unwind@1001cb7b @ 1001cb7b */

void Unwind_1001cb7b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x24));
  return;
}



/**************************************************/

/* Function: Unwind@1001cbc0 @ 1001cbc0 */

void Unwind_1001cbc0(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x3318),0x220,0xc,IopPaperSize::~IopPaperSize);
  return;
}



/**************************************************/

/* Function: Unwind@1001cbd9 @ 1001cbd9 */

void Unwind_1001cbd9(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x1998),0x220,0xc,IopPaperSize::~IopPaperSize);
  return;
}



/**************************************************/

/* Function: Unwind@1001cc20 @ 1001cc20 */

void Unwind_1001cc20(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 0x70));
  return;
}



/**************************************************/

/* Function: Unwind@1001cc50 @ 1001cc50 */

void Unwind_1001cc50(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: Unwind@1001cc5b @ 1001cc5b */

void Unwind_1001cc5b(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x18));
  return;
}



/**************************************************/

/* Function: Unwind@1001cc90 @ 1001cc90 */

void Unwind_1001cc90(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x20));
  return;
}



/**************************************************/

/* Function: Unwind@1001ccc0 @ 1001ccc0 */

void Unwind_1001ccc0(void)

{
  int unaff_EBP;
  
  _free(*(void **)(unaff_EBP + -0x18));
  return;
}



/**************************************************/

/* Function: Unwind@1001ccf0 @ 1001ccf0 */

void Unwind_1001ccf0(void)

{
  int unaff_EBP;
  
  thunk_FUN_1000aa20((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

/* Function: Unwind@1001cd20 @ 1001cd20 */

void Unwind_1001cd20(void)

{
  int unaff_EBP;
  
  thunk_FUN_1000aa20((undefined4 *)(unaff_EBP + -0x21c));
  return;
}



/**************************************************/

/* Function: Unwind@1001cd60 @ 1001cd60 */

void Unwind_1001cd60(void)

{
  int unaff_EBP;
  
  thunk_FUN_1000aa20((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

/* Function: Unwind@1001cd90 @ 1001cd90 */

void Unwind_1001cd90(void)

{
  int unaff_EBP;
  
  thunk_FUN_1000aa20((undefined4 *)(unaff_EBP + -0x218));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce20 @ 1001ce20 */

void Unwind_1001ce20(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x508));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce2b @ 1001ce2b */

void Unwind_1001ce2b(void)

{
  int unaff_EBP;
  
  FUN_1000a6f0((undefined4 *)(unaff_EBP + -0x4f4));
  return;
}



/**************************************************/

/* Function: Unwind@1001ce70 @ 1001ce70 */

void Unwind_1001ce70(void)

{
  int unaff_EBP;
  
  FUN_1000bd70(unaff_EBP + -0x40);
  return;
}



/**************************************************/

/* Function: FUN_1001ceb0 @ 1001ceb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ceb0(void)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 *puVar3;
  IopPaperPixSize local_28 [16];
  double local_18;
  double local_10;
  
  IopPaperPixSize::IopPaperPixSize(local_28,0);
  _DAT_100258b8 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,0);
  ram0x100258d6 = 0;
  _DAT_100258c0 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_100258da = 0;
  _DAT_100258de = 0;
  _DAT_100258e2 = 0;
  _DAT_100258e6 = 0;
  _DAT_100258ea = 0;
  _DAT_100258ee = 0;
  DAT_100258f0 = 1;
  IopPaperPixSize::IopPaperPixSize(local_28,1);
  DAT_100258f8 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,1);
  _DAT_10025908 = u_A4_LETTER_1001ed08[0];
  DAT_10025908_2 = u_A4_LETTER_1001ed08[1];
  DAT_10025900 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_1002590c = u_A4_LETTER_1001ed08[2];
  DAT_1002590c_2 = u_A4_LETTER_1001ed08[3];
  _DAT_10025914 = u_A4_LETTER_1001ed08[6];
  DAT_10025914_2 = u_A4_LETTER_1001ed08[7];
  _DAT_10025918 = u_A4_LETTER_1001ed08[8];
  DAT_10025918_2 = u_A4_LETTER_1001ed08[9];
  _DAT_10025910 = u_A4_LETTER_1001ed08[4];
  DAT_10025910_2 = u_A4_LETTER_1001ed08[5];
  _DAT_1002591c = 0;
  _DAT_10025920 = 0;
  _DAT_10025924 = 0;
  _DAT_10025928 = 0;
  _DAT_1002592c = 0;
  _DAT_10025930 = 2;
  IopPaperPixSize::IopPaperPixSize(local_28,2);
  _DAT_10025938 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,2);
  _DAT_10025948 = u_B5_LETTER_1001ecf4[0];
  DAT_10025948_2 = u_B5_LETTER_1001ecf4[1];
  _DAT_10025940 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_1002594c = u_B5_LETTER_1001ecf4[2];
  DAT_1002594c_2 = u_B5_LETTER_1001ecf4[3];
  _DAT_10025950 = u_B5_LETTER_1001ecf4[4];
  DAT_10025950_2 = u_B5_LETTER_1001ecf4[5];
  _DAT_10025954 = u_B5_LETTER_1001ecf4[6];
  DAT_10025954_2 = u_B5_LETTER_1001ecf4[7];
  _DAT_10025958 = u_B5_LETTER_1001ecf4[8];
  DAT_10025958_2 = u_B5_LETTER_1001ecf4[9];
  _DAT_1002595c = 0;
  _DAT_10025960 = 0;
  _DAT_10025964 = 0;
  _DAT_10025968 = 0;
  _DAT_1002596c = 0;
  _DAT_10025970 = 3;
  IopPaperPixSize::IopPaperPixSize(local_28,3);
  _DAT_10025978 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,3);
  _DAT_10025988 = u_US_LETTER_1001ece0[0];
  DAT_10025988_2 = u_US_LETTER_1001ece0[1];
  _DAT_10025980 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_1002598c = u_US_LETTER_1001ece0[2];
  DAT_1002598c_2 = u_US_LETTER_1001ece0[3];
  _DAT_10025990 = u_US_LETTER_1001ece0[4];
  DAT_10025990_2 = u_US_LETTER_1001ece0[5];
  _DAT_10025994 = u_US_LETTER_1001ece0[6];
  DAT_10025994_2 = u_US_LETTER_1001ece0[7];
  _DAT_10025998 = u_US_LETTER_1001ece0[8];
  DAT_10025998_2 = u_US_LETTER_1001ece0[9];
  _DAT_1002599c = 0;
  _DAT_100259a0 = 0;
  _DAT_100259a4 = 0;
  _DAT_100259a8 = 0;
  _DAT_100259ac = 0;
  _DAT_100259b0 = 4;
  IopPaperPixSize::IopPaperPixSize(local_28,4);
  _DAT_100259b8 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,4);
  _DAT_100259c8 = u_US_LEGAL_1001eccc[0];
  DAT_100259c8_2 = u_US_LEGAL_1001eccc[1];
  _DAT_100259c0 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_100259cc = u_US_LEGAL_1001eccc[2];
  DAT_100259cc_2 = u_US_LEGAL_1001eccc[3];
  _DAT_100259d8 = u_US_LEGAL_1001eccc[8];
  _DAT_100259d4 = u_US_LEGAL_1001eccc[6];
  DAT_100259d4_2 = u_US_LEGAL_1001eccc[7];
  _DAT_100259d0 = u_US_LEGAL_1001eccc[4];
  DAT_100259d0_2 = u_US_LEGAL_1001eccc[5];
  _DAT_100259da = 0;
  _DAT_100259de = 0;
  _DAT_100259e2 = 0;
  _DAT_100259e6 = 0;
  _DAT_100259ea = 0;
  _DAT_100259ee = 0;
  _DAT_100259f0 = 5;
  IopPaperPixSize::IopPaperPixSize(local_28,5);
  _DAT_100259f8 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,5);
  _DAT_10025a0c = DAT_1001ecc8;
  _DAT_10025a00 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_10025a08 = DAT_1001ecc4;
  _DAT_10025a0e = 0;
  _DAT_10025a12 = 0;
  _DAT_10025a16 = 0;
  _DAT_10025a1a = 0;
  _DAT_10025a1e = 0;
  _DAT_10025a22 = 0;
  _DAT_10025a26 = 0;
  _DAT_10025a2a = 0;
  _DAT_10025a2e = 0;
  _DAT_10025a30 = 6;
  IopPaperPixSize::IopPaperPixSize(local_28,6);
  _DAT_10025a38 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,6);
  _DAT_10025a48 = DAT_1001ecbc;
  _DAT_10025a40 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_10025a4c = DAT_1001ecc0;
  _DAT_10025a4e = 0;
  _DAT_10025a52 = 0;
  _DAT_10025a56 = 0;
  _DAT_10025a5a = 0;
  _DAT_10025a5e = 0;
  _DAT_10025a62 = 0;
  _DAT_10025a66 = 0;
  _DAT_10025a6a = 0;
  _DAT_10025a6e = 0;
  _DAT_10025a70 = 7;
  IopPaperPixSize::IopPaperPixSize(local_28,7);
  _DAT_10025a78 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,7);
  _DAT_10025a8c = DAT_1001ecb8;
  _DAT_10025a88 = DAT_1001ecb4;
  _DAT_10025a80 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_10025a8e = 0;
  _DAT_10025a92 = 0;
  _DAT_10025a96 = 0;
  _DAT_10025a9a = 0;
  _DAT_10025a9e = 0;
  _DAT_10025aa2 = 0;
  _DAT_10025aa6 = 0;
  _DAT_10025aaa = 0;
  _DAT_10025aae = 0;
  _DAT_10025ab0 = 0x35;
  IopPaperPixSize::IopPaperPixSize(local_28,0x35);
  _DAT_10025ab8 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,0x35);
  _DAT_10025ac0 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  pwVar2 = L"BUSINESS CARD";
  puVar3 = &DAT_10025ac8;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pwVar2;
    pwVar2 = pwVar2 + 2;
    puVar3 = puVar3 + 1;
  }
  _DAT_10025ae4 = 0;
  _DAT_10025ae8 = 0;
  _DAT_10025aec = 0;
  _DAT_10025af0 = 0x34;
  IopPaperPixSize::IopPaperPixSize(local_28,0x34);
  _DAT_10025af8 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,0x34);
  _DAT_10025b0c = u_STATEMENT_1001ec84[2];
  DAT_10025b0c_2 = u_STATEMENT_1001ec84[3];
  _DAT_10025b00 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  _DAT_10025b08 = u_STATEMENT_1001ec84[0];
  DAT_10025b08_2 = u_STATEMENT_1001ec84[1];
  _DAT_10025b18 = u_STATEMENT_1001ec84[8];
  DAT_10025b18_2 = u_STATEMENT_1001ec84[9];
  _DAT_10025b10 = u_STATEMENT_1001ec84[4];
  DAT_10025b10_2 = u_STATEMENT_1001ec84[5];
  _DAT_10025b14 = u_STATEMENT_1001ec84[6];
  DAT_10025b14_2 = u_STATEMENT_1001ec84[7];
  _DAT_10025b1c = 0;
  _DAT_10025b20 = 0;
  _DAT_10025b24 = 0;
  _DAT_10025b28 = 0;
  _DAT_10025b2c = 0;
  _DAT_10025b30 = 10;
  IopPaperPixSize::IopPaperPixSize(local_28,10);
  _DAT_10025b38 = (local_18 * _DAT_1001e518) / _DAT_1001ed20;
  IopPaperPixSize::IopPaperPixSize(local_28,10);
  _DAT_10025b48 = u_EXECUTIVE_1001ec70[0];
  DAT_10025b48_2 = u_EXECUTIVE_1001ec70[1];
  _DAT_10025b4c = u_EXECUTIVE_1001ec70[2];
  DAT_10025b4c_2 = u_EXECUTIVE_1001ec70[3];
  _DAT_10025b50 = u_EXECUTIVE_1001ec70[4];
  DAT_10025b50_2 = u_EXECUTIVE_1001ec70[5];
  _DAT_10025b54 = u_EXECUTIVE_1001ec70[6];
  DAT_10025b54_2 = u_EXECUTIVE_1001ec70[7];
  _DAT_10025b58 = u_EXECUTIVE_1001ec70[8];
  DAT_10025b58_2 = u_EXECUTIVE_1001ec70[9];
  _DAT_10025b5c = 0;
  _DAT_10025b60 = 0;
  _DAT_10025b64 = 0;
  _DAT_10025b68 = 0;
  _DAT_10025b6c = 0;
  _DAT_10025b40 = (local_10 * _DAT_1001e518) / _DAT_1001ed20;
  return;
}



/**************************************************/

