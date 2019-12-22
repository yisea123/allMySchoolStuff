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
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000002399568039_2282143210_init();
    unisims_ver_m_00000000000740258969_3897995058_init();
    unisims_ver_m_00000000000740258969_1625843133_init();
    unisims_ver_m_00000000003131622635_0225263307_init();
    unisims_ver_m_00000000002922998384_2845851632_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000001252405660_2290512154_init();
    work_m_00000000002145659050_0607549617_init();
    work_m_00000000002521612219_3834041517_init();
    work_m_00000000002112747865_2381739659_init();
    work_m_00000000000349958838_0883194013_init();
    work_m_00000000000949543746_0273213086_init();
    work_m_00000000001525149922_3141217020_init();
    work_m_00000000000938396896_0254784918_init();
    work_m_00000000002589344328_1366144890_init();
    work_m_00000000002327242315_1678943863_init();
    work_m_00000000001535396564_0753789445_init();
    work_m_00000000002691770471_1900080952_init();
    work_m_00000000000601804733_1957175458_init();
    work_m_00000000000113664193_1411027795_init();
    work_m_00000000000705262929_2118084387_init();
    work_m_00000000001424220008_1395566128_init();
    work_m_00000000001900714038_3508565487_init();
    work_m_00000000003054043738_0451635433_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003054043738_0451635433");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
