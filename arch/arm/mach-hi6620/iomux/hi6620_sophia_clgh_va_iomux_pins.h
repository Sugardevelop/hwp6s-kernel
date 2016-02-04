/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
 
  This is an AUTO GENERATED file ! DON'T MODIFY MANUAL! 
  文 件 名   : hi6620_sophia_clgh_va_iomux_pins.h
  生成日期   : 2015年11月11日
  
******************************************************************************/


#ifndef __HI6620_SOPHIA_CLGH_VA_IOMUX_PINS_H__
#define __HI6620_SOPHIA_CLGH_VA_IOMUX_PINS_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#include <mach/platform.h>
#include <mach/io.h>
#include <linux/mux.h>
#include "iomux.h"

/*board id can not be used precompile*/
#define V110_VERSION

extern struct iomux_ops iomux_pin_ops;

#define IOMUX_IOMG(_iomg, _iomg_name, _iomg_reg, _func_array)\
static struct iomux_iomg _iomg = {\
    .name = _iomg_name,\
    .iomg_reg = (void __iomem    *)(IO_ADDRESS(REG_BASE_IOC_OFF) + _iomg_reg),\
    .regValue = _func_array,\
};

#define IOMUX_IOCG(_iocg, _iocg_name, _iocg_reg, _iocg_pud_mask, _iocg_drvstrength_mask)    \
static struct iomux_iocg _iocg = {\
    .name = _iocg_name,\
    .iocg_reg = (void __iomem    *)(IO_ADDRESS(REG_BASE_IOC_OFF) + _iocg_reg),\
    .iocg_pullupdown_mask = _iocg_pud_mask,\
    .iocg_drivestrength_mask = _iocg_drvstrength_mask,\
};

#define IOMUX_PIN(_iomux_pin, _iomux_pin_name, _pin_func, _pin_pull_updown, \
_pin_drive_strength, _pin_iomg, _pin_iocg)    \
static struct  iomux_pin _iomux_pin = {\
    .pin_name = _iomux_pin_name,\
    .pin_func  = _pin_func,\
    .pin_pull_updown = _pin_pull_updown,\
    .pin_drive_strength = _pin_drive_strength,\
    .ops  =  &iomux_pin_ops,\
    .pin_iomg = _pin_iomg,\
    .pin_iocg  = _pin_iocg,\
    .init = 0, \
};

#define PIN_TABLE(_pinname, _iomux_pin)    \
{\
    .pinname = _pinname,\
    .iomux_pin = _iomux_pin,\
}

/*define the iomg*/
static int iomg000_func_array_sophia_clgh_va[] = {0, 1, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg001_func_array_sophia_clgh_va[] = {0, 1, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg002_func_array_sophia_clgh_va[] = {0, 1, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg003_func_array_sophia_clgh_va[] = {0, 1, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg004_func_array_sophia_clgh_va[] = {0, 1, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg005_func_array_sophia_clgh_va[] = {0, 1, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg006_func_array_sophia_clgh_va[] = {0, 1, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg007_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg008_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg009_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg010_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg011_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg012_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg013_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg014_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg015_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg016_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg017_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg018_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg019_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg020_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg021_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg022_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg023_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg024_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg025_func_array_sophia_clgh_va[] = {0, RESERVE, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg026_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg027_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg028_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg029_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg030_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg031_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg032_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg033_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg034_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg035_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg036_func_array_sophia_clgh_va[] = {0, RESERVE, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg037_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg038_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg039_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg040_func_array_sophia_clgh_va[] = {0, 1, 2, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg041_func_array_sophia_clgh_va[] = {0, 1, 2, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg042_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg043_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg044_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg045_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg046_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg047_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg048_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg049_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg050_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg051_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg052_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg053_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg054_func_array_sophia_clgh_va[] = {0, 1, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg055_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg056_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg057_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, RESERVE, RESERVE,  };
static int iomg058_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, RESERVE, RESERVE,  };
static int iomg059_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg060_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg061_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg062_func_array_sophia_clgh_va[] = {0, RESERVE, 2, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg063_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg064_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg065_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg066_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg067_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg068_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg069_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg070_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg071_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg072_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg073_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg074_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg075_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg076_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg077_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg078_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg079_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg080_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg081_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg082_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg083_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg084_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg085_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg086_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg087_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg088_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg089_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, RESERVE,  };
static int iomg090_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg091_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg092_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg093_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg094_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg095_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg096_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg097_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg098_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg099_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, RESERVE, RESERVE, RESERVE,  };
static int iomg100_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg101_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg102_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg103_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg104_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, RESERVE, 7,  };
static int iomg105_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, RESERVE, 7,  };
static int iomg106_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, RESERVE, 7,  };
static int iomg107_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, RESERVE, 7,  };
static int iomg108_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, 7,  };
static int iomg109_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, 7,  };
static int iomg110_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, 7,  };
static int iomg111_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg112_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg113_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, RESERVE, 7,  };
static int iomg114_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, RESERVE, 7,  };
static int iomg115_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, 7,  };
static int iomg116_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, 7,  };
static int iomg117_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, 7,  };
static int iomg118_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, 7,  };
static int iomg119_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg120_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg121_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg122_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg123_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg124_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg125_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, 7,  };
static int iomg126_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg127_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg128_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg129_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg130_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg131_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg132_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg133_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg134_func_array_sophia_clgh_va[] = {0, 1, 2, 3, 4, 5, 6, 7,  };
static int iomg135_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, 7,  };
static int iomg136_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg137_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg138_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg139_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg140_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg141_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg142_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg143_func_array_sophia_clgh_va[] = {0, RESERVE, RESERVE, 3, 4, RESERVE, RESERVE, RESERVE,  };
static int iomg144_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg145_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg146_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg147_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg148_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg149_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg150_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg151_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg152_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg153_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg154_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg155_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg156_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg157_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, 4, 5, 6, RESERVE,  };
static int iomg158_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg159_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg160_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg161_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg162_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg163_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg164_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg165_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg166_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg167_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg168_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg169_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg170_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg171_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg172_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg173_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg174_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg175_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg176_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg177_func_array_sophia_clgh_va[] = {0, 1, RESERVE, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg178_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg179_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg180_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg181_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg182_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg183_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg184_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg185_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg186_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg187_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };
static int iomg188_func_array_sophia_clgh_va[] = {0, 1, 2, 3, RESERVE, 5, 6, RESERVE,  };


IOMUX_IOMG(iomg000_sophia_clgh_va, "iomg000", 0x000, iomg000_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg001_sophia_clgh_va, "iomg001", 0x004, iomg001_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg002_sophia_clgh_va, "iomg002", 0x008, iomg002_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg003_sophia_clgh_va, "iomg003", 0x00C, iomg003_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg004_sophia_clgh_va, "iomg004", 0x010, iomg004_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg005_sophia_clgh_va, "iomg005", 0x014, iomg005_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg006_sophia_clgh_va, "iomg006", 0x018, iomg006_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg007_sophia_clgh_va, "iomg007", 0x2F0, iomg007_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg008_sophia_clgh_va, "iomg008", 0x01C, iomg008_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg009_sophia_clgh_va, "iomg009", 0x020, iomg009_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg010_sophia_clgh_va, "iomg010", 0x024, iomg010_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg011_sophia_clgh_va, "iomg011", 0x028, iomg011_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg012_sophia_clgh_va, "iomg012", 0x02C, iomg012_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg013_sophia_clgh_va, "iomg013", 0x030, iomg013_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg014_sophia_clgh_va, "iomg014", 0x034, iomg014_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg015_sophia_clgh_va, "iomg015", 0x038, iomg015_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg016_sophia_clgh_va, "iomg016", 0x03C, iomg016_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg017_sophia_clgh_va, "iomg017", 0x040, iomg017_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg018_sophia_clgh_va, "iomg018", 0x044, iomg018_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg019_sophia_clgh_va, "iomg019", 0x048, iomg019_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg020_sophia_clgh_va, "iomg020", 0x04C, iomg020_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg021_sophia_clgh_va, "iomg021", 0x050, iomg021_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg022_sophia_clgh_va, "iomg022", 0x054, iomg022_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg023_sophia_clgh_va, "iomg023", 0x058, iomg023_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg024_sophia_clgh_va, "iomg024", 0x05C, iomg024_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg025_sophia_clgh_va, "iomg025", 0x060, iomg025_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg026_sophia_clgh_va, "iomg026", 0x064, iomg026_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg027_sophia_clgh_va, "iomg027", 0x068, iomg027_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg028_sophia_clgh_va, "iomg028", 0x06C, iomg028_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg029_sophia_clgh_va, "iomg029", 0x070, iomg029_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg030_sophia_clgh_va, "iomg030", 0x074, iomg030_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg031_sophia_clgh_va, "iomg031", 0x078, iomg031_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg032_sophia_clgh_va, "iomg032", 0x07C, iomg032_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg033_sophia_clgh_va, "iomg033", 0x080, iomg033_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg034_sophia_clgh_va, "iomg034", 0x084, iomg034_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg035_sophia_clgh_va, "iomg035", 0x088, iomg035_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg036_sophia_clgh_va, "iomg036", 0x08C, iomg036_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg037_sophia_clgh_va, "iomg037", 0x090, iomg037_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg038_sophia_clgh_va, "iomg038", 0x094, iomg038_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg039_sophia_clgh_va, "iomg039", 0x098, iomg039_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg040_sophia_clgh_va, "iomg040", 0x09C, iomg040_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg041_sophia_clgh_va, "iomg041", 0x0A0, iomg041_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg042_sophia_clgh_va, "iomg042", 0x0A4, iomg042_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg043_sophia_clgh_va, "iomg043", 0x0A8, iomg043_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg044_sophia_clgh_va, "iomg044", 0x0AC, iomg044_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg045_sophia_clgh_va, "iomg045", 0x0B0, iomg045_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg046_sophia_clgh_va, "iomg046", 0x0B4, iomg046_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg047_sophia_clgh_va, "iomg047", 0x0B8, iomg047_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg048_sophia_clgh_va, "iomg048", 0x0BC, iomg048_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg049_sophia_clgh_va, "iomg049", 0x0C0, iomg049_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg050_sophia_clgh_va, "iomg050", 0x0C4, iomg050_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg051_sophia_clgh_va, "iomg051", 0x0C8, iomg051_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg052_sophia_clgh_va, "iomg052", 0x0CC, iomg052_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg053_sophia_clgh_va, "iomg053", 0x0D0, iomg053_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg054_sophia_clgh_va, "iomg054", 0x0D4, iomg054_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg055_sophia_clgh_va, "iomg055", 0x0D8, iomg055_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg056_sophia_clgh_va, "iomg056", 0x0DC, iomg056_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg057_sophia_clgh_va, "iomg057", 0x0E0, iomg057_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg058_sophia_clgh_va, "iomg058", 0x0E4, iomg058_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg059_sophia_clgh_va, "iomg059", 0x0E8, iomg059_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg060_sophia_clgh_va, "iomg060", 0x0EC, iomg060_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg061_sophia_clgh_va, "iomg061", 0x0F0, iomg061_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg062_sophia_clgh_va, "iomg062", 0x0F4, iomg062_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg063_sophia_clgh_va, "iomg063", 0x0F8, iomg063_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg064_sophia_clgh_va, "iomg064", 0x0FC, iomg064_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg065_sophia_clgh_va, "iomg065", 0x100, iomg065_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg066_sophia_clgh_va, "iomg066", 0x104, iomg066_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg067_sophia_clgh_va, "iomg067", 0x108, iomg067_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg068_sophia_clgh_va, "iomg068", 0x10C, iomg068_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg069_sophia_clgh_va, "iomg069", 0x110, iomg069_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg070_sophia_clgh_va, "iomg070", 0x114, iomg070_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg071_sophia_clgh_va, "iomg071", 0x118, iomg071_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg072_sophia_clgh_va, "iomg072", 0x11C, iomg072_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg073_sophia_clgh_va, "iomg073", 0x120, iomg073_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg074_sophia_clgh_va, "iomg074", 0x124, iomg074_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg075_sophia_clgh_va, "iomg075", 0x128, iomg075_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg076_sophia_clgh_va, "iomg076", 0x12C, iomg076_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg077_sophia_clgh_va, "iomg077", 0x130, iomg077_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg078_sophia_clgh_va, "iomg078", 0x134, iomg078_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg079_sophia_clgh_va, "iomg079", 0x138, iomg079_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg080_sophia_clgh_va, "iomg080", 0x13C, iomg080_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg081_sophia_clgh_va, "iomg081", 0x140, iomg081_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg082_sophia_clgh_va, "iomg082", 0x144, iomg082_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg083_sophia_clgh_va, "iomg083", 0x148, iomg083_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg084_sophia_clgh_va, "iomg084", 0x14C, iomg084_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg085_sophia_clgh_va, "iomg085", 0x150, iomg085_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg086_sophia_clgh_va, "iomg086", 0x154, iomg086_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg087_sophia_clgh_va, "iomg087", 0x158, iomg087_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg088_sophia_clgh_va, "iomg088", 0x15C, iomg088_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg089_sophia_clgh_va, "iomg089", 0x2EC, iomg089_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg090_sophia_clgh_va, "iomg090", 0x160, iomg090_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg091_sophia_clgh_va, "iomg091", 0x164, iomg091_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg092_sophia_clgh_va, "iomg092", 0x168, iomg092_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg093_sophia_clgh_va, "iomg093", 0x16C, iomg093_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg094_sophia_clgh_va, "iomg094", 0x170, iomg094_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg095_sophia_clgh_va, "iomg095", 0x174, iomg095_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg096_sophia_clgh_va, "iomg096", 0x2E8, iomg096_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg097_sophia_clgh_va, "iomg097", 0x178, iomg097_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg098_sophia_clgh_va, "iomg098", 0x17C, iomg098_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg099_sophia_clgh_va, "iomg099", 0x180, iomg099_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg100_sophia_clgh_va, "iomg100", 0x184, iomg100_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg101_sophia_clgh_va, "iomg101", 0x188, iomg101_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg102_sophia_clgh_va, "iomg102", 0x18C, iomg102_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg103_sophia_clgh_va, "iomg103", 0x190, iomg103_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg104_sophia_clgh_va, "iomg104", 0x194, iomg104_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg105_sophia_clgh_va, "iomg105", 0x198, iomg105_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg106_sophia_clgh_va, "iomg106", 0x19C, iomg106_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg107_sophia_clgh_va, "iomg107", 0x1A0, iomg107_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg108_sophia_clgh_va, "iomg108", 0x1A4, iomg108_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg109_sophia_clgh_va, "iomg109", 0x1A8, iomg109_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg110_sophia_clgh_va, "iomg110", 0x1AC, iomg110_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg111_sophia_clgh_va, "iomg111", 0x1B0, iomg111_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg112_sophia_clgh_va, "iomg112", 0x1B4, iomg112_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg113_sophia_clgh_va, "iomg113", 0x1B8, iomg113_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg114_sophia_clgh_va, "iomg114", 0x1BC, iomg114_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg115_sophia_clgh_va, "iomg115", 0x1C0, iomg115_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg116_sophia_clgh_va, "iomg116", 0x1C4, iomg116_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg117_sophia_clgh_va, "iomg117", 0x1C8, iomg117_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg118_sophia_clgh_va, "iomg118", 0x1CC, iomg118_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg119_sophia_clgh_va, "iomg119", 0x1D0, iomg119_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg120_sophia_clgh_va, "iomg120", 0x1D4, iomg120_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg121_sophia_clgh_va, "iomg121", 0x1D8, iomg121_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg122_sophia_clgh_va, "iomg122", 0x1DC, iomg122_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg123_sophia_clgh_va, "iomg123", 0x1E0, iomg123_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg124_sophia_clgh_va, "iomg124", 0x1E4, iomg124_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg125_sophia_clgh_va, "iomg125", 0x1E8, iomg125_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg126_sophia_clgh_va, "iomg126", 0x1EC, iomg126_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg127_sophia_clgh_va, "iomg127", 0x1F0, iomg127_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg128_sophia_clgh_va, "iomg128", 0x1F4, iomg128_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg129_sophia_clgh_va, "iomg129", 0x1F8, iomg129_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg130_sophia_clgh_va, "iomg130", 0x1FC, iomg130_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg131_sophia_clgh_va, "iomg131", 0x200, iomg131_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg132_sophia_clgh_va, "iomg132", 0x204, iomg132_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg133_sophia_clgh_va, "iomg133", 0x208, iomg133_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg134_sophia_clgh_va, "iomg134", 0x20C, iomg134_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg135_sophia_clgh_va, "iomg135", 0x210, iomg135_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg136_sophia_clgh_va, "iomg136", 0x214, iomg136_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg137_sophia_clgh_va, "iomg137", 0x218, iomg137_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg138_sophia_clgh_va, "iomg138", 0x21C, iomg138_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg139_sophia_clgh_va, "iomg139", 0x220, iomg139_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg140_sophia_clgh_va, "iomg140", 0x224, iomg140_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg141_sophia_clgh_va, "iomg141", 0x228, iomg141_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg142_sophia_clgh_va, "iomg142", 0x22C, iomg142_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg143_sophia_clgh_va, "iomg143", 0x230, iomg143_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg144_sophia_clgh_va, "iomg144", 0x234, iomg144_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg145_sophia_clgh_va, "iomg145", 0x238, iomg145_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg146_sophia_clgh_va, "iomg146", 0x23C, iomg146_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg147_sophia_clgh_va, "iomg147", 0x240, iomg147_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg148_sophia_clgh_va, "iomg148", 0x244, iomg148_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg149_sophia_clgh_va, "iomg149", 0x248, iomg149_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg150_sophia_clgh_va, "iomg150", 0x24C, iomg150_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg151_sophia_clgh_va, "iomg151", 0x250, iomg151_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg152_sophia_clgh_va, "iomg152", 0x254, iomg152_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg153_sophia_clgh_va, "iomg153", 0x258, iomg153_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg154_sophia_clgh_va, "iomg154", 0x25C, iomg154_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg155_sophia_clgh_va, "iomg155", 0x260, iomg155_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg156_sophia_clgh_va, "iomg156", 0x264, iomg156_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg157_sophia_clgh_va, "iomg157", 0x268, iomg157_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg158_sophia_clgh_va, "iomg158", 0x26C, iomg158_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg159_sophia_clgh_va, "iomg159", 0x270, iomg159_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg160_sophia_clgh_va, "iomg160", 0x274, iomg160_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg161_sophia_clgh_va, "iomg161", 0x278, iomg161_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg162_sophia_clgh_va, "iomg162", 0x27C, iomg162_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg163_sophia_clgh_va, "iomg163", 0x280, iomg163_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg164_sophia_clgh_va, "iomg164", 0x284, iomg164_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg165_sophia_clgh_va, "iomg165", 0x288, iomg165_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg166_sophia_clgh_va, "iomg166", 0x28C, iomg166_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg167_sophia_clgh_va, "iomg167", 0x290, iomg167_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg168_sophia_clgh_va, "iomg168", 0x294, iomg168_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg169_sophia_clgh_va, "iomg169", 0x298, iomg169_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg170_sophia_clgh_va, "iomg170", 0x29C, iomg170_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg171_sophia_clgh_va, "iomg171", 0x2A0, iomg171_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg172_sophia_clgh_va, "iomg172", 0x2A4, iomg172_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg173_sophia_clgh_va, "iomg173", 0x2A8, iomg173_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg174_sophia_clgh_va, "iomg174", 0x2AC, iomg174_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg175_sophia_clgh_va, "iomg175", 0x2B0, iomg175_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg176_sophia_clgh_va, "iomg176", 0x2B4, iomg176_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg177_sophia_clgh_va, "iomg177", 0x2B8, iomg177_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg178_sophia_clgh_va, "iomg178", 0x2BC, iomg178_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg179_sophia_clgh_va, "iomg179", 0x2C0, iomg179_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg180_sophia_clgh_va, "iomg180", 0x2C4, iomg180_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg181_sophia_clgh_va, "iomg181", 0x2C8, iomg181_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg182_sophia_clgh_va, "iomg182", 0x2CC, iomg182_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg183_sophia_clgh_va, "iomg183", 0x2D0, iomg183_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg184_sophia_clgh_va, "iomg184", 0x2D4, iomg184_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg185_sophia_clgh_va, "iomg185", 0x2D8, iomg185_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg186_sophia_clgh_va, "iomg186", 0x2DC, iomg186_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg187_sophia_clgh_va, "iomg187", 0x2E0, iomg187_func_array_sophia_clgh_va)
IOMUX_IOMG(iomg188_sophia_clgh_va, "iomg188", 0x2E4, iomg188_func_array_sophia_clgh_va)


/*define pins*/
IOMUX_IOCG(iocg000_sophia_clgh_va, "iocg000", 0x800, 0x0003, 0x00F0)
IOMUX_IOCG(iocg001_sophia_clgh_va, "iocg001", 0x804, 0x0003, 0x00F0)
IOMUX_IOCG(iocg002_sophia_clgh_va, "iocg002", 0x808, 0x0003, 0x00F0)
IOMUX_IOCG(iocg003_sophia_clgh_va, "iocg003", 0x80C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg004_sophia_clgh_va, "iocg004", 0x810, 0x0003, 0x00F0)
IOMUX_IOCG(iocg005_sophia_clgh_va, "iocg005", 0x814, 0x0003, 0x00F0)
IOMUX_IOCG(iocg006_sophia_clgh_va, "iocg006", 0x818, 0x0003, 0x00F0)
IOMUX_IOCG(iocg007_sophia_clgh_va, "iocg007", 0x81C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg008_sophia_clgh_va, "iocg008", 0x820, 0x0003, 0x00F0)
IOMUX_IOCG(iocg009_sophia_clgh_va, "iocg009", 0x824, 0x0003, 0x00F0)
IOMUX_IOCG(iocg010_sophia_clgh_va, "iocg010", 0x828, 0x0003, 0x00F0)
IOMUX_IOCG(iocg011_sophia_clgh_va, "iocg011", 0x82C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg012_sophia_clgh_va, "iocg012", 0x830, 0x0003, 0x00F0)
IOMUX_IOCG(iocg013_sophia_clgh_va, "iocg013", 0x834, 0x0003, 0x00F0)
IOMUX_IOCG(iocg014_sophia_clgh_va, "iocg014", 0x838, 0x0003, 0x00F0)
IOMUX_IOCG(iocg015_sophia_clgh_va, "iocg015", 0x83C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg016_sophia_clgh_va, "iocg016", 0x840, 0x0003, 0x00F0)
IOMUX_IOCG(iocg017_sophia_clgh_va, "iocg017", 0x844, 0x0003, 0x00F0)
IOMUX_IOCG(iocg018_sophia_clgh_va, "iocg018", 0x848, 0x0003, 0x00F0)
IOMUX_IOCG(iocg019_sophia_clgh_va, "iocg019", 0x84C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg020_sophia_clgh_va, "iocg020", 0x850, 0x0003, 0x00F0)
IOMUX_IOCG(iocg021_sophia_clgh_va, "iocg021", 0x854, 0x0003, 0x00F0)
IOMUX_IOCG(iocg022_sophia_clgh_va, "iocg022", 0x858, 0x0003, 0x00F0)
IOMUX_IOCG(iocg023_sophia_clgh_va, "iocg023", 0x85C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg024_sophia_clgh_va, "iocg024", 0x860, 0x0003, 0x00F0)
IOMUX_IOCG(iocg025_sophia_clgh_va, "iocg025", 0x864, 0x0003, 0x00F0)
IOMUX_IOCG(iocg026_sophia_clgh_va, "iocg026", 0x868, 0x0003, 0x00F0)
IOMUX_IOCG(iocg027_sophia_clgh_va, "iocg027", 0x86C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg028_sophia_clgh_va, "iocg028", 0x870, 0x0003, 0x00F0)
IOMUX_IOCG(iocg029_sophia_clgh_va, "iocg029", 0x874, 0x0003, 0x00F0)
IOMUX_IOCG(iocg030_sophia_clgh_va, "iocg030", 0x878, 0x0003, 0x00F0)
IOMUX_IOCG(iocg031_sophia_clgh_va, "iocg031", 0x87C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg032_sophia_clgh_va, "iocg032", 0x880, 0x0003, 0x00F0)
IOMUX_IOCG(iocg033_sophia_clgh_va, "iocg033", 0x884, 0x0003, 0x00F0)
IOMUX_IOCG(iocg034_sophia_clgh_va, "iocg034", 0x888, 0x0003, 0x00F0)
IOMUX_IOCG(iocg035_sophia_clgh_va, "iocg035", 0x88C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg036_sophia_clgh_va, "iocg036", 0x890, 0x0003, 0x00F0)
IOMUX_IOCG(iocg037_sophia_clgh_va, "iocg037", 0x894, 0x0003, 0x00F0)
IOMUX_IOCG(iocg038_sophia_clgh_va, "iocg038", 0x898, 0x0003, 0x00F0)
IOMUX_IOCG(iocg039_sophia_clgh_va, "iocg039", 0x89C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg040_sophia_clgh_va, "iocg040", 0x8A0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg041_sophia_clgh_va, "iocg041", 0x8A4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg042_sophia_clgh_va, "iocg042", 0x8A8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg043_sophia_clgh_va, "iocg043", 0x8AC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg044_sophia_clgh_va, "iocg044", 0x8B0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg045_sophia_clgh_va, "iocg045", 0x8B4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg046_sophia_clgh_va, "iocg046", 0x8B8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg047_sophia_clgh_va, "iocg047", 0x8BC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg048_sophia_clgh_va, "iocg048", 0x8C0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg049_sophia_clgh_va, "iocg049", 0x8C4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg050_sophia_clgh_va, "iocg050", 0x8C8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg051_sophia_clgh_va, "iocg051", 0x8CC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg052_sophia_clgh_va, "iocg052", 0x8D0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg053_sophia_clgh_va, "iocg053", 0x8D4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg054_sophia_clgh_va, "iocg054", 0x8D8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg055_sophia_clgh_va, "iocg055", 0x8DC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg056_sophia_clgh_va, "iocg056", 0x8E0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg057_sophia_clgh_va, "iocg057", 0x8E4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg058_sophia_clgh_va, "iocg058", 0x8E8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg059_sophia_clgh_va, "iocg059", 0x8EC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg060_sophia_clgh_va, "iocg060", 0x8F0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg061_sophia_clgh_va, "iocg061", 0x8F4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg062_sophia_clgh_va, "iocg062", 0x8F8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg063_sophia_clgh_va, "iocg063", 0x8FC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg064_sophia_clgh_va, "iocg064", 0x900, 0x0003, 0x00F0)
IOMUX_IOCG(iocg065_sophia_clgh_va, "iocg065", 0x904, 0x0003, 0x00F0)
IOMUX_IOCG(iocg066_sophia_clgh_va, "iocg066", 0x908, 0x0003, 0x00F0)
IOMUX_IOCG(iocg067_sophia_clgh_va, "iocg067", 0x90C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg068_sophia_clgh_va, "iocg068", 0x910, 0x0003, 0x00F0)
IOMUX_IOCG(iocg069_sophia_clgh_va, "iocg069", 0x914, 0x0003, 0x00F0)
IOMUX_IOCG(iocg070_sophia_clgh_va, "iocg070", 0x918, 0x0003, 0x00F0)
IOMUX_IOCG(iocg071_sophia_clgh_va, "iocg071", 0x91C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg072_sophia_clgh_va, "iocg072", 0x920, 0x0003, 0x00F0)
IOMUX_IOCG(iocg073_sophia_clgh_va, "iocg073", 0x924, 0x0003, 0x00F0)
IOMUX_IOCG(iocg074_sophia_clgh_va, "iocg074", 0x928, 0x0003, 0x00F0)
IOMUX_IOCG(iocg075_sophia_clgh_va, "iocg075", 0x92C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg076_sophia_clgh_va, "iocg076", 0x930, 0x0003, 0x00F0)
IOMUX_IOCG(iocg077_sophia_clgh_va, "iocg077", 0x934, 0x0003, 0x00F0)
IOMUX_IOCG(iocg078_sophia_clgh_va, "iocg078", 0x938, 0x0003, 0x00F0)
IOMUX_IOCG(iocg079_sophia_clgh_va, "iocg079", 0x93C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg080_sophia_clgh_va, "iocg080", 0x940, 0x0003, 0x00F0)
IOMUX_IOCG(iocg081_sophia_clgh_va, "iocg081", 0x944, 0x0003, 0x00F0)
IOMUX_IOCG(iocg082_sophia_clgh_va, "iocg082", 0x948, 0x0003, 0x00F0)
IOMUX_IOCG(iocg083_sophia_clgh_va, "iocg083", 0x94C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg084_sophia_clgh_va, "iocg084", 0x950, 0x0003, 0x00F0)
IOMUX_IOCG(iocg085_sophia_clgh_va, "iocg085", 0x954, 0x0003, 0x00F0)
IOMUX_IOCG(iocg086_sophia_clgh_va, "iocg086", 0x958, 0x0003, 0x00F0)
IOMUX_IOCG(iocg087_sophia_clgh_va, "iocg087", 0x95C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg088_sophia_clgh_va, "iocg088", 0x960, 0x0003, 0x00F0)
IOMUX_IOCG(iocg089_sophia_clgh_va, "iocg089", 0x964, 0x0003, 0x00F0)
IOMUX_IOCG(iocg090_sophia_clgh_va, "iocg090", 0x968, 0x0003, 0x00F0)
IOMUX_IOCG(iocg091_sophia_clgh_va, "iocg091", 0x96C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg092_sophia_clgh_va, "iocg092", 0x970, 0x0003, 0x00F0)
IOMUX_IOCG(iocg093_sophia_clgh_va, "iocg093", 0x974, 0x0003, 0x00F0)
IOMUX_IOCG(iocg094_sophia_clgh_va, "iocg094", 0x978, 0x0003, 0x00F0)
IOMUX_IOCG(iocg095_sophia_clgh_va, "iocg095", 0x97C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg096_sophia_clgh_va, "iocg096", 0x980, 0x0003, 0x00F0)
IOMUX_IOCG(iocg097_sophia_clgh_va, "iocg097", 0x984, 0x0003, 0x00F0)
IOMUX_IOCG(iocg098_sophia_clgh_va, "iocg098", 0x988, 0x0003, 0x00F0)
IOMUX_IOCG(iocg099_sophia_clgh_va, "iocg099", 0x98C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg100_sophia_clgh_va, "iocg100", 0x990, 0x0003, 0x00F0)
IOMUX_IOCG(iocg101_sophia_clgh_va, "iocg101", 0x994, 0x0003, 0x00F0)
IOMUX_IOCG(iocg102_sophia_clgh_va, "iocg102", 0x998, 0x0003, 0x00F0)
IOMUX_IOCG(iocg103_sophia_clgh_va, "iocg103", 0x99C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg104_sophia_clgh_va, "iocg104", 0x9A0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg105_sophia_clgh_va, "iocg105", 0x9A4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg106_sophia_clgh_va, "iocg106", 0x9A8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg107_sophia_clgh_va, "iocg107", 0x9AC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg108_sophia_clgh_va, "iocg108", 0x9B0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg109_sophia_clgh_va, "iocg109", 0x9B4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg110_sophia_clgh_va, "iocg110", 0x9B8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg111_sophia_clgh_va, "iocg111", 0x9BC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg112_sophia_clgh_va, "iocg112", 0x9C0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg113_sophia_clgh_va, "iocg113", 0x9C4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg114_sophia_clgh_va, "iocg114", 0x9C8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg115_sophia_clgh_va, "iocg115", 0x9CC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg116_sophia_clgh_va, "iocg116", 0x9D0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg117_sophia_clgh_va, "iocg117", 0x9D4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg118_sophia_clgh_va, "iocg118", 0x9D8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg119_sophia_clgh_va, "iocg119", 0x9DC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg120_sophia_clgh_va, "iocg120", 0x9E0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg121_sophia_clgh_va, "iocg121", 0x9E4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg122_sophia_clgh_va, "iocg122", 0x9E8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg123_sophia_clgh_va, "iocg123", 0x9EC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg124_sophia_clgh_va, "iocg124", 0x9F0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg125_sophia_clgh_va, "iocg125", 0x9F4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg126_sophia_clgh_va, "iocg126", 0x9F8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg127_sophia_clgh_va, "iocg127", 0x9FC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg128_sophia_clgh_va, "iocg128", 0xA00, 0x0003, 0x00F0)
IOMUX_IOCG(iocg129_sophia_clgh_va, "iocg129", 0xA04, 0x0003, 0x00F0)
IOMUX_IOCG(iocg130_sophia_clgh_va, "iocg130", 0xA08, 0x0003, 0x00F0)
IOMUX_IOCG(iocg131_sophia_clgh_va, "iocg131", 0xA0C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg132_sophia_clgh_va, "iocg132", 0xA10, 0x0003, 0x00F0)
IOMUX_IOCG(iocg133_sophia_clgh_va, "iocg133", 0xA14, 0x0003, 0x00F0)
IOMUX_IOCG(iocg134_sophia_clgh_va, "iocg134", 0xA18, 0x0003, 0x00F0)
IOMUX_IOCG(iocg135_sophia_clgh_va, "iocg135", 0xA1C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg136_sophia_clgh_va, "iocg136", 0xA20, 0x0003, 0x00F0)
IOMUX_IOCG(iocg137_sophia_clgh_va, "iocg137", 0xA24, 0x0003, 0x00F0)
IOMUX_IOCG(iocg138_sophia_clgh_va, "iocg138", 0xA28, 0x0003, 0x00F0)
IOMUX_IOCG(iocg139_sophia_clgh_va, "iocg139", 0xA2C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg140_sophia_clgh_va, "iocg140", 0xA30, 0x0003, 0x00F0)
IOMUX_IOCG(iocg141_sophia_clgh_va, "iocg141", 0xA34, 0x0003, 0x00F0)
IOMUX_IOCG(iocg142_sophia_clgh_va, "iocg142", 0xA38, 0x0003, 0x00F0)
IOMUX_IOCG(iocg143_sophia_clgh_va, "iocg143", 0xA3C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg144_sophia_clgh_va, "iocg144", 0xA40, 0x0003, 0x00F0)
IOMUX_IOCG(iocg145_sophia_clgh_va, "iocg145", 0xA44, 0x0003, 0x00F0)
IOMUX_IOCG(iocg146_sophia_clgh_va, "iocg146", 0xA48, 0x0003, 0x00F0)
IOMUX_IOCG(iocg147_sophia_clgh_va, "iocg147", 0xA4C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg148_sophia_clgh_va, "iocg148", 0xA50, 0x0003, 0x00F0)
IOMUX_IOCG(iocg149_sophia_clgh_va, "iocg149", 0xA54, 0x0003, 0x00F0)
IOMUX_IOCG(iocg150_sophia_clgh_va, "iocg150", 0xA58, 0x0003, 0x00F0)
IOMUX_IOCG(iocg151_sophia_clgh_va, "iocg151", 0xA5C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg152_sophia_clgh_va, "iocg152", 0xA60, 0x0003, 0x00F0)
IOMUX_IOCG(iocg153_sophia_clgh_va, "iocg153", 0xA64, 0x0003, 0x00F0)
IOMUX_IOCG(iocg154_sophia_clgh_va, "iocg154", 0xA68, 0x0003, 0x00F0)
IOMUX_IOCG(iocg155_sophia_clgh_va, "iocg155", 0xA6C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg156_sophia_clgh_va, "iocg156", 0xA70, 0x0003, 0x00F0)
IOMUX_IOCG(iocg157_sophia_clgh_va, "iocg157", 0xA74, 0x0003, 0x00F0)
IOMUX_IOCG(iocg158_sophia_clgh_va, "iocg158", 0xA78, 0x0003, 0x00F0)
IOMUX_IOCG(iocg159_sophia_clgh_va, "iocg159", 0xA7C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg160_sophia_clgh_va, "iocg160", 0xA80, 0x0003, 0x00F0)
IOMUX_IOCG(iocg161_sophia_clgh_va, "iocg161", 0xA84, 0x0003, 0x00F0)
IOMUX_IOCG(iocg162_sophia_clgh_va, "iocg162", 0xA88, 0x0003, 0x00F0)
IOMUX_IOCG(iocg163_sophia_clgh_va, "iocg163", 0xA8C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg164_sophia_clgh_va, "iocg164", 0xA90, 0x0003, 0x00F0)
IOMUX_IOCG(iocg165_sophia_clgh_va, "iocg165", 0xA94, 0x0003, 0x00F0)
IOMUX_IOCG(iocg166_sophia_clgh_va, "iocg166", 0xA98, 0x0003, 0x00F0)
IOMUX_IOCG(iocg167_sophia_clgh_va, "iocg167", 0xA9C, 0x0003, 0x00F0)
IOMUX_IOCG(iocg168_sophia_clgh_va, "iocg168", 0xAA0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg169_sophia_clgh_va, "iocg169", 0xAA4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg170_sophia_clgh_va, "iocg170", 0xAA8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg171_sophia_clgh_va, "iocg171", 0xAAC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg172_sophia_clgh_va, "iocg172", 0xAB0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg173_sophia_clgh_va, "iocg173", 0xAB4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg174_sophia_clgh_va, "iocg174", 0xAB8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg175_sophia_clgh_va, "iocg175", 0xABC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg176_sophia_clgh_va, "iocg176", 0xAC0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg177_sophia_clgh_va, "iocg177", 0xAC4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg178_sophia_clgh_va, "iocg178", 0xAC8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg179_sophia_clgh_va, "iocg179", 0xACC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg180_sophia_clgh_va, "iocg180", 0xAD0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg181_sophia_clgh_va, "iocg181", 0xAD4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg182_sophia_clgh_va, "iocg182", 0xAD8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg183_sophia_clgh_va, "iocg183", 0xADC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg184_sophia_clgh_va, "iocg184", 0xAE0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg185_sophia_clgh_va, "iocg185", 0xAE4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg186_sophia_clgh_va, "iocg186", 0xAE8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg187_sophia_clgh_va, "iocg187", 0xAEC, 0x0003, 0x00F0)
IOMUX_IOCG(iocg188_sophia_clgh_va, "iocg188", 0xAF0, 0x0003, 0x00F0)
IOMUX_IOCG(iocg189_sophia_clgh_va, "iocg189", 0xAF4, 0x0003, 0x00F0)
IOMUX_IOCG(iocg190_sophia_clgh_va, "iocg190", 0xAF8, 0x0003, 0x00F0)
IOMUX_IOCG(iocg191_sophia_clgh_va, "iocg191", 0xAFC, 0x0003, 0x00F0)


/*define the iocg*/
IOMUX_PIN(I2C0_SCL_SOPHIA_CLGH_VA, "I2C0_SCL", FUNC0, NOPULL, LEVEL0, &iomg071_sophia_clgh_va, &iocg071_sophia_clgh_va)
IOMUX_PIN(I2C0_SDA_SOPHIA_CLGH_VA, "I2C0_SDA", FUNC0, NOPULL, LEVEL0, &iomg072_sophia_clgh_va, &iocg072_sophia_clgh_va)
IOMUX_PIN(I2C1_SCL_SOPHIA_CLGH_VA, "I2C1_SCL", FUNC0, NOPULL, LEVEL0, &iomg073_sophia_clgh_va, &iocg073_sophia_clgh_va)
IOMUX_PIN(I2C1_SDA_SOPHIA_CLGH_VA, "I2C1_SDA", FUNC0, NOPULL, LEVEL0, &iomg074_sophia_clgh_va, &iocg074_sophia_clgh_va)
IOMUX_PIN(I2C2_SCL_SOPHIA_CLGH_VA, "I2C2_SCL", FUNC0, NOPULL, LEVEL0, &iomg075_sophia_clgh_va, &iocg075_sophia_clgh_va)
IOMUX_PIN(I2C2_SDA_SOPHIA_CLGH_VA, "I2C2_SDA", FUNC0, NOPULL, LEVEL0, &iomg076_sophia_clgh_va, &iocg076_sophia_clgh_va)
IOMUX_PIN(I2C3_SCL_SOPHIA_CLGH_VA, "I2C3_SCL", FUNC0, NOPULL, LEVEL0, &iomg077_sophia_clgh_va, &iocg077_sophia_clgh_va)
IOMUX_PIN(I2C3_SDA_SOPHIA_CLGH_VA, "I2C3_SDA", FUNC0, NOPULL, LEVEL0, &iomg078_sophia_clgh_va, &iocg078_sophia_clgh_va)
IOMUX_PIN(ISP_GPIO0_SOPHIA_CLGH_VA, "ISP_GPIO0", FUNC2, NOPULL, LEVEL0, &iomg008_sophia_clgh_va, &iocg008_sophia_clgh_va)
IOMUX_PIN(ISP_GPIO2_SOPHIA_CLGH_VA, "ISP_GPIO2", FUNC0, NOPULL, LEVEL0, &iomg010_sophia_clgh_va, &iocg010_sophia_clgh_va)
IOMUX_PIN(ISP_GPIO3_SOPHIA_CLGH_VA, "ISP_GPIO3", FUNC2, NOPULL, LEVEL0, &iomg011_sophia_clgh_va, &iocg011_sophia_clgh_va)
IOMUX_PIN(ISP_RESETB0_SOPHIA_CLGH_VA, "ISP_RESETB0", FUNC0, NOPULL, LEVEL0, &iomg016_sophia_clgh_va, &iocg016_sophia_clgh_va)
IOMUX_PIN(ISP_CCLK0_SOPHIA_CLGH_VA, "ISP_CCLK0", FUNC0, NOPULL, LEVEL0, &iomg014_sophia_clgh_va, &iocg014_sophia_clgh_va)
IOMUX_PIN(ISP_SDA0_SOPHIA_CLGH_VA, "ISP_SDA0", FUNC2, PULLDOWN, LEVEL0, &iomg020_sophia_clgh_va, &iocg020_sophia_clgh_va)
IOMUX_PIN(ISP_SCL0_SOPHIA_CLGH_VA, "ISP_SCL0", FUNC2, PULLDOWN, LEVEL0, &iomg021_sophia_clgh_va, &iocg021_sophia_clgh_va)
IOMUX_PIN(ISP_GPIO1_SOPHIA_CLGH_VA, "ISP_GPIO1", FUNC0, NOPULL, LEVEL0, &iomg009_sophia_clgh_va, &iocg009_sophia_clgh_va)
IOMUX_PIN(ISP_GPIO4_SOPHIA_CLGH_VA, "ISP_GPIO4", FUNC2, NOPULL, LEVEL0, &iomg012_sophia_clgh_va, &iocg012_sophia_clgh_va)
IOMUX_PIN(ISP_RESETB1_SOPHIA_CLGH_VA, "ISP_RESETB1", FUNC0, NOPULL, LEVEL0, &iomg017_sophia_clgh_va, &iocg017_sophia_clgh_va)
IOMUX_PIN(ISP_CCLK1_SOPHIA_CLGH_VA, "ISP_CCLK1", FUNC0, NOPULL, LEVEL0, &iomg015_sophia_clgh_va, &iocg015_sophia_clgh_va)
IOMUX_PIN(ISP_SDA1_SOPHIA_CLGH_VA, "ISP_SDA1", FUNC2, PULLDOWN, LEVEL0, &iomg022_sophia_clgh_va, &iocg022_sophia_clgh_va)
IOMUX_PIN(ISP_SCL1_SOPHIA_CLGH_VA, "ISP_SCL1", FUNC2, PULLDOWN, LEVEL0, &iomg023_sophia_clgh_va, &iocg023_sophia_clgh_va)
IOMUX_PIN(ISP_GPIO5_SOPHIA_CLGH_VA, "ISP_GPIO5", FUNC2, NOPULL, LEVEL0, &iomg013_sophia_clgh_va, &iocg013_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_20_SOPHIA_CLGH_VA, "RF_GPIO_20", FUNC2, NOPULL, LEVEL0, &iomg178_sophia_clgh_va, &iocg188_sophia_clgh_va)
IOMUX_PIN(GPIO_4_2_SOPHIA_CLGH_VA, "GPIO_4_2", FUNC0, PULLUP, LEVEL0, &iomg130_sophia_clgh_va, &iocg130_sophia_clgh_va)
IOMUX_PIN(PWM_OUT1_SOPHIA_CLGH_VA, "PWM_OUT1", FUNC2, NOPULL, LEVEL0, &iomg025_sophia_clgh_va, &iocg025_sophia_clgh_va)
IOMUX_PIN(GPIO_4_6_SOPHIA_CLGH_VA, "GPIO_4_6", FUNC0, NOPULL, LEVEL0, &iomg134_sophia_clgh_va, &iocg134_sophia_clgh_va)
IOMUX_PIN(GPIO_4_7_SOPHIA_CLGH_VA, "GPIO_4_7", FUNC4, NOPULL, LEVEL0, &iomg135_sophia_clgh_va, &iocg135_sophia_clgh_va)
IOMUX_PIN(GPIO_6_6_SOPHIA_CLGH_VA, "GPIO_6_6", FUNC0, NOPULL, LEVEL0, &iomg110_sophia_clgh_va, &iocg110_sophia_clgh_va)
IOMUX_PIN(PWM_OUT0_SOPHIA_CLGH_VA, "PWM_OUT0", FUNC0, NOPULL, LEVEL0, &iomg024_sophia_clgh_va, &iocg024_sophia_clgh_va)
IOMUX_PIN(GPIO_18_7_SOPHIA_CLGH_VA, "GPIO_18_7", FUNC0, NOPULL, LEVEL0, &iomg007_sophia_clgh_va, &iocg191_sophia_clgh_va)
IOMUX_PIN(UART4_CTS_N_SOPHIA_CLGH_VA, "UART4_CTS_N", FUNC0, NOPULL, LEVEL0, &iomg067_sophia_clgh_va, &iocg067_sophia_clgh_va)
IOMUX_PIN(UART4_RTS_N_SOPHIA_CLGH_VA, "UART4_RTS_N", FUNC4, PULLUP, LEVEL0, &iomg068_sophia_clgh_va, &iocg068_sophia_clgh_va)
IOMUX_PIN(UART4_RXD_SOPHIA_CLGH_VA, "UART4_RXD", FUNC0, NOPULL, LEVEL0, &iomg069_sophia_clgh_va, &iocg069_sophia_clgh_va)
IOMUX_PIN(UART4_TXD_SOPHIA_CLGH_VA, "UART4_TXD", FUNC4, PULLUP, LEVEL0, &iomg070_sophia_clgh_va, &iocg070_sophia_clgh_va)
IOMUX_PIN(GPIO_15_7_SOPHIA_CLGH_VA, "GPIO_15_7", FUNC0, NOPULL, LEVEL0, &iomg127_sophia_clgh_va, &iocg127_sophia_clgh_va)
IOMUX_PIN(SDIO_DATA3_SOPHIA_CLGH_VA, "SDIO_DATA3", FUNC2, PULLUP, LEVEL0, &iomg095_sophia_clgh_va, &iocg095_sophia_clgh_va)
IOMUX_PIN(SDIO_DATA2_SOPHIA_CLGH_VA, "SDIO_DATA2", FUNC2, PULLUP, LEVEL0, &iomg094_sophia_clgh_va, &iocg094_sophia_clgh_va)
IOMUX_PIN(SDIO_DATA1_SOPHIA_CLGH_VA, "SDIO_DATA1", FUNC2, PULLUP, LEVEL0, &iomg093_sophia_clgh_va, &iocg093_sophia_clgh_va)
IOMUX_PIN(SDIO_DATA0_SOPHIA_CLGH_VA, "SDIO_DATA0", FUNC2, PULLUP, LEVEL0, &iomg092_sophia_clgh_va, &iocg092_sophia_clgh_va)
IOMUX_PIN(SDIO_CMD_SOPHIA_CLGH_VA, "SDIO_CMD", FUNC2, PULLUP, LEVEL0, &iomg091_sophia_clgh_va, &iocg091_sophia_clgh_va)
IOMUX_PIN(SDIO_CLK_SOPHIA_CLGH_VA, "SDIO_CLK", FUNC2, NOPULL, LEVEL1, &iomg090_sophia_clgh_va, &iocg090_sophia_clgh_va)
IOMUX_PIN(GPIO_6_1_SOPHIA_CLGH_VA, "GPIO_6_1", FUNC0, NOPULL, LEVEL0, &iomg105_sophia_clgh_va, &iocg105_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_1_SOPHIA_CLGH_VA, "RF_GPIO_1", FUNC0, NOPULL, LEVEL0, &iomg159_sophia_clgh_va, &iocg159_sophia_clgh_va)
IOMUX_PIN(UART3_CTS_N_SOPHIA_CLGH_VA, "UART3_CTS_N", FUNC0, NOPULL, LEVEL0, &iomg063_sophia_clgh_va, &iocg063_sophia_clgh_va)
IOMUX_PIN(UART3_RTS_N_SOPHIA_CLGH_VA, "UART3_RTS_N", FUNC0, NOPULL, LEVEL0, &iomg064_sophia_clgh_va, &iocg064_sophia_clgh_va)
IOMUX_PIN(UART3_RXD_SOPHIA_CLGH_VA, "UART3_RXD", FUNC0, NOPULL, LEVEL0, &iomg065_sophia_clgh_va, &iocg065_sophia_clgh_va)
IOMUX_PIN(UART3_TXD_SOPHIA_CLGH_VA, "UART3_TXD", FUNC0, NOPULL, LEVEL0, &iomg066_sophia_clgh_va, &iocg066_sophia_clgh_va)
IOMUX_PIN(GPS_CLK_SOPHIA_CLGH_VA, "GPS_CLK", FUNC2, NOPULL, LEVEL0, &iomg049_sophia_clgh_va, &iocg049_sophia_clgh_va)
IOMUX_PIN(TCXO0_AFC_SOPHIA_CLGH_VA, "TCXO0_AFC", FUNC4, PULLDOWN, LEVEL0, &iomg144_sophia_clgh_va, &iocg144_sophia_clgh_va)
IOMUX_PIN(TCXO1_AFC_SOPHIA_CLGH_VA, "TCXO1_AFC", FUNC4, PULLDOWN, LEVEL0, &iomg145_sophia_clgh_va, &iocg145_sophia_clgh_va)
IOMUX_PIN(USIM0_CLK_SOPHIA_CLGH_VA, "USIM0_CLK", FUNC0, NOPULL, LEVEL0, &iomg043_sophia_clgh_va, &iocg043_sophia_clgh_va)
IOMUX_PIN(USIM0_DATA_SOPHIA_CLGH_VA, "USIM0_DATA", FUNC0, NOPULL, LEVEL0, &iomg044_sophia_clgh_va, &iocg044_sophia_clgh_va)
IOMUX_PIN(USIM0_RST_SOPHIA_CLGH_VA, "USIM0_RST", FUNC0, NOPULL, LEVEL0, &iomg045_sophia_clgh_va, &iocg045_sophia_clgh_va)
IOMUX_PIN(USIM1_CLK_SOPHIA_CLGH_VA, "USIM1_CLK", FUNC0, NOPULL, LEVEL0, &iomg046_sophia_clgh_va, &iocg046_sophia_clgh_va)
IOMUX_PIN(USIM1_DATA_SOPHIA_CLGH_VA, "USIM1_DATA", FUNC0, NOPULL, LEVEL0, &iomg047_sophia_clgh_va, &iocg047_sophia_clgh_va)
IOMUX_PIN(USIM1_RST_SOPHIA_CLGH_VA, "USIM1_RST", FUNC0, NOPULL, LEVEL0, &iomg048_sophia_clgh_va, &iocg048_sophia_clgh_va)
IOMUX_PIN(EMMC_CLK_SOPHIA_CLGH_VA, "EMMC_CLK", FUNC0, NOPULL, LEVEL1, &iomg079_sophia_clgh_va, &iocg079_sophia_clgh_va)
IOMUX_PIN(EMMC_CMD_SOPHIA_CLGH_VA, "EMMC_CMD", FUNC0, NOPULL, LEVEL1, &iomg080_sophia_clgh_va, &iocg080_sophia_clgh_va)
IOMUX_PIN(EMMC_DATA0_SOPHIA_CLGH_VA, "EMMC_DATA0", FUNC0, NOPULL, LEVEL1, &iomg081_sophia_clgh_va, &iocg081_sophia_clgh_va)
IOMUX_PIN(EMMC_DATA1_SOPHIA_CLGH_VA, "EMMC_DATA1", FUNC0, NOPULL, LEVEL1, &iomg082_sophia_clgh_va, &iocg082_sophia_clgh_va)
IOMUX_PIN(EMMC_DATA2_SOPHIA_CLGH_VA, "EMMC_DATA2", FUNC0, NOPULL, LEVEL1, &iomg083_sophia_clgh_va, &iocg083_sophia_clgh_va)
IOMUX_PIN(EMMC_DATA3_SOPHIA_CLGH_VA, "EMMC_DATA3", FUNC0, NOPULL, LEVEL1, &iomg084_sophia_clgh_va, &iocg084_sophia_clgh_va)
IOMUX_PIN(EMMC_DATA4_SOPHIA_CLGH_VA, "EMMC_DATA4", FUNC0, NOPULL, LEVEL1, &iomg085_sophia_clgh_va, &iocg085_sophia_clgh_va)
IOMUX_PIN(EMMC_DATA5_SOPHIA_CLGH_VA, "EMMC_DATA5", FUNC0, NOPULL, LEVEL1, &iomg086_sophia_clgh_va, &iocg086_sophia_clgh_va)
IOMUX_PIN(EMMC_DATA6_SOPHIA_CLGH_VA, "EMMC_DATA6", FUNC0, NOPULL, LEVEL1, &iomg087_sophia_clgh_va, &iocg087_sophia_clgh_va)
IOMUX_PIN(EMMC_DATA7_SOPHIA_CLGH_VA, "EMMC_DATA7", FUNC0, NOPULL, LEVEL1, &iomg088_sophia_clgh_va, &iocg088_sophia_clgh_va)
IOMUX_PIN(GPIO_2_3_SOPHIA_CLGH_VA, "GPIO_2_3", FUNC4, NOPULL, LEVEL0, &iomg143_sophia_clgh_va, &iocg143_sophia_clgh_va)
IOMUX_PIN(BOOT_SEL_SOPHIA_CLGH_VA, "BOOT_SEL", FUNC0, PULLUP, LEVEL0, &iomg000_sophia_clgh_va, &iocg000_sophia_clgh_va)
IOMUX_PIN(GPIO_5_2_SOPHIA_CLGH_VA, "GPIO_5_2", FUNC0, PULLDOWN, LEVEL0, &iomg098_sophia_clgh_va, &iocg098_sophia_clgh_va)
IOMUX_PIN(PCM1_XCLK_SOPHIA_CLGH_VA, "PCM1_XCLK", FUNC0, NOPULL, LEVEL0, &iomg034_sophia_clgh_va, &iocg034_sophia_clgh_va)
IOMUX_PIN(PCM1_XFS_SOPHIA_CLGH_VA, "PCM1_XFS", FUNC0, NOPULL, LEVEL0, &iomg035_sophia_clgh_va, &iocg035_sophia_clgh_va)
IOMUX_PIN(PCM1_DI_SOPHIA_CLGH_VA, "PCM1_DI", FUNC0, NOPULL, LEVEL0, &iomg036_sophia_clgh_va, &iocg036_sophia_clgh_va)
IOMUX_PIN(PCM1_DO_SOPHIA_CLGH_VA, "PCM1_DO", FUNC0, NOPULL, LEVEL0, &iomg037_sophia_clgh_va, &iocg037_sophia_clgh_va)
IOMUX_PIN(I2S_XCLK_SOPHIA_CLGH_VA, "I2S_XCLK", FUNC0, NOPULL, LEVEL0, &iomg026_sophia_clgh_va, &iocg026_sophia_clgh_va)
IOMUX_PIN(I2S_XFS_SOPHIA_CLGH_VA, "I2S_XFS", FUNC0, NOPULL, LEVEL0, &iomg027_sophia_clgh_va, &iocg027_sophia_clgh_va)
IOMUX_PIN(I2S_DI_SOPHIA_CLGH_VA, "I2S_DI", FUNC0, PULLDOWN, LEVEL0, &iomg028_sophia_clgh_va, &iocg028_sophia_clgh_va)
IOMUX_PIN(I2S_DO_SOPHIA_CLGH_VA, "I2S_DO", FUNC0, NOPULL, LEVEL0, &iomg029_sophia_clgh_va, &iocg029_sophia_clgh_va)
IOMUX_PIN(PCM0_XCLK_SOPHIA_CLGH_VA, "PCM0_XCLK", FUNC0, NOPULL, LEVEL0, &iomg030_sophia_clgh_va, &iocg030_sophia_clgh_va)
IOMUX_PIN(PCM0_XFS_SOPHIA_CLGH_VA, "PCM0_XFS", FUNC0, NOPULL, LEVEL0, &iomg031_sophia_clgh_va, &iocg031_sophia_clgh_va)
IOMUX_PIN(PCM0_DI_SOPHIA_CLGH_VA, "PCM0_DI", FUNC0, PULLDOWN, LEVEL0, &iomg032_sophia_clgh_va, &iocg032_sophia_clgh_va)
IOMUX_PIN(PCM0_DO_SOPHIA_CLGH_VA, "PCM0_DO", FUNC0, NOPULL, LEVEL0, &iomg033_sophia_clgh_va, &iocg033_sophia_clgh_va)
IOMUX_PIN(UART2_RXD_SOPHIA_CLGH_VA, "UART2_RXD", FUNC4, PULLDOWN, LEVEL0, &iomg061_sophia_clgh_va, &iocg061_sophia_clgh_va)
IOMUX_PIN(UART2_TXD_SOPHIA_CLGH_VA, "UART2_TXD", FUNC4, NOPULL, LEVEL0, &iomg062_sophia_clgh_va, &iocg062_sophia_clgh_va)
IOMUX_PIN(HKADC_SSI_SOPHIA_CLGH_VA, "HKADC_SSI", FUNC0, PULLDOWN, LEVEL0, &iomg050_sophia_clgh_va, &iocg050_sophia_clgh_va)
IOMUX_PIN(AUX_SSI0_SOPHIA_CLGH_VA, "AUX_SSI0", FUNC0, PULLDOWN, LEVEL0, &iomg051_sophia_clgh_va, &iocg051_sophia_clgh_va)
IOMUX_PIN(AUX_SSI1_SOPHIA_CLGH_VA, "AUX_SSI1", FUNC0, PULLDOWN, LEVEL0, &iomg052_sophia_clgh_va, &iocg052_sophia_clgh_va)
IOMUX_PIN(GPIO_5_0_SOPHIA_CLGH_VA, "GPIO_5_0", FUNC2, NOPULL, LEVEL0, &iomg096_sophia_clgh_va, &iocg189_sophia_clgh_va)
IOMUX_PIN(UART0_RXD_SOPHIA_CLGH_VA, "UART0_RXD", FUNC0, NOPULL, LEVEL0, &iomg053_sophia_clgh_va, &iocg053_sophia_clgh_va)
IOMUX_PIN(UART0_TXD_SOPHIA_CLGH_VA, "UART0_TXD", FUNC0, NOPULL, LEVEL0, &iomg054_sophia_clgh_va, &iocg054_sophia_clgh_va)
IOMUX_PIN(RF_RESET1_SOPHIA_CLGH_VA, "RF_RESET1", FUNC4, NOPULL, LEVEL0, &iomg147_sophia_clgh_va, &iocg147_sophia_clgh_va)
IOMUX_PIN(GPIO_5_3_SOPHIA_CLGH_VA, "GPIO_5_3", FUNC0, NOPULL, LEVEL0, &iomg099_sophia_clgh_va, &iocg099_sophia_clgh_va)
IOMUX_PIN(GPIO_4_0_SOPHIA_CLGH_VA, "GPIO_4_0", FUNC0, NOPULL, LEVEL0, &iomg128_sophia_clgh_va, &iocg128_sophia_clgh_va)
IOMUX_PIN(GPIO_4_1_SOPHIA_CLGH_VA, "GPIO_4_1", FUNC0, NOPULL, LEVEL0, &iomg129_sophia_clgh_va, &iocg129_sophia_clgh_va)
IOMUX_PIN(UART2_RTS_N_SOPHIA_CLGH_VA, "UART2_RTS_N", FUNC4, NOPULL, LEVEL0, &iomg060_sophia_clgh_va, &iocg060_sophia_clgh_va)
IOMUX_PIN(RF_MIPI_CLK0_SOPHIA_CLGH_VA, "RF_MIPI_CLK0", FUNC0, NOPULL, LEVEL0, &iomg154_sophia_clgh_va, &iocg154_sophia_clgh_va)
IOMUX_PIN(RF_MIPI_DATA0_SOPHIA_CLGH_VA, "RF_MIPI_DATA0", FUNC0, PULLDOWN, LEVEL0, &iomg155_sophia_clgh_va, &iocg155_sophia_clgh_va)
IOMUX_PIN(APT_PDM0_SOPHIA_CLGH_VA, "APT_PDM0", FUNC0, NOPULL, LEVEL0, &iomg089_sophia_clgh_va, &iocg190_sophia_clgh_va)
IOMUX_PIN(GPIO_7_5_SOPHIA_CLGH_VA, "GPIO_7_5", FUNC0, PULLDOWN, LEVEL0, &iomg117_sophia_clgh_va, &iocg117_sophia_clgh_va)
IOMUX_PIN(RF_TX_EN1_SOPHIA_CLGH_VA, "RF_TX_EN1", FUNC4, NOPULL, LEVEL0, &iomg153_sophia_clgh_va, &iocg153_sophia_clgh_va)
IOMUX_PIN(RF_TCVR_ON0_SOPHIA_CLGH_VA, "RF_TCVR_ON0", FUNC0, NOPULL, LEVEL0, &iomg150_sophia_clgh_va, &iocg150_sophia_clgh_va)
IOMUX_PIN(RF_TCVR_ON1_SOPHIA_CLGH_VA, "RF_TCVR_ON1", FUNC0, NOPULL, LEVEL0, &iomg151_sophia_clgh_va, &iocg151_sophia_clgh_va)
IOMUX_PIN(RF_SSI0_SOPHIA_CLGH_VA, "RF_SSI0", FUNC0, PULLDOWN, LEVEL0, &iomg148_sophia_clgh_va, &iocg148_sophia_clgh_va)
IOMUX_PIN(RF_SSI1_SOPHIA_CLGH_VA, "RF_SSI1", FUNC0, PULLDOWN, LEVEL0, &iomg149_sophia_clgh_va, &iocg149_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_2_SOPHIA_CLGH_VA, "RF_GPIO_2", FUNC0, NOPULL, LEVEL0, &iomg160_sophia_clgh_va, &iocg160_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_3_SOPHIA_CLGH_VA, "RF_GPIO_3", FUNC0, NOPULL, LEVEL0, &iomg161_sophia_clgh_va, &iocg161_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_4_SOPHIA_CLGH_VA, "RF_GPIO_4", FUNC0, NOPULL, LEVEL0, &iomg162_sophia_clgh_va, &iocg162_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_5_SOPHIA_CLGH_VA, "RF_GPIO_5", FUNC0, NOPULL, LEVEL0, &iomg163_sophia_clgh_va, &iocg163_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_6_SOPHIA_CLGH_VA, "RF_GPIO_6", FUNC0, NOPULL, LEVEL0, &iomg164_sophia_clgh_va, &iocg164_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_7_SOPHIA_CLGH_VA, "RF_GPIO_7", FUNC0, NOPULL, LEVEL0, &iomg165_sophia_clgh_va, &iocg165_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_13_SOPHIA_CLGH_VA, "RF_GPIO_13", FUNC0, NOPULL, LEVEL0, &iomg171_sophia_clgh_va, &iocg171_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_14_SOPHIA_CLGH_VA, "RF_GPIO_14", FUNC0, NOPULL, LEVEL0, &iomg172_sophia_clgh_va, &iocg172_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_15_SOPHIA_CLGH_VA, "RF_GPIO_15", FUNC0, NOPULL, LEVEL0, &iomg173_sophia_clgh_va, &iocg173_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_16_SOPHIA_CLGH_VA, "RF_GPIO_16", FUNC0, NOPULL, LEVEL0, &iomg174_sophia_clgh_va, &iocg184_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_17_SOPHIA_CLGH_VA, "RF_GPIO_17", FUNC0, NOPULL, LEVEL0, &iomg175_sophia_clgh_va, &iocg185_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_18_SOPHIA_CLGH_VA, "RF_GPIO_18", FUNC0, NOPULL, LEVEL0, &iomg176_sophia_clgh_va, &iocg186_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_23_SOPHIA_CLGH_VA, "RF_GPIO_23", FUNC0, NOPULL, LEVEL0, &iomg181_sophia_clgh_va, &iocg176_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_24_SOPHIA_CLGH_VA, "RF_GPIO_24", FUNC0, NOPULL, LEVEL0, &iomg182_sophia_clgh_va, &iocg177_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_26_SOPHIA_CLGH_VA, "RF_GPIO_26", FUNC0, NOPULL, LEVEL0, &iomg184_sophia_clgh_va, &iocg179_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_27_SOPHIA_CLGH_VA, "RF_GPIO_27", FUNC0, NOPULL, LEVEL0, &iomg185_sophia_clgh_va, &iocg180_sophia_clgh_va)
IOMUX_PIN(RF_GPIO_28_SOPHIA_CLGH_VA, "RF_GPIO_28", FUNC0, NOPULL, LEVEL0, &iomg186_sophia_clgh_va, &iocg181_sophia_clgh_va)
IOMUX_PIN(SD_CLK_SOPHIA_CLGH_VA, "SD_CLK", FUNC1, NOPULL, LEVEL1, &iomg001_sophia_clgh_va, &iocg001_sophia_clgh_va)
IOMUX_PIN(SD_CMD_SOPHIA_CLGH_VA, "SD_CMD", FUNC1, NOPULL, LEVEL0, &iomg002_sophia_clgh_va, &iocg002_sophia_clgh_va)
IOMUX_PIN(SD_DATA0_SOPHIA_CLGH_VA, "SD_DATA0", FUNC1, NOPULL, LEVEL0, &iomg003_sophia_clgh_va, &iocg003_sophia_clgh_va)
IOMUX_PIN(SD_DATA1_SOPHIA_CLGH_VA, "SD_DATA1", FUNC1, NOPULL, LEVEL0, &iomg004_sophia_clgh_va, &iocg004_sophia_clgh_va)
IOMUX_PIN(SD_DATA2_SOPHIA_CLGH_VA, "SD_DATA2", FUNC1, NOPULL, LEVEL0, &iomg005_sophia_clgh_va, &iocg005_sophia_clgh_va)
IOMUX_PIN(SD_DATA3_SOPHIA_CLGH_VA, "SD_DATA3", FUNC1, NOPULL, LEVEL0, &iomg006_sophia_clgh_va, &iocg006_sophia_clgh_va)
IOMUX_PIN(TS_CLK_SOPHIA_CLGH_VA, "TS_CLK", FUNC2, NOPULL, LEVEL0, &iomg038_sophia_clgh_va, &iocg038_sophia_clgh_va)
IOMUX_PIN(TS_DATA_SOPHIA_CLGH_VA, "TS_DATA", FUNC2, NOPULL, LEVEL0, &iomg039_sophia_clgh_va, &iocg039_sophia_clgh_va)
IOMUX_PIN(TS_SYNC_SOPHIA_CLGH_VA, "TS_SYNC", FUNC1, NOPULL, LEVEL0, &iomg040_sophia_clgh_va, &iocg040_sophia_clgh_va)
IOMUX_PIN(TS_VALID_SOPHIA_CLGH_VA, "TS_VALID", FUNC2, NOPULL, LEVEL0, &iomg041_sophia_clgh_va, &iocg041_sophia_clgh_va)
IOMUX_PIN(GPIO_7_6_SOPHIA_CLGH_VA, "GPIO_7_6", FUNC0, NOPULL, LEVEL0, &iomg118_sophia_clgh_va, &iocg118_sophia_clgh_va)


/*pin table*/
static struct iomux_pin_table pin_config_table_sophia_clgh_va[] = {
    PIN_TABLE("i2c0_scl", &I2C0_SCL_SOPHIA_CLGH_VA),
    PIN_TABLE("i2c0_sda", &I2C0_SDA_SOPHIA_CLGH_VA),
    PIN_TABLE("i2c1_scl", &I2C1_SCL_SOPHIA_CLGH_VA),
    PIN_TABLE("i2c1_sda", &I2C1_SDA_SOPHIA_CLGH_VA),
    PIN_TABLE("i2c2_scl", &I2C2_SCL_SOPHIA_CLGH_VA),
    PIN_TABLE("i2c2_sda", &I2C2_SDA_SOPHIA_CLGH_VA),
    PIN_TABLE("i2c3_scl", &I2C3_SCL_SOPHIA_CLGH_VA),
    PIN_TABLE("i2c3_sda", &I2C3_SDA_SOPHIA_CLGH_VA),
    PIN_TABLE("mcamera_mcam_dcdc_en", &ISP_GPIO0_SOPHIA_CLGH_VA),
    PIN_TABLE("mcamera_mcam_vcm_pwdn", &ISP_GPIO2_SOPHIA_CLGH_VA),
    PIN_TABLE("mcamera_mcam_id", &ISP_GPIO3_SOPHIA_CLGH_VA),
    PIN_TABLE("mcamera_mcam_reset", &ISP_RESETB0_SOPHIA_CLGH_VA),
    PIN_TABLE("mcamera_isp_mclk", &ISP_CCLK0_SOPHIA_CLGH_VA),
    PIN_TABLE("mcamera_isp_sda0", &ISP_SDA0_SOPHIA_CLGH_VA),
    PIN_TABLE("mcamera_isp_scl0", &ISP_SCL0_SOPHIA_CLGH_VA),
    PIN_TABLE("scamera_scam_pwdn", &ISP_GPIO1_SOPHIA_CLGH_VA),
    PIN_TABLE("scamera_scam_id", &ISP_GPIO4_SOPHIA_CLGH_VA),
    PIN_TABLE("scamera_scam_reset", &ISP_RESETB1_SOPHIA_CLGH_VA),
    PIN_TABLE("scamera_isp_mclk", &ISP_CCLK1_SOPHIA_CLGH_VA),
    PIN_TABLE("scamera_isp_sda1", &ISP_SDA1_SOPHIA_CLGH_VA),
    PIN_TABLE("scamera_isp_scl1", &ISP_SCL1_SOPHIA_CLGH_VA),
    PIN_TABLE("flash_strobe", &ISP_GPIO5_SOPHIA_CLGH_VA),
    PIN_TABLE("flash_mask", &RF_GPIO_20_SOPHIA_CLGH_VA),
    PIN_TABLE("key_up", &GPIO_4_2_SOPHIA_CLGH_VA),
    PIN_TABLE("lcd_enn", &PWM_OUT1_SOPHIA_CLGH_VA),
    PIN_TABLE("lcd_rst_n", &GPIO_4_6_SOPHIA_CLGH_VA),
    PIN_TABLE("lcd_te0", &GPIO_4_7_SOPHIA_CLGH_VA),
    PIN_TABLE("lcd_enp", &GPIO_6_6_SOPHIA_CLGH_VA),
    PIN_TABLE("lcd_pwm_en", &PWM_OUT0_SOPHIA_CLGH_VA),
    PIN_TABLE("tp_rst_n", &GPIO_18_7_SOPHIA_CLGH_VA),
    PIN_TABLE("bt_uart4_cts_n", &UART4_CTS_N_SOPHIA_CLGH_VA),
    PIN_TABLE("bt_uart4_rts_n", &UART4_RTS_N_SOPHIA_CLGH_VA),
    PIN_TABLE("bt_uart4_rxd", &UART4_RXD_SOPHIA_CLGH_VA),
    PIN_TABLE("bt_uart4_txd", &UART4_TXD_SOPHIA_CLGH_VA),
    PIN_TABLE("bt_ap_wakeup_bt", &GPIO_15_7_SOPHIA_CLGH_VA),
    PIN_TABLE("wifi_sdio_data3", &SDIO_DATA3_SOPHIA_CLGH_VA),
    PIN_TABLE("wifi_sdio_data2", &SDIO_DATA2_SOPHIA_CLGH_VA),
    PIN_TABLE("wifi_sdio_data1", &SDIO_DATA1_SOPHIA_CLGH_VA),
    PIN_TABLE("wifi_sdio_data0", &SDIO_DATA0_SOPHIA_CLGH_VA),
    PIN_TABLE("wifi_sdio_cmd", &SDIO_CMD_SOPHIA_CLGH_VA),
    PIN_TABLE("wifi_sdio_clk", &SDIO_CLK_SOPHIA_CLGH_VA),
    PIN_TABLE("gps_en", &GPIO_6_1_SOPHIA_CLGH_VA),
    PIN_TABLE("gps_blanking", &RF_GPIO_1_SOPHIA_CLGH_VA),
    PIN_TABLE("gps_uart3_cts_n", &UART3_CTS_N_SOPHIA_CLGH_VA),
    PIN_TABLE("gps_uart3_rts_n", &UART3_RTS_N_SOPHIA_CLGH_VA),
    PIN_TABLE("gps_uart3_rxd", &UART3_RXD_SOPHIA_CLGH_VA),
    PIN_TABLE("gps_uart3_txd", &UART3_TXD_SOPHIA_CLGH_VA),
    PIN_TABLE("gps_fref_clk", &GPS_CLK_SOPHIA_CLGH_VA),
    PIN_TABLE("tcxo_afc_gul1", &TCXO0_AFC_SOPHIA_CLGH_VA),
    PIN_TABLE("tcxo_afc_g2", &TCXO1_AFC_SOPHIA_CLGH_VA),
    PIN_TABLE("usima_clk_raw", &USIM0_CLK_SOPHIA_CLGH_VA),
    PIN_TABLE("usima_data_raw", &USIM0_DATA_SOPHIA_CLGH_VA),
    PIN_TABLE("usima_rst_raw", &USIM0_RST_SOPHIA_CLGH_VA),
    PIN_TABLE("usimb_clk_raw", &USIM1_CLK_SOPHIA_CLGH_VA),
    PIN_TABLE("usimb_data_raw", &USIM1_DATA_SOPHIA_CLGH_VA),
    PIN_TABLE("usimb_rst_raw", &USIM1_RST_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_clk", &EMMC_CLK_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_cmd", &EMMC_CMD_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_data0", &EMMC_DATA0_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_data1", &EMMC_DATA1_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_data2", &EMMC_DATA2_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_data3", &EMMC_DATA3_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_data4", &EMMC_DATA4_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_data5", &EMMC_DATA5_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_data6", &EMMC_DATA6_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_data7", &EMMC_DATA7_SOPHIA_CLGH_VA),
    PIN_TABLE("emmc_rst_n", &GPIO_2_3_SOPHIA_CLGH_VA),
    PIN_TABLE("boot_sel", &BOOT_SEL_SOPHIA_CLGH_VA),
    PIN_TABLE("boot_jtag_sel1", &GPIO_5_2_SOPHIA_CLGH_VA),
    PIN_TABLE("codec_pa_i2s_xclk", &PCM1_XCLK_SOPHIA_CLGH_VA),
    PIN_TABLE("codec_pa_i2s_sync", &PCM1_XFS_SOPHIA_CLGH_VA),
    PIN_TABLE("codec_pa_soc_i2s_do", &PCM1_DI_SOPHIA_CLGH_VA),
    PIN_TABLE("codec_pcm1_do", &PCM1_DO_SOPHIA_CLGH_VA),
    PIN_TABLE("es305_i2s_xclk", &I2S_XCLK_SOPHIA_CLGH_VA),
    PIN_TABLE("es305_i2s_xfs", &I2S_XFS_SOPHIA_CLGH_VA),
    PIN_TABLE("es305_i2s_di", &I2S_DI_SOPHIA_CLGH_VA),
    PIN_TABLE("es305_i2s_do", &I2S_DO_SOPHIA_CLGH_VA),
    PIN_TABLE("es305_pcm0_xclk", &PCM0_XCLK_SOPHIA_CLGH_VA),
    PIN_TABLE("es305_pcm0_xfs", &PCM0_XFS_SOPHIA_CLGH_VA),
    PIN_TABLE("es305_pcm0_di", &PCM0_DI_SOPHIA_CLGH_VA),
    PIN_TABLE("es305_pcm0_do", &PCM0_DO_SOPHIA_CLGH_VA),
    PIN_TABLE("soc_audience_uart2_rxd", &UART2_RXD_SOPHIA_CLGH_VA),
    PIN_TABLE("soc_audience_uart2_txd", &UART2_TXD_SOPHIA_CLGH_VA),
    PIN_TABLE("pmu_hkadc_ssi", &HKADC_SSI_SOPHIA_CLGH_VA),
    PIN_TABLE("pmu_aux_ssi0", &AUX_SSI0_SOPHIA_CLGH_VA),
    PIN_TABLE("pmu_aux_ssi1", &AUX_SSI1_SOPHIA_CLGH_VA),
    PIN_TABLE("pmu_auxdac_en", &GPIO_5_0_SOPHIA_CLGH_VA),
    PIN_TABLE("test_uart0_rxd", &UART0_RXD_SOPHIA_CLGH_VA),
    PIN_TABLE("test_uart0_txd", &UART0_TXD_SOPHIA_CLGH_VA),
    PIN_TABLE("odt_gpio_9_6", &RF_RESET1_SOPHIA_CLGH_VA),
    PIN_TABLE("switch_usb_sw_sel0", &GPIO_5_3_SOPHIA_CLGH_VA),
    PIN_TABLE("charger_cd", &GPIO_4_0_SOPHIA_CLGH_VA),
    PIN_TABLE("charger_otg", &GPIO_4_1_SOPHIA_CLGH_VA),
    PIN_TABLE("charge_state", &UART2_RTS_N_SOPHIA_CLGH_VA),
    PIN_TABLE("rfpmu_mipi_clk0", &RF_MIPI_CLK0_SOPHIA_CLGH_VA),
    PIN_TABLE("rfpmu_mipi_data0", &RF_MIPI_DATA0_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_pmu_apt_pdm0", &APT_PDM0_SOPHIA_CLGH_VA),
    PIN_TABLE("rfant_det0", &GPIO_7_5_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_1p8_oe", &RF_TX_EN1_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_tcvr_on0", &RF_TCVR_ON0_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_tcvr_on1", &RF_TCVR_ON1_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_ssi0", &RF_SSI0_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_ssi1", &RF_SSI1_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_2", &RF_GPIO_2_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_3", &RF_GPIO_3_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_4", &RF_GPIO_4_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_5", &RF_GPIO_5_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_6", &RF_GPIO_6_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_7", &RF_GPIO_7_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_13", &RF_GPIO_13_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_14", &RF_GPIO_14_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_15", &RF_GPIO_15_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_16", &RF_GPIO_16_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_17", &RF_GPIO_17_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_18", &RF_GPIO_18_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_23", &RF_GPIO_23_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_24", &RF_GPIO_24_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_26", &RF_GPIO_26_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_27", &RF_GPIO_27_SOPHIA_CLGH_VA),
    PIN_TABLE("rf_gpio_28", &RF_GPIO_28_SOPHIA_CLGH_VA),
    PIN_TABLE("sd_clk", &SD_CLK_SOPHIA_CLGH_VA),
    PIN_TABLE("sd_cmd", &SD_CMD_SOPHIA_CLGH_VA),
    PIN_TABLE("sd_data0", &SD_DATA0_SOPHIA_CLGH_VA),
    PIN_TABLE("sd_data1", &SD_DATA1_SOPHIA_CLGH_VA),
    PIN_TABLE("sd_data2", &SD_DATA2_SOPHIA_CLGH_VA),
    PIN_TABLE("sd_data3", &SD_DATA3_SOPHIA_CLGH_VA),
    PIN_TABLE("spi0_di", &TS_CLK_SOPHIA_CLGH_VA),
    PIN_TABLE("spi0_do", &TS_DATA_SOPHIA_CLGH_VA),
    PIN_TABLE("gpio_14_2", &TS_SYNC_SOPHIA_CLGH_VA),
    PIN_TABLE("spi0_clk", &TS_VALID_SOPHIA_CLGH_VA),
    PIN_TABLE("switch_gpio", &GPIO_7_6_SOPHIA_CLGH_VA),
    PIN_TABLE(NULL, NULL)
};


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif