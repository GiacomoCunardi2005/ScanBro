/* Function: FUN_10001000 @ 10001000 */

undefined4 FUN_10001000(void)

{
  return 1;
}



/**************************************************/

/* Function: FUN_10001010 @ 10001010 */

undefined4 FUN_10001010(void)

{
  ushort uVar1;
  byte *in_EAX;
  bool bVar2;
  
  if (1 < *in_EAX) {
    return 0x30;
  }
  if (2 < in_EAX[1]) {
    return 0x31;
  }
  if (1 < in_EAX[2]) {
    return 0x32;
  }
  if (*(ushort *)(in_EAX + 6) < 2) {
    uVar1 = *(ushort *)(in_EAX + 4) & 0xf000;
    if (uVar1 < 0x2001) {
      if (uVar1 == 0x2000) {
        return 0;
      }
      if ((*(ushort *)(in_EAX + 4) & 0xf000) == 0) {
        return 0;
      }
      bVar2 = uVar1 == 0x1000;
    }
    else {
      if (uVar1 == 0x3000) {
        return 0;
      }
      bVar2 = uVar1 == 0xf000;
    }
    if (bVar2) {
      return 0;
    }
    return 0x34;
  }
  return 0x33;
}



/**************************************************/

/* Function: FUN_10001080 @ 10001080 */

void FUN_10001080(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  
  iVar4 = 0;
  cVar5 = '\0';
  puVar7 = &DAT_100c03a8;
  do {
    iVar1 = 0;
    iVar6 = iVar4;
    cVar3 = cVar5;
    do {
      cVar2 = cVar3;
      if (iVar1 < iVar4) {
        cVar2 = (char)iVar6;
      }
      puVar7[iVar1] = cVar2;
      iVar1 = iVar1 + 1;
      cVar3 = cVar3 + '\x01';
      iVar6 = iVar6 + -1;
    } while (iVar1 < 0x100);
    puVar7 = puVar7 + 0x100;
    iVar4 = iVar4 + 1;
    cVar5 = cVar5 + -1;
  } while ((int)puVar7 < 0x100d03a8);
  return;
}



/**************************************************/

/* Function: FUN_100010d0 @ 100010d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010d0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int unaff_EDI;
  int local_8;
  undefined1 local_4;
  
  dVar5 = _DAT_1002a370;
  dVar4 = _DAT_1002a368;
  local_8 = 0;
  do {
    iVar7 = 1;
    dVar3 = (double)local_8 / dVar5;
    pdVar8 = (double *)(unaff_EDI + 0x28);
    do {
      if (dVar3 < *pdVar8 != (dVar3 == *pdVar8)) break;
      iVar7 = iVar7 + 1;
      pdVar8 = pdVar8 + 2;
    } while (iVar7 < 5);
    iVar6 = iVar7 * 0x10;
    dVar1 = *(double *)(iVar6 + 8 + unaff_EDI);
    dVar2 = *(double *)(iVar6 + 0x10 + unaff_EDI);
    local_8 = local_8 + 1;
    local_4 = (undefined1)
              (int)ROUND((dVar2 - ((dVar3 - dVar1) *
                                  (dVar2 - *(double *)((iVar7 + 2) * 0x10 + unaff_EDI))) /
                                  (*(double *)(iVar6 + unaff_EDI + 0x18) - dVar1)) * dVar4);
    *(undefined1 *)(unaff_EDI + 0x67 + local_8) = local_4;
    if (0x2fd < local_8) {
      return;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_10001180 @ 10001180 */

void __fastcall FUN_10001180(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  int local_10;
  ushort uStack_6;
  
  uStack_6 = 0x4038;
  if (*(int *)(param_1 + 0x10) == 1) {
    uStack_6 = 0x4028;
  }
  fVar8 = (float10)(double)((ulonglong)uStack_6 << 0x30);
  piVar1 = (int *)(param_1 + 0x6020);
  local_10 = 0;
  piVar6 = piVar1;
  do {
    fVar9 = (float10)local_10 / fVar8;
    if (fVar9 < (float10)*(double *)(param_1 + 0x40)) {
      if (fVar9 < (float10)*(double *)(param_1 + 0x30)) {
        if (fVar9 < (float10)*(double *)(param_1 + 0x20)) {
          iVar7 = -*(int *)(param_1 + 0x18);
        }
        else {
          iVar7 = FUN_100226b0();
          fVar9 = extraout_ST0_00;
          fVar8 = extraout_ST1_00;
        }
      }
      else {
        iVar7 = FUN_100226b0();
        fVar9 = extraout_ST0;
        fVar8 = extraout_ST1;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x38);
    }
    piVar6[-0x17f6] = iVar7;
    if (fVar9 < (float10)*(double *)(param_1 + 0x6018)) {
      if (fVar9 < (float10)*(double *)(param_1 + 0x6008)) {
        if (fVar9 < (float10)*(double *)(param_1 + 0x5ff8)) {
          iVar7 = -*(int *)(param_1 + 0x5ff0);
        }
        else {
          iVar7 = FUN_100226b0();
          fVar9 = extraout_ST0_02;
          fVar8 = extraout_ST1_02;
        }
      }
      else {
        iVar7 = FUN_100226b0();
        fVar9 = extraout_ST0_01;
        fVar8 = extraout_ST1_01;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x6010);
    }
    *piVar6 = iVar7;
    if (fVar9 < (float10)*(double *)(param_1 + 0xbff0)) {
      if (fVar9 < (float10)*(double *)(param_1 + 0xbfe0)) {
        if (fVar9 < (float10)*(double *)(param_1 + 0xbfd0)) {
          iVar7 = -*(int *)(param_1 + 0xbfc8);
        }
        else {
          iVar7 = FUN_100226b0();
          fVar8 = extraout_ST0_04;
        }
      }
      else {
        iVar7 = FUN_100226b0();
        fVar8 = extraout_ST0_03;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0xbfe8);
    }
    local_10 = local_10 + 1;
    piVar6[0x17f6] = iVar7;
    piVar6 = piVar6 + 1;
  } while (local_10 < 0x17e9);
  if ((DAT_100c0388 & 1) != 0) {
    puVar5 = (ulonglong *)(param_1 + 0x11fa0);
    iVar7 = 0x17e9;
    do {
      iVar2 = piVar1[0x17f6] << 5;
      iVar3 = *piVar1 << 5;
      iVar4 = piVar1[-0x17f6] << 5;
      *puVar5 = (ulonglong)
                CONCAT24(((short)(iVar2 / 100) + (short)(iVar2 >> 0x1f)) -
                         (short)((longlong)iVar2 * 0x51eb851f >> 0x3f),
                         CONCAT22(((short)(iVar3 / 100) + (short)(iVar3 >> 0x1f)) -
                                  (short)((longlong)iVar3 * 0x51eb851f >> 0x3f),
                                  ((short)(iVar4 / 100) + (short)(iVar4 >> 0x1f)) -
                                  (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)));
      piVar1 = piVar1 + 1;
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



/**************************************************/

/* Function: FUN_100013d0 @ 100013d0 */

byte FUN_100013d0(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *unaff_EDI;
  
  pbVar5 = param_1 + 0x20;
  unaff_EDI[2] = pbVar5;
  *unaff_EDI = param_1;
  unaff_EDI[1] = param_1 + 0x10;
  uVar8 = 8;
  pbVar3 = (byte *)&DAT_1002a29c;
  pbVar6 = param_1;
  do {
    if (*(int *)pbVar6 != *(int *)pbVar3) goto LAB_10001418;
    uVar8 = uVar8 - 4;
    pbVar3 = pbVar3 + 4;
    pbVar6 = pbVar6 + 4;
  } while (3 < uVar8);
  if (uVar8 == 0) {
LAB_1000147d:
    iVar4 = 0;
  }
  else {
LAB_10001418:
    iVar9 = (uint)*pbVar6 - (uint)*pbVar3;
    if (iVar9 == 0) {
      if (uVar8 == 1) goto LAB_1000147d;
      iVar9 = (uint)pbVar6[1] - (uint)pbVar3[1];
      if (iVar9 == 0) {
        if (uVar8 == 2) goto LAB_1000147d;
        iVar9 = (uint)pbVar6[2] - (uint)pbVar3[2];
        if (iVar9 == 0) {
          if ((uVar8 == 3) || (iVar9 = (uint)pbVar6[3] - (uint)pbVar3[3], iVar9 == 0))
          goto LAB_1000147d;
        }
      }
    }
    iVar4 = 1;
    if (iVar9 < 1) {
      iVar4 = -1;
    }
  }
  if ((iVar4 != 0) || (*(int *)(param_1 + 8) != 0x10000)) {
    return 0xd1;
  }
  if (*(int *)(param_1 + 0xc) != param_2) {
    return 0xd2;
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  unaff_EDI[3] = uVar8;
  if (uVar8 != 0) {
    uVar7 = 0;
    pbVar6 = pbVar5;
    if (uVar8 != 0) {
      while (*(int *)pbVar6 != 0x10100) {
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 0x10;
        if (uVar8 <= uVar7) {
          return (uVar7 != uVar8) - 1U & 0xd3;
        }
      }
      iVar9 = uVar7 * 0x10;
      bVar1 = pbVar5[iVar9 + 3];
      bVar2 = pbVar5[iVar9 + 1];
      pbVar5 = pbVar5 + iVar9;
      unaff_EDI[4] = uVar7;
      unaff_EDI[5] = CONCAT31(CONCAT21(CONCAT11(bVar1,pbVar5[2]),bVar2),*pbVar5);
      bVar1 = pbVar5[9];
      *(undefined2 *)(unaff_EDI + 6) = *(undefined2 *)(pbVar5 + 4);
      bVar2 = pbVar5[0xd];
      unaff_EDI[7] = CONCAT31(CONCAT21(*(undefined2 *)(pbVar5 + 10),bVar1),pbVar5[8]);
      unaff_EDI[8] = CONCAT31(CONCAT21(*(undefined2 *)(pbVar5 + 0xe),bVar2),pbVar5[0xc]);
    }
    return (uVar7 != uVar8) - 1U & 0xd3;
  }
  return 0xd0;
}



/**************************************************/

/* Function: FUN_100015e0 @ 100015e0 */

undefined4 FUN_100015e0(int param_1,int *param_2,byte *param_3,int *param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  
  if (*(int *)(*param_2 + 0xc) != param_1) {
    return 0xd2;
  }
  pbVar12 = (byte *)(param_2[8] + *param_2);
  pbVar1 = pbVar12 + 0x20;
  param_4[2] = (int)pbVar1;
  *param_4 = (int)pbVar12;
  param_4[1] = (int)(pbVar12 + 0x10);
  uVar11 = 8;
  pbVar7 = (byte *)&DAT_1002a2a8;
  pbVar10 = pbVar12;
  do {
    if (*(int *)pbVar10 != *(int *)pbVar7) goto LAB_10001658;
    uVar11 = uVar11 - 4;
    pbVar7 = pbVar7 + 4;
    pbVar10 = pbVar10 + 4;
  } while (3 < uVar11);
  if (uVar11 == 0) {
LAB_100016bd:
    iVar8 = 0;
  }
  else {
LAB_10001658:
    iVar13 = (uint)*pbVar10 - (uint)*pbVar7;
    if (iVar13 == 0) {
      if (uVar11 == 1) goto LAB_100016bd;
      iVar13 = (uint)pbVar10[1] - (uint)pbVar7[1];
      if (iVar13 == 0) {
        if (uVar11 == 2) goto LAB_100016bd;
        iVar13 = (uint)pbVar10[2] - (uint)pbVar7[2];
        if (iVar13 == 0) {
          if ((uVar11 == 3) || (iVar13 = (uint)pbVar10[3] - (uint)pbVar7[3], iVar13 == 0))
          goto LAB_100016bd;
        }
      }
    }
    iVar8 = 1;
    if (iVar13 < 1) {
      iVar8 = -1;
    }
  }
  if (iVar8 == 0) {
    piVar2 = (int *)(param_2[4] * 0x10 + param_2[2]);
    if (*(int *)(pbVar12 + 8) != *piVar2) {
      return 0xd3;
    }
    if (*(int *)(pbVar12 + 0xc) != piVar2[2]) {
      return 0xd4;
    }
    iVar13 = *(int *)(pbVar12 + 0x10);
    param_4[3] = iVar13;
    if (iVar13 != 0) {
      uVar11 = 0;
      pbVar12 = pbVar1;
      if (iVar13 != 0) {
        do {
          uVar9 = 0x10;
          pbVar10 = param_3;
          pbVar7 = pbVar12;
          do {
            if (*(int *)pbVar7 != *(int *)pbVar10) goto LAB_100017b8;
            uVar9 = uVar9 - 4;
            pbVar10 = pbVar10 + 4;
            pbVar7 = pbVar7 + 4;
          } while (3 < uVar9);
          if (uVar9 == 0) {
LAB_10001815:
            iVar8 = 0;
          }
          else {
LAB_100017b8:
            iVar13 = (uint)*pbVar7 - (uint)*pbVar10;
            if (iVar13 == 0) {
              if (uVar9 == 1) goto LAB_10001815;
              iVar13 = (uint)pbVar7[1] - (uint)pbVar10[1];
              if (iVar13 == 0) {
                if (uVar9 == 2) goto LAB_10001815;
                iVar13 = (uint)pbVar7[2] - (uint)pbVar10[2];
                if (iVar13 == 0) {
                  if ((uVar9 == 3) || (iVar13 = (uint)pbVar7[3] - (uint)pbVar10[3], iVar13 == 0))
                  goto LAB_10001815;
                }
              }
            }
            iVar8 = 1;
            if (iVar13 < 1) {
              iVar8 = -1;
            }
          }
          if (iVar8 == 0) {
            param_4[4] = uVar11;
            pbVar1 = pbVar1 + uVar11 * 0x20;
            iVar13 = *(int *)(pbVar1 + 4);
            param_4[5] = *(int *)pbVar1;
            iVar8 = *(int *)(pbVar1 + 8);
            param_4[6] = iVar13;
            iVar13 = *(int *)(pbVar1 + 0xc);
            param_4[7] = iVar8;
            bVar3 = pbVar1[0x13];
            param_4[8] = iVar13;
            bVar4 = pbVar1[0x11];
            bVar5 = pbVar1[0x12];
            *(undefined1 *)(param_4 + 9) = 0;
            bVar6 = pbVar1[0x1b];
            param_4[10] = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar5),bVar4),pbVar1[0x10]);
            bVar3 = pbVar1[0x1a];
            *(undefined2 *)(param_4 + 0xb) = *(undefined2 *)(pbVar1 + 0x14);
            bVar4 = pbVar1[0x1d];
            param_4[0xc] = CONCAT31(CONCAT21(CONCAT11(bVar6,bVar3),pbVar1[0x19]),pbVar1[0x18]);
            param_4[0xd] = CONCAT31(CONCAT21(*(undefined2 *)(pbVar1 + 0x1e),bVar4),pbVar1[0x1c]);
            return 0;
          }
          uVar11 = uVar11 + 1;
          pbVar12 = pbVar12 + 0x20;
        } while (uVar11 < (uint)param_4[3]);
      }
      return 0xd6;
    }
  }
  return 0xd5;
}



/**************************************************/

/* Function: FUN_100018d0 @ 100018d0 */

undefined4 __thiscall FUN_100018d0(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *in_EAX;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  
  if (*(int *)(*in_EAX + 0xc) != param_2) {
    return 0xd2;
  }
  pbVar6 = (byte *)(param_3[0xd] + *param_3);
  *param_1 = (int)pbVar6;
  uVar8 = 8;
  pbVar4 = (byte *)&DAT_1002a2b4;
  pbVar7 = pbVar6;
  do {
    if (*(int *)pbVar7 != *(int *)pbVar4) goto LAB_10001938;
    uVar8 = uVar8 - 4;
    pbVar4 = pbVar4 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar8);
  if (uVar8 == 0) {
LAB_10001995:
    iVar5 = 0;
  }
  else {
LAB_10001938:
    iVar10 = (uint)*pbVar7 - (uint)*pbVar4;
    if (iVar10 == 0) {
      if (uVar8 == 1) goto LAB_10001995;
      iVar10 = (uint)pbVar7[1] - (uint)pbVar4[1];
      if (iVar10 == 0) {
        if (uVar8 == 2) goto LAB_10001995;
        iVar10 = (uint)pbVar7[2] - (uint)pbVar4[2];
        if (iVar10 == 0) {
          if ((uVar8 == 3) || (iVar10 = (uint)pbVar7[3] - (uint)pbVar4[3], iVar10 == 0))
          goto LAB_10001995;
        }
      }
    }
    iVar5 = 1;
    if (iVar10 < 1) {
      iVar5 = -1;
    }
  }
  if (iVar5 != 0) {
    return 0xd8;
  }
  if (*(int *)(pbVar6 + 8) != 0x20000) {
    return 0xd8;
  }
  if (*(int *)(pbVar6 + 0xc) != param_3[0xc]) {
    return 0xd7;
  }
  pbVar7 = pbVar6 + *(int *)(pbVar6 + 0xc) + -0x10;
  param_1[9] = (int)pbVar7;
  uVar8 = 8;
  pbVar4 = pbVar6;
  pbVar9 = pbVar7;
  do {
    if (*(int *)pbVar9 != *(int *)pbVar4) goto LAB_10001a38;
    uVar8 = uVar8 - 4;
    pbVar4 = pbVar4 + 4;
    pbVar9 = pbVar9 + 4;
  } while (3 < uVar8);
  if (uVar8 == 0) {
LAB_10001a9d:
    iVar5 = 0;
  }
  else {
LAB_10001a38:
    iVar10 = (uint)*pbVar9 - (uint)*pbVar4;
    if (iVar10 == 0) {
      if (uVar8 == 1) goto LAB_10001a9d;
      iVar10 = (uint)pbVar9[1] - (uint)pbVar4[1];
      if (iVar10 == 0) {
        if (uVar8 == 2) goto LAB_10001a9d;
        iVar10 = (uint)pbVar9[2] - (uint)pbVar4[2];
        if (iVar10 == 0) {
          if ((uVar8 == 3) || (iVar10 = (uint)pbVar9[3] - (uint)pbVar4[3], iVar10 == 0))
          goto LAB_10001a9d;
        }
      }
    }
    iVar5 = 1;
    if (iVar10 < 1) {
      iVar5 = -1;
    }
  }
  if (iVar5 != 0) {
    return 0xd8;
  }
  if (*(int *)(pbVar7 + 8) != -1) {
    return 0xd8;
  }
  uVar8 = 4;
  pbVar4 = (byte *)&DAT_1002a2c0;
  pbVar7 = pbVar7 + 0xc;
  do {
    if (*(int *)pbVar7 != *(int *)pbVar4) goto LAB_10001aef;
    uVar8 = uVar8 - 4;
    pbVar4 = pbVar4 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar8);
  if (uVar8 == 0) {
LAB_10001b4c:
    iVar5 = 0;
  }
  else {
LAB_10001aef:
    iVar10 = (uint)*pbVar7 - (uint)*pbVar4;
    if (iVar10 == 0) {
      if (uVar8 == 1) goto LAB_10001b4c;
      iVar10 = (uint)pbVar7[1] - (uint)pbVar4[1];
      if (iVar10 == 0) {
        if (uVar8 == 2) goto LAB_10001b4c;
        iVar10 = (uint)pbVar7[2] - (uint)pbVar4[2];
        if (iVar10 == 0) {
          if ((uVar8 == 3) || (iVar10 = (uint)pbVar7[3] - (uint)pbVar4[3], iVar10 == 0))
          goto LAB_10001b4c;
        }
      }
    }
    iVar5 = 1;
    if (iVar10 < 1) {
      iVar5 = -1;
    }
  }
  if (iVar5 != 0) {
    return 0xd8;
  }
  bVar1 = pbVar6[0x23];
  bVar2 = pbVar6[0x21];
  param_1[1] = (int)(pbVar6 + 0x20);
  bVar3 = pbVar6[0x22];
  param_1[2] = (int)(pbVar6 + 0x30);
  iVar10 = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar3),bVar2),pbVar6[0x20]);
  param_1[10] = iVar10;
  pbVar6 = pbVar6 + 0x30 + iVar10 * 0x10;
  bVar1 = pbVar6[1];
  bVar2 = pbVar6[3];
  param_1[3] = (int)pbVar6;
  param_1[4] = (int)(pbVar6 + 0x10);
  iVar10 = CONCAT31(CONCAT21(CONCAT11(bVar2,pbVar6[2]),bVar1),*pbVar6);
  param_1[0xb] = iVar10;
  iVar10 = iVar10 * 0x10;
  bVar1 = pbVar6[iVar10 + 0x11];
  pbVar6 = pbVar6 + 0x10 + iVar10;
  bVar2 = pbVar6[3];
  param_1[5] = (int)pbVar6;
  param_1[6] = (int)(pbVar6 + 0x10);
  iVar10 = CONCAT31(CONCAT21(CONCAT11(bVar2,pbVar6[2]),bVar1),*pbVar6);
  param_1[0xc] = iVar10;
  pbVar6 = pbVar6 + 0x10 + iVar10 * 0x20;
  bVar1 = pbVar6[1];
  param_1[7] = (int)pbVar6;
  param_1[8] = (int)(pbVar6 + 0x10);
  param_1[0xd] = (uint)CONCAT11(bVar1,*pbVar6);
  return 0;
}



/**************************************************/

/* Function: FUN_10001c00 @ 10001c00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001c00(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  if (((((((_DAT_1002a390 <= *(double *)(unaff_ESI + 8)) &&
          (*(double *)(unaff_ESI + 8) <= _DAT_1002a388)) &&
         (*(uint *)(unaff_ESI + 0x10) <= *(int *)(param_1 + 0x30) - 1U)) &&
        ((iVar1 = FUN_100226b0(), -1 < iVar1 && (iVar1 < 0x3e9)))) &&
       ((iVar1 = FUN_100226b0(), -1 < iVar1 &&
        ((iVar1 < 0x3e9 && (iVar1 = FUN_100226b0(), -1 < iVar1)))))) && (iVar1 < 0x3e9)) &&
     (((((iVar1 = FUN_100226b0(), -1 < iVar1 && (iVar1 < 0x3e9)) &&
        (iVar1 = FUN_100226b0(), -1 < iVar1)) &&
       (((iVar1 < 0x3e9 && (iVar1 = FUN_100226b0(), iVar1 == 0)) &&
        ((*(double *)(unaff_ESI + 0x28) < *(double *)(unaff_ESI + 0x18) ==
          (*(double *)(unaff_ESI + 0x28) == *(double *)(unaff_ESI + 0x18)) &&
         ((*(double *)(unaff_ESI + 0x38) < *(double *)(unaff_ESI + 0x28) ==
           (*(double *)(unaff_ESI + 0x38) == *(double *)(unaff_ESI + 0x28)) &&
          (*(double *)(unaff_ESI + 0x48) < *(double *)(unaff_ESI + 0x38) ==
           (*(double *)(unaff_ESI + 0x48) == *(double *)(unaff_ESI + 0x38)))))))))) &&
      ((*(double *)(unaff_ESI + 0x58) < *(double *)(unaff_ESI + 0x48) ==
        (*(double *)(unaff_ESI + 0x58) == *(double *)(unaff_ESI + 0x48)) &&
       (iVar1 = FUN_100226b0(), iVar1 == 1000)))))) {
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10001d20 @ 10001d20 */

undefined4 FUN_10001d20(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_100226b0();
  if (((((((((0xe < iVar1) && (iVar1 < 0xa1)) && (-1 < *(int *)(unaff_ESI + 0x18))) &&
          ((*(int *)(unaff_ESI + 0x18) < 0x65 && (-1 < *(int *)(unaff_ESI + 0x28))))) &&
         ((*(int *)(unaff_ESI + 0x28) < 1 &&
          ((-1 < *(int *)(unaff_ESI + 0x38) && (*(int *)(unaff_ESI + 0x38) < 0x191)))))) &&
        (iVar1 = FUN_100226b0(), -1 < iVar1)) &&
       ((((iVar1 < 0x9f7 && (*(double *)(unaff_ESI + 0x20) <= *(double *)(unaff_ESI + 0x30))) &&
         (*(double *)(unaff_ESI + 0x30) <= *(double *)(unaff_ESI + 0x40))) &&
        (((iVar1 = FUN_100226b0(), -1 < iVar1 && (iVar1 < 0x9f7)) &&
         ((-1 < *(int *)(unaff_ESI + 0x5ff0) &&
          ((*(int *)(unaff_ESI + 0x5ff0) < 0x65 && (-1 < *(int *)(unaff_ESI + 0x6000))))))))))) &&
      (((*(int *)(unaff_ESI + 0x6000) < 1 &&
        (((-1 < *(int *)(unaff_ESI + 0x6010) && (*(int *)(unaff_ESI + 0x6010) < 0x191)) &&
         (iVar1 = FUN_100226b0(), -1 < iVar1)))) &&
       (((iVar1 < 0x9f7 && (*(double *)(unaff_ESI + 0x5ff8) <= *(double *)(unaff_ESI + 0x6008))) &&
        (((*(double *)(unaff_ESI + 0x6008) <= *(double *)(unaff_ESI + 0x6018) &&
          ((iVar1 = FUN_100226b0(), -1 < iVar1 && (iVar1 < 0x9f7)))) &&
         (-1 < *(int *)(unaff_ESI + 0xbfc8))))))))) &&
     (((((((*(int *)(unaff_ESI + 0xbfc8) < 0x65 && (-1 < *(int *)(unaff_ESI + 0xbfd8))) &&
          (*(int *)(unaff_ESI + 0xbfd8) < 1)) &&
         ((-1 < *(int *)(unaff_ESI + 0xbfe8) && (*(int *)(unaff_ESI + 0xbfe8) < 0x191)))) &&
        ((iVar1 = FUN_100226b0(), -1 < iVar1 &&
         ((iVar1 < 0x9f7 && (*(double *)(unaff_ESI + 0xbfd0) <= *(double *)(unaff_ESI + 0xbfe0))))))
        ) && (*(double *)(unaff_ESI + 0xbfe0) <= *(double *)(unaff_ESI + 0xbff0))) &&
      ((iVar1 = FUN_100226b0(), -1 < iVar1 && (iVar1 < 0x9f7)))))) {
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: FUN_10001f20 @ 10001f20 */

void FUN_10001f20(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  *(undefined4 *)(in_EAX + 0x1558) = 0;
  *(undefined4 *)(in_EAX + 0x1554) = 0;
  *(undefined4 *)(in_EAX + 0x1550) = 0;
  *(undefined4 *)(in_EAX + 0x154c) = 0;
  iVar7 = in_EAX + 0x1115;
  local_8 = 0x21;
  iVar3 = -0x10;
  do {
    piVar1 = (int *)(in_EAX * -3 + -0x4414 + iVar7 * 4 + iVar3 * 4);
    bVar5 = 0;
    if (*piVar1 != 0) {
      bVar5 = 1;
      if (iVar3 == -0x10) {
        bVar5 = 3;
LAB_10001fca:
        if (*(int *)(in_EAX + (iVar7 + (-0x1104 - in_EAX) + iVar3) * 4) != 0) goto LAB_10001fd8;
      }
      else {
        if (*(int *)(in_EAX + 0x87c + ((-0x1325 - in_EAX) + iVar7 + iVar3) * 4) == 0) {
          bVar5 = 3;
        }
        if (iVar3 != 0x10) goto LAB_10001fca;
      }
      bVar5 = bVar5 | 4;
    }
LAB_10001fd8:
    *(byte *)(iVar7 + -1 + iVar3) = bVar5;
    piVar2 = (int *)(in_EAX + (iVar7 + (-0x1104 - in_EAX) + iVar3) * 4);
    bVar5 = 0;
    if (*piVar2 != 0) {
      bVar5 = 1;
      if ((iVar3 == -0x11) || (*piVar1 == 0)) {
        bVar5 = 3;
      }
      if ((iVar3 == 0xf) || (*(int *)(in_EAX + ((-0x1103 - in_EAX) + iVar7 + iVar3) * 4) == 0)) {
        bVar5 = bVar5 | 4;
      }
    }
    *(byte *)(iVar7 + iVar3) = bVar5;
    bVar5 = 0;
    if (*(int *)(in_EAX + ((-0x1103 - in_EAX) + iVar7 + iVar3) * 4) != 0) {
      bVar5 = 1;
      if ((iVar3 == -0x12) || (*piVar2 == 0)) {
        bVar5 = 3;
      }
      if ((iVar3 == 0xe) ||
         (*(int *)(in_EAX + 0x88c + ((-0x1325 - in_EAX) + iVar7 + iVar3) * 4) == 0)) {
        bVar5 = bVar5 | 4;
      }
    }
    *(byte *)(iVar7 + 1 + iVar3) = bVar5;
    iVar3 = iVar3 + 3;
    if (0x10 < iVar3) {
      iVar7 = iVar7 + 0x21;
      local_8 = local_8 + -1;
      if (local_8 == 0) {
        *(undefined4 *)(in_EAX + 0x155c) = 0;
        *(undefined4 *)(in_EAX + 0x1548) = 0;
        iVar3 = in_EAX + 0x1115;
        iVar4 = -0x10;
        iVar7 = 0x10;
        iVar8 = -0x210;
        do {
          iVar6 = -0x10;
          do {
            if ((*(byte *)(iVar6 + -1 + iVar3) & 1) != 0) {
              *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
              *(int *)(in_EAX + 0x1548) =
                   *(int *)(in_EAX + 0x1548) + *(int *)(in_EAX + 0x880 + (iVar8 + iVar6) * 4);
              if (iVar4 < -*(int *)(in_EAX + 0x154c)) {
                *(int *)(in_EAX + 0x154c) = iVar7;
              }
              if (*(int *)(in_EAX + 0x1550) < iVar4) {
                *(int *)(in_EAX + 0x1550) = iVar4;
              }
              if (iVar4 < -*(int *)(in_EAX + 0x1554)) {
                *(int *)(in_EAX + 0x1554) = iVar7;
              }
              if (*(int *)(in_EAX + 0x1558) < iVar4) {
                *(int *)(in_EAX + 0x1558) = iVar4;
              }
            }
            if ((*(byte *)(iVar6 + iVar3) & 1) != 0) {
              *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
              *(int *)(in_EAX + 0x1548) =
                   *(int *)(in_EAX + 0x1548) + *(int *)(in_EAX + 0x884 + (iVar8 + iVar6) * 4);
              if (iVar4 < -*(int *)(in_EAX + 0x154c)) {
                *(int *)(in_EAX + 0x154c) = iVar7;
              }
              if (*(int *)(in_EAX + 0x1550) < iVar4) {
                *(int *)(in_EAX + 0x1550) = iVar4;
              }
              if (iVar4 < -*(int *)(in_EAX + 0x1554)) {
                *(int *)(in_EAX + 0x1554) = iVar7;
              }
              if (*(int *)(in_EAX + 0x1558) < iVar4) {
                *(int *)(in_EAX + 0x1558) = iVar4;
              }
            }
            if ((*(byte *)(iVar6 + 1 + iVar3) & 1) != 0) {
              *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
              *(int *)(in_EAX + 0x1548) =
                   *(int *)(in_EAX + 0x1548) + *(int *)(in_EAX + 0x888 + (iVar8 + iVar6) * 4);
              if (iVar4 < -*(int *)(in_EAX + 0x154c)) {
                *(int *)(in_EAX + 0x154c) = iVar7;
              }
              if (*(int *)(in_EAX + 0x1550) < iVar4) {
                *(int *)(in_EAX + 0x1550) = iVar4;
              }
              if (iVar4 < -*(int *)(in_EAX + 0x1554)) {
                *(int *)(in_EAX + 0x1554) = iVar7;
              }
              if (*(int *)(in_EAX + 0x1558) < iVar4) {
                *(int *)(in_EAX + 0x1558) = iVar4;
              }
            }
            iVar6 = iVar6 + 3;
          } while (iVar6 < 0x11);
          iVar8 = iVar8 + 0x21;
          iVar3 = iVar3 + 0x21;
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar8 < 0x211);
        return;
      }
      iVar3 = -0x10;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_10002210 @ 10002210 */

void FUN_10002210(void)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  byte *local_c;
  int local_8;
  
  *(undefined4 *)(in_EAX + 0x155c) = 0;
  *(undefined4 *)(in_EAX + 0x6a88) = 0;
  *(undefined4 *)(in_EAX + 0xbfb4) = 0;
  *(undefined4 *)(in_EAX + 0x114e0) = 0;
  iVar4 = -0x10;
  puVar5 = (undefined4 *)(in_EAX + 4);
  local_c = (byte *)(in_EAX + 0x1105);
  do {
    local_8 = -0xe;
    do {
      bVar2 = local_c[-1];
      uVar3 = puVar5[-1];
      if ((bVar2 & 1) != 0) {
        iVar1 = local_8 + -2;
        *(int *)(in_EAX + (*(int *)(in_EAX + 0x155c) + 0x1c8) * 0xc) = iVar1;
        *(int *)(in_EAX + 0x1564 + *(int *)(in_EAX + 0x155c) * 0xc) = iVar4;
        *(undefined4 *)(in_EAX + 0x1568 + *(int *)(in_EAX + 0x155c) * 0xc) = uVar3;
        *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
        if ((bVar2 & 4) == 0) {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0x6a88) + 0x8e1) * 0xc) = iVar1;
          *(int *)(in_EAX + 0x6a90 + *(int *)(in_EAX + 0x6a88) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0x6a94 + *(int *)(in_EAX + 0x6a88) * 0xc) = uVar3;
          *(int *)(in_EAX + 0x6a88) = *(int *)(in_EAX + 0x6a88) + 1;
        }
        else {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0xbfb4) + 0xffa) * 0xc) = iVar1;
          *(int *)(in_EAX + 0xbfbc + *(int *)(in_EAX + 0xbfb4) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0xbfc0 + *(int *)(in_EAX + 0xbfb4) * 0xc) = uVar3;
          *(int *)(in_EAX + 0xbfb4) = *(int *)(in_EAX + 0xbfb4) + 1;
        }
        if ((bVar2 & 2) != 0) {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0x114e0) + 0x1713) * 0xc) = iVar1;
          *(int *)(in_EAX + 0x114e8 + *(int *)(in_EAX + 0x114e0) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0x114ec + *(int *)(in_EAX + 0x114e0) * 0xc) = uVar3;
          *(int *)(in_EAX + 0x114e0) = *(int *)(in_EAX + 0x114e0) + 1;
        }
      }
      uVar3 = *puVar5;
      bVar2 = *local_c;
      if ((bVar2 & 1) != 0) {
        iVar1 = local_8 + -1;
        *(int *)(in_EAX + (*(int *)(in_EAX + 0x155c) + 0x1c8) * 0xc) = iVar1;
        *(int *)(in_EAX + 0x1564 + *(int *)(in_EAX + 0x155c) * 0xc) = iVar4;
        *(undefined4 *)(in_EAX + 0x1568 + *(int *)(in_EAX + 0x155c) * 0xc) = uVar3;
        *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
        if ((bVar2 & 4) == 0) {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0x6a88) + 0x8e1) * 0xc) = iVar1;
          *(int *)(in_EAX + 0x6a90 + *(int *)(in_EAX + 0x6a88) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0x6a94 + *(int *)(in_EAX + 0x6a88) * 0xc) = uVar3;
          *(int *)(in_EAX + 0x6a88) = *(int *)(in_EAX + 0x6a88) + 1;
        }
        else {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0xbfb4) + 0xffa) * 0xc) = iVar1;
          *(int *)(in_EAX + 0xbfbc + *(int *)(in_EAX + 0xbfb4) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0xbfc0 + *(int *)(in_EAX + 0xbfb4) * 0xc) = uVar3;
          *(int *)(in_EAX + 0xbfb4) = *(int *)(in_EAX + 0xbfb4) + 1;
        }
        if ((bVar2 & 2) != 0) {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0x114e0) + 0x1713) * 0xc) = iVar1;
          *(int *)(in_EAX + 0x114e8 + *(int *)(in_EAX + 0x114e0) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0x114ec + *(int *)(in_EAX + 0x114e0) * 0xc) = uVar3;
          *(int *)(in_EAX + 0x114e0) = *(int *)(in_EAX + 0x114e0) + 1;
        }
      }
      uVar3 = puVar5[1];
      bVar2 = local_c[1];
      if ((bVar2 & 1) != 0) {
        *(int *)(in_EAX + (*(int *)(in_EAX + 0x155c) + 0x1c8) * 0xc) = local_8;
        *(int *)(in_EAX + 0x1564 + *(int *)(in_EAX + 0x155c) * 0xc) = iVar4;
        *(undefined4 *)(in_EAX + 0x1568 + *(int *)(in_EAX + 0x155c) * 0xc) = uVar3;
        *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
        if ((bVar2 & 4) == 0) {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0x6a88) + 0x8e1) * 0xc) = local_8;
          *(int *)(in_EAX + 0x6a90 + *(int *)(in_EAX + 0x6a88) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0x6a94 + *(int *)(in_EAX + 0x6a88) * 0xc) = uVar3;
          *(int *)(in_EAX + 0x6a88) = *(int *)(in_EAX + 0x6a88) + 1;
        }
        else {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0xbfb4) + 0xffa) * 0xc) = local_8;
          *(int *)(in_EAX + 0xbfbc + *(int *)(in_EAX + 0xbfb4) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0xbfc0 + *(int *)(in_EAX + 0xbfb4) * 0xc) = uVar3;
          *(int *)(in_EAX + 0xbfb4) = *(int *)(in_EAX + 0xbfb4) + 1;
        }
        if ((bVar2 & 2) != 0) {
          *(int *)(in_EAX + (*(int *)(in_EAX + 0x114e0) + 0x1713) * 0xc) = local_8;
          *(int *)(in_EAX + 0x114e8 + *(int *)(in_EAX + 0x114e0) * 0xc) = iVar4;
          *(undefined4 *)(in_EAX + 0x114ec + *(int *)(in_EAX + 0x114e0) * 0xc) = uVar3;
          *(int *)(in_EAX + 0x114e0) = *(int *)(in_EAX + 0x114e0) + 1;
        }
      }
      local_c = local_c + 3;
      puVar5 = puVar5 + 3;
      iVar1 = local_8 + 1;
      local_8 = local_8 + 3;
    } while (iVar1 < 0x11);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x11);
  *(undefined4 *)(in_EAX + 0x1568 + *(int *)(in_EAX + 0x155c) * 0xc) = 0;
  *(undefined4 *)(in_EAX + 0xbfc0 + *(int *)(in_EAX + 0xbfb4) * 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x6a94 + *(int *)(in_EAX + 0x6a88) * 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x114ec + *(int *)(in_EAX + 0x114e0) * 0xc) = 0;
  return;
}



/**************************************************/

/* Function: FUN_10002600 @ 10002600 */

void FUN_10002600(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  puVar2 = unaff_ESI;
  for (iVar1 = 0x441; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_100226b0();
  unaff_ESI[iVar1 * -0x21 + 0x220] = 1;
  unaff_ESI[iVar1 * 0x21 + 0x220] = 1;
  unaff_ESI[0x220 - iVar1] = 1;
  unaff_ESI[iVar1 + 0x220] = 1;
  FUN_10022760();
  iVar1 = FUN_100226b0();
  unaff_ESI[iVar1 * -0x22 + 0x220] = 1;
  unaff_ESI[iVar1 * 0x22 + 0x220] = 1;
  unaff_ESI[iVar1 * 0x20 + 0x220] = 1;
  unaff_ESI[iVar1 * -0x20 + 0x220] = 1;
  FUN_10001f20();
  FUN_10002210();
  return;
}



/**************************************************/

/* Function: FUN_100026a0 @ 100026a0 */

void FUN_100026a0(uint *param_1,double param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -0x10;
  do {
    iVar2 = -0x10;
    do {
      dVar1 = (double)(iVar2 * iVar2 + iVar3 * iVar3);
      *param_1 = (uint)(dVar1 < param_2 * param_2 != (dVar1 == param_2 * param_2));
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 < 0x11);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x11);
  FUN_10001f20();
  FUN_10002210();
  return;
}



/**************************************************/

/* Function: FUN_10002710 @ 10002710 */

void FUN_10002710(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  puVar2 = unaff_ESI;
  for (iVar1 = 0x441; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_100226b0();
  unaff_ESI[iVar1 * -0x21 + 0x220] = 1;
  unaff_ESI[iVar1 * 0x21 + 0x220] = 1;
  unaff_ESI[0x220 - iVar1] = 1;
  unaff_ESI[iVar1 + 0x220] = 1;
  FUN_10001f20();
  FUN_10002210();
  return;
}



/**************************************************/

/* Function: FUN_10002770 @ 10002770 */

void FUN_10002770(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  puVar2 = unaff_ESI;
  for (iVar1 = 0x441; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_10022760();
  iVar1 = FUN_100226b0();
  unaff_ESI[iVar1 * -0x22 + 0x220] = 1;
  unaff_ESI[iVar1 * 0x22 + 0x220] = 1;
  unaff_ESI[iVar1 * 0x20 + 0x220] = 1;
  unaff_ESI[iVar1 * -0x20 + 0x220] = 1;
  FUN_10001f20();
  FUN_10002210();
  return;
}



/**************************************************/

/* Function: FUN_100027e0 @ 100027e0 */

void __fastcall FUN_100027e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x155c)) {
    piVar2 = (int *)(unaff_ESI + 0x4878);
    piVar3 = (int *)(unaff_ESI + 0x1564);
    do {
      *piVar2 = ((int)((uint)*(byte *)(param_1 + 0x15) * (uint)*(byte *)(param_1 + 0x14)) >> 3) *
                piVar3[-1] + *piVar3 * *(int *)(param_1 + 4);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar1 < *(int *)(unaff_ESI + 0x155c));
  }
  *(undefined4 *)(unaff_ESI + 0x4878 + iVar1 * 4) = 0x80000000;
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x6a88)) {
    piVar2 = (int *)(unaff_ESI + 0x9da4);
    piVar3 = (int *)(unaff_ESI + 0x6a90);
    do {
      *piVar2 = ((int)((uint)*(byte *)(param_1 + 0x15) * (uint)*(byte *)(param_1 + 0x14)) >> 3) *
                piVar3[-1] + *piVar3 * *(int *)(param_1 + 4);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar1 < *(int *)(unaff_ESI + 0x6a88));
  }
  *(undefined4 *)(unaff_ESI + 0x9da4 + iVar1 * 4) = 0x80000000;
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0xbfb4)) {
    piVar2 = (int *)(unaff_ESI + 0xf2d0);
    piVar3 = (int *)(unaff_ESI + 0xbfbc);
    do {
      *piVar2 = ((int)((uint)*(byte *)(param_1 + 0x15) * (uint)*(byte *)(param_1 + 0x14)) >> 3) *
                piVar3[-1] + *piVar3 * *(int *)(param_1 + 4);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar1 < *(int *)(unaff_ESI + 0xbfb4));
  }
  *(undefined4 *)(unaff_ESI + 0xf2d0 + iVar1 * 4) = 0x80000000;
  iVar1 = 0;
  if (*(int *)(unaff_ESI + 0x114e0) < 1) {
    *(undefined4 *)(unaff_ESI + 0x147fc) = 0x80000000;
    return;
  }
  piVar2 = (int *)(unaff_ESI + 0x147fc);
  piVar3 = (int *)(unaff_ESI + 0x114e8);
  do {
    *piVar2 = ((int)((uint)*(byte *)(param_1 + 0x15) * (uint)*(byte *)(param_1 + 0x14)) >> 3) *
              piVar3[-1] + *piVar3 * *(int *)(param_1 + 4);
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar1 < *(int *)(unaff_ESI + 0x114e0));
  *(undefined4 *)(unaff_ESI + 0x147fc + iVar1 * 4) = 0x80000000;
  return;
}



/**************************************************/

/* Function: FUN_10002970 @ 10002970 */

void __fastcall
FUN_10002970(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  param_4 = (param_1 - *(int *)(param_2 + 8) * *(int *)(param_2 + 4)) - param_4;
  if (param_6 < *(int *)(param_5 + 0x1c)) {
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 0x155c)) {
      piVar1 = (int *)(param_3 + 0x5980);
      piVar3 = (int *)(param_3 + 0x1564);
      do {
        *piVar1 = piVar1[-0x442];
        if (*(int *)(param_5 + 0x1c) <= *piVar3 + param_6) {
          *piVar1 = piVar1[-0x442] + param_4;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar2 < *(int *)(param_3 + 0x155c));
    }
    *(undefined4 *)(param_3 + 0x5980 + iVar2 * 4) = 0x80000000;
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 0x6a88)) {
      piVar1 = (int *)(param_3 + 0xaeac);
      piVar3 = (int *)(param_3 + 0x6a90);
      do {
        *piVar1 = piVar1[-0x442];
        if (*(int *)(param_5 + 0x1c) <= *piVar3 + param_6) {
          *piVar1 = piVar1[-0x442] + param_4;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar2 < *(int *)(param_3 + 0x6a88));
    }
    *(undefined4 *)(param_3 + 0xaeac + iVar2 * 4) = 0x80000000;
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 0xbfb4)) {
      piVar1 = (int *)(param_3 + 0x103d8);
      piVar3 = (int *)(param_3 + 0xbfbc);
      do {
        *piVar1 = piVar1[-0x442];
        if (*(int *)(param_5 + 0x1c) <= *piVar3 + param_6) {
          *piVar1 = piVar1[-0x442] + param_4;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar2 < *(int *)(param_3 + 0xbfb4));
    }
    *(undefined4 *)(param_3 + 0x103d8 + iVar2 * 4) = 0x80000000;
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 0x114e0)) {
      piVar1 = (int *)(param_3 + 0x15904);
      piVar3 = (int *)(param_3 + 0x114e8);
      do {
        *piVar1 = piVar1[-0x442];
        if (*(int *)(param_5 + 0x1c) <= *piVar3 + param_6) {
          *piVar1 = piVar1[-0x442] + param_4;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar2 < *(int *)(param_3 + 0x114e0));
    }
    *(undefined4 *)(param_3 + 0x15904 + iVar2 * 4) = 0x80000000;
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 0x155c)) {
    piVar1 = (int *)(param_3 + 0x5980);
    piVar3 = (int *)(param_3 + 0x1564);
    do {
      *piVar1 = piVar1[-0x442];
      if (*piVar3 + param_6 < *(int *)(param_5 + 0x1c)) {
        *piVar1 = piVar1[-0x442] - param_4;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)(param_3 + 0x155c));
  }
  *(undefined4 *)(param_3 + 0x5980 + iVar2 * 4) = 0x80000000;
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 0x6a88)) {
    piVar1 = (int *)(param_3 + 0xaeac);
    piVar3 = (int *)(param_3 + 0x6a90);
    do {
      *piVar1 = piVar1[-0x442];
      if (*piVar3 + param_6 < *(int *)(param_5 + 0x1c)) {
        *piVar1 = piVar1[-0x442] - param_4;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)(param_3 + 0x6a88));
  }
  *(undefined4 *)(param_3 + 0xaeac + iVar2 * 4) = 0x80000000;
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 0xbfb4)) {
    piVar1 = (int *)(param_3 + 0x103d8);
    piVar3 = (int *)(param_3 + 0xbfbc);
    do {
      *piVar1 = piVar1[-0x442];
      if (*piVar3 + param_6 < *(int *)(param_5 + 0x1c)) {
        *piVar1 = piVar1[-0x442] - param_4;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)(param_3 + 0xbfb4));
  }
  *(undefined4 *)(param_3 + 0x103d8 + iVar2 * 4) = 0x80000000;
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 0x114e0)) {
    piVar1 = (int *)(param_3 + 0x15904);
    piVar3 = (int *)(param_3 + 0x114e8);
    do {
      *piVar1 = piVar1[-0x442];
      if (*piVar3 + param_6 < *(int *)(param_5 + 0x1c)) {
        *piVar1 = piVar1[-0x442] - param_4;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)(param_3 + 0x114e0));
  }
  *(undefined4 *)(param_3 + 0x15904 + iVar2 * 4) = 0x80000000;
  return;
}



/**************************************************/

/* Function: FUN_10002c30 @ 10002c30 */

void FUN_10002c30(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int local_1c;
  int local_14;
  undefined1 *local_c;
  uint local_8;
  uint local_4;
  
  iVar11 = param_2[7];
  if (iVar11 < param_2[2] + iVar11) {
    iVar8 = param_2[6];
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      bVar1 = *(byte *)(iVar3 + 0x14);
      bVar2 = *(byte *)(iVar3 + 0x15);
      iVar4 = *(int *)(param_1 + 0xc);
      iVar9 = iVar8 - *(int *)(iVar3 + 0x18);
      iVar5 = *(int *)(iVar3 + 0x1c);
      iVar3 = *(int *)(iVar3 + 4);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar11 < *(int *)(iVar4 + 0x1c)) {
        pbVar12 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                           >> 3) * (iVar8 - *(int *)(param_1 + 0x58)) +
                           (iVar11 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                          *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar12 = (byte *)(((int)((uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x14)) >>
                           3) * (iVar8 - *(int *)(iVar4 + 0x18)) +
                           (iVar11 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) +
                          *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x1c),iVar4,iVar11);
      iVar8 = param_2[6];
      local_1c = iVar8;
      local_c = (undefined1 *)
                (((int)((uint)bVar2 * (uint)bVar1) >> 3) * iVar9 + (iVar11 - iVar5) * iVar3 + iVar6)
      ;
      if (iVar8 < *param_2 + iVar8) {
        do {
          iVar8 = *(int *)(param_1 + 0x5e28);
          local_8 = (uint)*pbVar12 * 100;
          local_14 = param_1 + 0x5e28;
          local_4 = 100;
          if (iVar8 != -0x80000000) {
            piVar7 = (int *)(param_1 + 0x1a0c);
            do {
              if ((((*(int *)(param_1 + 0x78) <= piVar7[-1] + local_1c) &&
                   (piVar7[-1] + local_1c < *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x78))) &&
                  (*(int *)(param_1 + 0x7c) <= *piVar7 + iVar11)) &&
                 (*piVar7 + iVar11 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x7c))) {
                uVar10 = (uint)*(byte *)((uint)(byte)(&DAT_100c03a8)
                                                     [(uint)pbVar12[iVar8] + (uint)*pbVar12 * 0x100]
                                         * 3 + 0x1a8 + param_1);
                local_8 = local_8 + pbVar12[iVar8] * uVar10;
                local_4 = local_4 + uVar10;
              }
              iVar8 = *(int *)(local_14 + 4);
              local_14 = local_14 + 4;
              piVar7 = piVar7 + 3;
            } while (iVar8 != -0x80000000);
          }
          pbVar12 = pbVar12 + 1;
          *local_c = (char)(local_8 / local_4);
          iVar8 = param_2[6];
          local_1c = local_1c + 1;
          local_c = local_c + 1;
        } while (local_1c < *param_2 + iVar8);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10002e40 @ 10002e40 */

void FUN_10002e40(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  int local_10;
  uint local_4;
  
  iVar9 = param_2[7];
  if (iVar9 < param_2[2] + iVar9) {
    iVar10 = param_2[6];
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      bVar1 = *(byte *)(iVar3 + 0x14);
      bVar2 = *(byte *)(iVar3 + 0x15);
      iVar7 = iVar10 - *(int *)(iVar3 + 0x18);
      iVar4 = *(int *)(iVar3 + 0x1c);
      iVar3 = *(int *)(iVar3 + 4);
      iVar5 = *(int *)(param_1 + 0xc);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar9 < *(int *)(iVar5 + 0x1c)) {
        pbVar14 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                           >> 3) * (iVar10 - *(int *)(param_1 + 0x58)) +
                           (iVar9 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                          *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar14 = (byte *)(((int)((uint)*(byte *)(iVar5 + 0x15) * (uint)*(byte *)(iVar5 + 0x14)) >>
                           3) * (iVar10 - *(int *)(iVar5 + 0x18)) +
                           (iVar9 - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 4) +
                          *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x1c),iVar5,iVar9);
      iVar10 = param_2[6];
      puVar13 = (undefined1 *)
                (((int)((uint)bVar2 * (uint)bVar1) >> 3) * iVar7 + (iVar9 - iVar4) * iVar3 + iVar6);
      local_10 = iVar10;
      if (iVar10 < *param_2 + iVar10) {
        do {
          iVar10 = *(int *)(param_1 + 0x5e28);
          uVar8 = (uint)*pbVar14 * 100;
          local_4 = 100;
          if (iVar10 != -0x80000000) {
            piVar12 = (int *)(param_1 + 0x5e28);
            do {
              uVar11 = (uint)*(byte *)((uint)(byte)(&DAT_100c03a8)
                                                   [(uint)*pbVar14 * 0x100 + (uint)pbVar14[iVar10]]
                                       * 3 + 0x1a8 + param_1);
              local_4 = local_4 + uVar11;
              piVar12 = piVar12 + 1;
              uVar8 = uVar8 + pbVar14[iVar10] * uVar11;
              iVar10 = *piVar12;
            } while (iVar10 != -0x80000000);
          }
          pbVar14 = pbVar14 + 1;
          *puVar13 = (char)(uVar8 / local_4);
          iVar10 = param_2[6];
          local_10 = local_10 + 1;
          puVar13 = puVar13 + 1;
        } while (local_10 < *param_2 + iVar10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10003000 @ 10003000 */

void FUN_10003000(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  int local_1c;
  int local_14;
  undefined2 *local_c;
  uint local_8;
  uint local_4;
  
  iVar11 = param_2[7];
  if (iVar11 < param_2[2] + iVar11) {
    iVar8 = param_2[6];
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      bVar1 = *(byte *)(iVar3 + 0x14);
      bVar2 = *(byte *)(iVar3 + 0x15);
      iVar4 = *(int *)(param_1 + 0xc);
      iVar9 = iVar8 - *(int *)(iVar3 + 0x18);
      iVar5 = *(int *)(iVar3 + 0x1c);
      iVar3 = *(int *)(iVar3 + 4);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar11 < *(int *)(iVar4 + 0x1c)) {
        puVar12 = (ushort *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar8 - *(int *)(param_1 + 0x58)) +
                   (iVar11 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar12 = (ushort *)
                  (((int)((uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x14)) >> 3) *
                   (iVar8 - *(int *)(iVar4 + 0x18)) +
                   (iVar11 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x1c),iVar4,iVar11);
      iVar8 = param_2[6];
      local_1c = iVar8;
      local_c = (undefined2 *)
                (((int)((uint)bVar2 * (uint)bVar1) >> 3) * iVar9 + (iVar11 - iVar5) * iVar3 + iVar6)
      ;
      if (iVar8 < *param_2 + iVar8) {
        do {
          iVar8 = *(int *)(param_1 + 0x5e28);
          local_8 = (uint)*puVar12 * 100;
          local_14 = param_1 + 0x5e28;
          local_4 = 100;
          if (iVar8 != -0x80000000) {
            piVar7 = (int *)(param_1 + 0x1a0c);
            do {
              if ((((*(int *)(param_1 + 0x78) <= piVar7[-1] + local_1c) &&
                   (piVar7[-1] + local_1c < *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x78))) &&
                  (*(int *)(param_1 + 0x7c) <= *piVar7 + iVar11)) &&
                 (*piVar7 + iVar11 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x7c))) {
                uVar10 = (uint)*(byte *)((uint)(byte)(&DAT_100c03a8)
                                                     [(uint)(*(ushort *)(iVar8 + (int)puVar12) >> 8)
                                                      + (uint)(*puVar12 >> 8) * 0x100] * 3 + 0x1a8 +
                                        param_1);
                local_8 = local_8 + *(ushort *)(iVar8 + (int)puVar12) * uVar10;
                local_4 = local_4 + uVar10;
              }
              iVar8 = *(int *)(local_14 + 4);
              local_14 = local_14 + 4;
              piVar7 = piVar7 + 3;
            } while (iVar8 != -0x80000000);
          }
          puVar12 = puVar12 + 1;
          *local_c = (short)(local_8 / local_4);
          iVar8 = param_2[6];
          local_1c = local_1c + 1;
          local_c = local_c + 1;
        } while (local_1c < *param_2 + iVar8);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10003220 @ 10003220 */

void FUN_10003220(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  ushort *puVar13;
  int *piVar14;
  int local_c;
  uint local_4;
  
  iVar9 = param_2[7];
  if (iVar9 < param_2[2] + iVar9) {
    iVar10 = param_2[6];
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      bVar1 = *(byte *)(iVar3 + 0x14);
      bVar2 = *(byte *)(iVar3 + 0x15);
      iVar7 = iVar10 - *(int *)(iVar3 + 0x18);
      iVar4 = *(int *)(iVar3 + 0x1c);
      iVar3 = *(int *)(iVar3 + 4);
      iVar5 = *(int *)(param_1 + 0xc);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar9 < *(int *)(iVar5 + 0x1c)) {
        puVar13 = (ushort *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar10 - *(int *)(param_1 + 0x58)) +
                   (iVar9 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar13 = (ushort *)
                  (((int)((uint)*(byte *)(iVar5 + 0x15) * (uint)*(byte *)(iVar5 + 0x14)) >> 3) *
                   (iVar10 - *(int *)(iVar5 + 0x18)) +
                   (iVar9 - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x1c),iVar5,iVar9);
      iVar10 = param_2[6];
      puVar12 = (undefined2 *)
                (((int)((uint)bVar2 * (uint)bVar1) >> 3) * iVar7 + (iVar9 - iVar4) * iVar3 + iVar6);
      local_c = iVar10;
      if (iVar10 < *param_2 + iVar10) {
        do {
          iVar10 = *(int *)(param_1 + 0x5e28);
          uVar8 = (uint)*puVar13 * 100;
          local_4 = 100;
          if (iVar10 != -0x80000000) {
            piVar14 = (int *)(param_1 + 0x5e28);
            do {
              uVar11 = (uint)*(byte *)((uint)(byte)(&DAT_100c03a8)
                                                   [(uint)(byte)(*puVar13 >> 8) * 0x100 +
                                                    (uint)(*(ushort *)(iVar10 + (int)puVar13) >> 8)]
                                       * 3 + 0x1a8 + param_1);
              local_4 = local_4 + uVar11;
              piVar14 = piVar14 + 1;
              uVar8 = uVar8 + *(ushort *)(iVar10 + (int)puVar13) * uVar11;
              iVar10 = *piVar14;
            } while (iVar10 != -0x80000000);
          }
          puVar13 = puVar13 + 1;
          *puVar12 = (short)(uVar8 / local_4);
          iVar10 = param_2[6];
          local_c = local_c + 1;
          puVar12 = puVar12 + 1;
        } while (local_c < *param_2 + iVar10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_100033f0 @ 100033f0 */

void FUN_100033f0(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  int *local_30;
  int local_2c;
  int local_1c;
  undefined1 *local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar12 = param_2[7];
  if (iVar12 < param_2[2] + iVar12) {
    iVar8 = param_2[6];
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      bVar1 = *(byte *)(iVar3 + 0x14);
      bVar2 = *(byte *)(iVar3 + 0x15);
      iVar4 = *(int *)(param_1 + 0xc);
      iVar9 = iVar8 - *(int *)(iVar3 + 0x18);
      iVar5 = *(int *)(iVar3 + 0x1c);
      iVar3 = *(int *)(iVar3 + 4);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar12 < *(int *)(iVar4 + 0x1c)) {
        pbVar13 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                           >> 3) * (iVar8 - *(int *)(param_1 + 0x58)) +
                           (iVar12 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                          *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar13 = (byte *)(((int)((uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x14)) >>
                           3) * (iVar8 - *(int *)(iVar4 + 0x18)) +
                           (iVar12 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) +
                          *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x1c),iVar4,iVar12);
      iVar8 = param_2[6];
      local_2c = iVar8;
      local_18 = (undefined1 *)
                 (((int)((uint)bVar2 * (uint)bVar1) >> 3) * iVar9 + (iVar12 - iVar5) * iVar3 + iVar6
                 );
      if (iVar8 < *param_2 + iVar8) {
        do {
          uVar7 = (uint)*pbVar13 * 100;
          uVar11 = (uint)pbVar13[1] * 100;
          iVar8 = *(int *)(param_1 + 0x5e28);
          local_8 = (uint)pbVar13[2] * 100;
          local_1c = param_1 + 0x5e28;
          local_4 = 100;
          if (iVar8 != -0x80000000) {
            local_30 = (int *)(param_1 + 0x1a0c);
            local_10 = uVar7;
            local_c = uVar11;
            do {
              if ((((*(int *)(param_1 + 0x78) <= local_30[-1] + local_2c) &&
                   (local_30[-1] + local_2c < *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x78)))
                  && (*(int *)(param_1 + 0x7c) <= *local_30 + iVar12)) &&
                 (*local_30 + iVar12 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x7c))) {
                uVar10 = (uint)*(byte *)((byte)(&DAT_100c03a8)
                                               [(uint)pbVar13[iVar8 + 2] + (uint)pbVar13[2] * 0x100]
                                         + 0x1a8 +
                                        (uint)(byte)(&DAT_100c03a8)
                                                    [(uint)pbVar13[iVar8 + 1] +
                                                     (uint)pbVar13[1] * 0x100] + param_1 +
                                        (uint)(byte)(&DAT_100c03a8)
                                                    [(uint)pbVar13[iVar8] + (uint)*pbVar13 * 0x100])
                ;
                local_8 = local_8 + pbVar13[iVar8 + 2] * uVar10;
                uVar7 = local_10 + pbVar13[iVar8] * uVar10;
                uVar11 = local_c + pbVar13[iVar8 + 1] * uVar10;
                local_4 = local_4 + uVar10;
                local_10 = uVar7;
                local_c = uVar11;
              }
              iVar8 = *(int *)(local_1c + 4);
              local_30 = local_30 + 3;
              local_1c = local_1c + 4;
            } while (iVar8 != -0x80000000);
          }
          pbVar13 = pbVar13 + 3;
          *local_18 = (char)(uVar7 / local_4);
          local_18[1] = (char)(uVar11 / local_4);
          local_18[2] = (char)(local_8 / local_4);
          iVar8 = param_2[6];
          local_2c = local_2c + 1;
          local_18 = local_18 + 3;
        } while (local_2c < *param_2 + iVar8);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_100036a0 @ 100036a0 */

void FUN_100036a0(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int *local_2c;
  undefined1 *local_28;
  int local_24;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar10 = param_2[7];
  if (iVar10 < param_2[2] + iVar10) {
    iVar7 = param_2[6];
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      bVar1 = *(byte *)(iVar3 + 0x14);
      bVar2 = *(byte *)(iVar3 + 0x15);
      iVar4 = *(int *)(param_1 + 0xc);
      iVar8 = iVar7 - *(int *)(iVar3 + 0x18);
      iVar5 = *(int *)(iVar3 + 0x1c);
      iVar3 = *(int *)(iVar3 + 4);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar10 < *(int *)(iVar4 + 0x1c)) {
        pbVar11 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                           >> 3) * (iVar7 - *(int *)(param_1 + 0x58)) +
                           (iVar10 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                          *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar11 = (byte *)(((int)((uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x14)) >>
                           3) * (iVar7 - *(int *)(iVar4 + 0x18)) +
                           (iVar10 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) +
                          *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x1c),iVar4,iVar10);
      iVar7 = param_2[6];
      local_28 = (undefined1 *)
                 (((int)((uint)bVar2 * (uint)bVar1) >> 3) * iVar8 + (iVar10 - iVar5) * iVar3 + iVar6
                 );
      local_24 = iVar7;
      if (iVar7 < *param_2 + iVar7) {
        do {
          iVar7 = *(int *)(param_1 + 0x5e28);
          local_10 = (uint)*pbVar11 * 100;
          local_c = (uint)pbVar11[1] * 100;
          local_8 = (uint)pbVar11[2] * 100;
          local_4 = 100;
          if (iVar7 != -0x80000000) {
            local_2c = (int *)(param_1 + 0x5e28);
            do {
              iVar3 = iVar7 + 2;
              uVar9 = (uint)*(byte *)((byte)(&DAT_100c03a8)
                                            [(uint)pbVar11[2] * 0x100 + (uint)pbVar11[iVar3]] +
                                      0x1a8 + (uint)(byte)(&DAT_100c03a8)
                                                          [(uint)pbVar11[1] * 0x100 +
                                                           (uint)pbVar11[iVar7 + 1]] + param_1 +
                                              (uint)(byte)(&DAT_100c03a8)
                                                          [(uint)*pbVar11 * 0x100 +
                                                           (uint)pbVar11[iVar7]]);
              local_4 = local_4 + uVar9;
              local_10 = local_10 + pbVar11[iVar7] * uVar9;
              local_c = local_c + pbVar11[iVar7 + 1] * uVar9;
              local_2c = local_2c + 1;
              iVar7 = *local_2c;
              local_8 = local_8 + pbVar11[iVar3] * uVar9;
            } while (iVar7 != -0x80000000);
          }
          pbVar11 = pbVar11 + 3;
          *local_28 = (char)(local_10 / local_4);
          local_28[1] = (char)(local_c / local_4);
          local_28[2] = (char)(local_8 / local_4);
          iVar7 = param_2[6];
          local_24 = local_24 + 1;
          local_28 = local_28 + 3;
        } while (local_24 < *param_2 + iVar7);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10003900 @ 10003900 */

void FUN_10003900(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  int *local_30;
  int local_2c;
  int local_1c;
  undefined2 *local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar14 = param_2[7];
  if (iVar14 < param_2[2] + iVar14) {
    iVar9 = param_2[6];
    do {
      iVar5 = *(int *)(param_1 + 0x18);
      bVar1 = *(byte *)(iVar5 + 0x14);
      bVar2 = *(byte *)(iVar5 + 0x15);
      iVar6 = *(int *)(param_1 + 0xc);
      iVar11 = iVar9 - *(int *)(iVar5 + 0x18);
      iVar7 = *(int *)(iVar5 + 0x1c);
      iVar5 = *(int *)(iVar5 + 4);
      iVar8 = *(int *)(param_1 + 0x10);
      if (iVar14 < *(int *)(iVar6 + 0x1c)) {
        puVar15 = (ushort *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar9 - *(int *)(param_1 + 0x58)) +
                   (iVar14 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar15 = (ushort *)
                  (((int)((uint)*(byte *)(iVar6 + 0x15) * (uint)*(byte *)(iVar6 + 0x14)) >> 3) *
                   (iVar9 - *(int *)(iVar6 + 0x18)) +
                   (iVar14 - *(int *)(iVar6 + 0x1c)) * *(int *)(iVar6 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x1c),iVar6,iVar14);
      iVar9 = param_2[6];
      local_2c = iVar9;
      local_18 = (undefined2 *)
                 (((int)((uint)bVar2 * (uint)bVar1) >> 3) * iVar11 + (iVar14 - iVar7) * iVar5 +
                 iVar8);
      if (iVar9 < *param_2 + iVar9) {
        do {
          uVar12 = (uint)*puVar15 * 100;
          iVar9 = *(int *)(param_1 + 0x5e28);
          uVar13 = (uint)puVar15[1] * 100;
          local_8 = (uint)puVar15[2] * 100;
          local_1c = param_1 + 0x5e28;
          local_4 = 100;
          if (iVar9 != -0x80000000) {
            local_30 = (int *)(param_1 + 0x1a0c);
            local_10 = uVar12;
            local_c = uVar13;
            do {
              if ((((*(int *)(param_1 + 0x78) <= local_30[-1] + local_2c) &&
                   (local_30[-1] + local_2c < *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x78)))
                  && (*(int *)(param_1 + 0x7c) <= *local_30 + iVar14)) &&
                 (*local_30 + iVar14 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x7c))) {
                uVar3 = *(ushort *)(iVar9 + 4 + (int)puVar15);
                uVar4 = *(ushort *)(iVar9 + 2 + (int)puVar15);
                uVar10 = (uint)*(byte *)((byte)(&DAT_100c03a8)
                                               [(uint)(uVar3 >> 8) + (uint)(puVar15[2] >> 8) * 0x100
                                               ] + 0x1a8 +
                                        (uint)(byte)(&DAT_100c03a8)
                                                    [(uint)(uVar4 >> 8) +
                                                     (uint)(puVar15[1] >> 8) * 0x100] + param_1 +
                                        (uint)(byte)(&DAT_100c03a8)
                                                    [(uint)(*(ushort *)(iVar9 + (int)puVar15) >> 8)
                                                     + (uint)(*puVar15 >> 8) * 0x100]);
                local_8 = local_8 + uVar3 * uVar10;
                uVar12 = local_10 + *(ushort *)(iVar9 + (int)puVar15) * uVar10;
                uVar13 = local_c + uVar4 * uVar10;
                local_4 = local_4 + uVar10;
                local_10 = uVar12;
                local_c = uVar13;
              }
              iVar9 = *(int *)(local_1c + 4);
              local_30 = local_30 + 3;
              local_1c = local_1c + 4;
            } while (iVar9 != -0x80000000);
          }
          puVar15 = puVar15 + 3;
          *local_18 = (short)(uVar12 / local_4);
          local_18[1] = (short)(uVar13 / local_4);
          local_18[2] = (short)(local_8 / local_4);
          iVar9 = param_2[6];
          local_2c = local_2c + 1;
          local_18 = local_18 + 3;
        } while (local_2c < *param_2 + iVar9);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10003bd0 @ 10003bd0 */

void FUN_10003bd0(int param_1,int *param_2)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  byte local_28;
  byte local_26;
  int local_24;
  undefined2 *local_20;
  int local_1c;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar13 = param_2[7];
  if (iVar13 < param_2[2] + iVar13) {
    iVar10 = param_2[6];
    do {
      iVar6 = *(int *)(param_1 + 0x18);
      bVar2 = *(byte *)(iVar6 + 0x14);
      bVar3 = *(byte *)(iVar6 + 0x15);
      iVar7 = *(int *)(param_1 + 0xc);
      iVar12 = iVar10 - *(int *)(iVar6 + 0x18);
      iVar8 = *(int *)(iVar6 + 0x1c);
      iVar6 = *(int *)(iVar6 + 4);
      iVar9 = *(int *)(param_1 + 0x10);
      if (iVar13 < *(int *)(iVar7 + 0x1c)) {
        puVar14 = (ushort *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar10 - *(int *)(param_1 + 0x58)) +
                   (iVar13 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar14 = (ushort *)
                  (((int)((uint)*(byte *)(iVar7 + 0x15) * (uint)*(byte *)(iVar7 + 0x14)) >> 3) *
                   (iVar10 - *(int *)(iVar7 + 0x18)) +
                   (iVar13 - *(int *)(iVar7 + 0x1c)) * *(int *)(iVar7 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x1c),iVar7,iVar13);
      iVar10 = param_2[6];
      local_20 = (undefined2 *)
                 (((int)((uint)bVar3 * (uint)bVar2) >> 3) * iVar12 + (iVar13 - iVar8) * iVar6 +
                 iVar9);
      local_1c = iVar10;
      if (iVar10 < *param_2 + iVar10) {
        do {
          iVar10 = *(int *)(param_1 + 0x5e28);
          local_c = (uint)puVar14[1] * 100;
          local_8 = (uint)puVar14[2] * 100;
          local_10 = (uint)*puVar14 * 100;
          local_24 = param_1 + 0x5e28;
          local_4 = 100;
          if (iVar10 != -0x80000000) {
            do {
              uVar4 = *(ushort *)(iVar10 + 4 + (int)puVar14);
              uVar5 = *(ushort *)(iVar10 + 2 + (int)puVar14);
              puVar1 = (ushort *)(iVar10 + (int)puVar14);
              local_28 = (byte)(*puVar14 >> 8);
              local_26 = (byte)(puVar14[2] >> 8);
              uVar11 = (uint)*(byte *)((byte)(&DAT_100c03a8)
                                             [(uint)local_26 * 0x100 + (uint)(uVar4 >> 8)] + 0x1a8 +
                                      (uint)(byte)(&DAT_100c03a8)
                                                  [(uint)(uVar5 >> 8) +
                                                   (uint)(byte)(puVar14[1] >> 8) * 0x100] + param_1
                                      + (uint)(byte)(&DAT_100c03a8)
                                                    [(uint)local_28 * 0x100 + (uint)(*puVar1 >> 8)])
              ;
              local_4 = local_4 + uVar11;
              local_8 = local_8 + uVar4 * uVar11;
              local_c = local_c + uVar5 * uVar11;
              iVar10 = *(int *)(local_24 + 4);
              local_24 = local_24 + 4;
              local_10 = local_10 + *puVar1 * uVar11;
            } while (iVar10 != -0x80000000);
          }
          puVar14 = puVar14 + 3;
          *local_20 = (short)(local_10 / local_4);
          local_20[1] = (short)(local_c / local_4);
          local_20[2] = (short)(local_8 / local_4);
          iVar10 = param_2[6];
          local_1c = local_1c + 1;
          local_20 = local_20 + 3;
        } while (local_1c < *param_2 + iVar10);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10003e60 @ 10003e60 */

void FUN_10003e60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  iVar6 = param_2[7];
  if (iVar6 < param_2[2] + iVar6) {
    iVar4 = param_2[6];
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0xc);
      local_14 = (undefined1 *)
                 (((int)((uint)*(byte *)(iVar1 + 0x15) * (uint)*(byte *)(iVar1 + 0x14)) >> 3) *
                  (iVar4 - *(int *)(iVar1 + 0x18)) +
                  (iVar6 - *(int *)(iVar1 + 0x1c)) * *(int *)(iVar1 + 4) + *(int *)(param_1 + 0x10))
      ;
      if (iVar6 < *(int *)(iVar2 + 0x1c)) {
        pbVar5 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                          >> 3) * (iVar4 - *(int *)(param_1 + 0x58)) +
                          (iVar6 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                         *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar5 = (byte *)(((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >> 3
                          ) * (iVar4 - *(int *)(iVar2 + 0x18)) +
                          (iVar6 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) +
                         *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x34a34,*(undefined4 *)(param_1 + 0x1c),iVar2,iVar6);
      FUN_10002970(param_1 + 0x4b440,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar6);
      iVar4 = param_2[6];
      local_24 = iVar4;
      if (iVar4 < *param_2 + iVar4) {
        do {
          iVar4 = *(int *)(param_1 + 0x3a3b4);
          local_1c = param_1 + 0x3a3b4;
          local_10 = 0;
          local_c = 0;
          if (iVar4 == -0x80000000) {
LAB_10004027:
            local_c = (uint)*pbVar5 * 4;
          }
          else {
            piVar3 = (int *)(param_1 + 0x35f98);
            do {
              if ((((*(int *)(param_1 + 0x78) <= piVar3[-1] + local_24) &&
                   (piVar3[-1] + local_24 < *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x78))) &&
                  (*(int *)(param_1 + 0x7c) <= *piVar3 + iVar6)) &&
                 (*piVar3 + iVar6 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x7c))) {
                local_10 = local_10 + (uint)pbVar5[iVar4];
                local_c = local_c + 1;
              }
              iVar4 = *(int *)(local_1c + 4);
              local_1c = local_1c + 4;
              piVar3 = piVar3 + 3;
            } while (iVar4 != -0x80000000);
            if (local_c == 0) goto LAB_10004027;
            local_c = (uint)(local_10 * 4) / local_c;
          }
          iVar4 = *(int *)(param_1 + 0x50dc0);
          local_18 = param_1 + 0x50dc0;
          local_8 = 0;
          local_4 = 0;
          if (iVar4 == -0x80000000) {
LAB_100040d7:
            local_4 = (uint)*pbVar5 * 4;
          }
          else {
            piVar3 = (int *)(param_1 + 0x4c9a4);
            do {
              if (((*(int *)(param_1 + 0x78) <= piVar3[-1] + local_24) &&
                  (piVar3[-1] + local_24 < *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x78))) &&
                 ((*(int *)(param_1 + 0x7c) <= *piVar3 + iVar6 &&
                  (*piVar3 + iVar6 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x7c))))) {
                local_8 = local_8 + (uint)pbVar5[iVar4];
                local_4 = local_4 + 1;
              }
              iVar4 = *(int *)(local_18 + 4);
              local_18 = local_18 + 4;
              piVar3 = piVar3 + 3;
            } while (iVar4 != -0x80000000);
            if (local_4 == 0) goto LAB_100040d7;
            local_4 = (uint)(local_8 * 4) / local_4;
          }
          if (local_c < local_4) {
            iVar4 = local_4 - local_c;
          }
          else {
            iVar4 = local_c - local_4;
          }
          iVar4 = (int)(((uint)*pbVar5 - (local_4 + local_c >> 3 & 0xff)) *
                       *(int *)(param_1 + 0x6160 + iVar4 * 0xc)) / 100 + (uint)*pbVar5;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          *local_14 = (char)iVar4;
          local_14 = local_14 + 1;
          iVar4 = param_2[6];
          local_24 = local_24 + 1;
          pbVar5 = pbVar5 + 1;
        } while (local_24 < *param_2 + iVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10004190 @ 10004190 */

void FUN_10004190(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int local_4;
  
  iVar6 = param_2[7];
  if (iVar6 < param_2[2] + iVar6) {
    iVar5 = param_2[6];
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0xc);
      puVar7 = (undefined1 *)
               (((int)((uint)*(byte *)(iVar1 + 0x15) * (uint)*(byte *)(iVar1 + 0x14)) >> 3) *
                (iVar5 - *(int *)(iVar1 + 0x18)) +
                (iVar6 - *(int *)(iVar1 + 0x1c)) * *(int *)(iVar1 + 4) + *(int *)(param_1 + 0x10));
      if (iVar6 < *(int *)(iVar2 + 0x1c)) {
        pbVar8 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                          >> 3) * (iVar5 - *(int *)(param_1 + 0x58)) +
                          (iVar6 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                         *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar8 = (byte *)(((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >> 3
                          ) * (iVar5 - *(int *)(iVar2 + 0x18)) +
                          (iVar6 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) +
                         *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x34a34,*(undefined4 *)(param_1 + 0x1c),iVar2,iVar6);
      FUN_10002970(param_1 + 0x4b440,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar6);
      iVar5 = param_2[6];
      local_4 = iVar5;
      if (iVar5 < *param_2 + iVar5) {
        do {
          uVar4 = (uint)pbVar8[*(int *)(param_1 + 0x3a3b4)] +
                  (uint)pbVar8[*(int *)(param_1 + 0x3a3b8)] +
                  (uint)pbVar8[*(int *)(param_1 + 0x3a3bc)] +
                  (uint)pbVar8[*(int *)(param_1 + 0x3a3c0)];
          uVar3 = (uint)pbVar8[*(int *)(param_1 + 0x50dc8)] +
                  (uint)pbVar8[*(int *)(param_1 + 0x50dcc)] +
                  (uint)pbVar8[*(int *)(param_1 + 0x50dc0)] +
                  (uint)pbVar8[*(int *)(param_1 + 0x50dc4)];
          if (uVar4 < uVar3) {
            iVar5 = uVar3 - uVar4;
          }
          else {
            iVar5 = uVar4 - uVar3;
          }
          iVar5 = (int)(((uint)*pbVar8 - (uVar3 + uVar4 >> 3 & 0xff)) *
                       *(int *)(param_1 + 0x6160 + iVar5 * 0xc)) / 100 + (uint)*pbVar8;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          *puVar7 = (char)iVar5;
          iVar5 = param_2[6];
          local_4 = local_4 + 1;
          pbVar8 = pbVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (local_4 < *param_2 + iVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_100043b0 @ 100043b0 */

void FUN_100043b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int *local_20;
  undefined2 *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  iVar6 = param_2[7];
  if (iVar6 < param_2[2] + iVar6) {
    iVar5 = param_2[6];
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0xc);
      local_1c = (undefined2 *)
                 (((int)((uint)*(byte *)(iVar1 + 0x15) * (uint)*(byte *)(iVar1 + 0x14)) >> 3) *
                  (iVar5 - *(int *)(iVar1 + 0x18)) +
                  (iVar6 - *(int *)(iVar1 + 0x1c)) * *(int *)(iVar1 + 4) + *(int *)(param_1 + 0x10))
      ;
      if (iVar6 < *(int *)(iVar2 + 0x1c)) {
        puVar4 = (ushort *)
                 (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                  (iVar5 - *(int *)(param_1 + 0x58)) +
                  (iVar6 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                 *(int *)(param_1 + 0x3c));
      }
      else {
        puVar4 = (ushort *)
                 (((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >> 3) *
                  (iVar5 - *(int *)(iVar2 + 0x18)) +
                  (iVar6 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x34a34,*(undefined4 *)(param_1 + 0x1c),iVar2,iVar6);
      FUN_10002970(param_1 + 0x4b440,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar6);
      iVar5 = param_2[6];
      local_24 = iVar5;
      if (iVar5 < *param_2 + iVar5) {
        do {
          iVar5 = *(int *)(param_1 + 0x3a3b4);
          local_20 = (int *)(param_1 + 0x3a3b4);
          local_10 = 0;
          local_c = 0;
          local_18 = 0;
          local_14 = 0;
          if (iVar5 == -0x80000000) {
LAB_10004593:
            local_14 = (uint)*(byte *)((int)puVar4 + 1) * 4;
          }
          else {
            piVar3 = (int *)(param_1 + 0x35f98);
            do {
              if ((((*(int *)(param_1 + 0x58) <= piVar3[-1] + local_24) &&
                   (piVar3[-1] + local_24 < *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x58))) &&
                  (*(int *)(param_1 + 0x5c) <= *piVar3 + iVar6)) &&
                 (*piVar3 + iVar6 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x5c))) {
                local_18 = local_18 + (uint)(*(ushort *)(iVar5 + (int)puVar4) >> 8);
                local_10 = local_10 + (uint)*(ushort *)(iVar5 + (int)puVar4);
                local_14 = local_14 + 1;
                local_c = local_c + 1;
              }
              iVar5 = *(int *)((int)local_20 + 4);
              local_20 = (int *)((int)local_20 + 4);
              piVar3 = piVar3 + 3;
            } while (iVar5 != -0x80000000);
            if (local_14 == 0) goto LAB_10004593;
            local_14 = (uint)(local_18 * 4) / local_14;
          }
          local_20 = (int *)(param_1 + 0x50dc0);
          local_8 = 0;
          local_4 = 0;
          if (*(int *)(param_1 + 0x50dc0) == -0x80000000) {
LAB_1000464a:
            local_4 = (uint)*(byte *)((int)puVar4 + 1) * 4;
          }
          else {
            piVar3 = (int *)(param_1 + 0x4c9a4);
            do {
              if (((*(int *)(param_1 + 0x58) <= piVar3[-1] + local_24) &&
                  (piVar3[-1] + local_24 < *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x58))) &&
                 ((*(int *)(param_1 + 0x5c) <= *piVar3 + iVar6 &&
                  (*piVar3 + iVar6 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x5c))))) {
                local_8 = local_8 + (uint)(*puVar4 >> 8);
                local_10 = local_10 + (uint)*puVar4;
                local_4 = local_4 + 1;
                local_c = local_c + 1;
              }
              local_20 = local_20 + 1;
              piVar3 = piVar3 + 3;
            } while (*local_20 != -0x80000000);
            if (local_4 == 0) goto LAB_1000464a;
            local_4 = (uint)(local_8 * 4) / local_4;
          }
          if (local_c == 0) {
            local_c = (uint)*puVar4 * 8;
          }
          else {
            local_c = (uint)(local_10 * 8) / local_c;
          }
          if (local_14 < local_4) {
            iVar5 = local_4 - local_14;
          }
          else {
            iVar5 = local_14 - local_4;
          }
          iVar5 = (int)(((uint)*puVar4 - (local_c >> 3)) * *(int *)(param_1 + 0x6160 + iVar5 * 0xc))
                  / 100 + (uint)*puVar4;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0xffff < iVar5) {
            iVar5 = 0xffff;
          }
          *local_1c = (short)iVar5;
          local_1c = local_1c + 1;
          iVar5 = param_2[6];
          local_24 = local_24 + 1;
          puVar4 = puVar4 + 1;
        } while (local_24 < *param_2 + iVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10004720 @ 10004720 */

void FUN_10004720(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  undefined2 *local_8;
  int local_4;
  
  iVar11 = param_2[7];
  if (iVar11 < param_2[2] + iVar11) {
    iVar13 = param_2[6];
    do {
      iVar9 = *(int *)(param_1 + 0x18);
      iVar10 = *(int *)(param_1 + 0xc);
      local_8 = (undefined2 *)
                (((int)((uint)*(byte *)(iVar9 + 0x15) * (uint)*(byte *)(iVar9 + 0x14)) >> 3) *
                 (iVar13 - *(int *)(iVar9 + 0x18)) +
                 (iVar11 - *(int *)(iVar9 + 0x1c)) * *(int *)(iVar9 + 4) + *(int *)(param_1 + 0x10))
      ;
      if (iVar11 < *(int *)(iVar10 + 0x1c)) {
        puVar15 = (ushort *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar13 - *(int *)(param_1 + 0x58)) +
                   (iVar11 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar15 = (ushort *)
                  (((int)((uint)*(byte *)(iVar10 + 0x15) * (uint)*(byte *)(iVar10 + 0x14)) >> 3) *
                   (iVar13 - *(int *)(iVar10 + 0x18)) +
                   (iVar11 - *(int *)(iVar10 + 0x1c)) * *(int *)(iVar10 + 4) + *(int *)(param_1 + 4)
                  );
      }
      FUN_10002970(param_1 + 0x34a34,*(undefined4 *)(param_1 + 0x1c),iVar10,iVar11);
      FUN_10002970(param_1 + 0x4b440,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar11);
      iVar13 = param_2[6];
      local_4 = iVar13;
      if (iVar13 < *param_2 + iVar13) {
        do {
          uVar1 = *(ushort *)(*(int *)(param_1 + 0x3a3b8) + (int)puVar15);
          uVar2 = *(ushort *)(*(int *)(param_1 + 0x3a3b4) + (int)puVar15);
          uVar3 = *(ushort *)(*(int *)(param_1 + 0x3a3bc) + (int)puVar15);
          uVar4 = *(ushort *)(*(int *)(param_1 + 0x3a3c0) + (int)puVar15);
          uVar5 = *(ushort *)(*(int *)(param_1 + 0x50dc0) + (int)puVar15);
          uVar6 = *(ushort *)(*(int *)(param_1 + 0x50dc4) + (int)puVar15);
          uVar12 = (uint)(uVar2 >> 8) + (uint)(uVar1 >> 8) + (uint)(uVar3 >> 8) + (uint)(uVar4 >> 8)
          ;
          uVar7 = *(ushort *)(*(int *)(param_1 + 0x50dc8) + (int)puVar15);
          uVar8 = *(ushort *)(*(int *)(param_1 + 0x50dcc) + (int)puVar15);
          uVar14 = (uint)(uVar5 >> 8) + (uint)(uVar6 >> 8) + (uint)(uVar7 >> 8) + (uint)(uVar8 >> 8)
          ;
          if (uVar12 < uVar14) {
            iVar13 = uVar14 - uVar12;
          }
          else {
            iVar13 = uVar12 - uVar14;
          }
          iVar13 = (int)(((uint)*puVar15 -
                         ((uint)uVar2 + (uint)uVar1 + (uint)uVar3 + (uint)uVar4 + (uint)uVar5 +
                          (uint)uVar6 + (uint)uVar7 + (uint)uVar8 >> 3)) *
                        *(int *)(param_1 + 0x6160 + iVar13 * 0xc)) / 100 + (uint)*puVar15;
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          else if (0xffff < iVar13) {
            iVar13 = 0xffff;
          }
          *local_8 = (short)iVar13;
          local_8 = local_8 + 1;
          iVar13 = param_2[6];
          local_4 = local_4 + 1;
          puVar15 = puVar15 + 1;
        } while (local_4 < *param_2 + iVar13);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10004990 @ 10004990 */

void FUN_10004990(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int local_3c;
  int *local_38;
  int *local_34;
  undefined1 *local_30;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  iVar3 = param_2[7];
  if (iVar3 < param_2[2] + iVar3) {
    iVar5 = param_2[6];
    do {
      iVar6 = *(int *)(param_1 + 0x18);
      iVar7 = *(int *)(param_1 + 0xc);
      local_30 = (undefined1 *)
                 (((int)((uint)*(byte *)(iVar6 + 0x15) * (uint)*(byte *)(iVar6 + 0x14)) >> 3) *
                  (iVar5 - *(int *)(iVar6 + 0x18)) +
                  (iVar3 - *(int *)(iVar6 + 0x1c)) * *(int *)(iVar6 + 4) + *(int *)(param_1 + 0x10))
      ;
      if (iVar3 < *(int *)(iVar7 + 0x1c)) {
        pbVar8 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                          >> 3) * (iVar5 - *(int *)(param_1 + 0x58)) +
                          (iVar3 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                         *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar8 = (byte *)(((int)((uint)*(byte *)(iVar7 + 0x15) * (uint)*(byte *)(iVar7 + 0x14)) >> 3
                          ) * (iVar5 - *(int *)(iVar7 + 0x18)) +
                          (iVar3 - *(int *)(iVar7 + 0x1c)) * *(int *)(iVar7 + 4) +
                         *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x34a34,*(undefined4 *)(param_1 + 0x1c),iVar7,iVar3);
      FUN_10002970(param_1 + 0x4b440,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar3);
      iVar5 = param_2[6];
      local_3c = iVar5;
      if (iVar5 < *param_2 + iVar5) {
        do {
          iVar5 = *(int *)(param_1 + 0x3a3b4);
          local_38 = (int *)(param_1 + 0x3a3b4);
          local_18 = 0;
          local_1c = 0;
          local_20 = 0;
          local_14 = 0;
          if (iVar5 == -0x80000000) {
LAB_10004b90:
            local_20 = (uint)*pbVar8 * 4;
            local_1c = (uint)pbVar8[1] * 4;
            local_14 = (uint)pbVar8[2] * 4;
          }
          else {
            piVar4 = (int *)(param_1 + 0x35f98);
            do {
              if ((((*(int *)(param_1 + 0x58) <= piVar4[-1] + local_3c) &&
                   (piVar4[-1] + local_3c < *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x58))) &&
                  (*(int *)(param_1 + 0x5c) <= *piVar4 + iVar3)) &&
                 (*piVar4 + iVar3 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x5c))) {
                local_20 = local_20 + pbVar8[iVar5];
                local_1c = local_1c + pbVar8[iVar5 + 1];
                local_18 = local_18 + (uint)pbVar8[iVar5 + 2];
                local_14 = local_14 + 1;
              }
              local_38 = local_38 + 1;
              iVar5 = *local_38;
              piVar4 = piVar4 + 3;
            } while (iVar5 != -0x80000000);
            if (local_14 == 0) goto LAB_10004b90;
            local_20 = (local_20 * 4) / local_14;
            local_1c = (local_1c * 4) / local_14;
            local_14 = (uint)(local_18 * 4) / local_14;
          }
          local_34 = (int *)(param_1 + 0x50dc0);
          iVar5 = *local_34;
          local_8 = 0;
          local_c = 0;
          local_10 = 0;
          local_4 = 0;
          if (iVar5 == -0x80000000) {
LAB_10004c81:
            uVar1 = (uint)*pbVar8 * 4;
            uVar2 = (uint)pbVar8[1] * 4;
            local_4 = (uint)pbVar8[2] * 4;
          }
          else {
            piVar4 = (int *)(param_1 + 0x4c9a4);
            do {
              if (((*(int *)(param_1 + 0x58) <= piVar4[-1] + local_3c) &&
                  (piVar4[-1] + local_3c < *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x58))) &&
                 ((*(int *)(param_1 + 0x5c) <= *piVar4 + iVar3 &&
                  (*piVar4 + iVar3 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x5c))))) {
                local_10 = local_10 + (uint)pbVar8[iVar5];
                local_c = local_c + (uint)pbVar8[iVar5 + 1];
                local_8 = local_8 + (uint)pbVar8[iVar5 + 2];
                local_4 = local_4 + 1;
              }
              local_34 = local_34 + 1;
              iVar5 = *local_34;
              piVar4 = piVar4 + 3;
            } while (iVar5 != -0x80000000);
            if (local_4 == 0) goto LAB_10004c81;
            uVar1 = (uint)(local_10 * 4) / local_4;
            uVar2 = (uint)(local_c * 4) / local_4;
            local_4 = (uint)(local_8 * 4) / local_4;
          }
          if (local_20 < uVar1) {
            iVar5 = uVar1 - local_20;
          }
          else {
            iVar5 = local_20 - uVar1;
          }
          if (local_1c < uVar2) {
            iVar6 = uVar2 - local_1c;
          }
          else {
            iVar6 = local_1c - uVar2;
          }
          if (local_14 < local_4) {
            iVar7 = local_4 - local_14;
          }
          else {
            iVar7 = local_14 - local_4;
          }
          iVar5 = iVar7 + iVar6 + iVar5;
          iVar6 = (int)(((uint)*pbVar8 - (uVar1 + local_20 >> 3 & 0xff)) *
                       *(int *)(param_1 + 0x188 + iVar5 * 4)) / 100 + (uint)*pbVar8;
          iVar7 = (int)(((uint)pbVar8[1] - (uVar2 + local_1c >> 3 & 0xff)) *
                       *(int *)(param_1 + 0x6160 + iVar5 * 4)) / 100 + (uint)pbVar8[1];
          iVar5 = (int)(((uint)pbVar8[2] - (local_4 + local_14 >> 3 & 0xff)) *
                       *(int *)(param_1 + 0xc138 + iVar5 * 4)) / 100 + (uint)pbVar8[2];
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          else if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          local_30[2] = (char)iVar5;
          *local_30 = (char)iVar6;
          local_30[1] = (char)iVar7;
          local_30 = local_30 + 3;
          iVar5 = param_2[6];
          local_3c = local_3c + 1;
          pbVar8 = pbVar8 + 3;
        } while (local_3c < *param_2 + iVar5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10004e20 @ 10004e20 */

void FUN_10004e20(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int local_40;
  undefined1 *local_38;
  int local_34;
  
  iVar13 = param_2[7];
  if (iVar13 < param_2[2] + iVar13) {
    iVar11 = param_2[6];
    do {
      iVar12 = *(int *)(param_1 + 0x18);
      iVar10 = *(int *)(param_1 + 0xc);
      local_38 = (undefined1 *)
                 (((int)((uint)*(byte *)(iVar12 + 0x15) * (uint)*(byte *)(iVar12 + 0x14)) >> 3) *
                  (iVar11 - *(int *)(iVar12 + 0x18)) +
                  (iVar13 - *(int *)(iVar12 + 0x1c)) * *(int *)(iVar12 + 4) +
                 *(int *)(param_1 + 0x10));
      if (iVar13 < *(int *)(iVar10 + 0x1c)) {
        pbVar14 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                           >> 3) * (iVar11 - *(int *)(param_1 + 0x58)) +
                           (iVar13 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                          *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar14 = (byte *)(((int)((uint)*(byte *)(iVar10 + 0x15) * (uint)*(byte *)(iVar10 + 0x14))
                           >> 3) * (iVar11 - *(int *)(iVar10 + 0x18)) +
                           (iVar13 - *(int *)(iVar10 + 0x1c)) * *(int *)(iVar10 + 4) +
                          *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x34a34,*(undefined4 *)(param_1 + 0x1c),iVar10,iVar13);
      FUN_10002970(param_1 + 0x4b440,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar13);
      iVar11 = param_2[6];
      local_34 = iVar11;
      if (iVar11 < *param_2 + iVar11) {
        do {
          iVar11 = *(int *)(param_1 + 0x3a3b4);
          iVar12 = *(int *)(param_1 + 0x3a3b8);
          iVar10 = *(int *)(param_1 + 0x3a3bc);
          iVar1 = *(int *)(param_1 + 0x3a3c0);
          uVar2 = (uint)pbVar14[iVar11] + (uint)pbVar14[iVar12] + (uint)pbVar14[iVar10] +
                  (uint)pbVar14[iVar1];
          uVar4 = (uint)pbVar14[iVar11 + 1] + (uint)pbVar14[iVar12 + 1] + (uint)pbVar14[iVar10 + 1]
                  + (uint)pbVar14[iVar1 + 1];
          uVar8 = (uint)pbVar14[iVar11 + 2] + (uint)pbVar14[iVar12 + 2] + (uint)pbVar14[iVar10 + 2]
                  + (uint)pbVar14[iVar1 + 2];
          iVar11 = *(int *)(param_1 + 0x50dc0);
          iVar12 = *(int *)(param_1 + 0x50dc4);
          pbVar5 = pbVar14 + *(int *)(param_1 + 0x50dc8);
          pbVar6 = pbVar14 + *(int *)(param_1 + 0x50dcc);
          uVar3 = (uint)pbVar14[iVar11] + (uint)pbVar14[iVar12] + (uint)*pbVar5 + (uint)*pbVar6;
          uVar9 = (uint)pbVar14[iVar11 + 1] + (uint)pbVar14[iVar12 + 1] + (uint)pbVar5[1] +
                  (uint)pbVar6[1];
          uVar7 = (uint)pbVar14[iVar11 + 2] + (uint)pbVar14[iVar12 + 2] + (uint)pbVar5[2] +
                  (uint)pbVar6[2];
          if (uVar2 < uVar3) {
            iVar11 = uVar3 - uVar2;
          }
          else {
            iVar11 = uVar2 - uVar3;
          }
          if (uVar4 < uVar9) {
            local_40 = uVar9 - uVar4;
          }
          else {
            local_40 = uVar4 - uVar9;
          }
          if (uVar8 < uVar7) {
            iVar12 = uVar7 - uVar8;
          }
          else {
            iVar12 = uVar8 - uVar7;
          }
          iVar11 = iVar12 + local_40 + iVar11;
          iVar12 = (int)(((uint)*pbVar14 - (uVar3 + uVar2 >> 3 & 0xff)) *
                        *(int *)(param_1 + 0x188 + iVar11 * 4)) / 100 + (uint)*pbVar14;
          iVar10 = (int)(((uint)pbVar14[1] - (uVar9 + uVar4 >> 3 & 0xff)) *
                        *(int *)(param_1 + 0x6160 + iVar11 * 4)) / 100 + (uint)pbVar14[1];
          iVar11 = (int)(((uint)pbVar14[2] - (uVar7 + uVar8 >> 3 & 0xff)) *
                        *(int *)(param_1 + 0xc138 + iVar11 * 4)) / 100 + (uint)pbVar14[2];
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          else if (0xff < iVar12) {
            iVar12 = 0xff;
          }
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          else if (0xff < iVar11) {
            iVar11 = 0xff;
          }
          local_38[2] = (char)iVar11;
          *local_38 = (char)iVar12;
          local_38[1] = (char)iVar10;
          local_38 = local_38 + 3;
          iVar11 = param_2[6];
          local_34 = local_34 + 1;
          pbVar14 = pbVar14 + 3;
        } while (local_34 < *param_2 + iVar11);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10005190 @ 10005190 */

undefined8 FUN_10005190(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  short sVar10;
  short sVar11;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  undefined8 uVar13;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined1 uVar24;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined8 uVar25;
  ulonglong uVar29;
  undefined8 uVar30;
  short sVar31;
  short sVar33;
  ulonglong uVar32;
  short sVar34;
  undefined8 uVar12;
  
  uVar5 = param_2[7];
  uVar9 = 0;
  if (uVar5 < param_2[2] + uVar5) {
    uVar6 = param_2[6];
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0xc);
      puVar7 = (undefined4 *)
               (((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >> 3) *
                (uVar6 - *(int *)(iVar2 + 0x18)) +
                (uVar5 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) + *(int *)(param_1 + 0x10));
      if (uVar5 < *(uint *)(iVar3 + 0x1c)) {
        puVar8 = (undefined8 *)
                 (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                  (uVar6 - *(int *)(param_1 + 0x58)) +
                  (uVar5 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                 *(int *)(param_1 + 0x3c));
      }
      else {
        iVar2 = *(int *)(param_1 + 0xc);
        puVar8 = (undefined8 *)
                 (((int)((uint)*(byte *)(iVar3 + 0x15) * (uint)*(byte *)(iVar3 + 0x14)) >> 3) *
                  (uVar6 - *(int *)(iVar2 + 0x18)) +
                  (uVar5 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x34a34,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   uVar5);
      uVar9 = FUN_10002970(param_1 + 0x4b440,*(undefined4 *)(param_1 + 0x1c),
                           *(undefined4 *)(param_1 + 0xc),uVar5);
      uVar4 = param_2[6];
      uVar6 = uVar4;
      if (uVar4 < *param_2 + uVar4) {
        do {
          uVar25 = *(undefined8 *)(*(int *)(param_1 + 0x3a3b4) + (int)puVar8);
          uVar28 = (undefined1)((ulonglong)uVar9 >> 0x18);
          sVar34 = CONCAT11(uVar28,(char)((ulonglong)uVar25 >> 0x18));
          uVar27 = (undefined1)((ulonglong)uVar9 >> 0x10);
          uVar26 = (undefined1)((ulonglong)uVar9 >> 8);
          uVar24 = (undefined1)uVar9;
          sVar10 = (short)uVar9;
          sVar14 = (short)((ulonglong)uVar9 >> 0x10);
          sVar16 = (short)((ulonglong)uVar9 >> 0x20);
          sVar18 = (short)((ulonglong)uVar9 >> 0x30);
          uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x3a3b8) + (int)puVar8);
          sVar33 = CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 0x18));
          uVar30 = *(undefined8 *)(*(int *)(param_1 + 0x3a3bc) + (int)puVar8);
          sVar31 = CONCAT11(uVar28,(char)((ulonglong)uVar30 >> 0x18));
          uVar1 = *(undefined8 *)(*(int *)(param_1 + 0x3a3c0) + (int)puVar8);
          sVar19 = CONCAT11(uVar28,(char)((ulonglong)uVar1 >> 0x18));
          sVar11 = sVar10 + CONCAT11(uVar24,(char)uVar25) + CONCAT11(uVar24,(char)uVar13) +
                   CONCAT11(uVar24,(char)uVar30) + CONCAT11(uVar24,(char)uVar1);
          sVar15 = sVar14 + CONCAT11(uVar26,(char)((ulonglong)uVar25 >> 8)) +
                   CONCAT11(uVar26,(char)((ulonglong)uVar13 >> 8)) +
                   CONCAT11(uVar26,(char)((ulonglong)uVar30 >> 8)) +
                   CONCAT11(uVar26,(char)((ulonglong)uVar1 >> 8));
          sVar17 = sVar16 + (short)CONCAT31(CONCAT21(sVar34,uVar27),
                                            (char)((ulonglong)uVar25 >> 0x10)) +
                   (short)CONCAT31(CONCAT21(sVar33,uVar27),(char)((ulonglong)uVar13 >> 0x10)) +
                   (short)CONCAT31(CONCAT21(sVar31,uVar27),(char)((ulonglong)uVar30 >> 0x10)) +
                   (short)CONCAT31(CONCAT21(sVar19,uVar27),(char)((ulonglong)uVar1 >> 0x10));
          sVar19 = sVar18 + sVar34 + sVar33 + sVar31 + sVar19;
          uVar12 = CONCAT26(sVar19,CONCAT24(sVar17,CONCAT22(sVar15,sVar11)));
          uVar25 = *(undefined8 *)(*(int *)(param_1 + 0x50dc0) + (int)puVar8);
          sVar34 = CONCAT11(uVar28,(char)((ulonglong)uVar25 >> 0x18));
          uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x50dc4) + (int)puVar8);
          sVar33 = CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 0x18));
          uVar30 = *(undefined8 *)(*(int *)(param_1 + 0x50dc8) + (int)puVar8);
          sVar31 = CONCAT11(uVar28,(char)((ulonglong)uVar30 >> 0x18));
          uVar1 = *(undefined8 *)(*(int *)(param_1 + 0x50dcc) + (int)puVar8);
          sVar23 = CONCAT11(uVar28,(char)((ulonglong)uVar1 >> 0x18));
          sVar20 = sVar10 + CONCAT11(uVar24,(char)uVar25) + CONCAT11(uVar24,(char)uVar13) +
                   CONCAT11(uVar24,(char)uVar30) + CONCAT11(uVar24,(char)uVar1);
          sVar21 = sVar14 + CONCAT11(uVar26,(char)((ulonglong)uVar25 >> 8)) +
                   CONCAT11(uVar26,(char)((ulonglong)uVar13 >> 8)) +
                   CONCAT11(uVar26,(char)((ulonglong)uVar30 >> 8)) +
                   CONCAT11(uVar26,(char)((ulonglong)uVar1 >> 8));
          sVar22 = sVar16 + (short)CONCAT31(CONCAT21(sVar34,uVar27),
                                            (char)((ulonglong)uVar25 >> 0x10)) +
                   (short)CONCAT31(CONCAT21(sVar33,uVar27),(char)((ulonglong)uVar13 >> 0x10)) +
                   (short)CONCAT31(CONCAT21(sVar31,uVar27),(char)((ulonglong)uVar30 >> 0x10)) +
                   (short)CONCAT31(CONCAT21(sVar23,uVar27),(char)((ulonglong)uVar1 >> 0x10));
          sVar23 = sVar18 + sVar34 + sVar33 + sVar31 + sVar23;
          uVar13 = CONCAT26(sVar23,CONCAT24(sVar22,CONCAT22(sVar21,sVar20)));
          uVar25 = *puVar8;
          sVar34 = CONCAT11(uVar28,(char)((ulonglong)uVar25 >> 0x18));
          sVar33 = CONCAT11(uVar26,(char)((ulonglong)uVar25 >> 8));
          sVar31 = CONCAT11(uVar24,(char)uVar25);
          uVar29 = psubusw(uVar12,uVar13);
          uVar32 = psubusw(uVar13,uVar12);
          uVar30 = pmaddwd(uVar29 | uVar32,0x100010001);
          uVar13 = psraw(CONCAT26(sVar19 + sVar23,
                                  CONCAT24(sVar17 + sVar22,CONCAT22(sVar15 + sVar21,sVar11 + sVar20)
                                          )),3);
          sVar19 = (short)CONCAT31(CONCAT21(sVar34,uVar27),(char)((ulonglong)uVar25 >> 0x10));
          uVar25 = *(undefined8 *)
                    (param_1 + 0x120e0 + ((int)uVar30 + (int)((ulonglong)uVar30 >> 0x20)) * 8);
          uVar25 = psraw(CONCAT26((sVar34 - (short)((ulonglong)uVar13 >> 0x30)) *
                                  (short)((ulonglong)uVar25 >> 0x30),
                                  CONCAT24((sVar19 - (short)((ulonglong)uVar13 >> 0x20)) *
                                           (short)((ulonglong)uVar25 >> 0x20),
                                           CONCAT22((sVar33 - (short)((ulonglong)uVar13 >> 0x10)) *
                                                    (short)((ulonglong)uVar25 >> 0x10),
                                                    (sVar31 - (short)uVar13) * (short)uVar25))),5);
          sVar31 = sVar31 + (short)uVar25;
          sVar33 = sVar33 + (short)((ulonglong)uVar25 >> 0x10);
          sVar19 = sVar19 + (short)((ulonglong)uVar25 >> 0x20);
          sVar34 = sVar34 + (short)((ulonglong)uVar25 >> 0x30);
          uVar29 = CONCAT26(sVar34,CONCAT24(sVar19,CONCAT22(sVar33,sVar31))) &
                   CONCAT26(-(ushort)(sVar18 < sVar34),
                            CONCAT24(-(ushort)(sVar16 < sVar19),
                                     CONCAT22(-(ushort)(sVar14 < sVar33),-(ushort)(sVar10 < sVar31))
                                    ));
          sVar34 = (short)uVar29;
          sVar33 = (short)(uVar29 >> 0x10);
          sVar31 = (short)(uVar29 >> 0x20);
          sVar19 = (short)(uVar29 >> 0x30);
          *puVar7 = CONCAT13((0 < sVar19) * (sVar19 < 0x100) * (char)(uVar29 >> 0x30) -
                             (0xff < sVar19),
                             CONCAT12((0 < sVar31) * (sVar31 < 0x100) * (char)(uVar29 >> 0x20) -
                                      (0xff < sVar31),
                                      CONCAT11((0 < sVar33) * (sVar33 < 0x100) *
                                               (char)(uVar29 >> 0x10) - (0xff < sVar33),
                                               (0 < sVar34) * (sVar34 < 0x100) * (char)uVar29 -
                                               (0xff < sVar34))));
          uVar6 = param_2[6];
          uVar4 = uVar4 + 1;
          puVar8 = (undefined8 *)((int)puVar8 + 3);
          puVar7 = (undefined4 *)((int)puVar7 + 3);
        } while (uVar4 < *param_2 + uVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(param_2[7] + param_2[2]));
  }
  return uVar9;
}



/**************************************************/

/* Function: FUN_10005420 @ 10005420 */

void FUN_10005420(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  int local_54;
  int *local_48;
  int *local_44;
  undefined2 *local_40;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  iVar11 = param_2[7];
  if (iVar11 < param_2[2] + iVar11) {
    iVar13 = param_2[6];
    do {
      iVar6 = *(int *)(param_1 + 0x18);
      iVar10 = *(int *)(param_1 + 0xc);
      local_40 = (undefined2 *)
                 (((int)((uint)*(byte *)(iVar6 + 0x15) * (uint)*(byte *)(iVar6 + 0x14)) >> 3) *
                  (iVar13 - *(int *)(iVar6 + 0x18)) +
                  (iVar11 - *(int *)(iVar6 + 0x1c)) * *(int *)(iVar6 + 4) + *(int *)(param_1 + 0x10)
                 );
      if (iVar11 < *(int *)(iVar10 + 0x1c)) {
        puVar12 = (ushort *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar13 - *(int *)(param_1 + 0x58)) +
                   (iVar11 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar12 = (ushort *)
                  (((int)((uint)*(byte *)(iVar10 + 0x15) * (uint)*(byte *)(iVar10 + 0x14)) >> 3) *
                   (iVar13 - *(int *)(iVar10 + 0x18)) +
                   (iVar11 - *(int *)(iVar10 + 0x1c)) * *(int *)(iVar10 + 4) + *(int *)(param_1 + 4)
                  );
      }
      FUN_10002970(param_1 + 0x34a34,*(undefined4 *)(param_1 + 0x1c),iVar10,iVar11);
      FUN_10002970(param_1 + 0x4b440,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar11);
      iVar13 = param_2[6];
      local_54 = iVar13;
      if (iVar13 < *param_2 + iVar13) {
        do {
          iVar13 = *(int *)(param_1 + 0x3a3b4);
          uVar8 = 0;
          local_48 = (int *)(param_1 + 0x3a3b4);
          local_28 = 0;
          local_2c = 0;
          local_30 = 0;
          local_24 = 0;
          local_18 = 0;
          local_1c = 0;
          local_20 = 0;
          local_14 = 0;
          if (iVar13 == -0x80000000) {
LAB_10005653:
            local_20 = (uint)*(byte *)((int)puVar12 + 1) * 4;
            local_1c = (uint)*(byte *)((int)puVar12 + 3) * 4;
            uVar8 = (uint)*(byte *)((int)puVar12 + 5) * 4;
          }
          else {
            piVar7 = (int *)(param_1 + 0x35f98);
            do {
              if ((((*(int *)(param_1 + 0x58) <= piVar7[-1] + local_54) &&
                   (piVar7[-1] + local_54 < *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x58))) &&
                  (*(int *)(param_1 + 0x5c) <= *piVar7 + iVar11)) &&
                 (*piVar7 + iVar11 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x5c))) {
                local_30 = local_30 + (uint)*(ushort *)(iVar13 + (int)puVar12);
                local_20 = local_20 + (*(ushort *)(iVar13 + (int)puVar12) >> 8);
                uVar1 = *(ushort *)(iVar13 + 2 + (int)puVar12);
                uVar2 = *(ushort *)(iVar13 + 4 + (int)puVar12);
                local_2c = local_2c + (uint)uVar1;
                local_28 = local_28 + (uint)uVar2;
                local_1c = local_1c + (uVar1 >> 8);
                local_18 = local_18 + (uint)(uVar2 >> 8);
                uVar8 = local_14 + 1;
                local_24 = local_24 + 1;
                local_14 = uVar8;
              }
              local_48 = local_48 + 1;
              iVar13 = *local_48;
              piVar7 = piVar7 + 3;
            } while (iVar13 != -0x80000000);
            if (uVar8 == 0) goto LAB_10005653;
            local_20 = (local_20 * 4) / uVar8;
            local_1c = (local_1c * 4) / uVar8;
            uVar8 = (uint)(local_18 * 4) / uVar8;
          }
          uVar9 = 0;
          local_44 = (int *)(param_1 + 0x50dc0);
          iVar13 = *local_44;
          local_8 = 0;
          local_c = 0;
          local_10 = 0;
          local_4 = 0;
          if (iVar13 == -0x80000000) {
LAB_10005781:
            local_c = (uint)*(byte *)((int)puVar12 + 3) * 4;
            uVar3 = (uint)*(byte *)((int)puVar12 + 1) * 4;
            uVar9 = (uint)*(byte *)((int)puVar12 + 5) * 4;
          }
          else {
            piVar7 = (int *)(param_1 + 0x4c9a4);
            do {
              if (((*(int *)(param_1 + 0x58) <= piVar7[-1] + local_54) &&
                  (piVar7[-1] + local_54 < *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x58))) &&
                 ((*(int *)(param_1 + 0x5c) <= *piVar7 + iVar11 &&
                  (*piVar7 + iVar11 < *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x5c))))) {
                local_30 = local_30 + (uint)*(ushort *)(iVar13 + (int)puVar12);
                local_10 = local_10 + (uint)(*(ushort *)(iVar13 + (int)puVar12) >> 8);
                uVar1 = *(ushort *)(iVar13 + 2 + (int)puVar12);
                uVar2 = *(ushort *)(iVar13 + 4 + (int)puVar12);
                local_2c = local_2c + (uint)uVar1;
                local_28 = local_28 + (uint)uVar2;
                local_c = local_c + (uVar1 >> 8);
                local_8 = local_8 + (uint)(uVar2 >> 8);
                uVar9 = local_4 + 1;
                local_24 = local_24 + 1;
                local_4 = uVar9;
              }
              local_44 = local_44 + 1;
              iVar13 = *local_44;
              piVar7 = piVar7 + 3;
            } while (iVar13 != -0x80000000);
            if (uVar9 == 0) goto LAB_10005781;
            uVar3 = (uint)(local_10 * 4) / uVar9;
            local_c = (local_c * 4) / uVar9;
            uVar9 = (uint)(local_8 * 4) / uVar9;
          }
          if (local_24 == 0) {
            uVar4 = (uint)*puVar12 * 8;
            uVar5 = (uint)puVar12[1] * 8;
            local_24 = (uint)puVar12[2] * 8;
          }
          else {
            uVar4 = (uint)(local_30 * 8) / local_24;
            uVar5 = (uint)(local_2c * 8) / local_24;
            local_24 = (uint)(local_28 * 8) / local_24;
          }
          if (local_20 < uVar3) {
            local_48 = (int *)(uVar3 - local_20);
          }
          else {
            local_48 = (int *)(local_20 - uVar3);
          }
          if (local_1c < local_c) {
            local_44 = (int *)(local_c - local_1c);
          }
          else {
            local_44 = (int *)(local_1c - local_c);
          }
          if (uVar8 < uVar9) {
            iVar13 = uVar9 - uVar8;
          }
          else {
            iVar13 = uVar8 - uVar9;
          }
          iVar13 = iVar13 + (int)local_44 + (int)local_48;
          iVar6 = (int)(((uint)*puVar12 - (uVar4 >> 3)) * *(int *)(param_1 + 0x188 + iVar13 * 4)) /
                  100 + (uint)*puVar12;
          iVar10 = (int)(((uint)puVar12[1] - (uVar5 >> 3)) * *(int *)(param_1 + 0x6160 + iVar13 * 4)
                        ) / 100 + (uint)puVar12[1];
          iVar13 = (int)(((uint)puVar12[2] - (local_24 >> 3)) *
                        *(int *)(param_1 + 0xc138 + iVar13 * 4)) / 100 + (uint)puVar12[2];
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xffff < iVar6) {
            iVar6 = 0xffff;
          }
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xffff < iVar10) {
            iVar10 = 0xffff;
          }
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          else if (0xffff < iVar13) {
            iVar13 = 0xffff;
          }
          local_40[2] = (short)iVar13;
          *local_40 = (short)iVar6;
          local_40[1] = (short)iVar10;
          local_40 = local_40 + 3;
          iVar13 = param_2[6];
          local_54 = local_54 + 1;
          puVar12 = puVar12 + 3;
        } while (local_54 < *param_2 + iVar13);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10005e80 @ 10005e80 */

void FUN_10005e80(byte *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_20;
  int *local_18;
  int local_14;
  undefined1 *local_10;
  uint local_8;
  
  iVar3 = (int)param_1;
  uVar2 = *(uint *)((int)param_1 + 0x633a8);
  iVar6 = param_2[7];
  if (iVar6 < param_2[2] + iVar6) {
    iVar8 = param_2[6];
    iVar11 = iVar8 + *param_2;
    do {
      iVar9 = *(int *)(iVar3 + 0x18);
      iVar10 = *(int *)(iVar3 + 0xc);
      local_10 = (undefined1 *)
                 (((int)((uint)*(byte *)(iVar9 + 0x15) * (uint)*(byte *)(iVar9 + 0x14)) >> 3) *
                  (iVar8 - *(int *)(iVar9 + 0x18)) +
                  (iVar6 - *(int *)(iVar9 + 0x1c)) * *(int *)(iVar9 + 4) + *(int *)(iVar3 + 0x10));
      if (iVar6 < *(int *)(iVar10 + 0x1c)) {
        param_1 = (byte *)(((int)((uint)*(byte *)(iVar3 + 0x55) * (uint)*(byte *)(iVar3 + 0x54)) >>
                           3) * (iVar8 - *(int *)(iVar3 + 0x58)) +
                           (iVar6 - *(int *)(iVar3 + 0x5c)) * *(int *)(iVar3 + 0x44) +
                          *(int *)(iVar3 + 0x3c));
      }
      else {
        param_1 = (byte *)(((int)((uint)*(byte *)(iVar10 + 0x15) * (uint)*(byte *)(iVar10 + 0x14))
                           >> 3) * (iVar8 - *(int *)(iVar10 + 0x18)) +
                           (iVar6 - *(int *)(iVar10 + 0x1c)) * *(int *)(iVar10 + 4) +
                          *(int *)(iVar3 + 4));
      }
      local_20 = iVar8;
      if (iVar8 < iVar11) {
        do {
          local_8 = 0;
          if (*(int *)(iVar3 + 0x633b4) != 0) {
            iVar11 = *(int *)(iVar3 + 0xc);
            piVar7 = (int *)(iVar3 + 0x633b0);
            do {
              iVar10 = piVar7[-1] + local_20;
              iVar8 = *(int *)(iVar3 + 0x78);
              iVar9 = *piVar7 + iVar6;
              if ((iVar8 <= iVar10) &&
                 (iVar12 = iVar8 + *(int *)(iVar3 + 0x60), iVar8 = iVar10, iVar12 <= iVar10)) {
                iVar8 = iVar12 + -1;
              }
              iVar10 = *(int *)(iVar3 + 0x7c);
              if ((iVar10 <= iVar9) &&
                 (iVar12 = iVar10 + *(int *)(iVar3 + 0x68), iVar10 = iVar9, iVar12 <= iVar9)) {
                iVar10 = iVar12 + -1;
              }
              if (iVar10 < *(int *)(iVar11 + 0x1c)) {
                pbVar4 = (byte *)(((int)((uint)*(byte *)(iVar3 + 0x55) *
                                        (uint)*(byte *)(iVar3 + 0x54)) >> 3) *
                                  (iVar8 - *(int *)(iVar3 + 0x58)) +
                                  (iVar10 - *(int *)(iVar3 + 0x5c)) * *(int *)(iVar3 + 0x44) +
                                 *(int *)(iVar3 + 0x3c));
              }
              else {
                pbVar4 = (byte *)(((int)((uint)*(byte *)(iVar11 + 0x15) *
                                        (uint)*(byte *)(iVar11 + 0x14)) >> 3) *
                                  (iVar8 - *(int *)(iVar11 + 0x18)) +
                                  (iVar10 - *(int *)(iVar11 + 0x1c)) * *(int *)(iVar11 + 4) +
                                 *(int *)(iVar3 + 4));
              }
              local_8 = local_8 + *pbVar4;
              piVar1 = piVar7 + 4;
              piVar7 = piVar7 + 3;
            } while (*piVar1 != 0);
          }
          iVar11 = 0;
          iVar8 = 0;
          local_14 = 0;
          if (*(int *)(iVar3 + 0x79dc0) != 0) {
            iVar10 = *(int *)(iVar3 + 0xc);
            local_18 = (int *)(iVar3 + 0x79db8);
            iVar9 = iVar3;
            do {
              iVar12 = *local_18 + local_20;
              iVar11 = *(int *)(iVar3 + 0x78);
              iVar9 = *(int *)(iVar9 + 0x79dbc) + iVar6;
              if ((iVar11 <= iVar12) &&
                 (iVar5 = iVar11 + *(int *)(iVar3 + 0x60), iVar11 = iVar12, iVar5 <= iVar12)) {
                iVar11 = iVar5 + -1;
              }
              iVar12 = *(int *)(iVar3 + 0x7c);
              if ((iVar12 <= iVar9) &&
                 (iVar5 = iVar12 + *(int *)(iVar3 + 0x68), iVar12 = iVar9, iVar5 <= iVar9)) {
                iVar12 = iVar5 + -1;
              }
              if (iVar12 < *(int *)(iVar10 + 0x1c)) {
                pbVar4 = (byte *)(((int)((uint)*(byte *)(iVar3 + 0x55) *
                                        (uint)*(byte *)(iVar3 + 0x54)) >> 3) *
                                  (iVar11 - *(int *)(iVar3 + 0x58)) +
                                  (iVar12 - *(int *)(iVar3 + 0x5c)) * *(int *)(iVar3 + 0x44) +
                                 *(int *)(iVar3 + 0x3c));
              }
              else {
                pbVar4 = (byte *)(((int)((uint)*(byte *)(iVar10 + 0x15) *
                                        (uint)*(byte *)(iVar10 + 0x14)) >> 3) *
                                  (iVar11 - *(int *)(iVar10 + 0x18)) +
                                  (iVar12 - *(int *)(iVar10 + 0x1c)) * *(int *)(iVar10 + 4) +
                                 *(int *)(iVar3 + 4));
              }
              iVar11 = local_14 +
                       (uint)(byte)(&DAT_100c03a8)[(uint)*param_1 * 0x100 + (uint)*pbVar4];
              local_18 = local_18 + 3;
              iVar8 = iVar8 + 1;
              iVar9 = iVar3 + iVar8 * 0xc;
              local_14 = iVar11;
            } while (*(int *)(iVar3 + 0x79dc0 + iVar8 * 0xc) != 0);
          }
          iVar11 = (int)(((uint)*param_1 - local_8 / uVar2) *
                        *(int *)(iVar3 + 0x6160 + iVar11 * 0xc)) / 100 + (uint)*param_1;
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          else if (0xff < iVar11) {
            iVar11 = 0xff;
          }
          param_1 = param_1 + 1;
          *local_10 = (char)iVar11;
          local_10 = local_10 + 1;
          iVar8 = param_2[6];
          local_20 = local_20 + 1;
          iVar11 = iVar8 + *param_2;
        } while (local_20 < iVar11);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_100061d0 @ 100061d0 */

void FUN_100061d0(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int local_14;
  
  iVar4 = (int)param_1;
  uVar1 = *(uint *)((int)param_1 + 0x633a8);
  iVar9 = param_2[7];
  if (iVar9 < param_2[2] + iVar9) {
    do {
      iVar5 = param_2[6];
      iVar2 = *(int *)(iVar4 + 0x18);
      iVar3 = *(int *)(iVar4 + 0xc);
      param_1 = (undefined1 *)
                (((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >> 3) *
                 (iVar5 - *(int *)(iVar2 + 0x18)) +
                 (iVar9 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) + *(int *)(iVar4 + 0x10));
      if (iVar9 < *(int *)(iVar3 + 0x1c)) {
        pbVar10 = (byte *)(((int)((uint)*(byte *)(iVar4 + 0x55) * (uint)*(byte *)(iVar4 + 0x54)) >>
                           3) * (iVar5 - *(int *)(iVar4 + 0x58)) +
                           (iVar9 - *(int *)(iVar4 + 0x5c)) * *(int *)(iVar4 + 0x44) +
                          *(int *)(iVar4 + 0x3c));
      }
      else {
        pbVar10 = (byte *)(((int)((uint)*(byte *)(iVar3 + 0x15) * (uint)*(byte *)(iVar3 + 0x14)) >>
                           3) * (iVar5 - *(int *)(iVar3 + 0x18)) +
                           (iVar9 - *(int *)(iVar3 + 0x1c)) * *(int *)(iVar3 + 4) +
                          *(int *)(iVar4 + 4));
      }
      FUN_10002970(iVar4 + 0x61e4c,*(undefined4 *)(iVar4 + 0x1c),iVar3,iVar9);
      FUN_10002970(iVar4 + 0x78858,*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar4 + 0xc),iVar9)
      ;
      iVar5 = iVar4 + 0x6ccf8;
      uVar7 = 0;
      iVar2 = *(int *)(iVar4 + 0x6ccf8);
      while (iVar2 != -0x80000000) {
        piVar6 = (int *)(iVar5 + 4);
        iVar5 = iVar5 + 4;
        uVar7 = uVar7 + pbVar10[iVar2];
        iVar2 = *piVar6;
      }
      local_14 = param_2[6];
      if (local_14 < *param_2 + local_14) {
        do {
          if (*(int *)(iVar4 + 0x6de00) < 0x11) {
            switch(*(int *)(iVar4 + 0x6de00)) {
            case 0x10:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72260)];
            case 0xf:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x7225c)];
            case 0xe:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72258)];
            case 0xd:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72254)];
            case 0xc:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72250)];
            case 0xb:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x7224c)];
            case 10:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72248)];
            case 9:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72244)];
            case 8:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72240)];
            case 7:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x7223c)];
            case 6:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72238)];
            case 5:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72234)];
            case 4:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72230)];
            case 3:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x7222c)];
            case 2:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72228)];
            case 1:
              uVar7 = uVar7 + pbVar10[*(int *)(iVar4 + 0x72224)];
            }
          }
          else {
            piVar6 = (int *)(iVar4 + 0x72224);
            iVar5 = *(int *)(iVar4 + 0x72224);
            while (iVar5 != -0x80000000) {
              piVar6 = piVar6 + 1;
              uVar7 = uVar7 + pbVar10[iVar5];
              iVar5 = *piVar6;
            }
          }
          uVar8 = (uint)*pbVar10;
          iVar5 = uVar8 * 0x100;
          iVar5 = (int)((uVar8 - uVar7 / uVar1) *
                       *(int *)(iVar4 + 0x6160 +
                               ((uint)(byte)(&DAT_100c03a8)
                                            [iVar5 + (uint)pbVar10[*(int *)(iVar4 + 0x7e1e8)]] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar5 + (uint)pbVar10[*(int *)(iVar4 + 0x7e1d8)]] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar5 + (uint)pbVar10[*(int *)(iVar4 + 0x7e1e4)]] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar5 + (uint)pbVar10[*(int *)(iVar4 + 0x7e1f4)]] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar5 + (uint)pbVar10[*(int *)(iVar4 + 0x7e1f0)]] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar5 + (uint)pbVar10[*(int *)(iVar4 + 0x7e1e0)]] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar5 + (uint)pbVar10[*(int *)(iVar4 + 0x7e1dc)]] +
                               (uint)(byte)(&DAT_100c03a8)
                                           [iVar5 + (uint)pbVar10[*(int *)(iVar4 + 0x7e1ec)]]) * 0xc
                               )) / 100 + uVar8;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          piVar6 = (int *)(iVar4 + 0x77750);
          *param_1 = (char)iVar5;
          iVar5 = *piVar6;
          while (iVar5 != -0x80000000) {
            piVar6 = piVar6 + 1;
            uVar7 = uVar7 - pbVar10[iVar5];
            iVar5 = *piVar6;
          }
          param_1 = param_1 + 1;
          local_14 = local_14 + 1;
          pbVar10 = pbVar10 + 1;
        } while (local_14 < param_2[6] + *param_2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_100065c0 @ 100065c0 */

void FUN_100065c0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *local_20;
  int local_1c;
  int *local_14;
  int local_10;
  undefined2 *local_c;
  uint local_8;
  
  uVar2 = *(uint *)(param_1 + 0x633a8);
  iVar7 = param_2[7];
  if (iVar7 < param_2[2] + iVar7) {
    iVar6 = param_2[6];
    iVar10 = iVar6 + *param_2;
    do {
      iVar8 = *(int *)(param_1 + 0x18);
      iVar9 = *(int *)(param_1 + 0xc);
      local_c = (undefined2 *)
                (((int)((uint)*(byte *)(iVar8 + 0x15) * (uint)*(byte *)(iVar8 + 0x14)) >> 3) *
                 (iVar6 - *(int *)(iVar8 + 0x18)) +
                 (iVar7 - *(int *)(iVar8 + 0x1c)) * *(int *)(iVar8 + 4) + *(int *)(param_1 + 0x10));
      if (iVar7 < *(int *)(iVar9 + 0x1c)) {
        local_20 = (ushort *)
                   (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3)
                    * (iVar6 - *(int *)(param_1 + 0x58)) +
                    (iVar7 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                   *(int *)(param_1 + 0x3c));
      }
      else {
        local_20 = (ushort *)
                   (((int)((uint)*(byte *)(iVar9 + 0x15) * (uint)*(byte *)(iVar9 + 0x14)) >> 3) *
                    (iVar6 - *(int *)(iVar9 + 0x18)) +
                    (iVar7 - *(int *)(iVar9 + 0x1c)) * *(int *)(iVar9 + 4) + *(int *)(param_1 + 4));
      }
      local_1c = iVar6;
      if (iVar6 < iVar10) {
        do {
          local_8 = 0;
          if (*(int *)(param_1 + 0x633b4) != 0) {
            iVar10 = *(int *)(param_1 + 0xc);
            piVar5 = (int *)(param_1 + 0x633b0);
            do {
              iVar9 = piVar5[-1] + local_1c;
              iVar6 = *(int *)(param_1 + 0x78);
              iVar8 = *piVar5 + iVar7;
              if ((iVar6 <= iVar9) &&
                 (iVar11 = iVar6 + *(int *)(param_1 + 0x60), iVar6 = iVar9, iVar11 <= iVar9)) {
                iVar6 = iVar11 + -1;
              }
              iVar9 = *(int *)(param_1 + 0x7c);
              if ((iVar9 <= iVar8) &&
                 (iVar11 = iVar9 + *(int *)(param_1 + 0x68), iVar9 = iVar8, iVar11 <= iVar8)) {
                iVar9 = iVar11 + -1;
              }
              if (iVar9 < *(int *)(iVar10 + 0x1c)) {
                puVar3 = (ushort *)
                         (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                          >> 3) * (iVar6 - *(int *)(param_1 + 0x58)) +
                          (iVar9 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                         *(int *)(param_1 + 0x3c));
              }
              else {
                puVar3 = (ushort *)
                         (((int)((uint)*(byte *)(iVar10 + 0x15) * (uint)*(byte *)(iVar10 + 0x14)) >>
                          3) * (iVar6 - *(int *)(iVar10 + 0x18)) +
                          (iVar9 - *(int *)(iVar10 + 0x1c)) * *(int *)(iVar10 + 4) +
                         *(int *)(param_1 + 4));
              }
              local_8 = local_8 + *puVar3;
              piVar1 = piVar5 + 4;
              piVar5 = piVar5 + 3;
            } while (*piVar1 != 0);
          }
          iVar10 = 0;
          iVar6 = 0;
          local_10 = 0;
          if (*(int *)(param_1 + 0x79dc0) != 0) {
            iVar9 = *(int *)(param_1 + 0xc);
            local_14 = (int *)(param_1 + 0x79db8);
            iVar8 = param_1;
            do {
              iVar11 = *local_14 + local_1c;
              iVar10 = *(int *)(param_1 + 0x78);
              iVar8 = *(int *)(iVar8 + 0x79dbc) + iVar7;
              if ((iVar10 <= iVar11) &&
                 (iVar4 = iVar10 + *(int *)(param_1 + 0x60), iVar10 = iVar11, iVar4 <= iVar11)) {
                iVar10 = iVar4 + -1;
              }
              iVar11 = *(int *)(param_1 + 0x7c);
              if ((iVar11 <= iVar8) &&
                 (iVar4 = iVar11 + *(int *)(param_1 + 0x68), iVar11 = iVar8, iVar4 <= iVar8)) {
                iVar11 = iVar4 + -1;
              }
              if (iVar11 < *(int *)(iVar9 + 0x1c)) {
                iVar10 = ((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                         >> 3) * (iVar10 - *(int *)(param_1 + 0x58)) +
                         (iVar11 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                         *(int *)(param_1 + 0x3c);
              }
              else {
                iVar10 = ((int)((uint)*(byte *)(iVar9 + 0x15) * (uint)*(byte *)(iVar9 + 0x14)) >> 3)
                         * (iVar10 - *(int *)(iVar9 + 0x18)) +
                         (iVar11 - *(int *)(iVar9 + 0x1c)) * *(int *)(iVar9 + 4) +
                         *(int *)(param_1 + 4);
              }
              local_14 = local_14 + 3;
              iVar10 = local_10 +
                       (uint)(byte)(&DAT_100c03a8)
                                   [(uint)*(byte *)(iVar10 + 1) +
                                    (uint)*(byte *)((int)local_20 + 1) * 0x100];
              iVar6 = iVar6 + 1;
              iVar8 = param_1 + iVar6 * 0xc;
              local_10 = iVar10;
            } while (*(int *)(param_1 + 0x79dc0 + iVar6 * 0xc) != 0);
          }
          iVar10 = (int)(((uint)*local_20 - local_8 / uVar2) *
                        *(int *)(param_1 + 0x6160 + iVar10 * 0xc)) / 100 + (uint)*local_20;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xffff < iVar10) {
            iVar10 = 0xffff;
          }
          local_20 = local_20 + 1;
          *local_c = (short)iVar10;
          iVar6 = param_2[6];
          local_c = local_c + 1;
          local_1c = local_1c + 1;
          iVar10 = iVar6 + *param_2;
        } while (local_1c < iVar10);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10006910 @ 10006910 */

void FUN_10006910(undefined2 *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int local_14;
  
  iVar5 = (int)param_1;
  uVar2 = *(uint *)((int)param_1 + 0x633a8);
  iVar9 = param_2[7];
  if (iVar9 < param_2[2] + iVar9) {
    do {
      iVar6 = param_2[6];
      iVar3 = *(int *)(iVar5 + 0x18);
      iVar4 = *(int *)(iVar5 + 0xc);
      param_1 = (undefined2 *)
                (((int)((uint)*(byte *)(iVar3 + 0x15) * (uint)*(byte *)(iVar3 + 0x14)) >> 3) *
                 (iVar6 - *(int *)(iVar3 + 0x18)) +
                 (iVar9 - *(int *)(iVar3 + 0x1c)) * *(int *)(iVar3 + 4) + *(int *)(iVar5 + 0x10));
      if (iVar9 < *(int *)(iVar4 + 0x1c)) {
        puVar10 = (ushort *)
                  (((int)((uint)*(byte *)(iVar5 + 0x55) * (uint)*(byte *)(iVar5 + 0x54)) >> 3) *
                   (iVar6 - *(int *)(iVar5 + 0x58)) +
                   (iVar9 - *(int *)(iVar5 + 0x5c)) * *(int *)(iVar5 + 0x44) +
                  *(int *)(iVar5 + 0x3c));
      }
      else {
        puVar10 = (ushort *)
                  (((int)((uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x14)) >> 3) *
                   (iVar6 - *(int *)(iVar4 + 0x18)) +
                   (iVar9 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) + *(int *)(iVar5 + 4));
      }
      FUN_10002970(iVar5 + 0x61e4c,*(undefined4 *)(iVar5 + 0x1c),iVar4,iVar9);
      FUN_10002970(iVar5 + 0x78858,*(undefined4 *)(iVar5 + 0x1c),*(undefined4 *)(iVar5 + 0xc),iVar9)
      ;
      iVar6 = iVar5 + 0x6ccf8;
      uVar8 = 0;
      iVar3 = *(int *)(iVar5 + 0x6ccf8);
      while (iVar3 != -0x80000000) {
        piVar7 = (int *)(iVar6 + 4);
        iVar6 = iVar6 + 4;
        uVar8 = uVar8 + *(ushort *)(iVar3 + (int)puVar10);
        iVar3 = *piVar7;
      }
      local_14 = param_2[6];
      if (local_14 < *param_2 + local_14) {
        do {
          if (*(int *)(iVar5 + 0x6de00) < 0x11) {
            switch(*(int *)(iVar5 + 0x6de00)) {
            case 0x10:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72260) + (int)puVar10);
            case 0xf:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x7225c) + (int)puVar10);
            case 0xe:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72258) + (int)puVar10);
            case 0xd:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72254) + (int)puVar10);
            case 0xc:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72250) + (int)puVar10);
            case 0xb:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x7224c) + (int)puVar10);
            case 10:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72248) + (int)puVar10);
            case 9:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72244) + (int)puVar10);
            case 8:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72240) + (int)puVar10);
            case 7:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x7223c) + (int)puVar10);
            case 6:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72238) + (int)puVar10);
            case 5:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72234) + (int)puVar10);
            case 4:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72230) + (int)puVar10);
            case 3:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x7222c) + (int)puVar10);
            case 2:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72228) + (int)puVar10);
            case 1:
              uVar8 = uVar8 + *(ushort *)(*(int *)(iVar5 + 0x72224) + (int)puVar10);
            }
          }
          else {
            piVar7 = (int *)(iVar5 + 0x72224);
            iVar6 = *(int *)(iVar5 + 0x72224);
            while (iVar6 != -0x80000000) {
              piVar7 = piVar7 + 1;
              uVar8 = uVar8 + *(ushort *)(iVar6 + (int)puVar10);
              iVar6 = *piVar7;
            }
          }
          uVar1 = *puVar10;
          iVar6 = (uint)(uVar1 >> 8) * 0x100;
          iVar6 = (int)(((uint)uVar1 - uVar8 / uVar2) *
                       *(int *)(iVar5 + 0x6160 +
                               ((uint)(byte)(&DAT_100c03a8)
                                            [iVar6 + (uint)*(byte *)(*(int *)(iVar5 + 0x7e1d8) + 1 +
                                                                    (int)puVar10)] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar6 + (uint)*(byte *)(*(int *)(iVar5 + 0x7e1e0) + 1 +
                                                                    (int)puVar10)] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar6 + (uint)*(byte *)(*(int *)(iVar5 + 0x7e1e8) + 1 +
                                                                    (int)puVar10)] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar6 + (uint)*(byte *)(*(int *)(iVar5 + 0x7e1f0) + 1 +
                                                                    (int)puVar10)] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar6 + (uint)*(byte *)(*(int *)(iVar5 + 0x7e1dc) + 1 +
                                                                    (int)puVar10)] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar6 + (uint)*(byte *)(*(int *)(iVar5 + 0x7e1e4) + 1 +
                                                                    (int)puVar10)] +
                                (uint)(byte)(&DAT_100c03a8)
                                            [iVar6 + (uint)*(byte *)(*(int *)(iVar5 + 0x7e1ec) + 1 +
                                                                    (int)puVar10)] +
                               (uint)(byte)(&DAT_100c03a8)
                                           [iVar6 + (uint)*(byte *)(*(int *)(iVar5 + 0x7e1f4) + 1 +
                                                                   (int)puVar10)]) * 0xc)) / 100 +
                  (uint)uVar1;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xffff < iVar6) {
            iVar6 = 0xffff;
          }
          piVar7 = (int *)(iVar5 + 0x77750);
          *param_1 = (short)iVar6;
          iVar6 = *piVar7;
          while (iVar6 != -0x80000000) {
            piVar7 = piVar7 + 1;
            uVar8 = uVar8 - *(ushort *)(iVar6 + (int)puVar10);
            iVar6 = *piVar7;
          }
          param_1 = param_1 + 1;
          local_14 = local_14 + 1;
          puVar10 = puVar10 + 1;
        } while (local_14 < param_2[6] + *param_2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10006d10 @ 10006d10 */

void FUN_10006d10(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  undefined1 *local_38;
  int local_24;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar2 = *(uint *)(param_1 + 0x633a8);
  iVar6 = param_2[7];
  if (iVar6 < param_2[2] + iVar6) {
    iVar9 = param_2[6];
    iVar5 = iVar9 + *param_2;
    do {
      iVar8 = *(int *)(param_1 + 0x18);
      local_38 = (undefined1 *)
                 (((int)((uint)*(byte *)(iVar8 + 0x15) * (uint)*(byte *)(iVar8 + 0x14)) >> 3) *
                  (iVar9 - *(int *)(iVar8 + 0x18)) +
                  (iVar6 - *(int *)(iVar8 + 0x1c)) * *(int *)(iVar8 + 4) + *(int *)(param_1 + 0x10))
      ;
      iVar8 = *(int *)(param_1 + 0xc);
      if (iVar6 < *(int *)(iVar8 + 0x1c)) {
        local_48 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)
                                  ) >> 3) * (iVar9 - *(int *)(param_1 + 0x58)) +
                            (iVar6 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                           *(int *)(param_1 + 0x3c));
      }
      else {
        local_48 = (byte *)(((int)((uint)*(byte *)(iVar8 + 0x15) * (uint)*(byte *)(iVar8 + 0x14)) >>
                            3) * (iVar9 - *(int *)(iVar8 + 0x18)) +
                            (iVar6 - *(int *)(iVar8 + 0x1c)) * *(int *)(iVar8 + 4) +
                           *(int *)(param_1 + 4));
      }
      local_44 = iVar9;
      if (iVar9 < iVar5) {
        do {
          local_8 = 0;
          local_c = 0;
          local_10 = 0;
          if (*(int *)(param_1 + 0x633b4) != 0) {
            iVar5 = *(int *)(param_1 + 0xc);
            piVar7 = (int *)(param_1 + 0x633b0);
            do {
              iVar10 = piVar7[-1] + local_44;
              iVar9 = *(int *)(param_1 + 0x78);
              iVar8 = *piVar7 + iVar6;
              if ((iVar9 <= iVar10) &&
                 (iVar11 = iVar9 + *(int *)(param_1 + 0x60), iVar9 = iVar10, iVar11 <= iVar10)) {
                iVar9 = iVar11 + -1;
              }
              iVar10 = *(int *)(param_1 + 0x7c);
              if ((iVar10 <= iVar8) &&
                 (iVar11 = iVar10 + *(int *)(param_1 + 0x68), iVar10 = iVar8, iVar11 <= iVar8)) {
                iVar10 = iVar11 + -1;
              }
              if (iVar10 < *(int *)(iVar5 + 0x1c)) {
                pbVar3 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) *
                                        (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                                  (iVar9 - *(int *)(param_1 + 0x58)) +
                                  (iVar10 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                                 *(int *)(param_1 + 0x3c));
              }
              else {
                pbVar3 = (byte *)(((int)((uint)*(byte *)(iVar5 + 0x15) *
                                        (uint)*(byte *)(iVar5 + 0x14)) >> 3) *
                                  (iVar9 - *(int *)(iVar5 + 0x18)) +
                                  (iVar10 - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 4) +
                                 *(int *)(param_1 + 4));
              }
              local_10 = local_10 + *pbVar3;
              local_c = local_c + pbVar3[1];
              local_8 = local_8 + pbVar3[2];
              piVar1 = piVar7 + 4;
              piVar7 = piVar7 + 3;
            } while (*piVar1 != 0);
          }
          iVar5 = 0;
          local_3c = 0;
          if (*(int *)(param_1 + 0x79dc0) != 0) {
            iVar8 = *(int *)(param_1 + 0xc);
            local_40 = (int *)(param_1 + 0x79db8);
            iVar9 = param_1;
            do {
              iVar11 = *local_40 + local_44;
              iVar10 = *(int *)(param_1 + 0x78);
              iVar9 = *(int *)(iVar9 + 0x79dbc) + iVar6;
              if ((iVar10 <= iVar11) &&
                 (iVar4 = iVar10 + *(int *)(param_1 + 0x60), iVar10 = iVar11, iVar4 <= iVar11)) {
                iVar10 = iVar4 + -1;
              }
              iVar11 = *(int *)(param_1 + 0x7c);
              if ((iVar11 <= iVar9) &&
                 (iVar4 = iVar11 + *(int *)(param_1 + 0x68), iVar11 = iVar9, iVar4 <= iVar9)) {
                iVar11 = iVar4 + -1;
              }
              if (iVar11 < *(int *)(iVar8 + 0x1c)) {
                pbVar3 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) *
                                        (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                                  (iVar10 - *(int *)(param_1 + 0x58)) +
                                  (iVar11 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                                 *(int *)(param_1 + 0x3c));
              }
              else {
                pbVar3 = (byte *)(((int)((uint)*(byte *)(iVar8 + 0x15) *
                                        (uint)*(byte *)(iVar8 + 0x14)) >> 3) *
                                  (iVar10 - *(int *)(iVar8 + 0x18)) +
                                  (iVar11 - *(int *)(iVar8 + 0x1c)) * *(int *)(iVar8 + 4) +
                                 *(int *)(param_1 + 4));
              }
              local_40 = local_40 + 3;
              iVar5 = (uint)(byte)(&DAT_100c03a8)[(uint)*local_48 * 0x100 + (uint)*pbVar3] + iVar5 +
                      (uint)(byte)(&DAT_100c03a8)[(uint)local_48[1] * 0x100 + (uint)pbVar3[1]] +
                      (uint)(byte)(&DAT_100c03a8)[(uint)local_48[2] * 0x100 + (uint)pbVar3[2]];
              local_3c = local_3c + 1;
              iVar9 = param_1 + local_3c * 0xc;
            } while (*(int *)(param_1 + 0x79dc0 + local_3c * 0xc) != 0);
          }
          iVar9 = (int)(((uint)*local_48 - local_10 / uVar2) * *(int *)(param_1 + 0x188 + iVar5 * 4)
                       ) / 100 + (uint)*local_48;
          local_24 = (int)(((uint)local_48[1] - local_c / uVar2) *
                          *(int *)(param_1 + 0x6160 + iVar5 * 4)) / 100 + (uint)local_48[1];
          iVar5 = (int)(((uint)local_48[2] - local_8 / uVar2) *
                       *(int *)(param_1 + 0xc138 + iVar5 * 4)) / 100 + (uint)local_48[2];
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          else if (0xff < iVar9) {
            iVar9 = 0xff;
          }
          if (local_24 < 0) {
            local_24 = 0;
          }
          else if (0xff < local_24) {
            local_24 = 0xff;
          }
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          local_38[2] = (char)iVar5;
          local_38[1] = (undefined1)local_24;
          *local_38 = (char)iVar9;
          local_38 = local_38 + 3;
          iVar9 = param_2[6];
          local_44 = local_44 + 1;
          local_48 = local_48 + 3;
          iVar5 = iVar9 + *param_2;
        } while (local_44 < iVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10007160 @ 10007160 */

void FUN_10007160(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  undefined1 *local_34;
  int local_2c;
  int local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar1 = *(uint *)(param_1 + 0x633a8);
  iVar7 = param_2[7];
  if (iVar7 < param_2[2] + iVar7) {
    do {
      iVar11 = param_2[6];
      iVar10 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0xc);
      local_34 = (undefined1 *)
                 (((int)((uint)*(byte *)(iVar10 + 0x15) * (uint)*(byte *)(iVar10 + 0x14)) >> 3) *
                  (iVar11 - *(int *)(iVar10 + 0x18)) +
                  (iVar7 - *(int *)(iVar10 + 0x1c)) * *(int *)(iVar10 + 4) +
                 *(int *)(param_1 + 0x10));
      if (iVar7 < *(int *)(iVar2 + 0x1c)) {
        pbVar13 = (byte *)(((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                           >> 3) * (iVar11 - *(int *)(param_1 + 0x58)) +
                           (iVar7 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                          *(int *)(param_1 + 0x3c));
      }
      else {
        pbVar13 = (byte *)(((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >>
                           3) * (iVar11 - *(int *)(iVar2 + 0x18)) +
                           (iVar7 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) +
                          *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x61e4c,*(undefined4 *)(param_1 + 0x1c),iVar2,iVar7);
      FUN_10002970(param_1 + 0x78858,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar7);
      piVar8 = (int *)(param_1 + 0x6ccf8);
      local_8 = 0;
      local_c = 0;
      local_10 = 0;
      iVar11 = *(int *)(param_1 + 0x6ccf8);
      while (iVar11 != -0x80000000) {
        local_10 = local_10 + pbVar13[iVar11];
        local_8 = local_8 + pbVar13[iVar11 + 2];
        piVar8 = piVar8 + 1;
        local_c = local_c + pbVar13[iVar11 + 1];
        iVar11 = *piVar8;
      }
      local_2c = param_2[6];
      if (local_2c < *param_2 + local_2c) {
        do {
          if (*(int *)(param_1 + 0x6de00) < 0x11) {
            switch(*(int *)(param_1 + 0x6de00)) {
            case 0x10:
              iVar11 = *(int *)(param_1 + 0x72260);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 0xf:
              iVar11 = *(int *)(param_1 + 0x7225c);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 0xe:
              iVar11 = *(int *)(param_1 + 0x72258);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 0xd:
              iVar11 = *(int *)(param_1 + 0x72254);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 0xc:
              iVar11 = *(int *)(param_1 + 0x72250);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 0xb:
              iVar11 = *(int *)(param_1 + 0x7224c);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 10:
              iVar11 = *(int *)(param_1 + 0x72248);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 9:
              iVar11 = *(int *)(param_1 + 0x72244);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 8:
              iVar11 = *(int *)(param_1 + 0x72240);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 7:
              iVar11 = *(int *)(param_1 + 0x7223c);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 6:
              iVar11 = *(int *)(param_1 + 0x72238);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 5:
              iVar11 = *(int *)(param_1 + 0x72234);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 4:
              iVar11 = *(int *)(param_1 + 0x72230);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 3:
              iVar11 = *(int *)(param_1 + 0x7222c);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 2:
              iVar11 = *(int *)(param_1 + 0x72228);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            case 1:
              iVar11 = *(int *)(param_1 + 0x72224);
              local_10 = local_10 + pbVar13[iVar11];
              local_c = local_c + pbVar13[iVar11 + 1];
              local_8 = local_8 + pbVar13[iVar11 + 2];
            }
          }
          else {
            piVar8 = (int *)(param_1 + 0x72224);
            iVar11 = *(int *)(param_1 + 0x72224);
            while (iVar11 != -0x80000000) {
              local_10 = local_10 + pbVar13[iVar11];
              local_8 = local_8 + pbVar13[iVar11 + 2];
              piVar8 = piVar8 + 1;
              local_c = local_c + pbVar13[iVar11 + 1];
              iVar11 = *piVar8;
            }
          }
          iVar12 = (uint)*pbVar13 * 0x100;
          iVar6 = (uint)pbVar13[2] * 0x100;
          iVar9 = (uint)pbVar13[1] * 0x100;
          iVar11 = *(int *)(param_1 + 0x7e1e0);
          iVar10 = *(int *)(param_1 + 0x7e1e4);
          iVar2 = *(int *)(param_1 + 0x7e1e8);
          iVar3 = *(int *)(param_1 + 0x7e1ec);
          iVar4 = *(int *)(param_1 + 0x7e1f0);
          iVar5 = *(int *)(param_1 + 0x7e1f4);
          iVar11 = (uint)(byte)(&DAT_100c03a8)[iVar12 + (uint)pbVar13[iVar5]] +
                   (uint)(byte)(&DAT_100c03a8)[iVar9 + (uint)pbVar13[iVar4 + 1]] +
                   (uint)(byte)(&DAT_100c03a8)[(uint)pbVar13[iVar4 + 2] + iVar6] +
                   (uint)(byte)(&DAT_100c03a8)[iVar12 + (uint)pbVar13[iVar4]] +
                   (uint)(byte)(&DAT_100c03a8)[iVar12 + (uint)pbVar13[iVar3]] +
                   (uint)(byte)(&DAT_100c03a8)[iVar12 + (uint)pbVar13[iVar2]] +
                   (uint)(byte)(&DAT_100c03a8)[iVar12 + (uint)pbVar13[iVar10]] +
                   (uint)(byte)(&DAT_100c03a8)[iVar12 + (uint)pbVar13[iVar11]] +
                   (uint)(byte)(&DAT_100c03a8)[iVar12 + (uint)pbVar13[*(int *)(param_1 + 0x7e1dc)]]
                   + (uint)(byte)(&DAT_100c03a8)
                                 [iVar9 + (uint)(pbVar13 + *(int *)(param_1 + 0x7e1d8))[1]] +
                     (uint)(byte)(&DAT_100c03a8)
                                 [(uint)pbVar13[*(int *)(param_1 + 0x7e1d8) + 2] + iVar6] +
                     (uint)(byte)(&DAT_100c03a8)
                                 [iVar12 + (uint)pbVar13[*(int *)(param_1 + 0x7e1d8)]] +
                   (uint)(byte)(&DAT_100c03a8)
                               [iVar9 + (uint)(pbVar13 + *(int *)(param_1 + 0x7e1dc))[1]] +
                   (uint)(byte)(&DAT_100c03a8)
                               [(uint)pbVar13[*(int *)(param_1 + 0x7e1dc) + 2] + iVar6] +
                   (uint)(byte)(&DAT_100c03a8)[iVar9 + (uint)pbVar13[iVar11 + 1]] +
                   (uint)(byte)(&DAT_100c03a8)[(uint)pbVar13[iVar11 + 2] + iVar6] +
                   (uint)(byte)(&DAT_100c03a8)[iVar9 + (uint)pbVar13[iVar10 + 1]] +
                   (uint)(byte)(&DAT_100c03a8)[(uint)pbVar13[iVar10 + 2] + iVar6] +
                   (uint)(byte)(&DAT_100c03a8)[iVar9 + (uint)pbVar13[iVar2 + 1]] +
                   (uint)(byte)(&DAT_100c03a8)[(uint)pbVar13[iVar2 + 2] + iVar6] +
                   (uint)(byte)(&DAT_100c03a8)[iVar9 + (uint)pbVar13[iVar3 + 1]] +
                   (uint)(byte)(&DAT_100c03a8)[(uint)pbVar13[iVar3 + 2] + iVar6] +
                   (uint)(byte)(&DAT_100c03a8)[(uint)pbVar13[iVar5 + 1] + iVar9] +
                   (uint)(byte)(&DAT_100c03a8)[(uint)pbVar13[iVar5 + 2] + iVar6];
          iVar10 = (int)(((uint)*pbVar13 - local_10 / uVar1) *
                        *(int *)(param_1 + 0x188 + iVar11 * 4)) / 100 + (uint)*pbVar13;
          local_18 = (int)(((uint)pbVar13[1] - local_c / uVar1) *
                          *(int *)(param_1 + 0x6160 + iVar11 * 4)) / 100 + (uint)pbVar13[1];
          iVar11 = (int)(((uint)pbVar13[2] - local_8 / uVar1) *
                        *(int *)(param_1 + 0xc138 + iVar11 * 4)) / 100 + (uint)pbVar13[2];
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          if (local_18 < 0) {
            local_18 = 0;
          }
          else if (0xff < local_18) {
            local_18 = 0xff;
          }
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          else if (0xff < iVar11) {
            iVar11 = 0xff;
          }
          *local_34 = (char)iVar10;
          local_34[1] = (undefined1)local_18;
          local_34[2] = (char)iVar11;
          if (*(int *)(param_1 + 0x7332c) < 0x11) {
            switch(*(int *)(param_1 + 0x7332c)) {
            case 0x10:
              iVar11 = *(int *)(param_1 + 0x7778c);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 0xf:
              iVar11 = *(int *)(param_1 + 0x77788);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 0xe:
              iVar11 = *(int *)(param_1 + 0x77784);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 0xd:
              iVar11 = *(int *)(param_1 + 0x77780);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 0xc:
              iVar11 = *(int *)(param_1 + 0x7777c);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 0xb:
              iVar11 = *(int *)(param_1 + 0x77778);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 10:
              iVar11 = *(int *)(param_1 + 0x77774);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 9:
              iVar11 = *(int *)(param_1 + 0x77770);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 8:
              iVar11 = *(int *)(param_1 + 0x7776c);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 7:
              iVar11 = *(int *)(param_1 + 0x77768);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 6:
              iVar11 = *(int *)(param_1 + 0x77764);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 5:
              iVar11 = *(int *)(param_1 + 0x77760);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 4:
              iVar11 = *(int *)(param_1 + 0x7775c);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 3:
              iVar11 = *(int *)(param_1 + 0x77758);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 2:
              iVar11 = *(int *)(param_1 + 0x77754);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            case 1:
              iVar11 = *(int *)(param_1 + 0x77750);
              local_10 = local_10 - pbVar13[iVar11];
              local_c = local_c - pbVar13[iVar11 + 1];
              local_8 = local_8 - pbVar13[iVar11 + 2];
            }
          }
          else {
            iVar11 = param_1 + 0x77750;
            iVar10 = *(int *)(param_1 + 0x77750);
            while (iVar10 != -0x80000000) {
              local_10 = local_10 - pbVar13[iVar10];
              local_8 = local_8 - pbVar13[iVar10 + 2];
              piVar8 = (int *)(iVar11 + 4);
              iVar11 = iVar11 + 4;
              local_c = local_c - pbVar13[iVar10 + 1];
              iVar10 = *piVar8;
            }
          }
          local_34 = local_34 + 3;
          local_2c = local_2c + 1;
          pbVar13 = pbVar13 + 3;
        } while (local_2c < param_2[6] + *param_2);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10007b00 @ 10007b00 */

void FUN_10007b00(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined6 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 extraout_MM1;
  undefined8 uVar11;
  short sVar12;
  short sVar22;
  short sVar23;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  short sVar24;
  ulonglong uVar21;
  undefined1 uVar25;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 local_20;
  
  iVar7 = param_2[7];
  uVar13 = 0;
  local_20 = 0;
  uVar3 = (undefined2)(0x10000 / (longlong)*(int *)(param_1 + 0x633a8));
  uVar31 = CONCAT44(CONCAT22(uVar3,uVar3),CONCAT22(uVar3,uVar3));
  if (iVar7 < param_2[2] + iVar7) {
    do {
      iVar8 = *(int *)(param_1 + 0x18);
      iVar9 = param_2[6];
      iVar2 = *(int *)(param_1 + 0xc);
      puVar6 = (undefined4 *)
               (((int)((uint)*(byte *)(iVar8 + 0x15) * (uint)*(byte *)(iVar8 + 0x14)) >> 3) *
                (iVar9 - *(int *)(iVar8 + 0x18)) +
                (iVar7 - *(int *)(iVar8 + 0x1c)) * *(int *)(iVar8 + 4) + *(int *)(param_1 + 0x10));
      if (iVar7 < *(int *)(iVar2 + 0x1c)) {
        puVar10 = (undefined8 *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar9 - *(int *)(param_1 + 0x58)) +
                   (iVar7 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar10 = (undefined8 *)
                  (((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >> 3) *
                   (iVar9 - *(int *)(iVar2 + 0x18)) +
                   (iVar7 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x61e4c,*(undefined4 *)(param_1 + 0x1c),iVar2,iVar7);
      FUN_10002970(param_1 + 0x78858,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar7);
      iVar8 = param_1 + 0x6ccf8;
      uVar25 = (undefined1)extraout_MM1;
      uVar28 = (undefined1)((ulonglong)extraout_MM1 >> 8);
      uVar29 = (undefined1)((ulonglong)extraout_MM1 >> 0x10);
      uVar30 = (undefined1)((ulonglong)extraout_MM1 >> 0x18);
      iVar9 = *(int *)(param_1 + 0x6ccf8);
      uVar11 = uVar13;
      while (iVar9 != -0x80000000) {
        uVar27 = *(undefined8 *)(iVar9 + (int)puVar10);
        piVar1 = (int *)(iVar8 + 4);
        iVar8 = iVar8 + 4;
        sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar27 >> 0x18));
        uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                          CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                   (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                   (char)((ulonglong)uVar27 >> 0x10)),
                                   CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                            CONCAT11(uVar28,(char)((ulonglong)uVar27 >> 8)),
                                            (short)uVar11 + CONCAT11(uVar25,(char)uVar27))));
        iVar9 = *piVar1;
      }
      iVar8 = param_2[6];
      if (iVar8 < *param_2 + iVar8) {
        do {
          if (*(int *)(param_1 + 0x6de00) < 0x11) {
            switch(*(int *)(param_1 + 0x6de00)) {
            case 0x10:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72260) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 0xf:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7225c) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 0xe:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72258) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 0xd:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72254) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 0xc:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72250) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 0xb:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7224c) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 10:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72248) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 9:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72244) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 8:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72240) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 7:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7223c) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 6:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72238) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 5:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72234) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 4:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72230) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 3:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7222c) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 2:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72228) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            case 1:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x72224) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
            }
          }
          else {
            iVar9 = param_1 + 0x72224;
            iVar2 = *(int *)(param_1 + 0x72224);
            while (iVar2 != -0x80000000) {
              uVar13 = *(undefined8 *)(iVar2 + (int)puVar10);
              piVar1 = (int *)(iVar9 + 4);
              iVar9 = iVar9 + 4;
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) +
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) +
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 + CONCAT11(uVar25,(char)uVar13))));
              iVar2 = *piVar1;
            }
          }
          uVar13 = *puVar10;
          sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
          uVar5 = CONCAT31(CONCAT21(sVar24,uVar29),(char)((ulonglong)uVar13 >> 0x10));
          uVar4 = CONCAT51(CONCAT41(uVar5,uVar28),(char)((ulonglong)uVar13 >> 8));
          sVar12 = CONCAT11(uVar25,(char)uVar13);
          uVar27 = CONCAT62(uVar4,sVar12);
          uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7e1d8) + (int)puVar10);
          uVar13 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar30,(char)((ulonglong)
                                                                                       uVar13 >>
                                                                                      0x18)),uVar29)
                                                       ,(char)((ulonglong)uVar13 >> 0x10)),uVar28),
                                     (char)((ulonglong)uVar13 >> 8)),CONCAT11(uVar25,(char)uVar13));
          uVar26 = psubusw(uVar27,uVar13);
          uVar14 = psubusw(uVar13,uVar27);
          uVar13 = *(undefined8 *)((int)puVar10 + *(int *)(param_1 + 0x7e1dc));
          uVar13 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar30,(char)((ulonglong)
                                                                                       uVar13 >>
                                                                                      0x18)),uVar29)
                                                       ,(char)((ulonglong)uVar13 >> 0x10)),uVar28),
                                     (char)((ulonglong)uVar13 >> 8)),CONCAT11(uVar25,(char)uVar13));
          uVar32 = psubusw(uVar27,uVar13);
          uVar15 = psubusw(uVar13,uVar27);
          uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7e1e0) + (int)puVar10);
          uVar13 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar30,(char)((ulonglong)
                                                                                       uVar13 >>
                                                                                      0x18)),uVar29)
                                                       ,(char)((ulonglong)uVar13 >> 0x10)),uVar28),
                                     (char)((ulonglong)uVar13 >> 8)),CONCAT11(uVar25,(char)uVar13));
          uVar33 = psubusw(uVar27,uVar13);
          uVar16 = psubusw(uVar13,uVar27);
          uVar13 = *(undefined8 *)((int)puVar10 + *(int *)(param_1 + 0x7e1e4));
          uVar13 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar30,(char)((ulonglong)
                                                                                       uVar13 >>
                                                                                      0x18)),uVar29)
                                                       ,(char)((ulonglong)uVar13 >> 0x10)),uVar28),
                                     (char)((ulonglong)uVar13 >> 8)),CONCAT11(uVar25,(char)uVar13));
          uVar34 = psubusw(uVar27,uVar13);
          uVar17 = psubusw(uVar13,uVar27);
          uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7e1e8) + (int)puVar10);
          uVar13 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar30,(char)((ulonglong)
                                                                                       uVar13 >>
                                                                                      0x18)),uVar29)
                                                       ,(char)((ulonglong)uVar13 >> 0x10)),uVar28),
                                     (char)((ulonglong)uVar13 >> 8)),CONCAT11(uVar25,(char)uVar13));
          uVar35 = psubusw(uVar27,uVar13);
          uVar18 = psubusw(uVar13,uVar27);
          uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7e1ec) + (int)puVar10);
          uVar13 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar30,(char)((ulonglong)
                                                                                       uVar13 >>
                                                                                      0x18)),uVar29)
                                                       ,(char)((ulonglong)uVar13 >> 0x10)),uVar28),
                                     (char)((ulonglong)uVar13 >> 8)),CONCAT11(uVar25,(char)uVar13));
          uVar36 = psubusw(uVar27,uVar13);
          uVar19 = psubusw(uVar13,uVar27);
          uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7e1f0) + (int)puVar10);
          uVar13 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar30,(char)((ulonglong)
                                                                                       uVar13 >>
                                                                                      0x18)),uVar29)
                                                       ,(char)((ulonglong)uVar13 >> 0x10)),uVar28),
                                     (char)((ulonglong)uVar13 >> 8)),CONCAT11(uVar25,(char)uVar13));
          uVar37 = psubusw(uVar27,uVar13);
          uVar20 = psubusw(uVar13,uVar27);
          uVar13 = *(undefined8 *)((int)puVar10 + *(int *)(param_1 + 0x7e1f4));
          uVar13 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar30,(char)((ulonglong)
                                                                                       uVar13 >>
                                                                                      0x18)),uVar29)
                                                       ,(char)((ulonglong)uVar13 >> 0x10)),uVar28),
                                     (char)((ulonglong)uVar13 >> 8)),CONCAT11(uVar25,(char)uVar13));
          uVar38 = psubusw(uVar27,uVar13);
          uVar13 = psubusw(uVar13,uVar27);
          uVar13 = pmaddwd(CONCAT26((short)((ulonglong)uVar26 >> 0x30) +
                                    (short)((ulonglong)uVar14 >> 0x30) +
                                    (short)((ulonglong)uVar32 >> 0x30) +
                                    (short)((ulonglong)uVar15 >> 0x30) +
                                    (short)((ulonglong)uVar33 >> 0x30) +
                                    (short)((ulonglong)uVar16 >> 0x30) +
                                    (short)((ulonglong)uVar34 >> 0x30) +
                                    (short)((ulonglong)uVar17 >> 0x30) +
                                    (short)((ulonglong)uVar35 >> 0x30) +
                                    (short)((ulonglong)uVar18 >> 0x30) +
                                    (short)((ulonglong)uVar36 >> 0x30) +
                                    (short)((ulonglong)uVar19 >> 0x30) +
                                    (short)((ulonglong)uVar37 >> 0x30) +
                                    (short)((ulonglong)uVar20 >> 0x30) +
                                    (short)((ulonglong)uVar38 >> 0x30) +
                                    (short)((ulonglong)uVar13 >> 0x30),
                                    CONCAT24((short)((ulonglong)uVar26 >> 0x20) +
                                             (short)((ulonglong)uVar14 >> 0x20) +
                                             (short)((ulonglong)uVar32 >> 0x20) +
                                             (short)((ulonglong)uVar15 >> 0x20) +
                                             (short)((ulonglong)uVar33 >> 0x20) +
                                             (short)((ulonglong)uVar16 >> 0x20) +
                                             (short)((ulonglong)uVar34 >> 0x20) +
                                             (short)((ulonglong)uVar17 >> 0x20) +
                                             (short)((ulonglong)uVar35 >> 0x20) +
                                             (short)((ulonglong)uVar18 >> 0x20) +
                                             (short)((ulonglong)uVar36 >> 0x20) +
                                             (short)((ulonglong)uVar19 >> 0x20) +
                                             (short)((ulonglong)uVar37 >> 0x20) +
                                             (short)((ulonglong)uVar20 >> 0x20) +
                                             (short)((ulonglong)uVar38 >> 0x20) +
                                             (short)((ulonglong)uVar13 >> 0x20),
                                             CONCAT22((short)((ulonglong)uVar26 >> 0x10) +
                                                      (short)((ulonglong)uVar14 >> 0x10) +
                                                      (short)((ulonglong)uVar32 >> 0x10) +
                                                      (short)((ulonglong)uVar15 >> 0x10) +
                                                      (short)((ulonglong)uVar33 >> 0x10) +
                                                      (short)((ulonglong)uVar16 >> 0x10) +
                                                      (short)((ulonglong)uVar34 >> 0x10) +
                                                      (short)((ulonglong)uVar17 >> 0x10) +
                                                      (short)((ulonglong)uVar35 >> 0x10) +
                                                      (short)((ulonglong)uVar18 >> 0x10) +
                                                      (short)((ulonglong)uVar36 >> 0x10) +
                                                      (short)((ulonglong)uVar19 >> 0x10) +
                                                      (short)((ulonglong)uVar37 >> 0x10) +
                                                      (short)((ulonglong)uVar20 >> 0x10) +
                                                      (short)((ulonglong)uVar38 >> 0x10) +
                                                      (short)((ulonglong)uVar13 >> 0x10),
                                                      (short)uVar26 + (short)uVar14 + (short)uVar32
                                                      + (short)uVar15 + (short)uVar33 +
                                                      (short)uVar16 + (short)uVar34 + (short)uVar17
                                                      + (short)uVar35 + (short)uVar18 +
                                                      (short)uVar36 + (short)uVar19 + (short)uVar37
                                                      + (short)uVar20 + (short)uVar38 +
                                                      (short)uVar13))),0x100010001);
          uVar27 = pmulhw(uVar11,uVar31);
          sVar22 = (short)uVar4;
          sVar23 = (short)uVar5;
          uVar13 = *(undefined8 *)
                    (param_1 + 0x120e0 +
                    ((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20) & 0xffffU) * 8);
          uVar13 = psraw(CONCAT26((sVar24 - (short)((ulonglong)uVar27 >> 0x30)) *
                                  (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24((sVar23 - (short)((ulonglong)uVar27 >> 0x20)) *
                                           (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22((sVar22 - (short)((ulonglong)uVar27 >> 0x10)) *
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    (sVar12 - (short)uVar27) * (short)uVar13))),5);
          sVar12 = (short)uVar13 + sVar12;
          sVar22 = (short)((ulonglong)uVar13 >> 0x10) + sVar22;
          sVar23 = (short)((ulonglong)uVar13 >> 0x20) + sVar23;
          sVar24 = (short)((ulonglong)uVar13 >> 0x30) + sVar24;
          uVar21 = CONCAT26(sVar24,CONCAT24(sVar23,CONCAT22(sVar22,sVar12))) &
                   CONCAT26(-(ushort)((short)((ulonglong)extraout_MM1 >> 0x30) < sVar24),
                            CONCAT24(-(ushort)((short)((ulonglong)extraout_MM1 >> 0x20) < sVar23),
                                     CONCAT22(-(ushort)((short)((ulonglong)extraout_MM1 >> 0x10) <
                                                       sVar22),
                                              -(ushort)((short)extraout_MM1 < sVar12))));
          sVar24 = (short)uVar21;
          sVar12 = (short)(uVar21 >> 0x10);
          sVar22 = (short)(uVar21 >> 0x20);
          sVar23 = (short)(uVar21 >> 0x30);
          *puVar6 = CONCAT13((0 < sVar23) * (sVar23 < 0x100) * (char)(uVar21 >> 0x30) -
                             (0xff < sVar23),
                             CONCAT12((0 < sVar22) * (sVar22 < 0x100) * (char)(uVar21 >> 0x20) -
                                      (0xff < sVar22),
                                      CONCAT11((0 < sVar12) * (sVar12 < 0x100) *
                                               (char)(uVar21 >> 0x10) - (0xff < sVar12),
                                               (0 < sVar24) * (sVar24 < 0x100) * (char)uVar21 -
                                               (0xff < sVar24))));
          if (*(int *)(param_1 + 0x7332c) < 0x11) {
            switch(*(int *)(param_1 + 0x7332c)) {
            case 0x10:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7778c) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 0xf:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77788) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 0xe:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77784) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 0xd:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77780) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 0xc:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7777c) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 0xb:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77778) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 10:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77774) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 9:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77770) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 8:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7776c) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 7:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77768) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 6:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77764) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 5:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77760) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 4:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x7775c) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 3:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77758) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 2:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77754) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            case 1:
              uVar13 = *(undefined8 *)(*(int *)(param_1 + 0x77750) + (int)puVar10);
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
            }
          }
          else {
            iVar9 = param_1 + 0x77750;
            iVar2 = *(int *)(param_1 + 0x77750);
            while (iVar2 != -0x80000000) {
              uVar13 = *(undefined8 *)(iVar2 + (int)puVar10);
              piVar1 = (int *)(iVar9 + 4);
              iVar9 = iVar9 + 4;
              sVar24 = CONCAT11(uVar30,(char)((ulonglong)uVar13 >> 0x18));
              uVar11 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar24,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                         (short)CONCAT31(CONCAT21(sVar24,uVar29),
                                                         (char)((ulonglong)uVar13 >> 0x10)),
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                                  CONCAT11(uVar28,(char)((ulonglong)uVar13 >> 8)),
                                                  (short)uVar11 - CONCAT11(uVar25,(char)uVar13))));
              iVar2 = *piVar1;
            }
          }
          puVar6 = (undefined4 *)((int)puVar6 + 3);
          iVar8 = iVar8 + 1;
          puVar10 = (undefined8 *)((int)puVar10 + 3);
          uVar13 = local_20;
        } while (iVar8 < *param_2 + param_2[6]);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10008200 @ 10008200 */

void FUN_10008200(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined8 extraout_MM1;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined1 uVar16;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined8 local_20;
  
  uVar11 = 0xffffff;
  iVar5 = param_2[7];
  uVar9 = 0;
  local_20 = 0;
  uVar3 = (undefined2)(0x10000 / (longlong)*(int *)(param_1 + 0x633a8));
  if (iVar5 < param_2[2] + iVar5) {
    do {
      iVar4 = *(int *)(param_1 + 0x18);
      iVar6 = param_2[6];
      iVar2 = *(int *)(param_1 + 0xc);
      iVar4 = ((int)((uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x14)) >> 3) *
              (iVar6 - *(int *)(iVar4 + 0x18)) +
              (iVar5 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) + *(int *)(param_1 + 0x10);
      local_30 = (undefined1)iVar4;
      uStack_2f = (undefined1)((uint)iVar4 >> 8);
      uStack_2e = (undefined1)((uint)iVar4 >> 0x10);
      uStack_2d = (undefined1)((uint)iVar4 >> 0x18);
      if (iVar5 < *(int *)(iVar2 + 0x1c)) {
        puVar7 = (ulonglong *)
                 (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                  (iVar6 - *(int *)(param_1 + 0x58)) +
                  (iVar5 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                 *(int *)(param_1 + 0x3c));
      }
      else {
        puVar7 = (ulonglong *)
                 (((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >> 3) *
                  (iVar6 - *(int *)(iVar2 + 0x18)) +
                  (iVar5 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x61e4c,*(undefined4 *)(param_1 + 0x1c),iVar2,iVar5);
      FUN_10002970(param_1 + 0x78858,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),
                   iVar5);
      iVar4 = param_1 + 0x6ccf8;
      uVar16 = (undefined1)extraout_MM1;
      uVar25 = (undefined1)((ulonglong)extraout_MM1 >> 8);
      uVar26 = (undefined1)((ulonglong)extraout_MM1 >> 0x10);
      uVar27 = (undefined1)((ulonglong)extraout_MM1 >> 0x18);
      iVar6 = *(int *)(param_1 + 0x6ccf8);
      uVar8 = uVar9;
      while (iVar6 != -0x80000000) {
        uVar17 = *(undefined8 *)(iVar6 + (int)puVar7);
        piVar1 = (int *)(iVar4 + 4);
        iVar4 = iVar4 + 4;
        sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar17 >> 0x18));
        uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                         CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                  (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                  (char)((ulonglong)uVar17 >> 0x10)),
                                  CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                           CONCAT11(uVar25,(char)((ulonglong)uVar17 >> 8)),
                                           (short)uVar8 + CONCAT11(uVar16,(char)uVar17))));
        iVar6 = *piVar1;
      }
      iVar4 = param_2[6];
      if (iVar4 < *param_2 + iVar4) {
        do {
          if (*(int *)(param_1 + 0x6de00) < 0x11) {
            switch(*(int *)(param_1 + 0x6de00)) {
            case 0x10:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72260) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 0xf:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x7225c) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 0xe:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72258) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 0xd:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72254) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 0xc:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72250) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 0xb:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x7224c) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 10:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72248) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 9:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72244) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 8:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72240) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 7:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x7223c) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 6:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72238) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 5:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72234) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 4:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72230) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 3:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x7222c) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 2:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72228) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            case 1:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x72224) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
            }
          }
          else {
            iVar6 = param_1 + 0x72224;
            iVar2 = *(int *)(param_1 + 0x72224);
            while (iVar2 != -0x80000000) {
              uVar9 = *(undefined8 *)(iVar2 + (int)puVar7);
              piVar1 = (int *)(iVar6 + 4);
              iVar6 = iVar6 + 4;
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 + CONCAT11(uVar16,(char)uVar9))));
              iVar2 = *piVar1;
            }
          }
          uVar10 = *puVar7 & uVar11;
          uVar9 = psadbw(uVar10,*(uint *)(*(int *)(param_1 + 0x7e1d8) + (int)puVar7) & uVar11);
          uVar17 = psadbw(uVar10,*(uint *)(*(int *)(param_1 + 0x7e1dc) + (int)puVar7) & uVar11);
          uVar18 = psadbw(uVar10,*(uint *)(*(int *)(param_1 + 0x7e1e0) + (int)puVar7) & uVar11);
          uVar19 = psadbw(uVar10,*(uint *)(*(int *)(param_1 + 0x7e1e4) + (int)puVar7) & uVar11);
          uVar20 = psadbw(uVar10,*(uint *)(*(int *)(param_1 + 0x7e1e8) + (int)puVar7) & uVar11);
          uVar21 = psadbw(uVar10,*(uint *)(*(int *)(param_1 + 0x7e1ec) + (int)puVar7) & uVar11);
          uVar22 = psadbw(uVar10,*(uint *)(*(int *)(param_1 + 0x7e1f0) + (int)puVar7) & uVar11);
          uVar23 = psadbw(uVar10,*(uint *)(*(int *)(param_1 + 0x7e1f4) + (int)puVar7) & uVar11);
          sVar15 = CONCAT11(uVar27,(char)(uVar10 >> 0x18));
          sVar13 = CONCAT11(uVar25,(char)(uVar10 >> 8));
          sVar12 = CONCAT11(uVar16,(char)uVar10);
          uVar24 = pmulhw(uVar8,CONCAT44(CONCAT22(uVar3,uVar3),CONCAT22(uVar3,uVar3)));
          sVar14 = (short)CONCAT31(CONCAT21(sVar15,uVar26),(char)(uVar10 >> 0x10));
          uVar9 = *(undefined8 *)
                   (param_1 + 0x120e0 +
                   (uint)(ushort)((short)uVar9 + (short)uVar17 + (short)uVar18 + (short)uVar19 +
                                  (short)uVar20 + (short)uVar21 + (short)uVar22 + (short)uVar23) * 8
                   );
          uVar9 = psraw(CONCAT26((sVar15 - (short)((ulonglong)uVar24 >> 0x30)) *
                                 (short)((ulonglong)uVar9 >> 0x30),
                                 CONCAT24((sVar14 - (short)((ulonglong)uVar24 >> 0x20)) *
                                          (short)((ulonglong)uVar9 >> 0x20),
                                          CONCAT22((sVar13 - (short)((ulonglong)uVar24 >> 0x10)) *
                                                   (short)((ulonglong)uVar9 >> 0x10),
                                                   (sVar12 - (short)uVar24) * (short)uVar9))),5);
          sVar12 = (short)uVar9 + sVar12;
          sVar13 = (short)((ulonglong)uVar9 >> 0x10) + sVar13;
          sVar14 = (short)((ulonglong)uVar9 >> 0x20) + sVar14;
          sVar15 = (short)((ulonglong)uVar9 >> 0x30) + sVar15;
          uVar10 = CONCAT26(sVar15,CONCAT24(sVar14,CONCAT22(sVar13,sVar12))) &
                   CONCAT26(-(ushort)((short)((ulonglong)extraout_MM1 >> 0x30) < sVar15),
                            CONCAT24(-(ushort)((short)((ulonglong)extraout_MM1 >> 0x20) < sVar14),
                                     CONCAT22(-(ushort)((short)((ulonglong)extraout_MM1 >> 0x10) <
                                                       sVar13),
                                              -(ushort)((short)extraout_MM1 < sVar12))));
          sVar15 = (short)uVar10;
          sVar13 = (short)(uVar10 >> 0x10);
          sVar12 = (short)(uVar10 >> 0x20);
          sVar14 = (short)(uVar10 >> 0x30);
          *(uint *)CONCAT13(uStack_2d,CONCAT12(uStack_2e,CONCAT11(uStack_2f,local_30))) =
               CONCAT13((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar10 >> 0x30) - (0xff < sVar14),
                        CONCAT12((0 < sVar12) * (sVar12 < 0x100) * (char)(uVar10 >> 0x20) -
                                 (0xff < sVar12),
                                 CONCAT11((0 < sVar13) * (sVar13 < 0x100) * (char)(uVar10 >> 0x10) -
                                          (0xff < sVar13),
                                          (0 < sVar15) * (sVar15 < 0x100) * (char)uVar10 -
                                          (0xff < sVar15))));
          if (*(int *)(param_1 + 0x7332c) < 0x11) {
            switch(*(int *)(param_1 + 0x7332c)) {
            case 0x10:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x7778c) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 0xf:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77788) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 0xe:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77784) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 0xd:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77780) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 0xc:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x7777c) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 0xb:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77778) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 10:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77774) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 9:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77770) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 8:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x7776c) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 7:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77768) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 6:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77764) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 5:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77760) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 4:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x7775c) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 3:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77758) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 2:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77754) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            case 1:
              uVar9 = *(undefined8 *)(*(int *)(param_1 + 0x77750) + (int)puVar7);
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
            }
          }
          else {
            iVar6 = param_1 + 0x77750;
            iVar2 = *(int *)(param_1 + 0x77750);
            while (iVar2 != -0x80000000) {
              uVar9 = *(undefined8 *)(iVar2 + (int)puVar7);
              piVar1 = (int *)(iVar6 + 4);
              iVar6 = iVar6 + 4;
              sVar15 = CONCAT11(uVar27,(char)((ulonglong)uVar9 >> 0x18));
              uVar8 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar15,
                               CONCAT24((short)((ulonglong)uVar8 >> 0x20) -
                                        (short)CONCAT31(CONCAT21(sVar15,uVar26),
                                                        (char)((ulonglong)uVar9 >> 0x10)),
                                        CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                                 CONCAT11(uVar25,(char)((ulonglong)uVar9 >> 8)),
                                                 (short)uVar8 - CONCAT11(uVar16,(char)uVar9))));
              iVar2 = *piVar1;
            }
          }
          iVar6 = CONCAT13(uStack_2d,CONCAT12(uStack_2e,CONCAT11(uStack_2f,local_30))) + 3;
          local_30 = (undefined1)iVar6;
          uStack_2f = (undefined1)((uint)iVar6 >> 8);
          uStack_2e = (undefined1)((uint)iVar6 >> 0x10);
          uStack_2d = (undefined1)((uint)iVar6 >> 0x18);
          iVar4 = iVar4 + 1;
          puVar7 = (ulonglong *)((int)puVar7 + 3);
          uVar9 = local_20;
        } while (iVar4 < param_2[6] + *param_2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10008890 @ 10008890 */

void FUN_10008890(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *local_34;
  int local_2c;
  int *local_28;
  int local_24;
  undefined2 *local_20;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar2 = *(uint *)(param_1 + 0x633a8);
  iVar6 = param_2[7];
  if (iVar6 < param_2[2] + iVar6) {
    iVar9 = param_2[6];
    iVar5 = iVar9 + *param_2;
    do {
      iVar8 = *(int *)(param_1 + 0x18);
      local_20 = (undefined2 *)
                 (((int)((uint)*(byte *)(iVar8 + 0x15) * (uint)*(byte *)(iVar8 + 0x14)) >> 3) *
                  (iVar9 - *(int *)(iVar8 + 0x18)) +
                  (iVar6 - *(int *)(iVar8 + 0x1c)) * *(int *)(iVar8 + 4) + *(int *)(param_1 + 0x10))
      ;
      iVar8 = *(int *)(param_1 + 0xc);
      if (iVar6 < *(int *)(iVar8 + 0x1c)) {
        local_34 = (ushort *)
                   (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3)
                    * (iVar9 - *(int *)(param_1 + 0x58)) +
                    (iVar6 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                   *(int *)(param_1 + 0x3c));
      }
      else {
        local_34 = (ushort *)
                   (((int)((uint)*(byte *)(iVar8 + 0x15) * (uint)*(byte *)(iVar8 + 0x14)) >> 3) *
                    (iVar9 - *(int *)(iVar8 + 0x18)) +
                    (iVar6 - *(int *)(iVar8 + 0x1c)) * *(int *)(iVar8 + 4) + *(int *)(param_1 + 4));
      }
      local_2c = iVar9;
      if (iVar9 < iVar5) {
        do {
          local_8 = 0;
          local_c = 0;
          local_10 = 0;
          if (*(int *)(param_1 + 0x633b4) != 0) {
            iVar5 = *(int *)(param_1 + 0xc);
            piVar7 = (int *)(param_1 + 0x633b0);
            do {
              iVar10 = piVar7[-1] + local_2c;
              iVar9 = *(int *)(param_1 + 0x78);
              iVar8 = *piVar7 + iVar6;
              if ((iVar9 <= iVar10) &&
                 (iVar11 = iVar9 + *(int *)(param_1 + 0x60), iVar9 = iVar10, iVar11 <= iVar10)) {
                iVar9 = iVar11 + -1;
              }
              iVar10 = *(int *)(param_1 + 0x7c);
              if ((iVar10 <= iVar8) &&
                 (iVar11 = iVar10 + *(int *)(param_1 + 0x68), iVar10 = iVar8, iVar11 <= iVar8)) {
                iVar10 = iVar11 + -1;
              }
              if (iVar10 < *(int *)(iVar5 + 0x1c)) {
                puVar3 = (ushort *)
                         (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54))
                          >> 3) * (iVar9 - *(int *)(param_1 + 0x58)) +
                          (iVar10 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                         *(int *)(param_1 + 0x3c));
              }
              else {
                puVar3 = (ushort *)
                         (((int)((uint)*(byte *)(iVar5 + 0x15) * (uint)*(byte *)(iVar5 + 0x14)) >> 3
                          ) * (iVar9 - *(int *)(iVar5 + 0x18)) +
                          (iVar10 - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 4) +
                         *(int *)(param_1 + 4));
              }
              local_10 = local_10 + *puVar3;
              local_c = local_c + puVar3[1];
              local_8 = local_8 + puVar3[2];
              piVar1 = piVar7 + 4;
              piVar7 = piVar7 + 3;
            } while (*piVar1 != 0);
          }
          iVar5 = 0;
          local_24 = 0;
          if (*(int *)(param_1 + 0x79dc0) != 0) {
            iVar8 = *(int *)(param_1 + 0xc);
            local_28 = (int *)(param_1 + 0x79db8);
            iVar9 = param_1;
            do {
              iVar11 = *local_28 + local_2c;
              iVar10 = *(int *)(param_1 + 0x78);
              iVar9 = *(int *)(iVar9 + 0x79dbc) + iVar6;
              if ((iVar10 <= iVar11) &&
                 (iVar4 = iVar10 + *(int *)(param_1 + 0x60), iVar10 = iVar11, iVar4 <= iVar11)) {
                iVar10 = iVar4 + -1;
              }
              iVar11 = *(int *)(param_1 + 0x7c);
              if ((iVar11 <= iVar9) &&
                 (iVar4 = iVar11 + *(int *)(param_1 + 0x68), iVar11 = iVar9, iVar4 <= iVar9)) {
                iVar11 = iVar4 + -1;
              }
              if (iVar11 < *(int *)(iVar8 + 0x1c)) {
                iVar9 = ((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >>
                        3) * (iVar10 - *(int *)(param_1 + 0x58)) +
                        (iVar11 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                        *(int *)(param_1 + 0x3c);
              }
              else {
                iVar9 = ((int)((uint)*(byte *)(iVar8 + 0x15) * (uint)*(byte *)(iVar8 + 0x14)) >> 3)
                        * (iVar10 - *(int *)(iVar8 + 0x18)) +
                        (iVar11 - *(int *)(iVar8 + 0x1c)) * *(int *)(iVar8 + 4) +
                        *(int *)(param_1 + 4);
              }
              local_28 = local_28 + 3;
              iVar5 = (uint)(byte)(&DAT_100c03a8)
                                  [(uint)*(byte *)(iVar9 + 1) +
                                   (uint)*(byte *)((int)local_34 + 1) * 0x100] + iVar5 +
                      (uint)(byte)(&DAT_100c03a8)
                                  [(uint)*(byte *)(iVar9 + 5) +
                                   (uint)*(byte *)((int)local_34 + 5) * 0x100] +
                      (uint)(byte)(&DAT_100c03a8)
                                  [(uint)*(byte *)(iVar9 + 3) +
                                   (uint)*(byte *)((int)local_34 + 3) * 0x100];
              local_24 = local_24 + 1;
              iVar9 = param_1 + local_24 * 0xc;
            } while (*(int *)(param_1 + 0x79dc0 + local_24 * 0xc) != 0);
          }
          iVar9 = (int)(((uint)*local_34 - local_10 / uVar2) * *(int *)(param_1 + 0x188 + iVar5 * 4)
                       ) / 100 + (uint)*local_34;
          iVar8 = (int)(((uint)local_34[1] - local_c / uVar2) *
                       *(int *)(param_1 + 0x6160 + iVar5 * 4)) / 100 + (uint)local_34[1];
          iVar5 = (int)(((uint)local_34[2] - local_8 / uVar2) *
                       *(int *)(param_1 + 0xc138 + iVar5 * 4)) / 100 + (uint)local_34[2];
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          else if (0xffff < iVar9) {
            iVar9 = 0xffff;
          }
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xffff < iVar8) {
            iVar8 = 0xffff;
          }
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0xffff < iVar5) {
            iVar5 = 0xffff;
          }
          local_34 = local_34 + 3;
          local_20[2] = (short)iVar5;
          *local_20 = (short)iVar9;
          local_20[1] = (short)iVar8;
          local_20 = local_20 + 3;
          iVar9 = param_2[6];
          local_2c = local_2c + 1;
          iVar5 = iVar9 + *param_2;
        } while (local_2c < iVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2[7] + param_2[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10009490 @ 10009490 */

undefined4 __fastcall FUN_10009490(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *in_EAX;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar4 = param_2;
  puVar5 = in_EAX + 0x20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = in_EAX + 0x18;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = in_EAX + 0x10;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = in_EAX + 8;
  puVar5 = param_2;
  puVar7 = puVar4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = puVar4;
  puVar7 = in_EAX;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar1 = param_3[1];
  in_EAX[0x22] = uVar1;
  if (param_2[2] < uVar1) {
    in_EAX[0x22] = param_2[2];
  }
  in_EAX[0x27] = (param_2[7] - in_EAX[0x22]) + param_2[2];
  uVar1 = *param_3;
  uVar3 = in_EAX[7];
  uVar6 = in_EAX[0x27];
  in_EAX[2] = uVar1;
  if (uVar6 < uVar1 + uVar3) {
    in_EAX[2] = uVar6 - uVar3;
  }
  uVar3 = uVar3 + in_EAX[2];
  uVar6 = uVar6 - uVar3;
  in_EAX[0x1f] = uVar3;
  in_EAX[0x17] = uVar3;
  in_EAX[0xf] = uVar3;
  in_EAX[0x1a] = uVar6;
  in_EAX[0x12] = uVar6;
  in_EAX[10] = uVar6;
  uVar1 = param_3[2];
  *puVar4 = uVar1;
  if (*param_2 < uVar1) {
    *puVar4 = *param_2;
  }
  uVar1 = param_3[3];
  uVar3 = in_EAX[0xe];
  in_EAX[0x18] = uVar1;
  if ((param_2[6] - uVar1) + *param_2 < *puVar4 + uVar3) {
    in_EAX[0x18] = (param_2[6] - uVar3) + *puVar4 + *param_2;
  }
  in_EAX[0x1e] = (*param_2 - in_EAX[0x18]) + param_2[6];
  in_EAX[0x16] = *puVar4 + uVar3;
  in_EAX[0x10] = in_EAX[0x1e] - (*puVar4 + uVar3);
  return 0;
}



/**************************************************/

/* Function: FUN_100095a0 @ 100095a0 */

void FUN_100095a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *_Src;
  undefined4 *puVar5;
  void *_Dst;
  
  puVar4 = (undefined4 *)param_1[3];
  puVar5 = (undefined4 *)param_1[6];
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(*param_1 + 4);
  _Src = (void *)param_1[1];
  _Dst = (void *)param_1[4];
  uVar3 = 0;
  if (*(int *)(param_1[6] + 8) != 0) {
    do {
      piVar1 = (int *)param_1[6];
      _memcpy(_Dst,_Src,
              ((int)((uint)*(byte *)((int)piVar1 + 0x15) * (uint)*(byte *)(piVar1 + 5)) >> 3) *
              *piVar1);
      _Src = (void *)((int)_Src + *(int *)(param_1[3] + 4));
      _Dst = (void *)((int)_Dst + *(int *)(param_1[6] + 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1[6] + 8));
  }
  return;
}



/**************************************************/

/* Function: FUN_10009610 @ 10009610 */

void FUN_10009610(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  void *_Src;
  void *pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  void *_Dst;
  int *piVar10;
  int aiStack_c0 [7];
  uint uStack_a4;
  undefined4 local_a0 [8];
  undefined4 local_80 [8];
  undefined4 local_60 [8];
  undefined4 local_40 [8];
  undefined4 local_20 [8];
  
  iVar5 = param_1[3];
  piVar8 = param_1 + 0x10;
  piVar10 = param_1 + 0x18;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  param_1[0x1a] = param_1[0x1a] + *(int *)(iVar5 + 8);
  piVar8 = param_1 + 0x20;
  piVar10 = (int *)param_1[6];
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  *(int *)(param_1[6] + 0x1c) = param_1[0x27] + param_1[0x22];
  *(int *)(param_1[6] + 8) = (param_1[0x1f] - *(int *)(param_1[6] + 0x1c)) + param_1[0x1a];
  iVar5 = param_1[6];
  if ((uint)(*(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 8)) <
      (uint)(*(int *)(*param_1 + 0x3c) + *(int *)(*param_1 + 0x28))) {
    if (*(int *)(iVar5 + 8) < param_1[0x67e]) {
      *(undefined4 *)(iVar5 + 8) = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) - param_1[0x67e];
    }
  }
  uVar1 = (uint)param_1[5] / *(uint *)(*param_1 + 0x24);
  if (uVar1 < *(uint *)(param_1[6] + 8)) {
    *(uint *)(param_1[6] + 8) = uVar1;
  }
  puVar7 = (undefined4 *)param_1[6];
  puVar9 = local_60;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_60;
  puVar9 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_60;
  puVar9 = local_40;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_60;
  puVar9 = local_80;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_60;
  puVar9 = local_a0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_10019a90();
  FUN_10019a90();
  FUN_10019a90();
  FUN_10019a90();
  uVar2 = FUN_10019a90();
  (*(code *)param_1[0x5bae])(param_1,uVar2);
  (*(code *)param_1[0x5bad])(param_1,local_a0);
  (*(code *)param_1[0x5bad])(param_1,local_80);
  (*(code *)param_1[0x5bad])(param_1,local_40);
  (*(code *)param_1[0x5bad])(param_1,local_20);
  param_1[0x22] = param_1[0x22] + *(int *)(param_1[6] + 8);
  uVar3 = param_1[0x22];
  uVar1 = *(uint *)(*param_1 + 0x28);
  piVar8 = param_1 + 0x10;
  piVar10 = aiStack_c0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  if (uVar3 < uVar1) {
    aiStack_c0[2] = param_1[0x67e] + param_1[0x67d];
    uVar1 = param_1[0x1a];
    if (uVar1 < (uint)aiStack_c0[2]) {
      aiStack_c0[2] = uVar1;
    }
    pvVar6 = (void *)((param_1[0xb] - aiStack_c0[2]) * param_1[10] + param_1[7]);
    uVar1 = (param_1[0x1f] - aiStack_c0[2]) + uVar1;
    uVar3 = aiStack_c0[2] + uVar1;
    uStack_a4 = uVar1;
    _Dst = pvVar6;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
      iVar5 = param_1[3];
      if (uVar1 < *(uint *)(iVar5 + 0x1c)) {
        _Size = ((int)((uint)*(byte *)((int)param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x15)) >> 3)
                * param_1[0x10];
        _Src = (void *)((uVar1 - param_1[0x17]) * param_1[0x11] + param_1[0xf]);
      }
      else {
        _Size = ((int)((uint)*(byte *)((int)param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x15)) >> 3)
                * param_1[0x10];
        _Src = (void *)((uVar1 - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 4) + param_1[1]);
      }
      _memcpy(_Dst,_Src,_Size);
      _Dst = (void *)((int)_Dst + param_1[0x11]);
    }
  }
  else {
    pvVar6 = (void *)((param_1[0xb] - aiStack_c0[2]) * param_1[10] + param_1[7]);
    param_1[0x17] = param_1[0x1f] + param_1[0x1a];
    param_1[0x12] = 0;
  }
  piVar8 = aiStack_c0;
  piVar10 = param_1 + 0x10;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  param_1[0xf] = (int)pvVar6;
  return;
}



/**************************************************/

/* Function: FUN_100098c0 @ 100098c0 */

void FUN_100098c0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  void *_Src;
  void *pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  void *_Dst;
  int *piVar10;
  int aiStack_c0 [7];
  uint uStack_a4;
  undefined4 local_a0 [8];
  undefined4 local_80 [8];
  undefined4 local_60 [8];
  undefined4 local_40 [8];
  undefined4 local_20 [8];
  
  iVar5 = param_1[3];
  piVar8 = param_1 + 0x10;
  piVar10 = param_1 + 0x18;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  param_1[0x1a] = param_1[0x1a] + *(int *)(iVar5 + 8);
  piVar8 = param_1 + 0x20;
  piVar10 = (int *)param_1[6];
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  *(int *)(param_1[6] + 0x1c) = param_1[0x27] + param_1[0x22];
  *(int *)(param_1[6] + 8) = (param_1[0x1f] - *(int *)(param_1[6] + 0x1c)) + param_1[0x1a];
  iVar5 = param_1[6];
  if ((uint)(*(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 8)) <
      (uint)(*(int *)(*param_1 + 0x3c) + *(int *)(*param_1 + 0x28))) {
    if (*(int *)(iVar5 + 8) < param_1[0x7d5e]) {
      *(undefined4 *)(iVar5 + 8) = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) - param_1[0x7d5e];
    }
  }
  uVar1 = (uint)param_1[5] / *(uint *)(*param_1 + 0x24);
  if (uVar1 < *(uint *)(param_1[6] + 8)) {
    *(uint *)(param_1[6] + 8) = uVar1;
  }
  puVar7 = (undefined4 *)param_1[6];
  puVar9 = local_60;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_60;
  puVar9 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_60;
  puVar9 = local_40;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_60;
  puVar9 = local_80;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = local_60;
  puVar9 = local_a0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_10019a90();
  FUN_10019a90();
  FUN_10019a90();
  FUN_10019a90();
  uVar2 = FUN_10019a90();
  (*(code *)param_1[0x23c9a])(param_1,uVar2);
  (*(code *)param_1[0x23c99])(param_1,local_a0);
  (*(code *)param_1[0x23c99])(param_1,local_80);
  (*(code *)param_1[0x23c99])(param_1,local_40);
  (*(code *)param_1[0x23c99])(param_1,local_20);
  param_1[0x22] = param_1[0x22] + *(int *)(param_1[6] + 8);
  uVar3 = param_1[0x22];
  uVar1 = *(uint *)(*param_1 + 0x28);
  piVar8 = param_1 + 0x10;
  piVar10 = aiStack_c0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  if (uVar3 < uVar1) {
    aiStack_c0[2] = param_1[0x7d5e] + param_1[0x7d5d];
    uVar1 = param_1[0x1a];
    if (uVar1 < (uint)aiStack_c0[2]) {
      aiStack_c0[2] = uVar1;
    }
    pvVar6 = (void *)((param_1[0xb] - aiStack_c0[2]) * param_1[10] + param_1[7]);
    uVar1 = (param_1[0x1f] - aiStack_c0[2]) + uVar1;
    uVar3 = aiStack_c0[2] + uVar1;
    uStack_a4 = uVar1;
    _Dst = pvVar6;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
      iVar5 = param_1[3];
      if (uVar1 < *(uint *)(iVar5 + 0x1c)) {
        _Size = ((int)((uint)*(byte *)((int)param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x15)) >> 3)
                * param_1[0x10];
        _Src = (void *)((uVar1 - param_1[0x17]) * param_1[0x11] + param_1[0xf]);
      }
      else {
        _Size = ((int)((uint)*(byte *)((int)param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x15)) >> 3)
                * param_1[0x10];
        _Src = (void *)((uVar1 - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 4) + param_1[1]);
      }
      _memcpy(_Dst,_Src,_Size);
      _Dst = (void *)((int)_Dst + param_1[0x11]);
    }
  }
  else {
    pvVar6 = (void *)((param_1[0xb] - aiStack_c0[2]) * param_1[10] + param_1[7]);
    param_1[0x17] = param_1[0x1f] + param_1[0x1a];
    param_1[0x12] = 0;
  }
  piVar8 = aiStack_c0;
  piVar10 = param_1 + 0x10;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  param_1[0xf] = (int)pvVar6;
  return;
}



/**************************************************/

/* Function: AusmInit @ 10009b70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int AusmInit(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* 0x9b70  3  AusmInit */
  if (DAT_102cb68c == 0) {
    DAT_102cb68c = 1;
    FUN_10001080();
    _DAT_100c0388 = FUN_1000b530();
  }
  if (DAT_102cb670 != 0) {
    return 0xf0;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0xd0;
  }
  if (param_3 == 0) {
    return 0xd6;
  }
  iVar1 = FUN_10001010();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_10018540();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = param_5[2];
  if (iVar1 == 0) {
    return 0x22;
  }
  iVar2 = FUN_10018540();
  if (iVar2 != 0) {
    return iVar2;
  }
  if (extraout_ECX[2] == 0) {
    return 0x22;
  }
  if (*param_5 != *extraout_ECX) {
    return 0x20;
  }
  if (iVar1 != extraout_ECX[2]) {
    return 0x22;
  }
  if (param_5[3] != extraout_ECX[3]) {
    return 0x23;
  }
  if (param_5[4] != extraout_ECX[4]) {
    return 0x24;
  }
  if ((char)param_5[5] != (char)extraout_ECX[5]) {
    return 0x26;
  }
  if (*(char *)((int)param_5 + 0x15) != *(char *)((int)extraout_ECX + 0x15)) {
    return 0x27;
  }
  DAT_100e7268 = *param_5;
  DAT_100e726c = param_5[1];
  DAT_100e7270 = param_5[2];
  DAT_100e7274 = param_5[3];
  DAT_100e7278 = param_5[4];
  DAT_100e727c = param_5[5];
  _DAT_100e7280 = 0;
  _DAT_100e7284 = 0;
  DAT_100e7288 = *extraout_ECX;
  DAT_100e728c = extraout_ECX[1];
  _DAT_100e7290 = extraout_ECX[2];
  _DAT_100e7294 = extraout_ECX[3];
  _DAT_100e7298 = extraout_ECX[4];
  _DAT_100e729c = extraout_ECX[5];
  _DAT_100e72a0 = 0;
  _DAT_100e72a4 = 0;
  DAT_10031118 = &DAT_100e7268;
  DAT_100d03a8 = &DAT_100e7268;
  _DAT_100c038c = &DAT_100e7268;
  puVar3 = &DAT_100e7268;
  puVar4 = &DAT_100e72e8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  DAT_100e72f0 = 0;
  puVar3 = &DAT_100e7288;
  puVar4 = &DAT_100e7308;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_100e7310 = 0;
  puVar3 = &DAT_100e7288;
  puVar4 = &DAT_100d0428;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_100e7288;
  puVar4 = &DAT_10031198;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_100d0430 = 0;
  _DAT_100311a0 = 0;
  iVar1 = AusmParamAccess(&DAT_102cb6c0,param_5,param_4,param_3,param_1,param_2);
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar3 = &DAT_102cb6c0;
  puVar4 = &DAT_100d04e8;
  for (iVar1 = 0xda; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _memcpy(&DAT_10031258,&DAT_102cba28,0x1dee8);
  if (DAT_102cb6c0 == 0) {
    if (DAT_10031258 == 0) {
      DAT_102cb674 = 0;
      DAT_102cb670 = 1;
      return 0;
    }
    DAT_102cb674 = 1;
  }
  else {
    DAT_102cb674 = (DAT_10031258 != 0) + 2;
    if (DAT_102cb6c0 == 1) {
      FUN_10002600(_DAT_102cb6c8);
      FUN_100027e0();
      switch((DAT_100e727c >> 8 & 0xff) * (DAT_100e727c & 0xff)) {
      case 8:
        _DAT_100e725c = FUN_10002c30;
        _DAT_100e7260 = FUN_10002e40;
        break;
      default:
        _DAT_100e7260 = FUN_100036a0;
        _DAT_100e725c = FUN_100033f0;
        break;
      case 0x10:
        _DAT_100e725c = FUN_10003000;
        _DAT_100e7260 = FUN_10003220;
        break;
      case 0x30:
        _DAT_100e725c = FUN_10003900;
        _DAT_100e7260 = FUN_10003bd0;
      }
      FUN_10009490();
      DAT_100d03cc = *DAT_100d03a8;
      DAT_100d03d0 = DAT_100d03a8[1];
      DAT_100d03d8 = DAT_100d03a8[3];
      DAT_100d03dc = DAT_100d03a8[4];
      DAT_100d03e0 = DAT_100d03a8[5];
      DAT_100d03d4 = DAT_100d1da0 + DAT_100d1d9c;
      _DAT_100d03c8 = DAT_100d03d0 * DAT_100d03d4;
      DAT_100d03c4 = _malloc(_DAT_100d03c8 + DAT_100d03d0);
      if (DAT_100d03c4 == (void *)0x0) {
        return 0xe0;
      }
      _DAT_100d03e8 = DAT_100d03cc;
      _DAT_100d03ec = DAT_100d03d0;
      _DAT_100d03f4 = DAT_100d03d8;
      _DAT_100d03f8 = DAT_100d03dc;
      _DAT_100d03e4 = (void *)(DAT_100d03d0 * DAT_100d03d4 + (int)DAT_100d03c4);
      _DAT_100d03fc = DAT_100d03e0;
      _DAT_100d0400 = 0;
      _DAT_100d0404 = 0;
      _DAT_100d03f0 = 0;
    }
  }
  if (DAT_10031258 != 1) {
    DAT_102cb670 = 1;
    return 0;
  }
  if (DAT_10031268 != 0) {
    FUN_10002710(_DAT_10031260);
    FUN_10002770(_DAT_10031260);
    FUN_100027e0();
    FUN_100027e0();
    _memcpy(&DAT_1004f140,&DAT_10065b4c,0x16a0c);
    switch((DAT_100e727c >> 8 & 0xff) * (DAT_100e727c & 0xff)) {
    case 8:
      _DAT_100c037c = FUN_10003e60;
      _DAT_100c0380 = FUN_10004190;
      break;
    default:
      goto LAB_1000a1e8;
    case 0x10:
      _DAT_100c037c = FUN_100043b0;
      _DAT_100c0380 = FUN_10004720;
      break;
    case 0x18:
      _DAT_100c037c = FUN_10004990;
      if ((_DAT_100c0388 & 1) != 0) {
        _DAT_100c0380 = FUN_10005190;
        break;
      }
LAB_1000a1e8:
      _DAT_100c037c = FUN_10004990;
      _DAT_100c0380 = FUN_10004e20;
      break;
    case 0x30:
      _DAT_100c037c = FUN_10005420;
      _DAT_100c0380 = (code *)&LAB_10005970;
    }
    goto LAB_1000a1f2;
  }
  FUN_100026a0(&DAT_10092f64);
  FUN_10002600(_DAT_10031260);
  FUN_100027e0();
  FUN_100027e0();
  _memcpy(&DAT_1004f140,&DAT_10092f64,0x16a0c);
  switch((DAT_100e727c >> 8 & 0xff) * (DAT_100e727c & 0xff)) {
  case 8:
    _DAT_100c037c = FUN_10005e80;
    _DAT_100c0380 = FUN_100061d0;
    break;
  default:
    goto LAB_1000a0f6;
  case 0x10:
    _DAT_100c037c = FUN_100065c0;
    _DAT_100c0380 = FUN_10006910;
    break;
  case 0x18:
    _DAT_100c037c = FUN_10006d10;
    if (((_DAT_100c0388 & 2) != 0) && (DAT_100944c0 - 2U < 0x7f)) {
      _DAT_100c0380 = FUN_10008200;
      break;
    }
    if (((_DAT_100c0388 & 1) != 0) && (DAT_100944c0 - 2U < 0x7f)) {
      _DAT_100c0380 = FUN_10007b00;
      break;
    }
LAB_1000a0f6:
    _DAT_100c037c = FUN_10006d10;
    _DAT_100c0380 = FUN_10007160;
    break;
  case 0x30:
    _DAT_100c037c = FUN_10008890;
    _DAT_100c0380 = (code *)&LAB_10008cf0;
  }
LAB_1000a1f2:
  FUN_10009490();
  DAT_1003113c = *DAT_10031118;
  DAT_10031140 = DAT_10031118[1];
  DAT_10031148 = DAT_10031118[3];
  DAT_1003114c = DAT_10031118[4];
  DAT_10031150 = DAT_10031118[5];
  DAT_10031144 = DAT_10050690 + DAT_1005068c;
  _DAT_10031138 = DAT_10031140 * DAT_10031144;
  DAT_10031134 = _malloc(_DAT_10031138 + DAT_10031140);
  if (DAT_10031134 != (void *)0x0) {
    DAT_102cb670 = 1;
    _DAT_10031174 = 0;
    _DAT_10031170 = 0;
    _DAT_1003116c = DAT_10031150;
    _DAT_10031168 = DAT_1003114c;
    _DAT_10031164 = DAT_10031148;
    _DAT_10031160 = 0;
    _DAT_1003115c = DAT_10031140;
    _DAT_10031158 = DAT_1003113c;
    _DAT_10031154 = (void *)(DAT_10031140 * DAT_10031144 + (int)DAT_10031134);
    return 0;
  }
  return 0xe0;
}



/**************************************************/

/* Function: AusmEnd @ 1000a3b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 AusmEnd(void)

{
                    /* 0xa3b0  1  AusmEnd */
  if (DAT_102cb68c == 0) {
    DAT_102cb68c = 1;
    FUN_10001080();
    _DAT_100c0388 = FUN_1000b530();
  }
  if (DAT_102cb670 != 1) {
    return 0xf0;
  }
  if (DAT_100d04e8 == 1) {
    _free(DAT_100d03c4);
    DAT_100d03c4 = (void *)0x0;
    _DAT_100d03c8 = 0;
    DAT_100d03d4 = 0;
    _DAT_100d03e4 = 0;
    _DAT_100d03f0 = 0;
    _DAT_100d0404 = 0;
  }
  if (DAT_10031258 == 1) {
    _free(DAT_10031134);
    DAT_10031134 = (void *)0x0;
    _DAT_10031138 = 0;
    DAT_10031144 = 0;
    _DAT_10031154 = 0;
    _DAT_10031160 = 0;
    _DAT_10031174 = 0;
  }
  DAT_102cb670 = 0;
  return 0;
}



/**************************************************/

/* Function: AusmExec @ 1000a470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int AusmExec(int param_1,uint param_2,undefined4 param_3,int param_4,uint param_5,
            undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 local_48 [8];
  undefined4 local_28 [9];
  
                    /* 0xa470  2  AusmExec */
  if (DAT_102cb68c == 0) {
    DAT_102cb68c = 1;
    FUN_10001080();
    _DAT_100c0388 = FUN_1000b530();
  }
  if ((param_1 == 0) || (param_4 == 0)) {
    return 0xf0;
  }
  iVar2 = FUN_10018540();
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar1 = extraout_ECX[2];
  if (DAT_100e7270 < uVar1) {
    return 0x22;
  }
  if (uVar1 == 0) {
    if (param_2 < (uint)extraout_ECX[1]) {
      return 0x10;
    }
    if (param_5 < DAT_100e728c) {
      return 0x10;
    }
  }
  else if ((param_2 < extraout_ECX[1] * uVar1) || (param_5 < uVar1 * DAT_100e728c)) {
    return 0x10;
  }
  _DAT_100e72a8 = *extraout_ECX;
  _DAT_100e72ac = extraout_ECX[1];
  DAT_100e72b0 = extraout_ECX[2];
  _DAT_100e72b4 = extraout_ECX[3];
  _DAT_100e72b8 = extraout_ECX[4];
  _DAT_100e72bc = extraout_ECX[5];
  _DAT_100e72c4 = DAT_100e72f0 + DAT_100e7304;
  _DAT_100e72c0 = DAT_100e7300;
  switch(DAT_102cb674) {
  case 0:
  default:
    _DAT_100c0390 = param_1;
    _DAT_100c0394 = param_2;
    _DAT_100c0398 = (undefined4 *)&DAT_100e72a8;
    _DAT_100c039c = param_4;
    _DAT_100c03a0 = param_5;
    _DAT_100c03a4 = &DAT_100e72c8;
    FUN_10019a20(&DAT_100c038c);
    goto LAB_1000a6da;
  case 1:
    _DAT_10031124 = (undefined4 *)&DAT_100e72a8;
    break;
  case 2:
    _DAT_100d03ac = param_1;
    _DAT_100d03b0 = param_2;
    _DAT_100d03b4 = &DAT_100e72a8;
    _DAT_100d03b8 = param_4;
    _DAT_100d03bc = param_5;
    _DAT_100d03c0 = &DAT_100e72c8;
    FUN_10009610(&DAT_100d03a8);
    goto LAB_1000a6da;
  case 3:
    _DAT_100d03c0 = local_48;
    _DAT_100d03ac = param_1;
    _DAT_100d03b0 = param_2;
    _DAT_100d03b4 = &DAT_100e72a8;
    _DAT_100d03b8 = param_4;
    _DAT_100d03bc = param_5;
    FUN_10009610(&DAT_100d03a8);
    _DAT_100c0398 = local_48;
    _DAT_100c03a4 = local_28;
    _DAT_100c0390 = param_4;
    _DAT_100c0394 = param_5;
    _DAT_100c039c = param_1;
    _DAT_100c03a0 = param_2;
    FUN_100095a0(&DAT_100c038c);
    _DAT_10031124 = local_28;
  }
  _DAT_1003111c = param_1;
  _DAT_10031120 = param_2;
  _DAT_10031128 = param_4;
  _DAT_1003112c = param_5;
  _DAT_10031130 = &DAT_100e72c8;
  FUN_100098c0(&DAT_10031118);
LAB_1000a6da:
  *param_6 = DAT_100e72c8;
  param_6[1] = DAT_100e72cc;
  param_6[2] = DAT_100e72d0;
  param_6[3] = DAT_100e72d4;
  param_6[4] = DAT_100e72d8;
  param_6[5] = DAT_100e72dc;
  DAT_100e72f0 = DAT_100e72f0 + DAT_100e72b0;
  _DAT_100e7310 = _DAT_100e7310 + DAT_100e72d0;
  return 0;
}



/**************************************************/

/* Function: AusmParamAccess @ 1000a750 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AusmParamAccess(uint *param_1,int param_2,char *param_3,uint param_4,int param_5,
                    undefined4 param_6,int param_7)

{
  undefined1 *puVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  undefined2 in_FPUControlWord;
  float10 extraout_ST0;
  uint local_ac;
  int local_a8;
  undefined1 local_a4 [16];
  ushort *local_94;
  int local_8c;
  int local_84;
  int local_78;
  uint local_74;
  int local_70;
  char local_6c;
  int local_68 [9];
  undefined1 local_44 [8];
  int local_3c;
  int local_34;
  uint local_c;
  
                    /* 0xa750  4  AusmParamAccess */
  local_c = DAT_1002f000 ^ (uint)&local_ac;
  local_ac = param_4;
  local_a8 = param_5;
  if (DAT_102cb68c == 0) {
    DAT_102cb68c = 1;
    FUN_10001080();
    _DAT_100c0388 = FUN_1000b530();
  }
  if (param_5 == 0) {
    __security_check_cookie(local_c ^ (uint)&local_ac);
    return;
  }
  if (((param_7 < 0) || (2 < param_7)) || (iVar6 = FUN_100013d0(param_5,param_6), iVar6 != 0)) {
LAB_1000b50e:
    __security_check_cookie(local_c ^ (uint)&local_ac);
    return;
  }
  if (local_68[0] != local_a8) {
    __security_check_cookie(local_c ^ (uint)&local_ac);
    return;
  }
  iVar6 = FUN_100015e0(param_6,local_68,local_ac,local_44);
  if ((iVar6 != 0) || (iVar6 = FUN_100018d0(param_6,local_44), dVar2 = _DAT_1002a380, iVar6 != 0))
  goto LAB_1000b50e;
  local_6c = '\0';
  if (0 < local_78) {
    iVar6 = 0;
    puVar9 = local_94;
    do {
      if ((*(ushort *)(param_3 + 4) & 0xf000) == *puVar9) {
        local_6c = (char)local_94[iVar6 * 8 + 1];
        break;
      }
      iVar6 = iVar6 + 1;
      puVar9 = puVar9 + 8;
    } while (iVar6 < local_78);
  }
  iVar6 = 0;
  if (0 < local_70) {
    puVar8 = (undefined2 *)(local_84 + 8);
    do {
      if ((*(char *)(puVar8 + -4) == *param_3) &&
         ((((*(char *)(puVar8 + -4) != '\x01' ||
            ((*(char *)((int)puVar8 + -7) == param_3[2] && (*(char *)(puVar8 + -3) == param_3[1]))))
           && (*(char *)((int)puVar8 + -5) == local_6c)) &&
          ((((ushort)*(byte *)(puVar8 + -2) == *(ushort *)(param_3 + 6) &&
            (*(uint *)(param_2 + 0xc) <=
             CONCAT31(CONCAT21(*puVar8,*(undefined1 *)((int)puVar8 + -1)),
                      *(undefined1 *)(puVar8 + -1)))) &&
           ((ushort)*(byte *)(puVar8 + 1) == *(ushort *)(param_3 + 8))))))) break;
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 0x30;
    } while (iVar6 < local_70);
  }
  if (iVar6 == local_70) goto LAB_1000b4ef;
  if (param_7 == 0) {
    iVar7 = FUN_10001c00(local_a4);
    if (iVar7 == 0) {
      iVar7 = FUN_10001d20();
      if (iVar7 == 0) {
        if (*param_1 == 1) {
          local_84 = iVar6 * 0x60 + local_84;
          *(undefined1 *)(local_84 + 0x10) = 1;
        }
        else {
          local_84 = iVar6 * 0x60 + local_84;
          *(undefined1 *)(local_84 + 0x10) = 0;
        }
        dVar4 = _DAT_1002a378;
        dVar2 = *(double *)(param_1 + 2) * _DAT_1002a378;
        *(char *)(local_84 + 0x12) = (char)(int)ROUND(dVar2);
        *(char *)(local_84 + 0x13) = (char)((uint)(int)ROUND(dVar2) >> 8);
        uVar3 = param_1[4];
        *(char *)(local_84 + 0x14) = (char)uVar3;
        *(char *)(local_84 + 0x15) = (char)(uVar3 >> 8);
        *(char *)(local_84 + 0x17) = (char)(uVar3 >> 0x18);
        *(char *)(local_84 + 0x16) = (char)(uVar3 >> 0x10);
        dVar5 = _DAT_1002a380;
        dVar2 = *(double *)(param_1 + 8) * _DAT_1002a380;
        uVar3 = param_1[4];
        *(char *)(uVar3 * 0x20 + local_8c) = (char)(int)ROUND(dVar2);
        *(char *)(uVar3 * 0x20 + 1 + local_8c) = (char)((uint)(int)ROUND(dVar2) >> 8);
        dVar2 = *(double *)(param_1 + 0xc);
        uVar3 = param_1[4];
        *(char *)(uVar3 * 0x20 + 2 + local_8c) = (char)(int)ROUND(dVar2 * dVar5);
        *(char *)(uVar3 * 0x20 + 3 + local_8c) = (char)((uint)(int)ROUND(dVar2 * dVar5) >> 8);
        dVar2 = *(double *)(param_1 + 0x10);
        puVar1 = (undefined1 *)(param_1[4] * 0x20 + 4 + local_8c);
        *puVar1 = (char)(int)ROUND(dVar2 * dVar5);
        puVar1[1] = (char)((uint)(int)ROUND(dVar2 * dVar5) >> 8);
        dVar2 = *(double *)(param_1 + 0x14);
        puVar1 = (undefined1 *)(param_1[4] * 0x20 + 6 + local_8c);
        *puVar1 = (char)(int)ROUND(dVar2 * dVar5);
        puVar1[1] = (char)((uint)(int)ROUND(dVar2 * dVar5) >> 8);
        puVar1 = (undefined1 *)(param_1[4] * 0x20 + 8 + local_8c);
        dVar2 = *(double *)(param_1 + 0x18);
        *puVar1 = (char)(int)ROUND(dVar2 * dVar5);
        puVar1[1] = (char)((uint)(int)ROUND(dVar2 * dVar5) >> 8);
        puVar1 = (undefined1 *)(param_1[4] * 0x20 + 0x10 + local_8c);
        dVar2 = *(double *)(param_1 + 6);
        *puVar1 = (char)(int)ROUND(dVar2 * dVar5);
        puVar1[1] = (char)((uint)(int)ROUND(dVar2 * dVar5) >> 8);
        puVar1 = (undefined1 *)(param_1[4] * 0x20 + 0x12 + local_8c);
        dVar2 = *(double *)(param_1 + 10);
        *puVar1 = (char)(int)ROUND(dVar2 * dVar5);
        puVar1[1] = (char)((uint)(int)ROUND(dVar2 * dVar5) >> 8);
        puVar1 = (undefined1 *)(param_1[4] * 0x20 + 0x14 + local_8c);
        dVar2 = *(double *)(param_1 + 0xe);
        *puVar1 = (char)(int)ROUND(dVar2 * dVar5);
        puVar1[1] = (char)((uint)(int)ROUND(dVar2 * dVar5) >> 8);
        dVar2 = *(double *)(param_1 + 0x12);
        puVar1 = (undefined1 *)(param_1[4] * 0x20 + 0x16 + local_8c);
        *puVar1 = (char)(int)ROUND(dVar2 * dVar5);
        puVar1[1] = (char)((uint)(int)ROUND(dVar2 * dVar5) >> 8);
        puVar1 = (undefined1 *)(param_1[4] * 0x20 + 0x18 + local_8c);
        dVar2 = *(double *)(param_1 + 0x16);
        *puVar1 = (char)(int)ROUND(dVar5 * dVar2);
        puVar1[1] = (char)((uint)(int)ROUND(dVar5 * dVar2) >> 8);
        *(bool *)(local_84 + 0x20) = param_1[0xda] == 1;
        dVar2 = *(double *)(param_1 + 0xdc);
        *(char *)(local_84 + 0x22) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x23) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        *(char *)(local_84 + 0x24) = (char)param_1[0xde];
        uVar3 = param_1[0xe0];
        *(char *)(local_84 + 0x30) = (char)(short)uVar3;
        *(char *)(local_84 + 0x31) = (char)((ushort)(short)uVar3 >> 8);
        uVar3 = param_1[0xe4];
        *(char *)(local_84 + 0x32) = (char)(short)uVar3;
        *(char *)(local_84 + 0x33) = (char)((ushort)(short)uVar3 >> 8);
        uVar3 = param_1[0xe8];
        *(char *)(local_84 + 0x34) = (char)(short)uVar3;
        *(char *)(local_84 + 0x35) = (char)((ushort)(short)uVar3 >> 8);
        dVar2 = *(double *)(param_1 + 0xe2);
        *(char *)(local_84 + 0x36) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x37) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        dVar2 = *(double *)(param_1 + 0xe6);
        *(char *)(local_84 + 0x38) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x39) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        dVar2 = *(double *)(param_1 + 0xea);
        *(char *)(local_84 + 0x3a) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x3b) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        uVar3 = param_1[0x18d6];
        *(char *)(local_84 + 0x40) = (char)(short)uVar3;
        *(char *)(local_84 + 0x41) = (char)((ushort)(short)uVar3 >> 8);
        uVar3 = param_1[0x18da];
        *(char *)(local_84 + 0x42) = (char)(short)uVar3;
        *(char *)(local_84 + 0x43) = (char)((ushort)(short)uVar3 >> 8);
        uVar3 = param_1[0x18de];
        *(char *)(local_84 + 0x44) = (char)(short)uVar3;
        *(char *)(local_84 + 0x45) = (char)((ushort)(short)uVar3 >> 8);
        dVar2 = *(double *)(param_1 + 0x18d8);
        *(char *)(local_84 + 0x46) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x47) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        dVar2 = *(double *)(param_1 + 0x18dc);
        *(char *)(local_84 + 0x48) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x49) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        dVar2 = *(double *)(param_1 + 0x18e0);
        *(char *)(local_84 + 0x4a) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x4b) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        uVar3 = param_1[0x30cc];
        *(char *)(local_84 + 0x50) = (char)(short)uVar3;
        *(char *)(local_84 + 0x51) = (char)((ushort)(short)uVar3 >> 8);
        uVar3 = param_1[0x30d0];
        *(char *)(local_84 + 0x52) = (char)(short)uVar3;
        *(char *)(local_84 + 0x53) = (char)((ushort)(short)uVar3 >> 8);
        uVar3 = param_1[0x30d4];
        *(char *)(local_84 + 0x54) = (char)(short)uVar3;
        *(char *)(local_84 + 0x55) = (char)((ushort)(short)uVar3 >> 8);
        dVar2 = *(double *)(param_1 + 0x30ce);
        *(char *)(local_84 + 0x56) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x57) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        dVar2 = *(double *)(param_1 + 0x30d2);
        *(char *)(local_84 + 0x58) = (char)(int)ROUND(dVar2 * dVar4);
        *(char *)(local_84 + 0x59) = (char)((uint)(int)ROUND(dVar2 * dVar4) >> 8);
        local_a8 = CONCAT22(local_a8._2_2_,in_FPUControlWord);
        local_ac = (uint)ROUND(dVar4 * *(double *)(param_1 + 0x30d6));
        *(char *)(local_84 + 0x5a) = (char)local_ac;
        *(char *)(local_84 + 0x5b) = (char)(local_ac >> 8);
        uVar3 = param_1[0x7894];
        puVar1 = (undefined1 *)(local_34 * 0x20 + 0x10 + local_3c);
        *puVar1 = (char)uVar3;
        puVar1[1] = (char)(uVar3 >> 8);
        puVar1[2] = (char)(uVar3 >> 0x10);
        puVar1[3] = (char)(uVar3 >> 0x18);
        __security_check_cookie(local_c ^ (uint)&local_ac);
        return;
      }
    }
    goto LAB_1000b50e;
  }
  if (param_7 == 1) {
    local_84 = local_84 + iVar6 * 0x60;
    *param_1 = (uint)(*(char *)(local_84 + 0x10) != '\0');
    dVar2 = _DAT_1002a378;
    *(double *)(param_1 + 2) = (double)*(ushort *)(local_84 + 0x12) / _DAT_1002a378;
    uVar3 = *(uint *)(local_84 + 0x14);
    param_1[4] = uVar3;
    dVar4 = _DAT_1002a380;
    *(double *)(param_1 + 8) = (double)*(ushort *)(uVar3 * 0x20 + local_8c) / _DAT_1002a380;
    *(double *)(param_1 + 0xc) = (double)*(ushort *)(param_1[4] * 0x20 + 2 + local_8c) / dVar4;
    *(double *)(param_1 + 0x10) = (double)*(ushort *)(param_1[4] * 0x20 + 4 + local_8c) / dVar4;
    *(double *)(param_1 + 0x14) = (double)*(ushort *)(param_1[4] * 0x20 + 6 + local_8c) / dVar4;
    *(double *)(param_1 + 0x18) = (double)*(ushort *)(param_1[4] * 0x20 + 8 + local_8c) / dVar4;
    *(double *)(param_1 + 6) = (double)*(ushort *)(param_1[4] * 0x20 + 0x10 + local_8c) / dVar4;
    *(double *)(param_1 + 10) = (double)*(ushort *)(param_1[4] * 0x20 + 0x12 + local_8c) / dVar4;
    *(double *)(param_1 + 0xe) = (double)*(ushort *)(param_1[4] * 0x20 + 0x14 + local_8c) / dVar4;
    *(double *)(param_1 + 0x12) = (double)*(ushort *)(param_1[4] * 0x20 + 0x16 + local_8c) / dVar4;
    *(double *)(param_1 + 0x16) = (double)*(ushort *)(param_1[4] * 0x20 + 0x18 + local_8c) / dVar4;
    param_1[0xda] = (uint)(*(char *)(local_84 + 0x20) != '\0');
    *(double *)(param_1 + 0xdc) = (double)*(ushort *)(local_84 + 0x22) / dVar2;
    param_1[0xde] = (uint)*(byte *)(local_84 + 0x24);
    param_1[0xe0] = (uint)*(ushort *)(local_84 + 0x30);
    param_1[0xe4] = (uint)*(ushort *)(local_84 + 0x32);
    param_1[0xe8] = (uint)*(ushort *)(local_84 + 0x34);
    *(double *)(param_1 + 0xe2) = (double)*(ushort *)(local_84 + 0x36) / dVar2;
    *(double *)(param_1 + 0xe6) = (double)*(ushort *)(local_84 + 0x38) / dVar2;
    *(double *)(param_1 + 0xea) = (double)*(ushort *)(local_84 + 0x3a) / dVar2;
    param_1[0x18d6] = (uint)*(ushort *)(local_84 + 0x40);
    param_1[0x18da] = (uint)*(ushort *)(local_84 + 0x42);
    param_1[0x18de] = (uint)*(ushort *)(local_84 + 0x44);
    *(double *)(param_1 + 0x18d8) = (double)*(ushort *)(local_84 + 0x46) / dVar2;
    *(double *)(param_1 + 0x18dc) = (double)*(ushort *)(local_84 + 0x48) / dVar2;
    *(double *)(param_1 + 0x18e0) = (double)*(ushort *)(local_84 + 0x4a) / dVar2;
    param_1[0x30cc] = (uint)*(ushort *)(local_84 + 0x50);
    param_1[0x30d0] = (uint)*(ushort *)(local_84 + 0x52);
    param_1[0x30d4] = (uint)*(ushort *)(local_84 + 0x54);
    *(double *)(param_1 + 0x30ce) = (double)*(ushort *)(local_84 + 0x56) / dVar2;
    *(double *)(param_1 + 0x30d2) = (double)*(ushort *)(local_84 + 0x58) / dVar2;
    local_ac = (uint)*(ushort *)(local_84 + 0x5a);
    *(double *)(param_1 + 0x30d6) = (double)local_ac / dVar2;
    iVar6 = FUN_10001c00(local_a4);
    if ((iVar6 != 0) || (iVar6 = FUN_10001d20(), iVar6 != 0)) goto LAB_1000b4ef;
    FUN_100010d0();
    FUN_10001180();
  }
  else {
    if (param_7 != 2) goto LAB_1000b2a0;
    if (local_74 <= param_1[4]) {
LAB_1000b4ef:
      __security_check_cookie(local_c ^ (uint)&local_ac);
      return;
    }
    *(double *)(param_1 + 8) = (double)*(ushort *)(param_1[4] * 0x20 + local_8c) / _DAT_1002a380;
    *(double *)(param_1 + 0xc) = (double)*(ushort *)(param_1[4] * 0x20 + 2 + local_8c) / dVar2;
    *(double *)(param_1 + 0x10) = (double)*(ushort *)(param_1[4] * 0x20 + 4 + local_8c) / dVar2;
    *(double *)(param_1 + 0x14) = (double)*(ushort *)(param_1[4] * 0x20 + 6 + local_8c) / dVar2;
    *(double *)(param_1 + 0x18) = (double)*(ushort *)(param_1[4] * 0x20 + 8 + local_8c) / dVar2;
    *(double *)(param_1 + 6) = (double)*(ushort *)(param_1[4] * 0x20 + 0x10 + local_8c) / dVar2;
    *(double *)(param_1 + 10) = (double)*(ushort *)(param_1[4] * 0x20 + 0x12 + local_8c) / dVar2;
    *(double *)(param_1 + 0xe) = (double)*(ushort *)(param_1[4] * 0x20 + 0x14 + local_8c) / dVar2;
    *(double *)(param_1 + 0x12) = (double)*(ushort *)(param_1[4] * 0x20 + 0x16 + local_8c) / dVar2;
    local_ac = (uint)*(ushort *)(param_1[4] * 0x20 + 0x18 + local_8c);
    *(double *)(param_1 + 0x16) = (double)local_ac / dVar2;
    iVar6 = FUN_100226b0();
    if ((((iVar6 < 0) || (1000 < iVar6)) ||
        ((iVar6 = FUN_100226b0(), iVar6 < 0 ||
         ((((1000 < iVar6 || (iVar6 = FUN_100226b0(), iVar6 < 0)) || (1000 < iVar6)) ||
          ((iVar6 = FUN_100226b0(), iVar6 < 0 || (1000 < iVar6)))))))) ||
       (((iVar6 = FUN_100226b0(), iVar6 < 0 ||
         ((1000 < iVar6 || (iVar6 = FUN_100226b0(), iVar6 != 0)))) ||
        (((*(double *)(param_1 + 10) < *(double *)(param_1 + 6) !=
           (*(double *)(param_1 + 10) == *(double *)(param_1 + 6)) ||
          (((*(double *)(param_1 + 0xe) < *(double *)(param_1 + 10) !=
             (*(double *)(param_1 + 0xe) == *(double *)(param_1 + 10)) ||
            (*(double *)(param_1 + 0x12) < *(double *)(param_1 + 0xe) !=
             (*(double *)(param_1 + 0x12) == *(double *)(param_1 + 0xe)))) ||
           (extraout_ST0 < (float10)*(double *)(param_1 + 0x12) !=
            (extraout_ST0 == (float10)*(double *)(param_1 + 0x12)))))) ||
         (iVar6 = FUN_100226b0(), iVar6 != 1000)))))) goto LAB_1000b4ef;
  }
  param_1[0x7894] = *(uint *)(local_34 * 0x20 + 0x10 + local_3c);
LAB_1000b2a0:
  __security_check_cookie(local_c ^ (uint)&local_ac);
  return;
}



/**************************************************/

/* Function: FUN_1000b530 @ 1000b530 */

/* WARNING: Removing unreachable block (ram,0x1000b614) */
/* WARNING: Removing unreachable block (ram,0x1000b5d3) */
/* WARNING: Removing unreachable block (ram,0x1000b592) */
/* WARNING: Removing unreachable block (ram,0x1000b559) */

undefined4 FUN_1000b530(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte in_AF;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  byte in_TF;
  bool bVar12;
  byte bVar13;
  byte in_IF;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  byte in_NT;
  bool bVar17;
  byte bVar18;
  byte in_AC;
  bool bVar19;
  byte bVar20;
  byte in_VIF;
  byte bVar21;
  byte in_VIP;
  byte bVar22;
  byte in_ID;
  bool bVar23;
  byte bVar24;
  uint uVar25;
  
  uVar5 = 0;
  uVar25 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
           | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
           (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
           (uint)(in_AC & 1) * 0x40000;
  uVar3 = uVar25 ^ 0x200000;
  bVar17 = (uVar3 & 0x4000) != 0;
  bVar14 = (uVar3 & 0x200) != 0;
  bVar12 = (uVar3 & 0x100) != 0;
  bVar8 = (uVar3 & 0x10) != 0;
  bVar23 = (uVar3 & 0x200000) != 0;
  bVar19 = (uVar3 & 0x40000) != 0;
  uVar3 = (uint)bVar17 * 0x4000 | (uint)bVar14 * 0x200 | (uint)bVar12 * 0x100 |
          (uint)((uVar3 & 0x40) != 0) * 0x40 | (uint)bVar8 * 0x10 | (uint)((uVar3 & 4) != 0) * 4 |
          (uint)bVar23 * 0x200000 | (uint)bVar19 * 0x40000;
  bVar6 = uVar25 < uVar3;
  bVar16 = SBORROW4(uVar25,uVar3);
  uVar25 = uVar25 - uVar3;
  bVar11 = (int)uVar25 < 0;
  bVar10 = uVar25 == 0;
  bVar7 = (POPCOUNT(uVar25 & 0xff) & 1U) == 0;
  if (!bVar10) {
    iVar1 = cpuid_Version_info(1);
    bVar6 = false;
    bVar16 = false;
    bVar11 = false;
    bVar10 = (*(uint *)(iVar1 + 8) & 0x800000) == 0;
    bVar7 = true;
    if (!bVar10) {
      uVar5 = 1;
    }
  }
  uVar25 = (uint)bVar17 * 0x4000 | (uint)bVar16 * 0x800 | (uint)bVar14 * 0x200 |
           (uint)bVar12 * 0x100 | (uint)bVar11 * 0x80 | (uint)bVar10 * 0x40 | (uint)bVar8 * 0x10 |
           (uint)bVar7 * 4 | (uint)bVar6 | (uint)bVar23 * 0x200000 | (uint)bVar19 * 0x40000;
  uVar3 = uVar25 ^ 0x200000;
  bVar18 = (uVar3 & 0x4000) != 0;
  bVar15 = (uVar3 & 0x200) != 0;
  bVar13 = (uVar3 & 0x100) != 0;
  bVar9 = (uVar3 & 0x10) != 0;
  bVar24 = (uVar3 & 0x200000) != 0;
  bVar20 = (uVar3 & 0x40000) != 0;
  bVar22 = 0;
  bVar21 = 0;
  uVar3 = (uint)bVar18 * 0x4000 | (uint)((uVar3 & 0x800) != 0) * 0x800 | (uint)bVar15 * 0x200 |
          (uint)bVar13 * 0x100 | (uint)((uVar3 & 0x80) != 0) * 0x80 |
          (uint)((uVar3 & 0x40) != 0) * 0x40 | (uint)bVar9 * 0x10 | (uint)((uVar3 & 4) != 0) * 4 |
          (uint)((uVar3 & 1) != 0) | (uint)bVar24 * 0x200000 | (uint)bVar20 * 0x40000;
  bVar6 = uVar25 < uVar3;
  bVar11 = SBORROW4(uVar25,uVar3);
  uVar25 = uVar25 - uVar3;
  bVar10 = (int)uVar25 < 0;
  bVar8 = uVar25 == 0;
  bVar7 = (POPCOUNT(uVar25 & 0xff) & 1U) == 0;
  uVar25 = uVar5;
  if (!bVar8) {
    iVar1 = cpuid_Version_info(1);
    bVar6 = false;
    bVar11 = false;
    bVar10 = false;
    bVar8 = (*(uint *)(iVar1 + 8) & 0x2000000) == 0;
    bVar7 = true;
    if (!bVar8) {
      uVar3 = FUN_1000b640();
      bVar6 = false;
      bVar11 = false;
      bVar10 = (int)uVar3 < 0;
      bVar8 = uVar3 == 0;
      bVar7 = (POPCOUNT(uVar3 & 0xff) & 1U) == 0;
      if (!bVar8) {
        bVar6 = false;
        bVar11 = false;
        uVar25 = uVar5 | 6;
        bVar10 = false;
        bVar8 = uVar25 == 0;
        bVar7 = (POPCOUNT(uVar5 | 6) & 1U) == 0;
      }
    }
  }
  uVar3 = (uint)(bVar18 & 1) * 0x4000 | (uint)bVar11 * 0x800 | (uint)(bVar15 & 1) * 0x200 |
          (uint)(bVar13 & 1) * 0x100 | (uint)bVar10 * 0x80 | (uint)bVar8 * 0x40 |
          (uint)(bVar9 & 1) * 0x10 | (uint)bVar7 * 4 | (uint)bVar6 | (uint)(bVar24 & 1) * 0x200000 |
          (uint)(bVar22 & 1) * 0x100000 | (uint)(bVar21 & 1) * 0x80000 |
          (uint)(bVar20 & 1) * 0x40000;
  uVar5 = uVar3 ^ 0x200000;
  bVar18 = (uVar5 & 0x4000) != 0;
  bVar15 = (uVar5 & 0x200) != 0;
  bVar13 = (uVar5 & 0x100) != 0;
  bVar9 = (uVar5 & 0x10) != 0;
  bVar24 = (uVar5 & 0x200000) != 0;
  bVar20 = (uVar5 & 0x40000) != 0;
  bVar22 = 0;
  bVar21 = 0;
  uVar5 = (uint)bVar18 * 0x4000 | (uint)((uVar5 & 0x800) != 0) * 0x800 | (uint)bVar15 * 0x200 |
          (uint)bVar13 * 0x100 | (uint)((uVar5 & 0x80) != 0) * 0x80 |
          (uint)((uVar5 & 0x40) != 0) * 0x40 | (uint)bVar9 * 0x10 | (uint)((uVar5 & 4) != 0) * 4 |
          (uint)((uVar5 & 1) != 0) | (uint)bVar24 * 0x200000 | (uint)bVar20 * 0x40000;
  bVar6 = uVar3 < uVar5;
  bVar11 = SBORROW4(uVar3,uVar5);
  uVar3 = uVar3 - uVar5;
  bVar10 = (int)uVar3 < 0;
  bVar8 = uVar3 == 0;
  bVar7 = (POPCOUNT(uVar3 & 0xff) & 1U) == 0;
  uVar3 = uVar25;
  if (!bVar8) {
    iVar1 = cpuid_Version_info(1);
    bVar6 = false;
    bVar11 = false;
    bVar10 = false;
    bVar8 = (*(uint *)(iVar1 + 8) & 0x4000000) == 0;
    bVar7 = true;
    if (!bVar8) {
      uVar5 = FUN_1000b6d0();
      bVar6 = false;
      bVar11 = false;
      bVar10 = (int)uVar5 < 0;
      bVar8 = uVar5 == 0;
      bVar7 = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
      if (!bVar8) {
        bVar6 = false;
        bVar11 = false;
        uVar3 = uVar25 | 8;
        bVar10 = false;
        bVar8 = uVar3 == 0;
        bVar7 = (POPCOUNT(uVar25 | 8) & 1U) == 0;
      }
    }
  }
  uVar4 = (ushort)uVar3;
  uVar3 = (uint)(bVar18 & 1) * 0x4000 | (uint)bVar11 * 0x800 | (uint)(bVar15 & 1) * 0x200 |
          (uint)(bVar13 & 1) * 0x100 | (uint)bVar10 * 0x80 | (uint)bVar8 * 0x40 |
          (uint)(bVar9 & 1) * 0x10 | (uint)bVar7 * 4 | (uint)bVar6 | (uint)(bVar24 & 1) * 0x200000 |
          (uint)(bVar22 & 1) * 0x100000 | (uint)(bVar21 & 1) * 0x80000 |
          (uint)(bVar20 & 1) * 0x40000;
  uVar25 = uVar3 ^ 0x200000;
  if (uVar3 != ((uint)((uVar25 & 0x4000) != 0) * 0x4000 | (uint)((uVar25 & 0x800) != 0) * 0x800 |
                (uint)((uVar25 & 0x200) != 0) * 0x200 | (uint)((uVar25 & 0x100) != 0) * 0x100 |
                (uint)((uVar25 & 0x80) != 0) * 0x80 | (uint)((uVar25 & 0x40) != 0) * 0x40 |
                (uint)((uVar25 & 0x10) != 0) * 0x10 | (uint)((uVar25 & 4) != 0) * 4 |
                (uint)((uVar25 & 1) != 0) | (uint)((uVar25 & 0x200000) != 0) * 0x200000 |
               (uint)((uVar25 & 0x40000) != 0) * 0x40000)) {
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar3 = *puVar2;
    if ((puVar2[2] & 0x80000000) != 0) {
      uVar4 = uVar4 | 0x12;
    }
  }
  return CONCAT22((short)(uVar3 >> 0x10),uVar4);
}



/**************************************************/

/* Function: FUN_1000b640 @ 1000b640 */

undefined4 FUN_1000b640(void)

{
  return 1;
}



/**************************************************/

/* Function: FUN_1000b6d0 @ 1000b6d0 */

undefined4 FUN_1000b6d0(void)

{
  return 1;
}



/**************************************************/

/* Function: FUN_1000b760 @ 1000b760 */

uint FUN_1000b760(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int in_EAX;
  ushort *puVar2;
  int iVar3;
  
  piVar1 = *(int **)(in_EAX + 0xc);
  iVar3 = 0;
  if (*piVar1 != 0 && -1 < *(char *)((int)piVar1 + 3)) {
    puVar2 = *(ushort **)(in_EAX + 0x10);
    do {
      if ((((*puVar2 == param_1) && (puVar2[1] == param_2)) && ((byte)puVar2[4] == param_3)) &&
         (*(byte *)((int)puVar2 + 9) == param_4)) {
        return (uint)(byte)(*(ushort **)(in_EAX + 0x10))[iVar3 * 8 + 5];
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (iVar3 < *piVar1);
  }
  return 0xffffffff;
}



/**************************************************/

/* Function: FUN_1000b800 @ 1000b800 */

int __fastcall FUN_1000b800(int param_1)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (**(int **)(param_1 + 4) < 1) {
    return -1;
  }
  piVar1 = *(int **)(param_1 + 8);
  do {
    if (*piVar1 == in_EAX) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (iVar2 < **(int **)(param_1 + 4));
  return -1;
}



/**************************************************/

/* Function: FUN_1000b870 @ 1000b870 */

undefined4 __thiscall FUN_1000b870(int param_1,uint *param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < in_EAX) && (in_EAX < **(int **)(param_1 + 0x14))) {
    iVar1 = in_EAX * 0xd0 + *(int *)(param_1 + 0x18);
    iVar3 = 0xd;
    do {
      iVar2 = 0;
      do {
        *param_2 = (uint)*(byte *)(iVar1 + iVar2);
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 1;
      } while (iVar2 < 0xd);
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: FUN_1000b8e0 @ 1000b8e0 */

undefined4 FUN_1000b8e0(void)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = -6;
  in_EAX[0xa9] = 0;
  in_EAX[0x356] = 0;
  in_EAX[0x5ff] = 0;
  in_EAX[0x8a8] = 0;
  in_EAX[0xb51] = 0;
  in_EAX[0xaa] = 0;
  in_EAX[0xab] = 0;
  in_EAX[0xac] = 0;
  in_EAX[0xad] = 0;
  local_c = 6;
  local_4 = 0xd;
  local_8 = 6;
  piVar2 = in_EAX;
  iVar3 = iVar4;
  while( true ) {
    do {
      if (*piVar2 != 0) {
        in_EAX[in_EAX[0x356] * 4 + 0xae] = iVar3;
        in_EAX[in_EAX[0x356] * 4 + 0xaf] = iVar4;
        in_EAX[(in_EAX[0x356] + 0x2c) * 4] = *piVar2;
        in_EAX[0x356] = in_EAX[0x356] + 1;
        in_EAX[0xa9] = in_EAX[0xa9] + *piVar2;
        if ((iVar3 == 6) || (piVar2[1] == 0)) {
          in_EAX[(in_EAX[0x8a8] + 0x180) * 4] = iVar3;
          in_EAX[in_EAX[0x8a8] * 4 + 0x601] = iVar4;
          in_EAX[in_EAX[0x8a8] * 4 + 0x602] = *piVar2;
          in_EAX[0x8a8] = in_EAX[0x8a8] + 1;
        }
        else {
          in_EAX[in_EAX[0x5ff] * 4 + 0x357] = iVar3;
          in_EAX[(in_EAX[0x5ff] + 0xd6) * 4] = iVar4;
          in_EAX[in_EAX[0x5ff] * 4 + 0x359] = *piVar2;
          in_EAX[0x5ff] = in_EAX[0x5ff] + 1;
        }
        if ((iVar3 == -6) || (piVar2[-1] == 0)) {
          in_EAX[in_EAX[0xb51] * 4 + 0x8a9] = iVar3;
          in_EAX[in_EAX[0xb51] * 4 + 0x8aa] = iVar4;
          in_EAX[in_EAX[0xb51] * 4 + 0x8ab] = *piVar2;
          in_EAX[0xb51] = in_EAX[0xb51] + 1;
        }
        if (in_EAX[0xaa] < local_c) {
          in_EAX[0xaa] = local_c;
        }
        if (in_EAX[0xab] < iVar4) {
          in_EAX[0xab] = iVar4;
        }
        if (in_EAX[0xac] < local_8) {
          in_EAX[0xac] = local_8;
        }
        if (in_EAX[0xad] < iVar3) {
          in_EAX[0xad] = iVar3;
        }
      }
      local_8 = local_8 + -1;
      iVar1 = iVar3 + 7;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0xd);
    local_c = local_c + -1;
    iVar4 = iVar4 + 1;
    local_4 = local_4 + -1;
    if (local_4 == 0) break;
    local_8 = 6;
    iVar3 = -6;
  }
  in_EAX[(in_EAX[0x356] + 0x2c) * 4] = 0;
  in_EAX[in_EAX[0x5ff] * 4 + 0x359] = 0;
  in_EAX[in_EAX[0x8a8] * 4 + 0x602] = 0;
  in_EAX[in_EAX[0xb51] * 4 + 0x8ab] = 0;
  return 0;
}



/**************************************************/

/* Function: FUN_1000bb20 @ 1000bb20 */

int __thiscall FUN_1000bb20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  ushort *unaff_ESI;
  
  if ((((param_2 != 0) && (iVar1 = *(int *)(unaff_ESI + 0xe), iVar1 <= in_EAX)) &&
      (in_EAX < *(int *)(unaff_ESI + 2) + iVar1)) &&
     ((iVar2 = *(int *)(unaff_ESI + 0x10), iVar2 <= param_1 &&
      (param_1 < *(int *)(unaff_ESI + 6) + iVar2)))) {
    return (param_1 - iVar2) * *(int *)(unaff_ESI + 4) +
           ((int)((uint)unaff_ESI[1] * (uint)*unaff_ESI +
                 ((int)((uint)unaff_ESI[1] * (uint)*unaff_ESI) >> 0x1f & 7U)) >> 3) *
           (in_EAX - iVar1) + param_2;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000bb80 @ 1000bb80 */

undefined4 FUN_1000bb80(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_10;
  int local_8;
  int *local_4;
  
  local_8 = FUN_1000bb20(param_1[3]);
  if (local_8 == 0) {
    local_8 = FUN_1000bb20(param_1[1]);
  }
  iVar3 = 0;
  local_10 = 0;
  if (*(int *)(param_2 + 0x2c0) != 0) {
    piVar6 = (int *)(param_2 + 0x2b8);
    do {
      iVar3 = piVar6[1] + *param_3;
      iVar7 = *piVar6 + param_3[1];
      puVar2 = (ushort *)param_1[2];
      if ((((param_1[3] == 0) || (iVar7 < *(int *)(puVar2 + 0xe))) ||
          (*(int *)(puVar2 + 2) + *(int *)(puVar2 + 0xe) <= iVar7)) ||
         ((iVar3 < *(int *)(puVar2 + 0x10) ||
          (*(int *)(puVar2 + 6) + *(int *)(puVar2 + 0x10) <= iVar3)))) {
        iVar4 = 0;
      }
      else {
        iVar4 = (iVar3 - *(int *)(puVar2 + 0x10)) * *(int *)(puVar2 + 4) +
                ((int)(((int)((uint)puVar2[1] * (uint)*puVar2) >> 0x1f & 7U) +
                      (uint)puVar2[1] * (uint)*puVar2) >> 3) * (iVar7 - *(int *)(puVar2 + 0xe)) +
                param_1[3];
      }
      if (iVar4 == 0) {
        puVar2 = (ushort *)*param_1;
        if (((param_1[1] == 0) || (iVar7 < *(int *)(puVar2 + 0xe))) ||
           ((*(int *)(puVar2 + 2) + *(int *)(puVar2 + 0xe) <= iVar7 ||
            ((iVar4 = *(int *)(puVar2 + 0x10), iVar3 < iVar4 ||
             (*(int *)(puVar2 + 6) + iVar4 <= iVar3)))))) {
          iVar4 = 0;
        }
        else {
          iVar4 = (iVar3 - iVar4) * *(int *)(puVar2 + 4) +
                  ((int)((uint)puVar2[1] * (uint)*puVar2 +
                        ((int)((uint)puVar2[1] * (uint)*puVar2) >> 0x1f & 7U)) >> 3) *
                  (iVar7 - *(int *)(puVar2 + 0xe)) + param_1[1];
        }
      }
      piVar6[3] = iVar4 - local_8;
      iVar3 = local_10 + 1;
      piVar1 = piVar6 + 6;
      piVar6 = piVar6 + 4;
      local_10 = iVar3;
    } while (*piVar1 != 0);
  }
  *(undefined4 *)(iVar3 * 0x10 + 0x2c4 + param_2) = 0x80000000;
  iVar3 = 0;
  local_10 = 0;
  if (*(int *)(param_2 + 0xd64) != 0) {
    local_4 = (int *)(param_2 + 0xd60);
    iVar7 = param_2;
    do {
      iVar3 = *local_4 + *param_3;
      iVar4 = *(int *)(iVar7 + 0xd5c) + param_3[1];
      puVar2 = (ushort *)param_1[2];
      if ((((param_1[3] == 0) || (iVar4 < *(int *)(puVar2 + 0xe))) ||
          (*(int *)(puVar2 + 2) + *(int *)(puVar2 + 0xe) <= iVar4)) ||
         ((iVar3 < *(int *)(puVar2 + 0x10) ||
          (*(int *)(puVar2 + 6) + *(int *)(puVar2 + 0x10) <= iVar3)))) {
        iVar5 = 0;
      }
      else {
        iVar5 = (iVar3 - *(int *)(puVar2 + 0x10)) * *(int *)(puVar2 + 4) +
                ((int)(((int)((uint)puVar2[1] * (uint)*puVar2) >> 0x1f & 7U) +
                      (uint)puVar2[1] * (uint)*puVar2) >> 3) * (iVar4 - *(int *)(puVar2 + 0xe)) +
                param_1[3];
      }
      if (iVar5 == 0) {
        puVar2 = (ushort *)*param_1;
        if (((param_1[1] == 0) || (iVar4 < *(int *)(puVar2 + 0xe))) ||
           ((*(int *)(puVar2 + 2) + *(int *)(puVar2 + 0xe) <= iVar4 ||
            ((iVar5 = *(int *)(puVar2 + 0x10), iVar3 < iVar5 ||
             (*(int *)(puVar2 + 6) + iVar5 <= iVar3)))))) {
          iVar5 = 0;
        }
        else {
          iVar5 = (iVar3 - iVar5) * *(int *)(puVar2 + 4) +
                  ((int)((uint)puVar2[1] * (uint)*puVar2 +
                        ((int)((uint)puVar2[1] * (uint)*puVar2) >> 0x1f & 7U)) >> 3) *
                  (iVar4 - *(int *)(puVar2 + 0xe)) + param_1[1];
        }
      }
      local_4 = local_4 + 4;
      *(int *)(iVar7 + 0xd68) = iVar5 - local_8;
      iVar3 = local_10 + 1;
      iVar7 = iVar3 * 0x10 + param_2;
      local_10 = iVar3;
    } while (*(int *)(iVar3 * 0x10 + 0xd64 + param_2) != 0);
  }
  *(undefined4 *)(iVar3 * 0x10 + 0xd68 + param_2) = 0x80000000;
  iVar3 = 0;
  local_10 = 0;
  if (*(int *)(param_2 + 0x1808) != 0) {
    local_4 = (int *)(param_2 + 0x1800);
    iVar7 = param_2;
    do {
      iVar3 = *(int *)(iVar7 + 0x1804) + *param_3;
      iVar4 = param_3[1] + *local_4;
      puVar2 = (ushort *)param_1[2];
      if ((((param_1[3] == 0) || (iVar4 < *(int *)(puVar2 + 0xe))) ||
          (*(int *)(puVar2 + 2) + *(int *)(puVar2 + 0xe) <= iVar4)) ||
         ((iVar3 < *(int *)(puVar2 + 0x10) ||
          (*(int *)(puVar2 + 6) + *(int *)(puVar2 + 0x10) <= iVar3)))) {
        iVar5 = 0;
      }
      else {
        iVar5 = (iVar3 - *(int *)(puVar2 + 0x10)) * *(int *)(puVar2 + 4) +
                ((int)(((int)((uint)puVar2[1] * (uint)*puVar2) >> 0x1f & 7U) +
                      (uint)puVar2[1] * (uint)*puVar2) >> 3) * (iVar4 - *(int *)(puVar2 + 0xe)) +
                param_1[3];
      }
      if (iVar5 == 0) {
        puVar2 = (ushort *)*param_1;
        if (((param_1[1] == 0) || (iVar4 < *(int *)(puVar2 + 0xe))) ||
           ((*(int *)(puVar2 + 2) + *(int *)(puVar2 + 0xe) <= iVar4 ||
            ((iVar5 = *(int *)(puVar2 + 0x10), iVar3 < iVar5 ||
             (*(int *)(puVar2 + 6) + iVar5 <= iVar3)))))) {
          iVar5 = 0;
        }
        else {
          iVar5 = (iVar3 - iVar5) * *(int *)(puVar2 + 4) +
                  ((int)((uint)puVar2[1] * (uint)*puVar2 +
                        ((int)((uint)puVar2[1] * (uint)*puVar2) >> 0x1f & 7U)) >> 3) *
                  (iVar4 - *(int *)(puVar2 + 0xe)) + param_1[1];
        }
      }
      local_4 = local_4 + 4;
      *(int *)(iVar7 + 0x180c) = iVar5 - local_8;
      iVar3 = local_10 + 1;
      iVar7 = iVar3 * 0x10 + param_2;
      local_10 = iVar3;
    } while (*(int *)(iVar3 * 0x10 + 0x1808 + param_2) != 0);
  }
  iVar7 = 0;
  *(undefined4 *)(iVar3 * 0x10 + 0x180c + param_2) = 0x80000000;
  local_10 = 0;
  if (*(int *)(param_2 + 0x22ac) != 0) {
    local_4 = (int *)(param_2 + 0x22b0);
    iVar3 = param_2;
    do {
      iVar7 = *(int *)(iVar3 + 0x22a8) + *param_3;
      iVar3 = *(int *)(iVar3 + 0x22a4) + param_3[1];
      puVar2 = (ushort *)param_1[2];
      if ((((param_1[3] == 0) || (iVar4 = *(int *)(puVar2 + 0xe), iVar3 < iVar4)) ||
          (*(int *)(puVar2 + 2) + iVar4 <= iVar3)) ||
         ((iVar7 < *(int *)(puVar2 + 0x10) ||
          (*(int *)(puVar2 + 6) + *(int *)(puVar2 + 0x10) <= iVar7)))) {
        iVar4 = 0;
      }
      else {
        iVar4 = (iVar7 - *(int *)(puVar2 + 0x10)) * *(int *)(puVar2 + 4) +
                ((int)(((int)((uint)puVar2[1] * (uint)*puVar2) >> 0x1f & 7U) +
                      (uint)puVar2[1] * (uint)*puVar2) >> 3) * (iVar3 - iVar4) + param_1[3];
      }
      if (iVar4 == 0) {
        puVar2 = (ushort *)*param_1;
        if (((param_1[1] == 0) || (iVar4 = *(int *)(puVar2 + 0xe), iVar3 < iVar4)) ||
           ((*(int *)(puVar2 + 2) + iVar4 <= iVar3 ||
            ((iVar5 = *(int *)(puVar2 + 0x10), iVar7 < iVar5 ||
             (*(int *)(puVar2 + 6) + iVar5 <= iVar7)))))) {
          iVar4 = 0;
        }
        else {
          iVar4 = (iVar7 - iVar5) * *(int *)(puVar2 + 4) +
                  ((int)((uint)puVar2[1] * (uint)*puVar2 +
                        ((int)((uint)puVar2[1] * (uint)*puVar2) >> 0x1f & 7U)) >> 3) *
                  (iVar3 - iVar4) + param_1[1];
        }
      }
      *local_4 = iVar4 - local_8;
      iVar7 = local_10 + 1;
      local_4 = local_4 + 4;
      iVar3 = iVar7 * 0x10 + param_2;
      local_10 = iVar7;
    } while (*(int *)(iVar3 + 0x22ac) != 0);
  }
  *(undefined4 *)((iVar7 + 0x22b) * 0x10 + param_2) = 0x80000000;
  return 0;
}



/**************************************************/

/* Function: FUN_1000c0b0 @ 1000c0b0 */

void FUN_1000c0b0(undefined4 *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_14;
  undefined1 *local_10;
  uint local_8;
  uint local_4;
  
  iVar9 = param_3[1];
  local_10 = (undefined1 *)FUN_1000bb20(param_1[5]);
  if (iVar9 < param_3[2]) {
    do {
      local_14 = *(int *)(param_2 + 0x2c0);
      local_8 = 0;
      local_4 = 0;
      if (local_14 != 0) {
        puVar1 = (ushort *)param_1[2];
        piVar7 = (int *)(param_2 + 0x2b8);
        do {
          iVar6 = piVar7[1] + *param_3;
          iVar8 = *piVar7 + iVar9;
          if ((((param_1[3] == 0) || (iVar2 = *(int *)(puVar1 + 0xe), iVar8 < iVar2)) ||
              (*(int *)(puVar1 + 2) + iVar2 <= iVar8)) ||
             ((iVar3 = *(int *)(puVar1 + 0x10), iVar6 < iVar3 ||
              (*(int *)(puVar1 + 6) + iVar3 <= iVar6)))) {
            pbVar5 = (byte *)0x0;
          }
          else {
            pbVar5 = (byte *)((iVar6 - iVar3) * *(int *)(puVar1 + 4) +
                             ((int)(((int)((uint)puVar1[1] * (uint)*puVar1) >> 0x1f & 7U) +
                                   (uint)puVar1[1] * (uint)*puVar1) >> 3) * (iVar8 - iVar2) +
                             param_1[3]);
          }
          if (pbVar5 == (byte *)0x0) {
            puVar4 = (ushort *)*param_1;
            if (((param_1[1] == 0) || (iVar8 < *(int *)(puVar4 + 0xe))) ||
               ((*(int *)(puVar4 + 2) + *(int *)(puVar4 + 0xe) <= iVar8 ||
                ((iVar2 = *(int *)(puVar4 + 0x10), iVar6 < iVar2 ||
                 (*(int *)(puVar4 + 6) + iVar2 <= iVar6)))))) {
              pbVar5 = (byte *)0x0;
            }
            else {
              pbVar5 = (byte *)((iVar6 - iVar2) * *(int *)(puVar4 + 4) +
                               ((int)((uint)puVar4[1] * (uint)*puVar4 +
                                     ((int)((uint)puVar4[1] * (uint)*puVar4) >> 0x1f & 7U)) >> 3) *
                               (iVar8 - *(int *)(puVar4 + 0xe)) + param_1[1]);
            }
            if (pbVar5 != (byte *)0x0) goto LAB_1000c1fa;
          }
          else {
LAB_1000c1fa:
            local_8 = local_8 + (uint)*pbVar5 * local_14;
            local_4 = local_4 + local_14;
          }
          local_14 = piVar7[6];
          piVar7 = piVar7 + 4;
        } while (local_14 != 0);
      }
      *local_10 = (char)(local_8 / local_4);
      iVar9 = iVar9 + param_3[3];
      local_10 = local_10 + 1;
    } while (iVar9 < param_3[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000c260 @ 1000c260 */

void FUN_1000c260(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar4 = FUN_1000bb20(*(undefined4 *)(param_1 + 0xc));
  if (iVar4 == 0) {
    iVar4 = FUN_1000bb20(*(undefined4 *)(param_1 + 4));
  }
  puVar5 = (undefined1 *)FUN_1000bb20(*(undefined4 *)(param_1 + 0x14));
  iVar8 = *(int *)(param_3 + 4);
  uVar2 = *(uint *)(param_2 + 0x2a4);
  if (iVar8 < *(int *)(param_3 + 8)) {
    do {
      uVar6 = 0;
      iVar3 = *(int *)(param_2 + 0x2c4);
      piVar7 = (int *)(param_2 + 0x2c4);
      while (iVar3 != -0x80000000) {
        piVar1 = piVar7 + -1;
        piVar7 = piVar7 + 4;
        uVar6 = uVar6 + (uint)*(byte *)(iVar3 + iVar4) * *piVar1;
        iVar3 = *piVar7;
      }
      *puVar5 = (char)(uVar6 / uVar2);
      iVar8 = iVar8 + *(int *)(param_3 + 0xc);
      iVar4 = iVar4 + *(int *)(param_3 + 0xc);
      puVar5 = puVar5 + 1;
    } while (iVar8 < *(int *)(param_3 + 8));
  }
  return;
}



/**************************************************/

/* Function: FUN_1000c450 @ 1000c450 */

void FUN_1000c450(undefined4 *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_14;
  undefined2 *local_10;
  uint local_8;
  uint local_4;
  
  iVar8 = param_3[1];
  local_10 = (undefined2 *)FUN_1000bb20(param_1[5]);
  if (iVar8 < param_3[2]) {
    do {
      local_14 = *(int *)(param_2 + 0x2c0);
      local_8 = 0;
      local_4 = 0;
      if (local_14 != 0) {
        puVar1 = (ushort *)param_1[2];
        piVar6 = (int *)(param_2 + 0x2b8);
        do {
          iVar5 = piVar6[1] + *param_3;
          iVar7 = *piVar6 + iVar8;
          if ((((param_1[3] == 0) || (iVar2 = *(int *)(puVar1 + 0xe), iVar7 < iVar2)) ||
              (*(int *)(puVar1 + 2) + iVar2 <= iVar7)) ||
             ((iVar3 = *(int *)(puVar1 + 0x10), iVar5 < iVar3 ||
              (*(int *)(puVar1 + 6) + iVar3 <= iVar5)))) {
            puVar4 = (ushort *)0x0;
          }
          else {
            puVar4 = (ushort *)
                     ((iVar5 - iVar3) * *(int *)(puVar1 + 4) +
                     ((int)(((int)((uint)puVar1[1] * (uint)*puVar1) >> 0x1f & 7U) +
                           (uint)puVar1[1] * (uint)*puVar1) >> 3) * (iVar7 - iVar2) + param_1[3]);
          }
          if (puVar4 == (ushort *)0x0) {
            puVar4 = (ushort *)*param_1;
            if (((param_1[1] == 0) || (iVar7 < *(int *)(puVar4 + 0xe))) ||
               ((*(int *)(puVar4 + 2) + *(int *)(puVar4 + 0xe) <= iVar7 ||
                ((iVar2 = *(int *)(puVar4 + 0x10), iVar5 < iVar2 ||
                 (*(int *)(puVar4 + 6) + iVar2 <= iVar5)))))) {
              puVar4 = (ushort *)0x0;
            }
            else {
              puVar4 = (ushort *)
                       ((iVar5 - iVar2) * *(int *)(puVar4 + 4) +
                       ((int)((uint)puVar4[1] * (uint)*puVar4 +
                             ((int)((uint)puVar4[1] * (uint)*puVar4) >> 0x1f & 7U)) >> 3) *
                       (iVar7 - *(int *)(puVar4 + 0xe)) + param_1[1]);
            }
            if (puVar4 != (ushort *)0x0) goto LAB_1000c59a;
          }
          else {
LAB_1000c59a:
            local_8 = local_8 + (uint)*puVar4 * local_14;
            local_4 = local_4 + local_14;
          }
          local_14 = piVar6[6];
          piVar6 = piVar6 + 4;
        } while (local_14 != 0);
      }
      *local_10 = (short)(local_8 / local_4);
      iVar8 = iVar8 + param_3[3];
      local_10 = local_10 + 1;
    } while (iVar8 < param_3[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000c7f0 @ 1000c7f0 */

void FUN_1000c7f0(undefined4 *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar12 = param_3[1];
  puVar5 = (undefined1 *)FUN_1000bb20(param_1[5]);
  if (iVar12 < param_3[2]) {
    do {
      iVar9 = *(int *)(param_2 + 0x2c0);
      local_8 = 0;
      local_c = 0;
      local_10 = 0;
      local_4 = 0;
      uVar8 = 0;
      if (iVar9 != 0) {
        puVar1 = (ushort *)param_1[2];
        piVar10 = (int *)(param_2 + 0x2b8);
        do {
          iVar7 = piVar10[1] + *param_3;
          iVar11 = *piVar10 + iVar12;
          if ((((param_1[3] == 0) || (iVar2 = *(int *)(puVar1 + 0xe), iVar11 < iVar2)) ||
              (*(int *)(puVar1 + 2) + iVar2 <= iVar11)) ||
             ((iVar3 = *(int *)(puVar1 + 0x10), iVar7 < iVar3 ||
              (*(int *)(puVar1 + 6) + iVar3 <= iVar7)))) {
            pbVar6 = (byte *)0x0;
          }
          else {
            pbVar6 = (byte *)((iVar7 - iVar3) * *(int *)(puVar1 + 4) +
                             ((int)(((int)((uint)puVar1[1] * (uint)*puVar1) >> 0x1f & 7U) +
                                   (uint)puVar1[1] * (uint)*puVar1) >> 3) * (iVar11 - iVar2) +
                             param_1[3]);
          }
          if (pbVar6 == (byte *)0x0) {
            puVar4 = (ushort *)*param_1;
            if (((param_1[1] == 0) || (iVar2 = *(int *)(puVar4 + 0xe), iVar11 < iVar2)) ||
               ((*(int *)(puVar4 + 2) + iVar2 <= iVar11 ||
                ((iVar3 = *(int *)(puVar4 + 0x10), iVar7 < iVar3 ||
                 (*(int *)(puVar4 + 6) + iVar3 <= iVar7)))))) {
              pbVar6 = (byte *)0x0;
            }
            else {
              pbVar6 = (byte *)((iVar7 - iVar3) * *(int *)(puVar4 + 4) +
                               ((int)((uint)puVar4[1] * (uint)*puVar4 +
                                     ((int)((uint)puVar4[1] * (uint)*puVar4) >> 0x1f & 7U)) >> 3) *
                               (iVar11 - iVar2) + param_1[1]);
            }
            if (pbVar6 != (byte *)0x0) goto LAB_1000c958;
          }
          else {
LAB_1000c958:
            local_10 = local_10 + (uint)*pbVar6 * iVar9;
            local_c = local_c + (uint)pbVar6[1] * iVar9;
            local_8 = local_8 + (uint)pbVar6[2] * iVar9;
            local_4 = local_4 + iVar9;
          }
          iVar9 = piVar10[6];
          piVar10 = piVar10 + 4;
          uVar8 = local_4;
        } while (iVar9 != 0);
      }
      *puVar5 = (char)(local_10 / uVar8);
      puVar5[1] = (char)(local_c / uVar8);
      puVar5[2] = (char)(local_8 / uVar8);
      iVar12 = iVar12 + param_3[3];
      puVar5 = puVar5 + 3;
    } while (iVar12 < param_3[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000c9f0 @ 1000c9f0 */

void FUN_1000c9f0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint local_8;
  
  iVar6 = FUN_1000bb20(*(undefined4 *)(param_1 + 0xc));
  if (iVar6 == 0) {
    iVar6 = FUN_1000bb20(*(undefined4 *)(param_1 + 4));
  }
  puVar7 = (undefined1 *)FUN_1000bb20(*(undefined4 *)(param_1 + 0x14));
  uVar3 = *(uint *)(param_2 + 0x2a4);
  if (*(int *)(param_3 + 4) < *(int *)(param_3 + 8)) {
    piVar2 = (int *)(param_2 + 0x2c4);
    param_2 = *(int *)(param_3 + 4);
    do {
      iVar4 = *piVar2;
      uVar9 = 0;
      uVar8 = 0;
      local_8 = 0;
      piVar10 = piVar2;
      while (iVar4 != -0x80000000) {
        iVar5 = piVar10[-1];
        uVar8 = uVar8 + (uint)*(byte *)(iVar4 + iVar6) * iVar5;
        local_8 = local_8 + (uint)*(byte *)(iVar4 + 2 + iVar6) * iVar5;
        piVar1 = piVar10 + 4;
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 + (uint)*(byte *)(iVar4 + 1 + iVar6) * iVar5;
        iVar4 = *piVar1;
      }
      *puVar7 = (char)(uVar8 / uVar3);
      puVar7[1] = (char)(uVar9 / uVar3);
      puVar7[2] = (char)(local_8 / uVar3);
      iVar6 = *(int *)(param_3 + 0xc) * 3 + iVar6;
      param_2 = param_2 + *(int *)(param_3 + 0xc);
      puVar7 = puVar7 + 3;
    } while (param_2 < *(int *)(param_3 + 8));
  }
  return;
}



/**************************************************/

/* Function: FUN_1000cb30 @ 1000cb30 */

void FUN_1000cb30(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int local_18;
  
  iVar3 = FUN_1000bb20(*(undefined4 *)((int)param_1 + 0xc));
  if (iVar3 == 0) {
    iVar3 = FUN_1000bb20(*(undefined4 *)((int)param_1 + 4));
  }
  param_1 = (undefined1 *)FUN_1000bb20(*(undefined4 *)((int)param_1 + 0x14));
  uVar1 = *(uint *)(param_2 + 0xd58);
  piVar5 = (int *)(param_2 + 0xd68);
  uVar6 = 0;
  uVar7 = 0;
  uVar4 = 0;
  iVar2 = *piVar5;
  while (iVar2 != -0x80000000) {
    uVar4 = uVar4 + *(byte *)(iVar3 + iVar2);
    uVar6 = uVar6 + *(byte *)(iVar3 + 2 + iVar2);
    piVar5 = piVar5 + 4;
    uVar7 = uVar7 + *(byte *)(iVar3 + 1 + iVar2);
    iVar2 = *piVar5;
  }
  local_18 = *(int *)(param_3 + 4);
  if (local_18 < *(int *)(param_3 + 8)) {
    do {
      iVar2 = *(int *)(param_2 + 0x180c);
      piVar5 = (int *)(param_2 + 0x180c);
      while (iVar2 != -0x80000000) {
        uVar4 = uVar4 + *(byte *)(iVar2 + iVar3);
        piVar5 = piVar5 + 4;
        uVar6 = uVar6 + *(byte *)(iVar2 + 2 + iVar3);
        uVar7 = uVar7 + *(byte *)(iVar2 + 1 + iVar3);
        iVar2 = *piVar5;
      }
      *param_1 = (char)(uVar4 / uVar1);
      param_1[1] = (char)(uVar7 / uVar1);
      param_1[2] = (char)(uVar6 / uVar1);
      iVar2 = *(int *)(param_2 + 0x22b0);
      piVar5 = (int *)(param_2 + 0x22b0);
      while (iVar2 != -0x80000000) {
        uVar4 = uVar4 - *(byte *)(iVar2 + iVar3);
        piVar5 = piVar5 + 4;
        uVar6 = uVar6 - *(byte *)(iVar2 + 2 + iVar3);
        uVar7 = uVar7 - *(byte *)(iVar2 + 1 + iVar3);
        iVar2 = *piVar5;
      }
      param_1 = param_1 + 3;
      local_18 = local_18 + 1;
      iVar3 = iVar3 + 3;
    } while (local_18 < *(int *)(param_3 + 8));
  }
  return;
}



/**************************************************/

/* Function: FUN_1000ccd0 @ 1000ccd0 */

void FUN_1000ccd0(undefined4 *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar11 = param_3[1];
  puVar4 = (undefined2 *)FUN_1000bb20(param_1[5]);
  if (iVar11 < param_3[2]) {
    do {
      iVar8 = *(int *)(param_2 + 0x2c0);
      local_8 = 0;
      local_c = 0;
      local_10 = 0;
      local_4 = 0;
      uVar7 = 0;
      if (iVar8 != 0) {
        puVar1 = (ushort *)param_1[2];
        piVar9 = (int *)(param_2 + 0x2b8);
        do {
          iVar6 = piVar9[1] + *param_3;
          iVar10 = *piVar9 + iVar11;
          if ((((param_1[3] == 0) || (iVar2 = *(int *)(puVar1 + 0xe), iVar10 < iVar2)) ||
              (*(int *)(puVar1 + 2) + iVar2 <= iVar10)) ||
             ((iVar3 = *(int *)(puVar1 + 0x10), iVar6 < iVar3 ||
              (*(int *)(puVar1 + 6) + iVar3 <= iVar6)))) {
            puVar5 = (ushort *)0x0;
          }
          else {
            puVar5 = (ushort *)
                     ((iVar6 - iVar3) * *(int *)(puVar1 + 4) +
                     ((int)(((int)((uint)puVar1[1] * (uint)*puVar1) >> 0x1f & 7U) +
                           (uint)puVar1[1] * (uint)*puVar1) >> 3) * (iVar10 - iVar2) + param_1[3]);
          }
          if (puVar5 == (ushort *)0x0) {
            puVar5 = (ushort *)*param_1;
            if (((param_1[1] == 0) || (iVar2 = *(int *)(puVar5 + 0xe), iVar10 < iVar2)) ||
               ((*(int *)(puVar5 + 2) + iVar2 <= iVar10 ||
                ((iVar3 = *(int *)(puVar5 + 0x10), iVar6 < iVar3 ||
                 (*(int *)(puVar5 + 6) + iVar3 <= iVar6)))))) {
              puVar5 = (ushort *)0x0;
            }
            else {
              puVar5 = (ushort *)
                       ((iVar6 - iVar3) * *(int *)(puVar5 + 4) +
                       ((int)((uint)puVar5[1] * (uint)*puVar5 +
                             ((int)((uint)puVar5[1] * (uint)*puVar5) >> 0x1f & 7U)) >> 3) *
                       (iVar10 - iVar2) + param_1[1]);
            }
            if (puVar5 != (ushort *)0x0) goto LAB_1000ce38;
          }
          else {
LAB_1000ce38:
            local_10 = local_10 + (uint)*puVar5 * iVar8;
            local_c = local_c + (uint)puVar5[1] * iVar8;
            local_8 = local_8 + (uint)puVar5[2] * iVar8;
            local_4 = local_4 + iVar8;
          }
          iVar8 = piVar9[6];
          piVar9 = piVar9 + 4;
          uVar7 = local_4;
        } while (iVar8 != 0);
      }
      *puVar4 = (short)(local_10 / uVar7);
      puVar4[1] = (short)(local_c / uVar7);
      puVar4[2] = (short)(local_8 / uVar7);
      iVar11 = iVar11 + param_3[3];
      puVar4 = puVar4 + 3;
    } while (iVar11 < param_3[2]);
  }
  return;
}



/**************************************************/

/* Function: FUN_1000ced0 @ 1000ced0 */

void FUN_1000ced0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint local_8;
  
  iVar6 = FUN_1000bb20(*(undefined4 *)(param_1 + 0xc));
  if (iVar6 == 0) {
    iVar6 = FUN_1000bb20(*(undefined4 *)(param_1 + 4));
  }
  puVar7 = (undefined2 *)FUN_1000bb20(*(undefined4 *)(param_1 + 0x14));
  uVar3 = *(uint *)(param_2 + 0x2a4);
  if (*(int *)(param_3 + 4) < *(int *)(param_3 + 8)) {
    piVar2 = (int *)(param_2 + 0x2c4);
    param_2 = *(int *)(param_3 + 4);
    do {
      iVar4 = *piVar2;
      uVar9 = 0;
      uVar8 = 0;
      local_8 = 0;
      piVar10 = piVar2;
      while (iVar4 != -0x80000000) {
        iVar5 = piVar10[-1];
        uVar8 = uVar8 + (uint)*(ushort *)(iVar4 + iVar6) * iVar5;
        local_8 = local_8 + (uint)*(ushort *)(iVar4 + 4 + iVar6) * iVar5;
        piVar1 = piVar10 + 4;
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 + (uint)*(ushort *)(iVar4 + 2 + iVar6) * iVar5;
        iVar4 = *piVar1;
      }
      *puVar7 = (short)(uVar8 / uVar3);
      puVar7[1] = (short)(uVar9 / uVar3);
      puVar7[2] = (short)(local_8 / uVar3);
      iVar6 = iVar6 + *(int *)(param_3 + 0xc) * 6;
      param_2 = param_2 + *(int *)(param_3 + 0xc);
      puVar7 = puVar7 + 3;
    } while (param_2 < *(int *)(param_3 + 8));
  }
  return;
}



/**************************************************/

/* Function: FUN_1000d010 @ 1000d010 */

void FUN_1000d010(undefined2 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int local_18;
  
  iVar3 = FUN_1000bb20(*(undefined4 *)((int)param_1 + 0xc));
  if (iVar3 == 0) {
    iVar3 = FUN_1000bb20(*(undefined4 *)((int)param_1 + 4));
  }
  param_1 = (undefined2 *)FUN_1000bb20(*(undefined4 *)((int)param_1 + 0x14));
  uVar1 = *(uint *)(param_2 + 0xd58);
  piVar5 = (int *)(param_2 + 0xd68);
  uVar6 = 0;
  uVar7 = 0;
  uVar4 = 0;
  iVar2 = *piVar5;
  while (iVar2 != -0x80000000) {
    uVar4 = uVar4 + *(ushort *)(iVar3 + iVar2);
    uVar6 = uVar6 + *(ushort *)(iVar3 + 4 + iVar2);
    piVar5 = piVar5 + 4;
    uVar7 = uVar7 + *(ushort *)(iVar3 + 2 + iVar2);
    iVar2 = *piVar5;
  }
  local_18 = *(int *)(param_3 + 4);
  if (local_18 < *(int *)(param_3 + 8)) {
    do {
      iVar2 = *(int *)(param_2 + 0x180c);
      piVar5 = (int *)(param_2 + 0x180c);
      while (iVar2 != -0x80000000) {
        uVar4 = uVar4 + *(ushort *)(iVar2 + iVar3);
        piVar5 = piVar5 + 4;
        uVar6 = uVar6 + *(ushort *)(iVar2 + 4 + iVar3);
        uVar7 = uVar7 + *(ushort *)(iVar2 + 2 + iVar3);
        iVar2 = *piVar5;
      }
      *param_1 = (short)(uVar4 / uVar1);
      param_1[1] = (short)(uVar7 / uVar1);
      param_1[2] = (short)(uVar6 / uVar1);
      iVar2 = *(int *)(param_2 + 0x22b0);
      piVar5 = (int *)(param_2 + 0x22b0);
      while (iVar2 != -0x80000000) {
        uVar4 = uVar4 - *(ushort *)(iVar2 + iVar3);
        piVar5 = piVar5 + 4;
        uVar6 = uVar6 - *(ushort *)(iVar2 + 4 + iVar3);
        uVar7 = uVar7 - *(ushort *)(iVar2 + 2 + iVar3);
        iVar2 = *piVar5;
      }
      param_1 = param_1 + 3;
      local_18 = local_18 + 1;
      iVar3 = iVar3 + 6;
    } while (local_18 < *(int *)(param_3 + 8));
  }
  return;
}



/**************************************************/

/* Function: MoireCalcDestImage @ 1000d1b0 */

int MoireCalcDestImage(ushort *param_1,ushort *param_2,ushort param_3,ushort param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* 0xd1b0  13  MoireCalcDestImage */
  local_30 = param_5;
  local_2c = param_6;
  local_38 = 0;
  local_34 = 0;
  iVar2 = FUN_1000df50(local_3c);
  if (iVar2 == 0) {
    iVar2 = FUN_1000e000(&local_38,&local_30);
    if (iVar2 == 0) {
      local_30 = 0;
      local_2c = 0;
      iVar2 = FUN_1000e230(local_3c,param_7);
      if (iVar2 == 0) {
        iVar2 = FUN_1000e300(&local_38);
        if (iVar2 == 0) {
          iVar2 = FUN_1000e380(&local_30);
          if ((iVar2 == 0) && (param_1[0xc] != 0)) {
            uVar4 = (uint)*param_2;
            if (((uVar4 == 1) || (uVar4 == 3)) &&
               ((((uVar3 = (uint)param_2[1], uVar3 == 8 || (uVar3 == 0x10)) &&
                 (*(int *)(param_2 + 2) != 0)) &&
                ((uVar1 = *(uint *)(param_2 + 4),
                 (uint)(((int)(uVar3 * uVar4 + ((int)(uVar3 * uVar4) >> 0x1f & 7U)) >> 3) *
                       *(int *)(param_2 + 2)) <= uVar1 && (*(int *)(param_2 + 6) != 0)))))) {
              iVar2 = FUN_1000b800();
              if (iVar2 != -1) {
                iVar2 = FUN_1000b800();
                if (((iVar2 != -1) && (param_2[0xc] != 0)) &&
                   ((uVar1 % (uint)param_2[0xc] == 0 &&
                    (((ushort)(param_3 - 1) < 8 && ((ushort)(param_4 - 1) < 8)))))) {
                  *param_1 = *param_2;
                  param_1[1] = param_2[1];
                  uVar4 = *(uint *)(param_2 + 2) / (uint)param_3;
                  *(uint *)(param_1 + 2) = uVar4;
                  uVar3 = (uint)param_1[0xc];
                  *(uint *)(param_1 + 4) =
                       ((((int)((uint)*param_1 * (uint)param_1[1] +
                               ((int)((uint)*param_1 * (uint)param_1[1]) >> 0x1f & 7U)) >> 3) *
                         uVar4 + -1 + uVar3) / uVar3) * uVar3;
                  *(uint *)(param_1 + 6) = *(uint *)(param_2 + 6) / (uint)param_4;
                  *(uint *)(param_1 + 8) = *(uint *)(param_2 + 8) / (uint)param_3;
                  *(uint *)(param_1 + 10) = *(uint *)(param_2 + 10) / (uint)param_4;
                  return *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/**************************************************/

/* Function: MoireExecute @ 1000d3c0 */

int MoireExecute(undefined2 *param_1,int param_2,ushort *param_3,int param_4,ushort param_5,
                ushort param_6,short param_7,short param_8,undefined4 param_9,undefined4 param_10,
                undefined4 param_11)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  void *_Dst;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  size_t _Size;
  uint local_120;
  uint local_11c [5];
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  undefined4 local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  ushort local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4 [8];
  int local_b4;
  uint local_b0 [2];
  size_t local_a8;
  uint local_a4;
  uint local_94;
  int local_90;
  undefined4 *local_8c;
  void *local_88;
  undefined4 *local_84;
  int local_80;
  undefined4 *local_7c;
  int local_78;
  uint local_74 [8];
  uint local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort local_38;
  undefined4 local_34;
  int local_30;
  uint local_c;
  
                    /* 0xd3c0  15  MoireExecute */
  local_11c[2] = param_9;
  local_11c[3] = param_10;
  local_11c[0] = 0;
  local_11c[1] = 0;
  iVar2 = FUN_1000df50(&local_120);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_1000e000(local_11c,local_11c + 2);
  if (iVar2 != 0) {
    return iVar2;
  }
  local_11c[2] = 0;
  local_11c[3] = 0;
  iVar2 = FUN_1000e230(&local_120,param_11);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_1000e300(local_11c);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_1000e380(local_11c + 2);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((param_1[0xc] == 0) || (param_2 == 0)) {
switchD_1000d64d_caseD_9:
    return 0xf0;
  }
  local_120 = (uint)*param_3;
  if ((local_120 != 1) && (local_120 != 3)) {
    return 0x10;
  }
  local_11c[0] = (uint)param_3[1];
  if ((local_11c[0] != 8) && (local_11c[0] != 0x10)) {
    return 0x11;
  }
  uVar3 = *(uint *)(param_3 + 2);
  if (uVar3 == 0) {
    return 0x12;
  }
  uVar6 = *(uint *)(param_3 + 4);
  if (uVar6 < ((int)(local_11c[0] * local_120 + ((int)(local_11c[0] * local_120) >> 0x1f & 7U)) >> 3
              ) * uVar3) {
    return 0x13;
  }
  if (*(int *)(param_3 + 6) == 0) {
    return 0x14;
  }
  iVar2 = FUN_1000b800();
  if (iVar2 == -1) {
    return 0x15;
  }
  iVar2 = FUN_1000b800();
  if (iVar2 == -1) {
    return 0x16;
  }
  if (param_3[0xc] == 0) {
    return 0xf0;
  }
  if (uVar6 % (uint)param_3[0xc] != 0) {
    return 0xf0;
  }
  if (param_4 == 0) {
    return 0xf0;
  }
  if ((7 < (ushort)(param_5 - 1)) || (7 < (ushort)(param_6 - 1))) {
    return 0x20;
  }
  if ((param_7 != 0) && (param_7 != 1)) {
    return 0x30;
  }
  if ((param_8 != 0) && (param_8 != 1)) {
    return 0x31;
  }
  uVar6 = (uint)param_5;
  if (uVar3 < uVar6) {
    return 0x21;
  }
  if (param_7 == 0) {
    local_50._2_2_ = (ushort)local_11c[0];
  }
  else {
    iVar2 = FUN_1000b760(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 10),uVar6,param_6);
    if (iVar2 == -1) {
      return 0x17;
    }
    iVar2 = FUN_1000b870(&DAT_102e9940);
    if (iVar2 != 0) {
      return 0xf0;
    }
    iVar2 = FUN_1000b8e0();
    if (iVar2 != 0) {
      return 0xf0;
    }
    local_120 = (uint)*param_3;
    local_50._2_2_ = param_3[1];
    switch(local_50._2_2_ * local_120) {
    case 8:
      PTR_FUN_1003004c = FUN_1000c0b0;
      PTR_FUN_10030050 = FUN_1000c260;
      if ((DAT_102e9be4 == DAT_102ea698) && (DAT_102ec684 + DAT_102ebbe0 < DAT_102ea698)) {
        PTR_FUN_10030050 = &LAB_1000c330;
      }
      break;
    default:
      goto switchD_1000d64d_caseD_9;
    case 0x10:
      PTR_FUN_1003004c = FUN_1000c450;
      PTR_FUN_10030050 = &LAB_1000c600;
      if ((DAT_102e9be4 == DAT_102ea698) && (DAT_102ec684 + DAT_102ebbe0 < DAT_102ea698)) {
        PTR_FUN_10030050 = &LAB_1000c6d0;
      }
      break;
    case 0x18:
      PTR_FUN_1003004c = FUN_1000c7f0;
      PTR_FUN_10030050 = FUN_1000c9f0;
      if ((DAT_102e9be4 == DAT_102ea698) && (DAT_102ec684 + DAT_102ebbe0 < DAT_102ea698)) {
        PTR_FUN_10030050 = FUN_1000cb30;
      }
      break;
    case 0x30:
      PTR_FUN_1003004c = FUN_1000ccd0;
      PTR_FUN_10030050 = FUN_1000ced0;
      if ((DAT_102e9be4 == DAT_102ea698) && (DAT_102ec684 + DAT_102ebbe0 < DAT_102ea698)) {
        PTR_FUN_10030050 = FUN_1000d010;
      }
    }
  }
  local_50._0_2_ = (undefined2)local_120;
  local_48 = *(undefined4 *)(param_3 + 4);
  local_44 = *(int *)(param_3 + 6);
  local_40 = *(undefined4 *)(param_3 + 8);
  local_38 = param_3[0xc];
  local_34 = 0;
  local_4c = (*(uint *)(param_3 + 2) / uVar6) * uVar6;
  local_3c = *(undefined4 *)(param_3 + 10);
  if (param_7 == 0) {
    local_30 = DAT_100e7348 + DAT_100e7334;
  }
  else {
    local_30 = 0;
  }
  if (param_8 != 0) {
    local_44 = local_44 - (uint)(local_30 + local_44) % (uint)param_6;
  }
  iVar2 = 9;
  if (param_7 == 0) {
    puVar9 = &DAT_100e7328;
    puVar11 = local_d4;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_d4[3] = DAT_100e7334 + local_44;
  }
  else {
    puVar8 = &local_50;
    puVar10 = &DAT_100e7328;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    DAT_100e7334 = 0;
    puVar9 = &local_50;
    puVar11 = local_d4;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  uVar3 = DAT_102e9bec;
  if (local_d4[3] < DAT_102e9bec) {
    uVar3 = local_d4[3];
  }
  uVar3 = (local_b4 - uVar3) + local_d4[3];
  puVar9 = local_d4;
  puVar11 = local_74;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  local_c = uVar3;
  iVar2 = DAT_102e9be8;
  if (uVar3 < local_54 + DAT_102e9be8) {
    iVar2 = uVar3 - local_54;
  }
  puVar9 = local_d4;
  puVar11 = local_b0;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  local_90 = local_54 + iVar2;
  puVar9 = local_d4;
  puVar11 = local_74;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (param_7 == 0) {
    local_54 = DAT_102e9924 + DAT_102e9938;
  }
  else {
    local_54 = 0;
  }
  if (param_8 == 0) {
    if (uVar3 < local_54) {
      local_74[3] = 0;
    }
    else {
      local_74[3] = uVar3 - local_54;
    }
  }
  else {
    local_74[3] = (local_b4 - local_54) + local_d4[3];
  }
  local_120 = (uint)param_6;
  if (local_74[3] % local_120 != 0) {
    local_74[3] = (local_74[3] / local_120 + 1) * local_120;
  }
  uVar3 = local_74[1] / uVar6;
  puVar9 = local_74;
  puVar11 = &local_f8;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  local_e0 = param_1[0xc];
  uVar5 = (uint)local_e0;
  iVar2 = (local_f8 >> 0x10) * (local_f8 & 0xffff);
  local_f0 = ((((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * uVar3 + -1 + uVar5) / uVar5) * uVar5;
  local_ec = local_ec / local_120;
  local_e8 = local_e8 / uVar6;
  local_e4 = local_e4 / local_120;
  local_dc = local_dc / uVar6;
  local_d8 = local_d8 / local_120;
  local_f4 = uVar3;
  if ((param_7 != 0) && (DAT_102cb678 != (void *)0x0)) {
    _free(DAT_102cb678);
    DAT_102cb678 = (void *)0x0;
  }
  local_88 = DAT_102cb678;
  local_80 = param_4;
  local_84 = &local_50;
  local_7c = &local_f8;
  local_fc = local_120;
  local_78 = param_2;
  local_8c = &DAT_100e7328;
  uVar3 = ((int)((uVar6 - 1) + DAT_102e9bf0) / (int)uVar6) * uVar6;
  if (local_b0[1] < uVar3) {
    uVar3 = local_b0[1];
  }
  uVar5 = uVar3;
  if (DAT_102e9bf4 < local_b0[1] - uVar3) {
    uVar5 = ((((uVar6 - uVar3) - DAT_102e9bf4) + -1 + local_b0[1]) / uVar6) * uVar6 + uVar3;
  }
  local_11c[0] = local_74[3] + local_54;
  uVar7 = local_54;
  local_100 = uVar6;
  if ((int)local_54 < (int)local_11c[0]) {
    do {
      local_11c[4] = uVar7;
      if (((int)uVar7 < local_90) || ((int)local_c <= (int)uVar7)) {
        local_108 = local_94;
        local_104 = local_94 + local_b0[1];
        (*(code *)PTR_FUN_1003004c)(&local_8c,&DAT_102e9940,local_11c + 4);
      }
      else {
        local_108 = 0;
        local_104 = uVar3;
        (*(code *)PTR_FUN_1003004c)(&local_8c,&DAT_102e9940,local_11c + 4);
        if (uVar3 < uVar5) {
          local_108 = uVar3;
          local_104 = uVar5;
          FUN_1000bb80(&local_8c,&DAT_102e9940,local_11c + 4);
          (*(code *)PTR_FUN_10030050)(&local_8c,&DAT_102e9940,local_11c + 4);
        }
        local_104 = local_b0[1];
        local_108 = uVar5;
        if (uVar5 < local_b0[1]) {
          (*(code *)PTR_FUN_1003004c)(&local_8c,&DAT_102e9940,local_11c + 4);
        }
      }
      uVar7 = uVar7 + local_120;
    } while ((int)uVar7 < (int)local_11c[0]);
  }
  puVar9 = local_d4;
  puVar11 = local_b0;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (param_8 == 0) {
    local_a4 = DAT_102e9be8 + DAT_102e9bec;
    if (local_d4[3] < local_a4) {
      local_a4 = local_d4[3];
    }
    iVar2 = (local_b4 - local_a4) + local_d4[3];
  }
  else {
    iVar2 = 0;
    local_a4 = 0;
  }
  uVar3 = local_a4;
  local_90 = iVar2;
  if (param_7 == 0) {
    if (param_8 != 0) goto LAB_1000dcdc;
  }
  else {
    if (param_8 != 0) {
LAB_1000dcdc:
      if (DAT_102cb678 != (void *)0x0) {
        _free(DAT_102cb678);
        DAT_102cb678 = (void *)0x0;
      }
      goto LAB_1000dcf8;
    }
    DAT_102cb678 = _malloc((DAT_102e9be8 + 4 + DAT_102e9bec) * local_a8);
    if (DAT_102cb678 == (void *)0x0) {
      return 0xe0;
    }
  }
  pvVar1 = DAT_102cb678;
  local_11c[0] = iVar2 + uVar3;
  if (iVar2 < (int)local_11c[0]) {
    do {
      _Src = (void *)FUN_1000bb20(param_4);
      if (_Src == (void *)0x0) {
        _Src = (void *)FUN_1000bb20(pvVar1);
      }
      _Size = local_a8;
      _Dst = (void *)FUN_1000bb20(pvVar1);
      _memcpy(_Dst,_Src,_Size);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_11c[0]);
  }
LAB_1000dcf8:
  param_1[1] = local_f8._2_2_;
  *(int *)(param_1 + 4) = local_f0;
  *(uint *)(param_1 + 8) = local_e8;
  *param_1 = (undefined2)local_f8;
  *(uint *)(param_1 + 2) = local_f4;
  param_1[0xc] = local_e0;
  *(uint *)(param_1 + 6) = local_ec;
  puVar9 = local_74;
  puVar11 = &DAT_102e9918;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  *(uint *)(param_1 + 10) = local_e4;
  puVar9 = local_b0;
  puVar11 = &DAT_100e7328;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  return 0;
}



/**************************************************/

/* Function: MoireCancel @ 1000ddc0 */

uint MoireCancel(void)

{
  uint extraout_EAX;
  uint uVar1;
  
                    /* 0xddc0  14  MoireCancel */
  DAT_100e7348 = 0;
  DAT_100e7334 = 0;
  uVar1 = 0;
  if (DAT_102cb678 != (void *)0x0) {
    _free(DAT_102cb678);
    DAT_102cb678 = (void *)0x0;
    uVar1 = extraout_EAX;
  }
  return uVar1 & 0xffffff00;
}



/**************************************************/

/* Function: FUN_1000de00 @ 1000de00 */

undefined4 FUN_1000de00(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char *_Str1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  
  puVar2 = param_2;
  _Str1 = (char *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = _strncmp(_Str1,"SGIPPDEF",8);
  if ((iVar3 != 0) || (*(int *)(_Str1 + 8) != 0x10000)) {
    return 0xd1;
  }
  piVar1 = param_2 + 1;
  if (*(int *)(_Str1 + 0xc) != *piVar1) {
    return 0xd2;
  }
  param_2 = (undefined4 *)0x0;
  iVar3 = *(int *)(_Str1 + 0x10);
  if (iVar3 != 0 && -1 < _Str1[0x13]) {
    pcVar4 = _Str1 + 0x2e;
    do {
      if ((_Str1 + CONCAT31(CONCAT21(*(undefined2 *)pcVar4,pcVar4[-1]),pcVar4[-2]) < (char *)*puVar2
          ) || ((char *)*puVar2 + *piVar1 <
                _Str1 + CONCAT31(CONCAT21(*(undefined2 *)pcVar4,pcVar4[-1]),pcVar4[-2]) +
                *(int *)(pcVar4 + -6))) {
        return 0xd0;
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
      pcVar4 = pcVar4 + 0x10;
    } while ((int)param_2 < iVar3);
  }
  *param_1 = _Str1;
  param_1[1] = _Str1 + 0x10;
  param_1[2] = _Str1 + 0x20;
  return 0;
}



/**************************************************/

/* Function: FUN_1000df50 @ 1000df50 */

int FUN_1000df50(int *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 local_c [4];
  int *local_8;
  int local_4;
  
  *param_1 = 0;
  iVar1 = FUN_1000de00(local_c);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (0 < *local_8) {
    puVar2 = (undefined2 *)(local_4 + 2);
    iVar1 = 0;
    while (CONCAT31(CONCAT21(*puVar2,*(undefined1 *)((int)puVar2 + -1)),*(undefined1 *)(puVar2 + -1)
                   ) != 0x10200) {
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 8;
      if (*local_8 <= iVar1) {
        return 0xd3;
      }
    }
    local_4 = iVar1 * 0x10 + local_4;
    if (local_4 != 0) {
      *param_1 = local_4;
      return 0;
    }
  }
  return 0xd3;
}



/**************************************************/

/* Function: FUN_1000e000 @ 1000e000 */

undefined4 FUN_1000e000(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char *_Str1;
  int iVar7;
  int *unaff_ESI;
  
  uVar1 = *(undefined1 *)((int)unaff_ESI + 0xd);
  iVar7 = unaff_ESI[3];
  uVar2 = *(undefined1 *)((int)unaff_ESI + 0xf);
  *param_1 = 0;
  uVar3 = *(undefined1 *)((int)unaff_ESI + 0xe);
  param_1[1] = 0;
  _Str1 = (char *)(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar1),(char)iVar7) + *param_2);
  iVar7 = _strncmp(_Str1,"IPPB    ",8);
  if (iVar7 != 0) {
    return 0xd5;
  }
  if (*(int *)(_Str1 + 8) != *unaff_ESI) {
    return 0xd3;
  }
  if (*(int *)(_Str1 + 0xc) != unaff_ESI[2]) {
    return 0xd4;
  }
  cVar4 = _Str1[0xd];
  cVar5 = _Str1[0xc];
  cVar6 = _Str1[0xf];
  *param_1 = _Str1;
  param_1[1] = CONCAT31(CONCAT21(CONCAT11(cVar6,_Str1[0xe]),cVar4),cVar5);
  return 0;
}



/**************************************************/

/* Function: FUN_1000e100 @ 1000e100 */

undefined4 FUN_1000e100(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char *_Str1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  
  puVar2 = param_2;
  _Str1 = (char *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = _strncmp(_Str1,"IPPB    ",8);
  if (iVar3 != 0) {
    return 0xd5;
  }
  piVar1 = param_2 + 1;
  if (*(int *)(_Str1 + 0xc) == *piVar1) {
    param_2 = (undefined4 *)0x0;
    iVar3 = *(int *)(_Str1 + 0x10);
    if (iVar3 != 0 && -1 < _Str1[0x13]) {
      pcVar4 = _Str1 + 0x3e;
      do {
        if ((_Str1 + CONCAT31(CONCAT21(*(undefined2 *)pcVar4,pcVar4[-1]),pcVar4[-2]) <
             (char *)*puVar2) ||
           ((char *)*puVar2 + *piVar1 <
            _Str1 + CONCAT31(CONCAT21(*(undefined2 *)pcVar4,pcVar4[-1]),pcVar4[-2]) +
            *(int *)(pcVar4 + -6))) {
          return 0xd0;
        }
        param_2 = (undefined4 *)((int)param_2 + 1);
        pcVar4 = pcVar4 + 0x20;
      } while ((int)param_2 < iVar3);
    }
    *param_1 = _Str1;
    param_1[1] = _Str1 + 0x10;
    param_1[2] = _Str1 + 0x20;
    return 0;
  }
  return 0xd4;
}



/**************************************************/

/* Function: FUN_1000e230 @ 1000e230 */

int __thiscall FUN_1000e230(undefined4 param_1,int *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined1 local_c [4];
  int *local_8;
  int local_4;
  
  *param_2 = 0;
  iVar1 = FUN_1000e100(local_c,param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = 0;
  if (0 < *local_8) {
    psVar3 = (short *)(local_4 + 0x16);
    while ((iVar2 = _strncmp((char *)(psVar3 + -0xb),param_3,0x10), iVar2 != 0 || (*psVar3 != 0))) {
      iVar1 = iVar1 + 1;
      psVar3 = psVar3 + 0x10;
      if (*local_8 <= iVar1) {
        return 0xd6;
      }
    }
    local_4 = iVar1 * 0x20 + local_4;
    if (local_4 != 0) {
      *param_2 = local_4;
      return 0;
    }
  }
  return 0xd6;
}



/**************************************************/

/* Function: FUN_1000e300 @ 1000e300 */

undefined4 FUN_1000e300(uint *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined3 uVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  uint *unaff_EDI;
  
  uVar2 = *param_1;
  uVar1 = *(undefined1 *)(in_EAX + 0x19);
  uVar3 = *(undefined3 *)(in_EAX + 0x1d);
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  uVar5 = CONCAT31(uVar3,*(undefined1 *)(in_EAX + 0x1c)) + uVar2;
  uVar4 = CONCAT31(CONCAT21(*(undefined2 *)(in_EAX + 0x1a),uVar1),*(undefined1 *)(in_EAX + 0x18));
  if ((uVar2 <= uVar5) && (uVar4 + uVar5 <= param_1[1] + uVar2)) {
    *unaff_EDI = uVar5;
    unaff_EDI[1] = uVar4;
    return 0;
  }
  return 0xd0;
}



/**************************************************/

/* Function: FUN_1000e380 @ 1000e380 */

undefined4 FUN_1000e380(undefined4 *param_1)

{
  char *_Str1;
  undefined4 *in_EAX;
  int iVar1;
  int *_Str1_00;
  char **ppcVar2;
  char *local_20;
  int *local_1c;
  char *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  _Str1 = (char *)*param_1;
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  local_20 = _Str1;
  iVar1 = _strncmp(_Str1,"MOPPSB  ",8);
  if ((iVar1 == 0) && (*(int *)(_Str1 + 8) == 0x50000)) {
    if (*(int *)(_Str1 + 0xc) != param_1[1]) {
      return 0xd7;
    }
    local_1c = (int *)(_Str1 + 0x20);
    local_18 = _Str1 + 0x30;
    local_14 = (int *)(local_18 + *local_1c * 0x10);
    local_10 = local_14 + 4;
    local_c = local_10 + *local_14 * 4;
    local_8 = local_c + 4;
    _Str1_00 = local_8 + *local_c * 0x34;
    local_4 = _Str1_00;
    iVar1 = _strncmp((char *)_Str1_00,"MOPPSB  ",8);
    if (iVar1 == 0) {
      iVar1 = _strncmp((char *)(_Str1_00 + 3),"/end",4);
      if (iVar1 == 0) {
        ppcVar2 = &local_20;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *in_EAX = *ppcVar2;
          ppcVar2 = ppcVar2 + 1;
          in_EAX = in_EAX + 1;
        }
        return 0;
      }
    }
  }
  return 0xd8;
}



/**************************************************/

/* Function: FUN_1000e4f0 @ 1000e4f0 */

void FUN_1000e4f0(double param_1)

{
  double dVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar4 = -0x21;
  puVar3 = &DAT_10129431;
  do {
    iVar2 = -0x21;
    do {
      dVar1 = (double)(iVar2 * iVar2 + iVar4 * iVar4);
      puVar3[iVar2] = dVar1 < param_1 * param_1 != (dVar1 == param_1 * param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x22);
    puVar3 = puVar3 + 0x43;
    iVar4 = iVar4 + 1;
  } while ((int)puVar3 < 0x1012a578);
  return;
}



/**************************************************/

/* Function: FUN_1000e550 @ 1000e550 */

void FUN_1000e550(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = -0x21;
  iVar1 = FUN_100226b0();
  puVar4 = &DAT_10129431;
  do {
    iVar2 = -0x21;
    do {
      if ((((-iVar5 == iVar1 || -iVar1 < iVar5) && (iVar5 <= iVar1)) &&
          (-iVar2 == iVar1 || -iVar1 < iVar2)) && (iVar2 <= iVar1)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      puVar4[iVar2] = uVar3;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x22);
    puVar4 = puVar4 + 0x43;
    iVar5 = iVar5 + 1;
  } while ((int)puVar4 < 0x1012a578);
  return;
}



/**************************************************/

/* Function: FUN_1000e5b0 @ 1000e5b0 */

void FUN_1000e5b0(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x10128bb0;
  do {
    iVar3 = -0x20;
    do {
      bVar2 = *(byte *)(iVar4 + 0x8c4 + iVar3);
      if ((bVar2 & 1) != 0) {
        if (*(char *)(iVar4 + 0x8c5 + iVar3) == '\0') {
          *(byte *)(iVar4 + 0x8c4 + iVar3) = bVar2 | 2;
        }
        if (*(char *)(iVar4 + 0x8c3 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c4 + iVar3);
          *pbVar1 = *pbVar1 | 4;
        }
        if (*(char *)(iVar4 + 0x881 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c4 + iVar3);
          *pbVar1 = *pbVar1 | 8;
        }
        if (*(char *)(iVar4 + 0x907 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c4 + iVar3);
          *pbVar1 = *pbVar1 | 0x10;
        }
      }
      bVar2 = *(byte *)(iVar4 + 0x8c5 + iVar3);
      if ((bVar2 & 1) != 0) {
        if (*(char *)(iVar4 + 0x8c6 + iVar3) == '\0') {
          *(byte *)(iVar4 + 0x8c5 + iVar3) = bVar2 | 2;
        }
        if (*(char *)(iVar4 + 0x8c4 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c5 + iVar3);
          *pbVar1 = *pbVar1 | 4;
        }
        if (*(char *)(iVar4 + 0x882 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c5 + iVar3);
          *pbVar1 = *pbVar1 | 8;
        }
        if (*(char *)(iVar4 + 0x908 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c5 + iVar3);
          *pbVar1 = *pbVar1 | 0x10;
        }
      }
      bVar2 = *(byte *)(iVar4 + 0x8c6 + iVar3);
      if ((bVar2 & 1) != 0) {
        if (*(char *)(iVar4 + 0x8c7 + iVar3) == '\0') {
          *(byte *)(iVar4 + 0x8c6 + iVar3) = bVar2 | 2;
        }
        if (*(char *)(iVar4 + 0x8c5 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c6 + iVar3);
          *pbVar1 = *pbVar1 | 4;
        }
        if (*(char *)(iVar4 + 0x883 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c6 + iVar3);
          *pbVar1 = *pbVar1 | 8;
        }
        if (*(char *)(iVar4 + 0x909 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c6 + iVar3);
          *pbVar1 = *pbVar1 | 0x10;
        }
      }
      bVar2 = *(byte *)(iVar4 + 0x8c7 + iVar3);
      if ((bVar2 & 1) != 0) {
        if (*(char *)(iVar4 + 0x8c8 + iVar3) == '\0') {
          *(byte *)(iVar4 + 0x8c7 + iVar3) = bVar2 | 2;
        }
        if (*(char *)(iVar4 + 0x8c6 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c7 + iVar3);
          *pbVar1 = *pbVar1 | 4;
        }
        if (*(char *)(iVar4 + 0x884 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c7 + iVar3);
          *pbVar1 = *pbVar1 | 8;
        }
        if (*(char *)(iVar4 + 0x90a + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c7 + iVar3);
          *pbVar1 = *pbVar1 | 0x10;
        }
      }
      bVar2 = *(byte *)(iVar4 + 0x8c8 + iVar3);
      if ((bVar2 & 1) != 0) {
        if (*(char *)(iVar4 + 0x8c9 + iVar3) == '\0') {
          *(byte *)(iVar4 + 0x8c8 + iVar3) = bVar2 | 2;
        }
        if (*(char *)(iVar4 + 0x8c7 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c8 + iVar3);
          *pbVar1 = *pbVar1 | 4;
        }
        if (*(char *)(iVar4 + 0x885 + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c8 + iVar3);
          *pbVar1 = *pbVar1 | 8;
        }
        if (*(char *)(iVar4 + 0x90b + iVar3) == '\0') {
          pbVar1 = (byte *)(iVar4 + 0x8c8 + iVar3);
          *pbVar1 = *pbVar1 | 0x10;
        }
      }
      iVar3 = iVar3 + 5;
    } while (iVar3 < 0x21);
    iVar4 = iVar4 + 0x43;
  } while (iVar4 < 0x10129c71);
  return;
}



/**************************************************/

/* Function: FUN_1000e7a0 @ 1000e7a0 */

void FUN_1000e7a0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  byte *local_4;
  
  DAT_101331e4 = 0;
  DAT_101331e6 = 0;
  DAT_101331e8 = 0;
  DAT_101331ea = 0;
  DAT_101331ec = 0;
  iVar4 = -0x20;
  local_4 = &DAT_10129455;
  do {
    pbVar3 = local_4;
    iVar5 = -0x1e;
    do {
      bVar1 = pbVar3[-1];
      iVar2 = (uint)(*(ushort *)(unaff_EDI + 0x1c) >> 3) * (iVar5 + -2) +
              *(int *)(unaff_EDI + 4) * iVar4;
      if (bVar1 != 0) {
        (&DAT_1012a59c)[DAT_101331e4] = iVar5 + -2;
        (&DAT_1012ebc0)[DAT_101331e4] = iVar4;
        (&DAT_101331f0)[DAT_101331e4] = iVar2;
        DAT_101331e4 = DAT_101331e4 + 1;
        if ((bVar1 & 2) == 0) {
          (&DAT_10137818)[DAT_101331e6] = iVar2;
          DAT_101331e6 = DAT_101331e6 + 1;
        }
        else {
          (&DAT_1013be40)[DAT_101331e8] = iVar2;
          DAT_101331e8 = DAT_101331e8 + 1;
        }
        if ((bVar1 & 4) != 0) {
          (&DAT_10140468)[DAT_101331ea] = iVar2;
          DAT_101331ea = DAT_101331ea + 1;
        }
        if ((bVar1 & 0x1e) != 0) {
          (&DAT_10144a90)[DAT_101331ec] = iVar2;
          DAT_101331ec = DAT_101331ec + 1;
        }
      }
      bVar1 = *pbVar3;
      iVar2 = (uint)(*(ushort *)(unaff_EDI + 0x1c) >> 3) * (iVar5 + -1) +
              *(int *)(unaff_EDI + 4) * iVar4;
      if (bVar1 != 0) {
        (&DAT_1012a59c)[DAT_101331e4] = iVar5 + -1;
        (&DAT_1012ebc0)[DAT_101331e4] = iVar4;
        (&DAT_101331f0)[DAT_101331e4] = iVar2;
        DAT_101331e4 = DAT_101331e4 + 1;
        if ((bVar1 & 2) == 0) {
          (&DAT_10137818)[DAT_101331e6] = iVar2;
          DAT_101331e6 = DAT_101331e6 + 1;
        }
        else {
          (&DAT_1013be40)[DAT_101331e8] = iVar2;
          DAT_101331e8 = DAT_101331e8 + 1;
        }
        if ((bVar1 & 4) != 0) {
          (&DAT_10140468)[DAT_101331ea] = iVar2;
          DAT_101331ea = DAT_101331ea + 1;
        }
        if ((bVar1 & 0x1e) != 0) {
          (&DAT_10144a90)[DAT_101331ec] = iVar2;
          DAT_101331ec = DAT_101331ec + 1;
        }
      }
      bVar1 = pbVar3[1];
      iVar2 = (uint)(*(ushort *)(unaff_EDI + 0x1c) >> 3) * iVar5 + *(int *)(unaff_EDI + 4) * iVar4;
      if (bVar1 != 0) {
        (&DAT_1012a59c)[DAT_101331e4] = iVar5;
        (&DAT_1012ebc0)[DAT_101331e4] = iVar4;
        (&DAT_101331f0)[DAT_101331e4] = iVar2;
        DAT_101331e4 = DAT_101331e4 + 1;
        if ((bVar1 & 2) == 0) {
          (&DAT_10137818)[DAT_101331e6] = iVar2;
          DAT_101331e6 = DAT_101331e6 + 1;
        }
        else {
          (&DAT_1013be40)[DAT_101331e8] = iVar2;
          DAT_101331e8 = DAT_101331e8 + 1;
        }
        if ((bVar1 & 4) != 0) {
          (&DAT_10140468)[DAT_101331ea] = iVar2;
          DAT_101331ea = DAT_101331ea + 1;
        }
        if ((bVar1 & 0x1e) != 0) {
          (&DAT_10144a90)[DAT_101331ec] = iVar2;
          DAT_101331ec = DAT_101331ec + 1;
        }
      }
      bVar1 = pbVar3[2];
      iVar2 = (uint)(*(ushort *)(unaff_EDI + 0x1c) >> 3) * (iVar5 + 1) +
              *(int *)(unaff_EDI + 4) * iVar4;
      if (bVar1 != 0) {
        (&DAT_1012a59c)[DAT_101331e4] = iVar5 + 1;
        (&DAT_1012ebc0)[DAT_101331e4] = iVar4;
        (&DAT_101331f0)[DAT_101331e4] = iVar2;
        DAT_101331e4 = DAT_101331e4 + 1;
        if ((bVar1 & 2) == 0) {
          (&DAT_10137818)[DAT_101331e6] = iVar2;
          DAT_101331e6 = DAT_101331e6 + 1;
        }
        else {
          (&DAT_1013be40)[DAT_101331e8] = iVar2;
          DAT_101331e8 = DAT_101331e8 + 1;
        }
        if ((bVar1 & 4) != 0) {
          (&DAT_10140468)[DAT_101331ea] = iVar2;
          DAT_101331ea = DAT_101331ea + 1;
        }
        if ((bVar1 & 0x1e) != 0) {
          (&DAT_10144a90)[DAT_101331ec] = iVar2;
          DAT_101331ec = DAT_101331ec + 1;
        }
      }
      bVar1 = pbVar3[3];
      iVar2 = (uint)(*(ushort *)(unaff_EDI + 0x1c) >> 3) * (iVar5 + 2) +
              *(int *)(unaff_EDI + 4) * iVar4;
      if (bVar1 != 0) {
        (&DAT_1012a59c)[DAT_101331e4] = iVar5 + 2;
        (&DAT_1012ebc0)[DAT_101331e4] = iVar4;
        (&DAT_101331f0)[DAT_101331e4] = iVar2;
        DAT_101331e4 = DAT_101331e4 + 1;
        if ((bVar1 & 2) == 0) {
          (&DAT_10137818)[DAT_101331e6] = iVar2;
          DAT_101331e6 = DAT_101331e6 + 1;
        }
        else {
          (&DAT_1013be40)[DAT_101331e8] = iVar2;
          DAT_101331e8 = DAT_101331e8 + 1;
        }
        if ((bVar1 & 4) != 0) {
          (&DAT_10140468)[DAT_101331ea] = iVar2;
          DAT_101331ea = DAT_101331ea + 1;
        }
        if ((bVar1 & 0x1e) != 0) {
          (&DAT_10144a90)[DAT_101331ec] = iVar2;
          DAT_101331ec = DAT_101331ec + 1;
        }
      }
      pbVar3 = pbVar3 + 5;
      iVar2 = iVar5 + 3;
      iVar5 = iVar5 + 5;
    } while (iVar2 < 0x21);
    local_4 = local_4 + 0x43;
    iVar4 = iVar4 + 1;
  } while ((int)local_4 < 0x1012a516);
  (&DAT_101331f0)[DAT_101331e4] = 0x80000000;
  (&DAT_1013be40)[DAT_101331e8] = 0x80000000;
  (&DAT_10137818)[DAT_101331e6] = 0x80000000;
  (&DAT_10140468)[DAT_101331ea] = 0x80000000;
  (&DAT_10144a90)[DAT_101331ec] = 0x80000000;
  return;
}



/**************************************************/

/* Function: FUN_1000ec20 @ 1000ec20 */

void FUN_1000ec20(byte param_1)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x80) {
    *(undefined1 *)(in_EAX + 0x408) = 0;
    while( true ) {
      uVar1 = uVar1 + *(int *)(in_EAX + (uint)*(byte *)(in_EAX + 0x408) * 4);
      if (*(uint *)(in_EAX + 0x404) <= uVar1) break;
      *(byte *)(in_EAX + 0x408) = *(byte *)(in_EAX + 0x408) + 1;
    }
  }
  else {
    *(undefined1 *)(in_EAX + 0x408) = 0xff;
    while( true ) {
      uVar1 = uVar1 + *(int *)(in_EAX + (uint)*(byte *)(in_EAX + 0x408) * 4);
      if (*(uint *)(in_EAX + 0x404) <= uVar1) break;
      *(byte *)(in_EAX + 0x408) = *(byte *)(in_EAX + 0x408) - 1;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1000ec90 @ 1000ec90 */

uint FUN_1000ec90(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *unaff_EDI;
  
  pbVar5 = unaff_EDI + 0x20;
  uVar4 = 8;
  pbVar1 = (byte *)&DAT_1002a29c;
  pbVar3 = unaff_EDI;
  do {
    if (*(int *)pbVar3 != *(int *)pbVar1) goto LAB_1000ecba;
    uVar4 = uVar4 - 4;
    pbVar1 = pbVar1 + 4;
    pbVar3 = pbVar3 + 4;
  } while (3 < uVar4);
  if (uVar4 == 0) {
LAB_1000ed17:
    iVar2 = 0;
  }
  else {
LAB_1000ecba:
    iVar6 = (uint)*pbVar3 - (uint)*pbVar1;
    if (iVar6 == 0) {
      if (uVar4 == 1) goto LAB_1000ed17;
      iVar6 = (uint)pbVar3[1] - (uint)pbVar1[1];
      if (iVar6 == 0) {
        if (uVar4 == 2) goto LAB_1000ed17;
        iVar6 = (uint)pbVar3[2] - (uint)pbVar1[2];
        if (iVar6 == 0) {
          if ((uVar4 == 3) || (iVar6 = (uint)pbVar3[3] - (uint)pbVar1[3], iVar6 == 0))
          goto LAB_1000ed17;
        }
      }
    }
    iVar2 = 1;
    if (iVar6 < 1) {
      iVar2 = -1;
    }
  }
  if ((iVar2 != 0) || (iVar2 = 0, *(int *)(unaff_EDI + 8) != 0x10000)) {
    return CONCAT31((int3)((uint)iVar2 >> 8),0xd1);
  }
  if (*(int *)(unaff_EDI + 0xc) != param_1) {
    return 0xd2;
  }
  uVar4 = 0;
  if (*(uint *)(unaff_EDI + 0x10) != 0) {
    do {
      if ((*(int *)pbVar5 == 0x10400) && (*(short *)(pbVar5 + 4) == 0)) {
        *param_2 = pbVar5;
        return (uint)param_2 & 0xffffff00;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 0x10;
    } while (uVar4 < *(uint *)(unaff_EDI + 0x10));
  }
  return CONCAT31((int3)(uVar4 >> 8),0xd3);
}



/**************************************************/

/* Function: FUN_1000ede0 @ 1000ede0 */

undefined4 FUN_1000ede0(int param_1,byte *param_2,undefined4 *param_3)

{
  uint *puVar1;
  byte *in_EAX;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  
  uVar6 = 8;
  pbVar2 = (byte *)&DAT_1002a2a8;
  pbVar5 = in_EAX;
  do {
    if (*(int *)pbVar5 != *(int *)pbVar2) goto LAB_1000ee18;
    uVar6 = uVar6 - 4;
    pbVar2 = pbVar2 + 4;
    pbVar5 = pbVar5 + 4;
  } while (3 < uVar6);
  if (uVar6 == 0) {
LAB_1000ee75:
    iVar3 = 0;
  }
  else {
LAB_1000ee18:
    iVar8 = (uint)*pbVar5 - (uint)*pbVar2;
    if (iVar8 == 0) {
      if (uVar6 == 1) goto LAB_1000ee75;
      iVar8 = (uint)pbVar5[1] - (uint)pbVar2[1];
      if (iVar8 == 0) {
        if (uVar6 == 2) goto LAB_1000ee75;
        iVar8 = (uint)pbVar5[2] - (uint)pbVar2[2];
        if (iVar8 == 0) {
          if ((uVar6 == 3) || (iVar8 = (uint)pbVar5[3] - (uint)pbVar2[3], iVar8 == 0))
          goto LAB_1000ee75;
        }
      }
    }
    iVar3 = 1;
    if (iVar8 < 1) {
      iVar3 = -1;
    }
  }
  if (iVar3 != 0) {
    return CONCAT31((int3)((uint)iVar3 >> 8),0xd5);
  }
  if (*(int *)(in_EAX + 8) != 0x10400) {
    return 0xd3;
  }
  iVar8 = 0;
  if (*(int *)(in_EAX + 0xc) != param_1) {
    return 0xd4;
  }
  puVar1 = (uint *)(in_EAX + 0x10);
  uVar6 = 0;
  if (*puVar1 != 0) {
    do {
      pbVar7 = in_EAX + 0x20;
      uVar4 = 0x10;
      pbVar5 = param_2;
      pbVar2 = pbVar7;
      do {
        if (*(int *)pbVar2 != *(int *)pbVar5) goto LAB_1000ef28;
        uVar4 = uVar4 - 4;
        pbVar5 = pbVar5 + 4;
        pbVar2 = pbVar2 + 4;
      } while (3 < uVar4);
      if (uVar4 == 0) {
LAB_1000ef8d:
        iVar8 = 0;
      }
      else {
LAB_1000ef28:
        iVar3 = (uint)*pbVar2 - (uint)*pbVar5;
        if (iVar3 == 0) {
          if (uVar4 == 1) goto LAB_1000ef8d;
          iVar3 = (uint)pbVar2[1] - (uint)pbVar5[1];
          if (iVar3 == 0) {
            if (uVar4 == 2) goto LAB_1000ef8d;
            iVar3 = (uint)pbVar2[2] - (uint)pbVar5[2];
            if (iVar3 == 0) {
              if ((uVar4 == 3) || (iVar3 = (uint)pbVar2[3] - (uint)pbVar5[3], iVar3 == 0))
              goto LAB_1000ef8d;
            }
          }
        }
        iVar8 = 1;
        if (iVar3 < 1) {
          iVar8 = -1;
        }
      }
      if ((iVar8 == 0) && (*(short *)(in_EAX + 0x34) == 0)) {
        *param_3 = pbVar7;
        return 0;
      }
      uVar6 = uVar6 + 1;
      in_EAX = pbVar7;
    } while (uVar6 < *puVar1);
  }
  return CONCAT31((int3)((uint)iVar8 >> 8),0xd6);
}



/**************************************************/

/* Function: FUN_1000efd0 @ 1000efd0 */

void FUN_1000efd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar5 = 0;
  piVar1 = &DAT_100e93c8;
  do {
    iVar2 = 0;
    iVar3 = iVar5;
    iVar6 = iVar4;
    do {
      iVar7 = iVar3;
      if (iVar2 < iVar4) {
        iVar7 = iVar6;
      }
      *piVar1 = iVar7;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar2 < 0x100);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -1;
  } while ((int)piVar1 < 0x101293c8);
  return;
}



/**************************************************/

/* Function: FUN_1000f630 @ 1000f630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000f630(uint *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int local_c54;
  int local_c50;
  int local_c4c;
  int local_c48;
  int local_c44;
  uint local_c40;
  undefined1 *local_c3c;
  int local_c38 [256];
  uint local_838;
  uint local_834;
  undefined1 local_830;
  int local_828 [256];
  uint local_428;
  uint local_424;
  undefined1 local_420;
  int local_418 [256];
  uint local_18;
  uint local_14;
  undefined1 local_10;
  
  local_c40 = *param_1;
  puVar10 = (undefined1 *)
            ((param_1[2] - DAT_101490c8) * DAT_101490bc +
            (uint)(DAT_101490d4 >> 3) * (local_c40 - _DAT_101490c4) + DAT_102cb67c);
  local_c3c = (undefined1 *)
              ((param_1[2] - *(int *)(DAT_100e9370 + 0x10)) * *(int *)(DAT_100e9370 + 4) +
              (local_c40 - *(int *)(DAT_100e9370 + 0xc)) *
              (uint)(*(ushort *)(DAT_100e9370 + 0x1c) >> 3) + _DAT_100e734c);
  local_838 = (uint)DAT_101331e4;
  local_18 = local_838;
  local_428 = local_838;
  local_834 = (local_838 + 1) / 2;
  local_14 = local_834;
  local_424 = local_834;
  piVar11 = local_828;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_418;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_c38;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  iVar4 = 0;
  local_c50 = 0;
  if (DAT_10137818 != -0x80000000) {
    puVar8 = &DAT_10137818;
    iVar6 = DAT_10137818;
    do {
      local_828[(byte)puVar10[iVar6]] = local_828[(byte)puVar10[iVar6]] + 1;
      bVar1 = puVar10[iVar6 + 1];
      local_c38[(byte)puVar10[iVar6 + 2]] = local_c38[(byte)puVar10[iVar6 + 2]] + 1;
      local_418[bVar1] = local_418[bVar1] + 1;
      iVar6 = puVar8[1];
      puVar8 = puVar8 + 1;
    } while (iVar6 != -0x80000000);
  }
  if (local_c40 < param_1[1]) {
    do {
      if (DAT_1013be40 != -0x80000000) {
        puVar8 = &DAT_1013be40;
        iVar6 = DAT_1013be40;
        do {
          local_828[(byte)puVar10[iVar6]] = local_828[(byte)puVar10[iVar6]] + 1;
          bVar1 = puVar10[iVar6 + 1];
          local_c38[(byte)puVar10[iVar6 + 2]] = local_c38[(byte)puVar10[iVar6 + 2]] + 1;
          local_418[bVar1] = local_418[bVar1] + 1;
          iVar6 = puVar8[1];
          puVar8 = puVar8 + 1;
        } while (iVar6 != -0x80000000);
      }
      if (iVar4 == 0) {
        puVar5 = puVar10 + (uint)DAT_101293d0 * -3;
        puVar12 = puVar10 + (uint)DAT_101293d1 * -3;
        uVar2 = *puVar10;
        if (DAT_101293d2 <=
            (ushort)(*(short *)(&DAT_100e93c8 + CONCAT11(puVar10[1],puVar12[1])) +
                     *(short *)(&DAT_100e93c8 + CONCAT11(puVar10[1],puVar5[1])) +
                     *(short *)(&DAT_100e93c8 +
                               (uint)(byte)puVar12[2] + (uint)(byte)puVar10[2] * 0x100) +
                     *(short *)(&DAT_100e93c8 +
                               (uint)(byte)puVar5[2] + (uint)(byte)puVar10[2] * 0x100) +
                     *(short *)(&DAT_100e93c8 + CONCAT11(uVar2,*puVar5)) +
                    *(short *)(&DAT_100e93c8 + CONCAT11(uVar2,*puVar12)))) {
LAB_1000f91d:
          iVar4 = FUN_100226b0();
          iVar4 = iVar4 + 1;
          local_c50 = iVar4;
          goto LAB_1000f92d;
        }
        puVar5 = puVar10 + -((uint)DAT_101293d0 * DAT_101490bc);
        puVar12 = puVar10 + -((uint)DAT_101293d1 * DAT_101490bc);
        iVar4 = local_c50;
        if (DAT_101293d2 <=
            (ushort)(*(short *)(&DAT_100e93c8 + CONCAT11(puVar10[1],puVar12[1])) +
                     *(short *)(&DAT_100e93c8 + CONCAT11(puVar10[1],puVar5[1])) +
                     *(short *)(&DAT_100e93c8 +
                               (uint)(byte)puVar12[2] + (uint)(byte)puVar10[2] * 0x100) +
                     *(short *)(&DAT_100e93c8 +
                               (uint)(byte)puVar5[2] + (uint)(byte)puVar10[2] * 0x100) +
                     *(short *)(&DAT_100e93c8 + CONCAT11(uVar2,*puVar5)) +
                    *(short *)(&DAT_100e93c8 + CONCAT11(uVar2,*puVar12)))) goto LAB_1000f91d;
      }
      else {
LAB_1000f92d:
        iVar6 = 0;
        if (0 < iVar4) {
          iVar9 = 0;
          local_c4c = 0;
          local_c48 = 0;
          local_c44 = 0;
          local_c54 = 0;
          if (DAT_101490d8 != -1) {
            iVar13 = 0;
            iVar3 = local_828[0];
            do {
              for (; iVar9 < *(int *)((int)&DAT_101490e4 + iVar13); iVar9 = iVar9 + 1) {
                iVar3 = iVar3 + local_828[iVar9 + 1];
              }
              for (; iVar6 < *(int *)((int)&DAT_101490e0 + iVar13); iVar6 = iVar6 + 1) {
                iVar3 = iVar3 - local_828[iVar6];
              }
              if (local_c44 < iVar3) {
                local_c44 = iVar3;
              }
              local_c54 = local_c54 + 1;
              iVar13 = local_c54 * 0x10;
              iVar4 = local_c50;
            } while ((&DAT_101490d8)[local_c54 * 4] != -1);
          }
          iVar14 = 0;
          iVar3 = 0;
          iVar13 = 0;
          local_c54 = 0;
          iVar9 = local_418[0];
          iVar6 = DAT_100e8360;
          while (iVar6 != -1) {
            for (; iVar3 < *(int *)((int)&DAT_100e836c + iVar14); iVar3 = iVar3 + 1) {
              iVar9 = iVar9 + local_418[iVar3 + 1];
            }
            for (; iVar13 < *(int *)((int)&DAT_100e8368 + iVar14); iVar13 = iVar13 + 1) {
              iVar9 = iVar9 - local_418[iVar13];
            }
            if (local_c48 < iVar9) {
              local_c48 = iVar9;
            }
            local_c54 = local_c54 + 1;
            iVar14 = local_c54 * 0x10;
            iVar4 = local_c50;
            iVar6 = (&DAT_100e8360)[local_c54 * 4];
          }
          iVar14 = 0;
          iVar3 = 0;
          iVar13 = 0;
          local_c54 = 0;
          iVar9 = local_c38[0];
          iVar6 = DAT_100e7350;
          while (iVar6 != -1) {
            for (; iVar3 < *(int *)((int)&DAT_100e735c + iVar14); iVar3 = iVar3 + 1) {
              iVar9 = iVar9 + local_c38[iVar3 + 1];
            }
            for (; iVar13 < *(int *)((int)&DAT_100e7358 + iVar14); iVar13 = iVar13 + 1) {
              iVar9 = iVar9 - local_c38[iVar13];
            }
            if (local_c4c < iVar9) {
              local_c4c = iVar9;
            }
            local_c54 = local_c54 + 1;
            iVar14 = local_c54 * 0x10;
            iVar4 = local_c50;
            iVar6 = (&DAT_100e7350)[local_c54 * 4];
          }
          uVar7 = (uint)DAT_101293d7;
          if ((((int)(uVar7 * local_428) / 100 <= local_c44) &&
              ((int)(uVar7 * local_18) / 100 <= local_c48)) &&
             ((int)(uVar7 * local_838) / 100 <= local_c4c)) {
            FUN_1000ec20(*puVar10);
            FUN_1000ec20(puVar10[1]);
            FUN_1000ec20(puVar10[2]);
            if ((((int)(uint)DAT_101293e0 <= (int)(&DAT_100e93c8)[CONCAT11(*puVar10,local_420)]) ||
                ((int)(uint)DAT_101293e0 <= (int)(&DAT_100e93c8)[CONCAT11(puVar10[1],local_10)])) ||
               ((int)(uint)DAT_101293e0 <= (int)(&DAT_100e93c8)[CONCAT11(puVar10[2],local_830)])) {
              *local_c3c = local_420;
              local_c50 = iVar4 + -1;
              local_c3c[1] = local_10;
              local_c3c[2] = local_830;
              iVar4 = local_c50;
              goto LAB_1000fbc1;
            }
          }
          local_c50 = 0;
          iVar4 = 0;
        }
      }
LAB_1000fbc1:
      if (DAT_10140468 != -0x80000000) {
        puVar8 = &DAT_10140468;
        iVar6 = DAT_10140468;
        do {
          local_828[(byte)puVar10[iVar6]] = local_828[(byte)puVar10[iVar6]] + -1;
          bVar1 = puVar10[iVar6 + 1];
          local_c38[(byte)puVar10[iVar6 + 2]] = local_c38[(byte)puVar10[iVar6 + 2]] + -1;
          local_418[bVar1] = local_418[bVar1] + -1;
          iVar6 = puVar8[1];
          puVar8 = puVar8 + 1;
        } while (iVar6 != -0x80000000);
      }
      local_c3c = local_c3c + 3;
      local_c40 = local_c40 + 1;
      puVar10 = puVar10 + 3;
    } while (local_c40 < param_1[1]);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1000fc40 @ 1000fc40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000fc40(uint *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_c54;
  int local_c50;
  int local_c4c;
  int local_c48;
  int local_c44;
  uint local_c40;
  undefined2 *local_c3c;
  int local_c38 [256];
  uint local_838;
  uint local_834;
  undefined1 local_830;
  int local_828 [256];
  uint local_428;
  uint local_424;
  byte local_420;
  int local_418 [256];
  uint local_18;
  uint local_14;
  undefined1 local_10;
  
  local_c40 = *param_1;
  iVar7 = (param_1[2] - DAT_101490c8) * DAT_101490bc +
          (uint)(DAT_101490d4 >> 3) * (local_c40 - _DAT_101490c4) + DAT_102cb67c;
  local_c3c = (undefined2 *)
              ((param_1[2] - *(int *)(DAT_100e9370 + 0x10)) * *(int *)(DAT_100e9370 + 4) +
              (local_c40 - *(int *)(DAT_100e9370 + 0xc)) *
              (uint)(*(ushort *)(DAT_100e9370 + 0x1c) >> 3) + _DAT_100e734c);
  local_838 = (uint)DAT_101331e4;
  local_18 = local_838;
  local_428 = local_838;
  local_834 = (local_838 + 1) / 2;
  local_14 = local_834;
  local_424 = local_834;
  piVar8 = local_828;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  piVar8 = local_418;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  piVar8 = local_c38;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  iVar3 = 0;
  local_c50 = 0;
  if (DAT_10137818 != -0x80000000) {
    puVar6 = &DAT_10137818;
    iVar4 = DAT_10137818;
    do {
      local_828[*(byte *)(iVar4 + 1 + iVar7)] = local_828[*(byte *)(iVar4 + 1 + iVar7)] + 1;
      bVar1 = *(byte *)(iVar4 + 3 + iVar7);
      local_c38[*(byte *)(iVar4 + 5 + iVar7)] = local_c38[*(byte *)(iVar4 + 5 + iVar7)] + 1;
      local_418[bVar1] = local_418[bVar1] + 1;
      iVar4 = puVar6[1];
      puVar6 = puVar6 + 1;
    } while (iVar4 != -0x80000000);
  }
  if (local_c40 < param_1[1]) {
    do {
      if (DAT_1013be40 != -0x80000000) {
        puVar6 = &DAT_1013be40;
        iVar4 = DAT_1013be40;
        do {
          local_828[*(byte *)(iVar4 + 1 + iVar7)] = local_828[*(byte *)(iVar4 + 1 + iVar7)] + 1;
          bVar1 = *(byte *)(iVar4 + 3 + iVar7);
          local_c38[*(byte *)(iVar4 + 5 + iVar7)] = local_c38[*(byte *)(iVar4 + 5 + iVar7)] + 1;
          local_418[bVar1] = local_418[bVar1] + 1;
          iVar4 = puVar6[1];
          puVar6 = puVar6 + 1;
        } while (iVar4 != -0x80000000);
      }
      if (iVar3 == 0) {
        iVar9 = iVar7 + (uint)DAT_101293d1 * -6;
        iVar3 = (uint)*(byte *)(iVar7 + 5) * 0x100;
        uVar2 = *(undefined1 *)(iVar7 + 1);
        iVar4 = iVar7 + (uint)DAT_101293d0 * -6;
        if (DAT_101293d2 <=
            (ushort)(*(short *)(&DAT_100e93c8 + CONCAT11(uVar2,*(undefined1 *)(iVar9 + 1))) +
                     *(short *)(&DAT_100e93c8 + CONCAT11(uVar2,*(undefined1 *)(iVar4 + 1))) +
                     *(short *)(&DAT_100e93c8 +
                               CONCAT11(*(undefined1 *)(iVar7 + 3),*(undefined1 *)(iVar9 + 3))) +
                     *(short *)(&DAT_100e93c8 +
                               CONCAT11(*(undefined1 *)(iVar7 + 3),*(undefined1 *)(iVar4 + 3))) +
                     *(short *)(&DAT_100e93c8 + (uint)*(byte *)(iVar9 + 5) + iVar3) +
                    *(short *)(&DAT_100e93c8 + (uint)*(byte *)(iVar4 + 5) + iVar3))) {
LAB_1000ff3a:
          iVar3 = FUN_100226b0();
          iVar3 = iVar3 + 1;
          local_c50 = iVar3;
          goto LAB_1000ff4a;
        }
        iVar4 = iVar7 - (uint)DAT_101293d0 * DAT_101490bc;
        iVar10 = iVar7 - (uint)DAT_101293d1 * DAT_101490bc;
        iVar9 = (uint)*(byte *)(iVar7 + 5) * 0x100;
        iVar3 = local_c50;
        if (DAT_101293d2 <=
            (ushort)(*(short *)(&DAT_100e93c8 +
                               CONCAT11(*(undefined1 *)(iVar7 + 3),*(undefined1 *)(iVar10 + 3))) +
                     *(short *)(&DAT_100e93c8 +
                               CONCAT11(*(undefined1 *)(iVar7 + 3),*(undefined1 *)(iVar4 + 3))) +
                     *(short *)(&DAT_100e93c8 + (uint)*(byte *)(iVar10 + 5) + iVar9) +
                     *(short *)(&DAT_100e93c8 + (uint)*(byte *)(iVar4 + 5) + iVar9) +
                     *(short *)(&DAT_100e93c8 + CONCAT11(uVar2,*(undefined1 *)(iVar10 + 1))) +
                    *(short *)(&DAT_100e93c8 + CONCAT11(uVar2,*(undefined1 *)(iVar4 + 1)))))
        goto LAB_1000ff3a;
      }
      else {
LAB_1000ff4a:
        iVar4 = 0;
        if (0 < iVar3) {
          iVar9 = 0;
          local_c4c = 0;
          local_c48 = 0;
          local_c44 = 0;
          local_c54 = 0;
          if (DAT_101490d8 != -1) {
            iVar11 = 0;
            iVar10 = local_828[0];
            do {
              for (; iVar9 < *(int *)((int)&DAT_101490e4 + iVar11); iVar9 = iVar9 + 1) {
                iVar10 = iVar10 + local_828[iVar9 + 1];
              }
              for (; iVar4 < *(int *)((int)&DAT_101490e0 + iVar11); iVar4 = iVar4 + 1) {
                iVar10 = iVar10 - local_828[iVar4];
              }
              if (local_c44 < iVar10) {
                local_c44 = iVar10;
              }
              local_c54 = local_c54 + 1;
              iVar11 = local_c54 * 0x10;
              iVar3 = local_c50;
            } while ((&DAT_101490d8)[local_c54 * 4] != -1);
          }
          iVar12 = 0;
          iVar10 = 0;
          iVar11 = 0;
          local_c54 = 0;
          iVar9 = local_418[0];
          iVar4 = DAT_100e8360;
          while (iVar4 != -1) {
            for (; iVar10 < *(int *)((int)&DAT_100e836c + iVar12); iVar10 = iVar10 + 1) {
              iVar9 = iVar9 + local_418[iVar10 + 1];
            }
            for (; iVar11 < *(int *)((int)&DAT_100e8368 + iVar12); iVar11 = iVar11 + 1) {
              iVar9 = iVar9 - local_418[iVar11];
            }
            if (local_c48 < iVar9) {
              local_c48 = iVar9;
            }
            local_c54 = local_c54 + 1;
            iVar12 = local_c54 * 0x10;
            iVar3 = local_c50;
            iVar4 = (&DAT_100e8360)[local_c54 * 4];
          }
          iVar12 = 0;
          iVar10 = 0;
          iVar11 = 0;
          local_c54 = 0;
          iVar9 = local_c38[0];
          iVar4 = DAT_100e7350;
          while (iVar4 != -1) {
            for (; iVar10 < *(int *)((int)&DAT_100e735c + iVar12); iVar10 = iVar10 + 1) {
              iVar9 = iVar9 + local_c38[iVar10 + 1];
            }
            for (; iVar11 < *(int *)((int)&DAT_100e7358 + iVar12); iVar11 = iVar11 + 1) {
              iVar9 = iVar9 - local_c38[iVar11];
            }
            if (local_c4c < iVar9) {
              local_c4c = iVar9;
            }
            local_c54 = local_c54 + 1;
            iVar12 = local_c54 * 0x10;
            iVar3 = local_c50;
            iVar4 = (&DAT_100e7350)[local_c54 * 4];
          }
          uVar5 = (uint)DAT_101293d7;
          if ((((int)(uVar5 * local_428) / 100 <= local_c44) &&
              ((int)(uVar5 * local_18) / 100 <= local_c48)) &&
             ((int)(uVar5 * local_838) / 100 <= local_c4c)) {
            FUN_1000ec20(CONCAT22((short)((ulonglong)
                                          ((longlong)(int)(uVar5 * local_838) * 0x51eb851f) >> 0x10)
                                  ,(ushort)*(byte *)(iVar7 + 1)));
            FUN_1000ec20(*(undefined1 *)(iVar7 + 3));
            FUN_1000ec20(*(undefined1 *)(iVar7 + 5));
            if ((((int)(uint)DAT_101293e0 <=
                  (int)(&DAT_100e93c8)[(uint)*(byte *)(iVar7 + 1) * 0x100 + (uint)local_420]) ||
                ((int)(uint)DAT_101293e0 <=
                 (int)(&DAT_100e93c8)[CONCAT11(*(undefined1 *)(iVar7 + 3),local_10)])) ||
               ((int)(uint)DAT_101293e0 <=
                (int)(&DAT_100e93c8)[CONCAT11(*(undefined1 *)(iVar7 + 5),local_830)])) {
              *local_c3c = CONCAT11(local_420,local_420);
              local_c3c[1] = CONCAT11(local_10,local_10);
              local_c50 = iVar3 + -1;
              local_c3c[2] = CONCAT11(local_830,local_830);
              iVar3 = local_c50;
              goto LAB_1001020e;
            }
          }
          local_c50 = 0;
          iVar3 = 0;
        }
      }
LAB_1001020e:
      if (DAT_10140468 != -0x80000000) {
        puVar6 = &DAT_10140468;
        iVar4 = DAT_10140468;
        do {
          local_828[*(byte *)(iVar4 + 1 + iVar7)] = local_828[*(byte *)(iVar4 + 1 + iVar7)] + -1;
          bVar1 = *(byte *)(iVar4 + 3 + iVar7);
          local_c38[*(byte *)(iVar4 + 5 + iVar7)] = local_c38[*(byte *)(iVar4 + 5 + iVar7)] + -1;
          local_418[bVar1] = local_418[bVar1] + -1;
          iVar4 = puVar6[1];
          puVar6 = puVar6 + 1;
        } while (iVar4 != -0x80000000);
      }
      local_c3c = local_c3c + 3;
      local_c40 = local_c40 + 1;
      iVar7 = iVar7 + 6;
    } while (local_c40 < param_1[1]);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10010a70 @ 10010a70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10010a70(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined2 local_c70;
  uint local_c6c;
  uint local_c68;
  uint local_c64;
  uint local_c60;
  uint local_c5c;
  undefined2 local_c58;
  int *local_c4c;
  uint local_c44;
  uint local_c3c;
  int local_c38 [256];
  uint local_838;
  uint local_834;
  undefined1 local_830;
  byte local_82f;
  byte local_82e;
  int local_828 [256];
  uint local_428;
  uint local_424;
  undefined1 local_420;
  int local_418 [256];
  uint local_18;
  uint local_14;
  undefined1 local_10;
  
  local_c5c = *param_1;
  puVar11 = (undefined2 *)
            ((param_1[2] - DAT_101490c8) * DAT_101490bc +
            (uint)(DAT_101490d4 >> 3) * (local_c5c - _DAT_101490c4) + DAT_102cb67c);
  piVar12 = local_828;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  piVar12 = local_c38;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  piVar12 = local_418;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  local_18 = (uint)DAT_101331e4;
  local_838 = local_18;
  local_428 = local_18;
  local_14 = (local_18 + 1) / 2;
  local_834 = local_14;
  local_424 = local_14;
  if (DAT_10137818 != -0x80000000) {
    puVar9 = &DAT_10137818;
    iVar4 = DAT_10137818;
    do {
      local_828[*(byte *)(iVar4 + (int)puVar11)] = local_828[*(byte *)(iVar4 + (int)puVar11)] + 1;
      bVar1 = *(byte *)(iVar4 + 1 + (int)puVar11);
      local_418[*(byte *)(iVar4 + 2 + (int)puVar11)] =
           local_418[*(byte *)(iVar4 + 2 + (int)puVar11)] + 1;
      local_c38[bVar1] = local_c38[bVar1] + 1;
      iVar4 = puVar9[1];
      puVar9 = puVar9 + 1;
    } while (iVar4 != -0x80000000);
  }
  local_c70 = *puVar11;
  if (local_c5c < param_1[1]) {
    do {
      if (DAT_1013be40 != -0x80000000) {
        puVar9 = &DAT_1013be40;
        iVar4 = DAT_1013be40;
        do {
          local_828[*(byte *)(iVar4 + (int)puVar11)] =
               local_828[*(byte *)(iVar4 + (int)puVar11)] + 1;
          bVar1 = *(byte *)(iVar4 + 1 + (int)puVar11);
          local_418[*(byte *)(iVar4 + 2 + (int)puVar11)] =
               local_418[*(byte *)(iVar4 + 2 + (int)puVar11)] + 1;
          local_c38[bVar1] = local_c38[bVar1] + 1;
          iVar4 = puVar9[1];
          puVar9 = puVar9 + 1;
        } while (iVar4 != -0x80000000);
      }
      bVar1 = *(byte *)((int)puVar11 + 1);
      if (local_c70._1_1_ < bVar1) {
LAB_10010ca6:
        bVar1 = *(byte *)((int)puVar11 + 1);
        if (local_c70._1_1_ <= bVar1) {
          if (bVar1 == 0xff) {
            local_82e = 0xff;
          }
          else {
            uVar5 = bVar1 + 1;
            if (uVar5 < 0x100) {
              do {
                if (local_c38[uVar5] != 0) goto LAB_10010f5e;
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < 0x100);
            }
            local_82e = *(byte *)((int)puVar11 + 1);
          }
          uVar5 = 0;
          local_82f = local_82e;
          while( true ) {
            local_c68 = (uint)local_82f;
            uVar5 = uVar5 + local_c38[local_c68];
            if (uVar5 == local_838) break;
            local_82f = local_82f - 1;
          }
          if ((int)(uint)DAT_101293f8 <= (int)(local_82e - local_c68)) {
            uVar5 = (uint)DAT_101293f9;
            local_c6c = uVar5 + local_c68;
            if (0xff < local_c6c) {
              local_c6c = 0xff;
            }
            local_c64 = DAT_101293fa + local_c68;
            local_c60 = local_c68;
            bVar1 = DAT_101293fb;
            if (0xff < local_c64) {
              local_c64 = 0xff;
            }
            goto LAB_10010d69;
          }
        }
      }
      else {
        if (bVar1 != 0) {
          uVar5 = (uint)bVar1;
          do {
            uVar5 = uVar5 - 1;
            if ((int)uVar5 < 0) {
              local_82f = *(byte *)((int)puVar11 + 1);
              goto LAB_10010c15;
            }
          } while (local_c38[uVar5] == 0);
          goto LAB_10010ca6;
        }
        local_82f = 0;
LAB_10010c15:
        uVar5 = 0;
        local_82e = local_82f;
        while( true ) {
          local_c6c = (uint)local_82e;
          uVar5 = uVar5 + local_c38[local_c6c];
          if (uVar5 == local_838) break;
          local_82e = local_82e + 1;
        }
        if ((int)(uint)DAT_101293fc <= (int)(local_c6c - local_82f)) {
          uVar5 = (uint)DAT_101293fd;
          local_c68 = local_c6c - uVar5;
          if ((int)local_c68 < 0) {
            local_c68 = 0;
          }
          local_c60 = local_c6c - DAT_101293fe;
          local_c64 = local_c6c;
          bVar1 = DAT_101293ff;
          if ((int)local_c60 < 0) {
            local_c60 = 0;
          }
LAB_10010d69:
          bVar2 = true;
          iVar4 = 0;
          for (uVar6 = local_c68; (int)uVar6 <= (int)local_c6c; uVar6 = uVar6 + 1) {
            iVar4 = iVar4 + local_c38[uVar6];
          }
          if ((int)(bVar1 * local_838) / 100 <= iVar4) {
            local_c3c = 0xff;
            local_c44 = 0xff;
            uVar10 = 0;
            uVar6 = 0;
            if (DAT_10144a90 != -0x80000000) {
              local_c4c = &DAT_10144a90;
              iVar4 = DAT_10144a90;
              do {
                uVar7 = (uint)*(byte *)(iVar4 + 1 + (int)puVar11);
                if (((int)uVar7 < (int)local_c68) || (local_c6c < uVar7)) {
                  bVar2 = false;
                  goto LAB_10010e32;
                }
                uVar8 = (uint)*(byte *)(iVar4 + (int)puVar11);
                uVar7 = uVar8;
                if ((local_c44 <= uVar8) && (uVar7 = local_c44, uVar6 < uVar8)) {
                  uVar6 = uVar8;
                }
                local_c44 = uVar7;
                uVar8 = (uint)*(byte *)(iVar4 + 2 + (int)puVar11);
                uVar7 = uVar8;
                if ((local_c3c <= uVar8) && (uVar7 = local_c3c, uVar10 < uVar8)) {
                  uVar10 = uVar8;
                }
                local_c3c = uVar7;
                local_c4c = local_c4c + 1;
                iVar4 = *local_c4c;
              } while (iVar4 != -0x80000000);
              bVar2 = true;
            }
LAB_10010e32:
            if ((((int)((uVar6 - local_c44) + 1) <= (int)uVar5) &&
                ((int)((uVar10 - local_c3c) + 1) <= (int)uVar5)) && (bVar2)) {
              FUN_1000ec20(*(undefined1 *)puVar11);
              FUN_1000ec20(*(undefined1 *)((int)puVar11 + 1));
              FUN_1000ec20(*(undefined1 *)(puVar11 + 1));
              local_c58 = CONCAT11(local_830,local_420);
              iVar4 = 0;
              if (DAT_101331e4 != 0) {
                do {
                  uVar5 = (&DAT_1012ebc0)[iVar4] + param_1[2];
                  if (uVar5 < DAT_100e9384) {
                    puVar3 = (undefined2 *)
                             ((uVar5 - *(int *)(DAT_100e9370 + 0x10)) * *(int *)(DAT_100e9370 + 4) +
                             (((&DAT_1012a59c)[iVar4] + local_c5c) - *(int *)(DAT_100e9370 + 0xc)) *
                             (uint)(*(ushort *)(DAT_100e9370 + 0x1c) >> 3) + _DAT_100e734c);
                  }
                  else {
                    puVar3 = (undefined2 *)
                             ((uVar5 - DAT_100e9384) * DAT_100e9378 +
                             (uint)(DAT_100e9390 >> 3) *
                             (((&DAT_1012a59c)[iVar4] + local_c5c) - _DAT_100e9380) + DAT_102cb680);
                  }
                  if (((int)(uint)*(byte *)((int)puVar3 + 1) < (int)local_c60) ||
                     (local_c64 < *(byte *)((int)puVar3 + 1))) {
                    *puVar3 = local_c58;
                    *(undefined1 *)(puVar3 + 1) = local_10;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < (int)(uint)DAT_101331e4);
              }
            }
          }
        }
      }
LAB_10010f5e:
      if (DAT_10140468 != -0x80000000) {
        puVar9 = &DAT_10140468;
        iVar4 = DAT_10140468;
        do {
          local_828[*(byte *)(iVar4 + (int)puVar11)] =
               local_828[*(byte *)(iVar4 + (int)puVar11)] + -1;
          bVar1 = *(byte *)(iVar4 + 1 + (int)puVar11);
          local_418[*(byte *)(iVar4 + 2 + (int)puVar11)] =
               local_418[*(byte *)(iVar4 + 2 + (int)puVar11)] + -1;
          local_c38[bVar1] = local_c38[bVar1] + -1;
          iVar4 = puVar9[1];
          puVar9 = puVar9 + 1;
        } while (iVar4 != -0x80000000);
      }
      local_c70 = *puVar11;
      local_c5c = local_c5c + 1;
      puVar11 = (undefined2 *)((int)puVar11 + 3);
    } while (local_c5c < param_1[1]);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10010ff0 @ 10010ff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10010ff0(uint *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint local_c7c;
  uint local_c78;
  uint local_c74;
  uint local_c70;
  uint local_c6c;
  undefined4 local_c68;
  undefined4 local_c60;
  int *local_c50;
  uint local_c44;
  uint local_c3c;
  int local_c38 [256];
  uint local_838;
  uint local_834;
  undefined1 local_830;
  byte local_82f;
  byte local_82e;
  int local_828 [256];
  uint local_428;
  uint local_424;
  undefined1 local_420;
  int local_418 [256];
  uint local_18;
  uint local_14;
  undefined1 local_10;
  
  local_c74 = *param_1;
  puVar11 = (undefined4 *)
            ((param_1[2] - DAT_101490c8) * DAT_101490bc +
            (uint)(DAT_101490d4 >> 3) * (local_c74 - _DAT_101490c4) + DAT_102cb67c);
  piVar12 = local_828;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  piVar12 = local_c38;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  piVar12 = local_418;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  local_18 = (uint)DAT_101331e4;
  local_838 = local_18;
  local_428 = local_18;
  local_14 = (local_18 + 1) / 2;
  local_834 = local_14;
  local_424 = local_14;
  if (DAT_10137818 != -0x80000000) {
    puVar9 = &DAT_10137818;
    iVar4 = DAT_10137818;
    do {
      local_828[*(byte *)(iVar4 + 1 + (int)puVar11)] =
           local_828[*(byte *)(iVar4 + 1 + (int)puVar11)] + 1;
      bVar8 = *(byte *)(iVar4 + 3 + (int)puVar11);
      local_418[*(byte *)(iVar4 + 5 + (int)puVar11)] =
           local_418[*(byte *)(iVar4 + 5 + (int)puVar11)] + 1;
      local_c38[bVar8] = local_c38[bVar8] + 1;
      iVar4 = puVar9[1];
      puVar9 = puVar9 + 1;
    } while (iVar4 != -0x80000000);
  }
  local_c68 = *puVar11;
  if (local_c74 < param_1[1]) {
    do {
      if (DAT_1013be40 != -0x80000000) {
        puVar9 = &DAT_1013be40;
        iVar4 = DAT_1013be40;
        do {
          local_828[*(byte *)(iVar4 + 1 + (int)puVar11)] =
               local_828[*(byte *)(iVar4 + 1 + (int)puVar11)] + 1;
          bVar8 = *(byte *)(iVar4 + 3 + (int)puVar11);
          local_418[*(byte *)(iVar4 + 5 + (int)puVar11)] =
               local_418[*(byte *)(iVar4 + 5 + (int)puVar11)] + 1;
          local_c38[bVar8] = local_c38[bVar8] + 1;
          iVar4 = puVar9[1];
          puVar9 = puVar9 + 1;
        } while (iVar4 != -0x80000000);
      }
      uVar1 = *(ushort *)((int)puVar11 + 2);
      bVar8 = (byte)(uVar1 >> 8);
      if (local_c68._2_2_ < uVar1) {
LAB_10011241:
        if (bVar8 == 0xff) {
          bVar8 = 0xff;
        }
        else {
          uVar3 = bVar8 + 1;
          if (uVar3 < 0x100) {
            do {
              if (local_c38[uVar3] != 0) goto LAB_1001150b;
              uVar3 = uVar3 + 1;
            } while ((int)uVar3 < 0x100);
          }
        }
        local_82e = bVar8;
        uVar3 = 0;
        local_82f = bVar8;
        while( true ) {
          local_c78 = (uint)local_82f;
          uVar3 = uVar3 + local_c38[local_c78];
          if (uVar3 == local_838) break;
          local_82f = local_82f - 1;
        }
        if ((int)(uint)DAT_101293f8 <= (int)(bVar8 - local_c78)) {
          uVar3 = (uint)DAT_101293f9;
          local_c7c = uVar3 + local_c78;
          if (0xff < local_c7c) {
            local_c7c = 0xff;
          }
          local_c70 = DAT_101293fa + local_c78;
          local_c6c = local_c78;
          bVar8 = DAT_101293fb;
          if (0xff < local_c70) {
            local_c70 = 0xff;
          }
LAB_100112f6:
          bVar2 = true;
          iVar4 = 0;
          for (uVar5 = local_c78; (int)uVar5 <= (int)local_c7c; uVar5 = uVar5 + 1) {
            iVar4 = iVar4 + local_c38[uVar5];
          }
          if ((int)(bVar8 * local_838) / 100 <= iVar4) {
            local_c3c = 0xff;
            local_c44 = 0xff;
            uVar10 = 0;
            uVar5 = 0;
            if (DAT_10144a90 != -0x80000000) {
              local_c50 = &DAT_10144a90;
              iVar4 = DAT_10144a90;
              do {
                uVar6 = (uint)*(byte *)(iVar4 + 3 + (int)puVar11);
                if (((int)uVar6 < (int)local_c78) || (local_c7c < uVar6)) {
                  bVar2 = false;
                  goto LAB_100113c3;
                }
                uVar7 = (uint)*(byte *)(iVar4 + 1 + (int)puVar11);
                uVar6 = uVar7;
                if ((local_c44 <= uVar7) && (uVar6 = local_c44, uVar5 < uVar7)) {
                  uVar5 = uVar7;
                }
                local_c44 = uVar6;
                uVar7 = (uint)*(byte *)(iVar4 + 5 + (int)puVar11);
                uVar6 = uVar7;
                if ((local_c3c <= uVar7) && (uVar6 = local_c3c, uVar10 < uVar7)) {
                  uVar10 = uVar7;
                }
                local_c3c = uVar6;
                local_c50 = local_c50 + 1;
                iVar4 = *local_c50;
              } while (iVar4 != -0x80000000);
              bVar2 = true;
            }
LAB_100113c3:
            if ((((int)((uVar5 - local_c44) + 1) <= (int)uVar3) &&
                ((int)((uVar10 - local_c3c) + 1) <= (int)uVar3)) && (bVar2)) {
              FUN_1000ec20(*(undefined1 *)((int)puVar11 + 1));
              FUN_1000ec20(uVar1 >> 8);
              FUN_1000ec20(*(undefined1 *)((int)puVar11 + 5));
              local_c60 = CONCAT22(CONCAT11(local_830,local_830),CONCAT11(local_420,local_420));
              iVar4 = 0;
              if (DAT_101331e4 != 0) {
                do {
                  uVar3 = (&DAT_1012ebc0)[iVar4] + param_1[2];
                  if (uVar3 < DAT_100e9384) {
                    puVar9 = (undefined4 *)
                             ((uVar3 - *(int *)(DAT_100e9370 + 0x10)) * *(int *)(DAT_100e9370 + 4) +
                             (((&DAT_1012a59c)[iVar4] + local_c74) - *(int *)(DAT_100e9370 + 0xc)) *
                             (uint)(*(ushort *)(DAT_100e9370 + 0x1c) >> 3) + _DAT_100e734c);
                  }
                  else {
                    puVar9 = (undefined4 *)
                             ((uVar3 - DAT_100e9384) * DAT_100e9378 +
                             (uint)(DAT_100e9390 >> 3) *
                             (((&DAT_1012a59c)[iVar4] + local_c74) - _DAT_100e9380) + DAT_102cb680);
                  }
                  if (((int)(uint)*(byte *)((int)puVar9 + 3) < (int)local_c6c) ||
                     (local_c70 < *(byte *)((int)puVar9 + 3))) {
                    *puVar9 = local_c60;
                    *(ushort *)(puVar9 + 1) = CONCAT11(local_10,local_10);
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < (int)(uint)DAT_101331e4);
              }
            }
          }
        }
      }
      else if (bVar8 == 0) {
LAB_100111a0:
        uVar3 = 0;
        local_82f = bVar8;
        local_82e = bVar8;
        while( true ) {
          local_c7c = (uint)local_82e;
          uVar3 = uVar3 + local_c38[local_c7c];
          if (uVar3 == local_838) break;
          local_82e = local_82e + 1;
        }
        if ((int)(uint)DAT_101293fc <= (int)(local_c7c - bVar8)) {
          uVar3 = (uint)DAT_101293fd;
          local_c78 = local_c7c - uVar3;
          if ((int)local_c78 < 0) {
            local_c78 = 0;
          }
          local_c6c = local_c7c - DAT_101293fe;
          local_c70 = local_c7c;
          bVar8 = DAT_101293ff;
          if ((int)local_c6c < 0) {
            local_c6c = 0;
          }
          goto LAB_100112f6;
        }
      }
      else {
        uVar3 = (uint)bVar8;
        do {
          uVar3 = uVar3 - 1;
          if ((int)uVar3 < 0) goto LAB_100111a0;
        } while (local_c38[uVar3] == 0);
        if (local_c68._2_2_ <= uVar1) goto LAB_10011241;
      }
LAB_1001150b:
      if (DAT_10140468 != -0x80000000) {
        puVar9 = &DAT_10140468;
        iVar4 = DAT_10140468;
        do {
          local_828[*(byte *)(iVar4 + 1 + (int)puVar11)] =
               local_828[*(byte *)(iVar4 + 1 + (int)puVar11)] + -1;
          bVar8 = *(byte *)(iVar4 + 3 + (int)puVar11);
          local_418[*(byte *)(iVar4 + 5 + (int)puVar11)] =
               local_418[*(byte *)(iVar4 + 5 + (int)puVar11)] + -1;
          local_c38[bVar8] = local_c38[bVar8] + -1;
          iVar4 = puVar9[1];
          puVar9 = puVar9 + 1;
        } while (iVar4 != -0x80000000);
      }
      local_c68 = *puVar11;
      local_c74 = local_c74 + 1;
      puVar11 = (undefined4 *)((int)puVar11 + 6);
    } while (local_c74 < param_1[1]);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_100115a0 @ 100115a0 */

uint __fastcall FUN_100115a0(undefined4 param_1,void *param_2,undefined4 *param_3,void *param_4)

{
  undefined4 *in_EAX;
  uint extraout_EAX;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 == (void *)0x0) {
    puVar3 = in_EAX;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    return (uint)in_EAX & 0xffffff00;
  }
  if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
    param_3[4] = DAT_100e937c + DAT_100e9384;
  }
  else {
    param_3[4] = 0;
  }
  puVar3 = param_3;
  puVar4 = in_EAX;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _memcpy(param_2,param_4,in_EAX[2] * in_EAX[1]);
  uVar1 = 0;
  if (DAT_102cb680 != (void *)0x0) {
    _free(DAT_102cb680);
    DAT_102cb680 = (void *)0x0;
    uVar1 = extraout_EAX;
  }
  if ((*(byte *)((int)param_3 + 0x1e) & 1) != 0) {
    puVar3 = param_3;
    puVar4 = &DAT_100e9374;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  DAT_100e9384 = param_3[2] + param_3[4];
  DAT_100e937c = 0;
  return uVar1 & 0xffffff00;
}



/**************************************************/

/* Function: FUN_10011650 @ 10011650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10011650(undefined4 *param_1,void *param_2,undefined4 *param_3,void *param_4)

{
  bool bVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint *puVar16;
  ushort local_a4;
  uint local_84 [4];
  uint local_74;
  uint local_64 [4];
  int local_54;
  int local_44 [4];
  int local_34;
  uint local_14;
  
  dVar2 = _DAT_101293d8;
  if ((*(byte *)((int)param_3 + 0x1e) & 1) != 0) {
    bVar1 = 1.0 <= _DAT_101293d8;
    puVar11 = param_3;
    puVar15 = &DAT_100e9394;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
    }
    DAT_100e93a4 = 0;
    DAT_100e939c = 0;
    if (bVar1) {
      FUN_1000e550(dVar2);
    }
    else {
      FUN_1000e4f0(0x3ff0000000000000);
    }
    FUN_1000e5b0();
    FUN_1000e7a0();
    local_a4 = (ushort)(int)ROUND(_DAT_101293d8);
    DAT_102cb6ba = local_a4;
    DAT_102cb6bc = local_a4;
    DAT_102cb6be = local_a4;
    if (local_a4 < DAT_101293d1) {
      DAT_102cb6bc = (ushort)DAT_101293d1;
    }
    iVar13 = 0;
    iVar8 = DAT_101293d4 - 1;
    DAT_102cb6b8 = DAT_102cb6bc;
    if (iVar8 < 0x100) {
      piVar10 = &DAT_101490dc;
      do {
        piVar10[-1] = iVar13;
        *piVar10 = iVar8;
        FUN_10022860();
        iVar3 = FUN_100226b0();
        piVar10[1] = iVar3;
        FUN_10022860();
        iVar3 = FUN_100226b0();
        iVar8 = iVar8 + 1;
        piVar10[2] = iVar3;
        iVar13 = iVar13 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar8 < 0x100);
    }
    uVar4 = (uint)DAT_101293d5;
    (&DAT_101490d8)[iVar13 * 4] = 0xffffffff;
    (&DAT_101490dc)[iVar13 * 4] = 0xffffffff;
    (&DAT_101490e0)[iVar13 * 4] = 0xffffffff;
    (&DAT_101490e4)[iVar13 * 4] = 0xffffffff;
    iVar13 = 0;
    iVar8 = uVar4 - 1;
    if (iVar8 < 0x100) {
      piVar10 = &DAT_100e8364;
      do {
        piVar10[-1] = iVar13;
        *piVar10 = iVar8;
        FUN_10022860();
        iVar3 = FUN_100226b0();
        piVar10[1] = iVar3;
        FUN_10022860();
        iVar3 = FUN_100226b0();
        iVar8 = iVar8 + 1;
        piVar10[2] = iVar3;
        iVar13 = iVar13 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar8 < 0x100);
    }
    uVar4 = (uint)DAT_101293d6;
    (&DAT_100e8360)[iVar13 * 4] = 0xffffffff;
    (&DAT_100e8364)[iVar13 * 4] = 0xffffffff;
    (&DAT_100e8368)[iVar13 * 4] = 0xffffffff;
    (&DAT_100e836c)[iVar13 * 4] = 0xffffffff;
    iVar13 = 0;
    iVar8 = uVar4 - 1;
    if (iVar8 < 0x100) {
      piVar10 = &DAT_100e7354;
      do {
        piVar10[-1] = iVar13;
        *piVar10 = iVar8;
        FUN_10022860();
        iVar3 = FUN_100226b0();
        piVar10[1] = iVar3;
        FUN_10022860();
        iVar3 = FUN_100226b0();
        iVar8 = iVar8 + 1;
        piVar10[2] = iVar3;
        iVar13 = iVar13 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar8 < 0x100);
    }
    (&DAT_100e7350)[iVar13 * 4] = 0xffffffff;
    (&DAT_100e7354)[iVar13 * 4] = 0xffffffff;
    (&DAT_100e7358)[iVar13 * 4] = 0xffffffff;
    (&DAT_100e735c)[iVar13 * 4] = 0xffffffff;
    switch(*(undefined2 *)(param_3 + 7)) {
    case 8:
      DAT_102cb6b4 = (code *)&LAB_1000f020;
      break;
    default:
      goto switchD_1001193a_caseD_9;
    case 0x10:
      DAT_102cb6b4 = (code *)&LAB_1000f310;
      break;
    case 0x18:
      DAT_102cb6b4 = FUN_1000f630;
      break;
    case 0x30:
      DAT_102cb6b4 = FUN_1000fc40;
    }
  }
  if (param_2 == (void *)0x0) {
    puVar11 = param_3;
    puVar15 = &DAT_101490b8;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
    }
    _DAT_101490c4 = 0;
    DAT_101490c8 = 0;
    if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
      DAT_101490c0 = DAT_101490c0 + DAT_100e937c;
      DAT_101490c8 = DAT_100e9384;
    }
    uVar4 = (uint)DAT_102cb6ba;
    if (DAT_101490c0 < DAT_102cb6ba) {
      uVar4 = DAT_101490c0;
    }
    iVar8 = (DAT_101490c0 - uVar4) + DAT_101490c8;
    puVar11 = &DAT_101490b8;
    puVar15 = param_1;
    for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar15 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
    }
    iVar8 = iVar8 - (DAT_100e939c + DAT_100e93a4);
    param_1[4] = DAT_100e939c + DAT_100e93a4;
    param_1[2] = iVar8;
    if ((*(byte *)((int)param_3 + 0x1e) & 2) != 0) {
      param_1[2] = iVar8 + uVar4;
      return 0;
    }
  }
  else {
    if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
      param_3[4] = DAT_100e937c + DAT_100e9384;
    }
    else {
      param_3[4] = 0;
    }
    puVar11 = param_3;
    puVar15 = &DAT_101490b8;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
    }
    _DAT_101490c4 = 0;
    DAT_101490c8 = 0;
    if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
      DAT_101490c0 = DAT_101490c0 + DAT_100e937c;
      DAT_101490c8 = DAT_100e9384;
    }
    if (DAT_102cb67c != (void *)0x0) {
switchD_1001193a_caseD_9:
      return 0xf1;
    }
    pvVar5 = _malloc((DAT_101490c0 + 10) * DAT_101490bc);
    if (pvVar5 == (void *)0x0) {
      DAT_102cb67c = pvVar5;
      return 0xe0;
    }
    DAT_102cb67c = pvVar5;
    if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
      _memcpy(pvVar5,DAT_102cb680,DAT_100e9378 * DAT_100e937c);
      _memcpy((void *)(DAT_100e9378 * DAT_100e937c + (int)pvVar5),param_4,param_3[2] * param_3[1]);
    }
    else {
      _memcpy(pvVar5,param_4,param_3[2] * param_3[1]);
    }
    iVar8 = DAT_100e93a4;
    puVar12 = (uint *)&DAT_101490b8;
    puVar16 = local_84;
    for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    uVar4 = (uint)DAT_102cb6ba;
    local_84[2] = uVar4;
    if (DAT_101490c0 < uVar4) {
      local_84[2] = DAT_101490c0;
    }
    uVar9 = (uint)DAT_102cb6b8;
    uVar6 = (DAT_101490c0 - local_84[2]) + DAT_101490c8;
    piVar10 = &DAT_101490b8;
    piVar14 = local_44;
    for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
      *piVar14 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar14 = piVar14 + 1;
    }
    local_74 = uVar6;
    uVar7 = uVar9;
    if (uVar6 < local_34 + uVar9) {
      uVar7 = uVar6 - local_34;
    }
    local_14 = local_34 + uVar7;
    puVar12 = local_84;
    puVar16 = local_64;
    for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    local_54 = uVar6 - uVar9;
    if ((int)(uVar6 - uVar9) < DAT_101490c8) {
      local_54 = DAT_101490c8;
    }
    puVar11 = &DAT_101490b8;
    puVar15 = param_1;
    for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar15 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
    }
    iVar13 = uVar6 - (DAT_100e939c + iVar8);
    iVar3 = uVar6 - local_54;
    param_1[4] = DAT_100e939c + iVar8;
    param_1[2] = iVar13;
    local_64[2] = iVar3;
    if ((((*(byte *)((int)param_3 + 0x1e) & 2) != 0) &&
        (param_1[2] = iVar13 + local_84[2], (*(byte *)((int)param_3 + 0x1e) & 2) != 0)) &&
       (DAT_102cb680 != (void *)0x0)) {
      _free(DAT_102cb680);
      DAT_102cb680 = (void *)0x0;
    }
    pvVar5 = DAT_102cb680;
    puVar12 = local_64;
    puVar16 = &DAT_100e9374;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    DAT_100e937c = iVar3 + local_84[2];
    _DAT_100e9390 = _DAT_100e9390 & 0xfffeffff;
    if ((*(byte *)((int)param_3 + 0x1e) & 2) != 0) {
      DAT_100e9384 = DAT_101490c0 + DAT_101490c8;
      DAT_100e937c = 0;
    }
    if ((((byte)*(ushort *)((int)param_3 + 0x1e) & 3) != 3) &&
       ((*(ushort *)((int)param_3 + 0x1e) & 1) != 0)) {
      if (pvVar5 != (void *)0x0) {
        _free(pvVar5);
      }
      DAT_102cb680 = _malloc((uVar9 + 10 + uVar4) * DAT_100e9378);
      if (DAT_102cb680 == (void *)0x0) {
        return 0xe0;
      }
    }
    pvVar5 = DAT_102cb67c;
    DAT_100e9370 = param_1;
    _DAT_100e734c = param_2;
    _memcpy(param_2,(void *)((param_1[4] - DAT_101490c8) * param_1[1] + (int)DAT_102cb67c),
            param_1[2] * param_1[1]);
    if (DAT_102cb680 != (void *)0x0) {
      _memcpy(DAT_102cb680,(void *)((local_54 - DAT_101490c8) * local_44[1] + (int)pvVar5),
              DAT_100e9378 * DAT_100e937c);
    }
    uVar4 = local_14;
    if ((int)(DAT_102cb6be + 1 + (uint)DAT_102cb6bc) <= DAT_101490b8) {
      for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
        (*DAT_102cb6b4)();
        pvVar5 = DAT_102cb67c;
      }
    }
    _free(pvVar5);
    DAT_102cb67c = (void *)0x0;
    puVar11 = &DAT_100e9394;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *param_1;
      param_1 = param_1 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10011e30 @ 10011e30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10011e30(undefined4 *param_1,void *param_2,undefined4 *param_3,void *param_4)

{
  bool bVar1;
  double dVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  ushort local_74;
  uint local_64 [4];
  uint local_54;
  uint local_44 [4];
  int local_34;
  uint local_14;
  
  dVar2 = _DAT_101293f0;
  if ((*(byte *)((int)param_3 + 0x1e) & 1) != 0) {
    bVar1 = 1.0 <= _DAT_101293f0;
    puVar10 = param_3;
    puVar12 = &DAT_100e9394;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    DAT_100e93a4 = 0;
    DAT_100e939c = 0;
    if (bVar1) {
      FUN_1000e550(dVar2);
    }
    else {
      FUN_1000e4f0(0x3ff0000000000000);
    }
    FUN_1000e5b0();
    FUN_1000e7a0();
    local_74 = (ushort)(int)ROUND(_DAT_101293f0);
    DAT_102cb6ac = local_74;
    DAT_102cb6ae = local_74;
    DAT_102cb6b0 = local_74;
    DAT_102cb6b2 = local_74;
    switch(*(undefined2 *)(param_3 + 7)) {
    case 8:
      DAT_102cb6a8 = (code *)&LAB_10010290;
      break;
    default:
      goto switchD_10011ef5_caseD_9;
    case 0x10:
      DAT_102cb6a8 = (code *)&LAB_10010670;
      break;
    case 0x18:
      DAT_102cb6a8 = FUN_10010a70;
      break;
    case 0x30:
      DAT_102cb6a8 = FUN_10010ff0;
    }
  }
  if (param_2 == (void *)0x0) {
    puVar10 = param_3;
    puVar12 = &DAT_101490b8;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    _DAT_101490c4 = 0;
    DAT_101490c8 = 0;
    if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
      DAT_101490c0 = DAT_101490c0 + DAT_100e937c;
      DAT_101490c8 = DAT_100e9384;
    }
    uVar9 = (uint)DAT_102cb6ae;
    if (DAT_101490c0 < DAT_102cb6ae) {
      uVar9 = DAT_101490c0;
    }
    iVar7 = ((DAT_101490c0 - uVar9) + DAT_101490c8) - (uint)DAT_102cb6ac;
    if (iVar7 < DAT_101490c8) {
      iVar7 = DAT_101490c8;
    }
    puVar10 = &DAT_101490b8;
    puVar12 = param_1;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    if ((*(byte *)((int)param_3 + 0x1e) & 2) == 0) {
      param_1[2] = iVar7 - DAT_101490c8;
      return 0;
    }
  }
  else {
    if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
      param_3[4] = DAT_100e937c + DAT_100e9384;
    }
    else {
      param_3[4] = 0;
    }
    puVar10 = param_3;
    puVar12 = &DAT_101490b8;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
      DAT_101490c8 = DAT_101490c8 - DAT_100e937c;
      DAT_101490c0 = DAT_101490c0 + DAT_100e937c;
    }
    if (DAT_102cb67c != (void *)0x0) {
switchD_10011ef5_caseD_9:
      return 0xf1;
    }
    pvVar3 = _malloc((DAT_101490c0 + 10) * DAT_101490bc);
    if (pvVar3 == (void *)0x0) {
      DAT_102cb67c = pvVar3;
      return 0xe0;
    }
    DAT_102cb67c = pvVar3;
    if ((*(byte *)((int)param_3 + 0x1e) & 1) == 0) {
      _memcpy(pvVar3,DAT_102cb680,DAT_100e9378 * DAT_100e937c);
      _memcpy((void *)(DAT_100e9378 * DAT_100e937c + (int)pvVar3),param_4,param_3[2] * param_3[1]);
    }
    else {
      _memcpy(pvVar3,param_4,param_3[2] * param_3[1]);
    }
    puVar11 = (uint *)&DAT_101490b8;
    puVar13 = local_64;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    uVar9 = (uint)DAT_102cb6ae;
    local_64[2] = uVar9;
    if (DAT_101490c0 < uVar9) {
      local_64[2] = DAT_101490c0;
    }
    uVar4 = (DAT_101490c0 - local_64[2]) + DAT_101490c8;
    uVar5 = (uint)DAT_102cb6ac;
    puVar11 = (uint *)&DAT_101490b8;
    puVar13 = local_44;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    local_54 = uVar4;
    uVar6 = uVar5;
    if (uVar4 < local_34 + uVar5) {
      uVar6 = uVar4 - local_34;
    }
    local_14 = local_34 + uVar6;
    puVar11 = local_64;
    puVar13 = local_44;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    local_34 = DAT_101490c8;
    if (DAT_101490c8 <= (int)(uVar4 - uVar5)) {
      local_34 = uVar4 - uVar5;
    }
    puVar10 = &DAT_101490b8;
    puVar12 = param_1;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    local_44[2] = uVar4 - local_34;
    if ((((*(byte *)((int)param_3 + 0x1e) & 2) != 0) ||
        (param_1[2] = local_34 - DAT_101490c8, (*(byte *)((int)param_3 + 0x1e) & 2) != 0)) &&
       (DAT_102cb680 != (void *)0x0)) {
      _free(DAT_102cb680);
      DAT_102cb680 = (void *)0x0;
    }
    pvVar3 = DAT_102cb680;
    puVar11 = local_44;
    puVar13 = &DAT_100e9374;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    DAT_100e937c = local_44[2] + local_64[2];
    if ((*(byte *)((int)param_3 + 0x1e) & 2) != 0) {
      DAT_100e9384 = DAT_101490c0 + DAT_101490c8;
      DAT_100e937c = 0;
    }
    if ((((byte)*(ushort *)((int)param_3 + 0x1e) & 3) != 3) &&
       ((*(ushort *)((int)param_3 + 0x1e) & 1) != 0)) {
      if (pvVar3 != (void *)0x0) {
        _free(pvVar3);
      }
      DAT_102cb680 = _malloc((uVar5 + 10 + uVar9) * DAT_100e9378);
      if (DAT_102cb680 == (void *)0x0) {
        return 0xe0;
      }
    }
    pvVar3 = DAT_102cb67c;
    DAT_100e9370 = param_1;
    _DAT_100e734c = param_2;
    _memcpy(param_2,DAT_102cb67c,param_1[1] * param_1[2]);
    if (DAT_102cb680 != (void *)0x0) {
      _memcpy(DAT_102cb680,(void *)(param_1[1] * param_1[2] + (int)pvVar3),
              DAT_100e9378 * DAT_100e937c);
    }
    uVar9 = local_14;
    if ((int)(DAT_102cb6b2 + 1 + (uint)DAT_102cb6b0) <= DAT_101490b8) {
      for (; uVar9 < uVar4; uVar9 = uVar9 + 1) {
        (*DAT_102cb6a8)();
        pvVar3 = DAT_102cb67c;
      }
    }
    _free(pvVar3);
    DAT_102cb67c = (void *)0x0;
    puVar10 = &DAT_100e9394;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *param_1;
      param_1 = param_1 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: Fare2Param @ 10012360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char Fare2Param(byte *param_1,uint param_2,ushort param_3,ushort param_4,undefined4 param_5,
               int param_6,undefined4 param_7,int param_8)

{
  double dVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte *pbVar6;
  int iVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  ushort *puVar13;
  int iVar14;
  ushort *puVar15;
  int local_8;
  short local_4;
  
                    /* 0x12360  8  Fare2Param */
  iVar14 = param_6;
  if (param_6 == 0) {
    return -0x30;
  }
  cVar5 = FUN_1000ec90(param_7,&param_6);
  if (cVar5 != '\0') {
    return cVar5;
  }
  iVar7 = *(int *)(param_6 + 0xc);
  cVar5 = FUN_1000ede0(*(undefined4 *)(param_6 + 8),param_5,&local_8);
  if (cVar5 != '\0') {
    return cVar5;
  }
  pbVar9 = (byte *)(*(int *)(local_8 + 0x1c) + iVar7 + iVar14);
  uVar11 = 8;
  pbVar6 = (byte *)&DAT_1002a2d4;
  pbVar10 = pbVar9;
  do {
    if (*(int *)pbVar10 != *(int *)pbVar6) goto LAB_1001242d;
    uVar11 = uVar11 - 4;
    pbVar6 = pbVar6 + 4;
    pbVar10 = pbVar10 + 4;
  } while (3 < uVar11);
  if (uVar11 == 0) {
LAB_1001248a:
    iVar7 = 0;
  }
  else {
LAB_1001242d:
    iVar14 = (uint)*pbVar10 - (uint)*pbVar6;
    if (iVar14 == 0) {
      if (uVar11 == 1) goto LAB_1001248a;
      iVar14 = (uint)pbVar10[1] - (uint)pbVar6[1];
      if (iVar14 == 0) {
        if (uVar11 == 2) goto LAB_1001248a;
        iVar14 = (uint)pbVar10[2] - (uint)pbVar6[2];
        if (iVar14 == 0) {
          if ((uVar11 == 3) || (iVar14 = (uint)pbVar10[3] - (uint)pbVar6[3], iVar14 == 0))
          goto LAB_1001248a;
        }
      }
    }
    iVar7 = 1;
    if (iVar14 < 1) {
      iVar7 = -1;
    }
  }
  if (iVar7 != 0) {
    return -0x28;
  }
  if (*(int *)(pbVar9 + 8) != 0x20001) {
    return -0x28;
  }
  if (*(int *)(pbVar9 + 0xc) != *(int *)(local_8 + 0x18)) {
    return -0x29;
  }
  pbVar10 = pbVar9 + *(int *)(pbVar9 + 0xc) + -0x10;
  uVar11 = 8;
  pbVar6 = pbVar9;
  pbVar12 = pbVar10;
  do {
    if (*(int *)pbVar12 != *(int *)pbVar6) goto LAB_1001253a;
    uVar11 = uVar11 - 4;
    pbVar6 = pbVar6 + 4;
    pbVar12 = pbVar12 + 4;
  } while (3 < uVar11);
  if (uVar11 == 0) {
LAB_10012597:
    iVar7 = 0;
  }
  else {
LAB_1001253a:
    iVar14 = (uint)*pbVar12 - (uint)*pbVar6;
    if (iVar14 == 0) {
      if (uVar11 == 1) goto LAB_10012597;
      iVar14 = (uint)pbVar12[1] - (uint)pbVar6[1];
      if (iVar14 == 0) {
        if (uVar11 == 2) goto LAB_10012597;
        iVar14 = (uint)pbVar12[2] - (uint)pbVar6[2];
        if (iVar14 == 0) {
          if ((uVar11 == 3) || (iVar14 = (uint)pbVar12[3] - (uint)pbVar6[3], iVar14 == 0))
          goto LAB_10012597;
        }
      }
    }
    iVar7 = 1;
    if (iVar14 < 1) {
      iVar7 = -1;
    }
  }
  if (iVar7 != 0) {
    return -0x28;
  }
  if (*(int *)(pbVar10 + 8) != -1) {
    return -0x28;
  }
  uVar11 = 4;
  pbVar6 = (byte *)&DAT_1002a2c0;
  pbVar10 = pbVar10 + 0xc;
  do {
    if (*(int *)pbVar10 != *(int *)pbVar6) goto LAB_100125e9;
    uVar11 = uVar11 - 4;
    pbVar6 = pbVar6 + 4;
    pbVar10 = pbVar10 + 4;
  } while (3 < uVar11);
  if (uVar11 == 0) {
LAB_10012646:
    iVar7 = 0;
  }
  else {
LAB_100125e9:
    iVar14 = (uint)*pbVar10 - (uint)*pbVar6;
    if (iVar14 == 0) {
      if (uVar11 == 1) goto LAB_10012646;
      iVar14 = (uint)pbVar10[1] - (uint)pbVar6[1];
      if (iVar14 == 0) {
        if (uVar11 == 2) goto LAB_10012646;
        iVar14 = (uint)pbVar10[2] - (uint)pbVar6[2];
        if (iVar14 == 0) {
          if ((uVar11 == 3) || (iVar14 = (uint)pbVar10[3] - (uint)pbVar6[3], iVar14 == 0))
          goto LAB_10012646;
        }
      }
    }
    iVar7 = 1;
    if (iVar14 < 1) {
      iVar7 = -1;
    }
  }
  if (iVar7 != 0) {
    return -0x28;
  }
  iVar7 = -1;
  iVar14 = 0;
  puVar8 = (ushort *)(pbVar9 + 0x30);
  if (0 < *(int *)(pbVar9 + 0x20)) {
    do {
      puVar13 = puVar8;
      if (*puVar13 == param_2) {
        iVar7 = iVar14;
      }
      iVar14 = iVar14 + 1;
      puVar8 = puVar13 + 8;
    } while (iVar14 < *(int *)(pbVar9 + 0x20));
    if (iVar7 != -1) {
      iVar14 = *(int *)(puVar13 + 8);
      uVar11 = 0xffffffff;
      if (0 < iVar14) {
        puVar8 = puVar13 + 0x10;
        do {
          puVar13 = puVar8;
          if (*puVar13 == (param_4 & 0xf000)) {
            if (param_8 == 0) {
              uVar11 = (uint)*param_1;
            }
            else {
              *param_1 = (byte)puVar13[1];
              uVar11 = (uint)(byte)puVar13[1];
            }
          }
          puVar8 = puVar13 + 8;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        if (uVar11 != 0xffffffff) {
          bVar2 = *param_1;
          if (bVar2 == 0) {
            if (param_8 != 0) {
              uVar4 = *(undefined4 *)(local_8 + 0x10);
              param_1[0x40] = 1;
              param_1[0x41] = 0;
              param_1[0x3c] = 0;
              param_1[0x3d] = 0;
              param_1[0x3e] = 0;
              param_1[0x3f] = 0;
              *(undefined4 *)(param_1 + 0x38) = uVar4;
              return '\0';
            }
LAB_10012d82:
            uVar4 = *(undefined4 *)(param_1 + 0x38);
            *(char *)(local_8 + 0x10) = (char)uVar4;
            *(char *)(local_8 + 0x11) = (char)((uint)uVar4 >> 8);
            *(char *)(local_8 + 0x12) = (char)((uint)uVar4 >> 0x10);
            *(char *)(local_8 + 0x13) = (char)((uint)uVar4 >> 0x18);
            return '\0';
          }
          if (bVar2 == 1) {
            iVar7 = 0;
            iVar14 = *(int *)puVar8;
            puVar8 = puVar13 + 0x10;
            puVar15 = puVar13 + 0x18;
            if (0 < iVar14) {
              do {
                if ((*puVar8 == param_2) && ((byte)puVar8[1] == param_3)) break;
                iVar7 = iVar7 + 1;
                puVar8 = puVar15 + 8;
                puVar15 = puVar15 + 0x10;
              } while (iVar7 < iVar14);
            }
            if (iVar7 != iVar14) {
              if (param_8 == 0) {
                bVar2 = param_1[8];
                if ((((bVar2 < 0x21) && (param_1[9] < 0x21)) && (bVar2 <= param_1[9])) &&
                   ((((*(ushort *)(param_1 + 10) < 0x2fe && (param_1[0xf] < 0x65)) &&
                     ((_DAT_1002a358 <= *(double *)(param_1 + 0x10) &&
                      ((*(double *)(param_1 + 0x10) <= _DAT_1002a3c0 &&
                       (_DAT_1002a3b8 <= *(double *)(param_1 + 0x20))))))) &&
                    (*(double *)(param_1 + 0x20) <= _DAT_1002a3b0)))) {
                  *(byte *)puVar15 = bVar2;
                  *(byte *)((int)puVar15 + 1) = param_1[9];
                  uVar3 = *(undefined2 *)(param_1 + 10);
                  *(byte *)(puVar15 + 1) = (byte)uVar3;
                  *(byte *)((int)puVar15 + 3) = (byte)((ushort)uVar3 >> 8);
                  *(byte *)(puVar15 + 2) = param_1[0xc];
                  *(byte *)(puVar15 + 3) = param_1[0xd];
                  *(byte *)((int)puVar15 + 7) = param_1[0xe];
                  *(byte *)((int)puVar15 + 5) = param_1[0xf];
                  local_4 = (short)(int)ROUND(*(double *)(param_1 + 0x10));
                  puVar15[4] = local_4 * 10;
                  *(byte *)(puVar15 + 5) = param_1[0x18];
                  uVar4 = *(undefined4 *)(param_1 + 0x38);
                  *(char *)(local_8 + 0x10) = (char)uVar4;
                  *(char *)(local_8 + 0x11) = (char)((uint)uVar4 >> 8);
                  *(char *)(local_8 + 0x13) = (char)((uint)uVar4 >> 0x18);
                  *(char *)(local_8 + 0x12) = (char)((uint)uVar4 >> 0x10);
                  dVar1 = *(double *)(param_1 + 0x20) * _DAT_1002a378;
                  *(byte *)((int)puVar13 + 0x15) = 10;
                  local_4._0_1_ = (byte)(int)ROUND(dVar1);
                  *(byte *)(puVar13 + 10) = (byte)local_4;
                  return '\0';
                }
                return -0x10;
              }
              param_1[8] = (byte)*puVar15;
              param_1[9] = *(byte *)((int)puVar15 + 1);
              *(ushort *)(param_1 + 10) = puVar15[1];
              param_1[0xc] = (byte)puVar15[2];
              param_1[0xd] = (byte)puVar15[3];
              param_1[0xe] = *(byte *)((int)puVar15 + 7);
              param_1[0xf] = *(byte *)((int)puVar15 + 5);
              *(double *)(param_1 + 0x10) = (double)puVar15[4] / _DAT_1002a378;
              param_1[0x18] = (byte)puVar15[5];
              if (*(byte *)((int)puVar13 + 0x15) == 0) {
                dVar1 = 0.0;
              }
              else {
                dVar1 = (double)(byte)puVar13[10] / (double)*(byte *)((int)puVar13 + 0x15);
              }
              *(double *)(param_1 + 0x20) = dVar1;
              if (((((param_1[8] < 0x21) && (param_1[9] < 0x21)) && (param_1[8] <= param_1[9])) &&
                  ((*(ushort *)(param_1 + 10) < 0x2fe && (param_1[0xf] < 0x65)))) &&
                 (((_DAT_1002a358 <= *(double *)(param_1 + 0x10) &&
                   ((*(double *)(param_1 + 0x10) <= _DAT_1002a3c0 &&
                    (_DAT_1002a3b8 <= *(double *)(param_1 + 0x20))))) &&
                  (*(double *)(param_1 + 0x20) <= _DAT_1002a3b0)))) {
                dVar1 = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x10) + _DAT_1002a398;
                uVar4 = *(undefined4 *)(local_8 + 0x10);
                param_1[0x3c] = 0;
                param_1[0x3d] = 0;
                param_1[0x3e] = 0;
                param_1[0x3f] = 0;
                *(undefined4 *)(param_1 + 0x38) = uVar4;
                local_4 = (short)(int)ROUND(dVar1);
                *(short *)(param_1 + 0x40) = local_4;
                return '\0';
              }
            }
          }
          else if (bVar2 == 2) {
            iVar14 = *(int *)puVar8;
            puVar8 = puVar13 + 0x10;
            puVar13 = puVar13 + 0x18;
            if (0 < iVar14) {
              do {
                iVar14 = iVar14 + -1;
                puVar8 = puVar13 + 8;
                puVar13 = puVar13 + 0x10;
              } while (iVar14 != 0);
            }
            iVar7 = 0;
            iVar14 = *(int *)puVar8;
            puVar13 = puVar8 + 0x10;
            if (0 < iVar14) {
              iVar7 = 0;
              do {
                puVar15 = puVar13;
                if ((puVar8[8] == param_2) && (puVar13 = puVar15, (byte)puVar8[9] == param_3))
                break;
                iVar7 = iVar7 + 1;
                puVar13 = puVar15 + 0x10;
                puVar8 = puVar15;
              } while (iVar7 < iVar14);
            }
            if (iVar7 != iVar14) {
              if (param_8 == 0) {
                if ((((*(double *)(param_1 + 0x28) <= _DAT_1002a3c0) &&
                     (param_1[0x31] <= param_1[0x30])) &&
                    ((param_1[0x32] <= param_1[0x31] &&
                     (((param_1[0x33] < 0x65 && (param_1[0x35] <= param_1[0x34])) &&
                      (param_1[0x36] <= param_1[0x35])))))) && (param_1[0x37] < 0x65)) {
                  dVar1 = *(double *)(param_1 + 0x28) * _DAT_1002a378;
                  *(byte *)puVar13 = (byte)(int)ROUND(dVar1);
                  *(byte *)((int)puVar13 + 1) = (byte)((uint)(int)ROUND(dVar1) >> 8);
                  *(byte *)(puVar13 + 2) = param_1[0x30];
                  *(byte *)((int)puVar13 + 5) = param_1[0x31];
                  *(byte *)(puVar13 + 3) = param_1[0x32];
                  *(byte *)((int)puVar13 + 7) = param_1[0x33];
                  *(byte *)(puVar13 + 5) = param_1[0x34];
                  *(byte *)((int)puVar13 + 0xb) = param_1[0x35];
                  *(byte *)(puVar13 + 6) = param_1[0x36];
                  *(byte *)((int)puVar13 + 0xd) = param_1[0x37];
                  goto LAB_10012d82;
                }
              }
              else {
                *(double *)(param_1 + 0x28) = (double)*puVar13 / _DAT_1002a378;
                dVar1 = _DAT_1002a3c0;
                param_1[0x30] = (byte)puVar13[2];
                param_1[0x31] = *(byte *)((int)puVar13 + 5);
                param_1[0x32] = (byte)puVar13[3];
                param_1[0x33] = *(byte *)((int)puVar13 + 7);
                param_1[0x34] = (byte)puVar13[5];
                param_1[0x35] = *(byte *)((int)puVar13 + 0xb);
                param_1[0x36] = (byte)puVar13[6];
                bVar2 = *(byte *)((int)puVar13 + 0xd);
                param_1[0x37] = bVar2;
                if (((((*(double *)(param_1 + 0x28) <= dVar1) && (param_1[0x31] <= param_1[0x30]))
                     && (param_1[0x32] <= param_1[0x31])) &&
                    ((param_1[0x33] < 0x65 && (param_1[0x35] <= param_1[0x34])))) &&
                   ((param_1[0x36] <= param_1[0x35] && (bVar2 < 0x65)))) {
                  dVar1 = *(double *)(param_1 + 0x28);
                  uVar4 = *(undefined4 *)(local_8 + 0x10);
                  param_1[0x3c] = 0;
                  param_1[0x3d] = 0;
                  param_1[0x3e] = 0;
                  param_1[0x3f] = 0;
                  *(undefined4 *)(param_1 + 0x38) = uVar4;
                  local_4 = (short)(int)ROUND(dVar1);
                  *(short *)(param_1 + 0x40) = local_4 * 2 + 1;
                  return '\0';
                }
              }
            }
          }
          return -0x28;
        }
      }
      return '0';
    }
  }
  return '\x15';
}



/**************************************************/

/* Function: Fare2Execute @ 10012de0 */

uint Fare2Execute(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined3 uVar3;
  uint uVar2;
  bool bVar4;
  
                    /* 0x12de0  7  Fare2Execute */
  if (DAT_102cb690 == 0) {
    FUN_1000efd0();
    DAT_102cb690 = 1;
  }
  iVar1 = *param_3;
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if (iVar1 == 0) {
    return 0x10;
  }
  if ((uint)param_3[1] < (uint)(*(ushort *)(param_3 + 7) >> 3) * iVar1) {
    return CONCAT31(uVar3,0x11);
  }
  if (param_3[2] != 0) {
    if (param_3[3] != 0) {
      return CONCAT31(uVar3,0x13);
    }
    if (param_3[4] == -1) {
      if (param_3[5] == param_3[6]) {
        switch(*(ushort *)(param_3 + 7)) {
        case 8:
        case 0x10:
        case 0x18:
        case 0x30:
          goto switchD_10012e7f_caseD_8;
        default:
          return 0x18;
        }
      }
      return CONCAT31(uVar3,0x17);
    }
    return CONCAT31(uVar3,0x14);
  }
  return CONCAT31(uVar3,0x12);
switchD_10012e7f_caseD_8:
  if ((*(ushort *)((int)param_3 + 0x1e) & 0xfffc) != 0) {
    return 0x19;
  }
  if (2 < (ushort)param_5) {
    return 0x20;
  }
  uVar2 = param_6 & 0xf000;
  if (uVar2 < 0x2001) {
    if ((uVar2 == 0x2000) || (uVar2 == 0)) goto LAB_10012ee5;
    bVar4 = uVar2 == 0x1000;
  }
  else {
    if (uVar2 == 0x3000) goto LAB_10012ee5;
    bVar4 = uVar2 == 0xf000;
  }
  if (!bVar4) {
    return CONCAT31((int3)(uVar2 >> 8),0x30);
  }
LAB_10012ee5:
  if (param_8 == 0) {
    return 0xd0;
  }
  if (((*(ushort *)((int)param_3 + 0x1e) & 1) != 0) &&
     (uVar2 = Fare2Param(&DAT_101293c8,param_3[5],param_5,param_6,param_7,param_8,param_9,1),
     (char)uVar2 != '\0')) {
    return uVar2;
  }
  uVar2 = (uint)DAT_101293c8;
  if (uVar2 == 0) {
    uVar2 = FUN_100115a0(param_3,param_4);
  }
  else {
    if (uVar2 == 1) {
      uVar2 = FUN_10011650(param_1,param_2,param_3,param_4);
      return uVar2 & 0xffffff00;
    }
    uVar2 = uVar2 - 2;
    if (uVar2 == 0) {
      uVar2 = FUN_10011e30(param_1,param_2,param_3,param_4);
      return uVar2 & 0xffffff00;
    }
  }
  return uVar2 & 0xffffff00;
}



/**************************************************/

/* Function: Fare2Cancel @ 10012fd0 */

uint Fare2Cancel(void)

{
  uint extraout_EAX;
  uint uVar1;
  
                    /* 0x12fd0  6  Fare2Cancel */
  uVar1 = 0;
  if (DAT_102cb680 != (void *)0x0) {
    _free(DAT_102cb680);
    DAT_102cb680 = (void *)0x0;
    uVar1 = extraout_EAX;
  }
  return uVar1 & 0xffffff00;
}



/**************************************************/

/* Function: Fare2BandHeight @ 10012ff0 */

char Fare2BandHeight(uint *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                    undefined4 param_6,int param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_50 [64];
  ushort local_10;
  
                    /* 0x12ff0  5  Fare2BandHeight */
  if (param_2 != param_3) {
    return '\x17';
  }
  if (2 < (ushort)param_4) {
    return ' ';
  }
  uVar2 = param_5 & 0xf000;
  if (uVar2 < 0x2001) {
    if ((uVar2 == 0x2000) || (uVar2 == 0)) goto LAB_10013050;
    bVar3 = uVar2 == 0x1000;
  }
  else {
    if (uVar2 == 0x3000) goto LAB_10013050;
    bVar3 = uVar2 == 0xf000;
  }
  if (!bVar3) {
    return '0';
  }
LAB_10013050:
  if (param_7 == 0) {
    return -0x30;
  }
  cVar1 = Fare2Param(local_50,param_2,param_4,param_5,param_6,param_7,param_8,1);
  if (cVar1 == '\0') {
    *param_1 = (uint)local_10;
    cVar1 = '\0';
  }
  return cVar1;
}



/**************************************************/

/* Function: FUN_10013090 @ 10013090 */

void FUN_10013090(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar5 = 0;
  piVar1 = &DAT_101df7e0;
  do {
    iVar2 = 0;
    iVar3 = iVar4;
    iVar6 = iVar5;
    do {
      iVar7 = iVar3;
      if (iVar4 <= iVar2) {
        iVar7 = iVar6;
      }
      *piVar1 = iVar7;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar2 < 0x100);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -1;
  } while ((int)piVar1 < 0x1021f7e0);
  return;
}



/**************************************************/

/* Function: FUN_100130e0 @ 100130e0 */

undefined4 FUN_100130e0(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 *unaff_EDI;
  
  unaff_EDI[2] = param_1 + 0x20;
  unaff_EDI[4] = param_1 + 0x20;
  *unaff_EDI = param_1;
  unaff_EDI[1] = param_1 + 0x10;
  uVar7 = 8;
  pbVar4 = (byte *)&DAT_1002a29c;
  pbVar6 = param_1;
  do {
    if (*(int *)pbVar6 != *(int *)pbVar4) goto LAB_10013120;
    uVar7 = uVar7 - 4;
    pbVar4 = pbVar4 + 4;
    pbVar6 = pbVar6 + 4;
  } while (3 < uVar7);
  if (uVar7 == 0) {
LAB_10013185:
    iVar5 = 0;
  }
  else {
LAB_10013120:
    iVar8 = (uint)*pbVar6 - (uint)*pbVar4;
    if (iVar8 == 0) {
      if (uVar7 == 1) goto LAB_10013185;
      iVar8 = (uint)pbVar6[1] - (uint)pbVar4[1];
      if (iVar8 == 0) {
        if (uVar7 == 2) goto LAB_10013185;
        iVar8 = (uint)pbVar6[2] - (uint)pbVar4[2];
        if (iVar8 == 0) {
          if ((uVar7 == 3) || (iVar8 = (uint)pbVar6[3] - (uint)pbVar4[3], iVar8 == 0))
          goto LAB_10013185;
        }
      }
    }
    iVar5 = 1;
    if (iVar8 < 1) {
      iVar5 = -1;
    }
  }
  if ((iVar5 == 0) && (iVar5 = 0, *(int *)(param_1 + 8) == 0x10000)) {
    if (*(int *)(param_1 + 0xc) == param_2) {
      bVar1 = param_1[0x11];
      bVar2 = param_1[0x10];
      bVar3 = param_1[0x13];
      unaff_EDI[5] = 0;
      unaff_EDI[3] = CONCAT31(CONCAT21(CONCAT11(bVar3,param_1[0x12]),bVar1),bVar2);
      return 0;
    }
    return 0xd2;
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),0xd1);
}



/**************************************************/

/* Function: FUN_10013200 @ 10013200 */

uint FUN_10013200(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  
  iVar2 = 0;
  piVar1 = *(int **)(unaff_ESI + 8);
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(int **)(unaff_ESI + 0x10) = piVar1;
  piVar3 = piVar1;
  if (0 < *(int *)(unaff_ESI + 0xc)) {
    do {
      if ((*piVar3 == 0x10a00) && ((short)piVar3[1] == 0)) {
        *(int *)(unaff_ESI + 0x14) = iVar2;
        *(int **)(unaff_ESI + 0x10) = piVar1 + iVar2 * 4;
        return (uint)(piVar1 + iVar2 * 4) & 0xffffff00;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar2 < *(int *)(unaff_ESI + 0xc));
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),0xd3);
}



/**************************************************/

/* Function: FUN_10013270 @ 10013270 */

undefined4 FUN_10013270(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int *in_EAX;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  
  piVar4 = (int *)in_EAX[4];
  pbVar1 = (byte *)(piVar4[3] + *in_EAX);
  param_1[1] = (int)(pbVar1 + 0x10);
  param_1[2] = (int)(pbVar1 + 0x20);
  param_1[4] = (int)(pbVar1 + 0x20);
  *param_1 = (int)pbVar1;
  uVar8 = 8;
  pbVar5 = (byte *)&DAT_1002a2a8;
  pbVar7 = pbVar1;
  do {
    if (*(int *)pbVar7 != *(int *)pbVar5) goto LAB_100132d8;
    uVar8 = uVar8 - 4;
    pbVar5 = pbVar5 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar8);
  if (uVar8 == 0) {
LAB_1001333d:
    iVar6 = 0;
  }
  else {
LAB_100132d8:
    iVar9 = (uint)*pbVar7 - (uint)*pbVar5;
    if (iVar9 == 0) {
      if (uVar8 == 1) goto LAB_1001333d;
      iVar9 = (uint)pbVar7[1] - (uint)pbVar5[1];
      if (iVar9 == 0) {
        if (uVar8 == 2) goto LAB_1001333d;
        iVar9 = (uint)pbVar7[2] - (uint)pbVar5[2];
        if (iVar9 == 0) {
          if ((uVar8 == 3) || (iVar9 = (uint)pbVar7[3] - (uint)pbVar5[3], iVar9 == 0))
          goto LAB_1001333d;
        }
      }
    }
    iVar6 = 1;
    if (iVar9 < 1) {
      iVar6 = -1;
    }
  }
  if (iVar6 != 0) {
    return CONCAT31((int3)((uint)iVar6 >> 8),0xd5);
  }
  if (*(int *)(pbVar1 + 8) == *piVar4) {
    if (*(int *)(pbVar1 + 0xc) == piVar4[2]) {
      bVar2 = pbVar1[0x11];
      bVar3 = pbVar1[0x13];
      param_1[5] = 0;
      param_1[3] = CONCAT31(CONCAT21(CONCAT11(bVar3,pbVar1[0x12]),bVar2),pbVar1[0x10]);
      return 0;
    }
    return CONCAT31(*(undefined3 *)(pbVar1 + 0xd),0xd4);
  }
  return CONCAT31(*(undefined3 *)(pbVar1 + 9),0xd3);
}



/**************************************************/

/* Function: FUN_10013400 @ 10013400 */

undefined4 FUN_10013400(int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar2 = *(byte **)(param_1 + 8);
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(byte **)(param_1 + 0x10) = pbVar2;
  if (0 < *(int *)(param_1 + 0xc)) {
    pbVar6 = pbVar2 + 0x15;
    pbVar4 = pbVar2;
    do {
      uVar1 = 0x10;
      pbVar2 = param_2;
      pbVar3 = pbVar4;
      do {
        if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_10013458;
        uVar1 = uVar1 - 4;
        pbVar2 = pbVar2 + 4;
        pbVar3 = pbVar3 + 4;
      } while (3 < uVar1);
      if (uVar1 == 0) {
LAB_100134bd:
        pbVar2 = (byte *)0x0;
      }
      else {
LAB_10013458:
        iVar5 = (uint)*pbVar3 - (uint)*pbVar2;
        if (iVar5 == 0) {
          if (uVar1 == 1) goto LAB_100134bd;
          iVar5 = (uint)pbVar3[1] - (uint)pbVar2[1];
          if (iVar5 == 0) {
            if (uVar1 == 2) goto LAB_100134bd;
            iVar5 = (uint)pbVar3[2] - (uint)pbVar2[2];
            if (iVar5 == 0) {
              if ((uVar1 == 3) || (iVar5 = (uint)pbVar3[3] - (uint)pbVar2[3], iVar5 == 0))
              goto LAB_100134bd;
            }
          }
        }
        pbVar2 = (byte *)0x1;
        if (iVar5 < 1) {
          pbVar2 = (byte *)0xffffffff;
        }
      }
      if (((pbVar2 == (byte *)0x0) && (*(short *)(pbVar6 + 1) == 0)) &&
         (CONCAT11(*pbVar6,pbVar6[-1]) == 0)) {
        *(int *)(param_1 + 0x14) = iVar7;
        *(int *)(param_1 + 0x10) = iVar7 * 0x20 + *(int *)(param_1 + 8);
        return 0;
      }
      iVar7 = iVar7 + 1;
      pbVar4 = pbVar4 + 0x20;
      pbVar6 = pbVar6 + 0x20;
    } while (iVar7 < *(int *)(param_1 + 0xc));
  }
  return CONCAT31((int3)((uint)pbVar2 >> 8),0xd6);
}



/**************************************************/

/* Function: FUN_10013520 @ 10013520 */

undefined4 __fastcall FUN_10013520(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *in_EAX;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = param_1[4];
  pbVar6 = (byte *)(*(int *)(iVar11 + 0x1c) + *param_1);
  *in_EAX = (int)pbVar6;
  uVar8 = 8;
  pbVar4 = (byte *)&DAT_1002a2e0;
  pbVar7 = pbVar6;
  do {
    if (*(int *)pbVar7 != *(int *)pbVar4) goto LAB_10013578;
    uVar8 = uVar8 - 4;
    pbVar4 = pbVar4 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar8);
  if (uVar8 == 0) {
LAB_100135dd:
    iVar5 = 0;
  }
  else {
LAB_10013578:
    iVar10 = (uint)*pbVar7 - (uint)*pbVar4;
    if (iVar10 == 0) {
      if (uVar8 == 1) goto LAB_100135dd;
      iVar10 = (uint)pbVar7[1] - (uint)pbVar4[1];
      if (iVar10 == 0) {
        if (uVar8 == 2) goto LAB_100135dd;
        iVar10 = (uint)pbVar7[2] - (uint)pbVar4[2];
        if (iVar10 == 0) {
          if ((uVar8 == 3) || (iVar10 = (uint)pbVar7[3] - (uint)pbVar4[3], iVar10 == 0))
          goto LAB_100135dd;
        }
      }
    }
    iVar5 = 1;
    if (iVar10 < 1) {
      iVar5 = -1;
    }
  }
  if (iVar5 != 0) {
    return 0xd8;
  }
  if (*(int *)(pbVar6 + 8) != 0x20000) {
    return 0xd8;
  }
  if (*(int *)(pbVar6 + 0xc) != *(int *)(iVar11 + 0x18)) {
    return 0xd7;
  }
  pbVar7 = pbVar6 + *(int *)(pbVar6 + 0xc) + -0x10;
  in_EAX[9] = (int)pbVar7;
  uVar8 = 8;
  pbVar4 = pbVar6;
  pbVar9 = pbVar7;
  do {
    if (*(int *)pbVar9 != *(int *)pbVar4) goto LAB_10013698;
    uVar8 = uVar8 - 4;
    pbVar4 = pbVar4 + 4;
    pbVar9 = pbVar9 + 4;
  } while (3 < uVar8);
  if (uVar8 == 0) {
LAB_100136fd:
    iVar10 = 0;
  }
  else {
LAB_10013698:
    iVar11 = (uint)*pbVar9 - (uint)*pbVar4;
    if (iVar11 == 0) {
      if (uVar8 == 1) goto LAB_100136fd;
      iVar11 = (uint)pbVar9[1] - (uint)pbVar4[1];
      if (iVar11 == 0) {
        if (uVar8 == 2) goto LAB_100136fd;
        iVar11 = (uint)pbVar9[2] - (uint)pbVar4[2];
        if (iVar11 == 0) {
          if ((uVar8 == 3) || (iVar11 = (uint)pbVar9[3] - (uint)pbVar4[3], iVar11 == 0))
          goto LAB_100136fd;
        }
      }
    }
    iVar10 = 1;
    if (iVar11 < 1) {
      iVar10 = -1;
    }
  }
  if (iVar10 != 0) {
    return 0xd8;
  }
  if (*(int *)(pbVar7 + 8) != -1) {
    return 0xd8;
  }
  uVar8 = 4;
  pbVar4 = (byte *)&DAT_1002a2c0;
  pbVar7 = pbVar7 + 0xc;
  do {
    if (*(int *)pbVar7 != *(int *)pbVar4) goto LAB_1001374f;
    uVar8 = uVar8 - 4;
    pbVar4 = pbVar4 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar8);
  if (uVar8 == 0) {
LAB_100137ac:
    iVar10 = 0;
  }
  else {
LAB_1001374f:
    iVar11 = (uint)*pbVar7 - (uint)*pbVar4;
    if (iVar11 == 0) {
      if (uVar8 == 1) goto LAB_100137ac;
      iVar11 = (uint)pbVar7[1] - (uint)pbVar4[1];
      if (iVar11 == 0) {
        if (uVar8 == 2) goto LAB_100137ac;
        iVar11 = (uint)pbVar7[2] - (uint)pbVar4[2];
        if (iVar11 == 0) {
          if ((uVar8 == 3) || (iVar11 = (uint)pbVar7[3] - (uint)pbVar4[3], iVar11 == 0))
          goto LAB_100137ac;
        }
      }
    }
    iVar10 = 1;
    if (iVar11 < 1) {
      iVar10 = -1;
    }
  }
  if (iVar10 != 0) {
    return 0xd8;
  }
  bVar1 = pbVar6[0x21];
  bVar2 = pbVar6[0x23];
  pbVar7 = pbVar6 + 0x30;
  in_EAX[1] = (int)(pbVar6 + 0x20);
  in_EAX[2] = (int)pbVar7;
  in_EAX[0xe] = (int)pbVar7;
  in_EAX[0x12] = 0;
  bVar3 = pbVar6[0x22];
  in_EAX[0x13] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x15] = 0;
  iVar11 = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar3),bVar1),pbVar6[0x20]);
  in_EAX[10] = iVar11;
  iVar11 = iVar11 * 0x10;
  bVar1 = pbVar7[iVar11 + 3];
  bVar2 = pbVar7[iVar11 + 1];
  pbVar7 = pbVar7 + iVar11;
  pbVar6 = pbVar7 + 0x10;
  in_EAX[3] = (int)pbVar7;
  bVar3 = pbVar7[2];
  in_EAX[4] = (int)pbVar6;
  in_EAX[0xf] = (int)pbVar6;
  iVar11 = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar3),bVar2),*pbVar7);
  in_EAX[0xb] = iVar11;
  iVar11 = iVar11 * 0x10;
  bVar1 = pbVar6[iVar11 + 3];
  bVar2 = pbVar6[iVar11 + 1];
  pbVar6 = pbVar6 + iVar11;
  pbVar7 = pbVar6 + 0x10;
  in_EAX[5] = (int)pbVar6;
  bVar3 = pbVar6[2];
  in_EAX[6] = (int)pbVar7;
  in_EAX[0x10] = (int)pbVar7;
  iVar11 = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar3),bVar2),*pbVar6);
  in_EAX[0xc] = iVar11;
  pbVar7 = pbVar7 + iVar11 * 0x20;
  bVar1 = pbVar7[1];
  in_EAX[8] = (int)(pbVar7 + 0x10);
  in_EAX[0x11] = (int)(pbVar7 + 0x10);
  bVar2 = pbVar7[3];
  in_EAX[7] = (int)pbVar7;
  in_EAX[0xd] = CONCAT31(CONCAT21(CONCAT11(bVar2,pbVar7[2]),bVar1),*pbVar7);
  return 0;
}



/**************************************************/

/* Function: FUN_10013890 @ 10013890 */

undefined4 FUN_10013890(uint param_1)

{
  ushort *puVar1;
  int in_EAX;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = *(ushort **)(in_EAX + 8);
  *(ushort **)(in_EAX + 0x38) = puVar1;
  *(undefined4 *)(in_EAX + 0x48) = 0;
  puVar2 = puVar1;
  if (0 < *(int *)(in_EAX + 0x28)) {
    do {
      if ((*puVar2 <= param_1) && (param_1 <= puVar2[2])) {
        *(int *)(in_EAX + 0x48) = iVar3;
        *(ushort **)(in_EAX + 0x38) = puVar1 + iVar3 * 8;
        return 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (iVar3 < *(int *)(in_EAX + 0x28));
  }
  return 0xd8;
}



/**************************************************/

/* Function: FUN_100138f0 @ 100138f0 */

undefined4 FUN_100138f0(ushort param_1)

{
  ushort *puVar1;
  int in_EAX;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = 0;
  puVar1 = *(ushort **)(in_EAX + 0x10);
  *(ushort **)(in_EAX + 0x3c) = puVar1;
  *(undefined4 *)(in_EAX + 0x4c) = 0;
  if (0 < *(int *)(in_EAX + 0x2c)) {
    puVar3 = puVar1;
    do {
      if ((param_1 & 0xf000) == *puVar3) {
        *(ushort **)(in_EAX + 0x3c) = puVar1 + iVar2 * 8;
        *(int *)(in_EAX + 0x4c) = iVar2;
        return 0;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (iVar2 < *(int *)(in_EAX + 0x2c));
  }
  return 0xd8;
}



/**************************************************/

/* Function: FUN_10013940 @ 10013940 */

uint FUN_10013940(ushort *param_1,int param_2,ushort param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int unaff_EDI;
  
  pbVar2 = *(byte **)(unaff_EDI + 0x20);
  iVar5 = 0;
  *(byte **)(unaff_EDI + 0x44) = pbVar2;
  *(undefined4 *)(unaff_EDI + 0x54) = 0;
  if (0 < *(int *)(unaff_EDI + 0x34)) {
    pbVar1 = pbVar2 + 7;
    pbVar4 = pbVar2;
    do {
      if (((ushort)*pbVar4 == *param_1) &&
         (*(short *)(pbVar1 + -5) == *(short *)(*(int *)(unaff_EDI + 0x3c) + 2))) {
        if (((*(uint *)(param_2 + 8) <=
              CONCAT31(CONCAT21(CONCAT11(*pbVar1,pbVar1[-1]),pbVar1[-2]),pbVar1[-3])) &&
            (pbVar1[1] == param_3)) && ((*param_1 != 1 || ((ushort)pbVar1[-6] == param_1[1])))) {
          uVar3 = iVar5 * 0x20 + *(int *)(unaff_EDI + 0x20);
          *(int *)(unaff_EDI + 0x54) = iVar5;
          *(uint *)(unaff_EDI + 0x44) = uVar3;
          return uVar3 & 0xffffff00;
        }
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 0x20;
      pbVar2 = pbVar1 + 0x20;
      pbVar1 = pbVar2;
    } while (iVar5 < *(int *)(unaff_EDI + 0x34));
  }
  return CONCAT31((int3)((uint)pbVar2 >> 8),0xd8);
}



/**************************************************/

/* Function: FUN_10013a10 @ 10013a10 */

undefined4 __fastcall FUN_10013a10(int param_1)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x40) = *(int *)(in_EAX + 0x18);
  *(undefined4 *)(in_EAX + 0x50) = 0;
  if (param_1 < *(int *)(in_EAX + 0x30)) {
    *(int *)(in_EAX + 0x40) = param_1 * 0x20 + *(int *)(in_EAX + 0x18);
    *(int *)(in_EAX + 0x50) = param_1;
    return 0;
  }
  return 0xd8;
}



/**************************************************/

/* Function: FUN_10013a40 @ 10013a40 */

void FUN_10013a40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar2 = -0x10;
  iVar3 = unaff_ESI + 0x10;
  do {
    iVar1 = -0x10;
    do {
      if ((iVar1 + 0x10U < 0x21) && (iVar2 + 0x10U < 0x21)) {
        *(undefined1 *)(iVar3 + iVar1) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x11);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x21;
  } while (iVar2 < 0x11);
  *(undefined2 *)(unaff_ESI + 0x446) = 0;
  return;
}



/**************************************************/

/* Function: FUN_10013a90 @ 10013a90 */

void FUN_10013a90(int param_1,double param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  *(undefined2 *)(param_1 + 0x446) = 0;
  iVar3 = -0x10;
  iVar1 = param_1 + 0x10;
  do {
    iVar2 = -0x10;
    do {
      if ((iVar2 + 0x10U < 0x21) && (iVar3 + 0x10U < 0x21)) {
        *(undefined1 *)(iVar2 + iVar1) = 0;
      }
      fVar4 = (float10)FUN_10022760();
      if (fVar4 < (float10)param_2 != (fVar4 == (float10)param_2)) {
        if (iVar2 == 0) {
          if (iVar3 == 0) goto LAB_10013b1c;
LAB_10013b08:
          if (iVar3 + 0x10U < 0x21) {
            *(undefined1 *)(iVar2 + iVar1) = 1;
          }
        }
        else if ((-0x11 < iVar2) && (iVar2 < 0x11)) goto LAB_10013b08;
        *(short *)(param_1 + 0x446) = *(short *)(param_1 + 0x446) + 1;
      }
LAB_10013b1c:
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x11);
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x21;
    if (0x10 < iVar3) {
      return;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_10013b40 @ 10013b40 */

void FUN_10013b40(int param_1,double param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  *(undefined2 *)(param_1 + 0x446) = 0;
  iVar2 = -0x10;
  iVar1 = param_1 + 0x10;
  do {
    iVar3 = -0x10;
    do {
      if ((iVar3 + 0x10U < 0x21) && (iVar2 + 0x10U < 0x21)) {
        *(undefined1 *)(iVar1 + iVar3) = 0;
      }
      fVar4 = (float10)FUN_10022760();
      if (fVar4 < (float10)param_2 != (fVar4 == (float10)param_2)) {
        if ((iVar3 + 0x10U < 0x21) && (iVar2 + 0x10U < 0x21)) {
          *(undefined1 *)(iVar1 + iVar3) = 1;
        }
        *(short *)(param_1 + 0x446) = *(short *)(param_1 + 0x446) + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x11);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x21;
  } while (iVar2 < 0x11);
  return;
}



/**************************************************/

/* Function: FUN_10013be0 @ 10013be0 */

void FUN_10013be0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = -0x10;
  *(undefined1 *)(in_EAX + 0x441) = 0;
  *(undefined1 *)(in_EAX + 0x442) = 0;
  *(undefined1 *)(in_EAX + 0x443) = 0;
  *(undefined1 *)(in_EAX + 0x444) = 0;
  iVar3 = 0x10;
  iVar5 = in_EAX + 0x10;
  do {
    iVar1 = -0x10;
    iVar4 = 0x10;
    do {
      if (((iVar1 + 0x10U < 0x21) && (iVar2 + 0x10U < 0x21)) && (*(char *)(iVar5 + iVar1) != '\0'))
      {
        if ((int)(uint)*(byte *)(in_EAX + 0x441) < iVar3) {
          *(char *)(in_EAX + 0x441) = -(char)iVar2;
        }
        if ((int)(uint)*(byte *)(in_EAX + 0x442) < iVar2) {
          *(char *)(in_EAX + 0x442) = (char)iVar2;
        }
        if ((int)(uint)*(byte *)(in_EAX + 0x443) < iVar4) {
          *(char *)(in_EAX + 0x443) = -(char)iVar1;
        }
        if ((int)(uint)*(byte *)(in_EAX + 0x444) < iVar1) {
          *(char *)(in_EAX + 0x444) = (char)iVar1;
        }
      }
      iVar4 = iVar4 + -1;
      iVar1 = iVar1 + 1;
    } while (-0x11 < iVar4);
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + 0x21;
  } while (-0x11 < iVar3);
  return;
}



/**************************************************/

/* Function: FUN_10013ca0 @ 10013ca0 */

/* WARNING: Removing unreachable block (ram,0x10013dad) */
/* WARNING: Removing unreachable block (ram,0x10013f44) */
/* WARNING: Removing unreachable block (ram,0x10013f56) */
/* WARNING: Removing unreachable block (ram,0x10013f64) */
/* WARNING: Removing unreachable block (ram,0x10013f68) */
/* WARNING: Removing unreachable block (ram,0x10013f5f) */
/* WARNING: Removing unreachable block (ram,0x10013f6c) */
/* WARNING: Removing unreachable block (ram,0x10013f9c) */
/* WARNING: Removing unreachable block (ram,0x10013f70) */
/* WARNING: Removing unreachable block (ram,0x10013fa3) */
/* WARNING: Removing unreachable block (ram,0x10013fb6) */

void __thiscall FUN_10013ca0(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_18;
  int local_14;
  int local_10;
  int *local_8;
  
  iVar6 = param_2 + 0x10;
  local_14 = 0;
  local_10 = 0;
  local_18 = 0;
  local_2c = -0x10;
  do {
    local_20 = (int *)(local_10 * 0x8c + 0x257d8 + param_2);
    local_24 = (int *)(local_14 * 0x8c + 0x4ab64 + param_2);
    local_28 = (int *)(local_18 * 0x8c + 0x44c + param_2);
    local_30 = -0x10;
    do {
      if (((local_30 + 0x10U < 0x21) && (local_2c + 0x10U < 0x21)) &&
         (*(char *)(local_30 + iVar6) != '\0')) {
        bVar1 = false;
        local_28[-1] = local_30;
        *local_28 = local_2c;
        if (((local_30 == 0x10) || (0x20 < local_30 + 0x11U)) ||
           (*(char *)(local_30 + 1 + iVar6) == '\0')) {
          bVar1 = true;
        }
        piVar2 = local_24;
        if (!bVar1) {
          piVar2 = local_20;
        }
        *piVar2 = local_2c;
        piVar2[-1] = local_30;
        local_8 = (int *)(param_1 + 0x20);
        iVar4 = 0;
        iVar7 = local_2c;
        piVar2 = local_28;
        do {
          piVar2 = piVar2 + 1;
          iVar3 = *(int *)(param_1 + 4);
          if (iVar7 < 0) {
            iVar8 = iVar7 + iVar3;
          }
          else {
            iVar8 = iVar7;
            if (iVar3 <= iVar7) {
              iVar8 = iVar7 - iVar3;
            }
          }
          if (iVar4 < iVar3) {
            iVar3 = (uint)*(ushort *)(param_1 + 0x12) * (uint)*(ushort *)(param_1 + 0x10);
            *piVar2 = (((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) * local_30 +
                      *(int *)(param_1 + 0x20 + iVar8 * 4)) - *local_8;
          }
          else {
            *piVar2 = -0x80000000;
          }
          local_8 = local_8 + 1;
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < 0x21);
        local_18 = local_18 + 1;
        local_28 = local_28 + 0x23;
        iVar4 = 0;
        local_8 = (int *)(param_1 + 0x20);
        iVar7 = local_2c;
        piVar2 = local_24;
        piVar5 = local_20;
        if (bVar1) {
          do {
            piVar2 = piVar2 + 1;
            iVar3 = *(int *)(param_1 + 4);
            if (iVar7 < 0) {
              iVar8 = iVar7 + iVar3;
            }
            else {
              iVar8 = iVar7;
              if (iVar3 <= iVar7) {
                iVar8 = iVar7 - iVar3;
              }
            }
            if (iVar4 < iVar3) {
              iVar3 = (uint)*(ushort *)(param_1 + 0x12) * (uint)*(ushort *)(param_1 + 0x10);
              *piVar2 = (((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) * local_30 +
                        *(int *)(param_1 + 0x20 + iVar8 * 4)) - *local_8;
            }
            else {
              *piVar2 = -0x80000000;
            }
            local_8 = local_8 + 1;
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar4 < 0x21);
          local_14 = local_14 + 1;
          local_24 = local_24 + 0x23;
        }
        else {
          do {
            piVar5 = piVar5 + 1;
            iVar3 = *(int *)(param_1 + 4);
            if (iVar7 < 0) {
              iVar8 = iVar7 + iVar3;
            }
            else {
              iVar8 = iVar7;
              if (iVar3 <= iVar7) {
                iVar8 = iVar7 - iVar3;
              }
            }
            if (iVar4 < iVar3) {
              iVar3 = (uint)*(ushort *)(param_1 + 0x12) * (uint)*(ushort *)(param_1 + 0x10);
              *piVar5 = (((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) * local_30 +
                        *(int *)(param_1 + 0x20 + iVar8 * 4)) - *local_8;
            }
            else {
              *piVar5 = -0x80000000;
            }
            local_8 = local_8 + 1;
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar4 < 0x21);
          local_10 = local_10 + 1;
          local_20 = local_20 + 0x23;
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 < 0x11);
    local_2c = local_2c + 1;
    iVar6 = iVar6 + 0x21;
  } while (local_2c < 0x11);
  iVar6 = local_18 * 0x8c + param_2;
  *(undefined4 *)(iVar6 + 0x448) = 0;
  *(undefined4 *)(iVar6 + 0x44c) = 0;
  *(undefined4 *)(iVar6 + 0x450) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x454) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x458) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x45c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x460) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x464) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x468) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x46c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x470) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x474) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x478) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x47c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x480) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x484) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x488) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x48c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x490) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x494) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x498) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x49c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4a0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4a4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4a8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ac) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4b0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4b4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4b8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4bc) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4c0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4c4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4c8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4cc) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4d0) = 0x80000000;
  iVar6 = local_14 * 0x8c + param_2;
  *(undefined4 *)(iVar6 + 0x4ab60) = 0;
  *(undefined4 *)(iVar6 + 0x4ab64) = 0;
  *(undefined4 *)(iVar6 + 0x4ab68) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab6c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab70) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab74) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab78) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab7c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab80) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab84) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab88) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab8c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab90) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab94) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab98) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4ab9c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4aba0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4aba4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4aba8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abac) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abb0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abb4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abb8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abbc) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abc0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abc4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abc8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abcc) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abd0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abd4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abd8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abdc) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abe0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abe4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x4abe8) = 0x80000000;
  iVar6 = local_10 * 0x8c + param_2;
  *(undefined4 *)(iVar6 + 0x257d4) = 0;
  *(undefined4 *)(iVar6 + 0x257d8) = 0;
  *(undefined4 *)(iVar6 + 0x257dc) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x257e0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x257e4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x257e8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x257ec) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x257f0) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x257f4) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x257f8) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x257fc) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25800) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25804) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25808) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x2580c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25810) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25814) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25818) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x2581c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25820) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25824) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25828) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x2582c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25830) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25834) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25838) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x2583c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25840) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25844) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25848) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x2584c) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25850) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25854) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x25858) = 0x80000000;
  *(undefined4 *)(iVar6 + 0x2585c) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6feec) = 0;
  *(undefined4 *)(param_2 + 0x6fef0) = 0;
  *(undefined4 *)(param_2 + 0x6fef4) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6fef8) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6fefc) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff00) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff04) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff08) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff0c) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff10) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff14) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff18) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff1c) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff20) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff24) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff28) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff2c) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff30) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff34) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff38) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff3c) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff40) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff44) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff48) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff4c) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff50) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff54) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff58) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff5c) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff60) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff64) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff68) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff6c) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff70) = 0x80000000;
  *(undefined4 *)(param_2 + 0x6ff74) = 0x80000000;
  return;
}



/**************************************************/

/* Function: FUN_10014380 @ 10014380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10014380(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  int local_8;
  undefined1 local_4;
  
  dVar4 = _DAT_1002a370;
  dVar3 = _DAT_1002a368;
  local_8 = 0;
  do {
    iVar5 = 1;
    pdVar6 = (double *)&DAT_1014a1c8;
    dVar2 = (double)local_8 / dVar4;
    do {
      if (dVar2 < *pdVar6 != (dVar2 == *pdVar6)) break;
      pdVar6 = pdVar6 + 2;
      iVar5 = iVar5 + 1;
    } while ((int)pdVar6 < 0x1014a208);
    dVar1 = *(double *)(iVar5 * 0x10 + 0x1014a1b0);
    iVar7 = local_8 + 1;
    local_4 = (undefined1)
              (int)ROUND((dVar1 - ((dVar2 - *(double *)(&DAT_1014a1a8 + iVar5 * 0x10)) *
                                  (dVar1 - (double)(&DAT_1014a1c0)[iVar5 * 2])) /
                                  ((double)(&DAT_1014a1b8)[iVar5 * 2] -
                                  *(double *)(&DAT_1014a1a8 + iVar5 * 0x10))) * dVar3);
    (&DAT_1014a208)[local_8] = local_4;
    local_8 = iVar7;
    if (0x2fd < iVar7) {
      return;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_10014440 @ 10014440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10014440(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = DAT_100e93b8;
  if ((void *)*param_1 != DAT_1014a194) {
    return 0x50;
  }
  if ((void *)param_1[1] == (void *)0x0) {
    return 0x51;
  }
  if (DAT_100e93b8 <= DAT_101df7dc) {
    return 0x52;
  }
  _memcpy((void *)param_1[1],(void *)*param_1,
          (uint)_DAT_100e93c6 * (uint)DAT_100e93c4 * DAT_100e93b4 >> 3);
  DAT_101df7dc = DAT_101df7dc + 1;
  DAT_101df7d8 = DAT_101df7d8 + 1;
  bVar2 = DAT_101df7d8 < uVar1;
  *(undefined2 *)(param_1 + 2) = 1;
  DAT_1014a194 = (void *)(-(uint)bVar2 & DAT_1014a108);
  *param_1 = (uint)DAT_1014a194;
  _DAT_1014a19c = param_1[2];
  _DAT_1014a198 = param_1[1];
  return 0;
}



/**************************************************/

/* Function: FUN_100144f0 @ 100144f0 */

void FUN_100144f0(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_42c;
  int local_428;
  int *local_424;
  int *local_41c;
  uint local_40c;
  int local_404 [256];
  uint local_4;
  
  uVar12 = (uint)DAT_1021fc26;
  iVar3 = FUN_100226b0();
  if (in_EAX < param_3) {
    local_428 = -in_EAX;
    local_42c = in_EAX;
    local_4 = uVar12;
    do {
      bVar2 = *param_1;
      uVar12 = (uint)bVar2;
      iVar5 = *(int *)(&DAT_1014a990 + DAT_1014a190 * 4);
      local_424 = (int *)(&DAT_1014a990 + DAT_1014a190 * 4);
      uVar9 = uVar12 * 100;
      local_40c = 100;
      if (iVar5 != -0x80000000) {
        local_41c = &DAT_1014a988;
        iVar7 = iVar5;
        do {
          iVar11 = *local_41c;
          if (((iVar11 + local_42c < 0) || (DAT_100e93b4 <= iVar11 + local_42c)) ||
             (DAT_100e93b8 <= (uint)(local_41c[1] + DAT_101df7dc))) {
            iVar7 = local_428;
            if ((-1 < local_42c + iVar11) && (iVar7 = iVar11, DAT_100e93b4 <= local_42c + iVar11)) {
              iVar7 = DAT_100e93b4 + -1 + local_428;
            }
            iVar11 = local_41c[1];
            if (DAT_101df7dc + iVar11 < 0) {
              iVar11 = -DAT_101df7dc;
            }
            else if ((int)DAT_100e93b8 <= DAT_101df7dc + iVar11) {
              iVar11 = (DAT_100e93b8 - DAT_101df7dc) + -1;
            }
            iVar13 = 0;
            iVar8 = 0;
            if (iVar5 != -0x80000000) {
              piVar6 = &DAT_1014a98c;
              piVar10 = (int *)(&DAT_1014a990 + DAT_1014a190 * 4);
              do {
                if ((piVar6[-1] == iVar7) && (*piVar6 == iVar11)) {
                  iVar13 = *(int *)(&DAT_1014a990 + (iVar8 * 0x23 + DAT_1014a190) * 4);
                  break;
                }
                piVar10 = piVar10 + 0x23;
                iVar8 = iVar8 + 1;
                piVar6 = piVar6 + 0x23;
              } while (*piVar10 != -0x80000000);
            }
            bVar1 = param_1[iVar13];
          }
          else {
            bVar1 = param_1[iVar7];
          }
          local_40c = local_40c +
                      (byte)(&DAT_1014a208)[(&DAT_101df7e0)[(uint)bVar1 + uVar12 * 0x100] * 3];
          uVar9 = uVar9 + (uint)(byte)(&DAT_1014a208)
                                      [(&DAT_101df7e0)[(uint)bVar1 + uVar12 * 0x100] * 3] *
                          (uint)bVar1;
          iVar7 = *(int *)((int)local_424 + 0x8c);
          local_424 = (int *)((int)local_424 + 0x8c);
          local_41c = local_41c + 0x23;
        } while (iVar7 != -0x80000000);
      }
      _memset(local_404,0,0x400);
      iVar5 = *(int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
      if (iVar5 != -0x80000000) {
        piVar10 = &DAT_1021fc28;
        iVar7 = iVar5;
        local_424 = (int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
        do {
          iVar11 = *piVar10;
          if (((local_42c + iVar11 < 0) || (DAT_100e93b4 <= local_42c + iVar11)) ||
             (DAT_100e93b8 <= (uint)(piVar10[1] + DAT_101df7dc))) {
            iVar7 = local_428;
            if ((-1 < local_42c + iVar11) && (iVar7 = iVar11, DAT_100e93b4 <= local_42c + iVar11)) {
              iVar7 = DAT_100e93b4 + -1 + local_428;
            }
            iVar11 = piVar10[1];
            if (DAT_101df7dc + iVar11 < 0) {
              iVar11 = -DAT_101df7dc;
            }
            else if ((int)DAT_100e93b8 <= DAT_101df7dc + iVar11) {
              iVar11 = (DAT_100e93b8 - DAT_101df7dc) + -1;
            }
            iVar13 = 0;
            iVar8 = 0;
            if (iVar5 != -0x80000000) {
              piVar4 = &DAT_1021fc2c;
              piVar6 = (int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
              do {
                if ((piVar4[-1] == iVar7) && (*piVar4 == iVar11)) {
                  iVar13 = *(int *)(&DAT_1021fc30 + (iVar8 * 0x23 + DAT_1014a190) * 4);
                  break;
                }
                piVar6 = piVar6 + 0x23;
                iVar8 = iVar8 + 1;
                piVar4 = piVar4 + 0x23;
              } while (*piVar6 != -0x80000000);
            }
            bVar1 = param_1[iVar13];
          }
          else {
            bVar1 = param_1[iVar7];
          }
          local_404[bVar1] = local_404[bVar1] + 1;
          local_424 = local_424 + 0x23;
          iVar7 = *local_424;
          piVar10 = piVar10 + 0x23;
        } while (iVar7 != -0x80000000);
      }
      iVar7 = 0;
      iVar5 = 0;
      if (uVar12 != 0) {
        do {
          iVar7 = iVar7 + local_404[iVar5];
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar12);
      }
      if ((iVar7 < iVar3) || ((int)((local_4 - local_404[uVar12]) - iVar7) < iVar3)) {
        bVar2 = (byte)(uVar9 / local_40c);
      }
      *param_2 = bVar2;
      param_1 = param_1 + 1;
      local_428 = local_428 + -1;
      local_42c = local_42c + 1;
      param_2 = param_2 + 1;
    } while (local_42c < param_3);
  }
  return;
}



/**************************************************/

/* Function: FUN_100148a0 @ 100148a0 */

void FUN_100148a0(byte *param_1,byte *param_2,int param_3)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int local_420;
  int local_41c;
  uint local_40c;
  int local_404 [256];
  uint local_4;
  
  uVar8 = (uint)DAT_1021fc26;
  iVar2 = FUN_100226b0();
  _memset(local_404,0,0x400);
  iVar6 = DAT_1014a190 * 4;
  iVar3 = *(int *)(&DAT_10244fbc + iVar6);
  puVar5 = &DAT_10244fbc + iVar6;
  local_4 = uVar8;
  while (iVar3 != -0x80000000) {
    local_404[param_1[iVar3]] = local_404[param_1[iVar3]] + 1;
    piVar10 = (int *)(puVar5 + 0x8c);
    puVar5 = puVar5 + 0x8c;
    iVar3 = *piVar10;
  }
  if (param_3 < in_EAX) {
    local_420 = in_EAX - param_3;
    do {
      puVar5 = &DAT_1026a348 + iVar6;
      iVar3 = *(int *)(&DAT_1026a348 + iVar6);
      while (iVar3 != -0x80000000) {
        local_404[param_1[iVar3]] = local_404[param_1[iVar3]] + 1;
        piVar10 = (int *)(puVar5 + 0x8c);
        puVar5 = puVar5 + 0x8c;
        iVar3 = *piVar10;
      }
      bVar7 = *param_1;
      uVar8 = (uint)bVar7;
      iVar9 = 0;
      iVar3 = 0;
      local_41c = 0;
      if (uVar8 != 0) {
        do {
          iVar9 = iVar9 + local_404[iVar3];
          iVar3 = iVar3 + 1;
          local_41c = iVar9;
        } while (iVar3 < (int)uVar8);
      }
      piVar10 = (int *)(&DAT_1014a990 + iVar6);
      uVar4 = uVar8 * 100;
      iVar3 = *piVar10;
      local_40c = 100;
      while (iVar3 != -0x80000000) {
        local_40c = local_40c +
                    (byte)(&DAT_1014a208)[(&DAT_101df7e0)[CONCAT11(bVar7,param_1[iVar3])] * 3];
        piVar1 = piVar10 + 0x23;
        piVar10 = piVar10 + 0x23;
        uVar4 = uVar4 + (uint)(byte)(&DAT_1014a208)
                                    [(&DAT_101df7e0)[CONCAT11(bVar7,param_1[iVar3])] * 3] *
                        (uint)param_1[iVar3];
        iVar3 = *piVar1;
      }
      if ((local_41c < iVar2) || ((int)((local_4 - local_404[uVar8]) - local_41c) < iVar2)) {
        bVar7 = (byte)(uVar4 / local_40c);
      }
      *param_2 = bVar7;
      iVar6 = DAT_1014a190 * 4;
      puVar5 = &DAT_1028f6d4 + iVar6;
      iVar3 = *(int *)(&DAT_1028f6d4 + iVar6);
      while (iVar3 != -0x80000000) {
        local_404[param_1[iVar3]] = local_404[param_1[iVar3]] + -1;
        piVar10 = (int *)(puVar5 + 0x8c);
        puVar5 = puVar5 + 0x8c;
        iVar3 = *piVar10;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      local_420 = local_420 + -1;
    } while (local_420 != 0);
  }
  return;
}



/**************************************************/

/* Function: FUN_10014aa0 @ 10014aa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10014aa0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = DAT_101df7dc;
  uVar5 = DAT_101df7d8;
  iVar2 = DAT_101df7bc;
  iVar1 = DAT_101df7b8;
  if (*param_1 != DAT_1014a194) {
    return 0x50;
  }
  iVar7 = param_1[1];
  if (iVar7 == 0) {
    return 0x51;
  }
  if (DAT_100e93b8 <= DAT_101df7dc) {
    return 0x52;
  }
  if ((DAT_101df7d8 < DAT_1014a521) && (DAT_101df7d8 < DAT_101df7d4 - 1U)) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  else {
    if ((DAT_101df7dc < DAT_101df7cc) || (DAT_101df7d0 <= DAT_101df7dc)) {
      FUN_100144f0((&DAT_1014a108)[DAT_1014a190],iVar7,DAT_101df7c4);
    }
    else {
      iVar6 = (&DAT_1014a108)[DAT_1014a190];
      FUN_100144f0(iVar6,iVar7,DAT_101df7bc);
      iVar3 = DAT_101df7c0;
      iVar7 = iVar7 + (iVar2 - iVar1);
      iVar6 = iVar6 + (iVar2 - iVar1);
      FUN_100148a0(iVar6,iVar7,iVar2);
      FUN_100144f0((iVar3 - iVar2) + iVar6,(iVar3 - iVar2) + iVar7,DAT_101df7c4);
      uVar4 = DAT_101df7dc;
      uVar5 = DAT_101df7d8;
    }
    DAT_101df7dc = uVar4 + 1;
    DAT_1014a190 = DAT_101df7dc % DAT_1014a0ec;
    *(undefined2 *)(param_1 + 2) = 1;
  }
  if (*param_1 != 0) {
    uVar5 = uVar5 + 1;
    DAT_1014a18c = uVar5 % DAT_1014a0ec;
    DAT_101df7d8 = uVar5;
  }
  if (uVar5 < DAT_100e93b8) {
    *param_1 = (&DAT_1014a108)[DAT_1014a18c];
  }
  else {
    *param_1 = 0;
  }
  _DAT_1014a198 = param_1[1];
  DAT_1014a194 = *param_1;
  _DAT_1014a19c = param_1[2];
  return 0;
}



/**************************************************/

/* Function: FUN_10014c20 @ 10014c20 */

void FUN_10014c20(ushort *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *local_434;
  int local_430;
  int local_42c;
  int *local_428;
  byte local_422;
  uint local_414;
  int local_404 [256];
  uint local_4;
  
  uVar12 = (uint)DAT_1021fc26;
  iVar4 = FUN_100226b0();
  if (in_EAX < param_3) {
    local_430 = -in_EAX;
    local_4 = uVar12;
    do {
      uVar3 = *param_1;
      iVar6 = *(int *)(&DAT_1014a990 + DAT_1014a190 * 4);
      local_434 = (int *)(&DAT_1014a990 + DAT_1014a190 * 4);
      uVar12 = (uint)uVar3 * 100;
      local_414 = 100;
      if (iVar6 != -0x80000000) {
        local_428 = &DAT_1014a988;
        iVar8 = iVar6;
        do {
          iVar11 = *local_428;
          if (((iVar11 + in_EAX < 0) || (DAT_100e93b4 <= iVar11 + in_EAX)) ||
             (DAT_100e93b8 <= (uint)(local_428[1] + DAT_101df7dc))) {
            local_42c = local_430;
            if ((-1 < iVar11 + in_EAX) && (local_42c = iVar11, DAT_100e93b4 <= iVar11 + in_EAX)) {
              local_42c = DAT_100e93b4 + -1 + local_430;
            }
            iVar8 = local_428[1];
            if (DAT_101df7dc + iVar8 < 0) {
              iVar8 = -DAT_101df7dc;
            }
            else if ((int)DAT_100e93b8 <= DAT_101df7dc + iVar8) {
              iVar8 = (DAT_100e93b8 - DAT_101df7dc) + -1;
            }
            iVar11 = 0;
            iVar13 = 0;
            if (iVar6 != -0x80000000) {
              piVar7 = &DAT_1014a98c;
              piVar10 = (int *)(&DAT_1014a990 + DAT_1014a190 * 4);
              do {
                if ((piVar7[-1] == local_42c) && (*piVar7 == iVar8)) {
                  iVar11 = *(int *)(&DAT_1014a990 + (iVar13 * 0x23 + DAT_1014a190) * 4);
                  break;
                }
                piVar10 = piVar10 + 0x23;
                iVar13 = iVar13 + 1;
                piVar7 = piVar7 + 0x23;
              } while (*piVar10 != -0x80000000);
            }
            uVar2 = *(ushort *)((int)param_1 + iVar11);
          }
          else {
            uVar2 = *(ushort *)(iVar8 + (int)param_1);
          }
          local_422 = (byte)(uVar3 >> 8);
          local_414 = local_414 +
                      (byte)(&DAT_1014a208)
                            [(&DAT_101df7e0)[(uint)(uVar2 >> 8) + (uint)local_422 * 0x100] * 3];
          uVar12 = uVar12 + (uint)uVar2 *
                            (uint)(byte)(&DAT_1014a208)
                                        [(&DAT_101df7e0)
                                         [(uint)(uVar2 >> 8) + (uint)local_422 * 0x100] * 3];
          local_434 = local_434 + 0x23;
          iVar8 = *local_434;
          local_428 = local_428 + 0x23;
        } while (iVar8 != -0x80000000);
      }
      _memset(local_404,0,0x400);
      iVar6 = *(int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
      if (iVar6 != -0x80000000) {
        piVar10 = &DAT_1021fc28;
        iVar8 = iVar6;
        local_434 = (int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
        do {
          iVar11 = *piVar10;
          if (((iVar11 + in_EAX < 0) || (DAT_100e93b4 <= iVar11 + in_EAX)) ||
             (DAT_100e93b8 <= (uint)(piVar10[1] + DAT_101df7dc))) {
            iVar8 = local_430;
            if ((-1 < in_EAX + iVar11) && (iVar8 = iVar11, DAT_100e93b4 <= in_EAX + iVar11)) {
              iVar8 = DAT_100e93b4 + -1 + local_430;
            }
            iVar11 = piVar10[1];
            if (DAT_101df7dc + iVar11 < 0) {
              iVar11 = -DAT_101df7dc;
            }
            else if ((int)DAT_100e93b8 <= DAT_101df7dc + iVar11) {
              iVar11 = (DAT_100e93b8 - DAT_101df7dc) + -1;
            }
            iVar13 = 0;
            iVar9 = 0;
            if (iVar6 != -0x80000000) {
              piVar5 = &DAT_1021fc2c;
              piVar7 = (int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
              do {
                if ((piVar5[-1] == iVar8) && (*piVar5 == iVar11)) {
                  iVar13 = *(int *)(&DAT_1021fc30 + (iVar9 * 0x23 + DAT_1014a190) * 4);
                  break;
                }
                piVar7 = piVar7 + 0x23;
                iVar9 = iVar9 + 1;
                piVar5 = piVar5 + 0x23;
              } while (*piVar7 != -0x80000000);
            }
            bVar1 = *(byte *)(iVar13 + 1 + (int)param_1);
          }
          else {
            bVar1 = *(byte *)(iVar8 + 1 + (int)param_1);
          }
          local_404[bVar1] = local_404[bVar1] + 1;
          local_434 = local_434 + 0x23;
          iVar8 = *local_434;
          piVar10 = piVar10 + 0x23;
        } while (iVar8 != -0x80000000);
      }
      uVar2 = uVar3 >> 8;
      iVar8 = 0;
      iVar6 = 0;
      if (uVar2 != 0) {
        do {
          iVar8 = iVar8 + local_404[iVar6];
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uint)uVar2);
      }
      if ((iVar8 < iVar4) || ((int)((local_4 - local_404[uVar2]) - iVar8) < iVar4)) {
        uVar3 = (ushort)(uVar12 / local_414);
      }
      param_1 = param_1 + 1;
      local_430 = local_430 + -1;
      in_EAX = in_EAX + 1;
      *param_2 = uVar3;
      param_2 = param_2 + 1;
    } while (in_EAX < param_3);
  }
  return;
}



/**************************************************/

/* Function: FUN_10014fe0 @ 10014fe0 */

void FUN_10014fe0(ushort *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int local_41c;
  int local_418;
  int local_404 [256];
  uint local_4;
  
  uVar9 = (uint)DAT_1021fc26;
  iVar2 = FUN_100226b0();
  _memset(local_404,0,0x400);
  iVar6 = DAT_1014a190 * 4;
  iVar3 = *(int *)(&DAT_10244fbc + iVar6);
  puVar7 = &DAT_10244fbc + iVar6;
  local_4 = uVar9;
  while (iVar3 != -0x80000000) {
    local_404[*(byte *)(iVar3 + 1 + (int)param_1)] =
         local_404[*(byte *)(iVar3 + 1 + (int)param_1)] + 1;
    piVar11 = (int *)(puVar7 + 0x8c);
    puVar7 = puVar7 + 0x8c;
    iVar3 = *piVar11;
  }
  if (param_3 < in_EAX) {
    local_41c = in_EAX - param_3;
    do {
      puVar7 = &DAT_1026a348 + iVar6;
      iVar3 = *(int *)(&DAT_1026a348 + iVar6);
      while (iVar3 != -0x80000000) {
        local_404[*(byte *)(iVar3 + 1 + (int)param_1)] =
             local_404[*(byte *)(iVar3 + 1 + (int)param_1)] + 1;
        piVar11 = (int *)(puVar7 + 0x8c);
        puVar7 = puVar7 + 0x8c;
        iVar3 = *piVar11;
      }
      uVar5 = *param_1;
      uVar9 = (uint)(uVar5 >> 8);
      iVar10 = 0;
      iVar3 = 0;
      local_418 = 0;
      if (uVar5 >> 8 != 0) {
        do {
          iVar10 = iVar10 + local_404[iVar3];
          iVar3 = iVar3 + 1;
          local_418 = iVar10;
        } while (iVar3 < (int)uVar9);
      }
      piVar11 = (int *)(&DAT_1014a990 + iVar6);
      iVar3 = *piVar11;
      uVar4 = (uint)uVar5 * 100;
      uVar8 = 100;
      if (iVar3 != -0x80000000) {
        do {
          puVar1 = (ushort *)(iVar3 + (int)param_1);
          piVar11 = piVar11 + 0x23;
          uVar4 = uVar4 + (uint)*puVar1 *
                          (uint)(byte)(&DAT_1014a208)
                                      [(&DAT_101df7e0)[(uint)(*puVar1 >> 8) + uVar9 * 0x100] * 3];
          iVar3 = *piVar11;
          uVar8 = uVar8 + (byte)(&DAT_1014a208)
                                [(&DAT_101df7e0)[(uint)(*puVar1 >> 8) + uVar9 * 0x100] * 3];
        } while (iVar3 != -0x80000000);
      }
      if ((local_418 < iVar2) || ((int)((local_4 - local_404[uVar9]) - local_418) < iVar2)) {
        uVar5 = (ushort)(uVar4 / uVar8);
      }
      *param_2 = uVar5;
      iVar6 = DAT_1014a190 * 4;
      puVar7 = &DAT_1028f6d4 + iVar6;
      iVar3 = *(int *)(&DAT_1028f6d4 + iVar6);
      while (iVar3 != -0x80000000) {
        local_404[*(byte *)(iVar3 + 1 + (int)param_1)] =
             local_404[*(byte *)(iVar3 + 1 + (int)param_1)] + -1;
        piVar11 = (int *)(puVar7 + 0x8c);
        puVar7 = puVar7 + 0x8c;
        iVar3 = *piVar11;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      local_41c = local_41c + -1;
    } while (local_41c != 0);
  }
  return;
}



/**************************************************/

/* Function: FUN_100151f0 @ 100151f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100151f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = DAT_101df7dc;
  uVar5 = DAT_101df7d8;
  iVar2 = DAT_101df7bc;
  iVar1 = DAT_101df7b8;
  if (*param_1 != DAT_1014a194) {
    return 0x50;
  }
  iVar7 = param_1[1];
  if (iVar7 == 0) {
    return 0x51;
  }
  if (DAT_100e93b8 <= DAT_101df7dc) {
    return 0x52;
  }
  if ((DAT_101df7d8 < DAT_1014a521) && (DAT_101df7d8 < DAT_101df7d4 - 1U)) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  else {
    if ((DAT_101df7dc < DAT_101df7cc) || (DAT_101df7d0 <= DAT_101df7dc)) {
      FUN_10014c20((&DAT_1014a108)[DAT_1014a190],iVar7,DAT_101df7c4);
    }
    else {
      iVar6 = (&DAT_1014a108)[DAT_1014a190];
      FUN_10014c20(iVar6,iVar7,DAT_101df7bc);
      iVar3 = DAT_101df7c0;
      iVar1 = (iVar2 - iVar1) * 2;
      iVar7 = iVar7 + iVar1;
      iVar6 = iVar6 + iVar1;
      FUN_10014fe0(iVar6,iVar7,iVar2);
      iVar1 = (iVar3 - iVar2) * 2;
      FUN_10014c20(iVar1 + iVar6,iVar1 + iVar7,DAT_101df7c4);
      uVar4 = DAT_101df7dc;
      uVar5 = DAT_101df7d8;
    }
    DAT_101df7dc = uVar4 + 1;
    DAT_1014a190 = DAT_101df7dc % DAT_1014a0ec;
    *(undefined2 *)(param_1 + 2) = 1;
  }
  if (*param_1 != 0) {
    uVar5 = uVar5 + 1;
    DAT_1014a18c = uVar5 % DAT_1014a0ec;
    DAT_101df7d8 = uVar5;
  }
  if (uVar5 < DAT_100e93b8) {
    *param_1 = (&DAT_1014a108)[DAT_1014a18c];
  }
  else {
    *param_1 = 0;
  }
  _DAT_1014a198 = param_1[1];
  DAT_1014a194 = *param_1;
  _DAT_1014a19c = param_1[2];
  return 0;
}



/**************************************************/

/* Function: FUN_10015370 @ 10015370 */

void __thiscall FUN_10015370(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *local_c68;
  int *local_c64;
  int local_c60;
  int local_c5c;
  uint local_c54;
  uint local_c50;
  uint local_c4c;
  uint local_c48;
  int local_c3c;
  byte local_c1c;
  byte local_c18;
  int local_c0c [256];
  uint local_80c;
  int local_808 [256];
  uint local_408;
  int local_404 [256];
  uint local_4;
  
  uVar12 = (uint)DAT_1021fc26;
  iVar2 = FUN_100226b0();
  if (in_EAX < param_3) {
    local_c60 = -in_EAX;
    local_c5c = in_EAX;
    local_80c = uVar12;
    local_408 = uVar12;
    local_4 = uVar12;
    do {
      local_c1c = *param_1;
      uVar3 = (uint)local_c1c;
      local_c18 = param_1[1];
      uVar14 = (uint)local_c18;
      bVar10 = param_1[2];
      uVar13 = (uint)bVar10;
      iVar8 = *(int *)(&DAT_1014a990 + DAT_1014a190 * 4);
      local_c54 = uVar3 * 100;
      local_c50 = uVar14 * 100;
      local_c4c = uVar13 * 100;
      local_c64 = (int *)(&DAT_1014a990 + DAT_1014a190 * 4);
      uVar12 = 100;
      local_c48 = 100;
      if (iVar8 != -0x80000000) {
        local_c68 = &DAT_1014a988;
        iVar6 = iVar8;
        do {
          local_c3c = *local_c68;
          if (((local_c5c + local_c3c < 0) || (DAT_100e93b4 <= local_c5c + local_c3c)) ||
             (DAT_100e93b8 <= (uint)(local_c68[1] + DAT_101df7dc))) {
            if (local_c3c + local_c5c < 0) {
              local_c3c = local_c60;
            }
            else if (DAT_100e93b4 <= local_c3c + local_c5c) {
              local_c3c = DAT_100e93b4 + -1 + local_c60;
            }
            iVar6 = local_c68[1];
            if (DAT_101df7dc + iVar6 < 0) {
              iVar6 = -DAT_101df7dc;
            }
            else if ((int)DAT_100e93b8 <= DAT_101df7dc + iVar6) {
              iVar6 = (DAT_100e93b8 - DAT_101df7dc) + -1;
            }
            iVar4 = 0;
            iVar5 = 0;
            if (iVar8 != -0x80000000) {
              piVar7 = &DAT_1014a98c;
              piVar9 = (int *)(&DAT_1014a990 + DAT_1014a190 * 4);
              do {
                if ((piVar7[-1] == local_c3c) && (*piVar7 == iVar6)) {
                  iVar4 = *(int *)(&DAT_1014a990 + (iVar5 * 0x23 + DAT_1014a190) * 4);
                  break;
                }
                piVar9 = piVar9 + 0x23;
                iVar5 = iVar5 + 1;
                piVar7 = piVar7 + 0x23;
              } while (*piVar9 != -0x80000000);
            }
            uVar12 = (uint)(byte)(&DAT_1014a208)
                                 [(&DAT_101df7e0)[(uint)param_1[iVar4 + 1] + uVar14 * 0x100] +
                                  (&DAT_101df7e0)[CONCAT11(bVar10,param_1[iVar4 + 2])] +
                                  (&DAT_101df7e0)[uVar3 * 0x100 + (uint)param_1[iVar4]]];
            iVar5 = param_1[iVar4 + 1] * uVar12;
            iVar6 = param_1[iVar4 + 2] * uVar12;
            iVar4 = uVar12 * param_1[iVar4];
          }
          else {
            uVar12 = (uint)(byte)(&DAT_1014a208)
                                 [(&DAT_101df7e0)[uVar3 * 0x100 + (uint)param_1[iVar6]] +
                                  (&DAT_101df7e0)[uVar14 * 0x100 + (uint)param_1[iVar6 + 1]] +
                                  (&DAT_101df7e0)[CONCAT11(bVar10,param_1[iVar6 + 2])]];
            iVar4 = uVar12 * param_1[iVar6];
            iVar5 = uVar12 * param_1[iVar6 + 1];
            iVar6 = uVar12 * param_1[iVar6 + 2];
          }
          local_c4c = local_c4c + iVar6;
          local_c50 = local_c50 + iVar5;
          local_c54 = local_c54 + iVar4;
          uVar12 = local_c48 + uVar12;
          iVar6 = *(int *)((int)local_c64 + 0x8c);
          local_c68 = local_c68 + 0x23;
          local_c64 = (int *)((int)local_c64 + 0x8c);
          local_c48 = uVar12;
        } while (iVar6 != -0x80000000);
      }
      _memset(local_c0c,0,0x400);
      _memset(local_808,0,0x400);
      _memset(local_404,0,0x400);
      iVar8 = *(int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
      local_c64 = (int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
      if (iVar8 != -0x80000000) {
        local_c68 = &DAT_1021fc28;
        iVar6 = iVar8;
        do {
          iVar4 = *local_c68;
          if (((iVar4 + local_c5c < 0) || (DAT_100e93b4 <= iVar4 + local_c5c)) ||
             (DAT_100e93b8 <= (uint)(local_c68[1] + DAT_101df7dc))) {
            iVar6 = local_c60;
            if ((-1 < local_c5c + iVar4) && (iVar6 = iVar4, DAT_100e93b4 <= local_c5c + iVar4)) {
              iVar6 = DAT_100e93b4 + -1 + local_c60;
            }
            iVar4 = local_c68[1];
            if (DAT_101df7dc + iVar4 < 0) {
              iVar4 = -DAT_101df7dc;
            }
            else if ((int)DAT_100e93b8 <= DAT_101df7dc + iVar4) {
              iVar4 = (DAT_100e93b8 - DAT_101df7dc) + -1;
            }
            iVar5 = 0;
            iVar11 = 0;
            if (iVar8 != -0x80000000) {
              piVar7 = &DAT_1021fc2c;
              piVar9 = (int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
              do {
                if ((piVar7[-1] == iVar6) && (*piVar7 == iVar4)) {
                  iVar5 = *(int *)(&DAT_1021fc30 + (iVar11 * 0x23 + DAT_1014a190) * 4);
                  break;
                }
                piVar9 = piVar9 + 0x23;
                iVar11 = iVar11 + 1;
                piVar7 = piVar7 + 0x23;
              } while (*piVar9 != -0x80000000);
            }
            local_c0c[param_1[iVar5]] = local_c0c[param_1[iVar5]] + 1;
            local_808[param_1[iVar5 + 1]] = local_808[param_1[iVar5 + 1]] + 1;
            bVar1 = param_1[iVar5 + 2];
          }
          else {
            local_c0c[param_1[iVar6]] = local_c0c[param_1[iVar6]] + 1;
            local_808[param_1[iVar6 + 1]] = local_808[param_1[iVar6 + 1]] + 1;
            bVar1 = param_1[iVar6 + 2];
          }
          local_404[bVar1] = local_404[bVar1] + 1;
          local_c68 = local_c68 + 0x23;
          local_c64 = local_c64 + 0x23;
          iVar6 = *local_c64;
        } while (iVar6 != -0x80000000);
      }
      iVar6 = 0;
      iVar8 = 0;
      if (uVar3 != 0) {
        do {
          iVar6 = iVar6 + local_c0c[iVar8];
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar3);
      }
      iVar4 = 0;
      iVar8 = 0;
      if (uVar14 != 0) {
        do {
          iVar4 = iVar4 + local_808[iVar8];
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar14);
      }
      iVar5 = 0;
      iVar8 = 0;
      if (uVar13 != 0) {
        do {
          iVar5 = iVar5 + local_404[iVar8];
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar13);
      }
      if ((iVar6 < iVar2) || ((int)((local_80c - local_c0c[uVar3]) - iVar6) < iVar2)) {
        local_c1c = (byte)(local_c54 / uVar12);
      }
      if ((iVar4 < iVar2) || ((int)((local_408 - local_808[uVar14]) - iVar4) < iVar2)) {
        local_c18 = (byte)(local_c50 / uVar12);
      }
      if ((iVar5 < iVar2) || ((int)((local_4 - local_404[uVar13]) - iVar5) < iVar2)) {
        bVar10 = (byte)(local_c4c / uVar12);
      }
      local_c60 = local_c60 + -1;
      *param_2 = local_c1c;
      param_2[1] = local_c18;
      param_2[2] = bVar10;
      param_2 = param_2 + 3;
      local_c5c = local_c5c + 1;
      param_1 = param_1 + 3;
    } while (local_c5c < param_3);
  }
  return;
}



/**************************************************/

/* Function: FUN_10015920 @ 10015920 */

void FUN_10015920(byte *param_1,int param_2,int param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte *in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  int iVar15;
  int local_c58;
  int local_c54;
  int local_c50;
  int local_c4c;
  int *local_c48;
  uint local_c40;
  uint local_c3c;
  uint local_c38;
  int local_c0c [256];
  uint local_80c;
  int local_808 [256];
  uint local_408;
  int local_404 [256];
  uint local_4;
  
  uVar13 = (uint)DAT_1021fc26;
  iVar4 = FUN_100226b0();
  _memset(local_c0c,0,0x400);
  _memset(local_808,0,0x400);
  _memset(local_404,0,0x400);
  iVar11 = DAT_1014a190 * 4;
  iVar5 = *(int *)(&DAT_10244fbc + iVar11);
  local_4 = uVar13;
  local_408 = uVar13;
  local_80c = uVar13;
  puVar14 = &DAT_10244fbc + iVar11;
  while (iVar5 != -0x80000000) {
    local_c0c[in_EAX[iVar5]] = local_c0c[in_EAX[iVar5]] + 1;
    bVar10 = in_EAX[iVar5 + 2];
    local_808[in_EAX[iVar5 + 1]] = local_808[in_EAX[iVar5 + 1]] + 1;
    local_404[bVar10] = local_404[bVar10] + 1;
    piVar1 = (int *)(puVar14 + 0x8c);
    puVar14 = puVar14 + 0x8c;
    iVar5 = *piVar1;
  }
  if (param_2 < param_3) {
    local_c58 = param_3 - param_2;
    do {
      puVar14 = &DAT_1026a348 + iVar11;
      iVar5 = *(int *)(&DAT_1026a348 + iVar11);
      while (iVar5 != -0x80000000) {
        local_c0c[in_EAX[iVar5]] = local_c0c[in_EAX[iVar5]] + 1;
        bVar10 = in_EAX[iVar5 + 2];
        local_808[in_EAX[iVar5 + 1]] = local_808[in_EAX[iVar5 + 1]] + 1;
        local_404[bVar10] = local_404[bVar10] + 1;
        piVar1 = (int *)(puVar14 + 0x8c);
        puVar14 = puVar14 + 0x8c;
        iVar5 = *piVar1;
      }
      uVar13 = (uint)*in_EAX;
      iVar15 = 0;
      iVar5 = 0;
      local_c4c = 0;
      if (uVar13 != 0) {
        do {
          iVar15 = iVar15 + local_c0c[iVar5];
          iVar5 = iVar5 + 1;
          local_c4c = iVar15;
        } while (iVar5 < (int)uVar13);
      }
      uVar8 = (uint)in_EAX[1];
      iVar15 = 0;
      iVar5 = 0;
      local_c54 = 0;
      if (uVar8 != 0) {
        do {
          iVar15 = iVar15 + local_808[iVar5];
          iVar5 = iVar5 + 1;
          local_c54 = iVar15;
        } while (iVar5 < (int)uVar8);
      }
      iVar15 = 0;
      iVar5 = 0;
      local_c50 = 0;
      if (in_EAX[2] != 0) {
        do {
          iVar5 = iVar5 + local_404[iVar15];
          iVar15 = iVar15 + 1;
          local_c50 = iVar5;
        } while (iVar15 < (int)(uint)in_EAX[2]);
      }
      local_c3c = (uint)in_EAX[2] * 100;
      local_c40 = (uint)in_EAX[1] * 100;
      local_c48 = (int *)(&DAT_1014a990 + iVar11);
      uVar6 = (uint)*in_EAX * 100;
      iVar5 = *local_c48;
      uVar12 = 100;
      local_c38 = 100;
      if (iVar5 != -0x80000000) {
        do {
          pbVar2 = in_EAX + iVar5;
          uVar9 = (uint)(byte)(&DAT_1014a208)
                              [(&DAT_101df7e0)[(uint)*in_EAX * 0x100 + (uint)*pbVar2] +
                               (&DAT_101df7e0)[CONCAT11(in_EAX[1],in_EAX[iVar5 + 1])] +
                               (&DAT_101df7e0)[(uint)in_EAX[2] * 0x100 + (uint)in_EAX[iVar5 + 2]]];
          local_c40 = local_c40 + uVar9 * in_EAX[iVar5 + 1];
          local_c3c = local_c3c + uVar9 * in_EAX[iVar5 + 2];
          uVar12 = local_c38 + uVar9;
          local_c48 = local_c48 + 0x23;
          iVar5 = *local_c48;
          uVar6 = uVar6 + uVar9 * *pbVar2;
          local_c38 = uVar12;
        } while (iVar5 != -0x80000000);
      }
      if ((local_c4c < iVar4) ||
         (bVar10 = *in_EAX, (int)((local_80c - local_c0c[uVar13]) - local_c4c) < iVar4)) {
        bVar10 = (byte)(uVar6 / uVar12);
      }
      bVar3 = in_EAX[1];
      if ((local_c54 < iVar4) || ((int)((local_408 - local_808[uVar8]) - local_c54) < iVar4)) {
        bVar3 = (byte)(local_c40 / uVar12);
      }
      if ((local_c50 < iVar4) ||
         (bVar7 = in_EAX[2], (int)((local_4 - local_404[in_EAX[2]]) - local_c50) < iVar4)) {
        bVar7 = (byte)(local_c3c / uVar12);
      }
      *param_1 = bVar10;
      param_1[1] = bVar3;
      param_1[2] = bVar7;
      iVar11 = DAT_1014a190 * 4;
      puVar14 = &DAT_1028f6d4 + iVar11;
      iVar5 = *(int *)(&DAT_1028f6d4 + iVar11);
      while (iVar5 != -0x80000000) {
        local_c0c[in_EAX[iVar5]] = local_c0c[in_EAX[iVar5]] + -1;
        bVar10 = in_EAX[iVar5 + 2];
        local_808[in_EAX[iVar5 + 1]] = local_808[in_EAX[iVar5 + 1]] + -1;
        local_404[bVar10] = local_404[bVar10] + -1;
        piVar1 = (int *)(puVar14 + 0x8c);
        puVar14 = puVar14 + 0x8c;
        iVar5 = *piVar1;
      }
      param_1 = param_1 + 3;
      in_EAX = in_EAX + 3;
      local_c58 = local_c58 + -1;
    } while (local_c58 != 0);
  }
  return;
}



/**************************************************/

/* Function: FUN_10015d10 @ 10015d10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10015d10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = DAT_101df7dc;
  uVar5 = DAT_101df7d8;
  iVar2 = DAT_101df7bc;
  iVar1 = DAT_101df7b8;
  if (*param_1 != DAT_1014a194) {
    return 0x50;
  }
  iVar6 = param_1[1];
  if (iVar6 == 0) {
    return 0x51;
  }
  if (DAT_100e93b8 <= DAT_101df7dc) {
    return 0x52;
  }
  if ((DAT_101df7d8 < DAT_1014a521) && (DAT_101df7d8 < DAT_101df7d4 - 1U)) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  else {
    if ((DAT_101df7dc < DAT_101df7cc) || (DAT_101df7d0 <= DAT_101df7dc)) {
      FUN_10015370(iVar6,DAT_101df7c4);
    }
    else {
      FUN_10015370(iVar6,DAT_101df7bc);
      iVar3 = DAT_101df7c0;
      iVar6 = iVar6 + (iVar2 - iVar1) * 3;
      FUN_10015920(iVar6,iVar2,DAT_101df7c0);
      FUN_10015370((iVar3 - iVar2) * 3 + iVar6,DAT_101df7c4);
      uVar4 = DAT_101df7dc;
      uVar5 = DAT_101df7d8;
    }
    DAT_101df7dc = uVar4 + 1;
    DAT_1014a190 = DAT_101df7dc % DAT_1014a0ec;
    *(undefined2 *)(param_1 + 2) = 1;
  }
  if (*param_1 != 0) {
    uVar5 = uVar5 + 1;
    DAT_1014a18c = uVar5 % DAT_1014a0ec;
    DAT_101df7d8 = uVar5;
  }
  if (uVar5 < DAT_100e93b8) {
    *param_1 = (&DAT_1014a108)[DAT_1014a18c];
  }
  else {
    *param_1 = 0;
  }
  _DAT_1014a19c = param_1[2];
  DAT_1014a194 = *param_1;
  _DAT_1014a198 = param_1[1];
  return 0;
}



/**************************************************/

/* Function: FUN_10015ea0 @ 10015ea0 */

void __thiscall FUN_10015ea0(ushort *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ushort uVar16;
  int local_c70;
  uint local_c6c;
  int local_c68;
  int *local_c64;
  int local_c60;
  int *local_c5c;
  byte local_c56;
  byte local_c54;
  byte local_c52;
  uint local_c4c;
  uint local_c48;
  uint local_c44;
  ushort local_c18;
  int local_c0c [256];
  uint local_80c;
  int local_808 [256];
  uint local_408;
  int local_404 [256];
  uint local_4;
  
  uVar14 = (uint)DAT_1021fc26;
  iVar5 = FUN_100226b0();
  if (in_EAX < param_3) {
    local_c68 = -in_EAX;
    local_c60 = in_EAX;
    local_80c = uVar14;
    local_408 = uVar14;
    local_4 = uVar14;
    do {
      uVar16 = param_1[1];
      uVar11 = param_1[2];
      local_c18 = *param_1;
      local_c4c = (uint)uVar16 * 100;
      local_c48 = (uint)uVar11 * 100;
      uVar14 = (uint)local_c18 * 100;
      iVar8 = *(int *)(&DAT_1014a990 + DAT_1014a190 * 4);
      local_c5c = (int *)(&DAT_1014a990 + DAT_1014a190 * 4);
      local_c44 = 100;
      if (iVar8 != -0x80000000) {
        local_c64 = &DAT_1014a988;
        iVar12 = iVar8;
        do {
          local_c6c = *local_c64;
          local_c54 = (byte)(local_c18 >> 8);
          local_c52 = (byte)(uVar16 >> 8);
          local_c56 = (byte)(uVar11 >> 8);
          if ((((int)(local_c60 + local_c6c) < 0) || (DAT_100e93b4 <= (int)(local_c60 + local_c6c)))
             || (DAT_100e93b8 <= (uint)(local_c64[1] + DAT_101df7dc))) {
            if ((int)(local_c6c + local_c60) < 0) {
              local_c6c = local_c68;
            }
            else if (DAT_100e93b4 <= (int)(local_c6c + local_c60)) {
              local_c6c = DAT_100e93b4 + -1 + local_c68;
            }
            iVar12 = local_c64[1];
            if (iVar12 + DAT_101df7dc < 0) {
              iVar12 = -DAT_101df7dc;
            }
            else if ((int)DAT_100e93b8 <= iVar12 + DAT_101df7dc) {
              iVar12 = (DAT_100e93b8 - DAT_101df7dc) + -1;
            }
            iVar6 = 0;
            iVar15 = 0;
            if (iVar8 != -0x80000000) {
              piVar7 = &DAT_1014a98c;
              piVar10 = (int *)(&DAT_1014a990 + DAT_1014a190 * 4);
              do {
                if ((piVar7[-1] == local_c6c) && (*piVar7 == iVar12)) {
                  iVar6 = *(int *)(&DAT_1014a990 + (iVar15 * 0x23 + DAT_1014a190) * 4);
                  break;
                }
                piVar10 = piVar10 + 0x23;
                iVar15 = iVar15 + 1;
                piVar7 = piVar7 + 0x23;
              } while (*piVar10 != -0x80000000);
            }
            uVar2 = *(ushort *)(iVar6 + 2 + (int)param_1);
            uVar4 = *(ushort *)(iVar6 + (int)param_1);
            uVar3 = *(ushort *)(iVar6 + 4 + (int)param_1);
            uVar9 = (uint)(byte)(&DAT_1014a208)
                                [(&DAT_101df7e0)[(uint)(uVar2 >> 8) + (uint)local_c52 * 0x100] +
                                 (&DAT_101df7e0)[(uint)(uVar3 >> 8) + (uint)local_c56 * 0x100] +
                                 (&DAT_101df7e0)[(uint)(uVar4 >> 8) + (uint)local_c54 * 0x100]];
            iVar12 = uVar2 * uVar9;
            iVar6 = uVar3 * uVar9;
          }
          else {
            uVar2 = *(ushort *)(iVar12 + 4 + (int)param_1);
            uVar3 = *(ushort *)(iVar12 + 2 + (int)param_1);
            uVar4 = *(ushort *)(iVar12 + (int)param_1);
            uVar9 = (uint)(byte)(&DAT_1014a208)
                                [(&DAT_101df7e0)[(uint)(uVar4 >> 8) + (uint)local_c54 * 0x100] +
                                 (&DAT_101df7e0)[(uint)(uVar3 >> 8) + (uint)local_c52 * 0x100] +
                                 (&DAT_101df7e0)[(uint)(uVar2 >> 8) + (uint)local_c56 * 0x100]];
            iVar12 = uVar3 * uVar9;
            iVar6 = uVar2 * uVar9;
          }
          local_c48 = local_c48 + iVar6;
          local_c4c = local_c4c + iVar12;
          local_c6c = (uint)uVar4;
          local_c44 = local_c44 + uVar9;
          iVar12 = *(int *)((int)local_c5c + 0x8c);
          local_c5c = (int *)((int)local_c5c + 0x8c);
          uVar14 = uVar14 + local_c6c * uVar9;
          local_c64 = local_c64 + 0x23;
        } while (iVar12 != -0x80000000);
      }
      _memset(local_c0c,0,0x400);
      _memset(local_808,0,0x400);
      _memset(local_404,0,0x400);
      iVar8 = *(int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
      local_c64 = (int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
      if (iVar8 != -0x80000000) {
        local_c5c = &DAT_1021fc28;
        iVar12 = iVar8;
        do {
          iVar6 = *local_c5c;
          if (((local_c60 + iVar6 < 0) || (DAT_100e93b4 <= local_c60 + iVar6)) ||
             (DAT_100e93b8 <= (uint)(local_c5c[1] + DAT_101df7dc))) {
            iVar12 = local_c68;
            if ((-1 < local_c60 + iVar6) && (iVar12 = iVar6, DAT_100e93b4 <= local_c60 + iVar6)) {
              iVar12 = DAT_100e93b4 + -1 + local_c68;
            }
            iVar6 = local_c5c[1];
            if (DAT_101df7dc + iVar6 < 0) {
              iVar6 = -DAT_101df7dc;
            }
            else if ((int)DAT_100e93b8 <= DAT_101df7dc + iVar6) {
              iVar6 = (DAT_100e93b8 - DAT_101df7dc) + -1;
            }
            iVar15 = 0;
            iVar13 = 0;
            if (iVar8 != -0x80000000) {
              piVar7 = &DAT_1021fc2c;
              piVar10 = (int *)(&DAT_1021fc30 + DAT_1014a190 * 4);
              do {
                if ((piVar7[-1] == iVar12) && (*piVar7 == iVar6)) {
                  iVar15 = *(int *)(&DAT_1021fc30 + (iVar13 * 0x23 + DAT_1014a190) * 4);
                  break;
                }
                piVar10 = piVar10 + 0x23;
                iVar13 = iVar13 + 1;
                piVar7 = piVar7 + 0x23;
              } while (*piVar10 != -0x80000000);
            }
            local_c0c[*(byte *)(iVar15 + 1 + (int)param_1)] =
                 local_c0c[*(byte *)(iVar15 + 1 + (int)param_1)] + 1;
            local_808[*(byte *)(iVar15 + 3 + (int)param_1)] =
                 local_808[*(byte *)(iVar15 + 3 + (int)param_1)] + 1;
            bVar1 = *(byte *)(iVar15 + 5 + (int)param_1);
          }
          else {
            local_c0c[*(byte *)(iVar12 + 1 + (int)param_1)] =
                 local_c0c[*(byte *)(iVar12 + 1 + (int)param_1)] + 1;
            local_808[*(byte *)(iVar12 + 3 + (int)param_1)] =
                 local_808[*(byte *)(iVar12 + 3 + (int)param_1)] + 1;
            bVar1 = *(byte *)(iVar12 + 5 + (int)param_1);
          }
          local_404[bVar1] = local_404[bVar1] + 1;
          local_c64 = local_c64 + 0x23;
          iVar12 = *local_c64;
          local_c5c = local_c5c + 0x23;
        } while (iVar12 != -0x80000000);
      }
      uVar2 = local_c18 >> 8;
      iVar12 = 0;
      iVar8 = 0;
      local_c70 = 0;
      if (uVar2 != 0) {
        do {
          iVar12 = iVar12 + local_c0c[iVar8];
          iVar8 = iVar8 + 1;
          local_c70 = iVar12;
        } while (iVar8 < (int)(uint)uVar2);
      }
      uVar3 = uVar16 >> 8;
      iVar12 = 0;
      iVar8 = 0;
      if (uVar3 != 0) {
        do {
          iVar12 = iVar12 + local_808[iVar8];
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(uint)uVar3);
      }
      uVar4 = uVar11 >> 8;
      iVar6 = 0;
      iVar8 = 0;
      if (uVar4 != 0) {
        do {
          iVar6 = iVar6 + local_404[iVar8];
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(uint)uVar4);
      }
      if ((local_c70 < iVar5) || ((int)((local_80c - local_c0c[uVar2]) - local_c70) < iVar5)) {
        local_c18 = (ushort)(uVar14 / local_c44);
      }
      if ((iVar12 < iVar5) || ((int)((local_408 - local_808[uVar3]) - iVar12) < iVar5)) {
        uVar16 = (ushort)(local_c4c / local_c44);
      }
      if ((iVar6 < iVar5) || ((int)((local_4 - local_404[uVar4]) - iVar6) < iVar5)) {
        uVar11 = (ushort)(local_c48 / local_c44);
      }
      local_c68 = local_c68 + -1;
      *param_2 = local_c18;
      param_2[1] = uVar16;
      param_2[2] = uVar11;
      param_2 = param_2 + 3;
      local_c60 = local_c60 + 1;
      param_1 = param_1 + 3;
    } while (local_c60 < param_3);
  }
  return;
}



/**************************************************/

/* Function: FUN_10016480 @ 10016480 */

void FUN_10016480(ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *in_EAX;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  int *piVar13;
  ushort uVar14;
  uint uVar15;
  undefined *local_c60;
  int local_c5c;
  uint local_c50;
  uint local_c4c;
  uint local_c48;
  uint local_c44;
  int local_c40;
  int local_c3c;
  int local_c38;
  int local_c0c [256];
  uint local_80c;
  int local_808 [256];
  uint local_408;
  int local_404 [256];
  uint local_4;
  
  uVar15 = (uint)DAT_1021fc26;
  iVar7 = FUN_100226b0();
  _memset(local_c0c,0,0x400);
  _memset(local_808,0,0x400);
  _memset(local_404,0,0x400);
  local_4 = uVar15;
  local_408 = uVar15;
  local_80c = uVar15;
  local_c60 = (undefined *)(DAT_1014a190 * 4);
  puVar12 = &DAT_10244fbc + (int)local_c60;
  iVar8 = *(int *)(&DAT_10244fbc + (int)local_c60);
  while (iVar8 != -0x80000000) {
    local_c0c[*(byte *)(iVar8 + 1 + (int)in_EAX)] =
         local_c0c[*(byte *)(iVar8 + 1 + (int)in_EAX)] + 1;
    bVar2 = *(byte *)(iVar8 + 5 + (int)in_EAX);
    local_808[*(byte *)(iVar8 + 3 + (int)in_EAX)] =
         local_808[*(byte *)(iVar8 + 3 + (int)in_EAX)] + 1;
    local_404[bVar2] = local_404[bVar2] + 1;
    piVar13 = (int *)(puVar12 + 0x8c);
    puVar12 = puVar12 + 0x8c;
    iVar8 = *piVar13;
  }
  if (param_2 < param_3) {
    local_c5c = param_3 - param_2;
    do {
      puVar12 = &DAT_1026a348 + (int)local_c60;
      iVar8 = *(int *)(&DAT_1026a348 + (int)local_c60);
      while (iVar8 != -0x80000000) {
        local_c0c[*(byte *)(iVar8 + 1 + (int)in_EAX)] =
             local_c0c[*(byte *)(iVar8 + 1 + (int)in_EAX)] + 1;
        bVar2 = *(byte *)(iVar8 + 5 + (int)in_EAX);
        local_808[*(byte *)(iVar8 + 3 + (int)in_EAX)] =
             local_808[*(byte *)(iVar8 + 3 + (int)in_EAX)] + 1;
        local_404[bVar2] = local_404[bVar2] + 1;
        piVar13 = (int *)(puVar12 + 0x8c);
        puVar12 = puVar12 + 0x8c;
        iVar8 = *piVar13;
      }
      uVar15 = (uint)(*in_EAX >> 8);
      iVar10 = 0;
      iVar8 = 0;
      local_c38 = 0;
      if (*in_EAX >> 8 != 0) {
        do {
          iVar10 = iVar10 + local_c0c[iVar8];
          iVar8 = iVar8 + 1;
          local_c38 = iVar10;
        } while (iVar8 < (int)uVar15);
      }
      uVar6 = in_EAX[1];
      uVar5 = (uint)(uVar6 >> 8);
      iVar10 = 0;
      iVar8 = 0;
      local_c3c = 0;
      if (uVar6 >> 8 != 0) {
        do {
          iVar10 = iVar10 + local_808[iVar8];
          iVar8 = iVar8 + 1;
          local_c3c = iVar10;
        } while (iVar8 < (int)uVar5);
      }
      iVar10 = 0;
      uVar9 = in_EAX[2] >> 8;
      iVar8 = 0;
      local_c40 = 0;
      if (uVar9 != 0) {
        do {
          iVar10 = iVar10 + local_404[iVar8];
          iVar8 = iVar8 + 1;
          local_c40 = iVar10;
        } while (iVar8 < (int)(uint)uVar9);
      }
      uVar14 = *in_EAX;
      iVar8 = *(int *)(&DAT_1014a990 + (int)local_c60);
      local_c48 = (uint)in_EAX[2] * 100;
      local_c50 = (uint)uVar14 * 100;
      local_c4c = (uint)uVar6 * 100;
      local_c60 = &DAT_1014a990 + (int)local_c60;
      local_c44 = 100;
      if (iVar8 != -0x80000000) {
        do {
          uVar3 = *(ushort *)(iVar8 + 2 + (int)in_EAX);
          uVar4 = *(ushort *)(iVar8 + 4 + (int)in_EAX);
          uVar11 = (uint)(byte)(&DAT_1014a208)
                               [(&DAT_101df7e0)[(uint)(uVar3 >> 8) + uVar5 * 0x100] +
                                (&DAT_101df7e0)[(uint)(uVar4 >> 8) + (uint)uVar9 * 0x100] +
                                (&DAT_101df7e0)
                                [(uint)(*(ushort *)(iVar8 + (int)in_EAX) >> 8) + uVar15 * 0x100]];
          local_c44 = local_c44 + uVar11;
          local_c50 = local_c50 + *(ushort *)(iVar8 + (int)in_EAX) * uVar11;
          local_c4c = local_c4c + uVar3 * uVar11;
          iVar8 = *(int *)(local_c60 + 0x8c);
          local_c60 = local_c60 + 0x8c;
          local_c48 = local_c48 + uVar4 * uVar11;
        } while (iVar8 != -0x80000000);
      }
      if ((local_c38 < iVar7) || ((int)((local_80c - local_c0c[uVar15]) - local_c38) < iVar7)) {
        uVar14 = (ushort)(local_c50 / local_c44);
      }
      if ((local_c3c < iVar7) || ((int)((local_408 - local_808[uVar5]) - local_c3c) < iVar7)) {
        uVar6 = (ushort)(local_c4c / local_c44);
      }
      if ((local_c40 < iVar7) ||
         (uVar9 = in_EAX[2], (int)((local_4 - local_404[in_EAX[2] >> 8]) - local_c40) < iVar7)) {
        uVar9 = (ushort)(local_c48 / local_c44);
      }
      param_1[1] = uVar6;
      *param_1 = uVar14;
      param_1[2] = uVar9;
      local_c60 = (undefined *)(DAT_1014a190 * 4);
      piVar13 = (int *)(&DAT_1028f6d4 + (int)local_c60);
      iVar8 = *piVar13;
      while (iVar8 != -0x80000000) {
        local_c0c[*(byte *)(iVar8 + 1 + (int)in_EAX)] =
             local_c0c[*(byte *)(iVar8 + 1 + (int)in_EAX)] + -1;
        bVar2 = *(byte *)(iVar8 + 5 + (int)in_EAX);
        local_808[*(byte *)(iVar8 + 3 + (int)in_EAX)] =
             local_808[*(byte *)(iVar8 + 3 + (int)in_EAX)] + -1;
        local_404[bVar2] = local_404[bVar2] + -1;
        piVar1 = piVar13 + 0x23;
        piVar13 = piVar13 + 0x23;
        iVar8 = *piVar1;
      }
      param_1 = param_1 + 3;
      in_EAX = in_EAX + 3;
      local_c5c = local_c5c + -1;
    } while (local_c5c != 0);
  }
  return;
}



/**************************************************/

/* Function: FUN_100168b0 @ 100168b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100168b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = DAT_101df7dc;
  uVar5 = DAT_101df7d8;
  iVar2 = DAT_101df7bc;
  iVar1 = DAT_101df7b8;
  if (*param_1 != DAT_1014a194) {
    return 0x50;
  }
  iVar6 = param_1[1];
  if (iVar6 == 0) {
    return 0x51;
  }
  if (DAT_100e93b8 <= DAT_101df7dc) {
    return 0x52;
  }
  if ((DAT_101df7d8 < DAT_1014a521) && (DAT_101df7d8 < DAT_101df7d4 - 1U)) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  else {
    if ((DAT_101df7dc < DAT_101df7cc) || (DAT_101df7d0 <= DAT_101df7dc)) {
      FUN_10015ea0(iVar6,DAT_101df7c4);
    }
    else {
      FUN_10015ea0(iVar6,DAT_101df7bc);
      iVar3 = DAT_101df7c0;
      iVar6 = iVar6 + (iVar2 - iVar1) * 6;
      FUN_10016480(iVar6,iVar2,DAT_101df7c0);
      FUN_10015ea0((iVar3 - iVar2) * 6 + iVar6,DAT_101df7c4);
      uVar4 = DAT_101df7dc;
      uVar5 = DAT_101df7d8;
    }
    DAT_101df7dc = uVar4 + 1;
    DAT_1014a190 = DAT_101df7dc % DAT_1014a0ec;
    *(undefined2 *)(param_1 + 2) = 1;
  }
  if (*param_1 != 0) {
    uVar5 = uVar5 + 1;
    DAT_1014a18c = uVar5 % DAT_1014a0ec;
    DAT_101df7d8 = uVar5;
  }
  if (uVar5 < DAT_100e93b8) {
    *param_1 = (&DAT_1014a108)[DAT_1014a18c];
  }
  else {
    *param_1 = 0;
  }
  _DAT_1014a19c = param_1[2];
  DAT_1014a194 = *param_1;
  _DAT_1014a198 = param_1[1];
  return 0;
}



/**************************************************/

/* Function: GercGInit @ 10016a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GercGInit(int param_1,int param_2,int param_3,short *param_4,uint *param_5,undefined4 param_6,
             undefined4 *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
                    /* 0x16a40  11  GercGInit */
  if (DAT_102cb694 == 0) {
    DAT_102cb694 = 1;
    DAT_1014a104 = (void *)0x0;
    FUN_10013090();
  }
  if (param_1 == 0) {
    return 0x40;
  }
  if (param_2 == 0) {
    return 0xf0;
  }
  if (param_3 == 0) {
    return 0x40;
  }
  if (*param_4 != 0) {
    if (*param_4 != 1) {
      return 0x10;
    }
    if (1 < (ushort)param_4[1]) {
      return 0x11;
    }
  }
  uVar3 = param_4[2] & 0xf000;
  if (uVar3 < 0x2001) {
    if ((uVar3 != 0x2000) && ((param_4[2] & 0xf000U) != 0)) {
      bVar8 = uVar3 == 0x1000;
LAB_10016af7:
      if (!bVar8) {
        return 0x12;
      }
    }
  }
  else if (uVar3 != 0x3000) {
    bVar8 = uVar3 == 0xf000;
    goto LAB_10016af7;
  }
  if (*param_5 == 0) {
    return 0x20;
  }
  if (param_5[1] == 0) {
    return 0x21;
  }
  if (param_5[2] == 0) {
    return 0x22;
  }
  if (param_5[3] == 0) {
    return 0x23;
  }
  if (param_5[2] != param_5[3]) {
    return 0x24;
  }
  if (((short)param_5[4] != 1) && ((short)param_5[4] != 3)) {
    return 0x25;
  }
  if ((*(short *)((int)param_5 + 0x12) != 8) && (*(short *)((int)param_5 + 0x12) != 0x10)) {
    return 0x26;
  }
  if (2 < (ushort)param_6) {
    return 0x30;
  }
  if (param_7 == (undefined4 *)0x0) {
    return 0x40;
  }
  DAT_100e93b8 = param_5[1];
  uVar1 = *param_5;
  DAT_100e93bc = param_5[2];
  DAT_100e93c0 = param_5[3];
  _DAT_100e93c4 = param_5[4];
  DAT_100e93b4 = uVar1;
  iVar4 = GercGAccess(param_1,param_2,param_3,param_4,param_5,param_6,&DAT_1014a1a0);
  if (iVar4 == 0) {
    if (DAT_1014a1a4 == 1) {
      FUN_10013a90(&DAT_1014a540,_DAT_1014a1a8);
      FUN_10013b40(&DAT_1021f7e0,_DAT_1014a508);
    }
    else {
      FUN_10013a40();
      FUN_10013a40();
    }
    FUN_10013be0();
    FUN_10013be0();
    DAT_1014a520 = DAT_1014a981;
    if (DAT_1014a981 < DAT_1021fc21) {
      DAT_1014a520 = DAT_1021fc21;
    }
    DAT_1014a521 = DAT_1014a982;
    if (DAT_1014a982 < DAT_1021fc22) {
      DAT_1014a521 = DAT_1021fc22;
    }
    DAT_1014a522 = DAT_1021fc23;
    if (DAT_1021fc23 <= DAT_1014a983) {
      DAT_1014a522 = DAT_1014a983;
    }
    DAT_1014a523 = DAT_1021fc24;
    if (DAT_1021fc24 <= DAT_1014a984) {
      DAT_1014a523 = DAT_1014a984;
    }
    DAT_101df7c4 = *param_5;
    uVar6 = (uint)DAT_1014a522;
    DAT_101df7b8 = 0;
    DAT_101df7bc = uVar6;
    if (DAT_101df7c4 <= uVar6) {
      DAT_101df7bc = DAT_101df7c4;
    }
    if (DAT_1014a523 < DAT_101df7c4) {
      DAT_101df7c0 = DAT_101df7c4 - uVar6;
    }
    else {
      DAT_101df7c0 = 0;
    }
    if (DAT_101df7c0 < DAT_101df7bc) {
      DAT_101df7c0 = DAT_101df7bc;
    }
    uVar6 = (uint)DAT_1014a520;
    DAT_101df7d4 = param_5[1];
    _DAT_101df7c8 = 0;
    DAT_101df7cc = uVar6;
    if (DAT_101df7d4 <= uVar6) {
      DAT_101df7cc = DAT_101df7d4;
    }
    uVar5 = (uint)DAT_1014a521;
    if (uVar5 < DAT_101df7d4) {
      DAT_101df7d0 = DAT_101df7d4 - uVar5;
    }
    else {
      DAT_101df7d0 = 0;
    }
    if (DAT_101df7d0 < DAT_101df7cc) {
      DAT_101df7d0 = DAT_101df7cc;
    }
    DAT_1014a0ec = uVar5 + 1 + uVar6;
    _DAT_1014a0f0 = DAT_100e93bc;
    _DAT_1014a0fa = _DAT_100e93c6;
    _DAT_1014a0f4 = DAT_100e93c0;
    iVar4 = (uint)_DAT_100e93c6 * (_DAT_100e93c4 & 0xffff);
    DAT_1014a0fc = iVar4 * uVar1 >> 3;
    _DAT_1014a100 = DAT_1014a0fc * DAT_1014a0ec;
    DAT_101df7d8 = 0;
    DAT_101df7dc = 0;
    _DAT_1014a0f8 = (undefined2)_DAT_100e93c4;
    _DAT_1014a0e8 = uVar1;
    if (DAT_1014a104 != (void *)0x0) {
switchD_10016e6c_caseD_9:
      return 0xf1;
    }
    DAT_1014a104 = _malloc(_DAT_1014a100);
    if (DAT_1014a104 == (void *)0x0) {
      return 0xe0;
    }
    iVar7 = 0;
    do {
      if (iVar7 < DAT_1014a0ec) {
        (&DAT_1014a108)[iVar7] = (void *)(DAT_1014a0fc * iVar7 + (int)DAT_1014a104);
      }
      else {
        (&DAT_1014a108)[iVar7] = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x21);
    DAT_1014a18c = 0;
    DAT_1014a190 = 0;
    FUN_10013ca0();
    FUN_10013ca0();
    uVar2 = DAT_1014a108;
    if (DAT_1014a1a4 == 1) {
      switch(iVar4) {
      case 8:
        PTR_FUN_10030054 = FUN_10014aa0;
        break;
      default:
        goto switchD_10016e6c_caseD_9;
      case 0x10:
        PTR_FUN_10030054 = FUN_100151f0;
        break;
      case 0x18:
        PTR_FUN_10030054 = FUN_10015d10;
        break;
      case 0x30:
        PTR_FUN_10030054 = FUN_100168b0;
      }
    }
    else {
      PTR_FUN_10030054 = FUN_10014440;
    }
    *param_7 = DAT_1014a108;
    _DAT_1014a198 = param_7[1];
    _DAT_1014a19c = param_7[2];
    DAT_1014a194 = uVar2;
    iVar4 = 0;
  }
  return iVar4;
}



/**************************************************/

/* Function: GercGEnd @ 10016f20 */

undefined4 GercGEnd(void)

{
                    /* 0x16f20  10  GercGEnd */
  if (DAT_1014a104 != (void *)0x0) {
    _free(DAT_1014a104);
    DAT_1014a104 = (void *)0x0;
  }
  DAT_101df7d8 = 0;
  DAT_101df7dc = 0;
  DAT_1014a18c = 0;
  DAT_1014a190 = 0;
  return 0;
}



/**************************************************/

/* Function: GercGLine @ 10016f60 */

void GercGLine(void)

{
                    /* WARNING: Could not recover jumptable at 0x10016f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x16f60  12  GercGLine */
  (*(code *)PTR_FUN_10030054)();
  return;
}



/**************************************************/

/* Function: GercGAccess @ 10016f70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char GercGAccess(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                undefined2 *param_7,int param_8)

{
  double dVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int extraout_ECX;
  undefined1 local_98;
  undefined1 local_90 [16];
  int local_80;
  int local_48;
  ushort *local_38;
  int local_34;
  
                    /* 0x16f70  9  GercGAccess */
  if (param_1 == 0) {
    return '@';
  }
  if (param_2 == 0) {
    return -0x30;
  }
  if (param_3 == 0) {
    return '@';
  }
  if (param_4 == 0) {
    return '@';
  }
  if (param_5 == 0) {
    return '@';
  }
  if (2 < (ushort)param_6) {
    return '0';
  }
  if (param_7 == (undefined2 *)0x0) {
    return '@';
  }
  if ((-1 < param_8) && (param_8 < 3)) {
    cVar5 = FUN_100130e0(param_1,param_2);
    if (cVar5 != '\0') {
      return cVar5;
    }
    cVar5 = FUN_10013200();
    if (cVar5 != '\0') {
      return cVar5;
    }
    cVar5 = FUN_10013270(local_90);
    if (cVar5 != '\0') {
      return cVar5;
    }
    cVar5 = FUN_10013400(local_90,param_3);
    if (cVar5 != '\0') {
      return cVar5;
    }
    cVar5 = FUN_10013520();
    if (cVar5 != '\0') {
      return cVar5;
    }
    if (param_8 == 0) {
      cVar5 = FUN_10013890(*(undefined4 *)(param_5 + 8));
      if ((((cVar5 == '\0') && (cVar5 = FUN_100138f0(*(undefined2 *)(param_4 + 4)), cVar5 == '\0'))
          && (cVar5 = FUN_10013940(param_4,param_5,param_6), cVar5 == '\0')) &&
         (cVar5 = FUN_10013a10(), dVar1 = _DAT_1002a378, cVar5 == '\0')) {
        if (1 < *(byte *)(local_34 + 0x10)) {
          return -0x28;
        }
        if ((double)*(ushort *)(local_34 + 0x12) / _DAT_1002a378 < _DAT_1002a390) {
          return -0x28;
        }
        if (_DAT_1002a3a8 < (double)*(ushort *)(local_34 + 0x12) / _DAT_1002a378) {
          return -0x28;
        }
        if (local_48 <= *(int *)(local_34 + 0x14)) {
          return -0x28;
        }
        if (1000 < *local_38) {
          return -0x28;
        }
        if (1000 < local_38[1]) {
          return -0x28;
        }
        if (1000 < local_38[2]) {
          return -0x28;
        }
        if (1000 < local_38[3]) {
          return -0x28;
        }
        if (1000 < local_38[4]) {
          return -0x28;
        }
        if (local_38[8] != 0) {
          return -0x28;
        }
        if (local_38[9] <= local_38[8]) {
          return -0x28;
        }
        if (local_38[10] <= local_38[9]) {
          return -0x28;
        }
        if (local_38[0xb] <= local_38[10]) {
          return -0x28;
        }
        if (local_38[0xc] <= local_38[0xb]) {
          return -0x28;
        }
        if (local_38[0xc] != 1000) {
          return -0x28;
        }
        if ((double)*(ushort *)(local_34 + 0x18) / _DAT_1002a378 < _DAT_1002a390) {
          return -0x28;
        }
        if (_DAT_1002a388 < (double)*(ushort *)(local_34 + 0x18) / _DAT_1002a378) {
          return -0x28;
        }
        if (*(byte *)(local_34 + 0x1b) == 0) {
          return -0x28;
        }
        if (_DAT_1002a398 < (double)*(byte *)(local_34 + 0x1a) / (double)*(byte *)(local_34 + 0x1b))
        {
          return -0x28;
        }
        *param_7 = *(undefined2 *)(local_34 + 2);
        *(uint *)(param_7 + 2) = (uint)*(byte *)(local_34 + 0x10);
        *(double *)(param_7 + 4) = (double)*(ushort *)(local_34 + 0x12) / dVar1;
        *(undefined4 *)(param_7 + 8) = *(undefined4 *)(local_34 + 0x14);
        dVar3 = _DAT_1002a380;
        *(double *)(param_7 + 0x10) = (double)*local_38 / _DAT_1002a380;
        *(double *)(param_7 + 0x18) = (double)local_38[1] / dVar3;
        *(double *)(param_7 + 0x20) = (double)local_38[2] / dVar3;
        *(double *)(param_7 + 0x28) = (double)local_38[3] / dVar3;
        *(double *)(param_7 + 0x30) = (double)local_38[4] / dVar3;
        *(double *)(param_7 + 0xc) = (double)local_38[8] / dVar3;
        *(double *)(param_7 + 0x14) = (double)local_38[9] / dVar3;
        *(double *)(param_7 + 0x1c) = (double)local_38[10] / dVar3;
        *(double *)(param_7 + 0x24) = (double)local_38[0xb] / dVar3;
        *(double *)(param_7 + 0x2c) = (double)local_38[0xc] / dVar3;
        *(double *)(param_7 + 0x1b4) = (double)*(ushort *)(local_34 + 0x18) / dVar1;
        *(double *)(param_7 + 0x1b8) =
             (double)*(byte *)(local_34 + 0x1a) / (double)*(byte *)(local_34 + 0x1b);
        FUN_10014380();
        *(undefined4 *)(param_7 + 0x1bc) = *(undefined4 *)(local_80 + 0x10);
      }
      return '\0';
    }
    if (param_8 != 1) {
      if (param_8 != 2) {
        return -0xf;
      }
      cVar5 = FUN_10013a10();
      dVar1 = _DAT_1002a380;
      if (cVar5 != '\0') {
        return '\0';
      }
      if (((((*local_38 < 0x3e9) && (local_38[1] < 0x3e9)) &&
           ((local_38[2] < 0x3e9 && ((local_38[3] < 0x3e9 && (local_38[4] < 0x3e9)))))) &&
          (local_38[8] == 0)) &&
         ((((local_38[8] < local_38[9] && (local_38[9] < local_38[10])) &&
           (local_38[10] < local_38[0xb])) &&
          ((local_38[0xb] < local_38[0xc] && (local_38[0xc] == 1000)))))) {
        *(double *)(param_7 + 0x10) = (double)*local_38 / _DAT_1002a380;
        *(double *)(param_7 + 0x18) = (double)local_38[1] / dVar1;
        *(double *)(param_7 + 0x20) = (double)local_38[2] / dVar1;
        *(double *)(param_7 + 0x28) = (double)local_38[3] / dVar1;
        *(double *)(param_7 + 0x30) = (double)local_38[4] / dVar1;
        *(double *)(param_7 + 0xc) = (double)local_38[8] / dVar1;
        *(double *)(param_7 + 0x14) = (double)local_38[9] / dVar1;
        *(double *)(param_7 + 0x1c) = (double)local_38[10] / dVar1;
        *(double *)(param_7 + 0x24) = (double)local_38[0xb] / dVar1;
        *(double *)(param_7 + 0x2c) = (double)local_38[0xc] / dVar1;
        *(undefined4 *)(param_7 + 0x1bc) = *(undefined4 *)(local_80 + 0x10);
        return '\0';
      }
      return -0x28;
    }
    cVar5 = FUN_10013890(*(undefined4 *)(param_5 + 8));
    if (cVar5 != '\0') {
      return '\0';
    }
    cVar5 = FUN_100138f0(*(undefined2 *)(param_4 + 4));
    if (cVar5 != '\0') {
      return '\0';
    }
    cVar5 = FUN_10013940(param_4,param_5,param_6);
    if (cVar5 != '\0') {
      return '\0';
    }
    cVar5 = FUN_10013a10();
    if (cVar5 != '\0') {
      return '\0';
    }
    if (((*(uint *)(param_7 + 2) < 2) && (_DAT_1002a390 <= *(double *)(param_7 + 4))) &&
       ((*(double *)(param_7 + 4) <= _DAT_1002a3a8 &&
        ((extraout_ECX < local_48 && (0.0 <= *(double *)(param_7 + 0x10))))))) {
      if (1.0 < *(double *)(param_7 + 0x10)) {
        return -0x10;
      }
      if (((((0.0 <= *(double *)(param_7 + 0x18)) && (*(double *)(param_7 + 0x18) <= 1.0)) &&
           (0.0 <= *(double *)(param_7 + 0x20))) &&
          (((*(double *)(param_7 + 0x20) <= 1.0 && (0.0 <= *(double *)(param_7 + 0x28))) &&
           ((*(double *)(param_7 + 0x28) <= 1.0 &&
            ((0.0 <= *(double *)(param_7 + 0x30) && (*(double *)(param_7 + 0x30) <= 1.0)))))))) &&
         ((*(double *)(param_7 + 0xc) == 0.0 &&
          ((((((*(double *)(param_7 + 0x14) < *(double *)(param_7 + 0xc) ==
                (*(double *)(param_7 + 0x14) == *(double *)(param_7 + 0xc)) &&
               (*(double *)(param_7 + 0x1c) < *(double *)(param_7 + 0x14) ==
                (*(double *)(param_7 + 0x1c) == *(double *)(param_7 + 0x14)))) &&
              (*(double *)(param_7 + 0x24) < *(double *)(param_7 + 0x1c) ==
               (*(double *)(param_7 + 0x24) == *(double *)(param_7 + 0x1c)))) &&
             ((*(double *)(param_7 + 0x2c) < *(double *)(param_7 + 0x24) ==
               (*(double *)(param_7 + 0x2c) == *(double *)(param_7 + 0x24)) &&
              (*(double *)(param_7 + 0x2c) == 1.0)))) &&
            ((_DAT_1002a390 <= *(double *)(param_7 + 0x1b4) &&
             ((*(double *)(param_7 + 0x1b4) <= _DAT_1002a388 &&
              (0.0 <= *(double *)(param_7 + 0x1b8))))))) &&
           (*(double *)(param_7 + 0x1b8) <= _DAT_1002a358)))))) {
        *(undefined1 *)(local_34 + 0x10) = *(undefined1 *)(param_7 + 2);
        dVar3 = _DAT_1002a378;
        dVar1 = *(double *)(param_7 + 4) * _DAT_1002a378;
        *(char *)(local_34 + 0x12) = (char)(int)ROUND(dVar1);
        *(char *)(local_34 + 0x13) = (char)((uint)(int)ROUND(dVar1) >> 8);
        uVar2 = *(undefined4 *)(param_7 + 8);
        *(char *)(local_34 + 0x14) = (char)uVar2;
        *(char *)(local_34 + 0x17) = (char)((uint)uVar2 >> 0x18);
        *(char *)(local_34 + 0x16) = (char)((uint)uVar2 >> 0x10);
        *(char *)(local_34 + 0x15) = (char)((uint)uVar2 >> 8);
        dVar4 = _DAT_1002a380;
        dVar1 = *(double *)(param_7 + 0x10) * _DAT_1002a380;
        *(char *)local_38 = (char)(int)ROUND(dVar1);
        *(char *)((int)local_38 + 1) = (char)((uint)(int)ROUND(dVar1) >> 8);
        dVar1 = *(double *)(param_7 + 0x18);
        *(char *)(local_38 + 1) = (char)(int)ROUND(dVar1 * dVar4);
        *(char *)((int)local_38 + 3) = (char)((uint)(int)ROUND(dVar1 * dVar4) >> 8);
        dVar1 = *(double *)(param_7 + 0x20);
        *(char *)(local_38 + 2) = (char)(int)ROUND(dVar1 * dVar4);
        *(char *)((int)local_38 + 5) = (char)((uint)(int)ROUND(dVar1 * dVar4) >> 8);
        dVar1 = *(double *)(param_7 + 0x28);
        *(char *)(local_38 + 3) = (char)(int)ROUND(dVar1 * dVar4);
        *(char *)((int)local_38 + 7) = (char)((uint)(int)ROUND(dVar1 * dVar4) >> 8);
        dVar1 = *(double *)(param_7 + 0x30);
        *(char *)(local_38 + 4) = (char)(int)ROUND(dVar1 * dVar4);
        *(char *)((int)local_38 + 9) = (char)((uint)(int)ROUND(dVar1 * dVar4) >> 8);
        dVar1 = *(double *)(param_7 + 0xc);
        *(char *)(local_38 + 8) = (char)(int)ROUND(dVar1 * dVar4);
        *(char *)((int)local_38 + 0x11) = (char)((uint)(int)ROUND(dVar1 * dVar4) >> 8);
        dVar1 = *(double *)(param_7 + 0x14);
        *(char *)(local_38 + 9) = (char)(int)ROUND(dVar1 * dVar4);
        *(char *)((int)local_38 + 0x13) = (char)((uint)(int)ROUND(dVar1 * dVar4) >> 8);
        dVar1 = *(double *)(param_7 + 0x1c);
        *(char *)(local_38 + 10) = (char)(int)ROUND(dVar1 * dVar4);
        *(char *)((int)local_38 + 0x15) = (char)((uint)(int)ROUND(dVar1 * dVar4) >> 8);
        dVar1 = *(double *)(param_7 + 0x24);
        *(char *)(local_38 + 0xb) = (char)(int)ROUND(dVar1 * dVar4);
        *(char *)((int)local_38 + 0x17) = (char)((uint)(int)ROUND(dVar1 * dVar4) >> 8);
        dVar1 = *(double *)(param_7 + 0x2c);
        *(char *)(local_38 + 0xc) = (char)(int)ROUND(dVar4 * dVar1);
        *(char *)((int)local_38 + 0x19) = (char)((uint)(int)ROUND(dVar4 * dVar1) >> 8);
        dVar1 = *(double *)(param_7 + 0x1b4);
        *(char *)(local_34 + 0x18) = (char)(int)ROUND(dVar3 * dVar1);
        *(char *)(local_34 + 0x19) = (char)((uint)(int)ROUND(dVar3 * dVar1) >> 8);
        local_98 = (undefined1)(int)ROUND(*(double *)(param_7 + 0x1b8) * _DAT_1002a368);
        *(undefined1 *)(local_34 + 0x1a) = local_98;
        *(undefined1 *)(local_34 + 0x1b) = 100;
        uVar2 = *(undefined4 *)(param_7 + 0x1bc);
        *(char *)(local_80 + 0x10) = (char)uVar2;
        *(char *)(local_80 + 0x11) = (char)((uint)uVar2 >> 8);
        *(char *)(local_80 + 0x12) = (char)((uint)uVar2 >> 0x10);
        *(char *)(local_80 + 0x13) = (char)((uint)uVar2 >> 0x18);
        return '\0';
      }
    }
  }
  return -0x10;
}



/**************************************************/

/* Function: FUN_10017bd0 @ 10017bd0 */

byte FUN_10017bd0(int param_1,undefined4 *param_2)

{
  byte *in_EAX;
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  pbVar3 = in_EAX + 0x20;
  param_2[2] = pbVar3;
  *param_2 = in_EAX;
  param_2[1] = in_EAX + 0x10;
  uVar6 = 8;
  pbVar1 = (byte *)&DAT_1002a29c;
  pbVar4 = in_EAX;
  do {
    if (*(int *)pbVar4 != *(int *)pbVar1) goto LAB_10017c18;
    uVar6 = uVar6 - 4;
    pbVar1 = pbVar1 + 4;
    pbVar4 = pbVar4 + 4;
  } while (3 < uVar6);
  if (uVar6 == 0) {
LAB_10017c7d:
    iVar2 = 0;
  }
  else {
LAB_10017c18:
    iVar7 = (uint)*pbVar4 - (uint)*pbVar1;
    if (iVar7 == 0) {
      if (uVar6 == 1) goto LAB_10017c7d;
      iVar7 = (uint)pbVar4[1] - (uint)pbVar1[1];
      if (iVar7 == 0) {
        if (uVar6 == 2) goto LAB_10017c7d;
        iVar7 = (uint)pbVar4[2] - (uint)pbVar1[2];
        if (iVar7 == 0) {
          if ((uVar6 == 3) || (iVar7 = (uint)pbVar4[3] - (uint)pbVar1[3], iVar7 == 0))
          goto LAB_10017c7d;
        }
      }
    }
    iVar2 = 1;
    if (iVar7 < 1) {
      iVar2 = -1;
    }
  }
  if ((iVar2 != 0) || (*(int *)(in_EAX + 8) != 0x10000)) {
    return 0xd1;
  }
  if (*(int *)(in_EAX + 0xc) != param_1) {
    return 0xd2;
  }
  uVar6 = *(uint *)(in_EAX + 0x10);
  if (uVar6 == 0) {
    return 0xd0;
  }
  uVar5 = 0;
  param_2[3] = 0xffffffff;
  if (uVar6 != 0) {
    do {
      if (*(int *)pbVar3 == 0x10f00) {
        param_2[3] = uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
      pbVar3 = pbVar3 + 0x10;
    } while (uVar5 < uVar6);
  }
  return (param_2[3] != -1) - 1U & 0xd3;
}



/**************************************************/

/* Function: FUN_10017d60 @ 10017d60 */

undefined4 __thiscall FUN_10017d60(int *param_1,int param_2,byte *param_3,int *param_4)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  
  if (*(int *)(*param_1 + 0xc) != param_2) {
    return 0xd2;
  }
  piVar1 = (int *)(param_1[3] * 0x10 + param_1[2]);
  pbVar6 = (byte *)(piVar1[3] + *param_1);
  pbVar10 = pbVar6 + 0x20;
  param_4[2] = (int)pbVar10;
  *param_4 = (int)pbVar6;
  param_4[1] = (int)(pbVar6 + 0x10);
  uVar7 = 8;
  pbVar2 = (byte *)&DAT_1002a2a8;
  pbVar5 = pbVar6;
  do {
    if (*(int *)pbVar5 != *(int *)pbVar2) goto LAB_10017df8;
    uVar7 = uVar7 - 4;
    pbVar2 = pbVar2 + 4;
    pbVar5 = pbVar5 + 4;
  } while (3 < uVar7);
  if (uVar7 == 0) {
LAB_10017e5d:
    iVar3 = 0;
  }
  else {
LAB_10017df8:
    iVar9 = (uint)*pbVar5 - (uint)*pbVar2;
    if (iVar9 == 0) {
      if (uVar7 == 1) goto LAB_10017e5d;
      iVar9 = (uint)pbVar5[1] - (uint)pbVar2[1];
      if (iVar9 == 0) {
        if (uVar7 == 2) goto LAB_10017e5d;
        iVar9 = (uint)pbVar5[2] - (uint)pbVar2[2];
        if (iVar9 == 0) {
          if ((uVar7 == 3) || (iVar9 = (uint)pbVar5[3] - (uint)pbVar2[3], iVar9 == 0))
          goto LAB_10017e5d;
        }
      }
    }
    iVar3 = 1;
    if (iVar9 < 1) {
      iVar3 = -1;
    }
  }
  if (iVar3 == 0) {
    if (*(int *)(pbVar6 + 8) != *piVar1) {
      return 0xd3;
    }
    if (*(int *)(pbVar6 + 0xc) != piVar1[2]) {
      return 0xd4;
    }
    uVar7 = *(uint *)(pbVar6 + 0x10);
    if (uVar7 != 0) {
      uVar8 = 0;
      if (uVar7 != 0) {
        do {
          uVar4 = 0x10;
          pbVar6 = param_3;
          pbVar5 = pbVar10;
          do {
            if (*(int *)pbVar5 != *(int *)pbVar6) goto LAB_10017f48;
            uVar4 = uVar4 - 4;
            pbVar6 = pbVar6 + 4;
            pbVar5 = pbVar5 + 4;
          } while (3 < uVar4);
          if (uVar4 == 0) {
LAB_10017fa5:
            iVar3 = 0;
          }
          else {
LAB_10017f48:
            iVar9 = (uint)*pbVar5 - (uint)*pbVar6;
            if (iVar9 == 0) {
              if (uVar4 == 1) goto LAB_10017fa5;
              iVar9 = (uint)pbVar5[1] - (uint)pbVar6[1];
              if (iVar9 == 0) {
                if (uVar4 == 2) goto LAB_10017fa5;
                iVar9 = (uint)pbVar5[2] - (uint)pbVar6[2];
                if (iVar9 == 0) {
                  if ((uVar4 == 3) || (iVar9 = (uint)pbVar5[3] - (uint)pbVar6[3], iVar9 == 0))
                  goto LAB_10017fa5;
                }
              }
            }
            iVar3 = 1;
            if (iVar9 < 1) {
              iVar3 = -1;
            }
          }
          if (iVar3 == 0) {
            param_4[3] = uVar8;
            return 0;
          }
          uVar8 = uVar8 + 1;
          pbVar10 = pbVar10 + 0x20;
        } while (uVar8 < uVar7);
      }
      return 0xd6;
    }
  }
  return 0xd5;
}



/**************************************************/

/* Function: FUN_10017fe0 @ 10017fe0 */

byte __thiscall FUN_10017fe0(int *param_1,int param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  int *in_EAX;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  if (*(int *)(*in_EAX + 0xc) != param_2) {
    return 0xd2;
  }
  iVar13 = param_1[3] * 0x20 + param_1[2];
  puVar1 = (undefined1 *)(*(int *)(iVar13 + 0x1c) + *param_1);
  uVar3 = *puVar1;
  *param_3 = (int)puVar1;
  if (CONCAT11(uVar3,puVar1[1]) != -0xff) {
    return 0xd8;
  }
  if (*(int *)(puVar1 + 2) != 0x30) {
    return 0xd8;
  }
  pbVar10 = puVar1 + 0x10;
  uVar11 = 8;
  pbVar6 = (byte *)&DAT_1002a2ec;
  pbVar8 = pbVar10;
  do {
    if (*(int *)pbVar8 != *(int *)pbVar6) goto LAB_1001809e;
    uVar11 = uVar11 - 4;
    pbVar6 = pbVar6 + 4;
    pbVar8 = pbVar8 + 4;
  } while (3 < uVar11);
  if (uVar11 == 0) {
LAB_10018103:
    iVar7 = 0;
  }
  else {
LAB_1001809e:
    iVar12 = (uint)*pbVar8 - (uint)*pbVar6;
    if (iVar12 == 0) {
      if (uVar11 == 1) goto LAB_10018103;
      iVar12 = (uint)pbVar8[1] - (uint)pbVar6[1];
      if (iVar12 == 0) {
        if (uVar11 == 2) goto LAB_10018103;
        iVar12 = (uint)pbVar8[2] - (uint)pbVar6[2];
        if (iVar12 == 0) {
          if ((uVar11 == 3) || (iVar12 = (uint)pbVar8[3] - (uint)pbVar6[3], iVar12 == 0))
          goto LAB_10018103;
        }
      }
    }
    iVar7 = 1;
    if (iVar12 < 1) {
      iVar7 = -1;
    }
  }
  if (iVar7 != 0) {
    return 0xd8;
  }
  if (*(int *)(puVar1 + 0x18) != 0x10000) {
    return 0xd8;
  }
  if (*(int *)(puVar1 + 0x1c) != *(int *)(iVar13 + 0x18)) {
    return 0xd7;
  }
  puVar1 = puVar1 + *(int *)(puVar1 + 2);
  uVar3 = *puVar1;
  param_3[1] = (int)puVar1;
  param_3[2] = (int)(puVar1 + 0x10);
  if (CONCAT11(uVar3,puVar1[1]) != -0xfd) {
    return 0xd8;
  }
  if (0x10 < *(ushort *)(puVar1 + 6)) {
    return 0xd8;
  }
  if (*(ushort *)(puVar1 + 6) < *(ushort *)(puVar1 + 8)) {
    return 0xd8;
  }
  if (*(int *)(puVar1 + 2) != (*(ushort *)(puVar1 + 6) + 1) * 0x10) {
    return 0xd8;
  }
  puVar2 = puVar1 + *(int *)(puVar1 + 2);
  uVar3 = *puVar2;
  param_3[3] = (int)puVar2;
  param_3[4] = (int)(puVar2 + 0x10);
  if (CONCAT11(uVar3,puVar2[1]) != -0xfc) {
    return 0xd8;
  }
  if (0x10 < *(ushort *)(puVar2 + 6)) {
    return 0xd8;
  }
  if (*(ushort *)(puVar2 + 6) < *(ushort *)(puVar2 + 8)) {
    return 0xd8;
  }
  if (*(int *)(puVar2 + 2) != (*(ushort *)(puVar2 + 6) + 1) * 0x10) {
    return 0xd8;
  }
  puVar9 = puVar2 + *(int *)(puVar2 + 2);
  param_3[6] = (int)(puVar9 + 0x10);
  uVar3 = *puVar9;
  param_3[5] = (int)puVar9;
  if (CONCAT11(uVar3,puVar9[1]) != -0xfb) {
    return 0xd8;
  }
  if ((uint)*(ushort *)(puVar9 + 6) !=
      (uint)*(ushort *)(puVar2 + 8) * (uint)*(ushort *)(puVar1 + 8) * 2) {
    return 0xd8;
  }
  if (*(int *)(puVar9 + 2) != (uint)*(ushort *)(puVar9 + 6) * 0x20 + 0x10) {
    return 0xd8;
  }
  puVar9 = puVar9 + *(int *)(puVar9 + 2);
  uVar3 = puVar9[1];
  uVar4 = *puVar9;
  param_3[7] = (int)puVar9;
  if (CONCAT11(uVar4,uVar3) != -0xfe) {
    return 0xd8;
  }
  if (*(int *)(puVar9 + 2) != 0x20) {
    return 0xd8;
  }
  uVar11 = 8;
  pbVar8 = puVar9 + 0x10;
  do {
    if (*(int *)pbVar8 != *(int *)pbVar10) goto LAB_1001839c;
    uVar11 = uVar11 - 4;
    pbVar10 = pbVar10 + 4;
    pbVar8 = pbVar8 + 4;
  } while (3 < uVar11);
  if (uVar11 == 0) {
LAB_100183f9:
    iVar12 = 0;
  }
  else {
LAB_1001839c:
    iVar13 = (uint)*pbVar8 - (uint)*pbVar10;
    if (iVar13 == 0) {
      if (uVar11 == 1) goto LAB_100183f9;
      iVar13 = (uint)pbVar8[1] - (uint)pbVar10[1];
      if (iVar13 == 0) {
        if (uVar11 == 2) goto LAB_100183f9;
        iVar13 = (uint)pbVar8[2] - (uint)pbVar10[2];
        if (iVar13 == 0) {
          if ((uVar11 == 3) || (iVar13 = (uint)pbVar8[3] - (uint)pbVar10[3], iVar13 == 0))
          goto LAB_100183f9;
        }
      }
    }
    iVar12 = 1;
    if (iVar13 < 1) {
      iVar12 = -1;
    }
  }
  if ((iVar12 != 0) || (*(int *)(puVar9 + 0x18) != -1)) {
    return 0xd8;
  }
  uVar11 = 4;
  pbVar8 = (byte *)&DAT_1002a2c0;
  pbVar10 = puVar9 + 0x1c;
  do {
    if (*(int *)pbVar10 != *(int *)pbVar8) goto LAB_1001844d;
    uVar11 = uVar11 - 4;
    pbVar8 = pbVar8 + 4;
    pbVar10 = pbVar10 + 4;
  } while (3 < uVar11);
  if (uVar11 == 0) {
LAB_100184b6:
    cVar5 = '\0';
  }
  else {
LAB_1001844d:
    iVar13 = (uint)*pbVar10 - (uint)*pbVar8;
    if (iVar13 == 0) {
      if (uVar11 == 1) goto LAB_100184b6;
      iVar13 = (uint)pbVar10[1] - (uint)pbVar8[1];
      if (iVar13 == 0) {
        if (uVar11 == 2) goto LAB_100184b6;
        iVar13 = (uint)pbVar10[2] - (uint)pbVar8[2];
        if (iVar13 == 0) {
          if ((uVar11 == 3) || (iVar13 = (uint)pbVar10[3] - (uint)pbVar8[3], iVar13 == 0))
          goto LAB_100184b6;
        }
      }
    }
    cVar5 = '\x01';
    if (iVar13 < 1) {
      return 0xd8;
    }
  }
  return -cVar5 & 0xd8;
}



/**************************************************/

/* Function: FUN_100184d0 @ 100184d0 */

void FUN_100184d0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EDI;
  
  uVar3 = 0;
  uVar5 = *(int *)(unaff_EDI + 0x400) + 1U >> 1;
  uVar2 = 0;
  piVar4 = (int *)(unaff_EDI + 8);
  while (uVar3 = uVar3 + piVar4[-2] + piVar4[-1] + piVar4[1] + *piVar4, uVar3 < uVar5) {
    uVar2 = uVar2 + 4;
    piVar4 = piVar4 + 4;
    if (0xff < (int)uVar2) {
      return;
    }
  }
  uVar3 = uVar3 - *(int *)(unaff_EDI + 0xc + uVar2 * 4);
  cVar1 = (char)uVar2;
  if (uVar3 < uVar5) {
    *(char *)(unaff_EDI + 0x404) = cVar1 + '\x03';
    return;
  }
  uVar3 = uVar3 - *(int *)(unaff_EDI + 8 + uVar2 * 4);
  if (uVar3 < uVar5) {
    *(char *)(unaff_EDI + 0x404) = cVar1 + '\x02';
    return;
  }
  if (uVar3 - *(int *)(unaff_EDI + 4 + uVar2 * 4) < uVar5) {
    uVar2 = (uint)(byte)(cVar1 + 1);
  }
  *(char *)(unaff_EDI + 0x404) = (char)uVar2;
  return;
}



/**************************************************/

/* Function: FUN_10018540 @ 10018540 */

byte __fastcall FUN_10018540(int *param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    return 0x20;
  }
  if (param_1[3] == 0) {
    return 0x23;
  }
  if (param_1[4] == 0) {
    return 0x24;
  }
  if (param_1[3] != param_1[4]) {
    return 0x25;
  }
  uVar2 = (uint)*(byte *)(param_1 + 5);
  if ((uVar2 != 1) && (uVar2 != 3)) {
    return 0x26;
  }
  bVar1 = *(byte *)((int)param_1 + 0x15);
  if ((bVar1 != 8) && (bVar1 != 0x10)) {
    return 0x27;
  }
  return -((uint)param_1[1] < (uint)(((int)(bVar1 * uVar2) >> 3) * *param_1)) & 0x21;
}



/**************************************************/

/* Function: FUN_100185c0 @ 100185c0 */

undefined4 FUN_100185c0(void)

{
  ushort uVar1;
  byte *in_EAX;
  bool bVar2;
  
  if (1 < *in_EAX) {
    return 0x31;
  }
  uVar1 = *(ushort *)(in_EAX + 2) & 0xf000;
  if (uVar1 < 0x2001) {
    if (uVar1 == 0x2000) {
      return 0;
    }
    if ((*(ushort *)(in_EAX + 2) & 0xf000) == 0) {
      return 0;
    }
    bVar2 = uVar1 == 0x1000;
  }
  else {
    if (uVar1 == 0x3000) {
      return 0;
    }
    bVar2 = uVar1 == 0xf000;
  }
  if (bVar2) {
    return 0;
  }
  return 0x34;
}



/**************************************************/

/* Function: FUN_10018600 @ 10018600 */

void FUN_10018600(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(in_EAX + 0x1558) = 0;
  *(undefined4 *)(in_EAX + 0x1554) = 0;
  *(undefined4 *)(in_EAX + 0x1550) = 0;
  *(undefined4 *)(in_EAX + 0x154c) = 0;
  iVar7 = in_EAX + 0x1115;
  local_8 = 0x21;
  iVar4 = -0x10;
  do {
    piVar2 = (int *)(in_EAX * -3 + -0x4414 + iVar7 * 4 + iVar4 * 4);
    bVar6 = 0;
    if (*piVar2 != 0) {
      bVar6 = 1;
      if (iVar4 == -0x10) {
        bVar6 = 3;
LAB_100186aa:
        if (*(int *)(in_EAX + (iVar7 + (-0x1104 - in_EAX) + iVar4) * 4) != 0) goto LAB_100186b8;
      }
      else {
        if (*(int *)(in_EAX + 0x87c + ((-0x1325 - in_EAX) + iVar7 + iVar4) * 4) == 0) {
          bVar6 = 3;
        }
        if (iVar4 != 0x10) goto LAB_100186aa;
      }
      bVar6 = bVar6 | 4;
    }
LAB_100186b8:
    *(byte *)(iVar7 + -1 + iVar4) = bVar6;
    piVar3 = (int *)(in_EAX + (iVar7 + (-0x1104 - in_EAX) + iVar4) * 4);
    bVar6 = 0;
    if (*piVar3 != 0) {
      bVar6 = 1;
      if ((iVar4 == -0x11) || (*piVar2 == 0)) {
        bVar6 = 3;
      }
      if ((iVar4 == 0xf) || (*(int *)(in_EAX + ((-0x1103 - in_EAX) + iVar7 + iVar4) * 4) == 0)) {
        bVar6 = bVar6 | 4;
      }
    }
    *(byte *)(iVar4 + iVar7) = bVar6;
    bVar6 = 0;
    if (*(int *)(in_EAX + ((-0x1103 - in_EAX) + iVar7 + iVar4) * 4) != 0) {
      bVar6 = 1;
      if ((iVar4 == -0x12) || (*piVar3 == 0)) {
        bVar6 = 3;
      }
      if ((iVar4 == 0xe) ||
         (*(int *)(in_EAX + 0x88c + ((-0x1325 - in_EAX) + iVar7 + iVar4) * 4) == 0)) {
        bVar6 = bVar6 | 4;
      }
    }
    *(byte *)(iVar7 + 1 + iVar4) = bVar6;
    iVar4 = iVar4 + 3;
    if (0x10 < iVar4) {
      iVar7 = iVar7 + 0x21;
      local_8 = local_8 + -1;
      if (local_8 == 0) {
        *(undefined4 *)(in_EAX + 0x155c) = 0;
        *(undefined4 *)(in_EAX + 0x1548) = 0;
        iVar7 = -0x10;
        local_14 = in_EAX + 0x1115;
        local_10 = 0x10;
        iVar4 = -0x210;
        do {
          iVar5 = -0x10;
          local_c = 0xe;
          do {
            if ((*(byte *)(local_14 + -1 + iVar5) & 1) != 0) {
              *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
              *(int *)(in_EAX + 0x1548) =
                   *(int *)(in_EAX + 0x1548) + *(int *)(in_EAX + 0x880 + (iVar4 + iVar5) * 4);
              if (iVar7 < -*(int *)(in_EAX + 0x154c)) {
                *(int *)(in_EAX + 0x154c) = local_10;
              }
              if (*(int *)(in_EAX + 0x1550) < iVar7) {
                *(int *)(in_EAX + 0x1550) = iVar7;
              }
              if (iVar5 < -*(int *)(in_EAX + 0x1554)) {
                *(int *)(in_EAX + 0x1554) = local_c + 2;
              }
              if (*(int *)(in_EAX + 0x1558) < iVar5) {
                *(int *)(in_EAX + 0x1558) = iVar5;
              }
            }
            if ((*(byte *)(local_14 + iVar5) & 1) != 0) {
              *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
              *(int *)(in_EAX + 0x1548) =
                   *(int *)(in_EAX + 0x1548) + *(int *)(in_EAX + 0x884 + (iVar4 + iVar5) * 4);
              if (iVar7 < -*(int *)(in_EAX + 0x154c)) {
                *(int *)(in_EAX + 0x154c) = local_10;
              }
              if (*(int *)(in_EAX + 0x1550) < iVar7) {
                *(int *)(in_EAX + 0x1550) = iVar7;
              }
              iVar1 = iVar5 + 1;
              if (iVar1 < -*(int *)(in_EAX + 0x1554)) {
                *(int *)(in_EAX + 0x1554) = local_c + 1;
              }
              if (*(int *)(in_EAX + 0x1558) < iVar1) {
                *(int *)(in_EAX + 0x1558) = iVar1;
              }
            }
            if ((*(byte *)(local_14 + 1 + iVar5) & 1) != 0) {
              *(int *)(in_EAX + 0x155c) = *(int *)(in_EAX + 0x155c) + 1;
              *(int *)(in_EAX + 0x1548) =
                   *(int *)(in_EAX + 0x1548) + *(int *)(in_EAX + 0x888 + (iVar4 + iVar5) * 4);
              if (iVar7 < -*(int *)(in_EAX + 0x154c)) {
                *(int *)(in_EAX + 0x154c) = local_10;
              }
              if (*(int *)(in_EAX + 0x1550) < iVar7) {
                *(int *)(in_EAX + 0x1550) = iVar7;
              }
              iVar1 = iVar5 + 2;
              if (iVar1 < -*(int *)(in_EAX + 0x1554)) {
                *(int *)(in_EAX + 0x1554) = local_c;
              }
              if (*(int *)(in_EAX + 0x1558) < iVar1) {
                *(int *)(in_EAX + 0x1558) = iVar1;
              }
            }
            local_c = local_c + -3;
            iVar5 = iVar5 + 3;
          } while (-0x13 < local_c);
          local_14 = local_14 + 0x21;
          local_10 = local_10 + -1;
          iVar4 = iVar4 + 0x21;
          iVar7 = iVar7 + 1;
        } while (iVar4 < 0x211);
        return;
      }
      iVar4 = -0x10;
    }
  } while( true );
}



/**************************************************/

/* Function: FUN_10018910 @ 10018910 */

void FUN_10018910(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  puVar2 = unaff_ESI;
  for (iVar1 = 0x441; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  unaff_ESI[0x1ff] = 1;
  unaff_ESI[0x241] = 1;
  unaff_ESI[0x21f] = 1;
  unaff_ESI[0x221] = 1;
  unaff_ESI[0x1fe] = 1;
  unaff_ESI[0x242] = 1;
  unaff_ESI[0x240] = 1;
  unaff_ESI[0x200] = 1;
  unaff_ESI[0x220] = 1;
  FUN_10018600();
  FUN_10002210();
  return;
}



/**************************************************/

/* Function: FUN_10018970 @ 10018970 */

void FUN_10018970(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  
  puVar2 = unaff_ESI;
  for (iVar1 = 0x441; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  unaff_ESI[0x1ff] = 1;
  unaff_ESI[0x220] = 1;
  unaff_ESI[0x241] = 1;
  FUN_10018600();
  FUN_10002210();
  return;
}



/**************************************************/

/* Function: FUN_10018be0 @ 10018be0 */

void FUN_10018be0(int param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_c34;
  undefined1 *local_c30;
  undefined1 local_c20 [1024];
  int local_820;
  int local_818 [256];
  int local_418;
  byte local_414;
  int local_410 [256];
  int local_10;
  byte local_c;
  
  local_820 = *(int *)(param_1 + 0x169c) + 2;
  iVar5 = param_2[7];
  local_418 = local_820;
  local_10 = local_820;
  if (iVar5 < param_2[2] + iVar5) {
    do {
      iVar7 = param_2[6];
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0xc);
      local_c30 = (undefined1 *)
                  (((int)((uint)*(byte *)(iVar3 + 0x15) * (uint)*(byte *)(iVar3 + 0x14)) >> 3) *
                   (iVar7 - *(int *)(iVar3 + 0x18)) +
                   (iVar5 - *(int *)(iVar3 + 0x1c)) * *(int *)(iVar3 + 4) + *(int *)(param_1 + 0x10)
                  );
      if (iVar5 < *(int *)(iVar4 + 0x1c)) {
        puVar8 = (undefined1 *)
                 (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                  (iVar7 - *(int *)(param_1 + 0x58)) +
                  (iVar5 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                 *(int *)(param_1 + 0x3c));
      }
      else {
        puVar8 = (undefined1 *)
                 (((int)((uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x14)) >> 3) *
                  (iVar7 - *(int *)(iVar4 + 0x18)) +
                  (iVar5 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x140,*(undefined4 *)(param_1 + 0x1c),iVar4,iVar5);
      _memset(local_c20,0,0x400);
      _memset(local_818,0,0x400);
      _memset(local_410,0,0x400);
      iVar7 = param_1 + 0xafec;
      iVar3 = *(int *)(param_1 + 0xafec);
      while (iVar3 != -0x80000000) {
        bVar2 = puVar8[iVar3 + 2];
        local_818[(byte)puVar8[iVar3 + 1]] = local_818[(byte)puVar8[iVar3 + 1]] + 1;
        local_410[bVar2] = local_410[bVar2] + 1;
        piVar1 = (int *)(iVar7 + 4);
        iVar7 = iVar7 + 4;
        iVar3 = *piVar1;
      }
      local_c34 = param_2[6];
      if (local_c34 < *param_2 + local_c34) {
        do {
          iVar7 = *(int *)(param_1 + 0x10518);
          local_818[(byte)puVar8[iVar7 + 1]] = local_818[(byte)puVar8[iVar7 + 1]] + 1;
          local_410[(byte)puVar8[iVar7 + 2]] = local_410[(byte)puVar8[iVar7 + 2]] + 1;
          iVar7 = *(int *)(param_1 + 0x1051c);
          local_818[(byte)puVar8[iVar7 + 1]] = local_818[(byte)puVar8[iVar7 + 1]] + 1;
          local_410[(byte)puVar8[iVar7 + 2]] = local_410[(byte)puVar8[iVar7 + 2]] + 1;
          iVar7 = *(int *)(param_1 + 0x10520);
          local_818[(byte)puVar8[iVar7 + 1]] = local_818[(byte)puVar8[iVar7 + 1]] + 1;
          local_410[(byte)puVar8[iVar7 + 2]] = local_410[(byte)puVar8[iVar7 + 2]] + 1;
          local_818[(byte)puVar8[1]] = local_818[(byte)puVar8[1]] + 2;
          local_410[(byte)puVar8[2]] = local_410[(byte)puVar8[2]] + 2;
          FUN_100184d0();
          FUN_100184d0();
          bVar2 = puVar8[1];
          local_818[bVar2] = local_818[bVar2] + -2;
          local_410[(byte)puVar8[2]] = local_410[(byte)puVar8[2]] + -2;
          if (bVar2 < 0x80) {
            if ((bVar2 <= local_414) && (bVar2 = local_414, 0x80 < local_414)) goto LAB_10018ebf;
          }
          else if ((local_414 <= bVar2) && (bVar2 = local_414, local_414 < 0x80)) {
LAB_10018ebf:
            bVar2 = 0x80;
          }
          bVar6 = puVar8[2];
          if (bVar6 < 0x80) {
            if ((bVar6 <= local_c) && (bVar6 = local_c, 0x80 < local_c)) goto LAB_10018ef3;
          }
          else if ((local_c <= bVar6) && (bVar6 = local_c, local_c < 0x80)) {
LAB_10018ef3:
            bVar6 = 0x80;
          }
          *local_c30 = *puVar8;
          local_c30[1] = bVar2;
          local_c30[2] = bVar6;
          iVar7 = *(int *)(param_1 + 0x15a44);
          local_818[(byte)puVar8[iVar7 + 1]] = local_818[(byte)puVar8[iVar7 + 1]] + -1;
          local_410[(byte)puVar8[iVar7 + 2]] = local_410[(byte)puVar8[iVar7 + 2]] + -1;
          iVar7 = *(int *)(param_1 + 0x15a48);
          local_818[(byte)puVar8[iVar7 + 1]] = local_818[(byte)puVar8[iVar7 + 1]] + -1;
          local_410[(byte)puVar8[iVar7 + 2]] = local_410[(byte)puVar8[iVar7 + 2]] + -1;
          iVar7 = *(int *)(param_1 + 0x15a4c);
          local_818[(byte)puVar8[iVar7 + 1]] = local_818[(byte)puVar8[iVar7 + 1]] + -1;
          local_410[(byte)puVar8[iVar7 + 2]] = local_410[(byte)puVar8[iVar7 + 2]] + -1;
          local_c30 = local_c30 + 3;
          local_c34 = local_c34 + 1;
          puVar8 = puVar8 + 3;
        } while (local_c34 < *param_2 + param_2[6]);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10018fe0 @ 10018fe0 */

void FUN_10018fe0(int param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  ushort uVar12;
  undefined2 *local_c28;
  int local_c24;
  undefined1 local_c20 [1024];
  int local_820;
  int local_818 [256];
  int local_418;
  undefined1 local_414;
  int local_410 [256];
  int local_10;
  undefined1 local_c;
  
  local_820 = *(int *)(param_1 + 0x169c) + 2;
  iVar9 = param_2[7];
  local_418 = local_820;
  local_10 = local_820;
  if (iVar9 < param_2[2] + iVar9) {
    do {
      iVar10 = param_2[6];
      iVar4 = *(int *)(param_1 + 0x18);
      iVar5 = *(int *)(param_1 + 0xc);
      local_c28 = (undefined2 *)
                  (((int)((uint)*(byte *)(iVar4 + 0x15) * (uint)*(byte *)(iVar4 + 0x14)) >> 3) *
                   (iVar10 - *(int *)(iVar4 + 0x18)) +
                   (iVar9 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) + *(int *)(param_1 + 0x10)
                  );
      if (iVar9 < *(int *)(iVar5 + 0x1c)) {
        puVar11 = (undefined2 *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar10 - *(int *)(param_1 + 0x58)) +
                   (iVar9 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar11 = (undefined2 *)
                  (((int)((uint)*(byte *)(iVar5 + 0x15) * (uint)*(byte *)(iVar5 + 0x14)) >> 3) *
                   (iVar10 - *(int *)(iVar5 + 0x18)) +
                   (iVar9 - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x140,*(undefined4 *)(param_1 + 0x1c),iVar5,iVar9);
      _memset(local_c20,0,0x400);
      _memset(local_818,0,0x400);
      _memset(local_410,0,0x400);
      iVar10 = param_1 + 0xafec;
      iVar4 = *(int *)(param_1 + 0xafec);
      while (iVar4 != -0x80000000) {
        bVar2 = *(byte *)(iVar4 + 5 + (int)puVar11);
        local_818[*(byte *)(iVar4 + 3 + (int)puVar11)] =
             local_818[*(byte *)(iVar4 + 3 + (int)puVar11)] + 1;
        local_410[bVar2] = local_410[bVar2] + 1;
        piVar1 = (int *)(iVar10 + 4);
        iVar10 = iVar10 + 4;
        iVar4 = *piVar1;
      }
      local_c24 = param_2[6];
      if (local_c24 < *param_2 + local_c24) {
        do {
          iVar10 = *(int *)(param_1 + 0x10518);
          local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] =
               local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] + 1;
          local_410[*(byte *)((int)puVar11 + iVar10 + 5)] =
               local_410[*(byte *)((int)puVar11 + iVar10 + 5)] + 1;
          iVar10 = *(int *)(param_1 + 0x1051c);
          local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] =
               local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] + 1;
          local_410[*(byte *)((int)puVar11 + iVar10 + 5)] =
               local_410[*(byte *)((int)puVar11 + iVar10 + 5)] + 1;
          iVar10 = *(int *)(param_1 + 0x10520);
          local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] =
               local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] + 1;
          local_410[*(byte *)((int)puVar11 + iVar10 + 5)] =
               local_410[*(byte *)((int)puVar11 + iVar10 + 5)] + 1;
          local_818[*(byte *)((int)puVar11 + 3)] = local_818[*(byte *)((int)puVar11 + 3)] + 2;
          local_410[*(byte *)((int)puVar11 + 5)] = local_410[*(byte *)((int)puVar11 + 5)] + 2;
          FUN_100184d0();
          FUN_100184d0();
          uVar8 = puVar11[1];
          local_818[uVar8 >> 8] = local_818[uVar8 >> 8] + -2;
          local_410[*(byte *)((int)puVar11 + 5)] = local_410[*(byte *)((int)puVar11 + 5)] + -2;
          uVar6 = CONCAT11(local_414,local_414);
          uVar7 = CONCAT11(local_c,local_c);
          uVar12 = puVar11[1];
          if (uVar8 < 0x8000) {
            if ((uVar12 <= uVar6) && (uVar12 = uVar6, 0x8000 < uVar6)) goto LAB_100192d2;
          }
          else if ((uVar6 <= uVar12) && (uVar12 = uVar6, uVar6 < 0x8000)) {
LAB_100192d2:
            uVar12 = 0x8000;
          }
          uVar8 = puVar11[2];
          if (uVar8 < 0x8000) {
            if ((uVar8 <= uVar7) && (uVar8 = uVar7, 0x8000 < uVar7)) goto LAB_10019305;
          }
          else if ((uVar7 <= uVar8) && (uVar8 = uVar7, uVar7 < 0x8000)) {
LAB_10019305:
            uVar8 = 0x8000;
          }
          uVar3 = *puVar11;
          local_c28[2] = uVar8;
          *local_c28 = uVar3;
          local_c28[1] = uVar12;
          iVar10 = *(int *)(param_1 + 0x15a44);
          local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] =
               local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] + -1;
          local_410[*(byte *)((int)puVar11 + iVar10 + 5)] =
               local_410[*(byte *)((int)puVar11 + iVar10 + 5)] + -1;
          iVar10 = *(int *)(param_1 + 0x15a48);
          local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] =
               local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] + -1;
          local_410[*(byte *)((int)puVar11 + iVar10 + 5)] =
               local_410[*(byte *)((int)puVar11 + iVar10 + 5)] + -1;
          iVar10 = *(int *)(param_1 + 0x15a4c);
          local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] =
               local_818[*(byte *)(iVar10 + 3 + (int)puVar11)] + -1;
          local_410[*(byte *)((int)puVar11 + iVar10 + 5)] =
               local_410[*(byte *)((int)puVar11 + iVar10 + 5)] + -1;
          local_c28 = local_c28 + 3;
          local_c24 = local_c24 + 1;
          puVar11 = puVar11 + 3;
        } while (local_c24 < *param_2 + param_2[6]);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_100196f0 @ 100196f0 */

void FUN_100196f0(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *local_c;
  int local_8;
  
  iVar9 = param_2[7];
  if (iVar9 < param_2[2] + iVar9) {
    iVar6 = param_2[6];
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0xc);
      local_c = (ushort *)
                (((int)((uint)*(byte *)(iVar2 + 0x15) * (uint)*(byte *)(iVar2 + 0x14)) >> 3) *
                 (iVar6 - *(int *)(iVar2 + 0x18)) +
                 (iVar9 - *(int *)(iVar2 + 0x1c)) * *(int *)(iVar2 + 4) + *(int *)(param_1 + 0x10));
      if (iVar9 < *(int *)(iVar3 + 0x1c)) {
        puVar10 = (ushort *)
                  (((int)((uint)*(byte *)(param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x54)) >> 3) *
                   (iVar6 - *(int *)(param_1 + 0x58)) +
                   (iVar9 - *(int *)(param_1 + 0x5c)) * *(int *)(param_1 + 0x44) +
                  *(int *)(param_1 + 0x3c));
      }
      else {
        puVar10 = (ushort *)
                  (((int)((uint)*(byte *)(iVar3 + 0x15) * (uint)*(byte *)(iVar3 + 0x14)) >> 3) *
                   (iVar6 - *(int *)(iVar3 + 0x18)) +
                   (iVar9 - *(int *)(iVar3 + 0x1c)) * *(int *)(iVar3 + 4) + *(int *)(param_1 + 4));
      }
      FUN_10002970(param_1 + 0x140,*(undefined4 *)(param_1 + 0x1c),iVar3,iVar9);
      iVar6 = param_2[6];
      local_8 = iVar6;
      if (iVar6 < *param_2 + iVar6) {
        do {
          iVar6 = *(int *)(param_1 + 0x5ac0);
          uVar8 = *puVar10;
          puVar11 = (ushort *)(*(int *)(param_1 + 0x5ac8) + (int)puVar10);
          if (uVar8 < *(ushort *)(iVar6 + (int)puVar10)) {
LAB_1001981b:
            if (*puVar11 <= uVar8) goto LAB_10019824;
LAB_100198b3:
            uVar5 = *(ushort *)((int)puVar10 + iVar6 + 2);
            uVar8 = puVar10[1];
            if (uVar8 < uVar5) {
LAB_100198cb:
              if (puVar11[1] <= uVar8) goto LAB_100198d1;
              if (uVar5 < uVar8) {
LAB_100198e6:
                if (uVar5 < puVar11[1]) {
LAB_100198f1:
                  uVar5 = puVar11[1];
                }
              }
              else if (puVar11[1] < uVar5) {
                if (uVar5 <= uVar8) goto LAB_100198e6;
                goto LAB_100198f1;
              }
              uVar12 = (int)((uint)uVar5 * 3 + (uint)uVar8) >> 2;
            }
            else {
              if (puVar11[1] < uVar8) {
                if (uVar8 <= uVar5) goto LAB_100198cb;
                goto LAB_100198e6;
              }
LAB_100198d1:
              uVar12 = (uint)uVar8;
            }
            uVar1 = *(ushort *)((int)puVar10 + iVar6 + 4);
            uVar5 = puVar10[2];
            if (uVar5 < uVar1) {
LAB_10019920:
              if (puVar11[2] <= uVar5) goto LAB_10019926;
              if (uVar1 < uVar5) {
LAB_1001993b:
                if (uVar1 < puVar11[2]) {
LAB_10019946:
                  uVar1 = puVar11[2];
                }
              }
              else if (puVar11[2] < uVar1) {
                if (uVar1 <= uVar5) goto LAB_1001993b;
                goto LAB_10019946;
              }
              uVar4 = (int)((uint)uVar1 * 3 + (uint)uVar5) >> 2;
            }
            else {
              if (puVar11[2] < uVar5) {
                if (uVar5 <= uVar1) goto LAB_10019920;
                goto LAB_1001993b;
              }
LAB_10019926:
              uVar4 = (uint)uVar5;
            }
          }
          else {
            if (*puVar11 < uVar8) {
              if (uVar8 <= *(ushort *)(iVar6 + (int)puVar10)) goto LAB_1001981b;
              goto LAB_100198b3;
            }
LAB_10019824:
            uVar5 = *(ushort *)((int)puVar10 + iVar6 + 2);
            uVar8 = puVar10[1];
            if (uVar8 < uVar5) {
LAB_1001983c:
              if (puVar11[1] <= uVar8) goto LAB_10019842;
              if (uVar5 < uVar8) {
LAB_10019857:
                if (uVar5 < puVar11[1]) goto LAB_10019862;
LAB_1001985d:
                uVar12 = (uint)uVar5;
              }
              else {
                if (uVar5 <= puVar11[1]) goto LAB_1001985d;
                if (uVar5 <= uVar8) goto LAB_10019857;
LAB_10019862:
                uVar12 = (uint)puVar11[1];
              }
            }
            else {
              if (puVar11[1] < uVar8) {
                if (uVar8 <= uVar5) goto LAB_1001983c;
                goto LAB_10019857;
              }
LAB_10019842:
              uVar12 = (uint)uVar8;
            }
            uVar1 = *(ushort *)((int)puVar10 + iVar6 + 4);
            uVar5 = puVar10[2];
            if (uVar5 < uVar1) {
LAB_1001987e:
              if (uVar5 < puVar11[2]) {
                if (uVar1 < uVar5) {
LAB_1001989c:
                  if (uVar1 < puVar11[2]) {
LAB_100198aa:
                    uVar4 = (uint)puVar11[2];
                    goto LAB_1001995b;
                  }
                }
                else if (puVar11[2] < uVar1) {
                  if (uVar1 <= uVar5) goto LAB_1001989c;
                  goto LAB_100198aa;
                }
                uVar4 = (uint)uVar1;
                goto LAB_1001995b;
              }
            }
            else if (puVar11[2] < uVar5) {
              if (uVar5 <= uVar1) goto LAB_1001987e;
              goto LAB_1001989c;
            }
            uVar4 = (uint)uVar5;
          }
LAB_1001995b:
          uVar7 = (uint)uVar8;
          if (uVar8 < 0x8000) {
            if ((uVar7 <= uVar12) && (uVar7 = uVar12, 0x8000 < uVar12)) goto LAB_10019987;
          }
          else if ((uVar12 <= uVar7) && (uVar7 = uVar12, uVar12 < 0x8000)) {
LAB_10019987:
            uVar7 = 0x8000;
          }
          uVar12 = (uint)uVar5;
          if (uVar5 < 0x8000) {
            if ((uVar12 <= uVar4) && (uVar12 = uVar4, 0x8000 < uVar4)) goto LAB_100199b6;
          }
          else if ((uVar4 <= uVar12) && (uVar12 = uVar4, uVar4 < 0x8000)) {
LAB_100199b6:
            uVar12 = 0x8000;
          }
          *local_c = *puVar10;
          local_c[2] = (ushort)uVar12;
          local_c[1] = (ushort)uVar7;
          local_c = local_c + 3;
          iVar6 = param_2[6];
          local_8 = local_8 + 1;
          puVar10 = puVar10 + 3;
        } while (local_8 < *param_2 + iVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2[2] + param_2[7]);
  }
  return;
}



/**************************************************/

/* Function: FUN_10019a20 @ 10019a20 */

void FUN_10019a20(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *_Src;
  undefined4 *puVar5;
  void *_Dst;
  
  puVar4 = (undefined4 *)param_1[3];
  puVar5 = (undefined4 *)param_1[6];
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(*param_1 + 0x24);
  _Src = (void *)param_1[1];
  _Dst = (void *)param_1[4];
  uVar3 = 0;
  if (*(int *)(param_1[6] + 8) != 0) {
    do {
      piVar1 = (int *)param_1[6];
      _memcpy(_Dst,_Src,
              ((int)((uint)*(byte *)((int)piVar1 + 0x15) * (uint)*(byte *)(piVar1 + 5)) >> 3) *
              *piVar1);
      _Src = (void *)((int)_Src + *(int *)(param_1[3] + 4));
      _Dst = (void *)((int)_Dst + *(int *)(param_1[6] + 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1[6] + 8));
  }
  return;
}



/**************************************************/

/* Function: FUN_10019a90 @ 10019a90 */

void __fastcall FUN_10019a90(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *in_EAX;
  
  uVar2 = in_EAX[6];
  uVar3 = param_1[6];
  if (uVar3 < uVar2) {
    uVar1 = *param_1 + uVar3;
    if (uVar2 < uVar1) {
      if (uVar1 <= *in_EAX + uVar2) {
        *in_EAX = (*param_1 - uVar2) + uVar3;
      }
      goto LAB_10019ae5;
    }
  }
  else {
    uVar1 = *in_EAX + uVar2;
    if (uVar3 <= uVar1) {
      if (uVar1 < *param_1 + uVar3) {
        *in_EAX = (*in_EAX - uVar3) + uVar2;
        in_EAX[6] = param_1[6];
      }
      else {
        in_EAX[6] = uVar3;
        *in_EAX = *param_1;
      }
      goto LAB_10019ae5;
    }
  }
  *in_EAX = 0;
LAB_10019ae5:
  uVar2 = param_1[7];
  uVar3 = in_EAX[7];
  if (uVar2 < uVar3) {
    uVar1 = param_1[2] + uVar2;
    if (uVar3 < uVar1) {
      if (in_EAX[2] + uVar3 < uVar1) {
        return;
      }
      in_EAX[2] = (param_1[2] - uVar3) + uVar2;
      return;
    }
  }
  else {
    uVar1 = in_EAX[2] + uVar3;
    if (uVar2 <= uVar1) {
      if (uVar1 < param_1[2] + uVar2) {
        in_EAX[2] = (in_EAX[2] - uVar2) + uVar3;
        in_EAX[7] = param_1[7];
        return;
      }
      in_EAX[7] = uVar2;
      in_EAX[2] = param_1[2];
      return;
    }
  }
  in_EAX[2] = 0;
  return;
}



/**************************************************/

/* Function: FUN_10019b50 @ 10019b50 */

void FUN_10019b50(int *param_1)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *_Dst;
  int *piVar9;
  int aiStack_c0 [7];
  uint uStack_a4;
  undefined4 local_a0 [8];
  undefined4 local_80 [8];
  undefined4 local_60 [8];
  undefined4 local_40 [8];
  undefined4 local_20 [8];
  
  iVar4 = param_1[3];
  piVar7 = param_1 + 0x10;
  piVar9 = param_1 + 0x18;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  param_1[0x1a] = param_1[0x1a] + *(int *)(iVar4 + 8);
  piVar7 = param_1 + 0x20;
  piVar9 = (int *)param_1[6];
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  *(int *)(param_1[6] + 0x1c) = param_1[0x27] + param_1[0x22];
  *(int *)(param_1[6] + 8) = (param_1[0x1f] - *(int *)(param_1[6] + 0x1c)) + param_1[0x1a];
  iVar4 = param_1[6];
  if ((uint)(*(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 8)) <
      (uint)(*(int *)(*param_1 + 0x3c) + *(int *)(*param_1 + 0x28))) {
    if (*(int *)(iVar4 + 8) < param_1[0x5a4]) {
      *(undefined4 *)(iVar4 + 8) = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) - param_1[0x5a4];
    }
  }
  uVar1 = (uint)param_1[5] / *(uint *)(*param_1 + 0x24);
  if (uVar1 < *(uint *)(param_1[6] + 8)) {
    *(uint *)(param_1[6] + 8) = uVar1;
  }
  puVar6 = (undefined4 *)param_1[6];
  puVar8 = local_60;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = local_60;
  puVar8 = local_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = local_60;
  puVar8 = local_40;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = local_60;
  puVar8 = local_80;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = local_60;
  puVar8 = local_a0;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_10019a90();
  FUN_10019a90();
  FUN_10019a90();
  FUN_10019a90();
  FUN_10019a90();
  if ((code *)param_1[0x5ad4] != (code *)0x0) {
    (*(code *)param_1[0x5ad4])(param_1,local_60);
  }
  if ((code *)param_1[0x5ad3] != (code *)0x0) {
    (*(code *)param_1[0x5ad3])(param_1,local_a0);
    (*(code *)param_1[0x5ad3])(param_1,local_80);
    (*(code *)param_1[0x5ad3])(param_1,local_40);
    (*(code *)param_1[0x5ad3])(param_1,local_20);
  }
  param_1[0x22] = param_1[0x22] + *(int *)(param_1[6] + 8);
  uVar1 = param_1[0x22];
  piVar7 = param_1 + 0x10;
  piVar9 = aiStack_c0;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  if (uVar1 < *(uint *)(*param_1 + 0x28)) {
    aiStack_c0[2] = param_1[0x5a4] + param_1[0x5a3];
    uVar1 = param_1[0x1a];
    if (uVar1 < (uint)aiStack_c0[2]) {
      aiStack_c0[2] = uVar1;
    }
    pvVar5 = (void *)((param_1[0xb] - aiStack_c0[2]) * param_1[10] + param_1[7]);
    uVar1 = (param_1[0x1f] - aiStack_c0[2]) + uVar1;
    uVar2 = aiStack_c0[2] + uVar1;
    uStack_a4 = uVar1;
    _Dst = pvVar5;
    for (; uVar1 < uVar2; uVar1 = uVar1 + 1) {
      iVar4 = param_1[3];
      if (uVar1 < *(uint *)(iVar4 + 0x1c)) {
        _Src = (void *)((uVar1 - param_1[0x17]) * param_1[0x11] + param_1[0xf]);
      }
      else {
        _Src = (void *)((uVar1 - *(int *)(iVar4 + 0x1c)) * *(int *)(iVar4 + 4) + param_1[1]);
      }
      _memcpy(_Dst,_Src,
              ((int)((uint)*(byte *)((int)param_1 + 0x55) * (uint)*(byte *)(param_1 + 0x15)) >> 3) *
              param_1[0x10]);
      _Dst = (void *)((int)_Dst + param_1[0x11]);
    }
  }
  else {
    pvVar5 = (void *)((param_1[0xb] - aiStack_c0[2]) * param_1[10] + param_1[7]);
    param_1[0x17] = param_1[0x1f] + param_1[0x1a];
    param_1[0x12] = 0;
  }
  piVar7 = aiStack_c0;
  piVar9 = param_1 + 0x10;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  param_1[0xf] = (int)pvVar5;
  return;
}



/**************************************************/

/* Function: FUN_10019de0 @ 10019de0 */

undefined4 FUN_10019de0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_8;
  
  piVar2 = param_2;
  piVar1 = param_2 + 2;
  param_2 = (int *)0x0;
  if (0 < *piVar1) {
    iVar3 = *piVar2;
    do {
      puVar5 = (undefined1 *)(piVar2[1] * (int)param_2 + param_1);
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          iVar3 = FUN_100226b0();
          local_8 = FUN_100226b0();
          iVar4 = FUN_100226b0();
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (0xff < iVar3) {
            iVar3 = 0xff;
          }
          if (local_8 < 0) {
            local_8 = 0;
          }
          else if (0xff < local_8) {
            local_8 = 0xff;
          }
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          *puVar5 = (char)iVar3;
          puVar5[1] = (undefined1)local_8;
          puVar5[2] = (char)iVar4;
          iVar3 = *piVar2;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 3;
        } while (iVar6 < iVar3);
      }
      param_2 = (int *)((int)param_2 + 1);
    } while ((int)param_2 < piVar2[2]);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_10019f40 @ 10019f40 */

undefined4 FUN_10019f40(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_8;
  
  piVar2 = param_2;
  piVar1 = param_2 + 2;
  param_2 = (int *)0x0;
  if (0 < *piVar1) {
    iVar3 = *piVar2;
    do {
      puVar5 = (undefined1 *)(piVar2[1] * (int)param_2 + param_1);
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          iVar3 = FUN_100226b0();
          local_8 = FUN_100226b0();
          iVar4 = FUN_100226b0();
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (0xff < iVar3) {
            iVar3 = 0xff;
          }
          if (local_8 < 0) {
            local_8 = 0;
          }
          else if (0xff < local_8) {
            local_8 = 0xff;
          }
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          *puVar5 = (char)iVar3;
          puVar5[1] = (undefined1)local_8;
          puVar5[2] = (char)iVar4;
          iVar3 = *piVar2;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 3;
        } while (iVar6 < iVar3);
      }
      param_2 = (int *)((int)param_2 + 1);
    } while ((int)param_2 < piVar2[2]);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1001a070 @ 1001a070 */

undefined4 FUN_1001a070(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int local_8;
  
  local_8 = 0;
  if (0 < param_2[2]) {
    iVar1 = *param_2;
    do {
      puVar5 = (undefined2 *)(param_2[1] * local_8 + param_1);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar1 = FUN_100226b0();
          iVar2 = FUN_100226b0();
          iVar3 = FUN_100226b0();
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          else if (0xffff < iVar1) {
            iVar1 = 0xffff;
          }
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xffff < iVar2) {
            iVar2 = 0xffff;
          }
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (0xffff < iVar3) {
            iVar3 = 0xffff;
          }
          puVar5[2] = (short)iVar3;
          *puVar5 = (short)iVar1;
          puVar5[1] = (short)iVar2;
          iVar1 = *param_2;
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 3;
        } while (iVar4 < iVar1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2[2]);
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1001a1c0 @ 1001a1c0 */

undefined4 FUN_1001a1c0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int local_8;
  
  local_8 = 0;
  if (0 < param_2[2]) {
    iVar1 = *param_2;
    do {
      puVar5 = (undefined2 *)(param_2[1] * local_8 + param_1);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar1 = FUN_100226b0();
          iVar2 = FUN_100226b0();
          iVar3 = FUN_100226b0();
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          else if (0xffff < iVar1) {
            iVar1 = 0xffff;
          }
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xffff < iVar2) {
            iVar2 = 0xffff;
          }
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (0xffff < iVar3) {
            iVar3 = 0xffff;
          }
          puVar5[2] = (short)iVar3;
          *puVar5 = (short)iVar1;
          puVar5[1] = (short)iVar2;
          iVar1 = *param_2;
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 3;
        } while (iVar4 < iVar1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2[2]);
  }
  return 0;
}



/**************************************************/

/* Function: SmacInit @ 1001a2f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SmacInit(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* 0x1a2f0  18  SmacInit */
  if (DAT_102cb698 == 0) {
    DAT_102cb698 = 1;
  }
  if (DAT_102cb684 != 0) {
    return 0xf0;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0xd0;
  }
  if (param_3 == 0) {
    return 0xd6;
  }
  iVar1 = FUN_100185c0();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_10018540();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = param_5[2];
  if (iVar1 == 0) {
    return 0x22;
  }
  iVar2 = FUN_10018540();
  if (iVar2 != 0) {
    return iVar2;
  }
  if (extraout_ECX[2] != 0) {
    if (*param_5 != *extraout_ECX) {
      return 0x20;
    }
    if (iVar1 != extraout_ECX[2]) {
      return 0x22;
    }
    if (param_5[3] != extraout_ECX[3]) {
      return 0x23;
    }
    if (param_5[4] == extraout_ECX[4]) {
      if ((char)param_5[5] != (char)extraout_ECX[5]) {
        return 0x26;
      }
      if (*(char *)((int)param_5 + 0x15) != *(char *)((int)extraout_ECX + 0x15)) {
        return 0x27;
      }
      DAT_102cb5b0 = *param_5;
      DAT_102cb5b4 = param_5[1];
      DAT_102cb5b8 = param_5[2];
      DAT_102cb5bc = param_5[3];
      DAT_102cb5c0 = param_5[4];
      DAT_102cb5c4 = param_5[5];
      _DAT_102cb5c8 = 0;
      _DAT_102cb5cc = 0;
      DAT_102cb5d0 = *extraout_ECX;
      DAT_102cb5d4 = extraout_ECX[1];
      _DAT_102cb5d8 = extraout_ECX[2];
      _DAT_102cb5dc = extraout_ECX[3];
      _DAT_102cb5e0 = extraout_ECX[4];
      _DAT_102cb5e4 = extraout_ECX[5];
      _DAT_102cb5e8 = 0;
      _DAT_102cb5ec = 0;
      puVar3 = &DAT_102cb5b0;
      puVar4 = &DAT_102cb630;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      DAT_102cb638 = 0;
      puVar3 = &DAT_102cb5d0;
      puVar4 = &DAT_102cb650;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      DAT_102b4a58 = &DAT_102cb5b0;
      _DAT_1014a524 = &DAT_102cb5b0;
      _DAT_102cb658 = 0;
      puVar3 = &DAT_102cb5d0;
      puVar4 = &DAT_102b4ad8;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      _DAT_102b4ae0 = 0;
      iVar1 = SmacModuleControl(0x100,&DAT_102cb69c,param_1,param_2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        return iVar1;
      }
      DAT_102cb688 = (uint)DAT_102cb6a0;
      if (DAT_102cb688 == 1) {
        FUN_10018910();
        FUN_100027e0();
        iVar1 = (DAT_102cb5c4 >> 8 & 0xff) * (DAT_102cb5c4 & 0xff);
        if (iVar1 == 0x18) {
          _DAT_102cb5a4 = &LAB_100189a0;
          _DAT_102cb5a8 = FUN_10018be0;
        }
        else if (iVar1 == 0x30) {
          _DAT_102cb5a4 = &LAB_10018ac0;
          _DAT_102cb5a8 = FUN_10018fe0;
        }
        else {
          _DAT_102cb5a4 = (undefined1 *)0x0;
          _DAT_102cb5a8 = (code *)0x0;
        }
      }
      else if (DAT_102cb688 == 2) {
        FUN_10018970();
        FUN_100027e0();
        iVar1 = (DAT_102cb5c4 >> 8 & 0xff) * (DAT_102cb5c4 & 0xff);
        if (iVar1 == 0x18) {
          _DAT_102cb5a4 = &LAB_100189a0;
          _DAT_102cb5a8 = (code *)&LAB_100193f0;
        }
        else if (iVar1 == 0x30) {
          _DAT_102cb5a4 = &LAB_10018ac0;
          _DAT_102cb5a8 = FUN_100196f0;
        }
        else {
          _DAT_102cb5a4 = (undefined1 *)0x0;
          _DAT_102cb5a8 = (code *)0x0;
        }
      }
      else {
        if (DAT_102cb688 == 0) {
          DAT_102cb684 = 1;
          return 0;
        }
        if (2 < DAT_102cb688) {
          DAT_102cb684 = 1;
          return 0;
        }
      }
      FUN_10009490(&DAT_102b60e4);
      DAT_102b4a7c = *DAT_102b4a58;
      DAT_102b4a80 = DAT_102b4a58[1];
      DAT_102b4a88 = DAT_102b4a58[3];
      DAT_102b4a8c = DAT_102b4a58[4];
      DAT_102b4a90 = DAT_102b4a58[5];
      DAT_102b4a84 = DAT_102b60e4 + DAT_102b60e8;
      _DAT_102b4a78 = DAT_102b4a80 * DAT_102b4a84;
      DAT_102b4a74 = _malloc(_DAT_102b4a78 + DAT_102b4a80);
      if (DAT_102b4a74 != (void *)0x0) {
        DAT_102cb684 = 1;
        _DAT_102b4ab4 = 0;
        _DAT_102b4ab0 = 0;
        _DAT_102b4aac = DAT_102b4a90;
        _DAT_102b4aa8 = DAT_102b4a8c;
        _DAT_102b4aa4 = DAT_102b4a88;
        _DAT_102b4aa0 = 0;
        _DAT_102b4a9c = DAT_102b4a80;
        _DAT_102b4a98 = DAT_102b4a7c;
        _DAT_102b4a94 = (void *)(DAT_102b4a80 * DAT_102b4a84 + (int)DAT_102b4a74);
        return 0;
      }
      return 0xe0;
    }
    return 0x24;
  }
  return 0x22;
}



/**************************************************/

/* Function: SmacEnd @ 1001a6e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 SmacEnd(void)

{
                    /* 0x1a6e0  16  SmacEnd */
  if (DAT_102cb698 == 0) {
    DAT_102cb698 = 1;
  }
  if (DAT_102cb684 == 1) {
    if ((DAT_102cb688 == 1) || (DAT_102cb688 == 2)) {
      _free(DAT_102b4a74);
      _DAT_102cb5a8 = 0;
      _DAT_102cb5a4 = 0;
      _DAT_102b4ab4 = 0;
      _DAT_102b4aa0 = 0;
      _DAT_102b4a94 = 0;
      DAT_102b4a84 = 0;
      _DAT_102b4a78 = 0;
      DAT_102b4a74 = (void *)0x0;
    }
    DAT_102cb684 = 0;
    return 0;
  }
  return 0xf0;
}



/**************************************************/

/* Function: SmacExec @ 1001a770 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SmacExec(int param_1,uint param_2,undefined4 param_3,int param_4,uint param_5,
            undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  
                    /* 0x1a770  17  SmacExec */
  if (DAT_102cb698 == 0) {
    DAT_102cb698 = 1;
  }
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar2 = FUN_10018540();
    if (iVar2 == 0) {
      uVar1 = extraout_ECX[2];
      if (DAT_102cb5b8 < uVar1) {
        return 0x22;
      }
      if (uVar1 == 0) {
        if (param_5 < DAT_102cb5d4) {
          return 0x10;
        }
      }
      else if ((param_2 < extraout_ECX[1] * uVar1) || (param_5 < uVar1 * DAT_102cb5d4)) {
        return 0x10;
      }
      _DAT_102cb5f0 = *extraout_ECX;
      _DAT_102cb5f4 = extraout_ECX[1];
      DAT_102cb5f8 = extraout_ECX[2];
      _DAT_102cb5fc = extraout_ECX[3];
      _DAT_102cb600 = extraout_ECX[4];
      _DAT_102cb604 = extraout_ECX[5];
      _DAT_102cb608 = DAT_102cb648;
      _DAT_102cb60c = DAT_102cb638 + DAT_102cb64c;
      if ((DAT_102cb688 == 0) || ((DAT_102cb688 != 1 && (DAT_102cb688 != 2)))) {
        _DAT_1014a534 = param_4;
        _DAT_1014a528 = param_1;
        _DAT_1014a52c = param_2;
        _DAT_1014a530 = &DAT_102cb5f0;
        _DAT_1014a538 = param_5;
        _DAT_1014a53c = &DAT_102cb610;
        FUN_10019a20(&DAT_1014a524);
      }
      else {
        _DAT_102b4a5c = param_1;
        _DAT_102b4a60 = param_2;
        _DAT_102b4a64 = &DAT_102cb5f0;
        DAT_102b4a68 = param_4;
        _DAT_102b4a6c = param_5;
        DAT_102b4a70 = &DAT_102cb610;
        if ((char)((uint)_DAT_102cb604 >> 8) == '\b') {
          FUN_10019de0();
          FUN_10019b50(&DAT_102b4a58);
          FUN_10019f40(DAT_102b4a68,DAT_102b4a70);
        }
        else {
          FUN_1001a070(param_1,&DAT_102cb5f0);
          FUN_10019b50(&DAT_102b4a58);
          FUN_1001a1c0(DAT_102b4a68,DAT_102b4a70);
        }
      }
      *param_6 = DAT_102cb610;
      param_6[1] = DAT_102cb614;
      param_6[2] = DAT_102cb618;
      param_6[3] = DAT_102cb61c;
      param_6[4] = DAT_102cb620;
      param_6[5] = DAT_102cb624;
      DAT_102cb638 = DAT_102cb638 + DAT_102cb5f8;
      _DAT_102cb658 = _DAT_102cb658 + DAT_102cb618;
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0xf0;
}



/**************************************************/

/* Function: SmacModuleControl @ 1001a9b0 */

int SmacModuleControl(ushort param_1,undefined1 *param_2,int param_3,int param_4,int param_5,
                     char *param_6,int param_7)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  ushort *puVar7;
  char *pcVar8;
  undefined1 local_54 [8];
  int local_4c;
  int local_48;
  int local_44 [4];
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  ushort *local_24;
  int local_20;
  int local_1c;
  
                    /* 0x1a9b0  19  SmacModuleControl */
  if (DAT_102cb698 == 0) {
    DAT_102cb698 = 1;
  }
  if ((param_1 - 0x100 < 2) && (param_2 != (undefined1 *)0x0)) {
    if (param_3 == 0) {
      return 0xd0;
    }
    if ((((param_4 != 0) && (param_5 != 0)) && (param_6 != (char *)0x0)) && (param_7 != 0)) {
      iVar4 = FUN_10017bd0(param_4,local_44);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (local_44[0] == param_3) {
        iVar4 = FUN_10017d60(param_4,param_5,local_54);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_10017fe0(param_4,local_34);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar6 = 0;
        iVar4 = -1;
        if (*(ushort *)(local_30 + 6) != 0) {
          puVar5 = (undefined2 *)(local_2c + 6);
          do {
            if ((*(uint *)(puVar5 + -3) <= *(uint *)(param_7 + 0xc)) &&
               (iVar4 = iVar6,
               *(uint *)(param_7 + 0xc) <=
               CONCAT31(CONCAT21(*puVar5,*(undefined1 *)((int)puVar5 + -1)),
                        *(undefined1 *)(puVar5 + -1)))) break;
            iVar6 = iVar6 + 1;
            puVar5 = puVar5 + 8;
            iVar4 = -1;
          } while (iVar6 < (int)(uint)*(ushort *)(local_30 + 6));
        }
        iVar6 = 0;
        if (*(ushort *)(local_28 + 6) == 0) {
          return 0x34;
        }
        puVar7 = local_24;
        while ((*(ushort *)(param_6 + 2) & 0xf000) != *puVar7) {
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 8;
          if ((int)(uint)*(ushort *)(local_28 + 6) <= iVar6) {
            return 0x34;
          }
        }
        if (iVar6 == -1) {
          return 0x34;
        }
        pcVar1 = (char *)(iVar4 * 0x10 + 8 + local_2c);
        iVar4 = 0;
        if (*(short *)(local_20 + 6) == 0) {
          return 0xd8;
        }
        pcVar8 = (char *)(local_1c + 1);
        while (((pcVar8[-1] != *param_6 || (pcVar8[1] != *pcVar1)) ||
               (*pcVar8 != (char)local_24[iVar6 * 8 + 1]))) {
          iVar4 = iVar4 + 1;
          pcVar8 = pcVar8 + 0x20;
          if ((int)(uint)*(ushort *)(local_20 + 6) <= iVar4) {
            return 0xd8;
          }
        }
        if (iVar4 == -1) {
          return 0xd8;
        }
        if (param_1 == 0x101) {
          if ((byte)param_2[4] < 3) {
            *(undefined1 *)(iVar4 * 0x20 + 0x10 + local_1c) = param_2[4];
            uVar3 = *(undefined4 *)(param_2 + 8);
            puVar2 = (undefined1 *)(local_48 * 0x20 + 0x10 + local_4c);
            puVar2[1] = (char)((uint)uVar3 >> 8);
            *puVar2 = (char)uVar3;
            puVar2[3] = (char)((uint)uVar3 >> 0x18);
            puVar2[2] = (char)((uint)uVar3 >> 0x10);
            return 0;
          }
        }
        else {
          if (param_1 != 0x100) {
            return 0;
          }
          if (*(byte *)(iVar4 * 0x20 + 0x10 + local_1c) < 3) {
            *param_2 = *(undefined1 *)(local_30 + 8);
            param_2[1] = *(undefined1 *)(local_28 + 8);
            param_2[2] = *pcVar1;
            param_2[3] = (char)local_24[iVar6 * 8 + 1];
            param_2[4] = *(undefined1 *)(iVar4 * 0x20 + 0x10 + local_1c);
            if (*(char *)(param_7 + 0x14) == '\x01') {
              param_2[4] = 0;
            }
            puVar2 = (undefined1 *)(local_48 * 0x20 + 0x10 + local_4c);
            *(uint *)(param_2 + 8) =
                 CONCAT31(CONCAT21(*(undefined2 *)(puVar2 + 2),
                                   *(undefined1 *)(local_48 * 0x20 + 0x11 + local_4c)),*puVar2);
            return 0;
          }
        }
      }
    }
  }
  return 0xf0;
}



/**************************************************/

/* Function: __security_check_cookie @ 1001acd7 */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_1002f000) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/**************************************************/

/* Function: __CRT_INIT@12 @ 1001ace6 */

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
  SIZE_T dwBytes;
  
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
        _DAT_100309e8 = DVar2 * 0x100 + DVar3;
        DAT_100309e0 = DVar1;
        _DAT_100309e4 = uVar8;
        DAT_100309ec = DVar2;
        _DAT_100309f0 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_102ed7f4 = GetCommandLineA();
            DAT_100306a4 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_100306a0 = DAT_100306a0 + 1;
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
    if (0 < DAT_100306a0) {
      DAT_100306a0 = DAT_100306a0 + -1;
      if (DAT_10030a1c == 0) {
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
    FUN_1001b530();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      pcVar7 = (code *)FUN_1001b4b9(DAT_10030a2c,DAT_1002f00c,_Memory);
      iVar6 = (*pcVar7)();
      if (iVar6 != 0) {
        FUN_1001b59f(_Memory,0);
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

/* Function: ___DllMainCRTStartup @ 1001aebf */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_100306a0 == 0)) {
LAB_1001afad:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_1002917c != (code *)0x0) {
        local_20 = (*DAT_1002917c)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_1001afad;
    }
    local_20 = FUN_10001000(param_3,param_2,param_1);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_10001000(param_3,0,param_1);
      __CRT_INIT_12(param_3,0,param_1);
      if (DAT_1002917c != (code *)0x0) {
        (*DAT_1002917c)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_1002917c != (code *)0x0)) {
        local_20 = (*DAT_1002917c)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/**************************************************/

/* Function: entry @ 1001afb5 */

void entry(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_1);
  return;
}



/**************************************************/

/* Function: ___report_gsfailure @ 1001afd6 */

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
  
  _DAT_100307d0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_100307d4 = &stack0x00000004;
  _DAT_10030710 = 0x10001;
  _DAT_100306b8 = 0xc0000409;
  _DAT_100306bc = 1;
  local_32c = DAT_1002f000;
  local_328 = DAT_1002f004;
  _DAT_100306c4 = unaff_retaddr;
  _DAT_1003079c = in_GS;
  _DAT_100307a0 = in_FS;
  _DAT_100307a4 = in_ES;
  _DAT_100307a8 = in_DS;
  _DAT_100307ac = unaff_EDI;
  _DAT_100307b0 = unaff_ESI;
  _DAT_100307b4 = unaff_EBX;
  _DAT_100307b8 = in_EDX;
  _DAT_100307bc = in_ECX;
  _DAT_100307c0 = in_EAX;
  _DAT_100307c4 = unaff_EBP;
  DAT_100307c8 = unaff_retaddr;
  _DAT_100307cc = in_CS;
  _DAT_100307d8 = in_SS;
  DAT_10030708 = IsDebuggerPresent();
  FUN_1001c7ba(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_10029180);
  if (DAT_10030708 == 0) {
    FUN_1001c7ba(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/**************************************************/

/* Function: __amsg_exit @ 1001b0da */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_1001c7c2(param_1);
  pcVar1 = (code *)FUN_1001b4b9(PTR___exit_1002f008);
  (*pcVar1)(0xff);
  return;
}



/**************************************************/

/* Function: FUN_1001b0fe @ 1001b0fe */

void FUN_1001b0fe(undefined4 param_1)

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

/* Function: ___crtExitProcess @ 1001b124 */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_1001b0fe(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/**************************************************/

/* Function: FUN_1001b139 @ 1001b139 */

void FUN_1001b139(void)

{
  __lock(8);
  return;
}



/**************************************************/

/* Function: FUN_1001b142 @ 1001b142 */

void FUN_1001b142(void)

{
  FUN_1001ca39(8);
  return;
}



/**************************************************/

/* Function: FUN_1001b14b @ 1001b14b */

void FUN_1001b14b(undefined4 *param_1)

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

/* Function: __initterm_e @ 1001b163 */

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __initterm_e(undefined4 *param_1,undefined4 *param_2)

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

/* Function: __get_osplatform @ 1001b183 */

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __get_osplatform(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_100309e0 != 0)) {
    *param_1 = DAT_100309e0;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_1001cca7();
  *puVar1 = 0x16;
  FUN_1001cc48(0,0,0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __get_winmajor @ 1001b1ba */

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __get_winmajor(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_100309e0 != 0)) {
    *param_1 = DAT_100309ec;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_1001cca7();
  *puVar1 = 0x16;
  FUN_1001cc48(0,0,0,0,0);
  return 0x16;
}



/**************************************************/

/* Function: __cinit @ 1001b1f6 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_1002a3d0 != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_1002a3d0), BVar1 != 0)) {
    (*(code *)PTR___fpmath_1002a3d0)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e(&DAT_10029128,&DAT_10029140);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_1001c26d);
    puVar3 = &DAT_10029120;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_10029124);
    if ((DAT_102ed7f0 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_102ed7f0), BVar1 != 0)) {
      (*DAT_102ed7f0)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/**************************************************/

/* Function: FUN_1001b288 @ 1001b288 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1001b35b) */

void FUN_1001b288(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_10030a20 != 1) {
    DAT_10030a1c = 1;
    DAT_10030a18 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_1001b4b9(DAT_102ed7e8);
      piVar3 = (int *)FUN_1001b4b9(DAT_102ed7e4);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_1001b4b9(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_1001b14b(&DAT_10029150);
    }
    FUN_1001b14b(&DAT_10029158);
  }
  FUN_1001b355();
  if (param_3 != 0) {
    return;
  }
  DAT_10030a20 = 1;
  FUN_1001ca39(8);
  ___crtExitProcess(param_1);
  return;
}



/**************************************************/

/* Function: FUN_1001b355 @ 1001b355 */

void FUN_1001b355(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_1001ca39(8);
  }
  return;
}



/**************************************************/

/* Function: __exit @ 1001b36a */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1001b288(_Code,1,0);
  return;
}



/**************************************************/

/* Function: __cexit @ 1001b37b */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1001b288(0,0,1);
  return;
}



/**************************************************/

/* Function: __init_pointers @ 1001b38a */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1001d2c2(uVar1);
  FUN_1001d1e3(uVar1);
  FUN_1001cb42(uVar1);
  FUN_1001d1d9(uVar1);
  FUN_1001d1cf(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_1001c3ba(uVar1);
  __initp_eh_hooks(uVar1);
  PTR___exit_1002f008 = (undefined *)FUN_1001b442(__exit);
  return;
}



/**************************************************/

/* Function: FUN_1001b3d6 @ 1001b3d6 */

undefined4 FUN_1001b3d6(void)

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

/* Function: FUN_1001b442 @ 1001b442 */

int FUN_1001b442(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1002f010);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1002f00c != -1)) {
    iVar3 = DAT_1002f00c;
    pcVar2 = TlsGetValue(DAT_1002f010);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1001b49c;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1001b3d6();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1001b49c:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: __encoded_null @ 1001b4b0 */

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_1001b442(0);
  return;
}



/**************************************************/

/* Function: FUN_1001b4b9 @ 1001b4b9 */

int FUN_1001b4b9(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1002f010);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1002f00c != -1)) {
    iVar3 = DAT_1002f00c;
    pcVar2 = TlsGetValue(DAT_1002f010);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_1001b513;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1001b3d6();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_1001b513:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/**************************************************/

/* Function: FUN_1001b530 @ 1001b530 */

LPVOID FUN_1001b530(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1002f010);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1001b4b9(DAT_10030a28);
    TlsSetValue(DAT_1002f010,lpTlsValue);
  }
  return lpTlsValue;
}



/**************************************************/

/* Function: __mtterm @ 1001b562 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  
  if (DAT_1002f00c != -1) {
    pcVar1 = (code *)FUN_1001b4b9(DAT_10030a30,DAT_1002f00c);
    (*pcVar1)();
    DAT_1002f00c = -1;
  }
  if (DAT_1002f010 != 0xffffffff) {
    TlsFree(DAT_1002f010);
    DAT_1002f010 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/**************************************************/

/* Function: FUN_1001b59f @ 1001b59f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_1001b59f(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_1002f058;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_1001b3d6();
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
  *(undefined **)(param_1 + 0x68) = &DAT_1002f548;
  InterlockedIncrement((LONG *)&DAT_1002f548);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_1002f538;
  }
  ___addlocaleref(*(undefined4 *)(param_1 + 0x6c));
  FUN_1001b655();
  return;
}



/**************************************************/

/* Function: FUN_1001b655 @ 1001b655 */

void FUN_1001b655(void)

{
  FUN_1001ca39(0xc);
  return;
}



/**************************************************/

/* Function: FUN_1001b65e @ 1001b65e */

DWORD * FUN_1001b65e(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  
  dwErrCode = GetLastError();
  pcVar1 = (code *)FUN_1001b530(DAT_1002f00c);
  _Memory = (DWORD *)(*pcVar1)();
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      pcVar1 = (code *)FUN_1001b4b9(DAT_10030a2c,DAT_1002f00c,_Memory);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_1001b59f(_Memory,0);
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

/* Function: __getptd @ 1001b6d5 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_1001b65e();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/**************************************************/

/* Function: __freefls@4 @ 1001b6ed */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2005 Release */

void __freefls_4(void *param_1)

{
  LONG *lpAddend;
  int *piVar1;
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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_1002f058) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    lpAddend = *(LONG **)((int)param_1 + 0x68);
    if (lpAddend != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(lpAddend);
      if ((LVar2 == 0) && (lpAddend != (LONG *)&DAT_1002f548)) {
        _free(lpAddend);
      }
    }
    FUN_1001b7f9();
    __lock(0xc);
    piVar1 = *(int **)((int)param_1 + 0x6c);
    if (piVar1 != (int *)0x0) {
      ___removelocaleref(piVar1);
      if (((piVar1 != (int *)PTR_DAT_1002f538) && (piVar1 != (int *)&DAT_1002f460)) &&
         (*piVar1 == 0)) {
        ___freetlocinfo(piVar1);
      }
    }
    FUN_1001b805();
    _free(param_1);
  }
  return;
}



/**************************************************/

/* Function: FUN_1001b7f9 @ 1001b7f9 */

void FUN_1001b7f9(void)

{
  FUN_1001ca39(0xd);
  return;
}



/**************************************************/

/* Function: FUN_1001b805 @ 1001b805 */

void FUN_1001b805(void)

{
  FUN_1001ca39(0xc);
  return;
}



/**************************************************/

/* Function: __freeptd @ 1001b80e */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  
  if (DAT_1002f00c != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1002f010), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_1002f00c;
      pcVar2 = TlsGetValue(DAT_1002f010);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    pcVar2 = (code *)FUN_1001b4b9(DAT_10030a2c,DAT_1002f00c,0);
    (*pcVar2)();
    __freefls_4(_Ptd);
  }
  if (DAT_1002f010 != 0xffffffff) {
    TlsSetValue(DAT_1002f010,(LPVOID)0x0);
  }
  return;
}



/**************************************************/

/* Function: __mtinit @ 1001b877 */

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
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_10030a24 = GetProcAddress(hModule,"FlsAlloc");
  DAT_10030a28 = GetProcAddress(hModule,"FlsGetValue");
  DAT_10030a2c = GetProcAddress(hModule,"FlsSetValue");
  DAT_10030a30 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_10030a24 == (FARPROC)0x0) || (DAT_10030a28 == (FARPROC)0x0)) ||
      (DAT_10030a2c == (FARPROC)0x0)) || (DAT_10030a30 == (FARPROC)0x0)) {
    DAT_10030a28 = TlsGetValue_exref;
    DAT_10030a24 = (FARPROC)&LAB_1001b527;
    DAT_10030a2c = TlsSetValue_exref;
    DAT_10030a30 = TlsFree_exref;
  }
  DAT_1002f010 = TlsAlloc();
  if ((DAT_1002f010 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_1002f010,DAT_10030a28), BVar1 != 0))
  {
    __init_pointers();
    DAT_10030a24 = (FARPROC)FUN_1001b442(DAT_10030a24);
    DAT_10030a28 = (FARPROC)FUN_1001b442(DAT_10030a28);
    DAT_10030a2c = (FARPROC)FUN_1001b442(DAT_10030a2c);
    DAT_10030a30 = (FARPROC)FUN_1001b442(DAT_10030a30);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar3 = (code *)FUN_1001b4b9(DAT_10030a24,__freefls_4);
      DAT_1002f00c = (*pcVar3)();
      if ((DAT_1002f00c != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        pcVar3 = (code *)FUN_1001b4b9(DAT_10030a2c,DAT_1002f00c,pDVar4);
        iVar2 = (*pcVar3)();
        if (iVar2 != 0) {
          FUN_1001b59f(pDVar4,0);
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

/* Function: _free @ 1001b9fb */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  if (_Memory != (void *)0x0) {
    if (DAT_102ed6cc == 3) {
      __lock(4);
      iVar1 = thunk_FUN_1001de29(_Memory);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,_Memory);
      }
      FUN_1001ba51();
      if (iVar1 != 0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_10030b44,0,_Memory);
    if (BVar2 == 0) {
      puVar3 = (undefined4 *)FUN_1001cca7();
      DVar4 = GetLastError();
      uVar5 = FUN_1001cc6c(DVar4);
      *puVar3 = uVar5;
    }
  }
  return;
}



/**************************************************/

/* Function: FUN_1001ba51 @ 1001ba51 */

void FUN_1001ba51(void)

{
  FUN_1001ca39(4);
  return;
}



/**************************************************/

/* Function: __malloc_crt @ 1001ba89 */

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
    if (DAT_10030a34 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10030a34 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __calloc_crt @ 1001bac9 */

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = (void *)__calloc_impl(_Count,_Size,0);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_10030a34 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10030a34 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: __realloc_crt @ 1001bb11 */

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
    if (DAT_10030a34 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_10030a34 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/**************************************************/

/* Function: __ioinit @ 1001bb5c */

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
  
  uStack_c = 0x1001bb68;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1001bd93:
    iVar7 = -1;
  }
  else {
    DAT_102ed6d0 = 0x20;
    DAT_102ed6e0 = puVar2;
    for (; puVar2 < DAT_102ed6e0 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_102ed6d0 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_102ed6d0, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_102ed6e0)[iVar7] = puVar2;
        DAT_102ed6d0 = DAT_102ed6d0 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_102ed6e0)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_102ed6e0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_1001bd93;
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
      piVar8 = DAT_102ed6e0 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_1001bd93;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_102ed6d0);
    iVar7 = 0;
  }
  return iVar7;
}



/**************************************************/

/* Function: __ioterm @ 1001bd9c */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_102ed6e0;
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
  } while ((int)puVar2 < 0x102ed7e0);
  return;
}



/**************************************************/

/* Function: __setenvp @ 1001bde8 */

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
  
  if (DAT_102ed7ec == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_100306a4;
  if (DAT_100306a4 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_100306a4;
    DAT_10030a00 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_100306a4);
          DAT_100306a4 = (char *)0x0;
          *puVar1 = 0;
          _DAT_102ed7e0 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_10030a00);
            DAT_10030a00 = (undefined4 *)0x0;
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

/* Function: parse_cmdline @ 1001bec3 */

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
        goto LAB_1001bf55;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_1001bf55:
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

/* Function: __setargv @ 1001c05b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  void *pvVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_102ed7ec == 0) {
    ___initmbctable();
  }
  DAT_10030b3c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_10030a38,0x104);
  _DAT_10030a10 = &DAT_10030a38;
  if ((DAT_102ed7f4 == (char *)0x0) || (local_8 = DAT_102ed7f4, *DAT_102ed7f4 == '\0')) {
    local_8 = &DAT_10030a38;
  }
  parse_cmdline(0,0,&local_c);
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    iVar2 = local_c * 4;
    _Size = iVar2 + local_10;
    if ((local_10 <= _Size) && (pvVar1 = __malloc_crt(_Size), pvVar1 != (void *)0x0)) {
      parse_cmdline(pvVar1,(void *)(iVar2 + (int)pvVar1),&local_c);
      _DAT_100309f4 = local_c - 1;
      _DAT_100309f8 = pvVar1;
      return 0;
    }
  }
  return -1;
}



/**************************************************/

/* Function: ___crtGetEnvironmentStringsA @ 1001c114 */

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
  if (DAT_10030b40 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10030b40 = 1;
      goto LAB_1001c166;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_10030b40 = 2;
    }
  }
  if (DAT_10030b40 != 1) {
    if ((DAT_10030b40 != 2) && (DAT_10030b40 != 0)) {
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
LAB_1001c166:
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

/* Function: __RTC_Initialize @ 1001c249 */

/* WARNING: Removing unreachable block (ram,0x1001c25b) */
/* WARNING: Removing unreachable block (ram,0x1001c261) */
/* WARNING: Removing unreachable block (ram,0x1001c263) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}



/**************************************************/

/* Function: ___heap_select @ 1001c291 */

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

/* Function: __heap_init @ 1001c2ec */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_10030b44 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_10030b44 == (HANDLE)0x0) {
    return 0;
  }
  DAT_102ed6cc = ___heap_select();
  if ((DAT_102ed6cc == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_10030b44);
    DAT_10030b44 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}



/**************************************************/

/* Function: __heap_term @ 1001c346 */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_102ed6cc == 3) {
    iVar2 = 0;
    if (0 < DAT_102ed6ac) {
      puVar1 = (undefined4 *)((int)DAT_102ed6b0 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_10030b44,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_102ed6ac);
    }
    HeapFree(DAT_10030b44,0,DAT_102ed6b0);
  }
  HeapDestroy(DAT_10030b44);
  DAT_10030b44 = (HANDLE)0x0;
  return;
}



/**************************************************/

/* Function: FUN_1001c3ba @ 1001c3ba */

void FUN_1001c3ba(void)

{
  return;
}



/**************************************************/

/* Function: FUN_1001c3bb @ 1001c3bb */

undefined4 FUN_1001c3bb(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = FUN_1001b65e();
  uVar6 = 0;
  if (iVar4 != 0) {
    piVar1 = *(int **)(iVar4 + 0x5c);
    piVar5 = piVar1;
    do {
      if (*piVar5 == param_1) break;
      piVar5 = piVar5 + 3;
    } while (piVar5 < piVar1 + DAT_1002f0dc * 3);
    if ((piVar1 + DAT_1002f0dc * 3 <= piVar5) || (*piVar5 != param_1)) {
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
        uVar6 = *(undefined4 *)(iVar4 + 0x60);
        *(undefined4 *)(iVar4 + 0x60) = param_2;
        if (piVar5[1] == 8) {
          if (DAT_1002f0d0 < DAT_1002f0d4 + DAT_1002f0d0) {
            iVar7 = DAT_1002f0d0 * 0xc;
            iVar8 = DAT_1002f0d0;
            do {
              *(undefined4 *)(iVar7 + 8 + *(int *)(iVar4 + 0x5c)) = 0;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0xc;
            } while (iVar8 < DAT_1002f0d4 + DAT_1002f0d0);
          }
          iVar8 = *piVar5;
          uVar3 = *(undefined4 *)(iVar4 + 100);
          if (iVar8 == -0x3fffff72) {
            *(undefined4 *)(iVar4 + 100) = 0x83;
          }
          else if (iVar8 == -0x3fffff70) {
            *(undefined4 *)(iVar4 + 100) = 0x81;
          }
          else if (iVar8 == -0x3fffff6f) {
            *(undefined4 *)(iVar4 + 100) = 0x84;
          }
          else if (iVar8 == -0x3fffff6d) {
            *(undefined4 *)(iVar4 + 100) = 0x85;
          }
          else if (iVar8 == -0x3fffff73) {
            *(undefined4 *)(iVar4 + 100) = 0x82;
          }
          else if (iVar8 == -0x3fffff71) {
            *(undefined4 *)(iVar4 + 100) = 0x86;
          }
          else if (iVar8 == -0x3fffff6e) {
            *(undefined4 *)(iVar4 + 100) = 0x8a;
          }
          (*pcVar2)(8,*(undefined4 *)(iVar4 + 100));
          *(undefined4 *)(iVar4 + 100) = uVar3;
        }
        else {
          piVar5[2] = 0;
          (*pcVar2)(piVar5[1]);
        }
        *(undefined4 *)(iVar4 + 0x60) = uVar6;
      }
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}



/**************************************************/

/* Function: __SEH_prolog4 @ 1001c534 */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_1c + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_2 + 4) = DAT_1002f000 ^ (uint)&stack0x00000008;
  *(undefined4 *)((int)auStack_1c + param_2) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/**************************************************/

/* Function: __SEH_epilog4 @ 1001c579 */

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

/* Function: __except_handler4 @ 1001c590 */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __except_handler4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar8 = (int *)(*(uint *)(param_2 + 8) ^ DAT_1002f000);
  bVar3 = false;
  local_c = 1;
  iVar1 = param_2 + 0x10;
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_8 = param_1;
    local_4 = param_3;
    *(int ***)(param_2 + -4) = &local_8;
    iVar7 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_2 + 0xc) == -2) {
      return 1;
    }
    do {
      iVar2 = piVar8[iVar7 * 3 + 4];
      if (piVar8[iVar7 * 3 + 5] != 0) {
        iVar4 = _EH4_CallFilterFunc(piVar8[iVar7 * 3 + 5],iVar1);
        bVar3 = true;
        if (iVar4 < 0) {
          local_c = 0;
          goto LAB_1001c63b;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) && (DAT_102ed6c8 != (code *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&DAT_102ed6c8), BVar5 != 0)) {
            (*DAT_102ed6c8)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(int *)(param_2 + 0xc) != iVar7) {
            _EH4_LocalUnwind(param_2,iVar7,iVar1,&DAT_1002f000);
          }
          *(int *)(param_2 + 0xc) = iVar2;
          if (*piVar8 != -2) {
            __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
          }
          __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
          uVar6 = _EH4_TransferToHandler((piVar8 + iVar7 * 3 + 4)[2],iVar1);
          return uVar6;
        }
      }
      iVar7 = iVar2;
    } while (iVar2 != -2);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0xc) == -2) {
      return 1;
    }
    _EH4_LocalUnwind(param_2,0xfffffffe,iVar1,&DAT_1002f000);
  }
LAB_1001c63b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}



/**************************************************/

/* Function: ___security_init_cookie @ 1001c726 */

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
  if ((DAT_1002f000 == 0xbb40e64e) || ((DAT_1002f000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1002f000 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1002f000 == 0xbb40e64e) {
      DAT_1002f000 = 0xbb40e64f;
    }
    else if ((DAT_1002f000 & 0xffff0000) == 0) {
      DAT_1002f000 = DAT_1002f000 | DAT_1002f000 << 0x10;
    }
  }
  DAT_1002f004 = ~DAT_1002f000;
  return;
}



/**************************************************/

/* Function: FUN_1001c7ba @ 1001c7ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c7ba(void)

{
  _DAT_102ed6c4 = 0;
  return;
}



/**************************************************/

/* Function: FUN_1001c7c2 @ 1001c7c2 */

void FUN_1001c7c2(int param_1)

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
    if (param_1 == (&DAT_1002f0e0)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_100306b0 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1002f0e4);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_10030b48,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10030c65 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_10030b61,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_10030b61,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_10030b61);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_10030b61);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x10030b26),
                           (int)&DAT_10030e5c - (int)(sVar5 + 0x10030b26),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_10030b48,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_10030b48,0x314,*(char **)(uVar6 * 8 + 0x1002f0e4));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1001f31b(&DAT_10030b48,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/**************************************************/

/* Function: __FF_MSGBANNER @ 1001c962 */

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
    if (DAT_100306b0 != 1) {
      return;
    }
  }
  FUN_1001c7c2(0xfc);
  FUN_1001c7c2(0xff);
  return;
}



/**************************************************/

/* Function: __mtinitlocks @ 1001c99b */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_10030e60;
  do {
    if ((&DAT_1002f19c)[iVar2 * 2] == 1) {
      (&DAT_1002f198)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_1002f198)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_1002f198)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/**************************************************/

/* Function: __mtdeletelocks @ 1001c9e4 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_1002f198;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1002f2b8);
  puVar1 = &DAT_1002f198;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1002f2b8);
  return;
}



/**************************************************/

/* Function: FUN_1001ca39 @ 1001ca39 */

void FUN_1001ca39(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1002f198)[param_1 * 2]);
  return;
}



/**************************************************/

/* Function: __mtinitlocknum @ 1001ca4e */

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
  if (DAT_10030b44 == 0) {
    __FF_MSGBANNER();
    FUN_1001c7c2(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_1002f198 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_1001cca7();
      *puVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          puVar2 = (undefined4 *)FUN_1001cca7();
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
      FUN_1001cb08();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/**************************************************/

/* Function: FUN_1001cb08 @ 1001cb08 */

void FUN_1001cb08(void)

{
  FUN_1001ca39(10);
  return;
}



/**************************************************/

/* Function: __lock @ 1001cb11 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_1002f198)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1002f198)[_File * 2]);
  return;
}



/**************************************************/

/* Function: FUN_1001cb42 @ 1001cb42 */

void FUN_1001cb42(undefined4 param_1)

{
  DAT_10030fb0 = param_1;
  return;
}



/**************************************************/

/* Function: __invoke_watson @ 1001cb4c */

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  undefined4 uVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  uVar1 = DAT_1002f000;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1001c7ba(2);
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(uVar1);
  return;
}



/**************************************************/

/* Function: FUN_1001cc48 @ 1001cc48 */

void FUN_1001cc48(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_1001b4b9(DAT_10030fb0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001cc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1001c7ba(2);
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/**************************************************/

/* Function: FUN_1001cc6c @ 1001cc6c */

int FUN_1001cc6c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1002f2b8)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1002f2bc);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}



/**************************************************/

/* Function: FUN_1001cca7 @ 1001cca7 */

undefined * FUN_1001cca7(void)

{
  int iVar1;
  
  iVar1 = FUN_1001b65e();
  if (iVar1 == 0) {
    return &DAT_1002f420;
  }
  return (undefined *)(iVar1 + 8);
}



/**************************************************/

/* Function: FUN_1001ccba @ 1001ccba */

undefined * FUN_1001ccba(void)

{
  int iVar1;
  
  iVar1 = FUN_1001b65e();
  if (iVar1 == 0) {
    return &DAT_1002f424;
  }
  return (undefined *)(iVar1 + 0xc);
}



/**************************************************/

/* Function: FUN_1001cccd @ 1001cccd */

void FUN_1001cccd(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_1001ccba();
  *puVar1 = param_1;
  uVar2 = FUN_1001cc6c(param_1);
  puVar1 = (undefined4 *)FUN_1001cca7();
  *puVar1 = uVar2;
  return;
}



/**************************************************/

/* Function: FUN_1001cceb @ 1001cceb */

undefined4 FUN_1001cceb(undefined4 param_1)

{
  uint uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  undefined4 uVar6;
  
  _Memory = (undefined4 *)FUN_1001b4b9(DAT_102ed7e8);
  puVar2 = (undefined4 *)FUN_1001b4b9(DAT_102ed7e4);
  if (_Memory <= puVar2) {
    uVar1 = ((int)puVar2 - (int)_Memory) + 4;
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
        puVar2 = (undefined4 *)((int)pvVar5 + ((int)puVar2 - (int)_Memory >> 2) * 4);
        DAT_102ed7e8 = FUN_1001b442(pvVar5);
      }
      uVar6 = FUN_1001b442(param_1);
      *puVar2 = uVar6;
      DAT_102ed7e4 = FUN_1001b442(puVar2 + 1);
      return param_1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: __onexit @ 1001cdd3 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_1001b139();
  p_Var1 = (_onexit_t)FUN_1001cceb(_Func);
  FUN_1001ce09();
  return p_Var1;
}



/**************************************************/

/* Function: FUN_1001ce09 @ 1001ce09 */

void FUN_1001ce09(void)

{
  FUN_1001b142();
  return;
}



/**************************************************/

/* Function: _atexit @ 1001ce0f */

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

/* Function: __initp_misc_cfltcvt_tab @ 1001ce21 */

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2005 Release */

void __initp_misc_cfltcvt_tab(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    puVar1 = (undefined4 *)((int)&PTR_LAB_1002f428 + uVar3);
    uVar2 = FUN_1001b442(*puVar1);
    uVar3 = uVar3 + 4;
    *puVar1 = uVar2;
  } while (uVar3 < 0x28);
  return;
}



/**************************************************/

/* Function: __ValidateImageBase @ 1001ce40 */

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

/* Function: __FindPESection @ 1001ce70 */

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

/* Function: __IsNonwritableInCurrentImage @ 1001cec0 */

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
  local_c = DAT_1002f000 ^ 0x1002e118;
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

/* Function: __initp_eh_hooks @ 1001cfb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  _DAT_10030fb4 = FUN_1001b442(&LAB_1001cf7b);
  return;
}



/**************************************************/

/* Function: __initp_misc_winsig @ 1001cfc5 */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __initp_misc_winsig(undefined4 param_1)

{
  DAT_10030fb8 = param_1;
  DAT_10030fbc = param_1;
  DAT_10030fc0 = param_1;
  DAT_10030fc4 = param_1;
  return;
}



/**************************************************/

/* Function: siglookup @ 1001cfde */

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
  } while (uVar1 < DAT_1002f0dc * 0xc + param_1);
  if ((DAT_1002f0dc * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/**************************************************/

/* Function: ___get_sigabrt @ 1001d012 */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_1001b4b9(DAT_10030fc0);
  return p_Var1;
}



/**************************************************/

/* Function: _raise @ 1001d01f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  
  iVar6 = 0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_10030fb8;
        uVar4 = DAT_10030fb8;
        goto LAB_1001d0d4;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_1001d0b2;
        if (_SigNum != 8) goto LAB_1001d096;
      }
    }
    iVar6 = FUN_1001b65e();
    if (iVar6 == 0) {
      return -1;
    }
    iVar2 = siglookup(*(undefined4 *)(iVar6 + 0x5c));
    puVar5 = (undefined4 *)(iVar2 + 8);
    pcVar3 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_10030fc4;
      uVar4 = DAT_10030fc4;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_10030fbc;
      uVar4 = DAT_10030fbc;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1001d096:
        puVar5 = (undefined4 *)FUN_1001cca7();
        *puVar5 = 0x16;
        FUN_1001cc48(0,0,0,0,0);
        return -1;
      }
LAB_1001d0b2:
      puVar5 = &DAT_10030fc0;
      uVar4 = DAT_10030fc0;
    }
LAB_1001d0d4:
    bVar1 = true;
    pcVar3 = (code *)FUN_1001b4b9(uVar4);
  }
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = *(undefined4 *)(iVar6 + 0x60);
    *(undefined4 *)(iVar6 + 0x60) = 0;
    if (_SigNum == 8) {
      local_34 = *(undefined4 *)(iVar6 + 100);
      *(undefined4 *)(iVar6 + 100) = 0x8c;
      goto LAB_1001d138;
    }
  }
  else {
LAB_1001d138:
    if (_SigNum == 8) {
      for (local_28 = DAT_1002f0d0; local_28 < DAT_1002f0d4 + DAT_1002f0d0; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + *(int *)(iVar6 + 0x5c)) = 0;
      }
      goto LAB_1001d172;
    }
  }
  uVar4 = __encoded_null();
  *puVar5 = uVar4;
LAB_1001d172:
  FUN_1001d193();
  if (_SigNum == 8) {
    (*pcVar3)(8,*(undefined4 *)(iVar6 + 100));
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  *(undefined4 *)(iVar6 + 0x60) = local_30;
  if (_SigNum == 8) {
    *(undefined4 *)(iVar6 + 100) = local_34;
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1001d193 @ 1001d193 */

void FUN_1001d193(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1001ca39(0);
  }
  return;
}



/**************************************************/

/* Function: FUN_1001d1cf @ 1001d1cf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001d1cf(undefined4 param_1)

{
  _DAT_10030fcc = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1001d1d9 @ 1001d1d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001d1d9(undefined4 param_1)

{
  _DAT_10030fd8 = param_1;
  return;
}



/**************************************************/

/* Function: FUN_1001d1e3 @ 1001d1e3 */

void FUN_1001d1e3(undefined4 param_1)

{
  DAT_10030fdc = param_1;
  return;
}



/**************************************************/

/* Function: ___crtInitCritSecNoSpinCount@8 @ 1001d1ed */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/**************************************************/

/* Function: ___crtInitCritSecAndSpinCount @ 1001d1fd */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1002e178;
  uStack_c = 0x1001d209;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_1001b4b9(DAT_10030fdc);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1001d273;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_1001d262:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1001d262;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1001d262;
  }
  DAT_10030fdc = FUN_1001b442(pcVar1);
LAB_1001d273:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/**************************************************/

/* Function: FUN_1001d2c2 @ 1001d2c2 */

void FUN_1001d2c2(undefined4 param_1)

{
  DAT_10030fe0 = param_1;
  return;
}



/**************************************************/

/* Function: __callnewh @ 1001d2cc */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_1001b4b9(DAT_10030fe0);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: _strcmp @ 1001d2f0 */

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
      if (bVar4 != *_Str2) goto LAB_1001d334;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1001d300;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1001d334;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1001d334;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1001d300:
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
LAB_1001d334:
  return (uint)bVar5 * -2 + 1;
}



/**************************************************/

/* Function: ___freetlocinfo @ 1001d378 */

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_1002fb40)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(undefined4 *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 *)((int)param_1 + 0xbc));
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
  if ((ppuVar2 != &PTR_DAT_1002fa80) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1002f458) &&
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

/* Function: ___addlocaleref @ 1001d4b8 */

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void ___addlocaleref(LONG *param_1)

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
    if (((undefined *)pLVar1[-2] != &DAT_1002f458) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: ___removelocaleref @ 1001d53e */

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * ___removelocaleref(LONG *param_1)

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
      if (((undefined *)pLVar1[-2] != &DAT_1002f458) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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

/* Function: __updatetlocinfoEx_nolock @ 1001d5ca */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

int * __updatetlocinfoEx_nolock(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int *unaff_EDI;
  
  if ((unaff_EDI != (int *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    piVar1 = (int *)*in_EAX;
    if (piVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref();
      if (piVar1 != (int *)0x0) {
        ___removelocaleref(piVar1);
        if ((*piVar1 == 0) && (piVar1 != (int *)&DAT_1002f460)) {
          ___freetlocinfo(piVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (int *)0x0;
}



/**************************************************/

/* Function: ___updatetlocinfo @ 1001d608 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1002fb74) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1001d672();
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

/* Function: FUN_1001d672 @ 1001d672 */

void FUN_1001d672(void)

{
  FUN_1001ca39(0xc);
  return;
}



/**************************************************/

/* Function: FUN_1001d67e @ 1001d67e */

undefined4 FUN_1001d67e(void)

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

/* Function: setSBCS @ 1001d6ad */

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
    *puVar1 = puVar1[(int)&DAT_1002f548 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_1002f548 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/**************************************************/

/* Function: setSBUpLow @ 1001d702 */

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
  
  local_8 = DAT_1002f000 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_1001d869:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_1001d869;
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
          goto LAB_1001d810;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_1001d810:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}



/**************************************************/

/* Function: ___updatetmbcinfo @ 1001d88c */

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
  if (((p_Var1->_ownlocale & DAT_1002fb74) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_1002f970) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_1002f548)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_1002f970;
      lpAddend = (pthreadmbcinfo)PTR_DAT_1002f970;
      InterlockedIncrement((LONG *)PTR_DAT_1002f970);
    }
    FUN_1001d927();
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

/* Function: FUN_1001d927 @ 1001d927 */

void FUN_1001d927(void)

{
  FUN_1001ca39(0xd);
  return;
}



/**************************************************/

/* Function: _LocaleUpdate @ 1001d930 */

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
    if ((*(undefined **)this != PTR_DAT_1002f538) && ((p_Var2->_ownlocale & DAT_1002fb74) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_1002f970) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_1002fb74) == 0)) {
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

/* Function: getSystemCP @ 1001d9b2 */

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
  DAT_10031008 = 0;
  if (unaff_ESI == -2) {
    DAT_10031008 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_10031008 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_10031008 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_10031008 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/**************************************************/

/* Function: FUN_1001da2c @ 1001da2c */

void FUN_1001da2c(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  int extraout_ECX;
  undefined2 *puVar10;
  int iVar11;
  BYTE *pBVar12;
  threadmbcinfostruct *unaff_EDI;
  undefined8 uVar13;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_1001da68:
    if (*(uint *)((int)&DAT_1002f978 + uVar5) != uVar4) goto code_r0x1001da74;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar9 = &DAT_1002f988 + (int)local_20 * 0x30;
    local_20 = pbVar9;
    do {
      for (; (*pbVar9 != 0 && (bVar3 = pbVar9[1], bVar3 != 0)); pbVar9 = pbVar9 + 2) {
        for (uVar5 = (uint)*pbVar9; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1002f974);
          bVar3 = pbVar9[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar9 = local_20 + 8;
      local_20 = pbVar9;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar7 = FUN_1001d67e();
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    puVar8 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1002f97c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_1001db99;
  }
LAB_1001da55:
  setSBCS(unaff_EDI);
LAB_1001dbf6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x1001da74:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x1001da81;
  goto LAB_1001da68;
code_r0x1001da81:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_1001dbf6;
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
            pbVar9 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar9 = *pbVar9 | 4;
          }
          pBVar1 = pBVar12 + 1;
          pBVar12 = pBVar12 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar9 = (byte *)(param_2 + 0x1e);
      iVar11 = 0xfe;
      do {
        *pbVar9 = *pbVar9 | 8;
        pbVar9 = pbVar9 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar13 = FUN_1001d67e();
      *(int *)(param_2 + 0xc) = (int)uVar13;
      *(int *)(param_2 + 8) = (int)((ulonglong)uVar13 >> 0x20);
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1001db99:
    setSBUpLow(unaff_EDI);
    goto LAB_1001dbf6;
  }
  if (DAT_10031008 == 0) goto LAB_1001dbf6;
  goto LAB_1001da55;
}



/**************************************************/

/* Function: __setmbcp @ 1001dc05 */

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
      local_24 = FUN_1001da2c(iVar2,ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_1002f548)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_1002fb74 & 1) == 0)) {
          __lock(0xd);
          _DAT_10031018 = ptVar3->mbcodepage;
          _DAT_1003101c = ptVar3->ismbcodepage;
          _DAT_10031020 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_1003100c)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_1002f768)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_1002f870)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_1002f970);
          if ((LVar4 == 0) && (PTR_DAT_1002f970 != &DAT_1002f548)) {
            _free(PTR_DAT_1002f970);
          }
          PTR_DAT_1002f970 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_1001dd66();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_1002f548) {
          _free(ptVar3);
        }
        puVar5 = (undefined4 *)FUN_1001cca7();
        *puVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/**************************************************/

/* Function: FUN_1001dd66 @ 1001dd66 */

void FUN_1001dd66(void)

{
  FUN_1001ca39(0xd);
  return;
}



/**************************************************/

/* Function: ___initmbctable @ 1001dd9f */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_102ed7ec == 0) {
    __setmbcp(-3);
    DAT_102ed7ec = 1;
  }
  return 0;
}



/**************************************************/

/* Function: ___sbh_heap_init @ 1001ddbd */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 ___sbh_heap_init(undefined4 param_1)

{
  DAT_102ed6b0 = HeapAlloc(DAT_10030b44,0,0x140);
  if (DAT_102ed6b0 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10031024 = 0;
  DAT_102ed6ac = 0;
  DAT_102ed6b8 = DAT_102ed6b0;
  DAT_102ed6b4 = param_1;
  DAT_102ed6bc = 0x10;
  return 1;
}



/**************************************************/

/* Function: thunk_FUN_1001de29 @ 1001de05 */

void thunk_FUN_1001de29(void)

{
  FUN_1001de29();
  return;
}



/**************************************************/

/* Function: FUN_1001de29 @ 1001de29 */

void __thiscall FUN_1001de29(uint param_1,int param_2)

{
  uint in_EAX;
  
  for (; (in_EAX < param_1 && (0xfffff < (uint)(param_2 - *(int *)(in_EAX + 0xc))));
      in_EAX = in_EAX + 0x14) {
  }
  return;
}



/**************************************************/

/* Function: ___sbh_free_block @ 1001de30 */

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void ___sbh_free_block(uint *param_1,int param_2)

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
    puVar10 = (uint *)(((int)local_8 >> 4) + -1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) + -1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) + -1);
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
      if (DAT_10031024 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_102ed6c0 * 0x8000 + DAT_10031024[3]),0x8000,0x4000);
        DAT_10031024[2] = DAT_10031024[2] | 0x80000000U >> ((byte)DAT_102ed6c0 & 0x1f);
        *(undefined4 *)(DAT_10031024[4] + 0xc4 + DAT_102ed6c0 * 4) = 0;
        *(char *)(DAT_10031024[4] + 0x43) = *(char *)(DAT_10031024[4] + 0x43) + -1;
        if (*(char *)(DAT_10031024[4] + 0x43) == '\0') {
          DAT_10031024[1] = DAT_10031024[1] & 0xfffffffe;
        }
        if (DAT_10031024[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10031024[3],0,0x8000);
          HeapFree(DAT_10030b44,0,(LPVOID)DAT_10031024[4]);
          _memmove(DAT_10031024,DAT_10031024 + 5,
                   (DAT_102ed6ac * 0x14 - (int)DAT_10031024) + -0x14 + DAT_102ed6b0);
          DAT_102ed6ac = DAT_102ed6ac + -1;
          if (DAT_10031024 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_102ed6b8 = DAT_102ed6b0;
        }
      }
      DAT_10031024 = param_1;
      DAT_102ed6c0 = uVar14;
    }
  }
  return;
}



/**************************************************/

/* Function: ___sbh_alloc_new_region @ 1001e144 */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_102ed6ac == DAT_102ed6bc) {
    pvVar1 = HeapReAlloc(DAT_10030b44,0,DAT_102ed6b0,(DAT_102ed6bc + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_102ed6bc = DAT_102ed6bc + 0x10;
    DAT_102ed6b0 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_102ed6ac * 0x14 + (int)DAT_102ed6b0);
  pvVar1 = HeapAlloc(DAT_10030b44,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_102ed6ac = DAT_102ed6ac + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_10030b44,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/**************************************************/

/* Function: ___sbh_alloc_new_group @ 1001e1f4 */

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int ___sbh_alloc_new_group(int param_1)

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

/* Function: ___sbh_resize_block @ 1001e2fa */

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar8 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar8;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  param_3 = *(int *)(param_2 + -4) + -1;
  puVar9 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar9;
  if (param_3 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + param_3) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar9[1] == puVar9[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar8);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar8);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar9[2] + 4) = puVar9[1];
    *(uint *)(puVar9[1] + 8) = puVar9[2];
    iVar6 = uVar13 + (param_3 - uVar12);
    if (0 < iVar6) {
      uVar13 = (iVar6 >> 4) - 1;
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
        cVar7 = *(char *)(uVar13 + 4 + uVar8);
        *(char *)(uVar13 + 4 + uVar8) = cVar7 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar7 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar9 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar7 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar9 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar9 = *puVar9 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar4) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < param_3) {
    param_3 = param_3 - uVar12;
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
      if (puVar9[1] == puVar9[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar8);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar8);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar9[2] + 4) = puVar9[1];
      *(uint *)(puVar9[1] + 8) = puVar9[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar6 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar6;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar7 = *(char *)(uVar11 + 4 + uVar8);
      *(char *)(uVar11 + 4 + uVar8) = cVar7 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar7 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar9 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar7 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar9 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar9 = *puVar9 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}



/**************************************************/

/* Function: ___sbh_alloc_block @ 1001e5d9 */

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint local_c;
  int local_8;
  
  puVar10 = DAT_102ed6b0 + DAT_102ed6ac * 5;
  uVar8 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar9 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar7 = (byte)iVar9;
  param_1 = DAT_102ed6b8;
  if (iVar9 < 0x20) {
    uVar16 = 0xffffffff >> (bVar7 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar16 = 0;
    local_c = 0xffffffff >> (bVar7 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar10 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar16) == 0));
      param_1 = param_1 + 5) {
  }
  puVar14 = DAT_102ed6b0;
  if (param_1 == puVar10) {
    for (; (puVar14 < DAT_102ed6b8 && ((puVar14[1] & local_c) == 0 && (*puVar14 & uVar16) == 0));
        puVar14 = puVar14 + 5) {
    }
    param_1 = puVar14;
    if (puVar14 == DAT_102ed6b8) {
      for (; (puVar14 < puVar10 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
      }
      puVar15 = DAT_102ed6b0;
      param_1 = puVar14;
      if (puVar14 == puVar10) {
        for (; (puVar15 < DAT_102ed6b8 && (puVar15[2] == 0)); puVar15 = puVar15 + 5) {
        }
        param_1 = puVar15;
        if ((puVar15 == DAT_102ed6b8) &&
           (param_1 = (uint *)___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      uVar6 = ___sbh_alloc_new_group(param_1);
      *(undefined4 *)param_1[4] = uVar6;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar16) == 0)) {
    local_8 = 0;
    puVar10 = (uint *)(piVar5 + 0x11);
    uVar12 = piVar5[0x31];
    while ((uVar12 & local_c) == 0 && (*puVar10 & uVar16) == 0) {
      local_8 = local_8 + 1;
      puVar14 = puVar10 + 0x21;
      puVar10 = puVar10 + 1;
      uVar12 = *puVar14;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar9 = 0;
  uVar16 = piVar5[local_8 + 0x11] & uVar16;
  if (uVar16 == 0) {
    uVar16 = piVar5[local_8 + 0x31] & local_c;
    iVar9 = 0x20;
  }
  for (; -1 < (int)uVar16; uVar16 = uVar16 * 2) {
    iVar9 = iVar9 + 1;
  }
  piVar13 = (int *)piVar3[iVar9 * 2 + 1];
  iVar11 = *piVar13 - uVar8;
  iVar17 = (iVar11 >> 4) + -1;
  if (0x3f < iVar17) {
    iVar17 = 0x3f;
  }
  DAT_102ed6b8 = param_1;
  if (iVar17 != iVar9) {
    if (piVar13[1] == piVar13[2]) {
      if (iVar9 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar9 + 4);
        uVar16 = ~(0x80000000U >> ((byte)iVar9 & 0x1f));
        piVar5[local_8 + 0x11] = uVar16 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar16;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar9 + 4);
        uVar16 = ~(0x80000000U >> ((byte)iVar9 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar16;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar16;
        }
      }
    }
    *(int *)(piVar13[2] + 4) = piVar13[1];
    *(int *)(piVar13[1] + 8) = piVar13[2];
    if (iVar11 == 0) goto LAB_1001e879;
    piVar1 = piVar3 + iVar17 * 2;
    iVar9 = piVar1[1];
    piVar13[2] = (int)piVar1;
    piVar13[1] = iVar9;
    piVar1[1] = (int)piVar13;
    *(int **)(piVar13[1] + 8) = piVar13;
    if (piVar13[1] == piVar13[2]) {
      cVar4 = *(char *)(iVar17 + 4 + (int)piVar5);
      *(char *)(iVar17 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar7 = (byte)iVar17;
      if (iVar17 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar7 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar7 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar11 != 0) {
    *piVar13 = iVar11;
    *(int *)(iVar11 + -4 + (int)piVar13) = iVar11;
  }
LAB_1001e879:
  piVar13 = (int *)((int)piVar13 + iVar11);
  *piVar13 = uVar8 + 1;
  *(uint *)((int)piVar13 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar3;
  *piVar3 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_10031024)) && (local_8 == DAT_102ed6c0)) {
    DAT_10031024 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar13 + 1;
}



/**************************************************/

/* Function: _V6_HeapAlloc @ 1001e8bc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

undefined4 _V6_HeapAlloc(uint param_1)

{
  undefined4 local_20;
  
  local_20 = 0;
  if (param_1 <= DAT_102ed6b4) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1001e902();
  }
  return local_20;
}



/**************************************************/

/* Function: FUN_1001e902 @ 1001e902 */

void FUN_1001e902(void)

{
  FUN_1001ca39(4);
  return;
}



/**************************************************/

/* Function: _malloc @ 1001e90b */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    puVar3 = (undefined4 *)FUN_1001cca7();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_10030b44 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_1001c7c2(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_102ed6cc == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_1001e97c:
      pvVar1 = HeapAlloc(DAT_10030b44,0,dwBytes);
    }
    else if ((DAT_102ed6cc != 3) || (pvVar1 = (LPVOID)_V6_HeapAlloc(_Size), pvVar1 == (LPVOID)0x0))
    {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_1001e97c;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_10031048 == 0) {
      puVar3 = (undefined4 *)FUN_1001cca7();
      *puVar3 = 0xc;
      goto LAB_1001e9aa;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_1001e9aa:
      puVar3 = (undefined4 *)FUN_1001cca7();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/**************************************************/

/* Function: __calloc_impl @ 1001e9ce */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

void * __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Dst;
  uint dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    param_1 = param_1 * param_2;
    dwBytes = param_1;
    if (param_1 == 0) {
      dwBytes = 1;
    }
    do {
      _Dst = (void *)0x0;
      if (dwBytes < 0xffffffe1) {
        if ((DAT_102ed6cc == 3) && (dwBytes = dwBytes + 0xf & 0xfffffff0, param_1 <= DAT_102ed6b4))
        {
          __lock(4);
          _Dst = (void *)___sbh_alloc_block(param_1);
          FUN_1001eaca();
          if (_Dst != (void *)0x0) {
            _memset(_Dst,0,param_1);
            goto LAB_1001ea7f;
          }
        }
        else {
LAB_1001ea7f:
          if (_Dst != (void *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_10030b44,8,dwBytes);
      }
      if (_Dst != (void *)0x0) {
        return _Dst;
      }
      if (DAT_10031048 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (void *)0x0;
        }
        *param_3 = 0xc;
        return (void *)0x0;
      }
      iVar2 = __callnewh(dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_1001cca7();
    *puVar1 = 0xc;
    FUN_1001cc48(0,0,0,0,0);
  }
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1001eaca @ 1001eaca */

void FUN_1001eaca(void)

{
  FUN_1001ca39(4);
  return;
}



/**************************************************/

/* Function: _realloc @ 1001eaec */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  int local_24;
  void *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_102ed6cc == 3) {
    do {
      local_20 = (void *)0x0;
      if (0xffffffe0 < _NewSize) goto LAB_1001ecc5;
      __lock(4);
      local_24 = thunk_FUN_1001de29(_Memory);
      if (local_24 != 0) {
        if (_NewSize <= DAT_102ed6b4) {
          iVar2 = ___sbh_resize_block(local_24,_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = (void *)___sbh_alloc_block(_NewSize);
            if (local_20 != (void *)0x0) {
              uVar3 = *(int *)((int)_Memory + -4) - 1;
              if (_NewSize <= uVar3) {
                uVar3 = _NewSize;
              }
              _memcpy(local_20,_Memory,uVar3);
              local_24 = thunk_FUN_1001de29(_Memory);
              ___sbh_free_block(local_24,_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (void *)0x0) {
          if (_NewSize == 0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_10030b44,0,_NewSize);
          if (local_20 != (LPVOID)0x0) {
            uVar3 = *(int *)((int)_Memory + -4) - 1;
            if (_NewSize <= uVar3) {
              uVar3 = _NewSize;
            }
            _memcpy(local_20,_Memory,uVar3);
            ___sbh_free_block(local_24,_Memory);
          }
        }
      }
      FUN_1001ec30();
      if (local_24 == 0) {
        if (_NewSize == 0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_10030b44,0,_Memory,_NewSize);
      }
      if (local_20 != (void *)0x0) {
        return local_20;
      }
      if (DAT_10031048 == 0) {
        puVar4 = (undefined4 *)FUN_1001cca7();
        if (local_24 != 0) {
          *puVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1001ecf2;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    puVar4 = (undefined4 *)FUN_1001cca7();
    if (local_24 != 0) goto LAB_1001ecd1;
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) goto LAB_1001ecc5;
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar7 = HeapReAlloc(DAT_10030b44,0,_Memory,_NewSize);
      if (pvVar7 != (LPVOID)0x0) {
        return pvVar7;
      }
      if (DAT_10031048 == 0) {
        puVar4 = (undefined4 *)FUN_1001cca7();
LAB_1001ecf2:
        DVar5 = GetLastError();
        uVar6 = FUN_1001cc6c(DVar5);
        *puVar4 = uVar6;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    puVar4 = (undefined4 *)FUN_1001cca7();
  }
  DVar5 = GetLastError();
  uVar6 = FUN_1001cc6c(DVar5);
  *puVar4 = uVar6;
  return (void *)0x0;
LAB_1001ecc5:
  __callnewh(_NewSize);
  puVar4 = (undefined4 *)FUN_1001cca7();
LAB_1001ecd1:
  *puVar4 = 0xc;
  return (void *)0x0;
}



/**************************************************/

/* Function: FUN_1001ec30 @ 1001ec30 */

void FUN_1001ec30(void)

{
  FUN_1001ca39(4);
  return;
}



/**************************************************/

/* Function: _strcpy_s @ 1001ed07 */

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
      puVar2 = (undefined4 *)FUN_1001cca7();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_1001ed26;
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_1001cca7();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_1001ed26:
  FUN_1001cc48(0,0,0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strlen @ 1001ed70 */

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
    if (((uint)puVar2 & 3) == 0) goto LAB_1001eda0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1001edd3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1001eda0:
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
  goto LAB_1001edd3;
}



/**************************************************/

/* Function: x_ismbbtype_l @ 1001edfb */

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
    if (uVar1 == 0) goto LAB_1001ee3d;
  }
  iVar2 = 1;
LAB_1001ee3d:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/**************************************************/

/* Function: __ismbblead @ 1001ee4c */

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

/* Function: _memcpy @ 1001ee60 */

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_1001f043_caseD_2;
        case 3:
          goto switchD_1001f043_caseD_3;
        }
        goto switchD_1001f043_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1001f043_caseD_0;
      case 1:
        goto switchD_1001f043_caseD_1;
      case 2:
        goto switchD_1001f043_caseD_2;
      case 3:
        goto switchD_1001f043_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1001f043_caseD_2;
            case 3:
              goto switchD_1001f043_caseD_3;
            }
            goto switchD_1001f043_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1001f043_caseD_2;
            case 3:
              goto switchD_1001f043_caseD_3;
            }
            goto switchD_1001f043_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1001f043_caseD_2;
            case 3:
              goto switchD_1001f043_caseD_3;
            }
            goto switchD_1001f043_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_1001f043_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_1001f043_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_1001f043_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_1001f043_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_102ed6a8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_1001eebc_caseD_2;
      case 3:
        goto switchD_1001eebc_caseD_3;
      }
      goto switchD_1001eebc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1001eebc_caseD_0;
    case 1:
      goto switchD_1001eebc_caseD_1;
    case 2:
      goto switchD_1001eebc_caseD_2;
    case 3:
      goto switchD_1001eebc_caseD_3;
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
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1001eebc_caseD_2;
          case 3:
            goto switchD_1001eebc_caseD_3;
          }
          goto switchD_1001eebc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1001eebc_caseD_2;
          case 3:
            goto switchD_1001eebc_caseD_3;
          }
          goto switchD_1001eebc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1001eebc_caseD_2;
          case 3:
            goto switchD_1001eebc_caseD_3;
          }
          goto switchD_1001eebc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_1001eebc_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1001eebc_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1001eebc_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1001eebc_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: __local_unwind4 @ 1001f1c8 */

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __local_unwind4(uint *param_1,int param_2,uint param_3)

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
  puStack_24 = &LAB_1001f258;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1002f000 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_100208a8();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/**************************************************/

/* Function: FUN_1001f29e @ 1001f29e */

void FUN_1001f29e(int param_1)

{
  __local_unwind4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c));
  return;
}



/**************************************************/

/* Function: _EH4_CallFilterFunc @ 1001f2ba */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(code *param_1)

{
  (*param_1)();
  return;
}



/**************************************************/

/* Function: _EH4_TransferToHandler @ 1001f2d1 */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(code *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1001f2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/**************************************************/

/* Function: _EH4_GlobalUnwind @ 1001f2ea */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1001f2ff,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: _EH4_LocalUnwind @ 1001f304 */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall
_EH4_LocalUnwind(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/**************************************************/

/* Function: FUN_1001f31b @ 1001f31b */

undefined4 FUN_1001f31b(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_10031028 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10031028 = FUN_1001b442(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_1003102c = FUN_1001b442(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10031030 = FUN_1001b442(pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_10031038 = FUN_1001b442(pFVar1);
      if (DAT_10031038 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_10031034 = FUN_1001b442(pFVar1);
      }
    }
  }
  if ((DAT_10031034 != local_c) && (DAT_10031038 != local_c)) {
    pcVar3 = (code *)FUN_1001b4b9(DAT_10031034);
    pcVar4 = (code *)FUN_1001b4b9(DAT_10031038);
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
      goto LAB_1001f4b1;
    }
  }
  if ((((DAT_1003102c != local_c) &&
       (pcVar3 = (code *)FUN_1001b4b9(DAT_1003102c), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10031030 != local_c &&
      (pcVar3 = (code *)FUN_1001b4b9(DAT_10031030), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1001f4b1:
  pcVar3 = (code *)FUN_1001b4b9(DAT_10031028);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}



/**************************************************/

/* Function: _strcat_s @ 1001f4d8 */

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
        puVar2 = (undefined4 *)FUN_1001cca7();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_1001f4f7;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_1001cca7();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_1001f4f7:
  FUN_1001cc48(0,0,0,0,0);
  return eVar4;
}



/**************************************************/

/* Function: _strncpy_s @ 1001f549 */

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
LAB_1001f56d:
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
          puVar2 = (undefined4 *)FUN_1001cca7();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_1001f57e;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_1001f56d;
  puVar2 = (undefined4 *)FUN_1001cca7();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_1001f57e:
  FUN_1001cc48(0,0,0,0,0);
  return eVar5;
}



/**************************************************/

/* Function: __set_error_mode @ 1001f5fc */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_100306ac;
      DAT_100306ac = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_100306ac;
    }
  }
  puVar2 = (undefined4 *)FUN_1001cca7();
  *puVar2 = 0x16;
  FUN_1001cc48(0,0,0,0,0);
  return -1;
}



/**************************************************/

/* Function: _memset @ 1001f650 */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_102ed6a8 != 0)) {
    pvVar2 = (void *)__VEC_memzero();
    return pvVar2;
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

/* Function: __msize @ 1001f6ca */

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
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_1001cca7();
    *puVar1 = 0x16;
    FUN_1001cc48(0,0,0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_102ed6cc == 3) {
      __lock(4);
      iVar3 = thunk_FUN_1001de29(_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_1001f764();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_10030b44,0,_Memory);
  }
  return sVar2;
}



/**************************************************/

/* Function: FUN_1001f764 @ 1001f764 */

void FUN_1001f764(void)

{
  FUN_1001ca39(4);
  return;
}



/**************************************************/

/* Function: _abort @ 1001f776 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if ((DAT_1002fa70 & 1) != 0) {
    FUN_1001c7c2(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if ((DAT_1002fa70 & 2) != 0) {
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

/* Function: __isdigit_l @ 1001f869 */

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

/* Function: _isdigit @ 1001f8b8 */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_10030fe4 == 0) {
    return (byte)PTR_DAT_1002f528[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/**************************************************/

/* Function: __freea @ 1001f8e1 */

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

/* Function: ___free_lc_time @ 1001f8fc */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void ___free_lc_time(undefined4 *param_1)

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

/* Function: ___free_lconv_num @ 1001fa8c */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1002fb40) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1002fb44) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1002fb48) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/**************************************************/

/* Function: ___free_lconv_mon @ 1001facc */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1002fb4c) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1002fb50) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1002fb54) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1002fb58) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1002fb5c) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1002fb60) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1002fb64) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/**************************************************/

/* Function: _strcspn @ 1001fb60 */

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

/* Function: __crtGetStringTypeA_stat @ 1001fba6 */

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
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_10031040 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_10031040 = 2;
      }
      goto LAB_1001fbff;
    }
    DAT_10031040 = 1;
  }
  else {
LAB_1001fbff:
    if ((DAT_10031040 == 2) || (DAT_10031040 == 0)) {
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
           (_Memory = (void *)___convertcp(param_5,puVar5,param_2,&param_3,0,0),
           param_2 = (ulong)_Memory, _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_1001fd4c;
    }
    if (DAT_10031040 != 1) goto LAB_1001fd4c;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1001fd4c;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1001fc8f:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1001fc8f;
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
LAB_1001fd4c:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/**************************************************/

/* Function: ___crtGetStringTypeA @ 1001fd5e */

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

/* Function: _strncmp @ 1001fd9e */

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
          goto LAB_1001fe58;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_1001fe58;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_1001fe58;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_1001fe58;
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
LAB_1001fe58:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: _strpbrk @ 1001fe60 */

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

/* Function: __crtLCMapStringA_stat @ 1001fea0 */

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
  LPSTR pCVar7;
  int *in_ECX;
  char *pcVar8;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  if (DAT_10031044 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_10031044 = 2;
      }
    }
    else {
      DAT_10031044 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1001ff0f;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1001ff0f:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_10031044 == 2) || (DAT_10031044 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    iVar3 = ___ansicp(param_1);
    if (iVar3 == -1) goto LAB_10020230;
    if (iVar3 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,iVar3,param_3,&param_4,0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_10020230;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pCVar7 = (LPSTR)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1002020d;
          pCVar7 = &stack0xffffffe4;
        }
        else {
          pCVar7 = _malloc(local_c + 8);
          if (pCVar7 != (LPSTR)0x0) {
            pCVar7[0] = -0x23;
            pCVar7[1] = -0x23;
            pCVar7[2] = '\0';
            pCVar7[3] = '\0';
            pCVar7 = pCVar7 + 8;
          }
        }
        if (pCVar7 != (LPSTR)0x0) {
          _memset(pCVar7,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pCVar7,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(iVar3,param_7,pCVar7,&local_c,param_5,param_6);
          }
          __freea(pCVar7);
        }
      }
    }
LAB_1002020d:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_10020230;
  }
  if (DAT_10031044 != 1) goto LAB_10020230;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10020230;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_1001ffb7:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1001ffb7;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_10020230;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_100200c6;
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
          pCVar7 = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            pCVar7 = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,pCVar7,(int)pcVar5,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_100200c6:
  __freea(local_10);
LAB_10020230:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/**************************************************/

/* Function: ___crtLCMapStringA @ 10020242 */

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

/* Function: _memmove @ 10020290 */

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10020473_caseD_2;
        case 3:
          goto switchD_10020473_caseD_3;
        }
        goto switchD_10020473_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10020473_caseD_0;
      case 1:
        goto switchD_10020473_caseD_1;
      case 2:
        goto switchD_10020473_caseD_2;
      case 3:
        goto switchD_10020473_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10020473_caseD_2;
            case 3:
              goto switchD_10020473_caseD_3;
            }
            goto switchD_10020473_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10020473_caseD_2;
            case 3:
              goto switchD_10020473_caseD_3;
            }
            goto switchD_10020473_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10020473_caseD_2;
            case 3:
              goto switchD_10020473_caseD_3;
            }
            goto switchD_10020473_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_10020473_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_10020473_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_10020473_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_10020473_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_102ed6a8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_100202ec_caseD_2;
      case 3:
        goto switchD_100202ec_caseD_3;
      }
      goto switchD_100202ec_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100202ec_caseD_0;
    case 1:
      goto switchD_100202ec_caseD_1;
    case 2:
      goto switchD_100202ec_caseD_2;
    case 3:
      goto switchD_100202ec_caseD_3;
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
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100202ec_caseD_2;
          case 3:
            goto switchD_100202ec_caseD_3;
          }
          goto switchD_100202ec_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100202ec_caseD_2;
          case 3:
            goto switchD_100202ec_caseD_3;
          }
          goto switchD_100202ec_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100202ec_caseD_2;
          case 3:
            goto switchD_100202ec_caseD_3;
          }
          goto switchD_100202ec_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_100202ec_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100202ec_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100202ec_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100202ec_caseD_0:
  return _Dst;
}



/**************************************************/

/* Function: FUN_100205f5 @ 100205f5 */

void FUN_100205f5(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
  
  param_3 = param_3 >> 7;
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
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}



/**************************************************/

/* Function: __VEC_memcpy @ 1002067c */

/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
      FUN_100205f5(param_1,param_2,param_3 - uVar3);
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
    __VEC_memcpy((undefined1 *)((int)param_1 + iVar1),(undefined1 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}



/**************************************************/

/* Function: __global_unwind2 @ 10020774 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1002078c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/**************************************************/

/* Function: __local_unwind2 @ 100207d9 */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_10020794;
  local_20 = ExceptionList;
  uVar2 = DAT_1002f000 ^ (uint)&local_20;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_100208a8(uVar2);
    }
  }
  ExceptionList = local_20;
  return;
}



/**************************************************/

/* Function: __NLG_Notify @ 10020889 */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1002fb98 = param_1;
  DAT_1002fb94 = in_EAX;
  DAT_1002fb9c = unaff_EBP;
  return;
}



/**************************************************/

/* Function: FUN_100208a8 @ 100208a8 */

void FUN_100208a8(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/**************************************************/

/* Function: fastzero_I @ 100208ab */

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  param_2 = param_2 >> 7;
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
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



/**************************************************/

/* Function: __VEC_memzero @ 10020902 */

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 * __VEC_memzero(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = param_1 + (param_3 - uVar2);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    puVar4 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    __VEC_memzero(param_1 + iVar3,0,param_3 - iVar3);
  }
  return param_1;
}



/**************************************************/

/* Function: __isctype_l @ 10020991 */

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

/* Function: __alloca_probe_16 @ 10020a50 */

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

/* Function: __alloca_probe_8 @ 10020a66 */

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

/* Function: __isleadbyte_l @ 10020a7c */

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

/* Function: _atol @ 10020ac0 */

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

/* Function: ___ansicp @ 10020ad1 */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: ___convertcp @ 10020b18 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

void ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

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
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_10020cb8;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_10020cb8;
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
LAB_10020bf8:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_10020bf8;
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
LAB_10020cb8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_10020cca @ 10020cca */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10020cca(void)

{
  return 1;
}



/**************************************************/

/* Function: __get_sse2_info @ 10020d1a */

/* WARNING: Removing unreachable block (ram,0x10020d55) */
/* WARNING: Removing unreachable block (ram,0x10020d42) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10020cca(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/**************************************************/

/* Function: __alloca_probe @ 10020d90 */

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

/* Function: __tolower_l @ 10020dbb */

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
LAB_10020e1a:
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
      puVar4 = (undefined4 *)FUN_1001cca7();
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
    if (iVar3 == 0) goto LAB_10020e1a;
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

/* Function: _tolower @ 10020ed2 */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_10030fe4 == 0) {
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

/* Function: strtoxl @ 10020ef9 */

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
    puVar3 = (undefined4 *)FUN_1001cca7();
    *puVar3 = 0x16;
    FUN_1001cc48(0,0,0,0,0);
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
LAB_10020fb0:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_10020fb0;
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
      goto LAB_10021016;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_10021016;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_10021016;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_10021016:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_10021070:
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
          puVar3 = (undefined4 *)FUN_1001cca7();
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
    if ((uint)param_4 <= uVar6) goto LAB_10021070;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_10021070;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/**************************************************/

/* Function: _strtol @ 10021124 */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_10030fe4 == 0) {
    ppuVar2 = &PTR_DAT_1002f540;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/**************************************************/

/* Function: ___ascii_strnicmp @ 10021150 */

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
      if (bVar2 != (byte)uVar3) goto LAB_100211a1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_100211a1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/**************************************************/

/* Function: RtlUnwind @ 1002136e */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1002136e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/**************************************************/

/* Function: __lseeki64_nolock @ 1002207f */

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
    puVar2 = (undefined4 *)FUN_1001cca7();
    *puVar2 = 9;
LAB_100220ae:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_1001cccd(DVar4);
        goto LAB_100220ae;
      }
    }
    pbVar1 = (byte *)((&DAT_102ed6e0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/**************************************************/

/* Function: __get_osfhandle @ 10022183 */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  undefined4 *puVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_1001ccba();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_1001cca7();
    *puVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_102ed6d0)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_102ed6e0)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  puVar1 = (undefined4 *)FUN_1001ccba();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_1001cca7();
  *puVar1 = 9;
  FUN_1001cc48(0,0,0,0,0);
  return -1;
}



/**************************************************/

/* Function: __putwch_nolock @ 10022314 */

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
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  if (DAT_10030040 != 0) {
    if (DAT_10030048 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_10030048 == (HANDLE)0xffffffff) goto LAB_100223bd;
    BVar2 = WriteConsoleW(DAT_10030048,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10030040 = 1;
      goto LAB_100223bd;
    }
    if ((DAT_10030040 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_100223bd;
    DAT_10030040 = 0;
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
  if (DAT_10030048 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10030048,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_100223bd:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



/**************************************************/

/* Function: __mbtowc_l @ 100223d6 */

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
          if (iVar2 != 0) goto LAB_10022421;
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
        puVar3 = (undefined4 *)FUN_1001cca7();
        *puVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_10022421:
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

/* Function: ___initconout @ 100225e1 */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10030048 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/**************************************************/

/* Function: __cfltcvt_init @ 1002262d */

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_1002f428 = __cfltcvt;
  PTR_LAB_1002f42c = &LAB_10022c33;
  PTR_LAB_1002f430 = &LAB_10022bf1;
  PTR_LAB_1002f434 = &LAB_10022c25;
  PTR_LAB_1002f438 = &LAB_10022b9b;
  PTR_LAB_1002f43c = __cfltcvt;
  PTR_LAB_1002f440 = __cfltcvt_l;
  PTR_LAB_1002f444 = __fassign_l;
  PTR_LAB_1002f448 = __cropzeros_l;
  PTR_LAB_1002f44c = __forcdecpt_l;
  return;
}



/**************************************************/

/* Function: __fpmath @ 1002268d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_102ec68c = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



/**************************************************/

/* Function: FUN_100226b0 @ 100226b0 */

ulonglong __fastcall FUN_100226b0(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_102ed6a8 == 0) {
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

/* Function: FUN_10022760 @ 10022760 */

void FUN_10022760(void)

{
  float10 in_ST0;
  
  FUN_100238a8((double)in_ST0);
  FUN_1002277d();
  return;
}



/**************************************************/

/* Function: FUN_1002277d @ 1002277d */

uint FUN_1002277d(uint param_1,uint param_2)

{
  uint uVar1;
  bool in_ZF;
  short in_FPUControlWord;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_1002384c();
      goto LAB_100227fb;
    }
    param_1 = param_2 & 0x80000000;
    param_2 = 0;
joined_r0x100227ec:
    if (param_1 == 0) {
LAB_1002279e:
      if (DAT_102ec688 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      param_2 = FUN_10023835();
    }
    if ((param_2 & 0x80000000) == 0) goto LAB_1002279e;
    if (((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) goto joined_r0x100227ec;
  }
  uVar1 = 1;
LAB_100227fb:
  if (DAT_102ec688 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}



/**************************************************/

/* Function: FUN_10022860 @ 10022860 */

void FUN_10022860(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_102ed6a4 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_100239b0();
    return;
  }
  FUN_100228bd((double)in_ST1,(double)in_ST0);
  return;
}



/**************************************************/

/* Function: FUN_100228bd @ 100228bd */

undefined4 FUN_100228bd(int param_1,uint param_2,int param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  bool bVar4;
  short in_FPUControlWord;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar6;
  unkbyte10 in_ST7;
  undefined1 local_78 [20];
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  short local_4;
  undefined2 uStack_2;
  
  _local_4 = CONCAT22((short)(in_EAX >> 0x10),in_FPUControlWord);
  uVar1 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x100228d1;
    in_EAX = FUN_10023835();
    uVar1 = extraout_ECX;
  }
  bVar4 = (uVar1 & 0x7ff00000) == 0x7ff00000;
  if (bVar4) {
    if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
      auStack_e._6_4_ = 0x1002299a;
      fVar5 = (float10)__fload_withFB();
      iVar3 = extraout_ECX_01;
      fVar6 = extraout_ST1_01;
      goto LAB_1002299a;
    }
    auStack_e._6_4_ = 0x1002295d;
    fVar5 = (float10)__fload_withFB();
    if ((param_4 & 0x80000) == 0) {
      iVar3 = extraout_ECX_00 + 1;
      fVar6 = extraout_ST1_00;
      goto LAB_1002299a;
    }
LAB_10022967:
    uVar2 = 1;
  }
  else {
    auStack_e._6_4_ = 0x100228ec;
    uVar1 = __fload_withFB();
    if (!bVar4) {
      if (((uVar1 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        if ((param_2 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x10022a64;
          FUN_10022a82();
          if (extraout_CL_00 == '\0') {
            uVar2 = 1;
            goto LAB_10022935;
          }
        }
        auStack_e._6_4_ = 0x10022911;
        uVar2 = FUN_10023820();
        if (DAT_102ec688 != 0) {
          return uVar2;
        }
        uVar2 = FUN_10023909();
        return uVar2;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar2 = FUN_100238be();
        return uVar2;
      }
      auStack_e._6_4_ = 0x10022a1c;
      uVar2 = FUN_10022a82();
      if ((param_4 & 0x80000000) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL) == 0) {
          return uVar2;
        }
        uVar2 = FUN_100238be();
        return uVar2;
      }
      uVar2 = 2;
      goto LAB_10022935;
    }
    iVar3 = 0;
    fVar5 = extraout_ST0;
    fVar6 = extraout_ST1;
LAB_1002299a:
    if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
      if ((param_2 & 0x80000) != 0) goto LAB_10022967;
    }
    else if (iVar3 == 0) {
      uStack_64 = 0x100229c8;
      auStack_e = (undefined1  [10])in_ST7;
      iVar3 = FUN_1002477b((double)fVar5,(double)fVar6,local_78);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = 1;
      goto LAB_10022935;
    }
    uVar2 = 7;
  }
LAB_10022935:
  if (DAT_102ec688 != 0) {
    return uVar2;
  }
  auStack_e._6_4_ = 0x10022952;
  uVar2 = FUN_100237c0();
  return uVar2;
}



/**************************************************/

/* Function: FUN_10022a82 @ 10022a82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10022a82(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}



/**************************************************/

/* Function: __forcdecpt_l @ 10022aaa */

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

/* Function: __cropzeros_l @ 10022b1b */

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

/* Function: __fassign_l @ 10022bb1 */

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

/* Function: __shift @ 10022c08 */

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

/* Function: __cftoe2_l @ 10022c41 */

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

undefined4
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
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_1001cca7();
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
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
      if (eVar2 == 0) {
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
            iVar4 = iVar3 / 100;
            iVar3 = iVar3 % 100;
            _Dst[2] = _Dst[2] + (char)iVar4;
          }
          if (9 < iVar3) {
            iVar4 = iVar3 / 10;
            iVar3 = iVar3 % 10;
            _Dst[3] = _Dst[3] + (char)iVar4;
          }
          _Dst[4] = _Dst[4] + (char)iVar3;
        }
        if (((DAT_102ec690 & 1) != 0) && (_Dst[2] == '0')) {
          _memmove(_Dst + 2,_Dst + 3,3);
        }
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    puVar1 = (undefined4 *)FUN_1001cca7();
    uVar7 = 0x22;
  }
  *puVar1 = uVar7;
  FUN_1001cc48(0,0,0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar7;
}



/**************************************************/

/* Function: __cftoe_l @ 10022dae */

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cftoe_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
              undefined4 param_6)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_1001cca7();
    *puVar1 = 0x16;
    FUN_1001cc48(0,0,0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (uint)(local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30,0,param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __cftoe @ 10022e7c */

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return eVar1;
}



/**************************************************/

/* Function: __cftoa_l @ 10022e9a */

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

errno_t __cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
                 localeinfo_struct *param_6)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  errno_t *peVar4;
  size_t _SizeInBytes;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  int iVar9;
  undefined4 extraout_EDX_00;
  short sVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
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
    peVar4 = (errno_t *)FUN_1001cca7();
    eVar14 = 0x16;
LAB_10022ed3:
    *peVar4 = eVar14;
    FUN_1001cc48(0,0,0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return eVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    peVar4 = (errno_t *)FUN_1001cca7();
    eVar14 = 0x22;
    goto LAB_10022ed3;
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
        return eVar14;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return eVar14;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar5 = _strrchr(param_2 + 2,0x65);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar5[3] = '\0';
    }
    goto LAB_100231f7;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar10 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
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
  pcVar12 = param_2 + 3;
  pcVar5 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      sVar2 = __aullshr();
      uVar3 = sVar2 + 0x30;
      if (0x39 < uVar3) {
        uVar3 = uVar3 + sVar10;
      }
      local_8 = local_8 + -4;
      *pcVar5 = (char)uVar3;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar5 = pcVar5 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) && (uVar3 = __aullshr(), pcVar11 = pcVar5, 8 < uVar3)) {
      while( true ) {
        pcVar6 = pcVar11 + -1;
        if ((*pcVar6 != 'f') && (*pcVar6 != 'F')) break;
        *pcVar6 = '0';
        pcVar11 = pcVar6;
      }
      if (pcVar6 == pcVar12) {
        pcVar11[-2] = pcVar11[-2] + '\x01';
      }
      else if (*pcVar6 == '9') {
        *pcVar6 = (char)sVar10 + ':';
      }
      else {
        *pcVar6 = *pcVar6 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar5,0x30,param_4);
    pcVar5 = pcVar5 + param_4;
  }
  if (*pcVar12 == '\0') {
    pcVar5 = pcVar12;
  }
  *pcVar5 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar7 = __aullshr();
  uVar8 = (uVar7 & 0x7ff) - local_18;
  iVar9 = -(uint)((uVar7 & 0x7ff) < local_18);
  if (iVar9 < 0) {
    pcVar5[1] = '-';
    bVar13 = uVar8 != 0;
    uVar8 = -uVar8;
    iVar9 = -(iVar9 + (uint)bVar13);
  }
  else {
    pcVar5[1] = '+';
  }
  pcVar11 = pcVar5 + 2;
  *pcVar11 = '0';
  pcVar12 = pcVar11;
  if ((iVar9 < 0) || ((iVar9 < 1 && (uVar8 < 1000)))) {
LAB_100231a6:
    if ((-1 < iVar9) && ((0 < iVar9 || (99 < uVar8)))) goto LAB_100231b1;
  }
  else {
    cVar1 = __alldvrm(uVar8,iVar9,1000,0);
    *pcVar11 = cVar1 + '0';
    pcVar12 = pcVar5 + 3;
    iVar9 = 0;
    uVar8 = extraout_ECX;
    local_14 = extraout_EDX;
    if (pcVar12 == pcVar11) goto LAB_100231a6;
LAB_100231b1:
    cVar1 = __alldvrm(uVar8,iVar9,100,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    iVar9 = 0;
    uVar8 = extraout_ECX_00;
    local_14 = extraout_EDX_00;
  }
  if ((pcVar12 != pcVar11) || ((-1 < iVar9 && ((0 < iVar9 || (9 < uVar8)))))) {
    cVar1 = __alldvrm(uVar8,iVar9,10,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    uVar8 = extraout_ECX_01;
  }
  *pcVar12 = (char)uVar8 + '0';
  pcVar12[1] = '\0';
LAB_100231f7:
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return 0;
}



/**************************************************/

/* Function: __cftof2_l @ 1002320b */

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(undefined1 *param_1,int param_2,size_t param_3,char param_4,localeinfo_struct *param_5)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_5);
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    puVar3 = (undefined4 *)FUN_1001cca7();
    uVar4 = 0x16;
    *puVar3 = 0x16;
    FUN_1001cc48(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_4 != '\0') && (iVar1 - 1U == param_3)) {
      iVar2 = *in_EAX;
      param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = 0x30;
      (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *param_1 = 0x2d;
      param_1 = param_1 + 1;
    }
    if (in_EAX[1] < 1) {
      __shift();
      *param_1 = 0x30;
      param_1 = param_1 + 1;
    }
    else {
      param_1 = param_1 + in_EAX[1];
    }
    if (0 < (int)param_3) {
      __shift();
      *param_1 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_4 != '\0') || ((int)sVar5 <= (int)param_3)) {
          param_3 = sVar5;
        }
        __shift();
        _memset(param_1 + 1,0x30,param_3);
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

/* Function: __cftof_l @ 10023300 */

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cftof_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_1001cca7();
    *puVar1 = 0x16;
    FUN_1001cc48(0,0,0,0,0);
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
      __cftof2_l(param_3,param_4,0,param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __cftog_l @ 100233b9 */

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cftog_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
              undefined4 param_6)

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
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_1001cca7();
    *puVar2 = 0x16;
    FUN_1001cc48(0,0,0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || (param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34,1,param_6);
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
        __cftof2_l(param_3,param_4,1,param_6);
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

/* Function: __cfltcvt_l @ 100234b1 */

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      eVar1 = __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}



/**************************************************/

/* Function: __cfltcvt @ 10023537 */

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

/* Function: __setdefaultprecision @ 10023558 */

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

/* Function: __ms_p5_test_fdiv @ 10023581 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_1002a3e8 - (_DAT_1002a3e8 / _DAT_1002a3f0) * _DAT_1002a3f0) {
    return 1;
  }
  return 0;
}



/**************************************************/

/* Function: __ms_p5_mp_test_fdiv @ 100235bd */

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

/* Function: FUN_100237c0 @ 100237c0 */

float10 __fastcall
FUN_100237c0(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  undefined1 local_24 [8];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  __87except(param_2,local_24,&param_3);
  return (float10)dStack_c;
}



/**************************************************/

/* Function: __startOneArgErrorHandling @ 100237d7 */

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio 2005 Release */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  float10 in_ST0;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  __87except(param_2,local_24,&param_3);
  return (float10)local_c;
}



/**************************************************/

/* Function: FUN_10023820 @ 10023820 */

unkbyte10 FUN_10023820(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}



/**************************************************/

/* Function: FUN_10023835 @ 10023835 */

void FUN_10023835(void)

{
  return;
}



/**************************************************/

/* Function: FUN_1002384c @ 1002384c */

undefined4 FUN_1002384c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}



/**************************************************/

/* Function: __fload_withFB @ 10023865 */

/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}



/**************************************************/

/* Function: FUN_100238a8 @ 100238a8 */

uint FUN_100238a8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}



/**************************************************/

/* Function: FUN_100238be @ 100238be */

void FUN_100238be(void)

{
  return;
}



/**************************************************/

/* Function: __math_exit @ 100238cb */

/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __math_exit(void)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling();
    return;
  }
  return;
}



/**************************************************/

/* Function: FUN_10023909 @ 10023909 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10023909(undefined4 param_1,int param_2)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  ushort unaff_retaddr;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)(double)in_ST0 >> 0x20);
  if (((ulonglong)(double)in_ST0 & 0x7ff0000000000000) == 0) {
    fscale(in_ST0,(float10)_DAT_1002a44c);
  }
  else if ((uStack_4 & 0x7ff00000) == 0x7ff00000) {
    fscale(in_ST0,(float10)_DAT_1002a444);
  }
  else if (((unaff_retaddr == 0x27f) || ((unaff_retaddr & 0x20) != 0)) ||
          ((in_FPUStatusWord & 0x20) == 0)) {
    return;
  }
  if (param_2 == 0x1d) {
    FUN_100237c0();
    return;
  }
  __startOneArgErrorHandling();
  return;
}



/**************************************************/

/* Function: FUN_100239b0 @ 100239b0 */

void FUN_100239b0(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_100239c9((double)in_ST1,(double)in_ST0);
  return;
}



/**************************************************/

/* Function: FUN_100239c9 @ 100239c9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100239c9(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort uVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ushort uVar20;
  ushort in_XMM1_Wh;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar21;
  ulonglong in_XMM2_Qb;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 local_c [4];
  
  dVar12 = (double)((ulonglong)param_1 >> 0x2c);
  uVar10 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar2 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
  dVar34 = (double)((ulonglong)DAT_1002dd00 & (ulonglong)param_1 | (ulonglong)DAT_1002dd10) *
           *(double *)((int)&DAT_1002a470 + uVar2 * 4);
  dVar31 = *(double *)((int)&DAT_1002a470 + uVar2 * 4);
  dVar13 = *(double *)(&DAT_1002a880 + uVar2 * 8);
  dVar33 = *(double *)(&UNK_1002a888 + uVar2 * 8);
  uVar6 = 0x7fef - uVar10;
  uVar2 = SUB84(param_1,0);
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  dVar32 = param_1;
  if (0x7fffffff < (uVar10 - 0x10 | uVar6)) {
    auVar22._4_4_ = param_3;
    auVar22._0_4_ = param_2;
    auVar27._8_8_ = in_XMM3._8_8_;
    auVar27._0_8_ = CONCAT44(DAT_1002dd20._4_4_,(undefined4)DAT_1002dd20);
    auVar22._8_8_ = in_XMM2_Qb;
    uVar7 = param_3 & DAT_1002dd20._4_4_;
    if (uVar7 < 0x7ff00000) {
      if (param_2 == 0 && uVar7 == 0) {
        uVar9 = 0x1a;
        _local_c = DAT_1002dd10;
        if (uVar2 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar9 = 0x1d;
          if (((uVar8 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar8 & 0x7fffffff) < 0x7ff00000 || (uVar2 == 0)))) {
            return (float10)DAT_1002dd10;
          }
        }
        goto LAB_100241d0;
      }
      if ((int)uVar6 < 0) {
        auVar26._0_8_ = CONCAT44(DAT_1002dd20._4_4_,(undefined4)DAT_1002dd20) << 0x34;
        auVar26._8_8_ = auVar27._8_8_ << 0x34;
        iVar5 = (uVar7 >> 0x14) - 0x3f3;
        auVar27 = (undefined1  [16])0x0;
        uVar20 = (in_XMM1_Wh & in_XMM3._14_2_) >> 4;
        lVar21 = SUB168(auVar22 | auVar26,0) <<
                 (ulonglong)
                 CONCAT22((ushort)(-1 < iVar5) * (short)((uint)iVar5 >> 0x10),
                          (ushort)(-1 < (short)iVar5) * (short)iVar5);
        lVar25 = SUB168(auVar22 | auVar26,8) << (ulonglong)(ushort)((-1 < (short)uVar20) * uVar20);
        auVar23._0_4_ = -(uint)((int)lVar21 == 0);
        auVar23._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0);
        auVar23._8_4_ = -(uint)((int)lVar25 == 0);
        auVar23._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
        bVar1 = SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar23 >> 0x27,0) & 1) << 4 | (SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar23 >> 0x37,0) & 1) << 6 | SUB161(auVar23 >> 0x3f,0) << 7;
        uVar7 = 0x7fef - uVar6 & 0x7fff;
        if (0x7fef < uVar7) {
          auVar16._0_4_ = -(uint)((int)((ulonglong)DAT_1002dd00 & (ulonglong)param_1) == 0);
          auVar16._4_4_ =
               -(uint)((int)(((ulonglong)DAT_1002dd00 & (ulonglong)param_1) >> 0x20) == 0);
          auVar16._8_4_ = 0xffffffff;
          auVar16._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar16 >> 7,0) & 1 | (SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar16 >> 0x17,0) & 1) << 2 | (SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar16 >> 0x27,0) & 1) << 4 | (SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar16 >> 0x37,0) & 1) << 6 | SUB161(auVar16 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (lVar21 = CONCAT44(param_3,param_2) <<
                           (ulonglong)(((param_3 & DAT_1002dd20._4_4_) >> 0x14) - 0x3f4),
                 lVar25 = auVar23._8_8_ << (ulonglong)(_UNK_1002dd2c >> 0x14),
                 auVar24._0_4_ = -(uint)((int)lVar21 == 0),
                 auVar24._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0),
                 auVar24._8_4_ = -(uint)((int)lVar25 == 0),
                 auVar24._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0),
                 (byte)(SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar24 >> 0x2f,0) & 1) << 5 | (SUB161(auVar24 >> 0x37,0) & 1) << 6
                       | SUB161(auVar24 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_10024157;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)_DAT_1002dd78;
              }
              goto LAB_10023fe9;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_10024157;
          }
          goto LAB_1002402f;
        }
        if (bVar1 == 0xff) {
          auVar27._8_8_ = 0;
          auVar27._0_8_ = (ulonglong)DAT_1002dd80;
          lVar21 = CONCAT44(param_3,param_2) <<
                   (ulonglong)(((param_3 & DAT_1002dd20._4_4_) >> 0x14) - 0x3f4);
          auVar22._0_4_ = -(uint)((int)lVar21 == SUB84(DAT_1002dd80,0));
          auVar22._4_4_ =
               -(uint)((int)((ulonglong)lVar21 >> 0x20) == (int)((ulonglong)DAT_1002dd80 >> 0x20));
          auVar22._8_4_ = -(uint)(auVar23._8_4_ == 0);
          auVar22._12_4_ = -(uint)(auVar23._12_4_ == 0);
          uVar6 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar7) {
            uVar7 = 0xbfe7f;
            in_XMM3._8_8_ = 0;
            in_XMM3._0_8_ = DAT_1002dd00;
            in_XMM2_Qb = auVar22._8_8_;
            goto LAB_10023a46;
          }
          goto LAB_10023e64;
        }
        dVar31 = (double)((ulonglong)param_1 >> 0x20);
        in_XMM2_Qb = auVar23._8_8_ >> 0x20;
        uVar6 = 0;
        uVar7 = 0;
        if (uVar2 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar9 = 0x1c;
          _local_c = DAT_1002dda0;
          goto LAB_100241d0;
        }
LAB_10023eea:
        in_XMM3 = auVar27;
        dVar32 = dVar12;
        if ((uVar7 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar7 & uVar6 << 0xd) == 0) {
              return (float10)0;
            }
LAB_10023fe9:
            return (float10)DAT_1002dd80;
          }
          _local_c = (double)((ulonglong)(uVar7 & uVar6 << 0xd | 0x7ff00000) << 0x20);
          uVar9 = 0x1b;
          goto LAB_100241d0;
        }
      }
      else {
        uVar6 = 0;
LAB_10023e64:
        in_XMM2_Qb = auVar22._8_8_;
        dVar12 = param_1 * 1.8446744073709552e+19;
        uVar7 = uVar8;
        in_XMM3 = auVar27;
        dVar32 = dVar12;
        dVar34 = DAT_1002dd00;
        dVar31 = DAT_1002dd10;
        if (uVar2 == 0) goto LAB_10023eea;
      }
      dVar12 = (double)(((ulonglong)dVar32 & CONCAT44(DAT_1002dd20._4_4_,(undefined4)DAT_1002dd20))
                       >> 0x2c);
      uVar7 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
      dVar34 = (double)((ulonglong)dVar34 & (ulonglong)dVar32 | (ulonglong)dVar31) *
               *(double *)((int)&DAT_1002a470 + uVar7 * 4);
      dVar31 = *(double *)((int)&DAT_1002a470 + uVar7 * 4);
      dVar13 = *(double *)(&DAT_1002a880 + uVar7 * 8);
      dVar33 = *(double *)(&UNK_1002a888 + uVar7 * 8);
      uVar7 = 0x43e7f;
      goto LAB_10023a46;
    }
    uVar6 = uVar8;
    if ((0x7fefffff < (uVar8 & 0x7fffffff)) && ((0x7ff00000 < (uVar8 & 0x7fffffff) || (uVar2 != 0)))
       ) {
LAB_1002402f:
      _local_c = param_1 + param_1;
      uVar9 = 0x3ee;
      goto LAB_100241d0;
    }
    goto LAB_100240e5;
  }
  uVar6 = 0;
  uVar7 = 0x3fe7f;
LAB_10023a46:
  uVar3 = ((ushort)((ulonglong)dVar34 >> 0x26) & 0xff) + 1 & 0x1fe;
  dVar29 = (double)((ulonglong)dVar32 & (ulonglong)DAT_1002dd00 | (ulonglong)DAT_1002dd10);
  dVar14 = (double)(DAT_1002dd58 & (ulonglong)dVar29);
  dVar29 = dVar29 - dVar14;
  uVar4 = ((ushort)((ulonglong)(dVar34 * *(double *)(&DAT_1002b090 + uVar3 * 4)) >> 0x1f) & 0x1ff) +
          1 & 0x3fe;
  dVar30 = dVar31 * *(double *)(&DAT_1002b090 + uVar3 * 4) * *(double *)(&DAT_1002bcb0 + uVar4 * 4);
  dVar34 = dVar34 * *(double *)(&DAT_1002b090 + uVar3 * 4) * *(double *)(&DAT_1002bcb0 + uVar4 * 4);
  dVar32 = dVar13 + *(double *)(&DAT_1002b4a0 + uVar3 * 8) +
           (double)(int)((longlong)dVar12 - (ulonglong)uVar7 >> 8) +
           *(double *)(&DAT_1002c4c0 + uVar4 * 8);
  dVar12 = dVar33 + *(double *)(&DAT_1002b4a8 + uVar3 * 8) + *(double *)(&DAT_1002c4c8 + uVar4 * 8);
  dVar13 = (double)(DAT_1002dd58 & (ulonglong)dVar30);
  dVar30 = dVar30 - dVar13;
  dVar35 = DAT_1002dd60 + dVar34;
  dVar33 = dVar32 + dVar35;
  dVar31 = (double)CONCAT44(param_3,param_2);
  uVar20 = (ushort)(param_3 >> 0x10);
  dVar32 = dVar32 - dVar33;
  uVar3 = (uint)(ushort)((ulonglong)dVar33 >> 0x30);
  dVar13 = (((dVar34 - dVar13 * dVar14) - dVar14 * dVar30) - dVar13 * dVar29) - dVar29 * dVar30;
  dVar14 = dVar35 - dVar13;
  dVar34 = dVar33 - dVar13;
  uVar7 = uVar20 & 0x7ff0;
  if (0x7fef < uVar7) {
    _local_c = (double)CONCAT44(param_3,param_2);
    auVar22._8_8_ = in_XMM2_Qb;
    auVar22._0_8_ = _local_c;
    auVar27._0_8_ = (ulonglong)DAT_1002dd00 & (ulonglong)_local_c;
    auVar27._8_8_ = in_XMM3._8_8_ >> 0x1f & in_XMM2_Qb;
    auVar17._0_4_ = -(uint)((int)auVar27._0_8_ == 0);
    auVar17._4_4_ = -(uint)((int)(auVar27._0_8_ >> 0x20) == 0);
    auVar17._8_4_ = -(uint)((int)auVar27._8_8_ == 0);
    auVar17._12_4_ = -(uint)((int)(auVar27._8_8_ >> 0x20) == 0);
    if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff) {
      bVar11 = uVar2 == 0;
      uVar2 = uVar3;
      if (bVar11) {
        if (uVar8 != 0x3ff00000) {
          uVar2 = uVar8;
          if (uVar8 == 0xbff00000) {
            return (float10)1;
          }
          goto LAB_100240e5;
        }
      }
      else {
LAB_100240e5:
        _local_c = auVar22._0_8_;
        uVar28 = auVar27._8_8_ & auVar22._8_8_;
        auVar18._0_4_ = -(uint)((int)((ulonglong)DAT_1002dd00 & (ulonglong)_local_c) == 0);
        auVar18._4_4_ = -(uint)((int)(((ulonglong)DAT_1002dd00 & (ulonglong)_local_c) >> 0x20) == 0)
        ;
        auVar18._8_4_ = -(uint)((int)uVar28 == 0);
        auVar18._12_4_ = -(uint)((int)(uVar28 >> 0x20) == 0);
        if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) != 0xff)
        goto LAB_1002415e;
        if (uVar2 != 0 || uVar6 != 0xbff00000) {
          if ((auVar22._6_2_ & 0x8000) == 0) {
            if ((uVar10 & 0x7ff0) < 0x3ff0) {
              return (float10)0;
            }
          }
          else if (0x3fef < (uVar10 & 0x7ff0)) {
            return (float10)0;
          }
LAB_10024157:
          return (float10)_DAT_1002dd70;
        }
      }
      uVar9 = 0x1c;
      _local_c = DAT_1002a470;
    }
    else {
LAB_1002415e:
      _local_c = _local_c + _local_c;
      uVar9 = 0x3ee;
    }
    goto LAB_100241d0;
  }
  iVar5 = (uVar7 - 0x3ff0) + (uVar3 & 0x7ff0);
  if ((0x40a0U - iVar5 | iVar5 - 0x3c70U) < 0x80000000) {
LAB_10023b98:
    dVar29 = (double)(DAT_1002dd58 & (ulonglong)dVar31);
    dVar30 = (double)(DAT_1002dd58 & (ulonglong)dVar34);
    dVar13 = (dVar32 + dVar35) - (dVar13 - (dVar33 - dVar34));
    dVar33 = dVar29 * dVar30 * 128.0;
    uVar2 = (uint)ROUND(dVar33);
    dVar31 = dVar29 * (dVar34 - dVar30) + dVar30 * (dVar31 - dVar29) +
             (dVar34 - dVar30) * (dVar31 - dVar29);
    if (0 < (int)(0x1ff7f - uVar2 | uVar2 + 0x1e1ff)) {
      iVar5 = (uVar2 & 0x7f) * 0x10;
      auVar15._0_8_ = (double)((ulonglong)((uVar6 + uVar2 & 0xffffff80) + 0x1ff80) << 0x2d);
      auVar15._8_4_ = 0;
      auVar15._12_4_ = (int)((ulonglong)auVar15._0_8_ >> 0x20);
      dVar32 = *(double *)(&DAT_1002d4f0 + iVar5) * auVar15._0_8_;
      dVar31 = (dVar33 - ((dVar33 + _DAT_1002dcf0) - _DAT_1002dcf0)) * 0.0078125 +
               dVar31 + ((_DAT_1002d4d0 * dVar14 + _DAT_1002d4e0 * dVar14 * dVar14) *
                         dVar14 * dVar14 + _UNK_1002d4d8 * dVar14 + _UNK_1002d4e8 * dVar14 * dVar14
                        + dVar12 + dVar13) * (double)CONCAT44(param_3,param_2);
      return (float10)(dVar31 * dVar31 * dVar32 *
                       (_DAT_1002dd40 + _DAT_1002dd30 * dVar31) * dVar31 * dVar31 +
                       *(double *)(&UNK_1002d4f8 + iVar5) * auVar15._8_8_ +
                       (_UNK_1002dd48 + _UNK_1002dd38 * dVar31) * dVar31 * dVar31 * dVar32 +
                       DAT_1002dd50 * dVar31 * dVar32 + dVar32);
    }
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < -0x3fdff) {
LAB_10024429:
        uVar9 = 0x19;
        _local_c = (double)((ulonglong)(DAT_1002dd98 * DAT_1002dd98) | (ulonglong)uVar6 << 0x2d);
        goto LAB_100241d0;
      }
      uVar6 = uVar6 + 0x80;
      uVar8 = (uVar2 & 0xffffff80) + 0x3fe80;
      uVar10 = 0;
    }
    else {
      if (0x3ffff < uVar2) goto LAB_1002444c;
      uVar6 = uVar6 + 0x3ff00;
      uVar8 = uVar2 - 0x80 & 0xffffff80;
      uVar10 = 0x3ff0;
    }
    iVar5 = (uVar2 & 0x7f) * 0x10;
    uVar2 = ((int)-(uVar8 - 0x1ff80) >> 7) + 2;
    auVar19._0_8_ = (double)((ulonglong)uVar8 << 0x2d);
    auVar19._8_4_ = 0;
    auVar19._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
    dVar32 = *(double *)(&DAT_1002d4f0 + iVar5) * auVar19._0_8_;
    dVar31 = (dVar33 - ((dVar33 + _DAT_1002dcf0) - _DAT_1002dcf0)) * 0.0078125 +
             dVar31 + ((_DAT_1002d4d0 * dVar14 + _DAT_1002d4e0 * dVar14 * dVar14) * dVar14 * dVar14
                       + _UNK_1002d4d8 * dVar14 + _UNK_1002d4e8 * dVar14 * dVar14 + dVar12 + dVar13)
                      * (double)CONCAT44(param_3,param_2);
    _local_c = (double)((ulonglong)uVar6 << 0x2d);
    uVar28 = (ulonglong)(uVar2 + (uVar2 & 0x20));
    dVar13 = (double)(-1L << uVar28 & (ulonglong)dVar32);
    dVar31 = dVar31 * dVar31 * dVar32 * (_DAT_1002dd40 + _DAT_1002dd30 * dVar31) * dVar31 * dVar31 +
             *(double *)(&UNK_1002d4f8 + iVar5) * auVar19._8_8_ +
             (_UNK_1002dd48 + _UNK_1002dd38 * dVar31) * dVar31 * dVar31 * dVar32 +
             DAT_1002dd50 * dVar31 * dVar32;
    dVar33 = (double)((ulonglong)(dVar13 + dVar31) & -1L << uVar28);
    dVar31 = dVar31 + (dVar13 - dVar33) + (dVar32 - dVar13);
    if ((int)(uVar8 - 0x1ff80) < 1) {
      _local_c = dVar31 * _local_c + dVar33 * _local_c;
      _local_c = _local_c + (double)((ulonglong)uVar10 << 0x30) * _local_c;
      uVar9 = 0x18;
      if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (uVar9 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
        return (float10)_local_c;
      }
    }
    else {
      _local_c = (dVar31 + dVar33) * _local_c;
      _local_c = _local_c + (double)((ulonglong)uVar10 << 0x30) * _local_c;
      uVar9 = 0x18;
      if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (uVar9 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
        return (float10)_local_c;
      }
    }
  }
  else {
    dVar33 = dVar31 * dVar34;
    uVar2 = (ushort)((ulonglong)dVar33 >> 0x30) & 0x7ff0;
    uVar8 = uVar2 - 0x3c70;
    if ((0x40a0 - uVar2 | uVar8) < 0x80000000) goto LAB_10023b98;
    if (0x7fffffff < uVar8) {
      return (float10)(double)((ulonglong)(uVar6 | 0x1ff80) << 0x2d);
    }
    if (((uVar20 ^ (uVar10 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_10024429;
LAB_1002444c:
    uVar9 = 0x18;
    if (uVar6 == 0) {
      _local_c = DAT_1002dd90 * DAT_1002dd90;
    }
    else {
      _local_c = DAT_1002dd88 * DAT_1002dd90;
    }
  }
LAB_100241d0:
  ___libm_error_support(&param_1,&param_2,local_c,uVar9);
  return (float10)_local_c;
}



/**************************************************/

/* Function: __d_inttype @ 10024717 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __d_inttype
   
   Library: Visual Studio 2005 Release */

undefined4 __d_inttype(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined8 extraout_var;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_1,extraout_var);
    if (fVar2 == (float10)param_1) {
      param_1 = param_1 * _DAT_1002a358;
      fVar2 = (float10)__frnd();
      if (fVar2 == (float10)param_1) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}



/**************************************************/

/* Function: FUN_1002477b @ 1002477b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1002477b(int param_1,int param_2,int param_3,int param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  dVar2 = 0.0;
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar3 = _DAT_10030270;
  if (param_4 == 0x7ff00000) {
    if (param_3 == 0) {
      if ((dVar1 <= 1.0) && (dVar3 = 1.0, dVar1 < 1.0)) {
        dVar3 = dVar2;
      }
      goto LAB_100248a8;
    }
  }
  else if ((param_4 == -0x100000) && (param_3 == 0)) {
    dVar3 = dVar2;
    if ((dVar1 <= 1.0) && (dVar3 = _DAT_10030270, 1.0 <= dVar1)) {
      *param_5 = _DAT_10030278;
      return 1;
    }
    goto LAB_100248a8;
  }
  if (param_2 == 0x7ff00000) {
    if (param_1 != 0) {
      return 0;
    }
    if (((double)CONCAT44(param_4,param_3) <= 0.0) &&
       (dVar3 = dVar2, 0.0 <= (double)CONCAT44(param_4,param_3))) {
      dVar3 = 1.0;
    }
  }
  else {
    if (param_2 != -0x100000) {
      return 0;
    }
    if (param_1 != 0) {
      return 0;
    }
    iVar4 = __d_inttype(CONCAT44(param_4,param_3));
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        dVar3 = 1.0;
      }
      else {
        dVar3 = 0.0;
        if (iVar4 == 1) {
          dVar3 = _DAT_10030290;
        }
      }
    }
    else {
      dVar3 = _DAT_10030270;
      if (iVar4 == 1) {
        dVar3 = -_DAT_10030270;
      }
    }
  }
LAB_100248a8:
  *param_5 = dVar3;
  return 0;
}



/**************************************************/

/* Function: _strrchr @ 100248c0 */

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

/* Function: FID_conflict:__atoflt_l @ 100248ed */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  undefined1 local_2c [4];
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_10026b48(&local_14,local_2c,_Str,0,0,0,0,local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10024944:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10024984;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10024976:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10024984;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10024976;
    goto LAB_10024944;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10024984:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: FID_conflict:__atoflt_l @ 10024993 */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  undefined1 local_2c [4];
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_10026b48(&local_14,local_2c,_Str,0,0,0,0,local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_100249ea:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10024a2a;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10024a1c:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10024a2a;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10024a1c;
    goto LAB_100249ea;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10024a2a:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/**************************************************/

/* Function: __fptostr @ 10024a39 */

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
    puVar1 = (undefined4 *)FUN_1001cca7();
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
    puVar1 = (undefined4 *)FUN_1001cca7();
    eVar7 = 0x22;
    *puVar1 = 0x22;
  }
  FUN_1001cc48(0,0,0,0,0);
  return eVar7;
}



/**************************************************/

/* Function: ___dtold @ 10024af6 */

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void ___dtold(uint *param_1,uint *param_2)

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
      goto LAB_10024ba8;
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
LAB_10024ba8:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/**************************************************/

/* Function: __fltout2 @ 10024bb1 */

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  undefined4 in_stack_ffffffb0;
  undefined2 uVar4;
  short local_30;
  char local_2e;
  char local_2c [24];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffb0 >> 0x10);
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,&_Dbl);
  iVar1 = FUN_10027208(local_14,uStack_10,CONCAT22(uVar4,uStack_c),0x11,0,&local_30);
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

/* Function: __alldvrm @ 10024c40 */

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

/* Function: __aullshr @ 10024d20 */

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

/* Function: __controlfp_s @ 10024d3f */

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
    puVar2 = (undefined4 *)FUN_1001cca7();
    eVar3 = 0x16;
    *puVar2 = 0x16;
    FUN_1001cc48(0,0,0,0,0);
  }
  return eVar3;
}



/**************************************************/

/* Function: __87except @ 10024da9 */

/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2005 Release */

void __87except(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_94;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_1002f000 ^ (uint)&local_94;
  local_94 = (uint)*param_3;
  iVar1 = *param_2;
  if (iVar1 == 1) {
LAB_10024e03:
    uVar2 = 8;
LAB_10024e05:
    iVar1 = __handle_exc(uVar2,param_2 + 6,local_94);
    if (iVar1 == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_94,uVar2,param_1,param_2 + 2,param_2 + 6);
    }
  }
  else {
    if (iVar1 == 2) {
      uVar2 = 4;
      goto LAB_10024e05;
    }
    if (iVar1 == 3) {
      uVar2 = 0x11;
      goto LAB_10024e05;
    }
    if (iVar1 == 4) {
      uVar2 = 0x12;
      goto LAB_10024e05;
    }
    if (iVar1 == 5) goto LAB_10024e03;
    if (iVar1 == 7) {
      *param_2 = 1;
    }
    else if (iVar1 == 8) {
      uVar2 = 0x10;
      goto LAB_10024e05;
    }
  }
  __ctrlfp(local_94,0xffff);
  if ((*param_2 != 8) && (DAT_100303b0 == 0)) {
    iVar1 = FUN_10028403(param_2);
    if (iVar1 != 0) goto LAB_10024e90;
  }
  __set_errno_from_matherr(*param_2);
LAB_10024e90:
  __security_check_cookie(local_14 ^ (uint)&local_94);
  return;
}



/**************************************************/

/* Function: ___libm_error_support @ 10024ea5 */

/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2005 Release */

void ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  uStack_9 = 0;
  uStack_8 = 0;
  uStack_7 = 0;
  uStack_6 = 0;
  uStack_5 = 0;
  if (DAT_102ec694 == 0) {
    pcVar1 = FUN_10028403;
  }
  else {
    pcVar1 = (code *)FUN_1001b4b9(DAT_102ec698);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_10024f54:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)FUN_1001cca7();
        *puVar3 = 0x22;
      }
    }
    else if (param_4 < 0x1a) {
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_10024fc2;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_10024fc2;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_10024f4d;
              }
              local_28 = "exp";
              goto LAB_10024f89;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_10024f54;
      }
      local_28 = "pow";
LAB_10024f89:
      local_24 = *param_1;
      local_1c = *param_2;
      local_2c = 4;
      local_14 = *param_3;
      (*pcVar1)(&local_2c);
    }
    else {
      if (param_4 != 0x1a) {
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_1002507f_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_1002507f_caseD_3f1;
            }
            goto switchD_1002507f_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_10025038;
        }
        local_2c = 2;
LAB_10024f4d:
        local_28 = "pow";
        goto LAB_10024f54;
      }
      local_14 = 1.0;
    }
    goto LAB_10025118;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_1002507f_caseD_3ee:
    local_28 = "pow";
    goto LAB_10024fc2;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_1002507f_caseD_3f0:
    local_28 = "acos";
    goto LAB_10024fc2;
  case 0x3f1:
switchD_1002507f_caseD_3f1:
    local_28 = "asin";
    goto LAB_10024fc2;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_100250e4;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_100250e4;
  case 0x3f4:
    local_28 = "tan";
LAB_100250e4:
    local_14 = *param_1 *
               (double)CONCAT17(uStack_5,CONCAT16(uStack_6,CONCAT15(uStack_7,CONCAT14(uStack_8,
                                                  CONCAT13(uStack_9,CONCAT12(uStack_a,CONCAT11(
                                                  uStack_b,local_c)))))));
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_100250f5;
  default:
    goto switchD_1002507f_default;
  }
LAB_10025038:
  *param_3 = *param_1;
LAB_10024fc2:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_100250f5:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_1001cca7();
    *puVar3 = 0x21;
  }
LAB_10025118:
  *param_3 = local_14;
switchD_1002507f_default:
  return;
}



/**************************************************/

/* Function: __frnd @ 10025eeb */

/* Library Function - Single Match
    __frnd
   
   Library: Visual Studio 2005 Release */

float10 __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}



/**************************************************/

/* Function: __fpclass @ 10025efc */

/* Library Function - Single Match
    __fpclass
   
   Library: Visual Studio 2005 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  undefined4 uStack_8;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype();
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      uStack_8 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      uStack_8 = 2;
    }
    return uStack_8;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}



/**************************************************/

/* Function: __set_exp @ 10025f90 */

/* Library Function - Single Match
    __set_exp
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

float10 __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}



/**************************************************/

/* Function: __sptype @ 10025fba */

/* Library Function - Single Match
    __sptype
   
   Library: Visual Studio 2005 Release */

undefined4 __sptype(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}



/**************************************************/

/* Function: FUN_10026015 @ 10026015 */

void FUN_10026015(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int extraout_EDX;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    iVar3 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar3 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar3;
      param_2._2_1_ = (byte)((uint)iVar3 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar3 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar2) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = extraout_EDX;
  }
  else {
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = ((param_2 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  }
  *param_3 = iVar3;
  return;
}



/**************************************************/

/* Function: FID_conflict:__ld12tod @ 100260c4 */

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
        goto LAB_100265c3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_100302a0 - 1;
    iVar4 = (int)(DAT_100302a0 + ((int)DAT_100302a0 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_100302a0 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_100261f7;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_100261fe;
LAB_100261f7:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_100261fe:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1002620c;
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
LAB_1002620c:
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
    if (iVar12 < (int)(DAT_1003029c - DAT_100302a0)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1003029c < iVar12) {
        if (iVar12 < DAT_10030298) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_100302ac;
          iVar2 = (int)(DAT_100302a4 + ((int)DAT_100302a4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_100302a4 & 0x8000001f;
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
          iVar12 = (int)(DAT_100302a4 + ((int)DAT_100302a4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_100302a4 & 0x8000001f;
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
          iVar12 = DAT_100302ac + DAT_10030298;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_100265c3;
      }
      local_14 = DAT_1003029c - local_14;
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
      iVar2 = DAT_100302a0 - 1;
      iVar12 = (int)(DAT_100302a0 + ((int)DAT_100302a0 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_100302a0 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_100263af;
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
LAB_100263af:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_100302a4 + 1;
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
LAB_100265c3:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_100302a4 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_100302a8 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_100302a8 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FID_conflict:__ld12tod @ 10026606 */

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
        goto LAB_10026b05;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_100302b8 - 1;
    iVar4 = (int)(DAT_100302b8 + ((int)DAT_100302b8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_100302b8 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_10026739;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_10026740;
LAB_10026739:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_10026740:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1002674e;
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
LAB_1002674e:
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
    if (iVar12 < (int)(DAT_100302b4 - DAT_100302b8)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_100302b4 < iVar12) {
        if (iVar12 < DAT_100302b0) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_100302c4;
          iVar2 = (int)(DAT_100302bc + ((int)DAT_100302bc >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_100302bc & 0x8000001f;
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
          iVar12 = (int)(DAT_100302bc + ((int)DAT_100302bc >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_100302bc & 0x8000001f;
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
          iVar12 = DAT_100302c4 + DAT_100302b0;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_10026b05;
      }
      local_14 = DAT_100302b4 - local_14;
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
      iVar2 = DAT_100302b8 - 1;
      iVar12 = (int)(DAT_100302b8 + ((int)DAT_100302b8 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_100302b8 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_100268f1;
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
LAB_100268f1:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_100302bc + 1;
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
LAB_10026b05:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_100302bc & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_100302c0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_100302c0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/**************************************************/

/* Function: FUN_10026b48 @ 10026b48 */

void FUN_10026b48(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6
                 ,int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  char cVar10;
  ushort uVar11;
  undefined4 *puVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  ushort uVar19;
  char *pcVar20;
  undefined4 uVar21;
  undefined *puVar22;
  short *psVar23;
  uint uVar24;
  undefined4 uVar25;
  ushort uVar26;
  char *pcVar27;
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
  
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  iVar17 = 0;
  pcVar27 = local_24;
  uVar9 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar6 = false;
  bVar8 = false;
  bVar7 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar10 = *param_3, cVar10 == ' ' || (cVar10 == '\t')) || (cVar10 == '\n')) ||
           (cVar10 == '\r')); param_3 = param_3 + 1) {
    }
LAB_10026bcd:
    cVar10 = *param_3;
    pcVar20 = param_3 + 1;
    switch(iVar17) {
    case 0:
      if ((byte)(cVar10 - 0x31U) < 9) {
LAB_10026bea:
        iVar17 = 3;
        goto LAB_10026bec;
      }
      if (cVar10 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_10026c01:
        iVar17 = 5;
        param_3 = pcVar20;
      }
      else if (cVar10 == '+') {
        uVar9 = 0;
        iVar17 = 2;
        param_3 = pcVar20;
      }
      else {
        if (cVar10 != '-') {
          if (cVar10 == '0') goto LAB_10026c1b;
          goto LAB_10026da6;
        }
        iVar17 = 2;
        uVar9 = 0x8000;
        param_3 = pcVar20;
      }
      goto LAB_10026bcd;
    case 1:
      bVar6 = true;
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_10026bea;
      if (cVar10 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10026c52;
      if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_10026c82;
      if (cVar10 == '0') goto LAB_10026c1b;
      goto LAB_10026c62;
    case 2:
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_10026bea;
      if (cVar10 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10026c01;
      param_3 = local_58;
      if (cVar10 != '0') goto LAB_10026dd1;
LAB_10026c1b:
      iVar17 = 1;
      param_3 = pcVar20;
      goto LAB_10026bcd;
    case 3:
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar27 = cVar10 + -0x30;
          pcVar27 = pcVar27 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar10 = *pcVar20;
        pcVar20 = pcVar20 + 1;
      }
      if (cVar10 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10026cf5;
LAB_10026c52:
      bVar6 = true;
      iVar17 = 4;
      param_3 = pcVar20;
      goto LAB_10026bcd;
    case 4:
      bVar8 = true;
      if (local_50 == 0) {
        while (cVar10 == '0') {
          local_54 = local_54 + -1;
          cVar10 = *pcVar20;
          pcVar20 = pcVar20 + 1;
        }
      }
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar27 = cVar10 + -0x30;
          pcVar27 = pcVar27 + 1;
          local_54 = local_54 + -1;
        }
        cVar10 = *pcVar20;
        pcVar20 = pcVar20 + 1;
      }
LAB_10026cf5:
      if ((cVar10 == '+') || (cVar10 == '-')) {
LAB_10026c82:
        bVar6 = true;
        iVar17 = 0xb;
        param_3 = pcVar20 + -1;
      }
      else {
LAB_10026c62:
        bVar6 = true;
        if ((cVar10 < 'D') || (('E' < cVar10 && ((cVar10 < 'd' || ('e' < cVar10))))))
        goto LAB_10026da6;
        iVar17 = 6;
        param_3 = pcVar20;
      }
      goto LAB_10026bcd;
    case 5:
      bVar8 = true;
      param_3 = local_58;
      if ((byte)(cVar10 - 0x30U) < 10) {
        iVar17 = 4;
        goto LAB_10026bec;
      }
      goto LAB_10026dd1;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar10 - 0x31U)) {
        if (cVar10 == '+') goto LAB_10026d8d;
        if (cVar10 == '-') goto LAB_10026d81;
LAB_10026d74:
        param_3 = local_58;
        if (cVar10 != '0') goto LAB_10026dd1;
        iVar17 = 8;
        param_3 = pcVar20;
        goto LAB_10026bcd;
      }
      break;
    case 7:
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_10026d74;
      break;
    case 8:
      bVar7 = true;
      while (cVar10 == '0') {
        cVar10 = *pcVar20;
        pcVar20 = pcVar20 + 1;
      }
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_10026da6;
      break;
    case 9:
      bVar7 = true;
      local_68 = 0;
      goto LAB_10026e33;
    default:
      goto switchD_10026bd9_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar10 == '+') {
LAB_10026d8d:
          iVar17 = 7;
          param_3 = pcVar20;
        }
        else {
          if (cVar10 != '-') goto LAB_10026dd1;
LAB_10026d81:
          local_6c = -1;
          iVar17 = 7;
          param_3 = pcVar20;
        }
        goto LAB_10026bcd;
      }
      iVar17 = 10;
      pcVar20 = param_3;
switchD_10026bd9_caseD_a:
      param_3 = pcVar20;
      if (iVar17 != 10) goto LAB_10026bcd;
      goto LAB_10026dd1;
    }
    iVar17 = 9;
LAB_10026bec:
    param_3 = pcVar20 + -1;
    goto LAB_10026bcd;
  }
  puVar12 = (undefined4 *)FUN_1001cca7();
  *puVar12 = 0x16;
  FUN_1001cc48(0,0,0,0,0);
  iVar15 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_100271c9;
LAB_10026e33:
  if ((cVar10 < '0') || ('9' < cVar10)) goto LAB_10026e4e;
  local_68 = local_68 * 10 + -0x30 + (int)cVar10;
  if (local_68 < 0x1451) {
    cVar10 = *pcVar20;
    pcVar20 = pcVar20 + 1;
    goto LAB_10026e33;
  }
  local_68 = 0x1451;
LAB_10026e4e:
  while (('/' < cVar10 && (cVar10 < ':'))) {
    cVar10 = *pcVar20;
    pcVar20 = pcVar20 + 1;
  }
LAB_10026da6:
  param_3 = pcVar20 + -1;
LAB_10026dd1:
  *param_2 = (int)param_3;
  if (bVar6) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar27 = pcVar27 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_100271ab;
    while (pcVar27 = pcVar27 + -1, *pcVar27 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar5 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    iVar15 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar17 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar7) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar8) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_100271ab;
      puVar22 = &DAT_10030370;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar22 = &DAT_100304d0;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar17 = uStack_4a;
        iVar1 = uStack_2e;
        iVar2 = uStack_2a;
        iVar15 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar5 = local_3c;
joined_r0x10026ed9:
        if (local_58 != (char *)0x0) {
          uVar24 = (int)local_58 >> 3;
          puVar22 = puVar22 + 0x54;
          uVar13 = (uint)local_58 & 7;
          local_58 = (char *)uVar24;
          if (uVar13 != 0) {
            puVar14 = (ushort *)(puVar22 + uVar13 * 0xc);
            if (0x7fff < *puVar14) {
              local_4c = (ushort)*(undefined4 *)puVar14;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar14 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar14 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar14 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar14 + 4);
              iVar17 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar17;
              uStack_4a._2_2_ = (undefined2)((uint)iVar17 >> 0x10);
              puVar14 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            iVar3 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar4 = 0;
            uStack_26 = 0;
            uVar16 = local_36 & 0x7fff;
            uVar19 = puVar14[5] & 0x7fff;
            uVar11 = (puVar14[5] ^ local_36) & 0x8000;
            uVar26 = uVar19 + uVar16;
            iVar1 = 0;
            iVar2 = 0;
            if (((uVar16 < 0x7fff) && (iVar1 = 0, iVar2 = 0, uVar19 < 0x7fff)) &&
               (iVar1 = iVar3, iVar2 = iVar4, uVar26 < 0xbffe)) {
              if (0x3fbf < uVar26) {
                if (((uVar16 == 0) &&
                    (uVar26 = uVar26 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar5 == 0 && (iVar15 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar19 == 0) &&
                         (uVar26 = uVar26 + 1, (*(uint *)(puVar14 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar14 + 2) == 0 && (*(int *)puVar14 == 0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  iVar15 = 0;
                  iVar5 = 0;
                }
                else {
                  local_6c = 0;
                  psVar23 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar14 + 4;
                      do {
                        bVar6 = false;
                        uVar24 = *(uint *)(psVar23 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar24 < *(uint *)(psVar23 + -2)) ||
                           (uVar24 < (uint)*local_64 * (uint)*local_60)) {
                          bVar6 = true;
                        }
                        *(uint *)(psVar23 + -2) = uVar24;
                        if (bVar6) {
                          *psVar23 = *psVar23 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar23 = psVar23 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar26 = uVar26 + 0xc002;
                  if ((short)uVar26 < 1) {
LAB_1002708f:
                    uVar26 = uVar26 - 1;
                    if ((short)uVar26 < 0) {
                      uVar24 = (uint)(ushort)-uVar26;
                      uVar26 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar1 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar13 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar18 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar24 = uVar24 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar13 >> 1);
                        local_30 = (byte)uVar18;
                        uStack_2f = (undefined1)(uVar18 >> 8);
                      } while (uVar24 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar16 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar2 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar2;
                      uStack_2f = (undefined1)((uint)iVar2 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar2 | uVar16 >> 0xf;
                      iVar1 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar1 | (ushort)uStack_2a >> 0xf;
                      uVar26 = uVar26 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar1 >> 0x10);
                    } while (0 < (short)uVar26);
                    if ((short)uVar26 < 1) goto LAB_1002708f;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      iVar1 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar26 = uVar26 + 1;
                          iVar2 = 0;
                          iVar1 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar2 = 0;
                          iVar1 = 0;
                        }
                      }
                      else {
                        iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar2;
                        uStack_2a._2_2_ = (ushort)((uint)iVar2 >> 0x10);
                      }
                    }
                    else {
                      iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)iVar1;
                      uStack_2e._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar26) goto LAB_1002714e;
                  local_40 = iVar1;
                  local_3c = iVar2;
                  uStack_38 = uStack_26;
                  local_36 = uVar26 | uVar11;
                  iVar15 = iVar1;
                  iVar5 = iVar2;
                }
                goto joined_r0x10026ed9;
              }
              iVar15 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_1002714e:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar15 = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar15;
            local_36 = (ushort)((uint)iVar15 >> 0x10);
            iVar15 = 0;
            iVar5 = 0;
          }
          goto joined_r0x10026ed9;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar5 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar5;
      local_40._2_2_ = (undefined2)((uint)iVar15 >> 0x10);
      local_40._0_2_ = (undefined2)iVar15;
      uVar25 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar21 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar26 = local_36;
      uStack_4a = iVar17;
      uStack_2e = iVar1;
      uStack_2a = iVar2;
      local_3c = iVar5;
    }
    else {
      uVar25 = 0;
      uVar26 = 0x7fff;
      uVar21 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_100271ab:
    iVar15 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar26 = 0;
    uVar21 = 0;
    uVar25 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar26 | uVar9;
  *(undefined4 *)(param_1 + 1) = uVar25;
  *(undefined4 *)(param_1 + 3) = uVar21;
LAB_100271c9:
  local_40 = iVar15;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: FUN_10027208 @ 10027208 */

/* WARNING: Removing unreachable block (ram,0x100276f9) */
/* WARNING: Removing unreachable block (ram,0x10027703) */
/* WARNING: Removing unreachable block (ram,0x10027708) */

void FUN_10027208(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  errno_t eVar5;
  short *psVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  ushort uVar22;
  ushort uVar23;
  char *pcVar24;
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
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  uVar7 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12._0_2_ = (ushort)((uint)param_1 >> 0x10);
  uStack_12._2_2_ = (ushort)param_2;
  uStack_e._0_2_ = (ushort)(param_2 >> 0x10);
  uStack_e._2_2_ = param_3;
  uVar14 = CONCAT22(param_3,(ushort)uStack_e);
  uVar10 = CONCAT22(param_3,(ushort)uStack_e);
  uVar8 = param_3 & 0x8000;
  uVar13 = param_3 & 0x7fff;
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
  if ((((short)uVar13 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    goto LAB_10027a86;
  }
  if ((short)uVar13 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_10027337;
        pcVar24 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_10027337:
          pcVar24 = "1#QNAN";
          goto LAB_1002733c;
        }
        pcVar24 = "1#IND";
      }
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar24);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar24 = "1#SNAN";
LAB_1002733c:
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar24);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    uVar10 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
    uVar7 = CONCAT22(local_24._2_2_,(ushort)local_24);
    goto LAB_10027a86;
  }
  local_50 = (short)(((uVar13 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar13 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar13;
  bStack_19 = (byte)(uVar13 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  uVar7 = param_1 << 0x10;
  local_6c = &DAT_10030370;
  uStack_1c = (ushort)uStack_e;
  uStack_20 = uStack_12;
  if (uVar16 != 0) {
    uVar13 = -uVar16;
    uVar14 = uVar10;
    uVar7 = param_1 << 0x10;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_100304d0;
      uVar13 = uVar16;
    }
joined_r0x100273ca:
    if (uVar13 != 0) {
      local_6c = local_6c + 0x54;
      uVar10 = uVar13 & 7;
      uVar13 = (int)uVar13 >> 3;
      if (uVar10 != 0) {
        puVar11 = (ushort *)(local_6c + uVar10 * 0xc);
        if (0x7fff < *puVar11) {
          local_40 = (ushort)*(undefined4 *)puVar11;
          uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar11 >> 0x10);
          puVar2 = puVar11 + 4;
          uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar11 + 2);
          uStack_3a = (ushort)((uint)*(undefined4 *)(puVar11 + 2) >> 0x10);
          puVar11 = &local_40;
          local_38 = *(int *)puVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        uVar12 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar22 = puVar11[5] & 0x7fff;
        local_4c = (ushort *)0x0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        uStack_12 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        uVar16 = 0;
        uStack_a = 0;
        uVar9 = (puVar11[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar23 = uVar22 + uVar12;
        uVar10 = 0;
        uVar14 = 0;
        if (((uVar12 < 0x7fff) && (uVar10 = 0, uVar14 = 0, uVar22 < 0x7fff)) &&
           (uVar10 = uStack_12, uVar14 = uVar16, uVar23 < 0xbffe)) {
          if (uVar23 < 0x3fc0) {
            uStack_1c = 0;
            local_1a = 0;
            bStack_19 = 0;
            uStack_20._0_2_ = 0;
            uStack_20._2_2_ = 0;
            local_24._0_2_ = 0;
            local_24._2_2_ = 0;
            uStack_20 = 0;
            uVar7 = 0;
            goto joined_r0x100273ca;
          }
          if (((uVar12 == 0) &&
              (uVar23 = uVar23 + 1,
              (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
             ((uStack_20 == 0 && (uVar7 == 0)))) {
            local_1a = 0;
            bStack_19 = 0;
            goto joined_r0x100273ca;
          }
          if ((((uVar22 == 0) && (uVar23 = uVar23 + 1, (*(uint *)(puVar11 + 4) & 0x7fffffff) == 0))
              && (*(int *)(puVar11 + 2) == 0)) && (*(int *)puVar11 == 0)) {
            uStack_1c = 0;
            local_1a = 0;
            bStack_19 = 0;
            uStack_20._0_2_ = 0;
            uStack_20._2_2_ = 0;
            local_24._0_2_ = 0;
            local_24._2_2_ = 0;
            uStack_20 = 0;
            uVar7 = 0;
            goto joined_r0x100273ca;
          }
          psVar6 = (short *)((int)&uStack_12 + 2);
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = puVar11 + 4;
              do {
                bVar4 = false;
                uVar14 = *(uint *)(psVar6 + -2) + (uint)*local_5c * (uint)*local_58;
                if ((uVar14 < *(uint *)(psVar6 + -2)) ||
                   (uVar14 < (uint)*local_5c * (uint)*local_58)) {
                  bVar4 = true;
                }
                *(uint *)(psVar6 + -2) = uVar14;
                if (bVar4) {
                  *psVar6 = *psVar6 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = local_58 + -1;
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            psVar6 = psVar6 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar23 = uVar23 + 0xc002;
          if ((short)uVar23 < 1) {
LAB_10027581:
            uVar23 = uVar23 - 1;
            if ((short)uVar23 < 0) {
              local_48 = (uint)(ushort)-uVar23;
              uVar23 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar20 = CONCAT22(uStack_a,uStack_e._2_2_);
                uVar14 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                iVar17 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                uStack_a = uStack_a >> 1;
                uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                uVar7 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
                local_48 = local_48 - 1;
                uStack_12._2_2_ = (ushort)(uVar14 >> 1);
                local_14 = (byte)uVar7;
                uStack_13 = (undefined1)(uVar7 >> 8);
              } while (local_48 != 0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar12 = (ushort)uStack_12;
              if ((uStack_a & 0x8000) != 0) break;
              iVar17 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar17;
              uStack_13 = (undefined1)((uint)iVar17 >> 8);
              uStack_12._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              iVar17 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
              uStack_12._2_2_ = (ushort)iVar17 | uVar12 >> 0xf;
              iVar20 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
              uStack_e._2_2_ = (ushort)iVar20 | (ushort)uStack_e >> 0xf;
              uVar23 = uVar23 - 1;
              uStack_e._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              uStack_a = (ushort)((uint)iVar20 >> 0x10);
            } while (0 < (short)uVar23);
            if ((short)uVar23 < 1) goto LAB_10027581;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (uVar14 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
             uVar10 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
             (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
              uStack_12._0_2_ = 0;
              uStack_12._2_2_ = 0;
              uVar10 = 0;
              if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                uStack_e._0_2_ = 0;
                uStack_e._2_2_ = 0;
                if (uStack_a == 0xffff) {
                  uStack_a = 0x8000;
                  uVar23 = uVar23 + 1;
                  uVar14 = 0;
                  uVar10 = 0;
                }
                else {
                  uStack_a = uStack_a + 1;
                  uVar14 = 0;
                  uVar10 = 0;
                }
              }
              else {
                uVar14 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                uStack_e._0_2_ = (ushort)uVar14;
                uStack_e._2_2_ = (ushort)(uVar14 >> 0x10);
              }
            }
            else {
              uVar10 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
              uStack_12._0_2_ = (ushort)uVar10;
              uStack_12._2_2_ = (ushort)(uVar10 >> 0x10);
              uVar14 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
            }
          }
          if (uVar23 < 0x7fff) {
            local_24 = uVar10;
            bStack_19 = (byte)(uVar23 >> 8) | (byte)(uVar9 >> 8);
            uStack_20 = uVar14;
            uStack_1c = uStack_a;
            local_1a = (undefined1)uVar23;
            uStack_12 = uVar10;
            uVar7 = uVar10;
            goto joined_r0x100273ca;
          }
        }
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        uStack_20 = 0;
        iVar17 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        uVar7 = 0;
        uStack_1c = (ushort)iVar17;
        local_1a = (undefined1)((uint)iVar17 >> 0x10);
        bStack_19 = (byte)((uint)iVar17 >> 0x18);
        uStack_12 = uVar10;
      }
      goto joined_r0x100273ca;
    }
  }
  uVar13 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uVar10 = uVar14;
  if (0x3ffe < (ushort)(uVar13 >> 0x10)) {
    local_50 = local_50 + 1;
    uVar14 = uVar13 >> 0x10 & 0x7fff;
    iVar17 = uVar14 + 0x3ffb;
    local_5c = (ushort *)0x0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12._0_2_ = 0;
    uStack_12._2_2_ = 0;
    uStack_12 = 0;
    uStack_e._0_2_ = 0;
    uStack_e._2_2_ = 0;
    uVar10 = 0;
    uStack_a = 0;
    if (((ushort)uVar14 < 0x7fff) && ((ushort)iVar17 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar17) {
        if (((((ushort)uVar14 == 0) &&
             (iVar17 = uVar14 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (uStack_20 == 0)) && (uVar7 == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          goto LAB_100278c5;
        }
        local_58 = (ushort *)0x0;
        psVar6 = (short *)((int)&uStack_12 + 2);
        local_44 = 5;
        do {
          local_54 = local_44;
          if (0 < local_44) {
            local_60 = &local_2c;
            local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
            do {
              bVar4 = false;
              uVar14 = *(uint *)(psVar6 + -2) + (uint)*local_60 * (uint)*local_4c;
              if ((uVar14 < *(uint *)(psVar6 + -2)) || (uVar14 < (uint)*local_60 * (uint)*local_4c))
              {
                bVar4 = true;
              }
              *(uint *)(psVar6 + -2) = uVar14;
              if (bVar4) {
                *psVar6 = *psVar6 + 1;
              }
              local_4c = local_4c + 1;
              local_60 = local_60 + -1;
              local_54 = local_54 + -1;
            } while (0 < local_54);
          }
          psVar6 = psVar6 + 1;
          local_58 = (ushort *)((int)local_58 + 1);
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar17 = iVar17 + 0xc002;
        if ((short)iVar17 < 1) {
LAB_100277d3:
          uVar23 = (ushort)(iVar17 + 0xffff);
          if ((short)uVar23 < 0) {
            uVar14 = -(iVar17 + 0xffff);
            uVar7 = uVar14 & 0xffff;
            uVar23 = uVar23 + (short)uVar14;
            do {
              if ((local_14 & 1) != 0) {
                local_5c = (ushort *)((int)local_5c + 1);
              }
              iVar20 = CONCAT22(uStack_a,uStack_e._2_2_);
              uVar14 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              iVar17 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
              uStack_a = uStack_a >> 1;
              uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar10 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
              uVar7 = uVar7 - 1;
              uStack_12._2_2_ = (ushort)(uVar14 >> 1);
              local_14 = (byte)uVar10;
              uStack_13 = (undefined1)(uVar10 >> 8);
            } while (uVar7 != 0);
            if (local_5c != (ushort *)0x0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar23 = (ushort)uStack_12;
            if ((uStack_a & 0x8000) != 0) break;
            iVar20 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar20;
            uStack_13 = (undefined1)((uint)iVar20 >> 8);
            uStack_12._0_2_ = (ushort)((uint)iVar20 >> 0x10);
            iVar20 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
            uStack_12._2_2_ = (ushort)iVar20 | uVar23 >> 0xf;
            iVar3 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
            uStack_e._2_2_ = (ushort)iVar3 | (ushort)uStack_e >> 0xf;
            iVar17 = iVar17 + 0xffff;
            uStack_e._0_2_ = (ushort)((uint)iVar20 >> 0x10);
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar17);
          uVar23 = (ushort)iVar17;
          if ((short)uVar23 < 1) goto LAB_100277d3;
        }
        uStack_20 = 0;
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uVar10 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
           uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
           (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
            uStack_12 = uStack_20;
            if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
              uVar10 = uStack_20;
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar23 = uVar23 + 1;
              }
              else {
                uStack_a = uStack_a + 1;
              }
            }
            else {
              uVar10 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
            }
          }
          else {
            uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
            uVar10 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
          }
        }
        if (uVar23 < 0x7fff) {
          bStack_19 = (byte)(uVar23 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar23;
          uStack_20 = uVar10;
          uVar7 = uStack_12;
        }
        else {
          iVar17 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar17;
          local_1a = (undefined1)((uint)iVar17 >> 0x10);
          bStack_19 = (byte)((uint)iVar17 >> 0x18);
          uVar7 = uStack_20;
        }
        goto LAB_100278c5;
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
    uStack_12 = 0;
    uVar10 = 0;
    uStack_20 = 0;
    uVar7 = 0;
  }
LAB_100278c5:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    iVar17 = 8;
    uVar14 = uVar7;
    do {
      uVar7 = uVar14 << 1;
      uVar13 = uStack_20 * 2;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uStack_20 >> 0x1f);
      iVar17 = iVar17 + -1;
      uStack_20._0_2_ = (ushort)(uVar13 | uVar14 >> 0x1f);
      uStack_20._2_2_ = (ushort)(uVar13 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
      uVar14 = uVar7;
    } while (iVar17 != 0);
    if ((iVar20 < 0) && (uVar14 = -iVar20 & 0xff, uVar14 != 0)) {
      do {
        iVar20 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar16 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        iVar17 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        uVar13 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar13;
        local_1a = (undefined1)(uVar13 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_20._2_2_ = uStack_20._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
        local_24._2_2_ = (ushort)(uVar7 >> 0x11) | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
        uVar14 = uVar14 - 1;
        uStack_20._0_2_ = (ushort)(uVar16 >> 1);
        local_24._0_2_ = (ushort)(uVar7 >> 1);
        uVar7 = CONCAT22(local_24._2_2_,(ushort)local_24);
      } while (0 < (int)uVar14);
    }
    psVar6 = param_6 + 2;
    psVar18 = psVar6;
    uVar23 = uStack_20._2_2_;
    for (param_4 = param_4 + 1; 0 < param_4; param_4 = param_4 + -1) {
      local_24._2_2_ = (ushort)(uVar7 >> 0x10);
      local_24._0_2_ = (ushort)uVar7;
      iVar1 = CONCAT22((ushort)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar14 = CONCAT22(uVar23,(ushort)uStack_20) * 2;
      uVar13 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar23 >> 0xf)) * 2 |
               uVar14 >> 0x1f;
      uVar16 = (uVar14 | local_24._2_2_ >> 0xf) * 2 | (uVar7 << 1) >> 0x1f;
      uVar14 = uVar7 * 5;
      if ((uVar14 < uVar7 * 4) || (uVar21 = uVar16, uVar14 < uVar7)) {
        uVar21 = uVar16 + 1;
        bVar4 = false;
        if ((uVar21 < uVar16) || (uVar21 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar13 = uVar13 + 1;
        }
      }
      uVar16 = CONCAT22(uVar23,(ushort)uStack_20) + uVar21;
      if ((uVar16 < uVar21) || (uVar16 < CONCAT22(uVar23,(ushort)uStack_20))) {
        uVar13 = uVar13 + 1;
      }
      iVar17 = (uVar13 + local_38) * 2;
      uStack_1c = (ushort)iVar17 | (ushort)(uVar16 >> 0x1f);
      uVar7 = uVar7 * 10;
      local_1a = (undefined1)((uint)iVar17 >> 0x10);
      uStack_20._0_2_ = (ushort)(uVar16 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar17 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      uStack_20._2_2_ = (ushort)(uVar16 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uVar23;
      uVar23 = uStack_20._2_2_;
    }
    uStack_20 = CONCAT22(uVar23,(ushort)uStack_20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar6 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1))
      {
      }
      if (psVar19 < psVar6) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar6 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_10027a86;
      }
    }
    else {
      for (; (psVar6 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1))
      {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar6) {
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
LAB_10027a86:
  local_24 = uVar7;
  uStack_e = uVar10;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/**************************************************/

/* Function: __hw_cw @ 10027ace */

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

/* Function: ___hw_cw_sse2 @ 10027b5c */

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
  param_2 = param_2 & 0x3000000;
  if (param_2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (param_2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (param_2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}



/**************************************************/

/* Function: __control87 @ 10027bfc */

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
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
  if (DAT_102ed6a8 != 0) {
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
    if ((~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue) != uVar5) {
      uVar4 = ___hw_cw_sse2();
      ___set_fpsr_sse2(uVar4);
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

/* Function: __raise_exc_ex @ 10027eff */

/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2005 Release */

void __raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6
                   ,int param_7)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    param_3 = 0xc000008f;
  }
  if ((uVar4 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    param_3 = 0xc0000093;
  }
  if ((uVar4 & 1) != 0) {
    param_1[1] = param_1[1] | 4;
    param_3 = 0xc0000091;
  }
  if ((uVar4 & 4) != 0) {
    param_1[1] = param_1[1] | 8;
    param_3 = 0xc000008e;
  }
  if ((uVar4 & 8) != 0) {
    param_1[1] = param_1[1] | 0x10;
    param_3 = 0xc0000090;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  bVar3 = __statfp();
  puVar2 = param_6;
  if ((bVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((bVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((bVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((bVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((bVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar4 = *puVar1 & 0xc00;
  if (uVar4 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar4 == 0x400) {
      uVar4 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar4 != 0x800) {
        if (uVar4 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_1002805c;
      }
      uVar4 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar4;
  }
LAB_1002805c:
  uVar4 = *puVar1 & 0x300;
  if (uVar4 == 0) {
    uVar4 = *param_1 & 0xffffffeb | 8;
LAB_10028092:
    *param_1 = uVar4;
  }
  else {
    if (uVar4 == 0x200) {
      uVar4 = *param_1 & 0xffffffe7 | 4;
      goto LAB_10028092;
    }
    if (uVar4 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  __clrfp();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar4 = *param_1 & 3;
  if (uVar4 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar4 == 1) {
      uVar4 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar4 != 2) {
        if (uVar4 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_10028197;
      }
      uVar4 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar4;
  }
LAB_10028197:
  uVar4 = *param_1 >> 2 & 7;
  if (uVar4 == 0) {
    uVar4 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_100281c3;
    }
    uVar4 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar4;
LAB_100281c3:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}



/**************************************************/

/* Function: __raise_exc @ 100281d9 */

/* Library Function - Single Match
    __raise_exc
   
   Library: Visual Studio 2005 Release */

void __raise_exc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



/**************************************************/

/* Function: __handle_exc @ 100281fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2005 Release */

bool __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  uVar6 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar6;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_10028444(1);
    uVar6 = param_1 & 0x17;
    goto LAB_100283b9;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_10028444(4);
    uVar6 = param_1 & 0x1b;
    goto LAB_100283b9;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar7 = (param_1 & 0x10) != 0;
      if (*param_2 != 0.0) {
        fVar8 = (float10)FUN_10026015(*param_2,&local_c);
        dVar2 = (double)fVar8;
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          local_14 = dVar2 * _DAT_1002a3a0;
          bVar7 = bVar3;
        }
        else {
          local_14 = (double)((ulonglong)dVar2 & 0xfffffffffffff | 0x10000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if ((((ulonglong)local_14 & 1) != 0) && (!bVar7)) {
                bVar7 = bVar3;
              }
              uVar6 = (uint)local_14 >> 1;
              uVar4 = (ulonglong)local_14 & 0x100000000;
              local_14._0_4_ = uVar6;
              if (uVar4 != 0) {
                local_14._0_4_ = uVar6 | 0x80000000;
              }
              local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (dVar2 < 0.0) {
            local_14 = -local_14;
          }
        }
        *param_2 = local_14;
        bVar3 = bVar7;
      }
      if (bVar3) {
        FUN_10028444(0x10);
      }
      uVar6 = local_8 & 0xfffffffd;
      local_8 = uVar6;
    }
    goto LAB_100283b9;
  }
  FUN_10028444(8);
  uVar6 = param_3 & 0xc00;
  dVar2 = _DAT_10030270;
  dVar5 = _DAT_10030270;
  if (uVar6 == 0) {
    dVar1 = *param_2;
joined_r0x1002829c:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar5;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar6 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_10030280;
      goto joined_r0x1002829c;
    }
    dVar5 = _DAT_10030280;
    if (uVar6 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x1002829c;
    }
    if (uVar6 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_10030280;
      goto joined_r0x1002829c;
    }
  }
  uVar6 = param_1 & 0x1e;
LAB_100283b9:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_10028444(0x20);
    uVar6 = uVar6 & 0xffffffef;
  }
  return uVar6 == 0;
}



/**************************************************/

/* Function: __set_errno_from_matherr @ 100283db */

/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2005 Release */

void __set_errno_from_matherr(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_1001cca7();
    *puVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = (undefined4 *)FUN_1001cca7();
    *puVar1 = 0x22;
    return;
  }
  return;
}



/**************************************************/

/* Function: FUN_10028403 @ 10028403 */

undefined4 FUN_10028403(void)

{
  return 0;
}



/**************************************************/

/* Function: __statfp @ 10028406 */

/* Library Function - Single Match
    __statfp
   
   Library: Visual Studio 2005 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/**************************************************/

/* Function: __clrfp @ 10028411 */

/* Library Function - Single Match
    __clrfp
   
   Library: Visual Studio 2005 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/**************************************************/

/* Function: __ctrlfp @ 1002841d */

/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2005 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



/**************************************************/

/* Function: FUN_10028444 @ 10028444 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10028444(void)

{
  return;
}



/**************************************************/

/* Function: ___set_fpsr_sse2 @ 1002849a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void ___set_fpsr_sse2(uint param_1)

{
  if (DAT_102ed6a8 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_100303cc == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/**************************************************/

/* Function: ___mtold12 @ 1002850c */

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void ___mtold12(char *param_1,int param_2,uint *param_3)

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
  
  uVar7 = DAT_1002f000 ^ (uint)&stack0xfffffffc;
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

