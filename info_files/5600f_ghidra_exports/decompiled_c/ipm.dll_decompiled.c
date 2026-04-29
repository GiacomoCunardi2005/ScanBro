/* Function: FUN_10001000 @ 10001000 */

int __cdecl FUN_10001000(wchar_t *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_1 != (wchar_t *)0x0) && (iVar1 = lstrlenW(param_1), iVar1 != 0)) {
    do {
      iVar3 = iVar3 + 1;
      pwVar2 = _wcschr(param_1,L',');
      if (pwVar2 == (wchar_t *)0x0) {
        return iVar3;
      }
      param_1 = pwVar2 + 1;
    } while (*param_1 != L'\0');
    return iVar3;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001040 @ 10001040 */

ulong __cdecl FUN_10001040(wchar_t *param_1,uint param_2)

{
  uint uVar1;
  wchar_t *_Str;
  ulong uVar2;
  uint uVar3;
  
  _Str = param_1;
  if (1 < param_2) {
    uVar1 = param_2 - 1;
    uVar3 = 0;
    if (param_2 != 1) {
      do {
        if (_Str == (wchar_t *)0x0) {
          return 0;
        }
        _Str = FUN_1000bc2a(_Str,(short *)&DAT_1001a1e0);
        if (_Str != (wchar_t *)0x0) {
          _Str = _Str + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  if (_Str == (wchar_t *)0x0) {
    return 0;
  }
  uVar2 = _wcstoul(_Str,&param_1,10);
  return uVar2;
}



/**************************************************/

/* Function: FUN_100010a0 @ 100010a0 */

float10 __cdecl FUN_100010a0(wchar_t *param_1,uint param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  uint uVar3;
  float10 fVar4;
  
  pwVar2 = param_1;
  if (1 < param_2) {
    uVar1 = param_2 - 1;
    uVar3 = 0;
    if (param_2 != 1) {
      do {
        if (pwVar2 == (wchar_t *)0x0) goto LAB_100010f8;
        pwVar2 = FUN_1000bc2a(pwVar2,(short *)&DAT_1001a1e0);
        if (pwVar2 != (wchar_t *)0x0) {
          pwVar2 = pwVar2 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  if (pwVar2 != (wchar_t *)0x0) {
    fVar4 = (float10)FUN_1000bd8b(pwVar2,(int *)&param_1);
    return fVar4;
  }
LAB_100010f8:
  return (float10)0.0;
}



/**************************************************/

/* Function: GetParam @ 10001110 */

void __cdecl
GetParam(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
                    /* 0x1110  2  GetParam */
  (*(code *)(&PTR_FUN_1001f008)[param_1])(param_2,param_3,param_4,param_5);
  return;
}



/**************************************************/

/* Function: FUN_10001140 @ 10001140 */

byte __cdecl FUN_10001140(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bfc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001190 @ 10001190 */

undefined4 __cdecl FUN_10001190(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020a18);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_100011d0 @ 100011d0 */

undefined4 __cdecl FUN_100011d0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_100209b0);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10001210 @ 10001210 */

byte __cdecl FUN_10001210(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020870,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001260 @ 10001260 */

byte __cdecl FUN_10001260(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c50,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100012b0 @ 100012b0 */

undefined4 __cdecl FUN_100012b0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020984;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001330 @ 10001330 */

undefined4 __cdecl FUN_10001330(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_100209b8;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100013b0 @ 100013b0 */

undefined4 __cdecl FUN_100013b0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020bcc;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001430 @ 10001430 */

undefined4 __cdecl FUN_10001430(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020be0;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100014b0 @ 100014b0 */

undefined4 __cdecl FUN_100014b0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020a2c;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10001530 @ 10001530 */

undefined4 __cdecl FUN_10001530(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020ba0;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100015b0 @ 100015b0 */

byte __cdecl FUN_100015b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020898,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001600 @ 10001600 */

byte __cdecl FUN_10001600(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c30,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001650 @ 10001650 */

byte __cdecl FUN_10001650(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020aa4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100016a0 @ 100016a0 */

byte __cdecl FUN_100016a0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a34,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100016f0 @ 100016f0 */

byte __cdecl FUN_100016f0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d1c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001740 @ 10001740 */

byte __cdecl FUN_10001740(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b38,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001790 @ 10001790 */

byte __cdecl FUN_10001790(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208d0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100017e0 @ 100017e0 */

byte __cdecl FUN_100017e0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b30,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001830 @ 10001830 */

byte __cdecl FUN_10001830(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c6c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001880 @ 10001880 */

byte __cdecl FUN_10001880(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b04,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100018d0 @ 100018d0 */

byte __cdecl FUN_100018d0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020918,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001920 @ 10001920 */

byte __cdecl FUN_10001920(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c2c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001970 @ 10001970 */

byte __cdecl FUN_10001970(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c48,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100019c0 @ 100019c0 */

byte __cdecl FUN_100019c0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002097c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001a10 @ 10001a10 */

byte __cdecl FUN_10001a10(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c10,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001a60 @ 10001a60 */

byte __cdecl FUN_10001a60(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bc4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001ab0 @ 10001ab0 */

byte __cdecl FUN_10001ab0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bdc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001b10 @ 10001b10 */

byte __cdecl FUN_10001b10(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b94,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001b60 @ 10001b60 */

byte __cdecl FUN_10001b60(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020974,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001bb0 @ 10001bb0 */

byte __cdecl FUN_10001bb0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002091c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001c00 @ 10001c00 */

byte __cdecl FUN_10001c00(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020920,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001c50 @ 10001c50 */

byte __cdecl FUN_10001c50(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a44,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001ca0 @ 10001ca0 */

byte __cdecl FUN_10001ca0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bf8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001cf0 @ 10001cf0 */

byte __cdecl FUN_10001cf0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d20,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001d40 @ 10001d40 */

byte __cdecl FUN_10001d40(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c44,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001d90 @ 10001d90 */

byte __cdecl FUN_10001d90(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209c4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001de0 @ 10001de0 */

byte __cdecl FUN_10001de0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020878,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001e30 @ 10001e30 */

byte __cdecl FUN_10001e30(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020948,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001e80 @ 10001e80 */

byte __cdecl FUN_10001e80(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020adc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001ed0 @ 10001ed0 */

byte __cdecl FUN_10001ed0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ce4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001f20 @ 10001f20 */

byte __cdecl FUN_10001f20(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208dc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001f70 @ 10001f70 */

byte __cdecl FUN_10001f70(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a04,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10001fc0 @ 10001fc0 */

byte __cdecl FUN_10001fc0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d00,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002010 @ 10002010 */

byte __cdecl FUN_10002010(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bec,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002060 @ 10002060 */

byte __cdecl FUN_10002060(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a88,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100020b0 @ 100020b0 */

byte __cdecl FUN_100020b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209c8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002100 @ 10002100 */

byte __cdecl FUN_10002100(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020888,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002150 @ 10002150 */

byte __cdecl FUN_10002150(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a0c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100021a0 @ 100021a0 */

byte __cdecl FUN_100021a0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a40,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100021f0 @ 100021f0 */

byte __cdecl FUN_100021f0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208c8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002240 @ 10002240 */

byte __cdecl FUN_10002240(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d10,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002290 @ 10002290 */

byte __cdecl FUN_10002290(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020914,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100022e0 @ 100022e0 */

byte __cdecl FUN_100022e0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a74,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002330 @ 10002330 */

byte __cdecl FUN_10002330(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cd0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002380 @ 10002380 */

byte __cdecl FUN_10002380(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a60,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100023d0 @ 100023d0 */

byte __cdecl FUN_100023d0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a00,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002420 @ 10002420 */

byte __cdecl FUN_10002420(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002089c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002470 @ 10002470 */

byte __cdecl FUN_10002470(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002099c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100024c0 @ 100024c0 */

byte __cdecl FUN_100024c0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a7c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002510 @ 10002510 */

byte __cdecl FUN_10002510(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209e8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002560 @ 10002560 */

byte __cdecl FUN_10002560(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020aac,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100025b0 @ 100025b0 */

byte __cdecl FUN_100025b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a08,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002600 @ 10002600 */

byte __cdecl FUN_10002600(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002086c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002650 @ 10002650 */

byte __cdecl FUN_10002650(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209d8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100026a0 @ 100026a0 */

byte __cdecl FUN_100026a0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cdc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100026f0 @ 100026f0 */

byte __cdecl FUN_100026f0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020950,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002740 @ 10002740 */

byte __cdecl FUN_10002740(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020944,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002790 @ 10002790 */

byte __cdecl FUN_10002790(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c60,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100027e0 @ 100027e0 */

byte __cdecl FUN_100027e0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208b4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002830 @ 10002830 */

byte __cdecl FUN_10002830(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c24,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002880 @ 10002880 */

byte __cdecl FUN_10002880(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d34,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002980 @ 10002980 */

byte __cdecl FUN_10002980(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002093c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100029d0 @ 100029d0 */

byte __cdecl FUN_100029d0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b0c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002a20 @ 10002a20 */

byte __cdecl FUN_10002a20(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cc0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002a70 @ 10002a70 */

byte __cdecl FUN_10002a70(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209d0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002ac0 @ 10002ac0 */

byte __cdecl FUN_10002ac0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002096c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002b10 @ 10002b10 */

byte __cdecl FUN_10002b10(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020934,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002b60 @ 10002b60 */

byte __cdecl FUN_10002b60(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208f4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002bb0 @ 10002bb0 */

byte __cdecl FUN_10002bb0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b84,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002c00 @ 10002c00 */

byte __cdecl FUN_10002c00(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208e8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002c50 @ 10002c50 */

byte __cdecl FUN_10002c50(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c8c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002ca0 @ 10002ca0 */

undefined4 __cdecl FUN_10002ca0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020c68);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10002ce0 @ 10002ce0 */

undefined4 __cdecl FUN_10002ce0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020b80);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10002d20 @ 10002d20 */

byte __cdecl FUN_10002d20(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020874,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002d70 @ 10002d70 */

undefined4 __cdecl FUN_10002d70(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  uint uVar4;
  ulong local_c [3];
  
  pwVar2 = DAT_10020c14;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_c[uVar4] = uVar3;
    uVar4 = uVar1;
  } while (uVar1 < 3);
  *param_1 = local_c[0];
  param_1[1] = local_c[1];
  param_1[2] = local_c[2];
  return 0;
}



/**************************************************/

/* Function: FUN_10002de0 @ 10002de0 */

undefined4 __cdecl FUN_10002de0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  uint uVar4;
  ulong local_c [3];
  
  pwVar2 = DAT_100208fc;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_c[uVar4] = uVar3;
    uVar4 = uVar1;
  } while (uVar1 < 3);
  *param_1 = local_c[0];
  param_1[1] = local_c[1];
  param_1[2] = local_c[2];
  return 0;
}



/**************************************************/

/* Function: FUN_10002e50 @ 10002e50 */

undefined4 __cdecl FUN_10002e50(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  uint uVar4;
  ulong local_c [3];
  
  pwVar2 = DAT_10020bb0;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_c[uVar4] = uVar3;
    uVar4 = uVar1;
  } while (uVar1 < 3);
  *param_1 = local_c[0];
  param_1[1] = local_c[1];
  param_1[2] = local_c[2];
  return 0;
}



/**************************************************/

/* Function: FUN_10002ec0 @ 10002ec0 */

undefined4 __cdecl FUN_10002ec0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  uint uVar4;
  ulong local_c [3];
  
  pwVar2 = DAT_10020b20;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_c[uVar4] = uVar3;
    uVar4 = uVar1;
  } while (uVar1 < 3);
  *param_1 = local_c[0];
  param_1[1] = local_c[1];
  param_1[2] = local_c[2];
  return 0;
}



/**************************************************/

/* Function: FUN_10002f30 @ 10002f30 */

byte __cdecl FUN_10002f30(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d24,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002f80 @ 10002f80 */

byte __cdecl FUN_10002f80(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bd4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10002fd0 @ 10002fd0 */

byte __cdecl FUN_10002fd0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b18,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003020 @ 10003020 */

byte __cdecl FUN_10003020(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020894,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003070 @ 10003070 */

byte __cdecl FUN_10003070(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020abc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100030c0 @ 100030c0 */

byte __cdecl FUN_100030c0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ca8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003110 @ 10003110 */

byte __cdecl FUN_10003110(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ba8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003160 @ 10003160 */

byte __cdecl FUN_10003160(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208f8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100031b0 @ 100031b0 */

byte __cdecl FUN_100031b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d28,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003200 @ 10003200 */

byte __cdecl FUN_10003200(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b48,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003250 @ 10003250 */

byte __cdecl FUN_10003250(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209e4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100032a0 @ 100032a0 */

byte __cdecl FUN_100032a0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cf8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100032f0 @ 100032f0 */

undefined4 __cdecl FUN_100032f0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_100208c0);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003330 @ 10003330 */

byte __cdecl FUN_10003330(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002098c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003380 @ 10003380 */

byte __cdecl FUN_10003380(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a8c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003560 @ 10003560 */

byte __cdecl FUN_10003560(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c28,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100035b0 @ 100035b0 */

byte __cdecl FUN_100035b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020994,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003600 @ 10003600 */

undefined4 __cdecl FUN_10003600(ulong *param_1,undefined4 param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020a20,1);
  *param_1 = uVar1;
  uVar1 = FUN_10001040(DAT_10020a20,2);
  *param_3 = uVar1;
  uVar1 = FUN_10001040(DAT_10020a20,3);
  *param_4 = uVar1;
  return 0;
}



/**************************************************/

/* Function: FUN_10003650 @ 10003650 */

byte __cdecl FUN_10003650(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cbc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100036a0 @ 100036a0 */

undefined4 __cdecl FUN_100036a0(ulong *param_1,undefined4 param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020c0c,1);
  *param_1 = uVar1;
  uVar1 = FUN_10001040(DAT_10020c0c,2);
  *param_3 = uVar1;
  uVar1 = FUN_10001040(DAT_10020c0c,3);
  *param_4 = uVar1;
  return 0;
}



/**************************************************/

/* Function: FUN_100036f0 @ 100036f0 */

undefined4 __cdecl FUN_100036f0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020af8);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003730 @ 10003730 */

byte __cdecl FUN_10003730(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208bc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003780 @ 10003780 */

undefined4 __cdecl FUN_10003780(ulong *param_1,undefined4 param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020884,1);
  *param_1 = uVar1;
  uVar1 = FUN_10001040(DAT_10020884,2);
  *param_3 = uVar1;
  uVar1 = FUN_10001040(DAT_10020884,3);
  *param_4 = uVar1;
  return 0;
}



/**************************************************/

/* Function: FUN_100037d0 @ 100037d0 */

byte __cdecl FUN_100037d0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cf4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003820 @ 10003820 */

byte __cdecl FUN_10003820(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cf0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003870 @ 10003870 */

byte __cdecl FUN_10003870(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020978,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100038c0 @ 100038c0 */

undefined4 __cdecl FUN_100038c0(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0x11;
  }
  uVar1 = *param_3;
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar4 = 2;
      do {
        uVar2 = FUN_10001040(DAT_10020b58,uVar4 - 1);
        *(ulong *)(param_1 + uVar3 * 8) = uVar2;
        uVar2 = FUN_10001040(DAT_10020b58,uVar4);
        *(ulong *)(param_1 + 4 + uVar3 * 8) = uVar2;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 2;
      } while (uVar3 < uVar1);
    }
    return 0;
  }
  uVar1 = FUN_10001000(DAT_10020b58);
  *param_3 = uVar1 >> 1;
  return 0;
}



/**************************************************/

/* Function: FUN_10003940 @ 10003940 */

undefined4 __cdecl FUN_10003940(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0x11;
  }
  uVar1 = *param_3;
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar4 = 2;
      do {
        uVar2 = FUN_10001040(DAT_10020860,uVar4 - 1);
        *(ulong *)(param_1 + uVar3 * 8) = uVar2;
        uVar2 = FUN_10001040(DAT_10020860,uVar4);
        *(ulong *)(param_1 + 4 + uVar3 * 8) = uVar2;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 2;
      } while (uVar3 < uVar1);
    }
    return 0;
  }
  uVar1 = FUN_10001000(DAT_10020860);
  *param_3 = uVar1 >> 1;
  return 0;
}



/**************************************************/

/* Function: FUN_100039c0 @ 100039c0 */

undefined4 __cdecl FUN_100039c0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020a38);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003a00 @ 10003a00 */

undefined4 __cdecl FUN_10003a00(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020970);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003a40 @ 10003a40 */

undefined4 __cdecl FUN_10003a40(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020c98);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003a80 @ 10003a80 */

undefined4 __cdecl FUN_10003a80(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_100208e4);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003ac0 @ 10003ac0 */

undefined4 __cdecl FUN_10003ac0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_100209f8);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003b00 @ 10003b00 */

undefined4 __cdecl FUN_10003b00(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020a1c);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003b40 @ 10003b40 */

undefined4 __cdecl FUN_10003b40(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020c5c);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003b80 @ 10003b80 */

byte __cdecl FUN_10003b80(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b50,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003bd0 @ 10003bd0 */

undefined4 __cdecl FUN_10003bd0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020b8c);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003c10 @ 10003c10 */

byte __cdecl FUN_10003c10(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209cc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003c60 @ 10003c60 */

byte __cdecl FUN_10003c60(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020864,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003cb0 @ 10003cb0 */

byte __cdecl FUN_10003cb0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c3c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003d00 @ 10003d00 */

byte __cdecl FUN_10003d00(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ab0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003d50 @ 10003d50 */

byte __cdecl FUN_10003d50(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c04,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003da0 @ 10003da0 */

byte __cdecl FUN_10003da0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002087c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003df0 @ 10003df0 */

byte __cdecl FUN_10003df0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c20,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10003e40 @ 10003e40 */

undefined4 __cdecl FUN_10003e40(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  uint uVar4;
  ulong local_18 [6];
  
  pwVar2 = DAT_10020c78;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  local_18[5] = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_18[uVar4] = uVar3;
    uVar4 = uVar1;
  } while (uVar1 < 6);
  *param_1 = local_18[0];
  param_1[1] = local_18[1];
  param_1[2] = local_18[2];
  param_1[3] = local_18[3];
  param_1[4] = local_18[4];
  param_1[5] = local_18[5];
  return 0;
}



/**************************************************/

/* Function: FUN_10003ed0 @ 10003ed0 */

undefined4 __cdecl FUN_10003ed0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020d2c);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003f10 @ 10003f10 */

undefined4 __cdecl FUN_10003f10(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020ab4);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003f50 @ 10003f50 */

undefined4 __cdecl FUN_10003f50(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020c94);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003f90 @ 10003f90 */

undefined4 __cdecl FUN_10003f90(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020b54);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10003fd0 @ 10003fd0 */

undefined4 __cdecl FUN_10003fd0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020c74);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10004010 @ 10004010 */

byte __cdecl FUN_10004010(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020980,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004060 @ 10004060 */

byte __cdecl FUN_10004060(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020acc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100040b0 @ 100040b0 */

undefined4 __cdecl FUN_100040b0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020c08);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_100040f0 @ 100040f0 */

byte __cdecl FUN_100040f0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bb4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004140 @ 10004140 */

undefined4 __cdecl FUN_10004140(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020a68;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100041c0 @ 100041c0 */

undefined4 __cdecl FUN_100041c0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020c84;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004240 @ 10004240 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_10004240(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  float10 fVar6;
  ulong *local_f7c;
  ulong local_f78;
  undefined1 local_f74 [3944];
  uint local_c;
  
  local_c = DAT_1001f4f0 ^ (uint)&local_f7c;
  local_f7c = param_1;
  if (param_1 == (ulong *)0x0) {
    __security_check_cookie(local_c ^ (uint)&local_f7c);
    return;
  }
  local_f78 = 0;
  _memset(local_f74,0,0xf64);
  uVar3 = 1;
  puVar2 = (ulong *)local_f74;
  iVar4 = 0x1d;
  do {
    uVar1 = FUN_10001040(DAT_100209b4,uVar3);
    puVar2[-1] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 1);
    *puVar2 = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 2);
    puVar2[1] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 3);
    puVar2[2] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 4);
    puVar2[3] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 5);
    puVar2[4] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 6);
    puVar2[5] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 7);
    puVar2[6] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 8);
    puVar2[7] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 9);
    puVar2[8] = uVar1;
    uVar1 = FUN_10001040(DAT_100209b4,uVar3 + 10);
    puVar2[9] = uVar1;
    fVar6 = FUN_100010a0(DAT_100209b4,uVar3 + 0xb);
    *(double *)(puVar2 + 0xb) = (double)fVar6;
    fVar6 = FUN_100010a0(DAT_100209b4,uVar3 + 0xc);
    *(double *)(puVar2 + 0xd) = (double)fVar6;
    uVar3 = uVar3 + 0xe;
    puVar2 = puVar2 + 0x22;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = &local_f78;
  puVar5 = local_f7c;
  for (iVar4 = 0x3da; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  __security_check_cookie(local_c ^ (uint)&local_f7c);
  return;
}



/**************************************************/

/* Function: FUN_100043e0 @ 100043e0 */

byte __cdecl FUN_100043e0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b68,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004430 @ 10004430 */

byte __cdecl FUN_10004430(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a28,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004480 @ 10004480 */

byte __cdecl FUN_10004480(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c7c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100044d0 @ 100044d0 */

byte __cdecl FUN_100044d0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bac,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004520 @ 10004520 */

byte __cdecl FUN_10004520(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ae8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004570 @ 10004570 */

byte __cdecl FUN_10004570(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208e0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100045c0 @ 100045c0 */

undefined4 __cdecl FUN_100045c0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020c58;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000465d @ 1000465d */

undefined4 FUN_1000465d(void)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_EDI;
  undefined4 uStack00000004;
  
  uStack00000004 = 0;
  _memset(&stack0x00000008,0,0x128);
  uVar4 = 1;
  puVar2 = (ulong *)&stack0x00000008;
  iVar3 = 0xf;
  do {
    uVar1 = FUN_10001040(DAT_10020c70,uVar4);
    puVar2[-1] = uVar1;
    uVar1 = FUN_10001040(DAT_10020c70,uVar4 + 1);
    *puVar2 = uVar1;
    uVar1 = FUN_10001040(DAT_10020c70,uVar4 + 2);
    puVar2[1] = uVar1;
    uVar1 = FUN_10001040(DAT_10020c70,uVar4 + 3);
    puVar2[2] = uVar1;
    uVar4 = uVar4 + 4;
    puVar2 = puVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  for (iVar3 = 0x4b; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar3 != 0;
      iVar3 = iVar3 + -1) {
    *unaff_EDI = *(undefined4 *)register0x00000010;
    unaff_EDI = unaff_EDI + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004700 @ 10004700 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_10004700(undefined4 *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  ulong uStack_64;
  undefined1 auStack_60 [96];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x11;
  }
  uStack_64 = 0;
  _memset(auStack_60,0,0x60);
  uVar4 = 1;
  puVar2 = (ulong *)auStack_60;
  iVar3 = 5;
  do {
    uVar1 = FUN_10001040(DAT_10020b08,uVar4);
    puVar2[-1] = uVar1;
    uVar1 = FUN_10001040(DAT_10020b08,uVar4 + 1);
    *puVar2 = uVar1;
    uVar1 = FUN_10001040(DAT_10020b08,uVar4 + 2);
    puVar2[1] = uVar1;
    uVar1 = FUN_10001040(DAT_10020b08,uVar4 + 3);
    puVar2[2] = uVar1;
    uVar1 = FUN_10001040(DAT_10020b08,uVar4 + 4);
    puVar2[3] = uVar1;
    uVar4 = uVar4 + 5;
    puVar2 = puVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = &uStack_64;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004714 @ 10004714 */

undefined4 FUN_10004714(void)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_EDI;
  undefined4 uStack00000004;
  
  uStack00000004 = 0;
  _memset(&stack0x00000008,0,0x60);
  uVar4 = 1;
  puVar2 = (ulong *)&stack0x00000008;
  iVar3 = 5;
  do {
    uVar1 = FUN_10001040(DAT_10020b08,uVar4);
    puVar2[-1] = uVar1;
    uVar1 = FUN_10001040(DAT_10020b08,uVar4 + 1);
    *puVar2 = uVar1;
    uVar1 = FUN_10001040(DAT_10020b08,uVar4 + 2);
    puVar2[1] = uVar1;
    uVar1 = FUN_10001040(DAT_10020b08,uVar4 + 3);
    puVar2[2] = uVar1;
    uVar1 = FUN_10001040(DAT_10020b08,uVar4 + 4);
    puVar2[3] = uVar1;
    uVar4 = uVar4 + 5;
    puVar2 = puVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  for (iVar3 = 0x19; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar3 != 0;
      iVar3 = iVar3 + -1) {
    *unaff_EDI = *(undefined4 *)register0x00000010;
    unaff_EDI = unaff_EDI + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100047dd @ 100047dd */

undefined4 FUN_100047dd(void)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_EDI;
  undefined4 uStack00000004;
  
  uStack00000004 = 0;
  _memset(&stack0x00000008,0,0xb0);
  uVar4 = 1;
  puVar2 = (ulong *)&stack0x00000008;
  iVar3 = 9;
  do {
    uVar1 = FUN_10001040(DAT_10020a5c,uVar4);
    puVar2[-1] = uVar1;
    uVar1 = FUN_10001040(DAT_10020a5c,uVar4 + 1);
    *puVar2 = uVar1;
    uVar1 = FUN_10001040(DAT_10020a5c,uVar4 + 2);
    puVar2[1] = uVar1;
    uVar1 = FUN_10001040(DAT_10020a5c,uVar4 + 3);
    puVar2[2] = uVar1;
    uVar4 = uVar4 + 4;
    puVar2 = puVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  for (iVar3 = 0x2d; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar3 != 0;
      iVar3 = iVar3 + -1) {
    *unaff_EDI = *(undefined4 *)register0x00000010;
    unaff_EDI = unaff_EDI + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004880 @ 10004880 */

undefined4 __cdecl FUN_10004880(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_28 [10];
  
  pwVar2 = DAT_10020a6c;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_28[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004900 @ 10004900 */

undefined4 __cdecl FUN_10004900(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_78;
  undefined1 local_74 [116];
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_78 = 0;
  _memset(local_74,0,0x74);
  pwVar2 = DAT_10020930;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    *(ulong *)(local_74 + uVar5 * 4 + -4) = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 0x1e);
  puVar6 = &local_78;
  for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004970 @ 10004970 */

undefined4 __cdecl FUN_10004970(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_78;
  undefined1 local_74 [116];
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_78 = 0;
  _memset(local_74,0,0x74);
  pwVar2 = DAT_10020928;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    *(ulong *)(local_74 + uVar5 * 4 + -4) = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 0x1e);
  puVar6 = &local_78;
  for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100049e0 @ 100049e0 */

undefined4 __cdecl FUN_100049e0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_78;
  undefined1 local_74 [116];
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_78 = 0;
  _memset(local_74,0,0x74);
  pwVar2 = DAT_10020ac8;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    *(ulong *)(local_74 + uVar5 * 4 + -4) = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 0x1e);
  puVar6 = &local_78;
  for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004a50 @ 10004a50 */

undefined4 __cdecl FUN_10004a50(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_78;
  undefined1 local_74 [116];
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_78 = 0;
  _memset(local_74,0,0x74);
  pwVar2 = DAT_10020938;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    *(ulong *)(local_74 + uVar5 * 4 + -4) = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 0x1e);
  puVar6 = &local_78;
  for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10004ac0 @ 10004ac0 */

byte __cdecl FUN_10004ac0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ccc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004b10 @ 10004b10 */

byte __cdecl FUN_10004b10(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b98,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004b60 @ 10004b60 */

byte __cdecl FUN_10004b60(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002094c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004bb0 @ 10004bb0 */

byte __cdecl FUN_10004bb0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ce0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004c00 @ 10004c00 */

byte __cdecl FUN_10004c00(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208a8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004c50 @ 10004c50 */

byte __cdecl FUN_10004c50(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bd8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004ca0 @ 10004ca0 */

byte __cdecl FUN_10004ca0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cd8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004cf0 @ 10004cf0 */

byte __cdecl FUN_10004cf0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020960,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004d40 @ 10004d40 */

byte __cdecl FUN_10004d40(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c90,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004d90 @ 10004d90 */

byte __cdecl FUN_10004d90(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c1c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004de0 @ 10004de0 */

byte __cdecl FUN_10004de0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b00,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004e30 @ 10004e30 */

byte __cdecl FUN_10004e30(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ca4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004e80 @ 10004e80 */

byte __cdecl FUN_10004e80(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b78,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004ed0 @ 10004ed0 */

byte __cdecl FUN_10004ed0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020988,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004f20 @ 10004f20 */

byte __cdecl FUN_10004f20(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020aa8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004f70 @ 10004f70 */

byte __cdecl FUN_10004f70(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020af4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10004fc0 @ 10004fc0 */

byte __cdecl FUN_10004fc0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ab8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005010 @ 10005010 */

byte __cdecl FUN_10005010(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ba4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005060 @ 10005060 */

byte __cdecl FUN_10005060(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c18,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100050b0 @ 100050b0 */

byte __cdecl FUN_100050b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bd0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005100 @ 10005100 */

byte __cdecl FUN_10005100(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a58,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005150 @ 10005150 */

byte __cdecl FUN_10005150(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020968,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100051a0 @ 100051a0 */

byte __cdecl FUN_100051a0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ae0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100051f0 @ 100051f0 */

byte __cdecl FUN_100051f0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209c0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005240 @ 10005240 */

byte __cdecl FUN_10005240(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020990,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005290 @ 10005290 */

byte __cdecl FUN_10005290(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020be4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100052e0 @ 100052e0 */

byte __cdecl FUN_100052e0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bb8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005330 @ 10005330 */

byte __cdecl FUN_10005330(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ce8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005380 @ 10005380 */

byte __cdecl FUN_10005380(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b44,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100053d0 @ 100053d0 */

byte __cdecl FUN_100053d0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bc0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005420 @ 10005420 */

byte __cdecl FUN_10005420(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020954,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005470 @ 10005470 */

byte __cdecl FUN_10005470(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208ac,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100054c0 @ 100054c0 */

byte __cdecl FUN_100054c0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b90,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005510 @ 10005510 */

byte __cdecl FUN_10005510(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002092c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005560 @ 10005560 */

byte __cdecl FUN_10005560(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002088c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100055b0 @ 100055b0 */

byte __cdecl FUN_100055b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a10,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005600 @ 10005600 */

undefined4 __cdecl FUN_10005600(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_100208cc,1);
  uVar2 = FUN_10001040(DAT_100208cc,2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/**************************************************/

/* Function: FUN_10005640 @ 10005640 */

undefined4 __cdecl FUN_10005640(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020ca0,1);
  uVar2 = FUN_10001040(DAT_10020ca0,2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/**************************************************/

/* Function: FUN_10005680 @ 10005680 */

undefined4 __cdecl FUN_10005680(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_100208a4,1);
  uVar2 = FUN_10001040(DAT_100208a4,2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/**************************************************/

/* Function: FUN_100056c0 @ 100056c0 */

undefined4 __cdecl FUN_100056c0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020b64,1);
  uVar2 = FUN_10001040(DAT_10020b64,2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/**************************************************/

/* Function: FUN_10005700 @ 10005700 */

undefined4 __cdecl FUN_10005700(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020b2c,1);
  uVar2 = FUN_10001040(DAT_10020b2c,2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/**************************************************/

/* Function: FUN_10005740 @ 10005740 */

undefined4 __cdecl FUN_10005740(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020a14,1);
  uVar2 = FUN_10001040(DAT_10020a14,2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/**************************************************/

/* Function: FUN_10005780 @ 10005780 */

undefined4 __cdecl FUN_10005780(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020aec,1);
  uVar2 = FUN_10001040(DAT_10020aec,2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/**************************************************/

/* Function: FUN_100057c0 @ 100057c0 */

undefined4 __cdecl FUN_100057c0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020a90,1);
  uVar2 = FUN_10001040(DAT_10020a90,2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/**************************************************/

/* Function: FUN_10005800 @ 10005800 */

undefined4 __cdecl FUN_10005800(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020c00,1);
  uVar2 = FUN_10001040(DAT_10020c00,2);
  uVar3 = FUN_10001040(DAT_10020c00,3);
  uVar4 = FUN_10001040(DAT_10020c00,4);
  uVar5 = FUN_10001040(DAT_10020c00,5);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  return 0;
}



/**************************************************/

/* Function: FUN_10005890 @ 10005890 */

undefined4 __cdecl FUN_10005890(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_100209a8,1);
  uVar2 = FUN_10001040(DAT_100209a8,2);
  uVar3 = FUN_10001040(DAT_100209a8,3);
  uVar4 = FUN_10001040(DAT_100209a8,4);
  uVar5 = FUN_10001040(DAT_100209a8,5);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  return 0;
}



/**************************************************/

/* Function: FUN_10005920 @ 10005920 */

undefined4 __cdecl FUN_10005920(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  uint uVar4;
  ulong local_18 [6];
  
  pwVar2 = DAT_10020904;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  local_18[5] = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_18[uVar4] = uVar3;
    uVar4 = uVar1;
  } while (uVar1 < 6);
  *param_1 = local_18[0];
  param_1[1] = local_18[1];
  param_1[2] = local_18[2];
  param_1[3] = local_18[3];
  param_1[4] = local_18[4];
  param_1[5] = local_18[5];
  return 0;
}



/**************************************************/

/* Function: FUN_100059b0 @ 100059b0 */

undefined4 __cdecl FUN_100059b0(ulong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong local_1c [7];
  
  pwVar2 = DAT_10020b60;
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar3 = FUN_10001040(pwVar2,uVar1);
    local_1c[uVar5] = uVar3;
    uVar5 = uVar1;
  } while (uVar1 < 7);
  puVar6 = local_1c;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10005a20 @ 10005a20 */

undefined4 __cdecl FUN_10005a20(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_100208b8,1);
  uVar2 = FUN_10001040(DAT_100208b8,2);
  uVar3 = FUN_10001040(DAT_100208b8,3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return 0;
}



/**************************************************/

/* Function: FUN_10005a70 @ 10005a70 */

undefined4 __cdecl FUN_10005a70(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == (ulong *)0x0) {
    return 0x11;
  }
  uVar1 = FUN_10001040(DAT_10020d14,1);
  uVar2 = FUN_10001040(DAT_10020d14,2);
  uVar3 = FUN_10001040(DAT_10020d14,3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return 0;
}



/**************************************************/

/* Function: FUN_10005b30 @ 10005b30 */

byte __cdecl FUN_10005b30(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b5c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005b80 @ 10005b80 */

byte __cdecl FUN_10005b80(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_1002090c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005bd0 @ 10005bd0 */

byte __cdecl FUN_10005bd0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b24,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005c20 @ 10005c20 */

byte __cdecl FUN_10005c20(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020868,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005c70 @ 10005c70 */

byte __cdecl FUN_10005c70(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a84,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005cc0 @ 10005cc0 */

byte __cdecl FUN_10005cc0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a78,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005d10 @ 10005d10 */

byte __cdecl FUN_10005d10(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209fc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005d60 @ 10005d60 */

byte __cdecl FUN_10005d60(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208d8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005db0 @ 10005db0 */

byte __cdecl FUN_10005db0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d04,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005e00 @ 10005e00 */

byte __cdecl FUN_10005e00(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a70,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005e50 @ 10005e50 */

byte __cdecl FUN_10005e50(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a30,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005ea0 @ 10005ea0 */

byte __cdecl FUN_10005ea0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c9c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005ef0 @ 10005ef0 */

byte __cdecl FUN_10005ef0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020900,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005f40 @ 10005f40 */

byte __cdecl FUN_10005f40(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208a0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005f90 @ 10005f90 */

byte __cdecl FUN_10005f90(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cc8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10005fe0 @ 10005fe0 */

byte __cdecl FUN_10005fe0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208d4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006030 @ 10006030 */

byte __cdecl FUN_10006030(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b9c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006080 @ 10006080 */

byte __cdecl FUN_10006080(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ac4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100060d0 @ 100060d0 */

byte __cdecl FUN_100060d0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cb4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006120 @ 10006120 */

byte __cdecl FUN_10006120(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a3c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006170 @ 10006170 */

byte __cdecl FUN_10006170(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100208c4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100061c0 @ 100061c0 */

byte __cdecl FUN_100061c0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c34,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006210 @ 10006210 */

byte __cdecl FUN_10006210(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b88,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006260 @ 10006260 */

byte __cdecl FUN_10006260(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a9c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100062b0 @ 100062b0 */

byte __cdecl FUN_100062b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209a0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006300 @ 10006300 */

byte __cdecl FUN_10006300(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020910,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006350 @ 10006350 */

byte __cdecl FUN_10006350(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a24,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100063a0 @ 100063a0 */

byte __cdecl FUN_100063a0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a4c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100063f0 @ 100063f0 */

byte __cdecl FUN_100063f0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a80,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006440 @ 10006440 */

byte __cdecl FUN_10006440(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209d4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006490 @ 10006490 */

byte __cdecl FUN_10006490(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b1c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100064e0 @ 100064e0 */

byte __cdecl FUN_100064e0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cac,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006530 @ 10006530 */

byte __cdecl FUN_10006530(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020958,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006580 @ 10006580 */

byte __cdecl FUN_10006580(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020c80,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100065d0 @ 100065d0 */

byte __cdecl FUN_100065d0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209bc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006620 @ 10006620 */

byte __cdecl FUN_10006620(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020924,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006670 @ 10006670 */

byte __cdecl FUN_10006670(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a54,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100066c0 @ 100066c0 */

byte __cdecl FUN_100066c0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bf0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006710 @ 10006710 */

byte __cdecl FUN_10006710(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b34,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006760 @ 10006760 */

byte __cdecl FUN_10006760(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209ec,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100067b0 @ 100067b0 */

byte __cdecl FUN_100067b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bbc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006800 @ 10006800 */

byte __cdecl FUN_10006800(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ad0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006850 @ 10006850 */

byte __cdecl FUN_10006850(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020890,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100068a0 @ 100068a0 */

byte __cdecl FUN_100068a0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b70,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100068f0 @ 100068f0 */

byte __cdecl FUN_100068f0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ac0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006940 @ 10006940 */

byte __cdecl FUN_10006940(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020af0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006990 @ 10006990 */

byte __cdecl FUN_10006990(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b6c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_100069e0 @ 100069e0 */

byte __cdecl FUN_100069e0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020ae4,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006a30 @ 10006a30 */

byte __cdecl FUN_10006a30(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020be8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006a80 @ 10006a80 */

byte __cdecl FUN_10006a80(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b10,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006ad0 @ 10006ad0 */

byte __cdecl FUN_10006ad0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020cec,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006b20 @ 10006b20 */

byte __cdecl FUN_10006b20(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_100209dc,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006b70 @ 10006b70 */

byte __cdecl FUN_10006b70(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b3c,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006bc0 @ 10006bc0 */

byte __cdecl FUN_10006bc0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020d30,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006c10 @ 10006c10 */

byte __cdecl FUN_10006c10(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020b40,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006c60 @ 10006c60 */

byte __cdecl FUN_10006c60(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020a48,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006cb0 @ 10006cb0 */

byte __cdecl FUN_10006cb0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020aa0,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006d00 @ 10006d00 */

undefined4 __cdecl FUN_10006d00(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020c64);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006d40 @ 10006d40 */

undefined4 __cdecl FUN_10006d40(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_100209a4);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006d80 @ 10006d80 */

undefined4 __cdecl FUN_10006d80(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020880);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006dc0 @ 10006dc0 */

byte __cdecl FUN_10006dc0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    return 0x11;
  }
  uVar2 = _wcstoul(DAT_10020bc8,&param_1,10);
  *(ulong *)pwVar1 = uVar2;
  if (*param_1 != L'\0') {
    pwVar1[0] = L'\xffff';
    pwVar1[1] = L'\xffff';
  }
  return (*(int *)pwVar1 != -1) - 1U & 0x11;
}



/**************************************************/

/* Function: FUN_10006e10 @ 10006e10 */

undefined4 __cdecl FUN_10006e10(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020b14);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006e50 @ 10006e50 */

undefined4 __cdecl FUN_10006e50(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020b7c);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006e90 @ 10006e90 */

undefined4 __cdecl FUN_10006e90(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020cb8);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006ed0 @ 10006ed0 */

undefined4 __cdecl FUN_10006ed0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020964);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006f10 @ 10006f10 */

undefined4 __cdecl FUN_10006f10(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_100209ac);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006f50 @ 10006f50 */

undefined4 __cdecl FUN_10006f50(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020a98);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006f90 @ 10006f90 */

undefined4 __cdecl FUN_10006f90(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_100209f4);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10006fd0 @ 10006fd0 */

undefined4 __cdecl FUN_10006fd0(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020908);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10007010 @ 10007010 */

undefined4 __cdecl FUN_10007010(wchar_t *param_1,uint param_2)

{
  errno_t eVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    eVar1 = _wcscpy_s(param_1,param_2 >> 1,DAT_10020d08);
    if ((eVar1 == 0) && ((wchar_t *)PTR_u___COULD_NOT_COPY___1001f004 != param_1)) {
      return 0;
    }
  }
  return 0x11;
}



/**************************************************/

/* Function: FUN_10007050 @ 10007050 */

void FUN_10007050(void)

{
  _free(DAT_10020bfc);
  _free(DAT_10020a18);
  _free(DAT_100209b0);
  _free(DAT_10020870);
  _free(DAT_10020c50);
  _free(DAT_10020984);
  _free(DAT_100209b8);
  _free(DAT_10020bcc);
  _free(DAT_10020be0);
  _free(DAT_10020a2c);
  _free(DAT_10020ba0);
  _free(DAT_100208ec);
  _free(DAT_10020afc);
  _free(DAT_10020a94);
  _free(DAT_10020ad8);
  _free(DAT_10020c4c);
  _free(DAT_10020ad4);
  _free(DAT_10020898);
  _free(DAT_10020c30);
  _free(DAT_10020aa4);
  _free(DAT_10020a34);
  _free(DAT_10020d1c);
  _free(DAT_10020b38);
  _free(DAT_100208d0);
  _free(DAT_10020b30);
  _free(DAT_10020c6c);
  _free(DAT_10020b04);
  _free(DAT_10020918);
  _free(DAT_10020c2c);
  _free(DAT_10020c48);
  _free(DAT_1002097c);
  _free(DAT_10020c10);
  _free(DAT_10020bc4);
  _free(DAT_10020bdc);
  _free(DAT_10020d18);
  _free(DAT_10020cb0);
  _free(DAT_100208b0);
  _free(DAT_10020b94);
  _free(DAT_10020974);
  _free(DAT_1002091c);
  _free(DAT_10020998);
  _free(DAT_10020920);
  _free(DAT_10020a44);
  _free(DAT_10020bf8);
  _free(DAT_10020d20);
  _free(DAT_10020c38);
  _free(DAT_10020c54);
  _free(DAT_10020c44);
  _free(DAT_100209c4);
  _free(DAT_10020c40);
  _free(DAT_10020b74);
  _free(DAT_10020a50);
  _free(DAT_10020bf4);
  _free(DAT_10020878);
  _free(DAT_10020948);
  _free(DAT_10020adc);
  _free(DAT_10020ce4);
  _free(DAT_100208dc);
  _free(DAT_10020a04);
  _free(DAT_10020d00);
  _free(DAT_10020bec);
  _free(DAT_10020a88);
  _free(DAT_100209c8);
  _free(DAT_10020888);
  _free(DAT_10020a0c);
  _free(DAT_10020a40);
  _free(DAT_100208c8);
  _free(DAT_10020d10);
  _free(DAT_10020914);
  _free(DAT_10020a74);
  _free(DAT_10020cd0);
  _free(DAT_10020a60);
  _free(DAT_10020a00);
  _free(DAT_1002089c);
  _free(DAT_1002099c);
  _free(DAT_10020a7c);
  _free(DAT_100209e8);
  _free(DAT_10020aac);
  _free(DAT_10020a08);
  _free(DAT_1002086c);
  _free(DAT_100209d8);
  _free(DAT_10020cdc);
  _free(DAT_10020950);
  _free(DAT_10020944);
  _free(DAT_10020c60);
  _free(DAT_100208b4);
  _free(DAT_10020c24);
  _free(DAT_10020d34);
  _free(DAT_10020cc4);
  _free(DAT_10020b4c);
  _free(DAT_10020a64);
  _free(DAT_1002095c);
  _free(DAT_10020b28);
  _free(DAT_10020c88);
  _free(DAT_10020940);
  _free(DAT_100209e0);
  _free(DAT_100209f0);
  _free(DAT_1002093c);
  _free(DAT_10020b0c);
  _free(DAT_10020cc0);
  _free(DAT_100209d0);
  _free(DAT_1002096c);
  _free(DAT_10020934);
  _free(DAT_100208f4);
  _free(DAT_10020b84);
  _free(DAT_100208e8);
  _free(DAT_10020c8c);
  _free(DAT_10020c68);
  _free(DAT_10020b80);
  _free(DAT_10020874);
  _free(DAT_10020c14);
  _free(DAT_100208fc);
  _free(DAT_10020bb0);
  _free(DAT_10020b20);
  _free(DAT_10020d24);
  _free(DAT_10020bd4);
  _free(DAT_10020b18);
  _free(DAT_10020894);
  _free(DAT_10020abc);
  _free(DAT_10020ca8);
  _free(DAT_10020ba8);
  _free(DAT_100208f8);
  _free(DAT_10020d28);
  _free(DAT_10020b48);
  _free(DAT_100209e4);
  _free(DAT_10020cf8);
  _free(DAT_100208c0);
  _free(DAT_1002098c);
  _free(DAT_10020a8c);
  _free(DAT_10020cd4);
  _free(DAT_10020cfc);
  _free(DAT_10020d0c);
  _free(DAT_10020c28);
  _free(DAT_10020994);
  _free(DAT_10020a20);
  _free(DAT_10020cbc);
  _free(DAT_10020c0c);
  _free(DAT_10020af8);
  _free(DAT_100208bc);
  _free(DAT_10020884);
  _free(DAT_10020cf4);
  _free(DAT_10020cf0);
  _free(DAT_10020978);
  _free(DAT_10020b58);
  _free(DAT_10020860);
  _free(DAT_10020a38);
  _free(DAT_10020970);
  _free(DAT_10020c98);
  _free(DAT_100208e4);
  _free(DAT_100209f8);
  _free(DAT_10020a1c);
  _free(DAT_10020c5c);
  _free(DAT_10020b50);
  _free(DAT_10020b8c);
  _free(DAT_100209cc);
  _free(DAT_10020864);
  _free(DAT_10020c3c);
  _free(DAT_10020ab0);
  _free(DAT_10020c04);
  _free(DAT_1002087c);
  _free(DAT_10020c20);
  _free(DAT_10020c78);
  _free(DAT_10020d2c);
  _free(DAT_10020ab4);
  _free(DAT_10020c94);
  _free(DAT_10020b54);
  _free(DAT_10020c74);
  _free(DAT_10020980);
  _free(DAT_10020acc);
  _free(DAT_10020c08);
  _free(DAT_10020bb4);
  _free(DAT_10020a68);
  _free(DAT_10020c84);
  _free(DAT_100209b4);
  _free(DAT_10020b68);
  _free(DAT_10020a28);
  _free(DAT_10020c7c);
  _free(DAT_10020bac);
  _free(DAT_10020ae8);
  _free(DAT_100208e0);
  _free(DAT_10020c58);
  _free(DAT_10020c70);
  _free(DAT_10020b08);
  _free(DAT_10020a5c);
  _free(DAT_10020a6c);
  _free(DAT_10020930);
  _free(DAT_10020928);
  _free(DAT_10020ac8);
  _free(DAT_10020938);
  _free(DAT_10020ccc);
  _free(DAT_10020b98);
  _free(DAT_1002094c);
  _free(DAT_10020ce0);
  _free(DAT_100208a8);
  _free(DAT_10020bd8);
  _free(DAT_10020cd8);
  _free(DAT_10020960);
  _free(DAT_10020c90);
  _free(DAT_10020c1c);
  _free(DAT_10020b00);
  _free(DAT_10020ca4);
  _free(DAT_10020b78);
  _free(DAT_10020988);
  _free(DAT_10020aa8);
  _free(DAT_10020af4);
  _free(DAT_10020ab8);
  _free(DAT_10020ba4);
  _free(DAT_10020c18);
  _free(DAT_10020bd0);
  _free(DAT_10020a58);
  _free(DAT_10020968);
  _free(DAT_10020ae0);
  _free(DAT_100209c0);
  _free(DAT_10020990);
  _free(DAT_10020be4);
  _free(DAT_10020bb8);
  _free(DAT_10020ce8);
  _free(DAT_10020b44);
  _free(DAT_10020bc0);
  _free(DAT_10020954);
  _free(DAT_100208ac);
  _free(DAT_10020b90);
  _free(DAT_1002092c);
  _free(DAT_1002088c);
  _free(DAT_10020a10);
  _free(DAT_100208cc);
  _free(DAT_10020ca0);
  _free(DAT_100208a4);
  _free(DAT_10020b64);
  _free(DAT_10020b2c);
  _free(DAT_10020a14);
  _free(DAT_10020aec);
  _free(DAT_10020a90);
  _free(DAT_10020c00);
  _free(DAT_100209a8);
  _free(DAT_10020904);
  _free(DAT_10020b60);
  _free(DAT_100208b8);
  _free(DAT_10020d14);
  _free(DAT_100208f0);
  _free(DAT_10020b5c);
  _free(DAT_1002090c);
  _free(DAT_10020b24);
  _free(DAT_10020868);
  _free(DAT_10020a84);
  _free(DAT_10020a78);
  _free(DAT_100209fc);
  _free(DAT_100208d8);
  _free(DAT_10020d04);
  _free(DAT_10020a70);
  _free(DAT_10020a30);
  _free(DAT_10020c9c);
  _free(DAT_10020900);
  _free(DAT_100208a0);
  _free(DAT_10020cc8);
  _free(DAT_100208d4);
  _free(DAT_10020b9c);
  _free(DAT_10020ac4);
  _free(DAT_10020cb4);
  _free(DAT_10020a3c);
  _free(DAT_100208c4);
  _free(DAT_10020c34);
  _free(DAT_10020b88);
  _free(DAT_10020a9c);
  _free(DAT_100209a0);
  _free(DAT_10020910);
  _free(DAT_10020a24);
  _free(DAT_10020a4c);
  _free(DAT_10020a80);
  _free(DAT_100209d4);
  _free(DAT_10020b1c);
  _free(DAT_10020cac);
  _free(DAT_10020958);
  _free(DAT_10020c80);
  _free(DAT_100209bc);
  _free(DAT_10020924);
  _free(DAT_10020a54);
  _free(DAT_10020bf0);
  _free(DAT_10020b34);
  _free(DAT_100209ec);
  _free(DAT_10020bbc);
  _free(DAT_10020ad0);
  _free(DAT_10020890);
  _free(DAT_10020b70);
  _free(DAT_10020ac0);
  _free(DAT_10020af0);
  _free(DAT_10020b6c);
  _free(DAT_10020ae4);
  _free(DAT_10020be8);
  _free(DAT_10020b10);
  _free(DAT_10020cec);
  _free(DAT_100209dc);
  _free(DAT_10020b3c);
  _free(DAT_10020d30);
  _free(DAT_10020b40);
  _free(DAT_10020a48);
  _free(DAT_10020aa0);
  _free(DAT_10020c64);
  _free(DAT_100209a4);
  _free(DAT_10020880);
  _free(DAT_10020bc8);
  _free(DAT_10020b14);
  _free(DAT_10020b7c);
  _free(DAT_10020cb8);
  _free(DAT_10020964);
  _free(DAT_100209ac);
  _free(DAT_10020a98);
  _free(DAT_100209f4);
  _free(DAT_10020908);
  _free(DAT_10020d08);
  return;
}



/**************************************************/

/* Function: FUN_10007eb0 @ 10007eb0 */

undefined4 FUN_10007eb0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_10007050();
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10007ed0 @ 10007ed0 */

void __cdecl FUN_10007ed0(wchar_t *param_1,wchar_t *param_2)

{
  DWORD DVar1;
  int iVar2;
  size_t _Count;
  size_t sVar3;
  FILE *local_420;
  byte local_41a;
  byte local_419;
  FILE *local_418;
  WCHAR local_414;
  undefined1 local_412 [518];
  WCHAR local_20c;
  undefined1 local_20a [518];
  uint local_4;
  
  local_4 = DAT_1001f4f0 ^ (uint)&local_420;
  local_420 = (FILE *)0x0;
  __wfopen_s(&local_420,param_1,L"rb");
  if (local_420 == (FILE *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_420);
    return;
  }
  local_414 = L'\0';
  _memset(local_412,0,0x206);
  local_418 = (FILE *)0x0;
  GetTempPathW(0x104,&local_414);
  local_20c = L'\0';
  _memset(local_20a,0,0x206);
  DVar1 = GetTickCount();
  GetTempFileNameW(&local_414,L"IPM",DVar1,&local_20c);
  _wcscpy_s(&local_414,0x104,&local_20c);
  _wcscpy_s(param_2,0x104,&local_414);
  DVar1 = GetFileAttributesW(param_2);
  if (DVar1 != 0xffffffff) {
    DeleteFileW(param_2);
  }
  __wfopen_s(&local_418,&local_414,L"wb");
  if (local_418 != (FILE *)0x0) {
    iVar2 = _feof(local_420);
    if (iVar2 == 0) {
      while ((iVar2 = _ferror(local_420), iVar2 == 0 &&
             (_Count = FUN_1000c58c(&local_419,1,1,local_420), _Count != 0))) {
        local_41a = ~local_419;
        sVar3 = _fwrite(&local_41a,1,_Count,local_418);
        if ((sVar3 != _Count) || (iVar2 = _feof(local_420), iVar2 != 0)) break;
      }
    }
    iVar2 = _fclose(local_418);
    if (iVar2 == 0) {
      local_418 = (FILE *)0x0;
    }
  }
  _fclose(local_420);
  __security_check_cookie(local_4 ^ (uint)&local_420);
  return;
}



/**************************************************/

/* Function: _wcsrchr @ 1000b935 */

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

/* Function: _wcschr @ 1000b965 */

/* Library Function - Single Match
    _wcschr
   
   Library: Visual Studio 2005 Release */

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

/* Function: _LocaleUpdate @ 1000b987 */

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
    if ((*(undefined **)this != PTR_DAT_1001fb00) && ((p_Var2->_ownlocale & DAT_1001fa1c) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_1001f920) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_1001fa1c) == 0)) {
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

/* Function: wcstoxl @ 1000ba09 */

/* Library Function - Single Match
    unsigned long __cdecl wcstoxl(struct localeinfo_struct *,wchar_t const *,wchar_t const *
   *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
wcstoxl(localeinfo_struct *param_1,wchar_t *param_2,wchar_t **param_3,int param_4,int param_5)

{
  wchar_t _C;
  wchar_t *pwVar1;
  undefined4 *puVar2;
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
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_1000baa0:
    _C = *pwVar7;
    pwVar7 = pwVar1 + 2;
  }
  else if (_C == L'+') goto LAB_1000baa0;
  uVar6 = (uint)(ushort)_C;
  if (param_4 == 0) {
    iVar3 = __wchartodigit(_C);
    if (iVar3 != 0) {
      param_4 = 10;
      goto LAB_1000bb04;
    }
    if ((*pwVar7 != L'x') && (*pwVar7 != L'X')) {
      param_4 = 8;
      goto LAB_1000bb04;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (iVar3 = __wchartodigit(_C), iVar3 == 0)) &&
     ((*pwVar7 == L'x' || (*pwVar7 == L'X')))) {
    uVar6 = (uint)(ushort)pwVar7[1];
    pwVar7 = pwVar7 + 2;
  }
LAB_1000bb04:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  local_c = (uint)(0xffffffff % (ulonglong)(uint)param_4);
  do {
    uVar8 = (ushort)uVar6;
    uVar5 = __wchartodigit(uVar8);
    if (uVar5 == 0xffffffff) {
      if (((uVar8 < 0x41) || (0x5a < uVar8)) && (0x19 < (ushort)(uVar8 - 0x61))) {
LAB_1000bb63:
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
          puVar2 = (undefined4 *)FUN_1000de6e();
          *puVar2 = 0x22;
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
    if ((uint)param_4 <= uVar5) goto LAB_1000bb63;
    if ((uVar9 < uVar4) || ((uVar9 == uVar4 && (uVar5 <= local_c)))) {
      uVar9 = uVar9 * param_4 + uVar5;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (wchar_t **)0x0) goto LAB_1000bb63;
    }
    uVar6 = (uint)(ushort)*pwVar7;
    pwVar7 = pwVar7 + 1;
  } while( true );
}



/**************************************************/

/* Function: _wcstoul @ 1000bc00 */

/* Library Function - Single Match
    _wcstoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10020d70 == 0) {
    ppuVar2 = &PTR_DAT_1001fb08;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}



/**************************************************/

/* Function: FUN_1000bc2a @ 1000bc2a */

short * __cdecl FUN_1000bc2a(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if (*param_2 != 0) {
    sVar1 = *param_1;
    if (sVar1 != 0) {
      iVar3 = (int)param_1 - (int)param_2;
      psVar2 = param_2;
joined_r0x1000bc50:
      do {
        if (sVar1 != 0) {
          if (*psVar2 == 0) {
            return param_1;
          }
          if (*(short *)(iVar3 + (int)psVar2) == *psVar2) {
            sVar1 = *(short *)(iVar3 + (int)(psVar2 + 1));
            psVar2 = psVar2 + 1;
            goto joined_r0x1000bc50;
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

/* Function: FUN_1000bc88 @ 1000bc88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1000bc88(wchar_t *param_1,int *param_2,localeinfo_struct *param_3)

{
  wchar_t _C;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  _locale_t _Locale;
  FLT p_Var4;
  wchar_t *_Str;
  _flt local_34;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  double local_c;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_3);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)param_1;
  }
  if (param_1 == (wchar_t *)0x0) {
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    return (float10)0;
  }
  _C = *param_1;
  _Str = param_1;
  while (iVar3 = __iswctype_l(_C,8,&local_1c), iVar3 != 0) {
    _Str = _Str + 1;
    _C = *_Str;
  }
  _Locale = (_locale_t)FUN_1000df67(_Str);
  p_Var4 = __wfltin2(&local_34,_Str,_Locale);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(_Str + p_Var4->nbytes);
  }
  uVar1 = p_Var4->flags;
  if ((uVar1 & 0x240) == 0) {
    if ((uVar1 & 0x81) == 0) {
      if (((uVar1 & 0x100) == 0) || (local_c = 0.0, p_Var4->dval != 0.0)) {
        local_c = p_Var4->dval;
        goto LAB_1000bd76;
      }
    }
    else {
      local_c = _DAT_1001fc90;
      if (*_Str == L'-') {
        local_c = -_DAT_1001fc90;
      }
    }
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 0x22;
  }
  else {
    local_c = 0.0;
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
  }
LAB_1000bd76:
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (float10)local_c;
}



/**************************************************/

/* Function: FUN_1000bd8b @ 1000bd8b */

void __cdecl FUN_1000bd8b(wchar_t *param_1,int *param_2)

{
  FUN_1000bc88(param_1,param_2,(localeinfo_struct *)0x0);
  return;
}



/**************************************************/

/* Function: __cfltcvt_init @ 1000bd9e */

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_1001fc98 = __cfltcvt;
  PTR_LAB_1001fc9c = &LAB_1000e106;
  PTR_LAB_1001fca0 = &LAB_1000e0c4;
  PTR_LAB_1001fca4 = &LAB_1000e0f8;
  PTR_LAB_1001fca8 = &LAB_1000e06e;
  PTR_LAB_1001fcac = __cfltcvt;
  PTR_LAB_1001fcb0 = __cfltcvt_l;
  PTR_LAB_1001fcb4 = __fassign_l;
  PTR_LAB_1001fcb8 = __cropzeros_l;
  PTR_LAB_1001fcbc = __forcdecpt_l;
  return;
}



/**************************************************/

/* Function: __fpmath @ 1000bdfe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_10020d3c = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



/**************************************************/

/* Function: _wcscpy_s @ 1000be1c */

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
      puVar2 = (undefined4 *)FUN_1000de6e();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_1000be3b;
    }
    *_Dst = L'\0';
  }
  puVar2 = (undefined4 *)FUN_1000de6e();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_1000be3b:
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _memset @ 1000be90 */

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_10022908 != 0)) {
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

/* Function: __security_check_cookie @ 1000bf0a */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_1001f4f0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/**************************************************/

/* Function: _free @ 1000bf19 */

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
    if (DAT_10022900 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000f012(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000bf6f();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_100210cc,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_1000de6e();
      DVar4 = GetLastError();
      iVar5 = FUN_1000de33(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1000bf6f @ 1000bf6f */

void FUN_1000bf6f(void)

{
  FUN_1000ee9d(4);
  return;
}



/**************************************************/

/* Function: _wcscat_s @ 1000bfa7 */

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
        puVar2 = (undefined4 *)FUN_1000de6e();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_1000bfc6;
      }
    }
    *_Dst = L'\0';
  }
  puVar2 = (undefined4 *)FUN_1000de6e();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_1000bfc6:
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: FUN_1000c021 @ 1000c021 */

int __cdecl FUN_1000c021(FILE *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (param_1 == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: _fclose @ 1000c093 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _fclose(FILE *_File)

{
  undefined4 *puVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    FUN_100100be((uint)_File);
    local_20 = FUN_1000c021(_File);
    FUN_1000c107();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000c107 @ 1000c107 */

void FUN_1000c107(void)

{
  uint unaff_ESI;
  
  FUN_10010128(unaff_ESI);
  return;
}



/**************************************************/

/* Function: FUN_1000c10f @ 1000c10f */

uint __cdecl FUN_1000c10f(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  undefined4 *puVar1;
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
            goto LAB_1000c259;
          }
          _Size = uVar5;
          if (uVar3 <= uVar5) {
            _Size = uVar3;
          }
          _memcpy(param_4->_ptr,param_1,_Size);
          param_4->_cnt = param_4->_cnt - _Size;
          param_4->_ptr = param_4->_ptr + _Size;
          uVar5 = uVar5 - _Size;
LAB_1000c215:
          local_8 = param_1 + _Size;
          param_1 = local_8;
        }
        if (local_c <= uVar5) {
          if ((uVar4 != 0) && (iVar2 = __flush(param_4), iVar2 != 0)) goto LAB_1000c259;
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
            if (uVar4 <= uVar3) goto LAB_1000c215;
          }
          param_4->_flag = param_4->_flag | 0x20;
LAB_1000c259:
          return (uVar6 - uVar5) / param_2;
        }
        iVar2 = __flsbuf((int)*param_1,param_4);
        if (iVar2 == -1) goto LAB_1000c259;
        param_1 = param_1 + 1;
        local_c = param_4->_bufsiz;
        uVar5 = uVar5 - 1;
        if ((int)local_c < 1) {
          local_c = 1;
        }
      } while( true );
    }
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/**************************************************/

/* Function: _fwrite @ 1000c26e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2008 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if ((_Size != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_100100be((uint)_File);
      uVar2 = FUN_1000c10f(_Str,_Size,_Count,_File);
      FUN_1000c2e6();
      return uVar2;
    }
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000c2e6 @ 1000c2e6 */

void FUN_1000c2e6(void)

{
  int unaff_EBP;
  
  FUN_10010128(*(uint *)(unaff_EBP + 0x14));
  return;
}



/**************************************************/

/* Function: FUN_1000c2f0 @ 1000c2f0 */

uint __cdecl FUN_1000c2f0(LPWSTR param_1,LPWSTR param_2,uint param_3,uint param_4,FILE *param_5)

{
  LPWSTR pWVar1;
  LPWSTR pWVar2;
  undefined4 *puVar3;
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
LAB_1000c369:
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
joined_r0x1000c38e:
        do {
          while( true ) {
            if (pWVar7 == (LPWSTR)0x0) {
              return param_4;
            }
            if ((param_5->_flag & 0x10c) == 0) break;
            pWVar4 = (LPWSTR)param_5->_cnt;
            if (pWVar4 == (LPWSTR)0x0) break;
            if ((int)pWVar4 < 0) {
LAB_1000c4de:
              param_5->_flag = param_5->_flag | 0x20;
LAB_1000c4e2:
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
              puVar3 = (undefined4 *)FUN_1000de6e();
              *puVar3 = 0x22;
              goto LAB_1000c325;
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
LAB_1000c4b1:
              if (param_2 != (LPWSTR)0xffffffff) {
                _memset(param_1,0,(size_t)param_2);
              }
              puVar3 = (undefined4 *)FUN_1000de6e();
              *puVar3 = 0x22;
              goto LAB_1000c325;
            }
            pWVar9 = pWVar2;
            uVar6 = __fileno(param_5);
            iVar5 = FUN_100113d6(uVar6,pWVar9,pWVar4);
            if (iVar5 == 0) {
              param_5->_flag = param_5->_flag | 0x10;
              goto LAB_1000c4e2;
            }
            if (iVar5 == -1) goto LAB_1000c4de;
            pWVar7 = (LPWSTR)((int)pWVar7 - iVar5);
            pWVar1 = (LPWSTR)((int)pWVar1 - iVar5);
            pWVar2 = (LPWSTR)((int)pWVar2 + iVar5);
            goto joined_r0x1000c38e;
          }
          iVar5 = __filbuf(param_5);
          if (iVar5 == -1) goto LAB_1000c4e2;
          if (pWVar1 == (LPWSTR)0x0) goto LAB_1000c4b1;
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
      goto LAB_1000c369;
    }
    puVar3 = (undefined4 *)FUN_1000de6e();
    *puVar3 = 0x16;
LAB_1000c325:
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/**************************************************/

/* Function: _fread_s @ 1000c4f6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fread_s
   
   Library: Visual Studio 2008 Release */

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_100100be((uint)_File);
      uVar2 = FUN_1000c2f0(_DstBuf,(LPWSTR)_DstSize,_ElementSize,_Count,_File);
      FUN_1000c582();
      return uVar2;
    }
    if (_DstSize != 0xffffffff) {
      _memset(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000c582 @ 1000c582 */

void FUN_1000c582(void)

{
  int unaff_EBP;
  
  FUN_10010128(*(uint *)(unaff_EBP + 0x18));
  return;
}



/**************************************************/

/* Function: FUN_1000c58c @ 1000c58c */

void __cdecl FUN_1000c58c(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  _fread_s(param_1,0xffffffff,param_2,param_3,param_4);
  return;
}



/**************************************************/

/* Function: _feof @ 1000c5a7 */

/* Library Function - Single Match
    _feof
   
   Library: Visual Studio 2005 Release */

int __cdecl _feof(FILE *_File)

{
  undefined4 *puVar1;
  
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0;
  }
  return _File->_flag & 0x10;
}



/**************************************************/

/* Function: _ferror @ 1000c5d6 */

/* Library Function - Single Match
    _ferror
   
   Library: Visual Studio 2005 Release */

int __cdecl _ferror(FILE *_File)

{
  undefined4 *puVar1;
  
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0;
  }
  return _File->_flag & 0x20;
}



/**************************************************/

/* Function: __wfsopen @ 1000c605 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wfsopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __wfsopen(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag)

{
  undefined4 *puVar1;
  FILE *pFVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1001e350;
  uStack_c = 0x1000c611;
  if (((_Filename == (wchar_t *)0x0) || (_Mode == (wchar_t *)0x0)) || (*_Mode == L'\0')) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    pFVar2 = (FILE *)FUN_100117da();
    if (pFVar2 == (FILE *)0x0) {
      puVar1 = (undefined4 *)FUN_1000de6e();
      *puVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != L'\0') {
        pFVar2 = __wopenfile(_Filename,_Mode,_ShFlag,pFVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_1000c6c1();
        return pFVar2;
      }
      puVar1 = (undefined4 *)FUN_1000de6e();
      *puVar1 = 0x16;
      __local_unwind4(&DAT_1001f4f0,(int)local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}



/**************************************************/

/* Function: FUN_1000c6c1 @ 1000c6c1 */

void FUN_1000c6c1(void)

{
  int unaff_EBP;
  
  FUN_10010128(*(uint *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __wfopen_s @ 1000c6cb */

/* Library Function - Single Match
    __wfopen_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __wfopen_s(FILE **_File,wchar_t *_Filename,wchar_t *_Mode)

{
  undefined4 *puVar1;
  FILE *pFVar2;
  errno_t eVar3;
  errno_t *peVar4;
  
  if (_File == (FILE **)0x0) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    eVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    pFVar2 = __wfsopen(_Filename,_Mode,0x80);
    *_File = pFVar2;
    if (pFVar2 == (FILE *)0x0) {
      peVar4 = (errno_t *)FUN_1000de6e();
      eVar3 = *peVar4;
    }
    else {
      eVar3 = 0;
    }
  }
  return eVar3;
}



/**************************************************/

/* Function: _V6_HeapAlloc @ 1000c71b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_100228f0) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1000c761();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000c761 @ 1000c761 */

void FUN_1000c761(void)

{
  FUN_1000ee9d(4);
  return;
}



/**************************************************/

/* Function: _malloc @ 1000c76a */

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
    puVar3 = (undefined4 *)FUN_1000de6e();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_100210cc == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_10011d5b(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_10022900 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_1000c7db:
      piVar1 = HeapAlloc(DAT_100210cc,0,dwBytes);
    }
    else if ((DAT_10022900 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_1000c7db;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_10021588 == 0) {
      puVar3 = (undefined4 *)FUN_1000de6e();
      *puVar3 = 0xc;
      goto LAB_1000c809;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_1000c809:
      puVar3 = (undefined4 *)FUN_1000de6e();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: __CRT_INIT@12 @ 1000c82d */

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
        _DAT_10021234 = DVar2 * 0x100 + DVar3;
        DAT_1002122c = DVar1;
        _DAT_10021230 = uVar8;
        DAT_10021238 = DVar2;
        _DAT_1002123c = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_1002290c = GetCommandLineA();
            DAT_10020d44 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_10020d40 = DAT_10020d40 + 1;
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
    if (0 < DAT_10020d40) {
      DAT_10020d40 = DAT_10020d40 + -1;
      if (DAT_10021268 == 0) {
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
    FUN_1000d63a();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_1001fb10;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_1000d5c3(DAT_10020d9c);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_1000d6a9((int)_Memory,0);
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

/* Function: ___DllMainCRTStartup @ 1000ca06 */

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
  if ((param_2 == 0) && (DAT_10020d40 == 0)) {
LAB_1000caf4:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_1001d0cc != (code *)0x0) {
        local_20 = (*DAT_1001d0cc)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_1000caf4;
    }
    local_20 = FUN_10007eb0(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_10007eb0(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (DAT_1001d0cc != (code *)0x0) {
        (*DAT_1001d0cc)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_1001d0cc != (code *)0x0)) {
        local_20 = (*DAT_1001d0cc)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/**************************************************/

/* Function: entry @ 1000cafc */

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000cb1d @ 1000cb1d */

undefined4 FUN_1000cb1d(void)

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

/* Function: setSBCS @ 1000cb4c */

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
    *puVar1 = puVar1[(int)&DAT_1001f4f8 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_1001f4f8 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: setSBUpLow @ 1000cba1 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_1000cd08:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_1000cd08;
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
          goto LAB_1000ccaf;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_1000ccaf:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 1000cd2b */

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
  if (((p_Var1->_ownlocale & DAT_1001fa1c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_1001f920) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_1001f4f8)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_1001f920;
      lpAddend = (pthreadmbcinfo)PTR_DAT_1001f920;
      InterlockedIncrement((LONG *)PTR_DAT_1001f920);
    }
    FUN_1000cdc6();
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

/* Function: FUN_1000cdc6 @ 1000cdc6 */

void FUN_1000cdc6(void)

{
  FUN_1000ee9d(0xd);
  return;
}



/**************************************************/

/* Function: getSystemCP @ 1000cdcf */

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
  DAT_10020d54 = 0;
  if (unaff_ESI == -2) {
    DAT_10020d54 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10020d54 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_10020d54 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_10020d54 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: FUN_1000ce49 @ 1000ce49 */

void __cdecl FUN_1000ce49(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_1000ce85:
    if (*(uint *)((int)&DAT_1001f928 + uVar5) != uVar4) goto code_r0x1000ce91;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_1001f938 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1001f924);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_1000cb1d();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1001f92c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_1000cfb6;
  }
LAB_1000ce72:
  setSBCS(unaff_EDI);
LAB_1000d013:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x1000ce91:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x1000ce9e;
  goto LAB_1000ce85;
code_r0x1000ce9e:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_1000d013;
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
      uVar9 = FUN_1000cb1d();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1000cfb6:
    setSBUpLow(unaff_EDI);
    goto LAB_1000d013;
  }
  if (DAT_10020d54 == 0) goto LAB_1000d013;
  goto LAB_1000ce72;
}



/**************************************************/

/* Function: __setmbcp @ 1000d022 */

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
      local_24 = FUN_1000ce49(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_1001f4f8)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_1001fa1c & 1) == 0)) {
          __lock(0xd);
          _DAT_10020d64 = ptVar3->mbcodepage;
          _DAT_10020d68 = ptVar3->ismbcodepage;
          _DAT_10020d6c = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_10020d58)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_1001f718)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_1001f820)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_1001f920);
          if ((LVar4 == 0) && (PTR_DAT_1001f920 != &DAT_1001f4f8)) {
            _free(PTR_DAT_1001f920);
          }
          PTR_DAT_1001f920 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_1000d183();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_1001f4f8) {
          _free(ptVar3);
        }
        puVar5 = (undefined4 *)FUN_1000de6e();
        *puVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_1000d183 @ 1000d183 */

void FUN_1000d183(void)

{
  FUN_1000ee9d(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 1000d1bc */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_100218cc == 0) {
    __setmbcp(-3);
    DAT_100218cc = 1;
  }
  return 0;
}



/**************************************************/

/* Function: ___freetlocinfo @ 1000d1da */

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_100203b8)) &&
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
  if ((ppuVar2 != &PTR_DAT_100202f8) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1001fa20) &&
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

/* Function: ___addlocaleref @ 1000d31a */

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
    if (((undefined *)pLVar1[-2] != &DAT_1001fa20) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: ___removelocaleref @ 1000d3a0 */

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
      if (((undefined *)pLVar1[-2] != &DAT_1001fa20) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: __updatetlocinfoEx_nolock @ 1000d42c */

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
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_1001fa28)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 1000d46a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1001fa1c) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1000d4d4();
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

/* Function: FUN_1000d4d4 @ 1000d4d4 */

void FUN_1000d4d4(void)

{
  FUN_1000ee9d(0xc);
  return;
}



/**************************************************/

/* Function: FUN_1000d4e0 @ 1000d4e0 */

undefined4 FUN_1000d4e0(void)

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

/* Function: FUN_1000d54c @ 1000d54c */

int __cdecl FUN_1000d54c(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1001fb14);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001fb10 != -1)) {
    iVar3 = DAT_1001fb10;
    pcVar2 = TlsGetValue(DAT_1001fb14);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1000d5a6;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1000d4e0();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1000d5a6:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 1000d5ba */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_1000d54c(0);
  return;
}



/**************************************************/

/* Function: FUN_1000d5c3 @ 1000d5c3 */

int __cdecl FUN_1000d5c3(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1001fb14);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001fb10 != -1)) {
    iVar3 = DAT_1001fb10;
    pcVar2 = TlsGetValue(DAT_1001fb14);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_1000d61d;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1000d4e0();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_1000d61d:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_1000d63a @ 1000d63a */

LPVOID FUN_1000d63a(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1001fb14);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1000d5c3(DAT_10020d98);
    TlsSetValue(DAT_1001fb14,lpTlsValue);
  }
  return lpTlsValue;
}



/**************************************************/

/* Function: __mtterm @ 1000d66c */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_1001fb10 != -1) {
    iVar2 = DAT_1001fb10;
    pcVar1 = (code *)FUN_1000d5c3(DAT_10020da0);
    (*pcVar1)(iVar2);
    DAT_1001fb10 = -1;
  }
  if (DAT_1001fb14 != 0xffffffff) {
    TlsFree(DAT_1001fb14);
    DAT_1001fb14 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: FUN_1000d6a9 @ 1000d6a9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_1000d6a9(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10020268;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_1000d4e0();
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
  *(undefined **)(param_1 + 0x68) = &DAT_1001f4f8;
  InterlockedIncrement((LONG *)&DAT_1001f4f8);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_1001fb00;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_1000d75f();
  return;
}



/**************************************************/

/* Function: FUN_1000d75f @ 1000d75f */

void FUN_1000d75f(void)

{
  FUN_1000ee9d(0xc);
  return;
}



/**************************************************/

/* Function: FUN_1000d768 @ 1000d768 */

DWORD * FUN_1000d768(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_1001fb10;
  pcVar1 = FUN_1000d63a();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_1001fb10;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_1000d5c3(DAT_10020d9c);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_1000d6a9((int)_Memory,0);
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

/* Function: __getptd @ 1000d7df */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_1000d768();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: __freefls@4 @ 1000d7f7 */

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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10020268) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_1001f4f8)) {
        _free(pLVar1);
      }
    }
    FUN_1000d903();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_1001fb00) && (pLVar1 != (LONG *)&DAT_1001fa28)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_1000d90f();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000d903 @ 1000d903 */

void FUN_1000d903(void)

{
  FUN_1000ee9d(0xd);
  return;
}



/**************************************************/

/* Function: FUN_1000d90f @ 1000d90f */

void FUN_1000d90f(void)

{
  FUN_1000ee9d(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 1000d918 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_1001fb10 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1001fb14), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_1001fb10;
      pcVar2 = TlsGetValue(DAT_1001fb14);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_1001fb10;
    pcVar2 = (code *)FUN_1000d5c3(DAT_10020d9c);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_1001fb14 != 0xffffffff) {
    TlsSetValue(DAT_1001fb14,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: __mtinit @ 1000d981 */

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
  DAT_10020d94 = GetProcAddress(hModule,"FlsAlloc");
  DAT_10020d98 = GetProcAddress(hModule,"FlsGetValue");
  DAT_10020d9c = GetProcAddress(hModule,"FlsSetValue");
  DAT_10020da0 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10020d94 == (FARPROC)0x0) || (DAT_10020d98 == (FARPROC)0x0)) ||
      (DAT_10020d9c == (FARPROC)0x0)) || (DAT_10020da0 == (FARPROC)0x0)) {
    DAT_10020d98 = TlsGetValue_exref;
    DAT_10020d94 = (FARPROC)&LAB_1000d631;
    DAT_10020d9c = TlsSetValue_exref;
    DAT_10020da0 = TlsFree_exref;
  }
  DAT_1001fb14 = TlsAlloc();
  if ((DAT_1001fb14 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_1001fb14,DAT_10020d98), BVar1 != 0))
  {
    __init_pointers();
    DAT_10020d94 = (FARPROC)FUN_1000d54c((int)DAT_10020d94);
    DAT_10020d98 = (FARPROC)FUN_1000d54c((int)DAT_10020d98);
    DAT_10020d9c = (FARPROC)FUN_1000d54c((int)DAT_10020d9c);
    DAT_10020da0 = (FARPROC)FUN_1000d54c((int)DAT_10020da0);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_1000d5c3((int)DAT_10020d94);
      DAT_1001fb10 = (*pcVar3)(pcVar6);
      if ((DAT_1001fb10 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_1001fb10;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_1000d5c3((int)DAT_10020d9c);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_1000d6a9((int)pDVar4,0);
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

/* Function: __wchartodigit @ 1000db05 */

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
      if (param_1 < 0x66a) goto LAB_1000db43;
      iVar1 = 0x6f0;
      if (param_1 < 0x6f0) {
        return -1;
      }
      if (param_1 < 0x6fa) goto LAB_1000db43;
      iVar1 = 0x966;
      if (param_1 < 0x966) {
        return -1;
      }
      if (param_1 < 0x970) goto LAB_1000db43;
      iVar1 = 0x9e6;
      if (param_1 < 0x9e6) {
        return -1;
      }
      if (param_1 < 0x9f0) goto LAB_1000db43;
      iVar1 = 0xa66;
      if (param_1 < 0xa66) {
        return -1;
      }
      if (param_1 < 0xa70) goto LAB_1000db43;
      iVar1 = 0xae6;
      if (param_1 < 0xae6) {
        return -1;
      }
      if (param_1 < 0xaf0) goto LAB_1000db43;
      iVar1 = 0xb66;
      if (param_1 < 0xb66) {
        return -1;
      }
      if (param_1 < 0xb70) goto LAB_1000db43;
      iVar1 = 0xc66;
      if (param_1 < 0xc66) {
        return -1;
      }
      if (param_1 < 0xc70) goto LAB_1000db43;
      iVar1 = 0xce6;
      if (param_1 < 0xce6) {
        return -1;
      }
      if (param_1 < 0xcf0) goto LAB_1000db43;
      iVar1 = 0xd66;
      if (param_1 < 0xd66) {
        return -1;
      }
      if (param_1 < 0xd70) goto LAB_1000db43;
      iVar1 = 0xe50;
      if (param_1 < 0xe50) {
        return -1;
      }
      if (param_1 < 0xe5a) goto LAB_1000db43;
      iVar1 = 0xed0;
      if (param_1 < 0xed0) {
        return -1;
      }
      if (param_1 < 0xeda) goto LAB_1000db43;
      iVar1 = 0xf20;
      if (param_1 < 0xf20) {
        return -1;
      }
      if (param_1 < 0xf2a) goto LAB_1000db43;
      iVar1 = 0x1040;
      if (param_1 < 0x1040) {
        return -1;
      }
      if (param_1 < 0x104a) goto LAB_1000db43;
      iVar1 = 0x17e0;
      if (param_1 < 0x17e0) {
        return -1;
      }
      if (param_1 < 0x17ea) goto LAB_1000db43;
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
LAB_1000db43:
      return (uint)param_1 - iVar1;
    }
  }
  return -1;
}



/**************************************************/

/* Function: __iswctype_l @ 1000dc87 */

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
    local_8[0] = *(ushort *)(PTR_DAT_100202f4 + (uint)_C * 2) & _Type;
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

/* Function: FUN_1000dd09 @ 1000dd09 */

void __cdecl FUN_1000dd09(undefined4 param_1)

{
  DAT_10020da4 = param_1;
  return;
}



/**************************************************/

/* Function: __invoke_watson @ 1000dd13 */

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
  
  iVar1 = DAT_1001f4f0;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_10013762();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}



/**************************************************/

/* Function: FUN_1000de0f @ 1000de0f */

void __cdecl
FUN_1000de0f(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_1000d5c3(DAT_10020da4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000de23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_10013762();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/**************************************************/

/* Function: FUN_1000de33 @ 1000de33 */

int __cdecl FUN_1000de33(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1001fb18)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1001fb1c);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_1000de6e @ 1000de6e */

undefined * FUN_1000de6e(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000d768();
  if (pDVar1 == (DWORD *)0x0) {
    return &DAT_1001fc80;
  }
  return (undefined *)(pDVar1 + 2);
}



/**************************************************/

/* Function: FUN_1000de81 @ 1000de81 */

DWORD * FUN_1000de81(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000d768();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1001fc84;
  }
  return pDVar1 + 3;
}



/**************************************************/

/* Function: FUN_1000de94 @ 1000de94 */

void __cdecl FUN_1000de94(DWORD param_1)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  
  pDVar1 = FUN_1000de81();
  *pDVar1 = param_1;
  iVar2 = FUN_1000de33(param_1);
  piVar3 = (int *)FUN_1000de6e();
  *piVar3 = iVar2;
  return;
}



/**************************************************/

/* Function: __wfltin2 @ 1000dec0 */

/* Library Function - Single Match
    __wfltin2
   
   Library: Visual Studio 2005 Release */

FLT __cdecl __wfltin2(FLT _Fit,wchar_t *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  FLT p_Var2;
  uint uVar3;
  int *in_stack_00000018;
  int local_28;
  wchar_t *local_24;
  _CRT_DOUBLE local_20;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  local_24 = _Str;
  uVar3 = 0;
  local_18 = FUN_100141ee((undefined2 *)&local_14,&local_28,(ushort *)_Str,0,0,0,0,in_stack_00000018
                         );
  if ((local_18 & 4) == 0) {
    IVar1 = __ld12tod(&local_14,&local_20);
    if (((local_18 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((local_18 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_20.x._0_4_ = 0;
    local_20.x._4_4_ = 0;
  }
  _Fit->nbytes = local_28 - (int)local_24 >> 1;
  *(undefined4 *)&_Fit->dval = local_20.x._0_4_;
  *(undefined4 *)((int)&_Fit->dval + 4) = local_20.x._4_4_;
  _Fit->flags = uVar3;
  p_Var2 = (FLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var2;
}



/**************************************************/

/* Function: FUN_1000df67 @ 1000df67 */

int __cdecl FUN_1000df67(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}



/**************************************************/

/* Function: __forcdecpt_l @ 1000df7d */

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

/* Function: __cropzeros_l @ 1000dfee */

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

/* Function: __fassign_l @ 1000e084 */

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

/* Function: __shift @ 1000e0db */

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

/* Function: __cftoe2_l @ 1000e114 */

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
    puVar1 = (undefined4 *)FUN_1000de6e();
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
      if (((DAT_100216ac & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return pcVar9;
    }
    puVar1 = (undefined4 *)FUN_1000de6e();
    uVar7 = 0x22;
  }
  uVar8 = 0;
  *puVar1 = uVar7;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar8;
}



/**************************************************/

/* Function: __cftoe_l @ 1000e281 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftoe @ 1000e34f */

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

/* Function: __cftoa_l @ 1000e36d */

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
    puVar2 = (undefined4 *)FUN_1000de6e();
    uVar13 = 0x16;
LAB_1000e3a6:
    eVar14 = 0;
    *puVar2 = uVar13;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return eVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    puVar2 = (undefined4 *)FUN_1000de6e();
    uVar13 = 0x22;
    goto LAB_1000e3a6;
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
    goto LAB_1000e6ca;
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
LAB_1000e679:
    if ((-1 < (int)uVar5) && ((0 < (int)uVar5 || (99 < uVar6)))) goto LAB_1000e684;
  }
  else {
    uVar12 = __alldvrm(uVar6,uVar5,1000,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar8 = (char)uVar12 + '0';
    pcVar9 = pcVar3 + 3;
    uVar5 = 0;
    uVar6 = extraout_ECX;
    if (pcVar9 == pcVar8) goto LAB_1000e679;
LAB_1000e684:
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
LAB_1000e6ca:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}



/**************************************************/

/* Function: __cftof2_l @ 1000e6de */

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
    puVar2 = (undefined4 *)FUN_1000de6e();
    uVar4 = 0x16;
    *puVar2 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftof_l @ 1000e7d3 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cftog_l @ 1000e88c */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __cfltcvt_l @ 1000e984 */

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

/* Function: __cfltcvt @ 1000ea0a */

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

/* Function: __initp_misc_cfltcvt_tab @ 1000ea2b */

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
    piVar1 = (int *)((int)&PTR_LAB_1001fc98 + uVar3);
    iVar2 = FUN_1000d54c(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: __setdefaultprecision @ 1000ea4a */

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

/* Function: __ms_p5_test_fdiv @ 1000ea73 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_1001d1c0 - (_DAT_1001d1c0 / _DAT_1001d1c8) * _DAT_1001d1c8) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: __ms_p5_mp_test_fdiv @ 1000eaaf */

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

/* Function: fastzero_I @ 1000ead8 */

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

/* Function: __VEC_memzero @ 1000eb2f */

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

/* Function: ___report_gsfailure @ 1000ebd2 */

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
  
  _DAT_10020ec0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10020ec4 = &stack0x00000004;
  _DAT_10020e00 = 0x10001;
  _DAT_10020da8 = 0xc0000409;
  _DAT_10020dac = 1;
  local_32c = DAT_1001f4f0;
  local_328 = DAT_1001f4f4;
  _DAT_10020db4 = unaff_retaddr;
  _DAT_10020e8c = in_GS;
  _DAT_10020e90 = in_FS;
  _DAT_10020e94 = in_ES;
  _DAT_10020e98 = in_DS;
  _DAT_10020e9c = unaff_EDI;
  _DAT_10020ea0 = unaff_ESI;
  _DAT_10020ea4 = unaff_EBX;
  _DAT_10020ea8 = in_EDX;
  _DAT_10020eac = in_ECX;
  _DAT_10020eb0 = in_EAX;
  _DAT_10020eb4 = unaff_EBP;
  DAT_10020eb8 = unaff_retaddr;
  _DAT_10020ebc = in_CS;
  _DAT_10020ec8 = in_SS;
  DAT_10020df8 = IsDebuggerPresent();
  FUN_10013762();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1001d1f8);
  if (DAT_10020df8 == 0) {
    FUN_10013762();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: ___heap_select @ 1000ecd6 */

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

/* Function: __heap_init @ 1000ed31 */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_100210cc = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_100210cc == (HANDLE)0x0) {
    return 0;
  }
  DAT_10022900 = ___heap_select();
  if ((DAT_10022900 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_100210cc);
    DAT_100210cc = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 1000ed8b */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_10022900 == 3) {
    iVar2 = 0;
    if (0 < DAT_100228e8) {
      puVar1 = (undefined4 *)((int)DAT_100228ec + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_100210cc,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_100228e8);
    }
    HeapFree(DAT_100210cc,0,DAT_100228ec);
  }
  HeapDestroy(DAT_100210cc);
  DAT_100210cc = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: __mtinitlocks @ 1000edff */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_100210d0;
  do {
    if ((&DAT_1001fccc)[iVar2 * 2] == 1) {
      (&DAT_1001fcc8)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_1001fcc8)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_1001fcc8)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 1000ee48 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_1001fcc8;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1001fde8);
  puVar1 = &DAT_1001fcc8;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1001fde8);
  return;
}



/**************************************************/

/* Function: FUN_1000ee9d @ 1000ee9d */

void __cdecl FUN_1000ee9d(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1001fcc8)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 1000eeb2 */

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
  if (DAT_100210cc == 0) {
    __FF_MSGBANNER();
    FUN_10011d5b(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_1001fcc8 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_1000de6e();
      *puVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          puVar2 = (undefined4 *)FUN_1000de6e();
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
      FUN_1000ef6c();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_1000ef6c @ 1000ef6c */

void FUN_1000ef6c(void)

{
  FUN_1000ee9d(10);
  return;
}



/**************************************************/

/* Function: __lock @ 1000ef75 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_1001fcc8)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1001fcc8)[_File * 2]);
  return;
}



/**************************************************/

/* Function: ___sbh_heap_init @ 1000efa6 */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_100228ec = HeapAlloc(DAT_100210cc,0,0x140);
  if (DAT_100228ec == (LPVOID)0x0) {
    return 0;
  }
  DAT_10021220 = 0;
  DAT_100228e8 = 0;
  DAT_100228f4 = DAT_100228ec;
  DAT_100228f0 = param_1;
  DAT_100228f8 = 0x10;
  return 1;
}



/**************************************************/

/* Function: thunk_FUN_1000f012 @ 1000efee */

void __thiscall thunk_FUN_1000f012(void *this,int param_1)

{
  FUN_1000f012((void *)(DAT_100228e8 * 0x14 + DAT_100228ec),param_1);
  return;
}



/**************************************************/

/* Function: FUN_1000f012 @ 1000f012 */

void __thiscall FUN_1000f012(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}



/**************************************************/

/* Function: ___sbh_free_block @ 1000f019 */

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
      if (DAT_10021220 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_100228fc * 0x8000 + DAT_10021220[3]),0x8000,0x4000);
        DAT_10021220[2] = DAT_10021220[2] | 0x80000000U >> ((byte)DAT_100228fc & 0x1f);
        *(undefined4 *)(DAT_10021220[4] + 0xc4 + DAT_100228fc * 4) = 0;
        *(char *)(DAT_10021220[4] + 0x43) = *(char *)(DAT_10021220[4] + 0x43) + -1;
        if (*(char *)(DAT_10021220[4] + 0x43) == '\0') {
          DAT_10021220[1] = DAT_10021220[1] & 0xfffffffe;
        }
        if (DAT_10021220[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10021220[3],0,0x8000);
          HeapFree(DAT_100210cc,0,(LPVOID)DAT_10021220[4]);
          _memmove(DAT_10021220,DAT_10021220 + 5,
                   (DAT_100228e8 * 0x14 - (int)DAT_10021220) + -0x14 + DAT_100228ec);
          DAT_100228e8 = DAT_100228e8 + -1;
          if (DAT_10021220 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_100228f4 = DAT_100228ec;
        }
      }
      DAT_10021220 = param_1;
      DAT_100228fc = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 1000f32d */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_100228e8 == DAT_100228f8) {
    pvVar1 = HeapReAlloc(DAT_100210cc,0,DAT_100228ec,(DAT_100228f8 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100228f8 = DAT_100228f8 + 0x10;
    DAT_100228ec = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_100228e8 * 0x14 + (int)DAT_100228ec);
  pvVar1 = HeapAlloc(DAT_100210cc,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_100228e8 = DAT_100228e8 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_100210cc,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 1000f3dd */

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

/* Function: ___sbh_resize_block @ 1000f4e3 */

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

/* Function: ___sbh_alloc_block @ 1000f7c2 */

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
  
  puVar9 = DAT_100228ec + DAT_100228e8 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_100228f4;
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
  puVar13 = DAT_100228ec;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_100228f4 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_100228f4) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_100228ec;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_100228f4 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_100228f4) &&
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
  DAT_100228f4 = param_1;
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
    if (iVar10 == 0) goto LAB_1000fa62;
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
LAB_1000fa62:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_10021220)) && (local_8 == DAT_100228fc)) {
    DAT_10021220 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/**************************************************/

/* Function: __SEH_prolog4 @ 1000faa8 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001f4f0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 1000faed */

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

/* Function: __except_handler4 @ 1000fb10 */

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_1001f4f0);
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
          goto LAB_1000fbbb;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) && (DAT_100228e4 != (code *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&DAT_100228e4), BVar5 != 0)) {
            (*DAT_100228e4)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_1001f4f0);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_1001f4f0);
  }
LAB_1000fbbb:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/**************************************************/

/* Function: __close_nolock @ 1000fca6 */

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
    if (((_FileHandle == 1) && ((*(byte *)(DAT_100217c0 + 0x74) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_100217c0 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_1000fd05;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000fd07;
    }
  }
LAB_1000fd05:
  DVar4 = 0;
LAB_1000fd07:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1000de94(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}



/**************************************************/

/* Function: __close @ 1000fd3a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2005 Release */

int __cdecl __close(int _FileHandle)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000de81();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_100217bc)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_1000de6e();
          *puVar2 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_1000fdfd();
        return local_20;
      }
    }
    pDVar1 = FUN_1000de81();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_1000fdfd @ 1000fdfd */

void FUN_1000fdfd(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __fileno @ 1000fe07 */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  undefined4 *puVar1;
  
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  return _File->_file;
}



/**************************************************/

/* Function: __freebuf @ 1000fe34 */

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

/* Function: __flush @ 1000fe60 */

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

/* Function: __fflush_nolock @ 1000fec2 */

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

/* Function: flsall @ 1000ff04 */

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
  for (iVar3 = 0; iVar3 < DAT_100228e0; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(DAT_100218d4 + iVar3 * 4);
    if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_100100fa(iVar3,iVar2);
      _File = *(FILE **)(DAT_100218d4 + iVar3 * 4);
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
      FUN_1000ffa6();
    }
  }
  FUN_1000ffd5();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1000ffa6 @ 1000ffa6 */

void FUN_1000ffa6(void)

{
  int unaff_ESI;
  
  FUN_1001015e(unaff_ESI,*(int *)(DAT_100218d4 + unaff_ESI * 4));
  return;
}



/**************************************************/

/* Function: FUN_1000ffd5 @ 1000ffd5 */

void FUN_1000ffd5(void)

{
  FUN_1000ee9d(1);
  return;
}



/**************************************************/

/* Function: FUN_1000ffe7 @ 1000ffe7 */

undefined ** FUN_1000ffe7(void)

{
  return &PTR_DAT_1001fde8;
}



/**************************************************/

/* Function: FUN_100100be @ 100100be */

void __cdecl FUN_100100be(uint param_1)

{
  if ((0x1001fde7 < param_1) && (param_1 < 0x10020049)) {
    __lock(((int)(param_1 + 0xeffe0218) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_100100fa @ 100100fa */

void __cdecl FUN_100100fa(int param_1,int param_2)

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

/* Function: FUN_10010128 @ 10010128 */

void __cdecl FUN_10010128(uint param_1)

{
  if ((0x1001fde7 < param_1) && (param_1 < 0x10020049)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_1000ee9d(((int)(param_1 + 0xeffe0218) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/**************************************************/

/* Function: FUN_1001015e @ 1001015e */

void __cdecl FUN_1001015e(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_1000ee9d(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/**************************************************/

/* Function: __flsbuf @ 10010188 */

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  undefined4 *puVar2;
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
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
LAB_100101ac:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 0x22;
    goto LAB_100101ac;
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
     (((ppuVar3 = FUN_1000ffe7(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_1000ffe7(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
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
        puVar5 = &DAT_10020230;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x38 + (&DAT_100217c0)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_100102d2;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_100102d2:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/**************************************************/

/* Function: __write_nolock @ 100102e8 */

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
  undefined4 *puVar7;
  int iVar8;
  _ptiddata p_Var9;
  BOOL BVar10;
  DWORD DVar11;
  int iVar12;
  uint uVar13;
  WCHAR *pWVar14;
  uint uVar15;
  char *pcVar16;
  int unaff_EDI;
  int *piVar17;
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
  
  local_8 = DAT_1001f4f0 ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_10010898;
  if (_Buf == (void *)0x0) {
    pDVar6 = FUN_1000de81();
    *pDVar6 = 0;
    puVar7 = (undefined4 *)FUN_1000de6e();
    *puVar7 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_10010898;
  }
  iVar12 = (_FileHandle & 0x1fU) * 0x38;
  piVar17 = &DAT_100217c0 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar17 + iVar12 + 0x24) * '\x02') >> 1;
  local_58c = piVar17;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    pDVar6 = FUN_1000de81();
    *pDVar6 = 0;
    puVar7 = (undefined4 *)FUN_1000de6e();
    *puVar7 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_10010898;
  }
  if ((*(byte *)(*piVar17 + iVar12 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar8 = __isatty(_FileHandle);
  if ((iVar8 == 0) || ((*(byte *)(iVar12 + 4 + *piVar17) & 0x80) == 0)) {
LAB_100105d3:
    if ((*(byte *)((undefined4 *)(*piVar17 + iVar12) + 1) & 0x80) == 0) {
      BVar10 = WriteFile(*(HANDLE *)(*piVar17 + iVar12),local_580,_MaxCharCount,(LPDWORD)&local_588,
                         (LPOVERLAPPED)0x0);
      if (BVar10 == 0) {
LAB_1001082d:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_10010836:
      piVar17 = local_58c;
      if (local_57c != (char *)0x0) goto LAB_10010898;
      goto LAB_10010840;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_10010867;
      do {
        local_578 = (WCHAR *)0x0;
        uVar13 = (int)local_56c - (int)local_580;
        pWVar14 = local_568;
        do {
          if (_MaxCharCount <= uVar13) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          uVar13 = uVar13 + 1;
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
        BVar10 = WriteFile(*(HANDLE *)(iVar12 + *piVar17),local_568,(int)pWVar14 - (int)local_568,
                           (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar10 == 0) goto LAB_1001082d;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar14 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_10010836;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (_MaxCharCount != 0) {
        do {
          uVar15 = 0;
          uVar13 = (int)local_56c - (int)local_580;
          pWVar14 = local_568;
          do {
            if (_MaxCharCount <= uVar13) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            uVar13 = uVar13 + 2;
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
          BVar10 = WriteFile(*(HANDLE *)(iVar12 + *piVar17),local_568,(int)pWVar14 - (int)local_568,
                             (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar10 == 0) goto LAB_1001082d;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar14 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_10010836;
      }
    }
    else {
      local_578 = local_580;
      if (_MaxCharCount != 0) {
        do {
          local_56c = (WCHAR *)0x0;
          uVar13 = (int)local_578 - (int)local_580;
          pWVar14 = local_164;
          do {
            if (_MaxCharCount <= uVar13) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            uVar13 = uVar13 + 2;
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
          iVar8 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar14 - (int)local_164) / 2,
                                      local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar8 == 0) goto LAB_1001082d;
          do {
            BVar10 = WriteFile(*(HANDLE *)(iVar12 + *local_58c),local_414 + (int)pcVar16,
                               iVar8 - (int)pcVar16,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar10 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar16 = pcVar16 + (int)local_588;
          } while ((int)pcVar16 < iVar8);
        } while ((iVar8 <= (int)pcVar16) &&
                (local_57c = (char *)((int)local_578 - (int)local_580), local_57c < _MaxCharCount));
        goto LAB_10010836;
      }
    }
LAB_10010867:
    DVar11 = 0;
    if (((*(byte *)(iVar12 + 4 + *piVar17) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_10010898;
    puVar7 = (undefined4 *)FUN_1000de6e();
    *puVar7 = 0x1c;
  }
  else {
    p_Var9 = __getptd();
    pwVar3 = p_Var9->ptlocinfo->lc_category[0].wlocale;
    BVar10 = GetConsoleMode(*(HANDLE *)(iVar12 + *piVar17),&local_598);
    if ((BVar10 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_100105d3;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (_MaxCharCount != 0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar14 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar8 = _isleadbyte(CONCAT22(cVar2 >> 7,(short)cVar2));
          if (iVar8 == 0) {
            iVar8 = _mbtowc((wchar_t *)&local_570,(char *)pWVar14,1);
            if (iVar8 == -1) break;
          }
          else {
            if (((char *)((int)local_580 + (_MaxCharCount - (int)pWVar14)) < (char *)0x2) ||
               (iVar8 = _mbtowc((wchar_t *)&local_570,(char *)pWVar14,2), iVar8 == -1)) break;
            pWVar14 = (WCHAR *)((int)pWVar14 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar14 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          DVar11 = WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
          if (DVar11 == 0) break;
          BVar10 = WriteFile(*(HANDLE *)(iVar12 + *piVar17),local_10,DVar11,(LPDWORD)&local_56c,
                             (LPOVERLAPPED)0x0);
          if (BVar10 == 0) goto LAB_1001082d;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)DVar11) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar10 = WriteFile(*(HANDLE *)(iVar12 + *piVar17),local_10,1,(LPDWORD)&local_56c,
                               (LPOVERLAPPED)0x0);
            if (BVar10 == 0) goto LAB_1001082d;
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
            if (wVar5 != (wchar_t)local_570) goto LAB_1001082d;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_1001082d;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_10010836;
    }
LAB_10010840:
    if (local_570 == 0) goto LAB_10010867;
    DVar11 = 5;
    if (local_570 != 5) {
      FUN_1000de94(local_570);
      goto LAB_10010898;
    }
    puVar7 = (undefined4 *)FUN_1000de6e();
    *puVar7 = 9;
  }
  pDVar6 = FUN_1000de81();
  *pDVar6 = DVar11;
LAB_10010898:
  iVar12 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar12;
}



/**************************************************/

/* Function: __write @ 100108ae */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2005 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000de81();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_100217bc)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_1000de6e();
          *puVar2 = 9;
          pDVar1 = FUN_1000de81();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_10010980();
        return local_20;
      }
    }
    pDVar1 = FUN_1000de81();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10010980 @ 10010980 */

void FUN_10010980(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: _memcpy @ 10010990 */

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
          goto switchD_10010b73_caseD_2;
        case 3:
          goto switchD_10010b73_caseD_3;
        }
        goto switchD_10010b73_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10010b73_caseD_0;
      case 1:
        goto switchD_10010b73_caseD_1;
      case 2:
        goto switchD_10010b73_caseD_2;
      case 3:
        goto switchD_10010b73_caseD_3;
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
              goto switchD_10010b73_caseD_2;
            case 3:
              goto switchD_10010b73_caseD_3;
            }
            goto switchD_10010b73_caseD_1;
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
              goto switchD_10010b73_caseD_2;
            case 3:
              goto switchD_10010b73_caseD_3;
            }
            goto switchD_10010b73_caseD_1;
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
              goto switchD_10010b73_caseD_2;
            case 3:
              goto switchD_10010b73_caseD_3;
            }
            goto switchD_10010b73_caseD_1;
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
switchD_10010b73_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10010b73_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10010b73_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10010b73_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10022908 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_100109ec_caseD_2;
      case 3:
        goto switchD_100109ec_caseD_3;
      }
      goto switchD_100109ec_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100109ec_caseD_0;
    case 1:
      goto switchD_100109ec_caseD_1;
    case 2:
      goto switchD_100109ec_caseD_2;
    case 3:
      goto switchD_100109ec_caseD_3;
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
            goto switchD_100109ec_caseD_2;
          case 3:
            goto switchD_100109ec_caseD_3;
          }
          goto switchD_100109ec_caseD_1;
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
            goto switchD_100109ec_caseD_2;
          case 3:
            goto switchD_100109ec_caseD_3;
          }
          goto switchD_100109ec_caseD_1;
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
            goto switchD_100109ec_caseD_2;
          case 3:
            goto switchD_100109ec_caseD_3;
          }
          goto switchD_100109ec_caseD_1;
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
switchD_100109ec_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100109ec_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100109ec_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100109ec_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __filbuf @ 10010cf5 */

/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  LPWSTR pWVar6;
  LPWSTR pWVar7;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
        iVar4 = FUN_100113d6(uVar3,pWVar6,pWVar7);
        _File->_cnt = iVar4;
        if ((iVar4 != 0) && (iVar4 != -1)) {
          if ((_File->_flag & 0x82) == 0) {
            iVar4 = __fileno(_File);
            if ((iVar4 == -1) || (iVar4 = __fileno(_File), iVar4 == -2)) {
              puVar5 = &DAT_10020230;
            }
            else {
              iVar4 = __fileno(_File);
              uVar3 = __fileno(_File);
              puVar5 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_100217c0)[iVar4 >> 5]);
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

/* Function: FUN_10010e15 @ 10010e15 */

int __cdecl FUN_10010e15(uint param_1,LPWSTR param_2,LPWSTR param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  WCHAR WVar4;
  DWORD *pDVar5;
  undefined4 *puVar6;
  LPWSTR pWVar7;
  BOOL BVar8;
  DWORD DVar9;
  LPWSTR pWVar10;
  int iVar11;
  LPWSTR pWVar12;
  int iVar13;
  int unaff_EDI;
  bool bVar14;
  longlong lVar15;
  LPWSTR local_1c;
  int local_18;
  LPWSTR local_14;
  LPWSTR local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  pWVar12 = param_3;
  local_18 = -2;
  if (param_1 == 0xfffffffe) {
    pDVar5 = FUN_1000de81();
    *pDVar5 = 0;
    puVar6 = (undefined4 *)FUN_1000de6e();
    *puVar6 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_100217bc <= param_1)) {
    pDVar5 = FUN_1000de81();
    *pDVar5 = 0;
    puVar6 = (undefined4 *)FUN_1000de6e();
    *puVar6 = 9;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  iVar13 = (param_1 & 0x1f) * 0x38;
  piVar1 = &DAT_100217c0 + ((int)param_1 >> 5);
  bVar3 = *(byte *)(*piVar1 + iVar13 + 4);
  if ((bVar3 & 1) == 0) {
    pDVar5 = FUN_1000de81();
    *pDVar5 = 0;
    puVar6 = (undefined4 *)FUN_1000de6e();
    *puVar6 = 9;
    goto LAB_10010f1d;
  }
  if (param_3 < (LPWSTR)0x80000000) {
    local_14 = (LPWSTR)0x0;
    if ((param_3 == (LPWSTR)0x0) || ((bVar3 & 2) != 0)) {
      return 0;
    }
    if (param_2 != (LPWSTR)0x0) {
      local_6 = (char)(*(char *)(*piVar1 + iVar13 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~(uint)param_3 & 1) == 0) goto LAB_10010f0b;
        pWVar10 = (LPWSTR)((uint)param_3 >> 1);
        param_3 = (LPWSTR)0x4;
        if ((LPWSTR)0x3 < pWVar10) {
          param_3 = pWVar10;
        }
        local_10 = __malloc_crt((size_t)param_3);
        if (local_10 == (LPWSTR)0x0) {
          puVar6 = (undefined4 *)FUN_1000de6e();
          *puVar6 = 0xc;
          pDVar5 = FUN_1000de81();
          *pDVar5 = 8;
          return -1;
        }
        lVar15 = __lseeki64_nolock(param_1,0x100000000,unaff_EDI);
        iVar11 = *piVar1;
        *(int *)(iVar13 + 0x28 + iVar11) = (int)lVar15;
        *(int *)(iVar13 + 0x2c + iVar11) = (int)((ulonglong)lVar15 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~(uint)param_3 & 1) == 0) goto LAB_10010f0b;
          param_3 = (LPWSTR)((uint)param_3 & 0xfffffffe);
        }
        local_10 = param_2;
      }
      pWVar7 = local_10;
      pWVar10 = param_3;
      if ((((*(byte *)(*piVar1 + iVar13 + 4) & 0x48) != 0) &&
          (bVar3 = *(byte *)(*piVar1 + iVar13 + 5), bVar3 != 10)) && (param_3 != (LPWSTR)0x0)) {
        *(byte *)local_10 = bVar3;
        pWVar7 = (LPWSTR)((int)local_10 + 1);
        pWVar10 = (LPWSTR)((int)param_3 + -1);
        local_14 = (LPWSTR)0x1;
        *(undefined1 *)(iVar13 + 5 + *piVar1) = 10;
        if (((local_6 != '\0') && (bVar3 = *(byte *)(iVar13 + 0x25 + *piVar1), bVar3 != 10)) &&
           (pWVar10 != (LPWSTR)0x0)) {
          *(byte *)pWVar7 = bVar3;
          pWVar7 = local_10 + 1;
          pWVar10 = param_3 + -1;
          local_14 = (LPWSTR)0x2;
          *(undefined1 *)(iVar13 + 0x25 + *piVar1) = 10;
          if (((local_6 == '\x01') && (bVar3 = *(byte *)(iVar13 + 0x26 + *piVar1), bVar3 != 10)) &&
             (pWVar10 != (LPWSTR)0x0)) {
            *(byte *)pWVar7 = bVar3;
            pWVar7 = (LPWSTR)((int)local_10 + 3);
            local_14 = (LPWSTR)0x3;
            *(undefined1 *)(iVar13 + 0x26 + *piVar1) = 10;
            pWVar10 = (LPWSTR)((int)param_3 + -3);
          }
        }
      }
      param_3 = pWVar10;
      BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar1),pWVar7,(DWORD)param_3,(LPDWORD)&local_1c,
                       (LPOVERLAPPED)0x0);
      if (((BVar8 == 0) || ((int)local_1c < 0)) || (param_3 < local_1c)) {
        DVar9 = GetLastError();
        if (DVar9 != 5) {
          if (DVar9 == 0x6d) {
            local_18 = 0;
            goto LAB_1001122a;
          }
          goto LAB_1001121f;
        }
        puVar6 = (undefined4 *)FUN_1000de6e();
        *puVar6 = 9;
        pDVar5 = FUN_1000de81();
        *pDVar5 = 5;
      }
      else {
        local_14 = (LPWSTR)((int)local_14 + (int)local_1c);
        pbVar2 = (byte *)(iVar13 + 4 + *piVar1);
        if ((*pbVar2 & 0x80) == 0) goto LAB_1001122a;
        if (local_6 == '\x02') {
          if ((local_1c == (LPWSTR)0x0) || (*local_10 != L'\n')) {
            *pbVar2 = *pbVar2 & 0xfb;
          }
          else {
            *pbVar2 = *pbVar2 | 4;
          }
          local_14 = (LPWSTR)((int)local_14 + (int)local_10);
          param_3 = local_10;
          pWVar12 = local_10;
          if (local_10 < local_14) {
            do {
              WVar4 = *param_3;
              if (WVar4 == L'\x1a') {
                pbVar2 = (byte *)(iVar13 + 4 + *piVar1);
                if ((*pbVar2 & 0x40) == 0) {
                  *pbVar2 = *pbVar2 | 2;
                }
                else {
                  *pWVar12 = *param_3;
                  pWVar12 = pWVar12 + 1;
                }
                break;
              }
              if (WVar4 == L'\r') {
                if (param_3 < local_14 + -1) {
                  if (param_3[1] == L'\n') {
                    pWVar10 = param_3 + 2;
                    goto LAB_100112cd;
                  }
LAB_10011362:
                  param_3 = param_3 + 1;
                  *pWVar12 = L'\r';
                }
                else {
                  pWVar10 = param_3 + 1;
                  BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar1),&local_c,2,(LPDWORD)&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) ||
                     (local_1c == (LPWSTR)0x0)) goto LAB_10011362;
                  if ((*(byte *)(iVar13 + 4 + *piVar1) & 0x48) == 0) {
                    if ((pWVar12 == local_10) && (local_c == 10)) goto LAB_100112cd;
                    __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_10011369;
                    goto LAB_10011362;
                  }
                  if (local_c == 10) {
LAB_100112cd:
                    param_3 = pWVar10;
                    *pWVar12 = L'\n';
                  }
                  else {
                    *pWVar12 = L'\r';
                    *(undefined1 *)(iVar13 + 5 + *piVar1) = (undefined1)local_c;
                    *(undefined1 *)(iVar13 + 0x25 + *piVar1) = local_c._1_1_;
                    *(undefined1 *)(iVar13 + 0x26 + *piVar1) = 10;
                    param_3 = pWVar10;
                  }
                }
                pWVar12 = pWVar12 + 1;
                pWVar10 = param_3;
              }
              else {
                *pWVar12 = WVar4;
                pWVar12 = pWVar12 + 1;
                pWVar10 = param_3 + 1;
              }
LAB_10011369:
              param_3 = pWVar10;
            } while (param_3 < local_14);
          }
          local_14 = (LPWSTR)((int)pWVar12 - (int)local_10);
          goto LAB_1001122a;
        }
        if ((local_1c == (LPWSTR)0x0) || ((byte)*local_10 != 10)) {
          *pbVar2 = *pbVar2 & 0xfb;
        }
        else {
          *pbVar2 = *pbVar2 | 4;
        }
        local_14 = (LPWSTR)((int)local_14 + (int)local_10);
        param_3 = local_10;
        pWVar10 = local_10;
        if (local_10 < local_14) {
          do {
            bVar3 = (byte)*param_3;
            if (bVar3 == 0x1a) {
              pbVar2 = (byte *)(iVar13 + 4 + *piVar1);
              if ((*pbVar2 & 0x40) == 0) {
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                *(byte *)pWVar10 = (byte)*param_3;
                pWVar10 = (LPWSTR)((int)pWVar10 + 1);
              }
              break;
            }
            if (bVar3 == 0xd) {
              if (param_3 < (LPWSTR)((int)local_14 + -1)) {
                if (*(char *)((int)param_3 + 1) == '\n') {
                  pWVar7 = param_3 + 1;
                  goto LAB_100110aa;
                }
LAB_10011121:
                param_3 = (LPWSTR)((int)param_3 + 1);
                *(byte *)pWVar10 = 0xd;
              }
              else {
                pWVar7 = (LPWSTR)((int)param_3 + 1);
                BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar1),&local_5,1,(LPDWORD)&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) ||
                   (local_1c == (LPWSTR)0x0)) goto LAB_10011121;
                if ((*(byte *)(iVar13 + 4 + *piVar1) & 0x48) == 0) {
                  if ((pWVar10 == local_10) && (local_5 == '\n')) goto LAB_100110aa;
                  __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_10011125;
                  goto LAB_10011121;
                }
                if (local_5 == '\n') {
LAB_100110aa:
                  param_3 = pWVar7;
                  *(byte *)pWVar10 = 10;
                }
                else {
                  *(byte *)pWVar10 = 0xd;
                  *(char *)(iVar13 + 5 + *piVar1) = local_5;
                  param_3 = pWVar7;
                }
              }
              pWVar10 = (LPWSTR)((int)pWVar10 + 1);
              pWVar7 = param_3;
            }
            else {
              *(byte *)pWVar10 = bVar3;
              pWVar10 = (LPWSTR)((int)pWVar10 + 1);
              pWVar7 = (LPWSTR)((int)param_3 + 1);
            }
LAB_10011125:
            param_3 = pWVar7;
          } while (param_3 < local_14);
        }
        local_14 = (LPWSTR)((int)pWVar10 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (LPWSTR)0x0)) goto LAB_1001122a;
        bVar3 = *(byte *)((int)pWVar10 + -1);
        if ((char)bVar3 < '\0') {
          iVar11 = 1;
          pWVar10 = (LPWSTR)((int)pWVar10 + -1);
          while ((((&DAT_10020070)[bVar3] == '\0' && (iVar11 < 5)) && (local_10 <= pWVar10))) {
            pWVar10 = (LPWSTR)((int)pWVar10 + -1);
            bVar3 = *(byte *)pWVar10;
            iVar11 = iVar11 + 1;
          }
          if ((char)(&DAT_10020070)[(byte)*pWVar10] == 0) {
            puVar6 = (undefined4 *)FUN_1000de6e();
            *puVar6 = 0x2a;
            goto LAB_10011226;
          }
          if ((char)(&DAT_10020070)[(byte)*pWVar10] + 1 == iVar11) {
            pWVar10 = (LPWSTR)((int)pWVar10 + iVar11);
          }
          else if ((*(byte *)(*piVar1 + iVar13 + 4) & 0x48) == 0) {
            __lseeki64_nolock(param_1,CONCAT44(1,-iVar11 >> 0x1f),unaff_EDI);
          }
          else {
            pWVar7 = (LPWSTR)((int)pWVar10 + 1);
            *(byte *)(*piVar1 + iVar13 + 5) = (byte)*pWVar10;
            if (1 < iVar11) {
              *(byte *)(iVar13 + 0x25 + *piVar1) = *(byte *)pWVar7;
              pWVar7 = pWVar10 + 1;
            }
            if (iVar11 == 3) {
              *(byte *)(iVar13 + 0x26 + *piVar1) = (byte)*pWVar7;
              pWVar7 = (LPWSTR)((int)pWVar7 + 1);
            }
            pWVar10 = (LPWSTR)((int)pWVar7 - iVar11);
          }
        }
        iVar11 = (int)pWVar10 - (int)local_10;
        local_14 = (LPWSTR)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_10,iVar11,param_2,
                                               (uint)pWVar12 >> 1);
        if (local_14 != (LPWSTR)0x0) {
          bVar14 = local_14 != (LPWSTR)iVar11;
          local_14 = (LPWSTR)((int)local_14 * 2);
          *(uint *)(iVar13 + 0x30 + *piVar1) = (uint)bVar14;
          goto LAB_1001122a;
        }
        DVar9 = GetLastError();
LAB_1001121f:
        FUN_1000de94(DVar9);
      }
LAB_10011226:
      local_18 = -1;
LAB_1001122a:
      if (local_10 != param_2) {
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_10010f0b:
  pDVar5 = FUN_1000de81();
  *pDVar5 = 0;
  puVar6 = (undefined4 *)FUN_1000de6e();
  *puVar6 = 0x16;
LAB_10010f1d:
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: FUN_100113d6 @ 100113d6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_100113d6(uint param_1,LPWSTR param_2,LPWSTR param_3)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_1000de81();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_100217bc)) {
    iVar3 = (param_1 & 0x1f) * 0x38;
    if ((*(byte *)((&DAT_100217c0)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
      if (param_3 < (LPWSTR)0x80000000) {
        ___lock_fhandle(param_1);
        if ((*(byte *)((&DAT_100217c0)[(int)param_1 >> 5] + 4 + iVar3) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_1000de6e();
          *puVar2 = 9;
          pDVar1 = FUN_1000de81();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = FUN_10010e15(param_1,param_2,param_3);
        }
        FUN_100114c9();
        return local_20;
      }
      pDVar1 = FUN_1000de81();
      *pDVar1 = 0;
      puVar2 = (undefined4 *)FUN_1000de6e();
      *puVar2 = 0x16;
      goto LAB_10011425;
    }
  }
  pDVar1 = FUN_1000de81();
  *pDVar1 = 0;
  puVar2 = (undefined4 *)FUN_1000de6e();
  *puVar2 = 9;
LAB_10011425:
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: FUN_100114c9 @ 100114c9 */

void FUN_100114c9(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: _memcpy_s @ 100114d3 */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  undefined4 *puVar2;
  
  if (_MaxCount == 0) {
LAB_100114e1:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_100114ea:
      puVar2 = (undefined4 *)FUN_1000de6e();
      eVar1 = 0x16;
      *puVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_100114e1;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_100114ea;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      puVar2 = (undefined4 *)FUN_1000de6e();
      eVar1 = 0x22;
      *puVar2 = 0x22;
    }
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}



/**************************************************/

/* Function: __wopenfile @ 1001154e */

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
  undefined4 *puVar6;
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
LAB_100115bb:
    uVar10 = DAT_100216b4 | 2;
  }
  else {
    if (wVar5 != L'r') {
      if (wVar5 != L'w') goto LAB_10011589;
      _OpenFlag = 0x301;
      goto LAB_100115bb;
    }
    _OpenFlag = 0;
    uVar10 = DAT_100216b4 | 1;
  }
  bVar1 = true;
  pwVar9 = pwVar9 + 1;
  wVar5 = *pwVar9;
  if (wVar5 != L'\0') {
    do {
      if (!bVar1) break;
      if ((ushort)wVar5 < 0x54) {
        if (wVar5 == L'S') {
          if (bVar2) goto LAB_100116e8;
          bVar2 = true;
          _OpenFlag = _OpenFlag | 0x20;
        }
        else if (wVar5 != L' ') {
          if (wVar5 == L'+') {
            if ((_OpenFlag & 2) != 0) goto LAB_100116e8;
            _OpenFlag = _OpenFlag & 0xfffffffe | 2;
            uVar10 = uVar10 & 0xfffffffc | 0x80;
          }
          else if (wVar5 == L',') {
            bVar4 = true;
LAB_100116e8:
            bVar1 = false;
          }
          else if (wVar5 == L'D') {
            if ((_OpenFlag & 0x40) != 0) goto LAB_100116e8;
            _OpenFlag = _OpenFlag | 0x40;
          }
          else if (wVar5 == L'N') {
            _OpenFlag = _OpenFlag | 0x80;
          }
          else {
            if (wVar5 != L'R') goto LAB_10011589;
            if (bVar2) goto LAB_100116e8;
            bVar2 = true;
            _OpenFlag = _OpenFlag | 0x10;
          }
        }
      }
      else if (wVar5 == L'T') {
        if ((_OpenFlag & 0x1000) != 0) goto LAB_100116e8;
        _OpenFlag = _OpenFlag | 0x1000;
      }
      else if (wVar5 == L'b') {
        if ((_OpenFlag & 0xc000) != 0) goto LAB_100116e8;
        _OpenFlag = _OpenFlag | 0x8000;
      }
      else if (wVar5 == L'c') {
        if (bVar3) goto LAB_100116e8;
        bVar3 = true;
        uVar10 = uVar10 | 0x4000;
      }
      else if (wVar5 == L'n') {
        if (bVar3) goto LAB_100116e8;
        bVar3 = true;
        uVar10 = uVar10 & 0xffffbfff;
      }
      else {
        if (wVar5 != L't') goto LAB_10011589;
        if ((_OpenFlag & 0xc000) != 0) goto LAB_100116e8;
        _OpenFlag = _OpenFlag | 0x4000;
      }
      pwVar9 = pwVar9 + 1;
      wVar5 = *pwVar9;
    } while (wVar5 != L'\0');
    if (bVar4) {
      for (; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
      }
      iVar7 = _wcsncmp(L"ccs=",pwVar9,4);
      if (iVar7 != 0) goto LAB_10011589;
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
          if (iVar7 != 0) goto LAB_10011589;
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
    _DAT_10021224 = _DAT_10021224 + 1;
    _File->_flag = uVar10;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = (int)_Mode;
    return _File;
  }
LAB_10011589:
  puVar6 = (undefined4 *)FUN_1000de6e();
  *puVar6 = 0x16;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return (FILE *)0x0;
}



/**************************************************/

/* Function: FUN_100117da @ 100117da */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 * FUN_100117da(void)

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
    if (DAT_100228e0 <= iVar5) {
LAB_100118d0:
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[3] = puVar7[3] & 0x8000;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7[7] = 0;
        puVar7[4] = 0xffffffff;
      }
      FUN_10011901();
      return puVar7;
    }
    piVar1 = (int *)(DAT_100218d4 + iVar5 * 4);
    if (*piVar1 == 0) {
      iVar5 = iVar5 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar5 + DAT_100218d4) = pvVar4;
      if (*(int *)(DAT_100218d4 + iVar5) != 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_100218d4 + iVar5) + 0x20,4000);
        if (iVar3 == 0) {
          _free(*(void **)(iVar5 + DAT_100218d4));
          *(undefined4 *)(iVar5 + DAT_100218d4) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_100218d4) + 0x20));
          puVar7 = *(undefined4 **)(iVar5 + DAT_100218d4);
        }
      }
      goto LAB_100118d0;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && (-1 < (short)uVar2)) {
      if ((iVar5 - 3U < 0x11) && (iVar3 = __mtinitlocknum(iVar5 + 0x10), iVar3 == 0))
      goto LAB_100118d0;
      FUN_100100fa(iVar5,*(int *)(DAT_100218d4 + iVar5 * 4));
      puVar7 = *(undefined4 **)(DAT_100218d4 + iVar5 * 4);
      if ((*(byte *)(puVar7 + 3) & 0x83) == 0) goto LAB_100118d0;
      FUN_1001015e(iVar5,(int)puVar7);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/**************************************************/

/* Function: FUN_10011901 @ 10011901 */

void FUN_10011901(void)

{
  FUN_1000ee9d(1);
  return;
}



/**************************************************/

/* Function: __local_unwind4 @ 1001190c */

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
  puStack_24 = &LAB_1001199c;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1001f4f0 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_10016c80();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_100119e2 @ 100119e2 */

void FUN_100119e2(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 100119fe */

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

/* Function: _EH4_TransferToHandler @ 10011a15 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x10011a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 10011a2e */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10011a43,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 10011a48 */

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

/* Function: __amsg_exit @ 10011a5f */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_10011d5b(param_1);
  pcVar1 = (code *)FUN_1000d5c3((int)PTR___exit_10020170);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: FUN_10011a83 @ 10011a83 */

void __cdecl FUN_10011a83(undefined4 param_1)

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

/* Function: ___crtExitProcess @ 10011aa9 */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_10011a83(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: FUN_10011abe @ 10011abe */

void FUN_10011abe(void)

{
  __lock(8);
  return;
}



/**************************************************/

/* Function: FUN_10011ac7 @ 10011ac7 */

void FUN_10011ac7(void)

{
  FUN_1000ee9d(8);
  return;
}



/**************************************************/

/* Function: FUN_10011ad0 @ 10011ad0 */

void __cdecl FUN_10011ad0(undefined4 *param_1)

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

/* Function: __initterm_e @ 10011ae8 */

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

/* Function: __get_osplatform @ 10011b08 */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_1002122c != 0)) {
    *param_1 = DAT_1002122c;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_1000de6e();
  *puVar1 = 0x16;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __get_winmajor @ 10011b3f */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_1002122c != 0)) {
    *param_1 = DAT_10021238;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_1000de6e();
  *puVar1 = 0x16;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __cinit @ 10011b7b */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_1001d0c0 != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_1001d0c0), BVar1 != 0)) {
    (*(code *)PTR___fpmath_1001d0c0)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1001a150,(undefined4 *)&DAT_1001a168);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_10012744);
    puVar3 = &DAT_1001a148;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1001a14c);
    if ((DAT_100218d0 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_100218d0), BVar1 != 0)) {
      (*DAT_100218d0)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_10011c0d @ 10011c0d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10011ce0) */

void __cdecl FUN_10011c0d(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_1002126c != 1) {
    DAT_10021268 = 1;
    DAT_10021264 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_1000d5c3(DAT_100218c8);
      piVar3 = (int *)FUN_1000d5c3(DAT_100218c4);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_1000d5c3(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_10011ad0((undefined4 *)&DAT_1001a178);
    }
    FUN_10011ad0((undefined4 *)&DAT_1001a180);
  }
  FUN_10011cda();
  if (param_3 != 0) {
    return;
  }
  DAT_1002126c = 1;
  FUN_1000ee9d(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_10011cda @ 10011cda */

void FUN_10011cda(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_1000ee9d(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 10011cef */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_10011c0d(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 10011d00 */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_10011c0d(0,0,1);
  return;
}



/**************************************************/

/* Function: __init_pointers @ 10011d0f */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_10011f34(uVar1);
  FUN_100153ef(uVar1);
  FUN_1000dd09(uVar1);
  FUN_10017017(uVar1);
  FUN_1001700d(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_10012768();
  __initp_eh_hooks();
  PTR___exit_10020170 = (undefined *)FUN_1000d54c(0x10011cef);
  return;
}



/**************************************************/

/* Function: FUN_10011d5b @ 10011d5b */

void __cdecl FUN_10011d5b(int param_1)

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
    if (param_1 == (&DAT_10020178)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_10020d50 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1002017c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10021270,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_1002138d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10021289,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10021289,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10021289);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10021289);
        _Dst = (char *)((int)&DAT_1002124c + sVar5 + 2);
        eVar3 = _strncpy_s(_Dst,(int)&DAT_10021584 - (int)_Dst,"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10021270,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10021270,0x314,*(char **)(uVar6 * 8 + 0x1002017c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_10017021(&DAT_10021270,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 10011efb */

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
    if (DAT_10020d50 != 1) {
      return;
    }
  }
  FUN_10011d5b(0xfc);
  FUN_10011d5b(0xff);
  return;
}



/**************************************************/

/* Function: FUN_10011f34 @ 10011f34 */

void __cdecl FUN_10011f34(undefined4 param_1)

{
  DAT_10021584 = param_1;
  return;
}



/**************************************************/

/* Function: __callnewh @ 10011f3e */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_1000d5c3(DAT_10021584);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __malloc_crt @ 10011f60 */

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
    if (DAT_1002158c == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1002158c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __calloc_crt @ 10011fa0 */

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
    if (DAT_1002158c == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1002158c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __realloc_crt @ 10011fe8 */

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
    if (DAT_1002158c == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1002158c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/**************************************************/

/* Function: __ioinit @ 10012033 */

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
  
  uStack_c = 0x1001203f;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1001226a:
    iVar7 = -1;
  }
  else {
    DAT_100217bc = 0x20;
    DAT_100217c0 = puVar2;
    for (; puVar2 < DAT_100217c0 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_100217bc < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_100217bc, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_100217c0)[iVar7] = puVar2;
        DAT_100217bc = DAT_100217bc + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_100217c0)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_100217c0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_1001226a;
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
      piVar8 = DAT_100217c0 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_1001226a;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_100217bc);
    iVar7 = 0;
  }
  return iVar7;
}



/**************************************************/

/* Function: __ioterm @ 10012273 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_100217c0;
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
  } while ((int)puVar2 < 0x100218c0);
  return;
}



/**************************************************/

/* Function: __setenvp @ 100122bf */

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
  
  if (DAT_100218cc == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_10020d44;
  if (DAT_10020d44 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_10020d44;
    DAT_1002124c = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_10020d44);
          DAT_10020d44 = (char *)0x0;
          *puVar1 = 0;
          _DAT_100218c0 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_1002124c);
            DAT_1002124c = (undefined4 *)0x0;
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

/* Function: parse_cmdline @ 1001239a */

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
        goto LAB_1001242c;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_1001242c:
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

/* Function: __setargv @ 10012532 */

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
  
  if (DAT_100218cc == 0) {
    ___initmbctable();
  }
  DAT_10021694 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10021590,0x104);
  _DAT_1002125c = &DAT_10021590;
  if ((DAT_1002290c == (char *)0x0) || (local_8 = DAT_1002290c, *DAT_1002290c == '\0')) {
    local_8 = &DAT_10021590;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_10021240 = local_c - 1;
      _DAT_10021244 = puVar2;
      return 0;
    }
  }
  return -1;
}



/**************************************************/

/* Function: ___crtGetEnvironmentStringsA @ 100125eb */

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
  if (DAT_10021698 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10021698 = 1;
      goto LAB_1001263d;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10021698 = 2;
    }
  }
  if (DAT_10021698 != 1) {
    if ((DAT_10021698 != 2) && (DAT_10021698 != 0)) {
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
LAB_1001263d:
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

/* Function: __RTC_Initialize @ 10012720 */

/* WARNING: Removing unreachable block (ram,0x10012732) */
/* WARNING: Removing unreachable block (ram,0x10012738) */
/* WARNING: Removing unreachable block (ram,0x1001273a) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/**************************************************/

/* Function: FUN_10012768 @ 10012768 */

void FUN_10012768(void)

{
  return;
}



/**************************************************/

/* Function: FUN_10012769 @ 10012769 */

undefined4 __cdecl FUN_10012769(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_1000d768();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_100202ec * 3);
    if ((piVar1 + DAT_100202ec * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_100202e0 < DAT_100202e4 + DAT_100202e0) {
            iVar8 = DAT_100202e0 * 0xc;
            iVar9 = DAT_100202e0;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_100202e4 + DAT_100202e0);
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

/* Function: ___security_init_cookie @ 100128e2 */

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
  if ((DAT_1001f4f0 == 0xbb40e64e) || ((DAT_1001f4f0 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1001f4f0 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1001f4f0 == 0xbb40e64e) {
      DAT_1001f4f0 = 0xbb40e64f;
    }
    else if ((DAT_1001f4f0 & 0xffff0000) == 0) {
      DAT_1001f4f0 = DAT_1001f4f0 | DAT_1001f4f0 << 0x10;
    }
  }
  DAT_1001f4f4 = ~DAT_1001f4f0;
  return;
}



/**************************************************/

/* Function: __freea @ 10012976 */

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

/* Function: __crtLCMapStringA_stat @ 10012991 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  if (DAT_1002169c == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_1002169c = 2;
      }
    }
    else {
      DAT_1002169c = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_10012a00;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_10012a00:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_1002169c == 2) || (DAT_1002169c == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_10012d21;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_10012d21;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_10012cfe;
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
LAB_10012cfe:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_10012d21;
  }
  if (DAT_1002169c != 1) goto LAB_10012d21;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10012d21;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_10012aa8:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_10012aa8;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_10012d21;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_10012bb7;
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
LAB_10012bb7:
  __freea(local_10);
LAB_10012d21:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 10012d33 */

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

/* Function: __crtGetStringTypeA_stat @ 10012d76 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_100216a0 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_100216a0 = 2;
      }
      goto LAB_10012dcf;
    }
    DAT_100216a0 = 1;
  }
  else {
LAB_10012dcf:
    if ((DAT_100216a0 == 2) || (DAT_100216a0 == 0)) {
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
      goto LAB_10012f1c;
    }
    if (DAT_100216a0 != 1) goto LAB_10012f1c;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10012f1c;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_10012e5f:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_10012e5f;
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
LAB_10012f1c:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 10012f2e */

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

/* Function: ___free_lc_time @ 10012f6e */

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

/* Function: ___free_lconv_num @ 100130fe */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_100203b8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_100203bc) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_100203c0) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 1001313e */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_100203c4) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_100203c8) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_100203cc) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_100203d0) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_100203d4) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_100203d8) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_100203dc) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: _strcat_s @ 100131c7 */

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
        puVar2 = (undefined4 *)FUN_1000de6e();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_100131e6;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_1000de6e();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_100131e6:
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strcspn @ 10013240 */

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

/* Function: _strncpy_s @ 10013286 */

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
LAB_100132aa:
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
          puVar2 = (undefined4 *)FUN_1000de6e();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_100132bb;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_100132aa;
  puVar2 = (undefined4 *)FUN_1000de6e();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_100132bb:
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: _strcpy_s @ 10013339 */

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
      puVar2 = (undefined4 *)FUN_1000de6e();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_10013358;
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_1000de6e();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_10013358:
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strcmp @ 100133a0 */

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio */

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
      if (bVar4 != *_Str2) goto LAB_100133e4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100133b0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100133e4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100133e4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100133b0:
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
LAB_100133e4:
  return (uint)bVar5 * -2 + 1;
}



/**************************************************/

/* Function: _strlen @ 10013430 */

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10013460;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10013493:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10013460:
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
  goto LAB_10013493;
}



/**************************************************/

/* Function: _strpbrk @ 100134c0 */

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

/* Function: __crtGetStringTypeW_stat @ 10013500 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_10013712;
  if (DAT_100216a8 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_100216a8 = 2;
      }
      goto LAB_10013567;
    }
    DAT_100216a8 = 1;
  }
  else {
LAB_10013567:
    if (DAT_100216a8 != 1) {
      if ((DAT_100216a8 != 2) && (DAT_100216a8 != 0)) goto LAB_10013712;
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
      if (_Size_00 == 0) goto LAB_10013712;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_10013618:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_10013618;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_10013712;
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
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_10013706;
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
LAB_10013706:
      __freea(local_c);
      goto LAB_10013712;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_10013712:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}



/**************************************************/

/* Function: ___crtGetStringTypeW @ 10013724 */

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

/* Function: FUN_10013762 @ 10013762 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10013762(void)

{
  _DAT_100217b8 = 0;
  return;
}



/**************************************************/

/* Function: __ld12tod @ 1001376a */

/* Library Function - Single Match
    __ld12tod
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

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
        goto LAB_10013c69;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10020408 - 1;
    iVar4 = (int)(DAT_10020408 + ((int)DAT_10020408 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10020408 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1001389d;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_100138a4;
LAB_1001389d:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_100138a4:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_100138b2;
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
LAB_100138b2:
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
    if (iVar12 < (int)(DAT_10020404 - DAT_10020408)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10020404 < iVar12) {
        if (iVar12 < DAT_10020400) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10020414;
          iVar2 = (int)(DAT_1002040c + ((int)DAT_1002040c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1002040c & 0x8000001f;
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
          iVar12 = (int)(DAT_1002040c + ((int)DAT_1002040c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1002040c & 0x8000001f;
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
          iVar12 = DAT_10020414 + DAT_10020400;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_10013c69;
      }
      local_14 = DAT_10020404 - local_14;
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
      iVar2 = DAT_10020408 - 1;
      iVar12 = (int)(DAT_10020408 + ((int)DAT_10020408 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10020408 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_10013a55;
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
LAB_10013a55:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1002040c + 1;
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
LAB_10013c69:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1002040c & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10020410 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10020410 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: __ld12tof @ 10013cac */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  uint uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  _LDBL12 *p_Var8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  uint local_24;
  float local_20;
  uint local_1c [5];
  _LDBL12 *local_8;
  
  local_1c[1] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar9 = *(uint *)(_Ifp->ld12 + 6);
  local_24 = uVar9;
  fVar12 = *(float *)(_Ifp->ld12 + 2);
  uVar10 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar11 = uVar10 - 0x3fff;
  uVar1 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_20 = fVar12;
  local_1c[0] = uVar1;
  if (iVar11 == -0x3fff) {
    iVar11 = 0;
    iVar2 = 0;
    do {
      if ((&local_24)[iVar2] != 0) {
        local_24 = 0;
        local_20 = 0.0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_100141ab;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10020420 - 1;
    iVar2 = (int)(DAT_10020420 + ((int)DAT_10020420 >> 0x1f & 0x1fU)) >> 5;
    uVar7 = DAT_10020420 & 0x8000001f;
    local_1c[2] = iVar11;
    local_1c[3] = iVar2;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
    }
    puVar6 = &local_24 + iVar2;
    bVar4 = (byte)(0x1f - uVar7);
    local_1c[4] = 0x1f - uVar7;
    if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
      uVar7 = (&local_24)[iVar2] & ~(-1 << (bVar4 & 0x1f));
      while( true ) {
        if (uVar7 != 0) {
          iVar2 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var8 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar5 = &local_24 + iVar2;
          _Ifp = (_LDBL12 *)(p_Var8->ld12 + *puVar5);
          if (_Ifp < (_LDBL12 *)*puVar5) goto LAB_10013ddf;
          bVar14 = _Ifp < p_Var8;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_10013de6;
LAB_10013ddf:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_10013de6:
              iVar2 = iVar2 + -1;
              *puVar5 = (uint)_Ifp;
              if ((iVar2 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_10013df4;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar5 = &local_24 + iVar2;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar5)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar5);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar2 = iVar2 + 1;
        if (2 < iVar2) break;
        uVar7 = (&local_24)[iVar2];
      }
    }
LAB_10013df4:
    *puVar6 = *puVar6 & -1 << ((byte)local_1c[4] & 0x1f);
    iVar2 = local_1c[3] + 1;
    if (iVar2 < 3) {
      puVar6 = &local_24 + iVar2;
      for (iVar13 = 3 - iVar2; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar11 = uVar10 - 0x3ffe;
    }
    if (iVar11 < (int)(DAT_1002041c - DAT_10020420)) {
      local_24 = 0;
      local_20 = 0.0;
    }
    else {
      if (DAT_1002041c < iVar11) {
        if (iVar11 < DAT_10020418) {
          local_24 = local_24 & 0x7fffffff;
          iVar11 = iVar11 + DAT_1002042c;
          iVar2 = (int)(DAT_10020424 + ((int)DAT_10020424 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_10020424 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            local_1c[2] = (&local_24)[(int)_Ifp] & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = (&local_24)[(int)_Ifp] >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar13 = 2;
          puVar6 = local_1c + -iVar2;
          do {
            if (iVar13 < iVar2) {
              (&local_24)[iVar13] = 0;
            }
            else {
              (&local_24)[iVar13] = *puVar6;
            }
            iVar13 = iVar13 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar13);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_20 = 0.0;
          local_1c[0] = 0;
          local_24 = 0x80000000;
          iVar11 = (int)(DAT_10020424 + ((int)DAT_10020424 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_10020424 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            uVar1 = (&local_24)[(int)_Ifp];
            local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar6 = local_1c + -iVar11;
          do {
            if (iVar2 < iVar11) {
              (&local_24)[iVar2] = 0;
            }
            else {
              (&local_24)[iVar2] = *puVar6;
            }
            iVar2 = iVar2 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar2);
          iVar11 = DAT_1002042c + DAT_10020418;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_100141ab;
      }
      local_1c[2] = DAT_1002041c - local_1c[2];
      local_24 = uVar9;
      local_20 = fVar12;
      iVar11 = (int)(local_1c[2] + ((int)local_1c[2] >> 0x1f & 0x1fU)) >> 5;
      uVar9 = local_1c[2] & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_10020420 - 1;
      iVar11 = (int)(DAT_10020420 + ((int)DAT_10020420 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = DAT_10020420 & 0x8000001f;
      local_1c[3] = iVar11;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      bVar4 = (byte)(0x1f - uVar9);
      puVar6 = &local_24 + iVar11;
      local_1c[2] = 0x1f - uVar9;
      if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
        uVar9 = (&local_24)[iVar11] & ~(-1 << (bVar4 & 0x1f));
        while (uVar9 == 0) {
          iVar11 = iVar11 + 1;
          if (2 < iVar11) goto LAB_10013f97;
          uVar9 = (&local_24)[iVar11];
        }
        iVar11 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar10 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar1 = (&local_24)[iVar11];
        uVar9 = uVar1 + uVar10;
        if ((uVar9 < uVar1) || (uVar9 < uVar10)) {
          bVar14 = true;
        }
        (&local_24)[iVar11] = uVar9;
        while ((iVar11 = iVar11 + -1, -1 < iVar11 && (bVar14))) {
          uVar1 = (&local_24)[iVar11];
          uVar9 = uVar1 + 1;
          bVar14 = false;
          if ((uVar9 < uVar1) || (uVar9 == 0)) {
            bVar14 = true;
          }
          (&local_24)[iVar11] = uVar9;
        }
      }
LAB_10013f97:
      *puVar6 = *puVar6 & -1 << ((byte)local_1c[2] & 0x1f);
      iVar11 = local_1c[3] + 1;
      if (iVar11 < 3) {
        puVar6 = &local_24 + iVar11;
        for (iVar2 = 3 - iVar11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = DAT_10020424 + 1;
      iVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = uVar9 & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
    }
    iVar11 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_100141ab:
  fVar12 = (float)(iVar11 << (0x1fU - (char)DAT_10020424 & 0x1f) |
                   -(uint)(local_1c[1] != 0) & 0x80000000 | local_24);
  if (DAT_10020428 == 0x40) {
    _F[1].f = fVar12;
    _F->f = local_20;
  }
  else if (DAT_10020428 == 0x20) {
    _F->f = fVar12;
  }
  return IVar3;
}



/**************************************************/

/* Function: FUN_100141ee @ 100141ee */

void __cdecl
FUN_100141ee(undefined2 *param_1,int *param_2,ushort *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  short *psVar20;
  undefined4 uVar21;
  ushort uVar22;
  bool bVar23;
  ushort *local_70;
  int local_6c;
  int local_68;
  ushort *local_64;
  int local_60;
  char *local_5c;
  ushort *local_58;
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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  local_5c = local_24;
  iVar15 = 0;
  uVar7 = 0;
  local_68 = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_6c = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((uVar22 = *param_3, uVar22 == 0x20 || (uVar22 == 9)) || (uVar22 == 10)) ||
           (uVar22 == 0xd)); param_3 = param_3 + 1) {
    }
LAB_10014284:
    uVar22 = *param_3;
    uVar10 = (uint)uVar22;
    puVar12 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((ushort)(uVar22 - 0x31) < 9) {
LAB_100142a2:
        iVar15 = 3;
        goto LAB_100142a4;
      }
      if (uVar10 == (int)*(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_100142c0:
        iVar15 = 5;
        param_3 = puVar12;
      }
      else {
        iVar15 = 2;
        if (uVar10 == 0x2b) {
          uVar7 = 0;
          param_3 = puVar12;
        }
        else {
          if (uVar10 != 0x2d) {
            if (uVar10 == 0x30) goto LAB_100142d7;
            goto LAB_1001449c;
          }
          uVar7 = 0x8000;
          param_3 = puVar12;
        }
      }
      goto LAB_10014284;
    case 1:
      bVar4 = true;
      if ((ushort)(uVar22 - 0x31) < 9) goto LAB_100142a2;
      if (uVar10 == (int)*(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10014311;
      if ((uVar10 == 0x2b) || (uVar10 == 0x2d)) goto LAB_10014340;
      if (uVar10 == 0x30) goto LAB_100142d7;
      goto LAB_10014323;
    case 2:
      if ((ushort)(uVar22 - 0x31) < 9) goto LAB_100142a2;
      if (uVar10 == (int)*(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_100142c0;
      param_3 = local_58;
      if (uVar10 != 0x30) goto LAB_100144c8;
LAB_100142d7:
      iVar15 = 1;
      param_3 = puVar12;
      goto LAB_10014284;
    case 3:
      while ((0x2f < (ushort)uVar10 && ((ushort)uVar10 < 0x3a))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *local_5c = (char)uVar10 + -0x30;
          local_5c = local_5c + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        uVar22 = *puVar12;
        puVar12 = puVar12 + 1;
        uVar10 = (uint)uVar22;
      }
      if (uVar10 != (int)*(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_100143c9;
LAB_10014311:
      bVar4 = true;
      iVar15 = 4;
      param_3 = puVar12;
      goto LAB_10014284;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while ((short)uVar10 == 0x30) {
          local_54 = local_54 + -1;
          uVar22 = *puVar12;
          puVar12 = puVar12 + 1;
          uVar10 = (uint)uVar22;
        }
      }
      while ((0x2f < (ushort)uVar10 && ((ushort)uVar10 < 0x3a))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          local_54 = local_54 + -1;
          *local_5c = (char)uVar10 + -0x30;
          local_5c = local_5c + 1;
        }
        uVar22 = *puVar12;
        puVar12 = puVar12 + 1;
        uVar10 = (uint)uVar22;
      }
LAB_100143c9:
      if ((uVar10 == 0x2b) || (uVar10 == 0x2d)) {
LAB_10014340:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = puVar12 + -1;
      }
      else {
LAB_10014323:
        bVar4 = true;
        if ((uVar10 < 0x44) || ((0x45 < uVar10 && (1 < uVar10 - 100)))) goto LAB_1001449c;
        iVar15 = 6;
        param_3 = puVar12;
      }
      goto LAB_10014284;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((ushort)(uVar22 - 0x30) < 10) {
        iVar15 = 4;
        goto LAB_100142a4;
      }
      goto LAB_100144c8;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (ushort)(uVar22 - 0x31)) {
        if (uVar10 == 0x2b) goto LAB_1001447d;
        if (uVar10 == 0x2d) goto LAB_10014471;
        bVar23 = uVar10 == 0x30;
LAB_10014464:
        param_3 = local_58;
        if (!bVar23) goto LAB_100144c8;
        iVar15 = 8;
        param_3 = puVar12;
        goto LAB_10014284;
      }
      break;
    case 7:
      if (8 < (ushort)(uVar22 - 0x31)) {
        bVar23 = uVar22 == 0x30;
        goto LAB_10014464;
      }
      break;
    case 8:
      bVar5 = true;
      while ((short)uVar10 == 0x30) {
        uVar22 = *puVar12;
        puVar12 = puVar12 + 1;
        uVar10 = (uint)uVar22;
      }
      if (8 < (ushort)((short)uVar10 - 0x31U)) goto LAB_1001449c;
      break;
    case 9:
      bVar5 = true;
      local_6c = 0;
      goto LAB_10014528;
    default:
      goto switchD_10014292_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (uVar10 == 0x2b) {
LAB_1001447d:
          iVar15 = 7;
          param_3 = puVar12;
        }
        else {
          if (uVar10 != 0x2d) goto LAB_100144c8;
LAB_10014471:
          local_68 = -1;
          iVar15 = 7;
          param_3 = puVar12;
        }
        goto LAB_10014284;
      }
      iVar15 = 10;
      puVar12 = param_3;
switchD_10014292_caseD_a:
      param_3 = puVar12;
      if (iVar15 != 10) goto LAB_10014284;
      goto LAB_100144c8;
    }
    iVar15 = 9;
LAB_100142a4:
    param_3 = puVar12 + -1;
    goto LAB_10014284;
  }
  puVar9 = (undefined4 *)FUN_1000de6e();
  *puVar9 = 0x16;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_100148d4;
LAB_10014528:
  if (((ushort)uVar10 < 0x30) || (0x39 < (ushort)uVar10)) goto LAB_10014548;
  local_6c = local_6c * 10 + -0x30 + uVar10;
  if (local_6c < 0x1451) {
    uVar10 = (uint)*puVar12;
    puVar12 = puVar12 + 1;
    goto LAB_10014528;
  }
  local_6c = 0x1451;
LAB_10014548:
  while ((0x2f < (ushort)uVar10 && ((ushort)uVar10 < 0x3a))) {
    uVar22 = *puVar12;
    puVar12 = puVar12 + 1;
    uVar10 = (uint)uVar22;
  }
LAB_1001449c:
  param_3 = puVar12 + -1;
LAB_100144c8:
  *param_2 = (int)param_3;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      local_50 = 0x18;
      local_5c = local_5c + -1;
      local_54 = local_54 + 1;
    }
    if (local_50 == 0) goto LAB_100148b5;
    while (local_5c = local_5c + -1, *local_5c == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar13 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar10 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_68 < 0) {
      local_6c = -local_6c;
    }
    local_58 = (ushort *)(local_6c + local_54);
    if (!bVar5) {
      local_58 = (ushort *)((int)local_58 + param_5);
    }
    if (!bVar6) {
      local_58 = (ushort *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_100148b5;
      puVar19 = &DAT_100204a0;
      if (local_58 != (ushort *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (ushort *)-(int)local_58;
          puVar19 = &DAT_10020600;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar10 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x100145e3:
        if (local_58 != (ushort *)0x0) {
          uVar16 = (int)local_58 >> 3;
          puVar19 = puVar19 + 0x54;
          uVar11 = (uint)local_58 & 7;
          local_58 = (ushort *)uVar16;
          if (uVar11 != 0) {
            puVar12 = (ushort *)(puVar19 + uVar11 * 0xc);
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
            local_5c = (char *)0x0;
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
            uVar8 = (puVar12[5] ^ local_36) & 0x8000;
            uVar22 = uVar17 + uVar14;
            uVar10 = 0;
            iVar1 = 0;
            if (((uVar14 < 0x7fff) && (uVar10 = 0, iVar1 = 0, uVar17 < 0x7fff)) &&
               (uVar10 = uVar16, iVar1 = iVar3, uVar22 < 0xbffe)) {
              if (0x3fbf < uVar22) {
                if (((uVar14 == 0) &&
                    (uVar22 = uVar22 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar13 == 0 && (uVar2 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar17 == 0) &&
                         (uVar22 = uVar22 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) == 0)) &&
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
                  local_68 = 0;
                  psVar20 = (short *)((int)&uStack_2e + 2);
                  local_60 = 5;
                  do {
                    local_6c = local_60;
                    if (0 < local_60) {
                      local_70 = (ushort *)((int)&local_40 + local_68 * 2);
                      local_64 = puVar12 + 4;
                      do {
                        bVar4 = false;
                        uVar10 = *(uint *)(psVar20 + -2) + (uint)*local_70 * (uint)*local_64;
                        if ((uVar10 < *(uint *)(psVar20 + -2)) ||
                           (uVar10 < (uint)*local_70 * (uint)*local_64)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar20 + -2) = uVar10;
                        if (bVar4) {
                          *psVar20 = *psVar20 + 1;
                        }
                        local_70 = local_70 + 1;
                        local_64 = local_64 + -1;
                        local_6c = local_6c + -1;
                      } while (0 < local_6c);
                    }
                    psVar20 = psVar20 + 1;
                    local_68 = local_68 + 1;
                    local_60 = local_60 + -1;
                  } while (0 < local_60);
                  uVar22 = uVar22 + 0xc002;
                  if ((short)uVar22 < 1) {
LAB_10014799:
                    uVar22 = uVar22 - 1;
                    if ((short)uVar22 < 0) {
                      uVar10 = (uint)(ushort)-uVar22;
                      uVar22 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_5c = (char *)((int)local_5c + 1);
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
                        uVar10 = uVar10 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar16;
                        uStack_2f = (undefined1)(uVar16 >> 8);
                      } while (uVar10 != 0);
                      if (local_5c != (char *)0x0) {
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
                      uVar22 = uVar22 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar13 >> 0x10);
                    } while (0 < (short)uVar22);
                    if ((short)uVar22 < 1) goto LAB_10014799;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar10 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar10 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar22 = uVar22 + 1;
                          iVar1 = 0;
                          uVar10 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar10 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar10 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar10;
                      uStack_2e._2_2_ = (ushort)(uVar10 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar22) goto LAB_10014858;
                  local_40 = uVar10;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar22 | uVar8;
                  uVar2 = uVar10;
                  iVar13 = iVar1;
                }
                goto joined_r0x100145e3;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_10014858:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar13 = (-(uint)(uVar8 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar13;
            local_36 = (ushort)((uint)iVar13 >> 0x10);
            uVar2 = 0;
            iVar13 = 0;
          }
          goto joined_r0x100145e3;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar13 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar13;
      local_40._2_2_ = (undefined2)(uVar2 >> 0x10);
      local_40._0_2_ = (undefined2)uVar2;
      uVar21 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar18 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar22 = local_36;
      uStack_4a = iVar15;
      uStack_2e = uVar10;
      uStack_2a = iVar1;
      local_3c = iVar13;
    }
    else {
      uVar21 = 0;
      uVar22 = 0x7fff;
      uVar18 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_100148b5:
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar22 = 0;
    uVar18 = 0;
    uVar21 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar22 | uVar7;
  *(undefined4 *)(param_1 + 1) = uVar21;
  *(undefined4 *)(param_1 + 3) = uVar18;
LAB_100148d4:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: _strrchr @ 10014920 */

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

/* Function: __isdigit_l @ 1001494d */

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

/* Function: _isdigit @ 1001499c */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_10020d70 == 0) {
    return (byte)PTR_DAT_1001faf0[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __tolower_l @ 100149c5 */

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
LAB_10014a24:
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
      puVar4 = (undefined4 *)FUN_1000de6e();
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
    if (iVar3 == 0) goto LAB_10014a24;
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

/* Function: _tolower @ 10014adc */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_10020d70 == 0) {
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

/* Function: FID_conflict:__atoflt_l @ 10014b03 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_10017a7f((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = __ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10014b5a:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10014b9a;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10014b8c:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10014b9a;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10014b8c;
    goto LAB_10014b5a;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10014b9a:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: FID_conflict:__atoflt_l @ 10014ba9 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_10017a7f((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = __ld12tof(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10014c00:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10014c40;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10014c32:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10014c40;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10014c32;
    goto LAB_10014c00;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10014c40:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: _memmove @ 10014c50 */

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
          goto switchD_10014e33_caseD_2;
        case 3:
          goto switchD_10014e33_caseD_3;
        }
        goto switchD_10014e33_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10014e33_caseD_0;
      case 1:
        goto switchD_10014e33_caseD_1;
      case 2:
        goto switchD_10014e33_caseD_2;
      case 3:
        goto switchD_10014e33_caseD_3;
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
              goto switchD_10014e33_caseD_2;
            case 3:
              goto switchD_10014e33_caseD_3;
            }
            goto switchD_10014e33_caseD_1;
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
              goto switchD_10014e33_caseD_2;
            case 3:
              goto switchD_10014e33_caseD_3;
            }
            goto switchD_10014e33_caseD_1;
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
              goto switchD_10014e33_caseD_2;
            case 3:
              goto switchD_10014e33_caseD_3;
            }
            goto switchD_10014e33_caseD_1;
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
switchD_10014e33_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10014e33_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10014e33_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10014e33_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_10022908 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_10014cac_caseD_2;
      case 3:
        goto switchD_10014cac_caseD_3;
      }
      goto switchD_10014cac_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_10014cac_caseD_0;
    case 1:
      goto switchD_10014cac_caseD_1;
    case 2:
      goto switchD_10014cac_caseD_2;
    case 3:
      goto switchD_10014cac_caseD_3;
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
            goto switchD_10014cac_caseD_2;
          case 3:
            goto switchD_10014cac_caseD_3;
          }
          goto switchD_10014cac_caseD_1;
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
            goto switchD_10014cac_caseD_2;
          case 3:
            goto switchD_10014cac_caseD_3;
          }
          goto switchD_10014cac_caseD_1;
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
            goto switchD_10014cac_caseD_2;
          case 3:
            goto switchD_10014cac_caseD_3;
          }
          goto switchD_10014cac_caseD_1;
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
switchD_10014cac_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_10014cac_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_10014cac_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_10014cac_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __fptostr @ 10014fb5 */

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
    puVar1 = (undefined4 *)FUN_1000de6e();
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
    puVar1 = (undefined4 *)FUN_1000de6e();
    eVar7 = 0x22;
    *puVar1 = 0x22;
  }
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}



/**************************************************/

/* Function: ___dtold @ 10015072 */

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
      goto LAB_10015124;
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
LAB_10015124:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/**************************************************/

/* Function: __fltout2 @ 1001512d */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_1001813f(local_14,uStack_10,uStack_c,0x11,0,&local_30);
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

/* Function: __alldvrm @ 100151c0 */

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

/* Function: __aullshr @ 100152a0 */

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

/* Function: __controlfp_s @ 100152c8 */

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
    puVar2 = (undefined4 *)FUN_1000de6e();
    eVar3 = 0x16;
    *puVar2 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}



/**************************************************/

/* Function: FUN_10015332 @ 10015332 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10015332(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 10015382 */

/* WARNING: Removing unreachable block (ram,0x100153bd) */
/* WARNING: Removing unreachable block (ram,0x100153aa) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10015332(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: FUN_100153ef @ 100153ef */

void __cdecl FUN_100153ef(undefined4 param_1)

{
  DAT_100216b0 = param_1;
  return;
}



/**************************************************/

/* Function: ___crtInitCritSecNoSpinCount@8 @ 100153f9 */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 10015409 */

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
  
  local_8 = &DAT_1001e580;
  uStack_c = 0x10015415;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_1000d5c3(DAT_100216b0);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1001547f;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_1001546e:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1001546e;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1001546e;
  }
  DAT_100216b0 = FUN_1000d54c((int)pcVar1);
LAB_1001547f:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: __ValidateImageBase @ 100154d0 */

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

/* Function: __FindPESection @ 10015500 */

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

/* Function: __IsNonwritableInCurrentImage @ 10015550 */

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
  local_c = DAT_1001f4f0 ^ 0x1001e5a0;
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

/* Function: __set_osfhnd @ 1001560b */

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_100217bc)) {
    iVar3 = (param_1 & 0x1fU) * 0x38;
    if (*(int *)(iVar3 + (&DAT_100217c0)[param_1 >> 5]) == -1) {
      if (DAT_10020d50 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10015665;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_10015665:
      *(intptr_t *)(iVar3 + (&DAT_100217c0)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_1000de6e();
  *puVar1 = 9;
  pDVar2 = FUN_1000de81();
  *pDVar2 = 0;
  return -1;
}



/**************************************************/

/* Function: __free_osfhnd @ 10015688 */

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_100217bc)) {
    iVar4 = (param_1 & 0x1fU) * 0x38;
    piVar1 = (int *)((&DAT_100217c0)[param_1 >> 5] + iVar4);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10020d50 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100156e6;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100156e6:
      *(undefined4 *)(iVar4 + (&DAT_100217c0)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_1000de6e();
  *puVar2 = 9;
  pDVar3 = FUN_1000de81();
  *pDVar3 = 0;
  return -1;
}



/**************************************************/

/* Function: __get_osfhandle @ 10015709 */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  intptr_t *piVar3;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000de81();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_100217bc)) &&
     (piVar3 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_100217c0)[_FileHandle >> 5]),
     (*(byte *)(piVar3 + 1) & 1) != 0)) {
    return *piVar3;
  }
  pDVar1 = FUN_1000de81();
  *pDVar1 = 0;
  puVar2 = (undefined4 *)FUN_1000de6e();
  *puVar2 = 9;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: ___lock_fhandle @ 1001577a */

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
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_100217c0)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_10015811();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_100217c0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_10015811 @ 10015811 */

void FUN_10015811(void)

{
  FUN_1000ee9d(10);
  return;
}



/**************************************************/

/* Function: __unlock_fhandle @ 1001581a */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100217c0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  return;
}



/**************************************************/

/* Function: __alloc_osfhnd @ 1001583c */

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
      puVar3 = (undefined4 *)(&DAT_100217c0)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x38);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_100217c0)[iVar4] = puVar3;
          DAT_100217bc = DAT_100217bc + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_100217c0)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_100217c0)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_100217c0)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
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
            FUN_1001590f();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_100217c0)[iVar4]) / 0x38 + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_100159d2();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1001590f @ 1001590f */

void FUN_1001590f(void)

{
  FUN_1000ee9d(10);
  return;
}



/**************************************************/

/* Function: FUN_100159d2 @ 100159d2 */

void FUN_100159d2(void)

{
  FUN_1000ee9d(0xb);
  return;
}



/**************************************************/

/* Function: __commit @ 100159db */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2005 Release */

int __cdecl __commit(int _FileHandle)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  int iVar4;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_100217bc)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)(iVar4 + 4 + (&DAT_100217c0)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_100217c0)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_10015a9d;
          pDVar3 = FUN_1000de81();
          *pDVar3 = local_20;
        }
        puVar1 = (undefined4 *)FUN_1000de6e();
        *puVar1 = 9;
        local_20 = 0xffffffff;
LAB_10015a9d:
        FUN_10015ab2();
        return local_20;
      }
    }
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 9;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/**************************************************/

/* Function: FUN_10015ab2 @ 10015ab2 */

void FUN_10015ab2(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __lseeki64_nolock @ 10015b5b */

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
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
LAB_10015b8a:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_1000de94(DVar4);
        goto LAB_10015b8a;
      }
    }
    pbVar1 = (byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/**************************************************/

/* Function: __lseeki64 @ 10015bde */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1000de81();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_100217bc)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        pDVar1 = FUN_1000de81();
        *pDVar1 = 0;
        puVar2 = (undefined4 *)FUN_1000de6e();
        *puVar2 = 9;
        FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_1000de6e();
          *puVar2 = 9;
          pDVar1 = FUN_1000de81();
          *pDVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_10015ced();
      }
      goto LAB_10015ce7;
    }
    pDVar1 = FUN_1000de81();
    *pDVar1 = 0;
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_10015ce7:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/**************************************************/

/* Function: FUN_10015ced @ 10015ced */

void FUN_10015ced(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/**************************************************/

/* Function: __getbuf @ 10015cf7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_10021224 = _DAT_10021224 + 1;
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

/* Function: __isatty @ 10015d3b */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  undefined4 *puVar1;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_100217bc)) {
    return *(byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
  }
  puVar1 = (undefined4 *)FUN_1000de6e();
  *puVar1 = 9;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}



/**************************************************/

/* Function: __putwch_nolock @ 10015d99 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  if (DAT_10020430 != 0) {
    if (DAT_100207c0 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_100207c0 == (HANDLE)0xffffffff) goto LAB_10015e42;
    BVar2 = WriteConsoleW(DAT_100207c0,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10020430 = 1;
      goto LAB_10015e42;
    }
    if ((DAT_10020430 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_10015e42;
    DAT_10020430 = 0;
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
  if (DAT_100207c0 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_100207c0,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_10015e42:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



/**************************************************/

/* Function: __mbtowc_l @ 10015e5b */

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
          if (iVar2 != 0) goto LAB_10015ea6;
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
        puVar3 = (undefined4 *)FUN_1000de6e();
        *puVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_10015ea6:
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

/* Function: _mbtowc @ 10015f6e */

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

/* Function: __isleadbyte_l @ 10015f85 */

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

/* Function: _isleadbyte @ 10015fbb */

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

/* Function: FUN_10015fc9 @ 10015fc9 */

void __cdecl FUN_10015fc9(undefined4 *param_1,undefined4 *param_2,uint param_3)

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

/* Function: __VEC_memcpy @ 10016050 */

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
      FUN_10015fc9(param_1,param_2,param_3 - uVar3);
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

/* Function: FUN_10016133 @ 10016133 */

undefined4 __cdecl
FUN_10016133(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  DWORD *pDVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  HANDLE pvVar8;
  long lVar9;
  int iVar10;
  byte bVar11;
  int unaff_EDI;
  bool bVar12;
  longlong lVar13;
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
  
  bVar12 = (param_3 & 0x80) == 0;
  local_28[0] = 0;
  local_2c = 0;
  local_6 = 0;
  local_3c.nLength = 0xc;
  local_3c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar12) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_3c.bInheritHandle = (BOOL)bVar12;
  iVar3 = FUN_10019164(local_28);
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
        goto LAB_1001621c;
      }
    }
    else if (uVar4 != 2) goto LAB_100161d8;
    local_c = 0xc0000000;
  }
LAB_1001621c:
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
    if (param_4 != 0x80) goto LAB_100161d8;
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
      if (uVar4 == 0x200) goto LAB_10016326;
      if (uVar4 != 0x300) goto LAB_100161d8;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_10016326:
        local_18 = 5;
        goto LAB_100162d0;
      }
      if (uVar4 != 0x700) {
LAB_100161d8:
        pDVar5 = FUN_1000de81();
        *pDVar5 = 0;
        *in_EAX = 0xffffffff;
        puVar6 = (undefined4 *)FUN_1000de6e();
        *puVar6 = 0x16;
        FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_100162d0:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_10021228 & param_5))) {
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
    pDVar5 = FUN_1000de81();
    *pDVar5 = 0;
    *in_EAX = 0xffffffff;
    puVar6 = (undefined4 *)FUN_1000de6e();
    *puVar6 = 0x18;
    goto LAB_100163ee;
  }
  *param_1 = 1;
  local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_100163fa;
    }
    pbVar1 = (byte *)((&DAT_100217c0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    FUN_1000de94(DVar7);
    goto LAB_100163ee;
  }
LAB_100163fa:
  DVar7 = GetFileType(local_20);
  if (DVar7 == 0) {
    pbVar1 = (byte *)((&DAT_100217c0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    FUN_1000de94(DVar7);
    CloseHandle(local_20);
    if (DVar7 == 0) {
      puVar6 = (undefined4 *)FUN_1000de6e();
      *puVar6 = 0xd;
    }
    goto LAB_100163ee;
  }
  if (DVar7 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar7 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_100217c0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar11;
  pbVar1 = (byte *)((&DAT_100217c0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_10016605;
    if ((param_3 & 2) == 0) goto LAB_10016535;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      pDVar5 = FUN_1000de81();
      bVar11 = local_5;
      if (*pDVar5 == 0x83) goto LAB_10016535;
    }
    else {
      local_30[0] = L'\0';
      local_30[1] = L'\0';
      iVar3 = FUN_10010e15(*in_EAX,local_30,(LPWSTR)0x1);
      if ((((iVar3 != 0) || (local_30[0] != L'\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar9 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar9 != -1)) goto LAB_10016535;
    }
LAB_100164e7:
    __close_nolock(*in_EAX);
    goto LAB_100163ee;
  }
LAB_10016535:
  local_5 = bVar11;
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
      if ((param_3 & 0x301) == 0x301) goto LAB_100165a4;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_100165a4:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_10016605;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_10016807;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_1001679d;
          }
LAB_100165fc:
          if (local_18 != 5) goto LAB_10016605;
        }
LAB_10016807:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_10016605;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar10 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar10 == -1) {
            __close_nolock(*in_EAX);
            puVar6 = (undefined4 *)FUN_1000de6e();
            return *puVar6;
          }
          iVar3 = iVar3 + iVar10;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_100165fc;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_100164e7;
                goto LAB_10016726;
              }
            }
            goto LAB_10016807;
          }
          goto LAB_10016605;
        }
LAB_10016726:
        iVar3 = FUN_10010e15(*in_EAX,(LPWSTR)&local_1c,(LPWSTR)0x3);
        if (iVar3 == -1) goto LAB_100164e7;
        if (iVar3 == 2) {
LAB_100167ab:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            puVar6 = (undefined4 *)FUN_1000de6e();
            *puVar6 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar9 = __lseek_nolock(*in_EAX,2,0);
            if (lVar9 == -1) goto LAB_100164e7;
            local_6 = 2;
            goto LAB_10016605;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_10016605;
          }
          goto LAB_100167ab;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_1001679d:
        if (uVar4 == 0xffffffff) goto LAB_100164e7;
      }
    }
  }
LAB_10016605:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_100217c0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_100217c0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_100217c0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar8 = CreateFileW(param_2,uVar4 & 0x7fffffff,local_14,&local_3c,3,local_10,(HANDLE)0x0);
    if (pvVar8 == (HANDLE)0xffffffff) {
      DVar7 = GetLastError();
      FUN_1000de94(DVar7);
      pbVar1 = (byte *)((&DAT_100217c0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_100163ee:
      puVar6 = (undefined4 *)FUN_1000de6e();
      return *puVar6;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_100217c0)[(int)*in_EAX >> 5]) = pvVar8;
  }
  return 0;
}



/**************************************************/

/* Function: FID_conflict:__sopen_helper @ 1001688d */

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
  undefined4 *puVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1001e668;
  uStack_c = 0x10016899;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    eVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_10016133(local_20,(LPCWSTR)_Filename,_OFlag,_ShFlag,(byte)_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_1001692b();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}



/**************************************************/

/* Function: FUN_1001692b @ 1001692b */

void FUN_1001692b(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_100217c0)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}



/**************************************************/

/* Function: __wsopen_s @ 10016959 */

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

/* Function: __wcsicmp_l @ 10016977 */

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
    puVar5 = (undefined4 *)FUN_1000de6e();
    *puVar5 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar6 = 0x7fffffff;
  }
  else if (_Str2 == (wchar_t *)0x0) {
    puVar5 = (undefined4 *)FUN_1000de6e();
    *puVar5 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: __wcsicmp @ 10016a86 */

/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_10020d70 == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      puVar3 = (undefined4 *)FUN_1000de6e();
      *puVar3 = 0x16;
      FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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

/* Function: _wcsncmp @ 10016b17 */

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

/* Function: __global_unwind2 @ 10016b4c */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10016b64,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 10016bb1 */

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
  puStack_1c = &LAB_10016b6c;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_10016c80();
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify @ 10016c61 */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1002043c = param_1;
  DAT_10020438 = in_EAX;
  DAT_10020440 = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_10016c80 @ 10016c80 */

void FUN_10016c80(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: FUN_10016c83 @ 10016c83 */

int __cdecl FUN_10016c83(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_1000d5c3(DAT_100218c8);
  piVar2 = (int *)FUN_1000d5c3(DAT_100218c4);
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
        DAT_100218c8 = FUN_1000d54c((int)pvVar5);
      }
      iVar6 = FUN_1000d54c(param_1);
      *piVar2 = iVar6;
      DAT_100218c4 = FUN_1000d54c((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __onexit @ 10016d6b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_10011abe();
  p_Var1 = (_onexit_t)FUN_10016c83((int)_Func);
  FUN_10016da1();
  return p_Var1;
}



/**************************************************/

/* Function: FUN_10016da1 @ 10016da1 */

void FUN_10016da1(void)

{
  FUN_10011ac7();
  return;
}



/**************************************************/

/* Function: _atexit @ 10016da7 */

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

/* Function: __initp_eh_hooks @ 10016df2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  _DAT_100216b8 = FUN_1000d54c(0x10016db9);
  return;
}



/**************************************************/

/* Function: __initp_misc_winsig @ 10016e03 */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_100216bc = param_1;
  DAT_100216c0 = param_1;
  DAT_100216c4 = param_1;
  DAT_100216c8 = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 10016e1c */

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
  } while (uVar1 < DAT_100202ec * 0xc + param_1);
  if ((DAT_100202ec * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 10016e50 */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_1000d5c3(DAT_100216c4);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 10016e5d */

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
        puVar6 = &DAT_100216bc;
        iVar3 = DAT_100216bc;
        goto LAB_10016f12;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10016ef0;
        if (_SigNum != 8) goto LAB_10016ed4;
      }
    }
    pDVar7 = FUN_1000d768();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_100216c8;
      iVar3 = DAT_100216c8;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_100216c0;
      iVar3 = DAT_100216c0;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10016ed4:
        puVar6 = (undefined4 *)FUN_1000de6e();
        *puVar6 = 0x16;
        FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10016ef0:
      puVar6 = &DAT_100216c4;
      iVar3 = DAT_100216c4;
    }
LAB_10016f12:
    bVar1 = true;
    pcVar4 = (code *)FUN_1000d5c3(iVar3);
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
      goto LAB_10016f76;
    }
  }
  else {
LAB_10016f76:
    if (_SigNum == 8) {
      for (local_28 = DAT_100202e0; local_28 < DAT_100202e4 + DAT_100202e0; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_10016fb0;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_10016fb0:
  FUN_10016fd1();
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

/* Function: FUN_10016fd1 @ 10016fd1 */

void FUN_10016fd1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1000ee9d(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_1001700d @ 1001700d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001700d(undefined4 param_1)

{
  _DAT_100216d0 = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10017017 @ 10017017 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10017017(undefined4 param_1)

{
  _DAT_100216dc = param_1;
  return;
}



/**************************************************/

/* Function: FUN_10017021 @ 10017021 */

undefined4 __cdecl FUN_10017021(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_100216e0 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_100216e0 = FUN_1000d54c((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_100216e4 = FUN_1000d54c((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_100216e8 = FUN_1000d54c((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_100216f0 = FUN_1000d54c((int)pFVar1);
      if (DAT_100216f0 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_100216ec = FUN_1000d54c((int)pFVar1);
      }
    }
  }
  if ((DAT_100216ec != local_c) && (DAT_100216f0 != local_c)) {
    pcVar3 = (code *)FUN_1000d5c3(DAT_100216ec);
    pcVar4 = (code *)FUN_1000d5c3(DAT_100216f0);
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
      goto LAB_100171b7;
    }
  }
  if ((((DAT_100216e4 != local_c) &&
       (pcVar3 = (code *)FUN_1000d5c3(DAT_100216e4), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_100216e8 != local_c &&
      (pcVar3 = (code *)FUN_1000d5c3(DAT_100216e8), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_100171b7:
  pcVar3 = (code *)FUN_1000d5c3(DAT_100216e0);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/**************************************************/

/* Function: __set_error_mode @ 100171de */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_10020d4c;
      DAT_10020d4c = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_10020d4c;
    }
  }
  puVar2 = (undefined4 *)FUN_1000de6e();
  *puVar2 = 0x16;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/**************************************************/

/* Function: __calloc_impl @ 10017224 */

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
        if ((DAT_10022900 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_100228f0)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_10017320();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_100172d5;
          }
        }
        else {
LAB_100172d5:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_100210cc,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_10021588 == 0) {
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
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0xc;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: FUN_10017320 @ 10017320 */

void FUN_10017320(void)

{
  FUN_1000ee9d(4);
  return;
}



/**************************************************/

/* Function: _realloc @ 10017342 */

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
  if (DAT_10022900 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1001751b;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1000f012(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_100228f0) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1000f012(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_100210cc,0,_NewSize);
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
      FUN_10017486();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_100210cc,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_10021588 == 0) {
        piVar4 = (int *)FUN_1000de6e();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_10017548;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_1000de6e();
    if (local_24 != (uint *)0x0) goto LAB_10017527;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1001751b;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_100210cc,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_10021588 == 0) {
        piVar4 = (int *)FUN_1000de6e();
LAB_10017548:
        DVar5 = GetLastError();
        iVar2 = FUN_1000de33(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_1000de6e();
  }
  DVar5 = GetLastError();
  iVar2 = FUN_1000de33(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_1001751b:
  __callnewh(_NewSize);
  piVar4 = (int *)FUN_1000de6e();
LAB_10017527:
  *piVar4 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_10017486 @ 10017486 */

void FUN_10017486(void)

{
  FUN_1000ee9d(4);
  return;
}



/**************************************************/

/* Function: x_ismbbtype_l @ 1001755d */

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
    if (uVar1 == 0) goto LAB_1001759f;
  }
  iVar2 = 1;
LAB_1001759f:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead @ 100175ae */

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

/* Function: ___ansicp @ 100175c1 */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___convertcp @ 10017608 */

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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_100177a8;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_100177a8;
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
LAB_100176e8:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_100176e8;
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
LAB_100177a8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __alloca_probe_16 @ 100177c0 */

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

/* Function: __alloca_probe_8 @ 100177d6 */

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

/* Function: _atol @ 100177ec */

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

/* Function: ___mtold12 @ 100177fd */

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
  
  uVar7 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
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

/* Function: __isctype_l @ 100179c9 */

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

/* Function: FUN_10017a7f @ 10017a7f */

void __cdecl
FUN_10017a7f(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
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
  
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
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
LAB_10017b04:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_10017b21:
        iVar15 = 3;
        goto LAB_10017b23;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_10017b38:
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
          if (cVar8 == '0') goto LAB_10017b52;
          goto LAB_10017cdd;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_10017b04;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_10017b21;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10017b89;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_10017bb9;
      if (cVar8 == '0') goto LAB_10017b52;
      goto LAB_10017b99;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_10017b21;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10017b38;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_10017d08;
LAB_10017b52:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_10017b04;
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
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10017c2c;
LAB_10017b89:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_10017b04;
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
LAB_10017c2c:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_10017bb9:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_10017b99:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_10017cdd;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_10017b04;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_10017b23;
      }
      goto LAB_10017d08;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_10017cc4;
        if (cVar8 == '-') goto LAB_10017cb8;
LAB_10017cab:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_10017d08;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_10017b04;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_10017cab;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_10017cdd;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_10017d6a;
    default:
      goto switchD_10017b10_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_10017cc4:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_10017d08;
LAB_10017cb8:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_10017b04;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_10017b10_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_10017b04;
      goto LAB_10017d08;
    }
    iVar15 = 9;
LAB_10017b23:
    param_3 = pcVar18 + -1;
    goto LAB_10017b04;
  }
  puVar10 = (undefined4 *)FUN_1000de6e();
  *puVar10 = 0x16;
  FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_10018100;
LAB_10017d6a:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_10017d85;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_10017d6a;
  }
  local_68 = 0x1451;
LAB_10017d85:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_10017cdd:
  param_3 = pcVar18 + -1;
LAB_10017d08:
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
    if (local_50 == 0) goto LAB_100180e2;
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
      if ((int)local_58 < -0x1450) goto LAB_100180e2;
      puVar20 = &DAT_100204a0;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_10020600;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x10017e10:
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
LAB_10017fc6:
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
                    if ((short)uVar24 < 1) goto LAB_10017fc6;
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
                  if (0x7ffe < uVar24) goto LAB_10018085;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x10017e10;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_10018085:
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
          goto joined_r0x10017e10;
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
LAB_100180e2:
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
LAB_10018100:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_1001813f @ 1001813f */

/* WARNING: Removing unreachable block (ram,0x10018630) */
/* WARNING: Removing unreachable block (ram,0x1001863a) */
/* WARNING: Removing unreachable block (ram,0x1001863f) */

void __cdecl
FUN_1001813f(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

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
  local_8 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
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
    goto LAB_100189bd;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1001826e;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_1001826e:
          pcVar25 = "1#QNAN";
          goto LAB_10018273;
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
LAB_10018273:
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
    goto LAB_100189bd;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_100204a0;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_10020600;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_10018594;
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
LAB_100184b8:
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
            if ((short)uVar24 < 1) goto LAB_100184b8;
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
          if (0x7ffe < uVar24) goto LAB_10018578;
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
LAB_10018578:
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
LAB_10018594:
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
          goto LAB_100187fc;
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
LAB_1001870a:
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
          if ((short)uVar24 < 1) goto LAB_1001870a;
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
        goto LAB_100187fc;
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
LAB_100187fc:
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
        goto LAB_100189bd;
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
LAB_100189bd:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __hw_cw @ 10018a05 */

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

/* Function: ___hw_cw_sse2 @ 10018a93 */

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

/* Function: __control87 @ 10018b33 */

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
  if (DAT_10022908 != 0) {
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

/* Function: ___initconout @ 10018e36 */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_100207c0 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/**************************************************/

/* Function: __chsize_nolock @ 10018e82 */

/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID _Buf;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  DWORD *pDVar7;
  BOOL BVar8;
  uint uVar9;
  int unaff_EDI;
  int iVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint in_stack_00000008;
  DWORD DVar15;
  SIZE_T dwBytes;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  uVar13 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
  if (uVar13 == 0xffffffffffffffff) goto LAB_10018f08;
  lVar14 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar5 = (int)((ulonglong)lVar14 >> 0x20);
  if (lVar14 == -1) goto LAB_10018f08;
  uVar9 = in_stack_00000008 - (uint)lVar14;
  uVar6 = (uint)(in_stack_00000008 < (uint)lVar14);
  iVar1 = (int)_Size - iVar5;
  iVar10 = iVar1 - uVar6;
  if ((iVar10 < 0) ||
     ((iVar10 == 0 || SBORROW4((int)_Size,iVar5) != SBORROW4(iVar1,uVar6) && (uVar9 == 0)))) {
    if ((iVar10 < 1) && (iVar10 < 0)) {
      lVar14 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar14 == -1) goto LAB_10018f08;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar8 = SetEndOfFile(pvVar2);
      local_14 = (BVar8 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        puVar3 = (undefined4 *)FUN_1000de6e();
        *puVar3 = 0xd;
        pDVar7 = FUN_1000de81();
        DVar15 = GetLastError();
        *pDVar7 = DVar15;
        goto LAB_10019006;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar15 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar15,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      puVar3 = (undefined4 *)FUN_1000de6e();
      *puVar3 = 0xc;
      goto LAB_10018f08;
    }
    iVar5 = __setmode_nolock(_FileHandle,0x8000);
    while( true ) {
      uVar6 = uVar9;
      if ((-1 < iVar10) && ((0 < iVar10 || (0xfff < uVar9)))) {
        uVar6 = 0x1000;
      }
      uVar6 = __write_nolock(_FileHandle,_Buf,uVar6);
      if (uVar6 == 0xffffffff) break;
      bVar11 = uVar9 < uVar6;
      uVar9 = uVar9 - uVar6;
      bVar12 = SBORROW4(iVar10,(int)uVar6 >> 0x1f);
      iVar1 = iVar10 - ((int)uVar6 >> 0x1f);
      iVar10 = iVar1 - (uint)bVar11;
      if ((iVar10 < 0) || ((iVar10 == 0 || bVar12 != SBORROW4(iVar1,(uint)bVar11) && (uVar9 == 0))))
      goto LAB_10018f5a;
    }
    pDVar7 = FUN_1000de81();
    if (*pDVar7 == 5) {
      puVar3 = (undefined4 *)FUN_1000de6e();
      *puVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_10018f5a:
    __setmode_nolock(_FileHandle,iVar5);
    DVar15 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar15,_Buf);
LAB_10019006:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_10018f08;
  }
  lVar14 = __lseeki64_nolock(_FileHandle,uVar13 >> 0x20,unaff_EDI);
  if (lVar14 != -1) {
    return 0;
  }
LAB_10018f08:
  piVar4 = (int *)FUN_1000de6e();
  return *piVar4;
}



/**************************************************/

/* Function: __lseek_nolock @ 10019036 */

/* Library Function - Single Match
    __lseek_nolock
   
   Library: Visual Studio 2005 Release */

long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_1000de6e();
    *puVar2 = 9;
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
    pbVar1 = (byte *)((&DAT_100217c0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    FUN_1000de94(DVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}



/**************************************************/

/* Function: __setmode_nolock @ 100190a8 */

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
  piVar1 = &DAT_100217c0 + (_FileHandle >> 5);
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
      if (_Mode != 0x40000) goto LAB_10019147;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_10019147:
  if ((bVar2 & 0x80) == 0) {
    iVar4 = 0x8000;
  }
  else {
    iVar4 = (-(uint)((char)(cVar3 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
  }
  return iVar4;
}



/**************************************************/

/* Function: FUN_10019164 @ 10019164 */

undefined4 __cdecl FUN_10019164(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_100217b0;
  return 0;
}



/**************************************************/

/* Function: __towlower_l @ 10019198 */

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

/* Function: __msize @ 10019245 */

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
    puVar1 = (undefined4 *)FUN_1000de6e();
    *puVar1 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_10022900 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_1000f012(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_100192df();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_100210cc,0,_Memory);
  }
  return sVar2;
}



/**************************************************/

/* Function: FUN_100192df @ 100192df */

void FUN_100192df(void)

{
  FUN_1000ee9d(4);
  return;
}



/**************************************************/

/* Function: _abort @ 100192e8 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if ((DAT_100207c4 & 1) != 0) {
    FUN_10011d5b(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if ((DAT_100207c4 & 2) != 0) {
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

/* Function: __alloca_probe @ 100193e0 */

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

/* Function: strtoxl @ 1001940b */

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
    puVar3 = (undefined4 *)FUN_1000de6e();
    *puVar3 = 0x16;
    FUN_1000de0f((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_100194c2:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_100194c2;
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
      goto LAB_10019528;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_10019528;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_10019528;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_10019528:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_10019582:
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
          puVar3 = (undefined4 *)FUN_1000de6e();
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
    if ((uint)param_4 <= uVar6) goto LAB_10019582;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_10019582;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: _strtol @ 10019636 */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10020d70 == 0) {
    ppuVar2 = &PTR_DAT_1001fb08;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: ___ascii_strnicmp @ 10019660 */

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
      if (bVar2 != (byte)uVar3) goto LAB_100196b1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_100196b1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: ___set_fpsr_sse2 @ 10019765 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_10022908 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_10020858 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/**************************************************/

/* Function: __crtLCMapStringW_stat @ 100197d7 */

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
  
  uVar1 = DAT_1001f4f0 ^ (uint)&stack0xfffffffc;
  lpDestStr = (char *)0x0;
  if (DAT_100217b4 == 0) {
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_100217b4 = 2;
      }
    }
    else {
      DAT_100217b4 = 1;
    }
  }
  psVar4 = (short *)param_3;
  pwVar7 = param_4;
  if (0 < (int)param_4) {
    do {
      pwVar7 = (wchar_t *)((int)pwVar7 + -1);
      if (*psVar4 == 0) goto LAB_1001984c;
      psVar4 = psVar4 + 1;
    } while (pwVar7 != (wchar_t *)0x0);
    pwVar7 = (wchar_t *)0xffffffff;
LAB_1001984c:
    param_4 = (wchar_t *)((int)param_4 + (-1 - (int)pwVar7));
  }
  if (DAT_100217b4 == 1) {
    LCMapStringW((LCID)param_1,param_2,(LPCWSTR)param_3,(int)param_4,(LPWSTR)param_5,(int)param_6);
    goto LAB_10019a26;
  }
  if ((DAT_100217b4 != 2) && (DAT_100217b4 != 0)) goto LAB_10019a26;
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
  if (cbMultiByte == 0) goto LAB_10019a26;
  if (((int)cbMultiByte < 1) || (0xffffffe0 / cbMultiByte == 0)) {
    local_c = (LPCSTR)0x0;
  }
  else if (cbMultiByte + 8 < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe0;
    local_c = &stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_10019915:
      local_c = (LPCSTR)(puVar5 + 2);
    }
  }
  else {
    puVar5 = _malloc(cbMultiByte + 8);
    local_c = (LPCSTR)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_10019915;
    }
  }
  if (local_c == (LPCSTR)0x0) goto LAB_10019a26;
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
LAB_10019999:
          lpDestStr = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_MaxCount + 8);
        lpDestStr = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_10019999;
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
LAB_10019a26:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: ___crtLCMapStringW @ 10019a38 */

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

/* Function: RtlUnwind @ 10019b8e */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x10019b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

