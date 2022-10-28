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
static const char *ng0 = "in";
static const char *ng1 = "shiftwidth";
static const char *ng2 = "shift_right";
static const char *ng3 = "shift_left";
static const char *ng4 = "/home/florianfrank/Documents/Research/Projects/PUFMem/Self-Encrypting-Memory/code/SPECK_Cipher_Verilog/key_schedule.v";
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static int ng7[] = {64, 0};
static int ng8[] = {8, 0};
static int ng9[] = {3, 0};
static int ng10[] = {63, 0};
static int ng11[] = {127, 0};



static void shift_right_varinit(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 96U);
    t2 = *((char **)t1);
    t3 = (t2 + 160U);
    t4 = (t0 + 80U);
    t5 = *((char **)t4);
    xsi_vlogvar_initialize(t3, ng0, 2, 63, 0, 0, t5, 0, 1, 0);
    t6 = (t0 + 96U);
    t7 = *((char **)t6);
    t8 = (t7 + 320U);
    t9 = (t0 + 80U);
    t10 = *((char **)t9);
    xsi_vlogvar_initialize(t8, ng1, 2, 4, 0, 0, t10, 0, 1, 0);
    t11 = (t0 + 96U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = (t0 + 80U);
    t15 = *((char **)t14);
    xsi_vlogvar_initialize(t13, ng2, 2, 63, 0, 0, t15, 0, 1, 0);

LAB1:    return;
}

static void shift_left_varinit(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 96U);
    t2 = *((char **)t1);
    t3 = (t2 + 160U);
    t4 = (t0 + 80U);
    t5 = *((char **)t4);
    xsi_vlogvar_initialize(t3, ng0, 2, 63, 0, 0, t5, 0, 1, 0);
    t6 = (t0 + 96U);
    t7 = *((char **)t6);
    t8 = (t7 + 320U);
    t9 = (t0 + 80U);
    t10 = *((char **)t9);
    xsi_vlogvar_initialize(t8, ng1, 2, 4, 0, 0, t10, 0, 1, 0);
    t11 = (t0 + 96U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = (t0 + 80U);
    t15 = *((char **)t14);
    xsi_vlogvar_initialize(t13, ng3, 2, 63, 0, 0, t15, 0, 1, 0);

LAB1:    return;
}

static int sp_inc_state(char *t1, char *t2)
{
    char t10[8];
    char t23[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2480);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(57, ng4);

LAB5:    xsi_set_current_line(58, ng4);
    t5 = (t1 + 5336);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 744);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB6:    t11 = (t9 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t7) < *((unsigned int *)t9))
        goto LAB8;

LAB9:    t13 = (t10 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t10);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(61, ng4);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 5336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB13:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(59, ng4);
    t19 = (t1 + 5336);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng5)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t21, 4, t22, 32);
    t24 = (t1 + 5336);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 4, 0LL);
    goto LAB13;

}

static int sp_shift_right(char *t1, char *t2)
{
    char t13[16];
    char t25[8];
    char t26[16];
    char t27[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;

LAB0:    t0 = 1;
    xsi_set_current_line(68, ng4);

LAB2:    xsi_set_current_line(69, ng4);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 160U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 96U);
    t9 = *((char **)t8);
    t10 = (t9 + 320U);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_unsigned_arith_rshift(t13, 64, t7, 64, t12, 5);
    t14 = (t2 + 96U);
    t15 = *((char **)t14);
    t16 = (t15 + 160U);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng7)));
    t20 = (t2 + 96U);
    t21 = *((char **)t20);
    t22 = (t21 + 320U);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t19, 32, t24, 5);
    xsi_vlog_unsigned_arith_lshift(t26, 64, t18, 64, t25, 32);
    t28 = 0;

LAB6:    t29 = (t28 < 2);
    if (t29 == 1)
        goto LAB7;

LAB8:    t70 = (t2 + 96U);
    t71 = *((char **)t70);
    t72 = (t71 + 0U);
    xsi_vlogvar_assign_value(t72, t27, 0, 0, 64);
    t0 = 0;

LAB1:    return t0;
LAB3:    t49 = (t28 * 8);
    t50 = *((unsigned int *)t33);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t33) = (t50 | t51);
    t52 = (t13 + t49);
    t53 = (t49 + 4);
    t54 = (t13 + t53);
    t55 = (t26 + t49);
    t56 = (t49 + 4);
    t57 = (t26 + t56);
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t52);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t55);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t67);

LAB5:    t28 = (t28 + 1);
    goto LAB6;

LAB4:    goto LAB5;

LAB7:    t30 = (t28 * 8);
    t31 = (t13 + t30);
    t32 = (t26 + t30);
    t33 = (t27 + t30);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t28 * 8);
    t38 = (t37 + 4);
    t39 = (t13 + t38);
    t40 = (t37 + 4);
    t41 = (t26 + t40);
    t42 = (t37 + 4);
    t43 = (t27 + t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t41);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB3;
    else
        goto LAB4;

}

static int sp_shift_left(char *t1, char *t2)
{
    char t13[16];
    char t25[8];
    char t26[16];
    char t27[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;

LAB0:    t0 = 1;
    xsi_set_current_line(76, ng4);

LAB2:    xsi_set_current_line(77, ng4);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 160U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 96U);
    t9 = *((char **)t8);
    t10 = (t9 + 320U);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_unsigned_arith_lshift(t13, 64, t7, 64, t12, 5);
    t14 = (t2 + 96U);
    t15 = *((char **)t14);
    t16 = (t15 + 160U);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng7)));
    t20 = (t2 + 96U);
    t21 = *((char **)t20);
    t22 = (t21 + 320U);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t19, 32, t24, 5);
    xsi_vlog_unsigned_arith_rshift(t26, 64, t18, 64, t25, 32);
    t28 = 0;

LAB6:    t29 = (t28 < 2);
    if (t29 == 1)
        goto LAB7;

LAB8:    t70 = (t2 + 96U);
    t71 = *((char **)t70);
    t72 = (t71 + 0U);
    xsi_vlogvar_assign_value(t72, t27, 0, 0, 64);
    t0 = 0;

LAB1:    return t0;
LAB3:    t49 = (t28 * 8);
    t50 = *((unsigned int *)t33);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t33) = (t50 | t51);
    t52 = (t13 + t49);
    t53 = (t49 + 4);
    t54 = (t13 + t53);
    t55 = (t26 + t49);
    t56 = (t49 + 4);
    t57 = (t26 + t56);
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t52);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t55);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t67);

LAB5:    t28 = (t28 + 1);
    goto LAB6;

LAB4:    goto LAB5;

LAB7:    t30 = (t28 * 8);
    t31 = (t13 + t30);
    t32 = (t26 + t30);
    t33 = (t27 + t30);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t28 * 8);
    t38 = (t37 + 4);
    t39 = (t13 + t38);
    t40 = (t37 + 4);
    t41 = (t26 + t40);
    t42 = (t37 + 4);
    t43 = (t27 + t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t41);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB3;
    else
        goto LAB4;

}

static void Initial_51_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(51, ng4);

LAB2:    xsi_set_current_line(52, ng4);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng4);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 5016);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_82_1(char *t0)
{
    char t32[16];
    char t54[8];
    char t55[8];
    char t56[8];
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;

LAB0:    t1 = (t0 + 6816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng4);
    t2 = (t0 + 7384);
    *((int *)t2) = 1;
    t3 = (t0 + 6848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng4);

LAB5:    xsi_set_current_line(83, ng4);
    t4 = (t0 + 5336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 880);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(85, ng4);

LAB22:    xsi_set_current_line(86, ng4);
    t7 = (t0 + 4136U);
    t10 = *((char **)t7);
    t7 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(88, ng4);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(91, ng4);

LAB32:    xsi_set_current_line(92, ng4);
    t2 = (t0 + 4296U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t32, 64, t4, 63, 0);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t32, 0, 0, 64, 0LL);
    xsi_set_current_line(93, ng4);
    t2 = (t0 + 4296U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t32, 64, t3, 127, 64);
    t2 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t2, t32, 0, 0, 64, 0LL);
    xsi_set_current_line(94, ng4);
    t2 = (t0 + 6624);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB35:    t5 = (t0 + 6720);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t16 = (t10 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t9 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB37:    if (t9 != 0)
        goto LAB38;

LAB33:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB34:    t20 = (t0 + 6720);
    t21 = *((char **)t20);
    t20 = (t0 + 2480);
    t22 = (t0 + 6624);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB21;

LAB11:    xsi_set_current_line(97, ng4);

LAB39:    xsi_set_current_line(98, ng4);
    t2 = (t0 + 5496);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    t8 = (t0 + 6624);
    t10 = (t0 + 2912);
    t16 = xsi_create_subprogram_invocation(t8, 0, t0, t10, 0, 0);
    t17 = (t16 + 96U);
    t18 = *((char **)t17);
    t19 = (t18 + 160U);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 64);
    t20 = (t16 + 96U);
    t21 = *((char **)t20);
    t22 = (t21 + 320U);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 5);

LAB40:    t23 = (t0 + 6720);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t28 = (t26 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t27 = ((int  (*)(char *, char *))t31)(t0, t24);
    if (t27 != 0)
        goto LAB42;

LAB41:    t24 = (t0 + 6720);
    t33 = *((char **)t24);
    t24 = (t33 + 96U);
    t34 = *((char **)t24);
    t35 = (t34 + 0U);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t32, t37, 16);
    t38 = (t0 + 2912);
    t39 = (t0 + 6624);
    t40 = 0;
    xsi_delete_subprogram_invocation(t38, t33, t0, t39, t40);
    t41 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t41, t32, 0, 0, 64, 0LL);
    xsi_set_current_line(99, ng4);
    t2 = (t0 + 6624);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB45:    t5 = (t0 + 6720);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t16 = (t10 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t9 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB47:    if (t9 != 0)
        goto LAB48;

LAB43:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB44:    t20 = (t0 + 6720);
    t21 = *((char **)t20);
    t20 = (t0 + 2480);
    t22 = (t0 + 6624);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB21;

LAB13:    xsi_set_current_line(102, ng4);

LAB49:    xsi_set_current_line(103, ng4);
    t2 = (t0 + 5496);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5656);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    xsi_vlog_unsigned_add(t32, 64, t5, 64, t10, 64);
    t16 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t16, t32, 0, 0, 64, 0LL);
    xsi_set_current_line(104, ng4);
    t2 = (t0 + 6624);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB52:    t5 = (t0 + 6720);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t16 = (t10 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t9 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB54:    if (t9 != 0)
        goto LAB55;

LAB50:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB51:    t20 = (t0 + 6720);
    t21 = *((char **)t20);
    t20 = (t0 + 2480);
    t22 = (t0 + 6624);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB21;

LAB15:    xsi_set_current_line(107, ng4);

LAB56:    xsi_set_current_line(108, ng4);
    t2 = (t0 + 5656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 6624);
    t10 = (t0 + 3344);
    t16 = xsi_create_subprogram_invocation(t8, 0, t0, t10, 0, 0);
    t17 = (t16 + 96U);
    t18 = *((char **)t17);
    t19 = (t18 + 160U);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 64);
    t20 = (t16 + 96U);
    t21 = *((char **)t20);
    t22 = (t21 + 320U);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 5);

LAB57:    t23 = (t0 + 6720);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t28 = (t26 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t27 = ((int  (*)(char *, char *))t31)(t0, t24);
    if (t27 != 0)
        goto LAB59;

LAB58:    t24 = (t0 + 6720);
    t33 = *((char **)t24);
    t24 = (t33 + 96U);
    t34 = *((char **)t24);
    t35 = (t34 + 0U);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t32, t37, 16);
    t38 = (t0 + 3344);
    t39 = (t0 + 6624);
    t40 = 0;
    xsi_delete_subprogram_invocation(t38, t33, t0, t39, t40);
    t41 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t41, t32, 0, 0, 64, 0LL);
    xsi_set_current_line(109, ng4);
    t2 = (t0 + 5496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4456U);
    t7 = *((char **)t5);
    t11 = 0;

LAB63:    t12 = (t11 < 2);
    if (t12 == 1)
        goto LAB64;

LAB65:    t19 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t19, t32, 0, 0, 64, 0LL);
    xsi_set_current_line(110, ng4);
    t2 = (t0 + 6624);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB68:    t5 = (t0 + 6720);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t16 = (t10 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t9 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB70:    if (t9 != 0)
        goto LAB71;

LAB66:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB67:    t20 = (t0 + 6720);
    t21 = *((char **)t20);
    t20 = (t0 + 2480);
    t22 = (t0 + 6624);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB21;

LAB17:    xsi_set_current_line(113, ng4);

LAB72:    xsi_set_current_line(114, ng4);
    t2 = (t0 + 5496);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5656);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = 0;

LAB76:    t12 = (t11 < 2);
    if (t12 == 1)
        goto LAB77;

LAB78:    t22 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t22, t32, 0, 0, 64, 0LL);
    xsi_set_current_line(115, ng4);
    t2 = (t0 + 6624);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB81:    t5 = (t0 + 6720);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t16 = (t10 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t9 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB83:    if (t9 != 0)
        goto LAB84;

LAB79:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB80:    t20 = (t0 + 6720);
    t21 = *((char **)t20);
    t20 = (t0 + 2480);
    t22 = (t0 + 6624);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB21;

LAB19:    xsi_set_current_line(118, ng4);

LAB85:    xsi_set_current_line(119, ng4);
    t2 = (t0 + 5496);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5176);
    t8 = (t0 + 5176);
    t10 = (t8 + 72U);
    t16 = *((char **)t10);
    t17 = ((char*)((ng10)));
    t18 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t54, t55, t56, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t54 + 4);
    t11 = *((unsigned int *)t19);
    t27 = (!(t11));
    t20 = (t55 + 4);
    t12 = *((unsigned int *)t20);
    t57 = (!(t12));
    t58 = (t27 && t57);
    t21 = (t56 + 4);
    t13 = *((unsigned int *)t21);
    t59 = (!(t13));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(120, ng4);
    t2 = (t0 + 5656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5176);
    t7 = (t0 + 5176);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t16 = ((char*)((ng11)));
    t17 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t54, t55, t56, ((int*)(t10)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t54 + 4);
    t11 = *((unsigned int *)t18);
    t9 = (!(t11));
    t19 = (t55 + 4);
    t12 = *((unsigned int *)t19);
    t27 = (!(t12));
    t57 = (t9 && t27);
    t20 = (t56 + 4);
    t13 = *((unsigned int *)t20);
    t58 = (!(t13));
    t59 = (t57 && t58);
    if (t59 == 1)
        goto LAB88;

LAB89:    xsi_set_current_line(121, ng4);
    t2 = (t0 + 6624);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB92:    t5 = (t0 + 6720);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t16 = (t10 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t9 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB94:    if (t9 != 0)
        goto LAB95;

LAB90:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB91:    t20 = (t0 + 6720);
    t21 = *((char **)t20);
    t20 = (t0 + 2480);
    t22 = (t0 + 6624);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(122, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(87, ng4);
    t16 = (t0 + 6624);
    t17 = (t0 + 2480);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t17, t18);

LAB28:    t19 = (t0 + 6720);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB30:    if (t27 != 0)
        goto LAB31;

LAB26:    t20 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t20);

LAB27:    t28 = (t0 + 6720);
    t29 = *((char **)t28);
    t28 = (t0 + 2480);
    t30 = (t0 + 6624);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    goto LAB25;

LAB29:;
LAB31:    t19 = (t0 + 6816U);
    *((char **)t19) = &&LAB28;
    goto LAB1;

LAB36:;
LAB38:    t5 = (t0 + 6816U);
    *((char **)t5) = &&LAB35;
    goto LAB1;

LAB42:    t23 = (t0 + 6816U);
    *((char **)t23) = &&LAB40;
    goto LAB1;

LAB46:;
LAB48:    t5 = (t0 + 6816U);
    *((char **)t5) = &&LAB45;
    goto LAB1;

LAB53:;
LAB55:    t5 = (t0 + 6816U);
    *((char **)t5) = &&LAB52;
    goto LAB1;

LAB59:    t23 = (t0 + 6816U);
    *((char **)t23) = &&LAB57;
    goto LAB1;

LAB60:    t52 = *((unsigned int *)t10);
    t53 = *((unsigned int *)t18);
    *((unsigned int *)t10) = (t52 | t53);

LAB62:    t11 = (t11 + 1);
    goto LAB63;

LAB61:    goto LAB62;

LAB64:    t13 = (t11 * 8);
    t5 = (t4 + t13);
    t8 = (t7 + t13);
    t10 = (t32 + t13);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t8);
    t42 = (t14 ^ t15);
    *((unsigned int *)t10) = t42;
    t43 = (t11 * 8);
    t44 = (t43 + 4);
    t16 = (t4 + t44);
    t45 = (t43 + 4);
    t17 = (t7 + t45);
    t46 = (t43 + 4);
    t18 = (t32 + t46);
    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t17);
    t49 = (t47 | t48);
    *((unsigned int *)t18) = t49;
    t50 = *((unsigned int *)t18);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB60;
    else
        goto LAB61;

LAB69:;
LAB71:    t5 = (t0 + 6816U);
    *((char **)t5) = &&LAB68;
    goto LAB1;

LAB73:    t52 = *((unsigned int *)t18);
    t53 = *((unsigned int *)t21);
    *((unsigned int *)t18) = (t52 | t53);

LAB75:    t11 = (t11 + 1);
    goto LAB76;

LAB74:    goto LAB75;

LAB77:    t13 = (t11 * 8);
    t16 = (t5 + t13);
    t17 = (t10 + t13);
    t18 = (t32 + t13);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t42 = (t14 ^ t15);
    *((unsigned int *)t18) = t42;
    t43 = (t11 * 8);
    t44 = (t43 + 4);
    t19 = (t5 + t44);
    t45 = (t43 + 4);
    t20 = (t10 + t45);
    t46 = (t43 + 4);
    t21 = (t32 + t46);
    t47 = *((unsigned int *)t19);
    t48 = *((unsigned int *)t20);
    t49 = (t47 | t48);
    *((unsigned int *)t21) = t49;
    t50 = *((unsigned int *)t21);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB73;
    else
        goto LAB74;

LAB82:;
LAB84:    t5 = (t0 + 6816U);
    *((char **)t5) = &&LAB81;
    goto LAB1;

LAB86:    t14 = *((unsigned int *)t56);
    t61 = (t14 + 0);
    t15 = *((unsigned int *)t54);
    t42 = *((unsigned int *)t55);
    t62 = (t15 - t42);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t7, t5, t61, *((unsigned int *)t55), t63, 0LL);
    goto LAB87;

LAB88:    t14 = *((unsigned int *)t56);
    t60 = (t14 + 0);
    t15 = *((unsigned int *)t54);
    t42 = *((unsigned int *)t55);
    t61 = (t15 - t42);
    t62 = (t61 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t60, *((unsigned int *)t55), t62, 0LL);
    goto LAB89;

LAB93:;
LAB95:    t5 = (t0 + 6816U);
    *((char **)t5) = &&LAB92;
    goto LAB1;

}

static void Cont_129_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng4);
    t2 = (t0 + 5336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 7400);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00625050856640441334_1891315730_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Always_82_1,(void *)Cont_129_2};
	static char *se[] = {(void *)sp_inc_state,(void *)sp_shift_right,(void *)sp_shift_left};
	xsi_register_didat("work_m_00625050856640441334_1891315730", "isim/test_cipher_n_loops_decrypt_isim_beh.exe.sim/work/m_00625050856640441334_1891315730.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_subprogram_init(2, (void *)shift_right_varinit);
	xsi_register_subprogram_init(3, (void *)shift_left_varinit);
}
