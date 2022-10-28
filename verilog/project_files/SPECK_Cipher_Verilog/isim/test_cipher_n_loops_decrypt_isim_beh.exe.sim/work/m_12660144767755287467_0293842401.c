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
static const char *ng2 = "shift_right_reverse";
static const char *ng3 = "shift_left_reverse";
static const char *ng4 = "/home/florianfrank/Documents/Research/Projects/PUFMem/Self-Encrypting-Memory/code/SPECK_Cipher_Verilog/Project_Files/SPECK_Cipher_Verilog/round_decrypt.v";
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static int ng7[] = {64, 0};
static int ng8[] = {3, 0};
static int ng9[] = {8, 0};
static int ng10[] = {63, 0};
static int ng11[] = {127, 0};



static void shift_right_reverse_varinit(char *t0)
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
    xsi_vlogvar_initialize(t8, ng1, 2, 3, 0, 0, t10, 0, 1, 0);
    t11 = (t0 + 96U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = (t0 + 80U);
    t15 = *((char **)t14);
    xsi_vlogvar_initialize(t13, ng2, 2, 63, 0, 0, t15, 0, 1, 0);

LAB1:    return;
}

static void shift_left_reverse_varinit(char *t0)
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
    xsi_vlogvar_initialize(t8, ng1, 2, 3, 0, 0, t10, 0, 1, 0);
    t11 = (t0 + 96U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = (t0 + 80U);
    t15 = *((char **)t14);
    xsi_vlogvar_initialize(t13, ng3, 2, 63, 0, 0, t15, 0, 1, 0);

LAB1:    return;
}

static int sp_inc_counter(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 2208);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(53, ng4);

LAB5:    xsi_set_current_line(54, ng4);
    t5 = (t1 + 5064);
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

LAB12:    xsi_set_current_line(57, ng4);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 5064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);

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

LAB11:    xsi_set_current_line(55, ng4);
    t19 = (t1 + 5064);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng5)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t21, 5, t22, 32);
    t24 = (t1 + 5064);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 5);
    goto LAB13;

}

static int sp_shift_right_reverse(char *t1, char *t2)
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
    xsi_set_current_line(64, ng4);

LAB2:    xsi_set_current_line(65, ng4);
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
    xsi_vlog_unsigned_arith_lshift(t13, 64, t7, 64, t12, 4);
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
    xsi_vlog_unsigned_minus(t25, 32, t19, 32, t24, 4);
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

static int sp_shift_left_reverse(char *t1, char *t2)
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
    xsi_set_current_line(72, ng4);

LAB2:    xsi_set_current_line(73, ng4);
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
    xsi_vlog_unsigned_arith_rshift(t13, 64, t7, 64, t12, 4);
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
    xsi_vlog_unsigned_minus(t25, 32, t19, 32, t24, 4);
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

static void Initial_77_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(77, ng4);

LAB2:    xsi_set_current_line(78, ng4);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 5064);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(79, ng4);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_83_1(char *t0)
{
    char t11[8];
    char t49[16];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng4);
    t2 = (t0 + 7112);
    *((int *)t2) = 1;
    t3 = (t0 + 6576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng4);

LAB5:    xsi_set_current_line(84, ng4);
    t4 = (t0 + 5064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 880);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(85, ng4);

LAB22:    xsi_set_current_line(86, ng4);
    t7 = (t0 + 3864U);
    t10 = *((char **)t7);
    t7 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB26;

LAB23:    if (t23 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t11) = 1;

LAB26:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(88, ng4);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(91, ng4);

LAB36:    xsi_set_current_line(92, ng4);
    t2 = (t0 + 4184U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t49, 64, t4, 63, 0);
    t2 = (t0 + 5224);
    xsi_vlogvar_wait_assign_value(t2, t49, 0, 0, 64, 0LL);
    xsi_set_current_line(93, ng4);
    t2 = (t0 + 4184U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t49, 64, t3, 127, 64);
    t2 = (t0 + 5384);
    xsi_vlogvar_wait_assign_value(t2, t49, 0, 0, 64, 0LL);
    xsi_set_current_line(94, ng4);
    t2 = (t0 + 6352);
    t3 = (t0 + 2208);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB39:    t5 = (t0 + 6448);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t12 = (t10 + 272U);
    t13 = *((char **)t12);
    t26 = (t13 + 0U);
    t27 = *((char **)t26);
    t9 = ((int  (*)(char *, char *))t27)(t0, t7);

LAB41:    if (t9 != 0)
        goto LAB42;

LAB37:    t7 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t7);

LAB38:    t33 = (t0 + 6448);
    t34 = *((char **)t33);
    t33 = (t0 + 2208);
    t35 = (t0 + 6352);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB21;

LAB11:    xsi_set_current_line(97, ng4);

LAB43:    xsi_set_current_line(98, ng4);
    t2 = (t0 + 5224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5384);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t14 = 0;

LAB47:    t15 = (t14 < 2);
    if (t15 == 1)
        goto LAB48;

LAB49:    t35 = (t0 + 5384);
    xsi_vlogvar_wait_assign_value(t35, t49, 0, 0, 64, 0LL);
    xsi_set_current_line(99, ng4);
    t2 = (t0 + 6352);
    t3 = (t0 + 2208);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB52:    t5 = (t0 + 6448);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t12 = (t10 + 272U);
    t13 = *((char **)t12);
    t26 = (t13 + 0U);
    t27 = *((char **)t26);
    t9 = ((int  (*)(char *, char *))t27)(t0, t7);

LAB54:    if (t9 != 0)
        goto LAB55;

LAB50:    t7 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t7);

LAB51:    t33 = (t0 + 6448);
    t34 = *((char **)t33);
    t33 = (t0 + 2208);
    t35 = (t0 + 6352);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB21;

LAB13:    xsi_set_current_line(102, ng4);

LAB56:    xsi_set_current_line(103, ng4);
    t2 = (t0 + 5384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    t8 = (t0 + 6352);
    t10 = (t0 + 3072);
    t12 = xsi_create_subprogram_invocation(t8, 0, t0, t10, 0, 0);
    t13 = (t12 + 96U);
    t26 = *((char **)t13);
    t27 = (t26 + 160U);
    xsi_vlogvar_assign_value(t27, t5, 0, 0, 64);
    t33 = (t12 + 96U);
    t34 = *((char **)t33);
    t35 = (t34 + 320U);
    xsi_vlogvar_assign_value(t35, t7, 0, 0, 4);

LAB57:    t36 = (t0 + 6448);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB59;

LAB58:    t37 = (t0 + 6448);
    t45 = *((char **)t37);
    t37 = (t45 + 96U);
    t46 = *((char **)t37);
    t47 = (t46 + 0U);
    t48 = (t47 + 56U);
    t50 = *((char **)t48);
    memcpy(t49, t50, 16);
    t51 = (t0 + 3072);
    t52 = (t0 + 6352);
    t53 = 0;
    xsi_delete_subprogram_invocation(t51, t45, t0, t52, t53);
    t54 = (t0 + 5384);
    xsi_vlogvar_wait_assign_value(t54, t49, 0, 0, 64, 0LL);
    xsi_set_current_line(104, ng4);
    t2 = (t0 + 5224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4024U);
    t7 = *((char **)t5);
    t14 = 0;

LAB63:    t15 = (t14 < 2);
    if (t15 == 1)
        goto LAB64;

LAB65:    t27 = (t0 + 5224);
    xsi_vlogvar_wait_assign_value(t27, t49, 0, 0, 64, 0LL);
    xsi_set_current_line(105, ng4);
    t2 = (t0 + 6352);
    t3 = (t0 + 2208);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB68:    t5 = (t0 + 6448);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t12 = (t10 + 272U);
    t13 = *((char **)t12);
    t26 = (t13 + 0U);
    t27 = *((char **)t26);
    t9 = ((int  (*)(char *, char *))t27)(t0, t7);

LAB70:    if (t9 != 0)
        goto LAB71;

LAB66:    t7 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t7);

LAB67:    t33 = (t0 + 6448);
    t34 = *((char **)t33);
    t33 = (t0 + 2208);
    t35 = (t0 + 6352);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB21;

LAB15:    xsi_set_current_line(108, ng4);

LAB72:    xsi_set_current_line(109, ng4);
    t2 = (t0 + 5224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5384);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    xsi_vlog_unsigned_minus(t49, 64, t5, 64, t10, 64);
    t12 = (t0 + 5224);
    xsi_vlogvar_wait_assign_value(t12, t49, 0, 0, 64, 0LL);
    xsi_set_current_line(110, ng4);
    t2 = (t0 + 6352);
    t3 = (t0 + 2208);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB75:    t5 = (t0 + 6448);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t12 = (t10 + 272U);
    t13 = *((char **)t12);
    t26 = (t13 + 0U);
    t27 = *((char **)t26);
    t9 = ((int  (*)(char *, char *))t27)(t0, t7);

LAB77:    if (t9 != 0)
        goto LAB78;

LAB73:    t7 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t7);

LAB74:    t33 = (t0 + 6448);
    t34 = *((char **)t33);
    t33 = (t0 + 2208);
    t35 = (t0 + 6352);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB21;

LAB17:    xsi_set_current_line(112, ng4);

LAB79:    xsi_set_current_line(113, ng4);
    t2 = (t0 + 5224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 6352);
    t10 = (t0 + 2640);
    t12 = xsi_create_subprogram_invocation(t8, 0, t0, t10, 0, 0);
    t13 = (t12 + 96U);
    t26 = *((char **)t13);
    t27 = (t26 + 160U);
    xsi_vlogvar_assign_value(t27, t5, 0, 0, 64);
    t33 = (t12 + 96U);
    t34 = *((char **)t33);
    t35 = (t34 + 320U);
    xsi_vlogvar_assign_value(t35, t7, 0, 0, 4);

LAB80:    t36 = (t0 + 6448);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB82;

LAB81:    t37 = (t0 + 6448);
    t45 = *((char **)t37);
    t37 = (t45 + 96U);
    t46 = *((char **)t37);
    t47 = (t46 + 0U);
    t48 = (t47 + 56U);
    t50 = *((char **)t48);
    memcpy(t49, t50, 16);
    t51 = (t0 + 2640);
    t52 = (t0 + 6352);
    t53 = 0;
    xsi_delete_subprogram_invocation(t51, t45, t0, t52, t53);
    t54 = (t0 + 5224);
    xsi_vlogvar_wait_assign_value(t54, t49, 0, 0, 64, 0LL);
    xsi_set_current_line(114, ng4);
    t2 = (t0 + 6352);
    t3 = (t0 + 2208);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB85:    t5 = (t0 + 6448);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t12 = (t10 + 272U);
    t13 = *((char **)t12);
    t26 = (t13 + 0U);
    t27 = *((char **)t26);
    t9 = ((int  (*)(char *, char *))t27)(t0, t7);

LAB87:    if (t9 != 0)
        goto LAB88;

LAB83:    t7 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t7);

LAB84:    t33 = (t0 + 6448);
    t34 = *((char **)t33);
    t33 = (t0 + 2208);
    t35 = (t0 + 6352);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB21;

LAB19:    xsi_set_current_line(116, ng4);

LAB89:    xsi_set_current_line(117, ng4);
    t2 = (t0 + 5224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 4744);
    t8 = (t0 + 4744);
    t10 = (t8 + 72U);
    t12 = *((char **)t10);
    t13 = ((char*)((ng10)));
    t26 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t11, t55, t56, ((int*)(t12)), 2, t13, 32, 1, t26, 32, 1);
    t27 = (t11 + 4);
    t14 = *((unsigned int *)t27);
    t44 = (!(t14));
    t33 = (t55 + 4);
    t15 = *((unsigned int *)t33);
    t57 = (!(t15));
    t58 = (t44 && t57);
    t34 = (t56 + 4);
    t16 = *((unsigned int *)t34);
    t59 = (!(t16));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB90;

LAB91:    xsi_set_current_line(118, ng4);
    t2 = (t0 + 5384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4744);
    t7 = (t0 + 4744);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t12 = ((char*)((ng11)));
    t13 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t11, t55, t56, ((int*)(t10)), 2, t12, 32, 1, t13, 32, 1);
    t26 = (t11 + 4);
    t14 = *((unsigned int *)t26);
    t9 = (!(t14));
    t27 = (t55 + 4);
    t15 = *((unsigned int *)t27);
    t44 = (!(t15));
    t57 = (t9 && t44);
    t33 = (t56 + 4);
    t16 = *((unsigned int *)t33);
    t58 = (!(t16));
    t59 = (t57 && t58);
    if (t59 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(119, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng4);
    t2 = (t0 + 6352);
    t3 = (t0 + 2208);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB96:    t5 = (t0 + 6448);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t10 = *((char **)t8);
    t12 = (t10 + 272U);
    t13 = *((char **)t12);
    t26 = (t13 + 0U);
    t27 = *((char **)t26);
    t9 = ((int  (*)(char *, char *))t27)(t0, t7);

LAB98:    if (t9 != 0)
        goto LAB99;

LAB94:    t7 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t7);

LAB95:    t33 = (t0 + 6448);
    t34 = *((char **)t33);
    t33 = (t0 + 2208);
    t35 = (t0 + 6352);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB21;

LAB25:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(87, ng4);
    t33 = (t0 + 6352);
    t34 = (t0 + 2208);
    t35 = xsi_create_subprogram_invocation(t33, 0, t0, t34, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t34, t35);

LAB32:    t36 = (t0 + 6448);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);

LAB34:    if (t44 != 0)
        goto LAB35;

LAB30:    t37 = (t0 + 2208);
    xsi_vlog_subprogram_popinvocation(t37);

LAB31:    t45 = (t0 + 6448);
    t46 = *((char **)t45);
    t45 = (t0 + 2208);
    t47 = (t0 + 6352);
    t48 = 0;
    xsi_delete_subprogram_invocation(t45, t46, t0, t47, t48);
    goto LAB29;

LAB33:;
LAB35:    t36 = (t0 + 6544U);
    *((char **)t36) = &&LAB32;
    goto LAB1;

LAB40:;
LAB42:    t5 = (t0 + 6544U);
    *((char **)t5) = &&LAB39;
    goto LAB1;

LAB44:    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t34);
    *((unsigned int *)t26) = (t31 | t32);

LAB46:    t14 = (t14 + 1);
    goto LAB47;

LAB45:    goto LAB46;

LAB48:    t16 = (t14 * 8);
    t12 = (t5 + t16);
    t13 = (t10 + t16);
    t26 = (t49 + t16);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    *((unsigned int *)t26) = t19;
    t20 = (t14 * 8);
    t21 = (t20 + 4);
    t27 = (t5 + t21);
    t22 = (t20 + 4);
    t33 = (t10 + t22);
    t23 = (t20 + 4);
    t34 = (t49 + t23);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t33);
    t28 = (t24 | t25);
    *((unsigned int *)t34) = t28;
    t29 = *((unsigned int *)t34);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB44;
    else
        goto LAB45;

LAB53:;
LAB55:    t5 = (t0 + 6544U);
    *((char **)t5) = &&LAB52;
    goto LAB1;

LAB59:    t36 = (t0 + 6544U);
    *((char **)t36) = &&LAB57;
    goto LAB1;

LAB60:    t31 = *((unsigned int *)t10);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t31 | t32);

LAB62:    t14 = (t14 + 1);
    goto LAB63;

LAB61:    goto LAB62;

LAB64:    t16 = (t14 * 8);
    t5 = (t4 + t16);
    t8 = (t7 + t16);
    t10 = (t49 + t16);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    *((unsigned int *)t10) = t19;
    t20 = (t14 * 8);
    t21 = (t20 + 4);
    t12 = (t4 + t21);
    t22 = (t20 + 4);
    t13 = (t7 + t22);
    t23 = (t20 + 4);
    t26 = (t49 + t23);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t28 = (t24 | t25);
    *((unsigned int *)t26) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB60;
    else
        goto LAB61;

LAB69:;
LAB71:    t5 = (t0 + 6544U);
    *((char **)t5) = &&LAB68;
    goto LAB1;

LAB76:;
LAB78:    t5 = (t0 + 6544U);
    *((char **)t5) = &&LAB75;
    goto LAB1;

LAB82:    t36 = (t0 + 6544U);
    *((char **)t36) = &&LAB80;
    goto LAB1;

LAB86:;
LAB88:    t5 = (t0 + 6544U);
    *((char **)t5) = &&LAB85;
    goto LAB1;

LAB90:    t17 = *((unsigned int *)t56);
    t61 = (t17 + 0);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t55);
    t62 = (t18 - t19);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t7, t5, t61, *((unsigned int *)t55), t63, 0LL);
    goto LAB91;

LAB92:    t17 = *((unsigned int *)t56);
    t60 = (t17 + 0);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t55);
    t61 = (t18 - t19);
    t62 = (t61 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t60, *((unsigned int *)t55), t62, 0LL);
    goto LAB93;

LAB97:;
LAB99:    t5 = (t0 + 6544U);
    *((char **)t5) = &&LAB96;
    goto LAB1;

}

static void Cont_127_2(char *t0)
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

LAB0:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng4);
    t2 = (t0 + 5064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7208);
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
    t18 = (t0 + 7128);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_12660144767755287467_0293842401_init()
{
	static char *pe[] = {(void *)Initial_77_0,(void *)Always_83_1,(void *)Cont_127_2};
	static char *se[] = {(void *)sp_inc_counter,(void *)sp_shift_right_reverse,(void *)sp_shift_left_reverse};
	xsi_register_didat("work_m_12660144767755287467_0293842401", "isim/test_cipher_n_loops_decrypt_isim_beh.exe.sim/work/m_12660144767755287467_0293842401.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_subprogram_init(2, (void *)shift_right_reverse_varinit);
	xsi_register_subprogram_init(3, (void *)shift_left_reverse_varinit);
}
