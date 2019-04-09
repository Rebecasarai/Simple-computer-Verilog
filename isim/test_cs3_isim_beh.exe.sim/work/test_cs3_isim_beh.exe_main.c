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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_12784948013178364145_0269593826_init();
    work_m_07406605604176604656_0200823156_init();
    work_m_13975887522968436769_1727642186_init();
    work_m_15198159882773703201_0863224316_init();
    work_m_12448877733352501952_1585823042_init();
    work_m_16201411282670061729_3609888277_init();
    work_m_04691124782112601699_2926799732_init();
    work_m_02962778439254170666_2345302474_init();
    work_m_15327031091980864314_2982156474_init();
    work_m_18327623034060606657_3269915854_init();
    work_m_09211369277663014983_2841356495_init();
    work_m_13025737593654081261_3251414706_init();
    work_m_12329563295304651865_0142422087_init();
    work_m_11420871520220256586_3249078099_init();
    work_m_11491833963429943931_2073120511_init();


    xsi_register_tops("work_m_11420871520220256586_3249078099");
    xsi_register_tops("work_m_11491833963429943931_2073120511");


    return xsi_run_simulation(argc, argv);

}
