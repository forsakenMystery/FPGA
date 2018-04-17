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
static const char *ng0 = "E:/Code/FPGA/BCD_counter/BCD_counter_test.vhd";



static void work_a_1546205842_2372691052_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (100 * 1000LL);
    t2 = (t0 + 7226);
    t4 = (t0 + 4688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, t1);
    t9 = (200 * 1000LL);
    t10 = (t0 + 7230);
    t12 = (t0 + 4688);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 4U);
    xsi_driver_subsequent_trans_delta(t12, 0U, 4U, t9);
    t17 = (t0 + 4688);
    xsi_driver_intertial_reject(t17, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1546205842_2372691052_p_1(char *t0)
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
    char *t25;

LAB0:    xsi_set_current_line(84, ng0);

LAB3:    t1 = (100 * 1000LL);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t7 = (115 * 1000LL);
    t8 = (t0 + 4752);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    t13 = (200 * 1000LL);
    t14 = (t0 + 4752);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    t19 = (215 * 1000LL);
    t20 = (t0 + 4752);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t20, 0U, 1, t19);
    t25 = (t0 + 4752);
    xsi_driver_intertial_reject(t25, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1546205842_2372691052_p_2(char *t0)
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

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (115 * 1000LL);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t7 = (130 * 1000LL);
    t8 = (t0 + 4816);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    t13 = (t0 + 4816);
    xsi_driver_intertial_reject(t13, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1546205842_2372691052_p_3(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (120 * 1000LL);
    t2 = (t0 + 4880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t7 = (t0 + 4880);
    xsi_driver_intertial_reject(t7, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1546205842_2372691052_p_4(char *t0)
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
    int64 t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    int64 t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    int64 t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    int64 t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    int64 t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    int64 t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    int64 t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    int64 t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    int64 t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    int64 t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    int64 t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    int64 t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    int64 t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t1 = (10 * 1000LL);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t7 = (20 * 1000LL);
    t8 = (t0 + 4944);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    t13 = (30 * 1000LL);
    t14 = (t0 + 4944);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    t19 = (40 * 1000LL);
    t20 = (t0 + 4944);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t20, 0U, 1, t19);
    t25 = (50 * 1000LL);
    t26 = (t0 + 4944);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t26, 0U, 1, t25);
    t31 = (60 * 1000LL);
    t32 = (t0 + 4944);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t32, 0U, 1, t31);
    t37 = (70 * 1000LL);
    t38 = (t0 + 4944);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((unsigned char *)t42) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t38, 0U, 1, t37);
    t43 = (80 * 1000LL);
    t44 = (t0 + 4944);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    *((unsigned char *)t48) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t44, 0U, 1, t43);
    t49 = (90 * 1000LL);
    t50 = (t0 + 4944);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    *((unsigned char *)t54) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t50, 0U, 1, t49);
    t55 = (100 * 1000LL);
    t56 = (t0 + 4944);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t56, 0U, 1, t55);
    t61 = (110 * 1000LL);
    t62 = (t0 + 4944);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    *((unsigned char *)t66) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t62, 0U, 1, t61);
    t67 = (120 * 1000LL);
    t68 = (t0 + 4944);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    *((unsigned char *)t72) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t68, 0U, 1, t67);
    t73 = (130 * 1000LL);
    t74 = (t0 + 4944);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    *((unsigned char *)t78) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t74, 0U, 1, t73);
    t79 = (140 * 1000LL);
    t80 = (t0 + 4944);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    *((unsigned char *)t84) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t80, 0U, 1, t79);
    t85 = (150 * 1000LL);
    t86 = (t0 + 4944);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    *((unsigned char *)t90) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t86, 0U, 1, t85);
    t91 = (160 * 1000LL);
    t92 = (t0 + 4944);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    *((unsigned char *)t96) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t92, 0U, 1, t91);
    t97 = (170 * 1000LL);
    t98 = (t0 + 4944);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    *((unsigned char *)t102) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t98, 0U, 1, t97);
    t103 = (180 * 1000LL);
    t104 = (t0 + 4944);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    *((unsigned char *)t108) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t104, 0U, 1, t103);
    t109 = (190 * 1000LL);
    t110 = (t0 + 4944);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    *((unsigned char *)t114) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t110, 0U, 1, t109);
    t115 = (200 * 1000LL);
    t116 = (t0 + 4944);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    *((unsigned char *)t120) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t116, 0U, 1, t115);
    t121 = (210 * 1000LL);
    t122 = (t0 + 4944);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    *((unsigned char *)t126) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t122, 0U, 1, t121);
    t127 = (220 * 1000LL);
    t128 = (t0 + 4944);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    *((unsigned char *)t132) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t128, 0U, 1, t127);
    t133 = (230 * 1000LL);
    t134 = (t0 + 4944);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    *((unsigned char *)t138) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t134, 0U, 1, t133);
    t139 = (240 * 1000LL);
    t140 = (t0 + 4944);
    t141 = (t140 + 56U);
    t142 = *((char **)t141);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    *((unsigned char *)t144) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t140, 0U, 1, t139);
    t145 = (250 * 1000LL);
    t146 = (t0 + 4944);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    *((unsigned char *)t150) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t146, 0U, 1, t145);
    t151 = (260 * 1000LL);
    t152 = (t0 + 4944);
    t153 = (t152 + 56U);
    t154 = *((char **)t153);
    t155 = (t154 + 56U);
    t156 = *((char **)t155);
    *((unsigned char *)t156) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t152, 0U, 1, t151);
    t157 = (270 * 1000LL);
    t158 = (t0 + 4944);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    *((unsigned char *)t162) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t158, 0U, 1, t157);
    t163 = (t0 + 4944);
    xsi_driver_intertial_reject(t163, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1546205842_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1546205842_2372691052_p_0,(void *)work_a_1546205842_2372691052_p_1,(void *)work_a_1546205842_2372691052_p_2,(void *)work_a_1546205842_2372691052_p_3,(void *)work_a_1546205842_2372691052_p_4};
	xsi_register_didat("work_a_1546205842_2372691052", "isim/BCD_counter_test_isim_beh.exe.sim/work/a_1546205842_2372691052.didat");
	xsi_register_executes(pe);
}
