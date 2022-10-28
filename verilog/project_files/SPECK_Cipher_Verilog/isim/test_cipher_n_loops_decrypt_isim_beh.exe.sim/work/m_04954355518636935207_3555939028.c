/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/florianfrank/Documents/Research/Projects/PUFMem/Self-Encrypting-Memory/code/SPECK_Cipher_Verilog/test_cipher_n_loops_decrypt.v";
static int ng1[] = {0, 0};
static int ng2[] = {0, 0, 0, 0};
static unsigned int ng3[] = {31U, 0U, 0U, 0U};
static int ng4[] = {1, 0, 0, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {0U, 0U};
static const char *ng8 = "Iteration %d k0: 0x%x k1: 0x%x";
static int ng9[] = {128, 0};
static int ng10[] = {64, 0};
static unsigned int ng11[] = {31U, 0U};
static const char *ng12 = "Iteration %d p0: %x p1: %x";



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);

LAB4:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5064);
    xsi_process_wait(t2, 300000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(33, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}

static void Initial_36_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);

LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5312);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 3064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3064);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_62_2(char *t0)
{
    char t5[16];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(62, ng0);

LAB2:    xsi_set_current_line(63, ng0);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);

LAB3:    t1 = (t0 + 4184);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    xsi_vlog_unsigned_leq(t5, 64, t3, 64, t4, 64);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB6:    xsi_set_current_line(64, ng0);
    t12 = (t0 + 4184);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 4024);
    t18 = (t0 + 4024);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 4024);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 4184);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 64, 2);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4184);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t5, 64, t3, 64, t4, 32);
    t6 = (t0 + 4184);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 64);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

}

static void Always_99_3(char *t0)
{
    char t11[8];
    char t21[8];
    char t40[8];
    char t42[32];
    char t43[16];
    char t44[32];
    char t51[24];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;

LAB0:    t1 = (t0 + 6000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6320);
    *((int *)t2) = 1;
    t3 = (t0 + 6032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 4344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(101, ng0);

LAB20:    xsi_set_current_line(102, ng0);
    t7 = ((char*)((ng5)));
    t10 = (t0 + 3544);
    t12 = (t0 + 3544);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 3864);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t17, 32, 1);
    t18 = (t11 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 3, t5, 32);
    t7 = (t0 + 4344);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 3);
    goto LAB19;

LAB9:    xsi_set_current_line(105, ng0);

LAB23:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3544);
    t5 = (t0 + 3544);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 3864);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t11, t8, 2, t13, 32, 1);
    t14 = (t11 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1824U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3864);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t11, 32, t3, t5, 2, t10, 32, 1);
    t12 = ((char*)((ng6)));
    memset(t21, 0, 8);
    t13 = (t11 + 4);
    t14 = (t12 + 4);
    t19 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t19 ^ t22);
    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t14);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t14);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB29;

LAB26:    if (t30 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t21) = 1;

LAB29:    t16 = (t21 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (~(t33));
    t35 = *((unsigned int *)t21);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB19;

LAB11:    xsi_set_current_line(113, ng0);

LAB34:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng11)));
    t8 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t7, 32, t8, 32);
    memset(t21, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB36;

LAB35:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB37;

LAB38:    t14 = (t21 + 4);
    t19 = *((unsigned int *)t14);
    t22 = (~(t19));
    t23 = *((unsigned int *)t21);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(118, ng0);

LAB44:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 3, t5, 32);
    t7 = (t0 + 4344);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 3);

LAB42:    goto LAB19;

LAB13:    xsi_set_current_line(123, ng0);

LAB45:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3704);
    t5 = (t0 + 3704);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 3864);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t11, t8, 2, t13, 32, 1);
    t14 = (t11 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 3, t5, 32);
    t7 = (t0 + 4344);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 3);
    goto LAB19;

LAB15:    xsi_set_current_line(127, ng0);

LAB48:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3704);
    t5 = (t0 + 3704);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 3864);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t11, t8, 2, t13, 32, 1);
    t14 = (t11 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t0 + 1984U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3864);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t11, 32, t3, t5, 2, t10, 32, 1);
    t12 = ((char*)((ng6)));
    memset(t21, 0, 8);
    t13 = (t11 + 4);
    t14 = (t12 + 4);
    t19 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t19 ^ t22);
    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t14);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t14);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB54;

LAB51:    if (t30 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t21) = 1;

LAB54:    t16 = (t21 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (~(t33));
    t35 = *((unsigned int *)t21);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB19;

LAB17:    xsi_set_current_line(133, ng0);

LAB59:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng11)));
    memset(t11, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB61;

LAB60:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB62;

LAB63:    t13 = (t11 + 4);
    t19 = *((unsigned int *)t13);
    t22 = (~(t19));
    t23 = *((unsigned int *)t11);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB65;

LAB66:
LAB67:    goto LAB19;

LAB21:    xsi_vlogvar_assign_value(t10, t7, 0, *((unsigned int *)t11), 1);
    goto LAB22;

LAB24:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t11), 1);
    goto LAB25;

LAB28:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(107, ng0);

LAB33:    xsi_set_current_line(108, ng0);
    t17 = (t0 + 4344);
    t18 = (t17 + 56U);
    t38 = *((char **)t18);
    t39 = ((char*)((ng6)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 3, t39, 32);
    t41 = (t0 + 4344);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 3);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2184U);
    t7 = *((char **)t5);
    t5 = (t0 + 2144U);
    t8 = (t5 + 72U);
    t10 = *((char **)t8);
    t12 = (t0 + 2144U);
    t13 = (t12 + 48U);
    t14 = *((char **)t13);
    t15 = (t0 + 3864);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t42, 128, t7, t10, t14, 2, 1, t17, 32, 1);
    xsi_vlog_get_part_select_value(t43, 64, t42, 63, 0);
    t18 = (t0 + 2184U);
    t38 = *((char **)t18);
    t18 = (t0 + 2144U);
    t39 = (t18 + 72U);
    t41 = *((char **)t39);
    t45 = (t0 + 2144U);
    t46 = (t45 + 48U);
    t47 = *((char **)t46);
    t48 = (t0 + 3864);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_get_array_select_value(t44, 128, t38, t41, t47, 2, 1, t50, 32, 1);
    t52 = (t0 + 2144U);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng9)));
    t56 = ((char*)((ng10)));
    xsi_vlog_generic_get_part_select_value(t51, 65, t44, t54, 2, t55, 32U, 1, t56, 32U, 1);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)119, t4, 32, (char)118, t43, 64, (char)118, t51, 65);
    goto LAB32;

LAB36:    t13 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB40:    xsi_set_current_line(114, ng0);

LAB43:    xsi_set_current_line(115, ng0);
    t15 = (t0 + 3864);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng6)));
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t17, 32, t18, 32);
    t38 = (t0 + 3864);
    xsi_vlogvar_assign_value(t38, t40, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB42;

LAB46:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t11), 1);
    goto LAB47;

LAB49:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t11), 1);
    goto LAB50;

LAB53:    t15 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(129, ng0);

LAB58:    xsi_set_current_line(130, ng0);
    t17 = (t0 + 4344);
    t18 = (t17 + 56U);
    t38 = *((char **)t18);
    t39 = ((char*)((ng6)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 3, t39, 32);
    t41 = (t0 + 4344);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 3);
    goto LAB57;

LAB61:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t11) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(134, ng0);

LAB68:    xsi_set_current_line(135, ng0);
    t14 = (t0 + 3864);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 2344U);
    t18 = *((char **)t17);
    t17 = (t0 + 2304U);
    t38 = (t17 + 72U);
    t39 = *((char **)t38);
    t41 = (t0 + 2304U);
    t45 = (t41 + 48U);
    t46 = *((char **)t45);
    t47 = (t0 + 3864);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t42, 128, t18, t39, t46, 2, 1, t49, 32, 1);
    xsi_vlog_get_part_select_value(t43, 64, t42, 63, 0);
    t50 = (t0 + 2344U);
    t52 = *((char **)t50);
    t50 = (t0 + 2304U);
    t53 = (t50 + 72U);
    t54 = *((char **)t53);
    t55 = (t0 + 2304U);
    t56 = (t55 + 48U);
    t57 = *((char **)t56);
    t58 = (t0 + 3864);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    xsi_vlog_generic_get_array_select_value(t44, 128, t52, t54, t57, 2, 1, t60, 32, 1);
    t61 = (t0 + 2304U);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng9)));
    t65 = ((char*)((ng10)));
    xsi_vlog_generic_get_part_select_value(t51, 65, t44, t63, 2, t64, 32U, 1, t65, 32U, 1);
    xsi_vlogfile_write(1, 0, 0, ng12, 4, t0, (char)119, t16, 32, (char)118, t43, 64, (char)118, t51, 65);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t4, 32, t5, 32);
    t7 = (t0 + 3864);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 32);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 4344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB67;

}


extern void work_m_04954355518636935207_3555939028_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Initial_36_1,(void *)Initial_62_2,(void *)Always_99_3};
	xsi_register_didat("work_m_04954355518636935207_3555939028", "isim/test_cipher_n_loops_decrypt_isim_beh.exe.sim/work/m_04954355518636935207_3555939028.didat");
	xsi_register_executes(pe);
}
