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

/* This file is designed for use with ISim build 0x9ca8bed6 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/alberto/Documentos/Dropbox/EDC/Aula/tema3/Ejercicios/TrabajoCasa/2016-2017/ComputadorSimple3/UnidadControl.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {31U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {23U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {26U, 0U};
static unsigned int ng11[] = {15U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {9U, 0U};
static unsigned int ng16[] = {4U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {6U, 0U};
static unsigned int ng19[] = {11U, 0U};
static int ng20[] = {2, 0};
static int ng21[] = {3, 0};
static unsigned int ng22[] = {27U, 0U};
static unsigned int ng23[] = {13U, 0U};
static unsigned int ng24[] = {14U, 0U};



static void Always_69_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 11168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 11736);
    *((int *)t2) = 1;
    t3 = (t0 + 11200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 5856U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 10256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(71, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 10096);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    goto LAB7;

}

static void Always_75_1(char *t0)
{
    char t33[8];
    char t40[8];
    char t42[8];
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
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
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
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;

LAB0:    t1 = (t0 + 11416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 11752);
    *((int *)t2) = 1;
    t3 = (t0 + 11448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 9296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    t6 = (t0 + 9776);
    xsi_vlogvar_assign_value(t6, t4, 1, 0, 1);
    t7 = (t0 + 9616);
    xsi_vlogvar_assign_value(t7, t4, 2, 0, 1);
    t8 = (t0 + 9456);
    xsi_vlogvar_assign_value(t8, t4, 3, 0, 1);
    t9 = (t0 + 9936);
    xsi_vlogvar_assign_value(t9, t4, 4, 0, 1);
    t10 = (t0 + 8816);
    xsi_vlogvar_assign_value(t10, t4, 5, 0, 1);
    t11 = (t0 + 8656);
    xsi_vlogvar_assign_value(t11, t4, 6, 0, 1);
    t12 = (t0 + 8496);
    xsi_vlogvar_assign_value(t12, t4, 7, 0, 1);
    t13 = (t0 + 8336);
    xsi_vlogvar_assign_value(t13, t4, 8, 0, 1);
    t14 = (t0 + 7856);
    xsi_vlogvar_assign_value(t14, t4, 9, 0, 1);
    t15 = (t0 + 8176);
    xsi_vlogvar_assign_value(t15, t4, 10, 0, 1);
    t16 = (t0 + 8016);
    xsi_vlogvar_assign_value(t16, t4, 11, 0, 1);
    t17 = (t0 + 7376);
    xsi_vlogvar_assign_value(t17, t4, 12, 0, 1);
    t18 = (t0 + 6736);
    xsi_vlogvar_assign_value(t18, t4, 13, 0, 1);
    t19 = (t0 + 6896);
    xsi_vlogvar_assign_value(t19, t4, 14, 0, 1);
    t20 = (t0 + 7536);
    xsi_vlogvar_assign_value(t20, t4, 15, 0, 1);
    t21 = (t0 + 7696);
    xsi_vlogvar_assign_value(t21, t4, 16, 0, 1);
    t22 = (t0 + 8976);
    xsi_vlogvar_assign_value(t22, t4, 17, 0, 1);
    t23 = (t0 + 9136);
    xsi_vlogvar_assign_value(t23, t4, 18, 0, 1);
    t24 = (t0 + 7216);
    xsi_vlogvar_assign_value(t24, t4, 19, 0, 1);
    t25 = (t0 + 7056);
    xsi_vlogvar_assign_value(t25, t4, 20, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 10096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t26 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng17)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng23)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng24)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng19)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng18)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng7)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng15)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng9)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(333, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);

LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(81, ng0);
    t6 = (t0 + 5696U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB43;

LAB9:    xsi_set_current_line(88, ng0);

LAB48:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 7376);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB43;

LAB11:    xsi_set_current_line(95, ng0);

LAB49:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 6016U);
    t5 = *((char **)t3);

LAB50:    t3 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 5);
    if (t32 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng7)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng9)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng10)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng11)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng12)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng1)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng16)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng13)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng18)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng14)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng19)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng22)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t26 == 1)
        goto LAB81;

LAB82:
LAB84:
LAB83:    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);

LAB85:    goto LAB43;

LAB13:    xsi_set_current_line(240, ng0);

LAB130:    xsi_set_current_line(241, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8976);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 6896);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 9456);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB15:    xsi_set_current_line(247, ng0);

LAB131:    xsi_set_current_line(248, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 7536);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 9776);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng23)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB17:    xsi_set_current_line(253, ng0);

LAB132:    xsi_set_current_line(254, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 6736);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 9136);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng24)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB19:    xsi_set_current_line(259, ng0);

LAB133:    xsi_set_current_line(260, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8016);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(261, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8976);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB21:    xsi_set_current_line(265, ng0);

LAB134:    xsi_set_current_line(266, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8976);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8016);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB23:    xsi_set_current_line(273, ng0);

LAB135:    xsi_set_current_line(274, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 7856);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8016);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB25:    xsi_set_current_line(281, ng0);

LAB136:    xsi_set_current_line(282, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 7536);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8016);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng16)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB27:    xsi_set_current_line(287, ng0);

LAB137:    xsi_set_current_line(288, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 7856);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 6896);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB29:    xsi_set_current_line(293, ng0);

LAB138:    xsi_set_current_line(294, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8016);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 7536);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8656);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng18)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB31:    xsi_set_current_line(301, ng0);

LAB139:    xsi_set_current_line(302, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8016);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 6736);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB33:    xsi_set_current_line(307, ng0);

LAB140:    xsi_set_current_line(308, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 7536);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8016);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB35:    xsi_set_current_line(313, ng0);

LAB141:    xsi_set_current_line(314, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 7856);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 6896);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB37:    xsi_set_current_line(319, ng0);

LAB142:    xsi_set_current_line(320, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 7536);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8016);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8656);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng9)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB39:    xsi_set_current_line(327, ng0);

LAB143:    xsi_set_current_line(328, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8016);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(329, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 6736);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB43;

LAB44:    xsi_set_current_line(82, ng0);

LAB47:    xsi_set_current_line(83, ng0);
    t8 = ((char*)((ng3)));
    t9 = (t0 + 7056);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9936);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB46;

LAB51:    xsi_set_current_line(98, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 10256);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB85;

LAB53:    xsi_set_current_line(100, ng0);

LAB86:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB55:    xsi_set_current_line(107, ng0);

LAB87:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB57:    xsi_set_current_line(114, ng0);

LAB88:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB59:    xsi_set_current_line(122, ng0);

LAB89:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8656);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB61:    xsi_set_current_line(129, ng0);

LAB90:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB63:    xsi_set_current_line(136, ng0);

LAB91:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB65:    xsi_set_current_line(144, ng0);

LAB92:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB67:    xsi_set_current_line(152, ng0);

LAB93:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB69:    xsi_set_current_line(158, ng0);

LAB94:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB71:    xsi_set_current_line(164, ng0);

LAB95:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 8176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB73:    xsi_set_current_line(172, ng0);

LAB96:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 7536);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 10256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB85;

LAB75:    xsi_set_current_line(178, ng0);

LAB97:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 5);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6336U);
    t3 = *((char **)t2);

LAB98:    t2 = ((char*)((ng2)));
    t26 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t26 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t26 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng20)));
    t26 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t26 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng21)));
    t26 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t26 == 1)
        goto LAB105;

LAB106:
LAB107:    goto LAB85;

LAB77:    xsi_set_current_line(216, ng0);

LAB127:    xsi_set_current_line(217, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8176);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 7696);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng19)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB85;

LAB79:    xsi_set_current_line(223, ng0);

LAB128:    xsi_set_current_line(224, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 9296);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB85;

LAB81:    xsi_set_current_line(229, ng0);

LAB129:    xsi_set_current_line(230, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 8496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 9296);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 7696);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB85;

LAB99:    xsi_set_current_line(182, ng0);
    t6 = (t0 + 6176U);
    t7 = *((char **)t6);
    memset(t33, 0, 8);
    t6 = (t33 + 4);
    t8 = (t7 + 4);
    t27 = *((unsigned int *)t7);
    t28 = (t27 >> 1);
    t29 = (t28 & 1);
    *((unsigned int *)t33) = t29;
    t30 = *((unsigned int *)t8);
    t31 = (t30 >> 1);
    t34 = (t31 & 1);
    *((unsigned int *)t6) = t34;
    t9 = (t33 + 4);
    t35 = *((unsigned int *)t9);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB108;

LAB109:
LAB110:    goto LAB107;

LAB101:    xsi_set_current_line(190, ng0);
    t6 = (t0 + 6176U);
    t7 = *((char **)t6);
    memset(t33, 0, 8);
    t6 = (t33 + 4);
    t8 = (t7 + 4);
    t27 = *((unsigned int *)t7);
    t28 = (t27 >> 3);
    t29 = (t28 & 1);
    *((unsigned int *)t33) = t29;
    t30 = *((unsigned int *)t8);
    t31 = (t30 >> 3);
    t34 = (t31 & 1);
    *((unsigned int *)t6) = t34;
    t9 = (t33 + 4);
    t35 = *((unsigned int *)t9);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB112;

LAB113:
LAB114:    goto LAB107;

LAB103:    xsi_set_current_line(198, ng0);
    t6 = (t0 + 6176U);
    t7 = *((char **)t6);
    memset(t33, 0, 8);
    t6 = (t33 + 4);
    t8 = (t7 + 4);
    t27 = *((unsigned int *)t7);
    t28 = (t27 >> 0);
    t29 = (t28 & 1);
    *((unsigned int *)t33) = t29;
    t30 = *((unsigned int *)t8);
    t31 = (t30 >> 0);
    t34 = (t31 & 1);
    *((unsigned int *)t6) = t34;
    t9 = (t33 + 4);
    t35 = *((unsigned int *)t9);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB116;

LAB117:
LAB118:    goto LAB107;

LAB105:    xsi_set_current_line(206, ng0);
    t6 = (t0 + 6176U);
    t7 = *((char **)t6);
    memset(t33, 0, 8);
    t6 = (t33 + 4);
    t8 = (t7 + 4);
    t27 = *((unsigned int *)t7);
    t28 = (t27 >> 0);
    t29 = (t28 & 1);
    *((unsigned int *)t33) = t29;
    t30 = *((unsigned int *)t8);
    t31 = (t30 >> 0);
    t34 = (t31 & 1);
    *((unsigned int *)t6) = t34;
    t9 = (t0 + 6176U);
    t10 = *((char **)t9);
    memset(t40, 0, 8);
    t9 = (t40 + 4);
    t11 = (t10 + 4);
    t35 = *((unsigned int *)t10);
    t36 = (t35 >> 2);
    t37 = (t36 & 1);
    *((unsigned int *)t40) = t37;
    t38 = *((unsigned int *)t11);
    t39 = (t38 >> 2);
    t41 = (t39 & 1);
    *((unsigned int *)t9) = t41;
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t40);
    t45 = (t43 ^ t44);
    *((unsigned int *)t42) = t45;
    t12 = (t33 + 4);
    t13 = (t40 + 4);
    t14 = (t42 + 4);
    t46 = *((unsigned int *)t12);
    t47 = *((unsigned int *)t13);
    t48 = (t46 | t47);
    *((unsigned int *)t14) = t48;
    t49 = *((unsigned int *)t14);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB120;

LAB121:
LAB122:    t15 = (t42 + 4);
    t53 = *((unsigned int *)t15);
    t54 = (~(t53));
    t55 = *((unsigned int *)t42);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB123;

LAB124:
LAB125:    goto LAB107;

LAB108:    xsi_set_current_line(183, ng0);

LAB111:    xsi_set_current_line(184, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t0 + 8176);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 7696);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng19)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB110;

LAB112:    xsi_set_current_line(191, ng0);

LAB115:    xsi_set_current_line(192, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t0 + 8176);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 7696);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng19)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB114;

LAB116:    xsi_set_current_line(199, ng0);

LAB119:    xsi_set_current_line(200, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t0 + 8176);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 7696);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng19)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB118;

LAB120:    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t14);
    *((unsigned int *)t42) = (t51 | t52);
    goto LAB122;

LAB123:    xsi_set_current_line(207, ng0);

LAB126:    xsi_set_current_line(208, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 8176);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 8816);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 7696);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng19)));
    t6 = (t0 + 10256);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 5);
    goto LAB125;

}


extern void work_m_13025737593654081261_3251414706_init()
{
	static char *pe[] = {(void *)Always_69_0,(void *)Always_75_1};
	xsi_register_didat("work_m_13025737593654081261_3251414706", "isim/test_cs3_isim_beh.exe.sim/work/m_13025737593654081261_3251414706.didat");
	xsi_register_executes(pe);
}
