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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Code/FPGA/Divider/divider_test.vhd";



static void work_a_2263738536_2372691052_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(35, ng0);

LAB3:    t1 = (30 * 1000LL);
    t2 = (t0 + 3144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t7 = (100 * 1000LL);
    t8 = (t0 + 3144);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = 3;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    t13 = (t0 + 3144);
    xsi_driver_intertial_reject(t13, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2263738536_2372691052_p_1(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int64 t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int64 t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int64 t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int64 t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int64 t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    int64 t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int64 t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int64 t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int64 t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    int64 t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    int64 t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    int64 t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;

LAB0:    xsi_set_current_line(36, ng0);

LAB3:    t1 = (10 * 1000LL);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t7 = (20 * 1000LL);
    t8 = (t0 + 3208);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    t13 = (30 * 1000LL);
    t14 = (t0 + 3208);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    t19 = (40 * 1000LL);
    t20 = (t0 + 3208);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t20, 0U, 1, t19);
    t25 = (50 * 1000LL);
    t26 = (t0 + 3208);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t26, 0U, 1, t25);
    t31 = (60 * 1000LL);
    t32 = (t0 + 3208);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t32, 0U, 1, t31);
    t37 = (70 * 1000LL);
    t38 = (t0 + 3208);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((unsigned char *)t42) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t38, 0U, 1, t37);
    t43 = (80 * 1000LL);
    t44 = (t0 + 3208);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    *((unsigned char *)t48) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t44, 0U, 1, t43);
    t49 = (90 * 1000LL);
    t50 = (t0 + 3208);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    *((unsigned char *)t54) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t50, 0U, 1, t49);
    t55 = (100 * 1000LL);
    t56 = (t0 + 3208);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t56, 0U, 1, t55);
    t61 = (110 * 1000LL);
    t62 = (t0 + 3208);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    *((unsigned char *)t66) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t62, 0U, 1, t61);
    t67 = (120 * 1000LL);
    t68 = (t0 + 3208);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    *((unsigned char *)t72) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t68, 0U, 1, t67);
    t73 = (130 * 1000LL);
    t74 = (t0 + 3208);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    *((unsigned char *)t78) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t74, 0U, 1, t73);
    t79 = (140 * 1000LL);
    t80 = (t0 + 3208);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    *((unsigned char *)t84) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t80, 0U, 1, t79);
    t85 = (t0 + 3208);
    xsi_driver_intertial_reject(t85, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2263738536_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2263738536_2372691052_p_0,(void *)work_a_2263738536_2372691052_p_1};
	xsi_register_didat("work_a_2263738536_2372691052", "isim/divider_test_isim_beh.exe.sim/work/a_2263738536_2372691052.didat");
	xsi_register_executes(pe);
}
