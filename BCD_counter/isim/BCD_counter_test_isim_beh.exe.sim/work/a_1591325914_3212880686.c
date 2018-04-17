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
static const char *ng0 = "E:/Code/FPGA/BCD_counter/BCD_counter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_1591325914_3212880686_p_0(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1472U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4040);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 6352);
    t6 = (t0 + 4136);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6316U);
    t5 = (t0 + 6368);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6316U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t6 = (t12 + 12U);
    t14 = *((unsigned int *)t6);
    t21 = (1U * t14);
    t3 = (4U != t21);
    if (t3 == 1)
        goto LAB24;

LAB25:    t7 = (t0 + 4136);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    memcpy(t16, t5, 4U);
    xsi_driver_first_trans_fast(t7);

LAB22:
LAB14:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t2 = (t0 + 6284U);
    t7 = (t0 + 6356);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t14;
    t15 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t6, t2, t7, t12);
    if (t15 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 4200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(26, ng0);
    t10 = (t0 + 1192U);
    t16 = *((char **)t10);
    t10 = (t0 + 4136);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB11;

LAB13:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 6316U);
    t6 = (t0 + 6360);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t6, t12);
    if (t11 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6316U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t6 = (t12 + 12U);
    t14 = *((unsigned int *)t6);
    t21 = (1U * t14);
    t3 = (4U != t21);
    if (t3 == 1)
        goto LAB19;

LAB20:    t7 = (t0 + 4136);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    memcpy(t16, t5, 4U);
    xsi_driver_first_trans_fast(t7);

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(33, ng0);
    t9 = (t0 + 6364);
    t16 = (t0 + 4136);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 4U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 4264);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB19:    xsi_size_not_matching(4U, t21, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(40, ng0);
    t8 = (t0 + 6372);
    t10 = (t0 + 4136);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 4264);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB22;

LAB24:    xsi_size_not_matching(4U, t21, 0);
    goto LAB25;

}

static void work_a_1591325914_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(50, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4328);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4056);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1591325914_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1591325914_3212880686_p_0,(void *)work_a_1591325914_3212880686_p_1};
	xsi_register_didat("work_a_1591325914_3212880686", "isim/BCD_counter_test_isim_beh.exe.sim/work/a_1591325914_3212880686.didat");
	xsi_register_executes(pe);
}
