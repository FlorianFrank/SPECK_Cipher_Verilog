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
static const char *ng0 = "/home/florianfrank/Documents/Research/Projects/PUFMem/Self-Encrypting-Memory/code/SPECK_Cipher_Verilog/test_cipher_n_loops_encrypt.v";
static int ng1[] = {0, 0};
static int ng2[] = {0, 0, 0, 0};
static unsigned int ng3[] = {32U, 0U, 0U, 0U};
static int ng4[] = {1, 0, 0, 0};
static const char *ng5 = "Iteration %d p0: %x p1: %x k0: %x k1: %x\n";
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {0U, 0U};
static const char *ng9 = "Iteration %d p0: %x p1: %x";
static int ng10[] = {128, 0};
static int ng11[] = {64, 0};
static unsigned int ng12[] = {32U, 0U};
static const char *ng13 = "Iteration %d k0: %x k1: %x";



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);

LAB4:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4928);
    xsi_process_wait(t2, 30000000LL);
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

LAB0:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);

LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5176);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2928);
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
    t24 = (t0 + 2928);
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

static void Initial_60_2(char *t0)
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

LAB0:    xsi_set_current_line(60, ng0);

LAB2:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);

LAB3:    t1 = (t0 + 4048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    xsi_vlog_unsigned_less(t5, 64, t3, 64, t4, 64);
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
LAB4:    xsi_set_current_line(61, ng0);

LAB6:    xsi_set_current_line(62, ng0);
    t12 = (t0 + 4048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 3888);
    t18 = (t0 + 3888);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3888);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 4048);
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

LAB8:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t5, 64, t3, 64, t4, 32);
    t6 = (t0 + 4048);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 64);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

}

static void Always_93_3(char *t0)
{
    char t13[8];
    char t21[16];
    char t25[16];
    char t29[16];
    char t33[16];
    char t38[8];
    char t51[8];
    char t52[32];
    char t53[32];
    char t54[24];
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
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
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
    char *t66;
    char *t67;
    char *t68;
    char *t69;

LAB0:    t1 = (t0 + 5864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6184);
    *((int *)t2) = 1;
    t3 = (t0 + 5896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 4208);
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

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(95, ng0);

LAB18:    xsi_set_current_line(96, ng0);
    t7 = (t0 + 3728);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t11, 32, t12, 32);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3568);
    t4 = (t0 + 3568);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 3728);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_generic_convert_bit_index(t13, t7, 2, t11, 32, 1);
    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t9 = (!(t15));
    if (t9 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t7 = (t0 + 4208);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 3);
    goto LAB17;

LAB9:    xsi_set_current_line(101, ng0);

LAB24:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3568);
    t5 = (t0 + 3568);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 3728);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_convert_bit_index(t13, t8, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t37 = (!(t15));
    if (t37 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3728);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t13, 32, t3, t5, 2, t10, 32, 1);
    t11 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t12 = (t13 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t14);
    t39 = (t18 ^ t19);
    t40 = (t17 | t39);
    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t14);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB30;

LAB27:    if (t43 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t38) = 1;

LAB30:    t22 = (t38 + 4);
    t46 = *((unsigned int *)t22);
    t47 = (~(t46));
    t48 = *((unsigned int *)t38);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB17;

LAB11:    xsi_set_current_line(109, ng0);

LAB35:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 3728);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_convert_bit_index(t13, t8, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t37 = (!(t15));
    if (t37 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t7 = (t0 + 4208);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 3);
    goto LAB17;

LAB13:    xsi_set_current_line(113, ng0);

LAB38:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3408);
    t5 = (t0 + 3408);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 3728);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_convert_bit_index(t13, t8, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t37 = (!(t15));
    if (t37 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3728);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t13, 32, t3, t5, 2, t10, 32, 1);
    t11 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t12 = (t13 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t14);
    t39 = (t18 ^ t19);
    t40 = (t17 | t39);
    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t14);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB44;

LAB41:    if (t43 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t38) = 1;

LAB44:    t22 = (t38 + 4);
    t46 = *((unsigned int *)t22);
    t47 = (~(t46));
    t48 = *((unsigned int *)t38);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB17;

LAB15:    xsi_set_current_line(119, ng0);

LAB49:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng12)));
    t8 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t7, 32, t8, 32);
    memset(t38, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB51;

LAB50:    t11 = (t13 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t5) < *((unsigned int *)t13))
        goto LAB52;

LAB53:    t14 = (t38 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t38);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB17;

LAB19:    xsi_set_current_line(97, ng0);
    t20 = ((char*)((ng1)));
    t22 = (t0 + 3088);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_get_part_select_value(t21, 64, t24, 63, 0);
    t26 = (t0 + 3088);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_get_part_select_value(t25, 64, t28, 127, 64);
    t30 = (t0 + 3248);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_get_part_select_value(t29, 64, t32, 63, 0);
    t34 = (t0 + 3248);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_get_part_select_value(t33, 64, t36, 127, 64);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)119, t20, 32, (char)118, t21, 64, (char)118, t25, 64, (char)118, t29, 64, (char)118, t33, 64);
    goto LAB21;

LAB22:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB23;

LAB25:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t13), 1);
    goto LAB26;

LAB29:    t20 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(103, ng0);

LAB34:    xsi_set_current_line(104, ng0);
    t23 = (t0 + 4208);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    t27 = ((char*)((ng7)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t26, 3, t27, 32);
    t28 = (t0 + 4208);
    xsi_vlogvar_assign_value(t28, t51, 0, 0, 3);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2208U);
    t7 = *((char **)t5);
    t5 = (t0 + 2168U);
    t8 = (t5 + 72U);
    t10 = *((char **)t8);
    t11 = (t0 + 2168U);
    t12 = (t11 + 48U);
    t14 = *((char **)t12);
    t20 = (t0 + 3728);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_array_select_value(t52, 128, t7, t10, t14, 2, 1, t23, 32, 1);
    xsi_vlog_get_part_select_value(t21, 64, t52, 63, 0);
    t24 = (t0 + 2208U);
    t26 = *((char **)t24);
    t24 = (t0 + 2168U);
    t27 = (t24 + 72U);
    t28 = *((char **)t27);
    t30 = (t0 + 2168U);
    t31 = (t30 + 48U);
    t32 = *((char **)t31);
    t34 = (t0 + 3728);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t53, 128, t26, t28, t32, 2, 1, t36, 32, 1);
    t55 = (t0 + 2168U);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = ((char*)((ng10)));
    t59 = ((char*)((ng11)));
    xsi_vlog_generic_get_part_select_value(t54, 65, t53, t57, 2, t58, 32U, 1, t59, 32U, 1);
    xsi_vlogfile_write(1, 0, 0, ng9, 4, t0, (char)119, t4, 32, (char)118, t21, 64, (char)118, t54, 65);
    goto LAB33;

LAB36:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t13), 1);
    goto LAB37;

LAB39:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t13), 1);
    goto LAB40;

LAB43:    t20 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(115, ng0);

LAB48:    xsi_set_current_line(116, ng0);
    t23 = (t0 + 4208);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    t27 = ((char*)((ng7)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t26, 3, t27, 32);
    t28 = (t0 + 4208);
    xsi_vlogvar_assign_value(t28, t51, 0, 0, 3);
    goto LAB47;

LAB51:    t12 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t38) = 1;
    goto LAB53;

LAB55:    xsi_set_current_line(120, ng0);

LAB58:    xsi_set_current_line(121, ng0);
    t20 = (t0 + 3728);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2048U);
    t26 = *((char **)t24);
    t24 = (t0 + 2008U);
    t27 = (t24 + 72U);
    t28 = *((char **)t27);
    t30 = (t0 + 2008U);
    t31 = (t30 + 48U);
    t32 = *((char **)t31);
    t34 = (t0 + 3728);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t52, 128, t26, t28, t32, 2, 1, t36, 32, 1);
    xsi_vlog_get_part_select_value(t21, 64, t52, 63, 0);
    t55 = (t0 + 2048U);
    t56 = *((char **)t55);
    t55 = (t0 + 2008U);
    t57 = (t55 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 2008U);
    t60 = (t59 + 48U);
    t61 = *((char **)t60);
    t62 = (t0 + 3728);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_generic_get_array_select_value(t53, 128, t56, t58, t61, 2, 1, t64, 32, 1);
    t65 = (t0 + 2008U);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng10)));
    t69 = ((char*)((ng11)));
    xsi_vlog_generic_get_part_select_value(t54, 65, t53, t67, 2, t68, 32U, 1, t69, 32U, 1);
    xsi_vlogfile_write(1, 0, 0, ng13, 4, t0, (char)119, t23, 32, (char)118, t21, 64, (char)118, t54, 65);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t7 = (t0 + 3728);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB57;

}


extern void work_m_01719023873399124632_0524528035_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Initial_36_1,(void *)Initial_60_2,(void *)Always_93_3};
	xsi_register_didat("work_m_01719023873399124632_0524528035", "isim/test_cipher_n_loops_encrypt_isim_beh.exe.sim/work/m_01719023873399124632_0524528035.didat");
	xsi_register_executes(pe);
}
