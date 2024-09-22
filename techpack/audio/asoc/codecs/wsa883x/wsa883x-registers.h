/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2015, 2019, The Linux Foundation. All rights reserved.
 */

#ifndef WSA883X_REGISTERS_H
#define WSA883X_REGISTERS_H

#define WSA883X_BASE                    0x3000
#define WSA883X_REG(reg)    (reg - WSA883X_BASE)

enum {
	REG_NO_ACCESS,
	RD_REG,
	WR_REG,
	RD_WR_REG,
};

#define WSA883X_ANA_BG_TSADC_BASE       (WSA883X_BASE+0x00000001)
#define WSA883X_REF_CTRL                (WSA883X_ANA_BG_TSADC_BASE+0x0000)
#define WSA883X_TEST_CTL_0              (WSA883X_ANA_BG_TSADC_BASE+0x0001)
#define WSA883X_BIAS_0                  (WSA883X_ANA_BG_TSADC_BASE+0x0002)
#define WSA883X_OP_CTL                  (WSA883X_ANA_BG_TSADC_BASE+0x0003)
#define WSA883X_IREF_CTL                (WSA883X_ANA_BG_TSADC_BASE+0x0004)
#define WSA883X_ISENS_CTL               (WSA883X_ANA_BG_TSADC_BASE+0x0005)
#define WSA883X_CLK_CTL                 (WSA883X_ANA_BG_TSADC_BASE+0x0006)
#define WSA883X_TEST_CTL_1              (WSA883X_ANA_BG_TSADC_BASE+0x0007)
#define WSA883X_BIAS_1                  (WSA883X_ANA_BG_TSADC_BASE+0x0008)
#define WSA883X_ADC_CTL                 (WSA883X_ANA_BG_TSADC_BASE+0x0009)
#define WSA883X_DOUT_MSB                (WSA883X_ANA_BG_TSADC_BASE+0x000A)
#define WSA883X_DOUT_LSB                (WSA883X_ANA_BG_TSADC_BASE+0x000B)
#define WSA883X_VBAT_SNS                (WSA883X_ANA_BG_TSADC_BASE+0x000C)
#define WSA883X_ITRIM_CODE              (WSA883X_ANA_BG_TSADC_BASE+0x000D)

#define WSA883X_ANA_IVSENSE_BASE        (WSA883X_BASE+0x0000000F)
#define WSA883X_EN                      (WSA883X_ANA_IVSENSE_BASE+0x0000)
#define WSA883X_OVERRIDE1               (WSA883X_ANA_IVSENSE_BASE+0x0001)
#define WSA883X_OVERRIDE2               (WSA883X_ANA_IVSENSE_BASE+0x0002)
#define WSA883X_VSENSE1                 (WSA883X_ANA_IVSENSE_BASE+0x0003)
#define WSA883X_ISENSE1                 (WSA883X_ANA_IVSENSE_BASE+0x0004)
#define WSA883X_ISENSE2                 (WSA883X_ANA_IVSENSE_BASE+0x0005)
#define WSA883X_ISENSE_CAL              (WSA883X_ANA_IVSENSE_BASE+0x0006)
#define WSA883X_MISC                    (WSA883X_ANA_IVSENSE_BASE+0x0007)
#define WSA883X_ADC_0                   (WSA883X_ANA_IVSENSE_BASE+0x0008)
#define WSA883X_ADC_1                   (WSA883X_ANA_IVSENSE_BASE+0x0009)
#define WSA883X_ADC_2                   (WSA883X_ANA_IVSENSE_BASE+0x000A)
#define WSA883X_ADC_3                   (WSA883X_ANA_IVSENSE_BASE+0x000B)
#define WSA883X_ADC_4                   (WSA883X_ANA_IVSENSE_BASE+0x000C)
#define WSA883X_ADC_5                   (WSA883X_ANA_IVSENSE_BASE+0x000D)
#define WSA883X_ADC_6                   (WSA883X_ANA_IVSENSE_BASE+0x000E)
#define WSA883X_ADC_7                   (WSA883X_ANA_IVSENSE_BASE+0x000F)
#define WSA883X_STATUS                  (WSA883X_ANA_IVSENSE_BASE+0x0010)

#define WSA883X_ANA_SPK_TOP_BASE        (WSA883X_BASE+0x00000025)
#define WSA883X_DAC_CTRL_REG            (WSA883X_ANA_SPK_TOP_BASE+0x0000)
#define WSA883X_DAC_EN_DEBUG_REG        (WSA883X_ANA_SPK_TOP_BASE+0x0001)
#define WSA883X_DAC_OPAMP_BIAS1_REG     (WSA883X_ANA_SPK_TOP_BASE+0x0002)
#define WSA883X_DAC_OPAMP_BIAS2_REG     (WSA883X_ANA_SPK_TOP_BASE+0x0003)
#define WSA883X_DAC_VCM_CTRL_REG        (WSA883X_ANA_SPK_TOP_BASE+0x0004)
#define WSA883X_DAC_VOLTAGE_CTRL_REG    (WSA883X_ANA_SPK_TOP_BASE+0x0005)
#define WSA883X_ATEST1_REG              (WSA883X_ANA_SPK_TOP_BASE+0x0006)
#define WSA883X_ATEST2_REG              (WSA883X_ANA_SPK_TOP_BASE+0x0007)
#define WSA883X_SPKR_TOP_BIAS_REG1      (WSA883X_ANA_SPK_TOP_BASE+0x0008)
#define WSA883X_SPKR_TOP_BIAS_REG2      (WSA883X_ANA_SPK_TOP_BASE+0x0009)
#define WSA883X_SPKR_TOP_BIAS_REG3      (WSA883X_ANA_SPK_TOP_BASE+0x000A)
#define WSA883X_SPKR_TOP_BIAS_REG4      (WSA883X_ANA_SPK_TOP_BASE+0x000B)
#define WSA883X_SPKR_CLIP_DET_REG       (WSA883X_ANA_SPK_TOP_BASE+0x000C)
#define WSA883X_SPKR_DRV_LF_BLK_EN      (WSA883X_ANA_SPK_TOP_BASE+0x000D)
#define WSA883X_SPKR_DRV_LF_EN          (WSA883X_ANA_SPK_TOP_BASE+0x000E)
#define WSA883X_SPKR_DRV_LF_MASK_DCC_CTL (WSA883X_ANA_SPK_TOP_BASE+0x000F)
#define WSA883X_SPKR_DRV_LF_MISC_CTL    (WSA883X_ANA_SPK_TOP_BASE+0x0010)
#define WSA883X_SPKR_DRV_LF_REG_GAIN    (WSA883X_ANA_SPK_TOP_BASE+0x0011)
#define WSA883X_SPKR_DRV_OS_CAL_CTL     (WSA883X_ANA_SPK_TOP_BASE+0x0012)
#define WSA883X_SPKR_DRV_OS_CAL_CTL1     (WSA883X_ANA_SPK_TOP_BASE+0x0013)
#define WSA883X_SPKR_PWM_CLK_CTL        (WSA883X_ANA_SPK_TOP_BASE+0x0014)
#define WSA883X_SPKR_PDRV_HS_CTL        (WSA883X_ANA_SPK_TOP_BASE+0x0015)
#define WSA883X_SPKR_PDRV_LS_CTL        (WSA883X_ANA_SPK_TOP_BASE+0x0016)
#define WSA883X_SPKR_PWRSTG_DBG         (WSA883X_ANA_SPK_TOP_BASE+0x0017)
#define WSA883X_SPKR_OCP_CTL            (WSA883X_ANA_SPK_TOP_BASE+0x0018)
#define WSA883X_SPKR_BBM_CTL            (WSA883X_ANA_SPK_TOP_BASE+0x0019)
#define WSA883X_PA_STATUS0              (WSA883X_ANA_SPK_TOP_BASE+0x001A)
#define WSA883X_PA_STATUS1              (WSA883X_ANA_SPK_TOP_BASE+0x001B)
#define WSA883X_PA_STATUS2              (WSA883X_ANA_SPK_TOP_BASE+0x001C)

#define WSA883X_ANA_BOOST_BASE          (WSA883X_BASE+0x00000043)
#define WSA883X_EN_CTRL                 (WSA883X_ANA_BOOST_BASE+0x0000)
#define WSA883X_CURRENT_LIMIT           (WSA883X_ANA_BOOST_BASE+0x0001)
#define WSA883X_IBIAS1                  (WSA883X_ANA_BOOST_BASE+0x0002)
#define WSA883X_IBIAS2                  (WSA883X_ANA_BOOST_BASE+0x0003)
#define WSA883X_IBIAS3                  (WSA883X_ANA_BOOST_BASE+0x0004)
#define WSA883X_LDO_PROG                (WSA883X_ANA_BOOST_BASE+0x0005)
#define WSA883X_STABILITY_CTRL1         (WSA883X_ANA_BOOST_BASE+0x0006)
#define WSA883X_STABILITY_CTRL2         (WSA883X_ANA_BOOST_BASE+0x0007)
#define WSA883X_PWRSTAGE_CTRL1          (WSA883X_ANA_BOOST_BASE+0x0008)
#define WSA883X_PWRSTAGE_CTRL2          (WSA883X_ANA_BOOST_BASE+0x0009)
#define WSA883X_BYPASS_1                (WSA883X_ANA_BOOST_BASE+0x000A)
#define WSA883X_BYPASS_2                (WSA883X_ANA_BOOST_BASE+0x000B)
#define WSA883X_ZX_CTRL_1               (WSA883X_ANA_BOOST_BASE+0x000C)
#define WSA883X_ZX_CTRL_2               (WSA883X_ANA_BOOST_BASE+0x000D)
#define WSA883X_MISC1                   (WSA883X_ANA_BOOST_BASE+0x000E)
#define WSA883X_MISC2                   (WSA883X_ANA_BOOST_BASE+0x000F)
#define WSA883X_GMAMP_SUP1              (WSA883X_ANA_BOOST_BASE+0x0010)
#define WSA883X_PWRSTAGE_CTRL3          (WSA883X_ANA_BOOST_BASE+0x0011)
#define WSA883X_PWRSTAGE_CTRL4          (WSA883X_ANA_BOOST_BASE+0x0012)
#define WSA883X_TEST1                   (WSA883X_ANA_BOOST_BASE+0x0013)
#define WSA883X_SPARE1                  (WSA883X_ANA_BOOST_BASE+0x0014)
#define WSA883X_SPARE2                  (WSA883X_ANA_BOOST_BASE+0x0015)

#define WSA883X_ANA_PON_LDOL_BASE       (WSA883X_BASE+0x00000059)
#define WSA883X_PON_CTL_0               (WSA883X_ANA_PON_LDOL_BASE+0x0000)
#define WSA883X_PON_CLT_1               (WSA883X_ANA_PON_LDOL_BASE+0x0001)
#define WSA883X_PON_CTL_2               (WSA883X_ANA_PON_LDOL_BASE+0x0002)
#define WSA883X_PON_CTL_3               (WSA883X_ANA_PON_LDOL_BASE+0x0003)
#define WSA883X_CKWD_CTL_0              (WSA883X_ANA_PON_LDOL_BASE+0x0004)
#define WSA883X_CKWD_CTL_1              (WSA883X_ANA_PON_LDOL_BASE+0x0005)
#define WSA883X_CKWD_CTL_2              (WSA883X_ANA_PON_LDOL_BASE+0x0006)
#define WSA883X_CKSK_CTL_0              (WSA883X_ANA_PON_LDOL_BASE+0x0007)
#define WSA883X_PADSW_CTL_0             (WSA883X_ANA_PON_LDOL_BASE+0x0008)
#define WSA883X_TEST_0                  (WSA883X_ANA_PON_LDOL_BASE+0x0009)
#define WSA883X_TEST_1                  (WSA883X_ANA_PON_LDOL_BASE+0x000A)
#define WSA883X_STATUS_0                (WSA883X_ANA_PON_LDOL_BASE+0x000B)
#define WSA883X_STATUS_1                (WSA883X_ANA_PON_LDOL_BASE+0x000C)

#define WSA883X_DIG_CTRL_BASE           (WSA883X_BASE+0x00000400)
#define WSA883X_CHIP_ID0                (WSA883X_DIG_CTRL_BASE+0x0001)
#define WSA883X_CHIP_ID1                (WSA883X_DIG_CTRL_BASE+0x0002)
#define WSA883X_CHIP_ID2                (WSA883X_DIG_CTRL_BASE+0x0003)
#define WSA883X_CHIP_ID3                (WSA883X_DIG_CTRL_BASE+0x0004)
#define WSA883X_BUS_ID                  (WSA883X_DIG_CTRL_BASE+0x0005)
#define WSA883X_CDC_RST_CTL             (WSA883X_DIG_CTRL_BASE+0x0006)
#define WSA883X_TOP_CLK_CFG             (WSA883X_DIG_CTRL_BASE+0x0007)
#define WSA883X_CDC_PATH_MODE           (WSA883X_DIG_CTRL_BASE+0x0008)
#define WSA883X_CDC_CLK_CTL             (WSA883X_DIG_CTRL_BASE+0x0009)
#define WSA883X_SWR_RESET_EN            (WSA883X_DIG_CTRL_BASE+0x000A)
#define WSA883X_RESET_CTL               (WSA883X_DIG_CTRL_BASE+0x000B)
#define WSA883X_PA_FSM_CTL              (WSA883X_DIG_CTRL_BASE+0x0010)
#define WSA883X_PA_FSM_TIMER0           (WSA883X_DIG_CTRL_BASE+0x0011)
#define WSA883X_PA_FSM_TIMER1           (WSA883X_DIG_CTRL_BASE+0x0012)
#define WSA883X_PA_FSM_STA              (WSA883X_DIG_CTRL_BASE+0x0013)
#define WSA883X_PA_FSM_ERR_COND         (WSA883X_DIG_CTRL_BASE+0x0014)
#define WSA883X_PA_FSM_MSK              (WSA883X_DIG_CTRL_BASE+0x0015)
#define WSA883X_PA_FSM_BYP              (WSA883X_DIG_CTRL_BASE+0x0016)
#define WSA883X_PA_FSM_DBG              (WSA883X_DIG_CTRL_BASE+0x0017)
#define WSA883X_TADC_VALUE_CTL          (WSA883X_DIG_CTRL_BASE+0x0020)
#define WSA883X_TEMP_DETECT_CTL         (WSA883X_DIG_CTRL_BASE+0x0021)
#define WSA883X_TEMP_MSB                (WSA883X_DIG_CTRL_BASE+0x0022)
#define WSA883X_TEMP_LSB                (WSA883X_DIG_CTRL_BASE+0x0023)
#define WSA883X_TEMP_CONFIG0            (WSA883X_DIG_CTRL_BASE+0x0024)
#define WSA883X_TEMP_CONFIG1            (WSA883X_DIG_CTRL_BASE+0x0025)
#define WSA883X_VBAT_ADC_FLT_CTL        (WSA883X_DIG_CTRL_BASE+0x0026)
#define WSA883X_VBAT_DIN_MSB            (WSA883X_DIG_CTRL_BASE+0x0027)
#define WSA883X_VBAT_DIN_LSB            (WSA883X_DIG_CTRL_BASE+0x0028)
#define WSA883X_VBAT_DOUT               (WSA883X_DIG_CTRL_BASE+0x0029)
#define WSA883X_SDM_PDM9_LSB            (WSA883X_DIG_CTRL_BASE+0x002A)
#define WSA883X_SDM_PDM9_MSB            (WSA883X_DIG_CTRL_BASE+0x002B)
#define WSA883X_CDC_RX_CTL              (WSA883X_DIG_CTRL_BASE+0x0030)
#define WSA883X_CDC_SPK_DSM_A1_0        (WSA883X_DIG_CTRL_BASE+0x0031)
#define WSA883X_CDC_SPK_DSM_A1_1        (WSA883X_DIG_CTRL_BASE+0x0032)
#define WSA883X_CDC_SPK_DSM_A2_0        (WSA883X_DIG_CTRL_BASE+0x0033)
#define WSA883X_CDC_SPK_DSM_A2_1        (WSA883X_DIG_CTRL_BASE+0x0034)
#define WSA883X_CDC_SPK_DSM_A3_0        (WSA883X_DIG_CTRL_BASE+0x0035)
#define WSA883X_CDC_SPK_DSM_A3_1        (WSA883X_DIG_CTRL_BASE+0x0036)
#define WSA883X_CDC_SPK_DSM_A4_0        (WSA883X_DIG_CTRL_BASE+0x0037)
#define WSA883X_CDC_SPK_DSM_A4_1        (WSA883X_DIG_CTRL_BASE+0x0038)
#define WSA883X_CDC_SPK_DSM_A5_0        (WSA883X_DIG_CTRL_BASE+0x0039)
#define WSA883X_CDC_SPK_DSM_A5_1        (WSA883X_DIG_CTRL_BASE+0x003A)
#define WSA883X_CDC_SPK_DSM_A6_0        (WSA883X_DIG_CTRL_BASE+0x003B)
#define WSA883X_CDC_SPK_DSM_A7_0        (WSA883X_DIG_CTRL_BASE+0x003C)
#define WSA883X_CDC_SPK_DSM_C_0         (WSA883X_DIG_CTRL_BASE+0x003D)
#define WSA883X_CDC_SPK_DSM_C_1         (WSA883X_DIG_CTRL_BASE+0x003E)
#define WSA883X_CDC_SPK_DSM_C_2         (WSA883X_DIG_CTRL_BASE+0x003F)
#define WSA883X_CDC_SPK_DSM_C_3         (WSA883X_DIG_CTRL_BASE+0x0040)
#define WSA883X_CDC_SPK_DSM_R1          (WSA883X_DIG_CTRL_BASE+0x0041)
#define WSA883X_CDC_SPK_DSM_R2          (WSA883X_DIG_CTRL_BASE+0x0042)
#define WSA883X_CDC_SPK_DSM_R3          (WSA883X_DIG_CTRL_BASE+0x0043)
#define WSA883X_CDC_SPK_DSM_R4          (WSA883X_DIG_CTRL_BASE+0x0044)
#define WSA883X_CDC_SPK_DSM_R5          (WSA883X_DIG_CTRL_BASE+0x0045)
#define WSA883X_CDC_SPK_DSM_R6          (WSA883X_DIG_CTRL_BASE+0x0046)
#define WSA883X_CDC_SPK_DSM_R7          (WSA883X_DIG_CTRL_BASE+0x0047)
#define WSA883X_CDC_SPK_GAIN_PDM_0      (WSA883X_DIG_CTRL_BASE+0x0048)
#define WSA883X_CDC_SPK_GAIN_PDM_1      (WSA883X_DIG_CTRL_BASE+0x0049)
#define WSA883X_CDC_SPK_GAIN_PDM_2      (WSA883X_DIG_CTRL_BASE+0x004A)
#define WSA883X_PDM_WD_CTL              (WSA883X_DIG_CTRL_BASE+0x004B)
#define WSA883X_DEM_BYPASS_DATA0        (WSA883X_DIG_CTRL_BASE+0x004C)
#define WSA883X_DEM_BYPASS_DATA1        (WSA883X_DIG_CTRL_BASE+0x004D)
#define WSA883X_DEM_BYPASS_DATA2        (WSA883X_DIG_CTRL_BASE+0x004E)
#define WSA883X_DEM_BYPASS_DATA3        (WSA883X_DIG_CTRL_BASE+0x004F)
#define WSA883X_WAVG_CTL                (WSA883X_DIG_CTRL_BASE+0x0050)
#define WSA883X_WAVG_LRA_PER_0          (WSA883X_DIG_CTRL_BASE+0x0051)
#define WSA883X_WAVG_LRA_PER_1          (WSA883X_DIG_CTRL_BASE+0x0052)
#define WSA883X_WAVG_DELTA_THETA_0      (WSA883X_DIG_CTRL_BASE+0x0053)
#define WSA883X_WAVG_DELTA_THETA_1      (WSA883X_DIG_CTRL_BASE+0x0054)
#define WSA883X_WAVG_DIRECT_AMP_0       (WSA883X_DIG_CTRL_BASE+0x0055)
#define WSA883X_WAVG_DIRECT_AMP_1       (WSA883X_DIG_CTRL_BASE+0x0056)
#define WSA883X_WAVG_PTRN_AMP0_0        (WSA883X_DIG_CTRL_BASE+0x0057)
#define WSA883X_WAVG_PTRN_AMP0_1        (WSA883X_DIG_CTRL_BASE+0x0058)
#define WSA883X_WAVG_PTRN_AMP1_0        (WSA883X_DIG_CTRL_BASE+0x0059)
#define WSA883X_WAVG_PTRN_AMP1_1        (WSA883X_DIG_CTRL_BASE+0x005A)
#define WSA883X_WAVG_PTRN_AMP2_0        (WSA883X_DIG_CTRL_BASE+0x005B)
#define WSA883X_WAVG_PTRN_AMP2_1        (WSA883X_DIG_CTRL_BASE+0x005C)
#define WSA883X_WAVG_PTRN_AMP3_0        (WSA883X_DIG_CTRL_BASE+0x005D)
#define WSA883X_WAVG_PTRN_AMP3_1        (WSA883X_DIG_CTRL_BASE+0x005E)
#define WSA883X_WAVG_PTRN_AMP4_0        (WSA883X_DIG_CTRL_BASE+0x005F)
#define WSA883X_WAVG_PTRN_AMP4_1        (WSA883X_DIG_CTRL_BASE+0x0060)
#define WSA883X_WAVG_PTRN_AMP5_0        (WSA883X_DIG_CTRL_BASE+0x0061)
#define WSA883X_WAVG_PTRN_AMP5_1        (WSA883X_DIG_CTRL_BASE+0x0062)
#define WSA883X_WAVG_PTRN_AMP6_0        (WSA883X_DIG_CTRL_BASE+0x0063)
#define WSA883X_WAVG_PTRN_AMP6_1        (WSA883X_DIG_CTRL_BASE+0x0064)
#define WSA883X_WAVG_PTRN_AMP7_0        (WSA883X_DIG_CTRL_BASE+0x0065)
#define WSA883X_WAVG_PTRN_AMP7_1        (WSA883X_DIG_CTRL_BASE+0x0066)
#define WSA883X_WAVG_PER_0_1            (WSA883X_DIG_CTRL_BASE+0x0067)
#define WSA883X_WAVG_PER_2_3            (WSA883X_DIG_CTRL_BASE+0x0068)
#define WSA883X_WAVG_PER_4_5            (WSA883X_DIG_CTRL_BASE+0x0069)
#define WSA883X_WAVG_PER_6_7            (WSA883X_DIG_CTRL_BASE+0x006A)
#define WSA883X_WAVG_STA                (WSA883X_DIG_CTRL_BASE+0x006B)
#define WSA883X_DRE_CTL_0               (WSA883X_DIG_CTRL_BASE+0x006C)
#define WSA883X_DRE_CTL_1               (WSA883X_DIG_CTRL_BASE+0x006D)
#define WSA883X_DRE_IDLE_DET_CTL        (WSA883X_DIG_CTRL_BASE+0x006E)
#define WSA883X_CLSH_CTL_0              (WSA883X_DIG_CTRL_BASE+0x0070)
#define WSA883X_CLSH_CTL_1              (WSA883X_DIG_CTRL_BASE+0x0071)
#define WSA883X_CLSH_V_HD_PA            (WSA883X_DIG_CTRL_BASE+0x0072)
#define WSA883X_CLSH_V_PA_MIN           (WSA883X_DIG_CTRL_BASE+0x0073)
#define WSA883X_CLSH_OVRD_VAL           (WSA883X_DIG_CTRL_BASE+0x0074)
#define WSA883X_CLSH_HARD_MAX           (WSA883X_DIG_CTRL_BASE+0x0075)
#define WSA883X_CLSH_SOFT_MAX           (WSA883X_DIG_CTRL_BASE+0x0076)
#define WSA883X_CLSH_SIG_DP             (WSA883X_DIG_CTRL_BASE+0x0077)
#define WSA883X_TAGC_CTL                (WSA883X_DIG_CTRL_BASE+0x0078)
#define WSA883X_TAGC_TIME               (WSA883X_DIG_CTRL_BASE+0x0079)
#define WSA883X_TAGC_E2E_GAIN           (WSA883X_DIG_CTRL_BASE+0x007A)
#define WSA883X_TAGC_FORCE_VAL          (WSA883X_DIG_CTRL_BASE+0x007B)
#define WSA883X_VAGC_CTL                (WSA883X_DIG_CTRL_BASE+0x007C)
#define WSA883X_VAGC_TIME               (WSA883X_DIG_CTRL_BASE+0x007D)
#define WSA883X_VAGC_ATTN_LVL_1_2       (WSA883X_DIG_CTRL_BASE+0x007E)
#define WSA883X_VAGC_ATTN_LVL_3         (WSA883X_DIG_CTRL_BASE+0x007F)
#define WSA883X_INTR_MODE               (WSA883X_DIG_CTRL_BASE+0x0080)
#define WSA883X_INTR_MASK0              (WSA883X_DIG_CTRL_BASE+0x0081)
#define WSA883X_INTR_MASK1              (WSA883X_DIG_CTRL_BASE+0x0082)
#define WSA883X_INTR_STATUS0            (WSA883X_DIG_CTRL_BASE+0x0083)
#define WSA883X_INTR_STATUS1            (WSA883X_DIG_CTRL_BASE+0x0084)
#define WSA883X_INTR_CLEAR0             (WSA883X_DIG_CTRL_BASE+0x0085)
#define WSA883X_INTR_CLEAR1             (WSA883X_DIG_CTRL_BASE+0x0086)
#define WSA883X_INTR_LEVEL0             (WSA883X_DIG_CTRL_BASE+0x0087)
#define WSA883X_INTR_LEVEL1             (WSA883X_DIG_CTRL_BASE+0x0088)
#define WSA883X_INTR_SET0               (WSA883X_DIG_CTRL_BASE+0x0089)
#define WSA883X_INTR_SET1               (WSA883X_DIG_CTRL_BASE+0x008A)
#define WSA883X_INTR_TEST0              (WSA883X_DIG_CTRL_BASE+0x008B)
#define WSA883X_INTR_TEST1              (WSA883X_DIG_CTRL_BASE+0x008C)
#define WSA883X_OTP_CTRL0               (WSA883X_DIG_CTRL_BASE+0x0090)
#define WSA883X_OTP_CTRL1               (WSA883X_DIG_CTRL_BASE+0x0091)
#define WSA883X_HDRIVE_CTL_GROUP1       (WSA883X_DIG_CTRL_BASE+0x0092)
#define WSA883X_PIN_CTL                 (WSA883X_DIG_CTRL_BASE+0x0093)
#define WSA883X_PIN_CTL_OE              (WSA883X_DIG_CTRL_BASE+0x0094)
#define WSA883X_PIN_WDATA_IOPAD         (WSA883X_DIG_CTRL_BASE+0x0095)
#define WSA883X_PIN_STATUS              (WSA883X_DIG_CTRL_BASE+0x0096)
#define WSA883X_I2C_SLAVE_CTL           (WSA883X_DIG_CTRL_BASE+0x0097)
#define WSA883X_PDM_TEST_MODE           (WSA883X_DIG_CTRL_BASE+0x00A0)
#define WSA883X_ATE_TEST_MODE           (WSA883X_DIG_CTRL_BASE+0x00A1)
#define WSA883X_DIG_DEBUG_MODE          (WSA883X_DIG_CTRL_BASE+0x00A3)
#define WSA883X_DIG_DEBUG_SEL           (WSA883X_DIG_CTRL_BASE+0x00A4)
#define WSA883X_DIG_DEBUG_EN            (WSA883X_DIG_CTRL_BASE+0x00A5)
#define WSA883X_SWR_HM_TEST0            (WSA883X_DIG_CTRL_BASE+0x00A6)
#define WSA883X_SWR_HM_TEST1            (WSA883X_DIG_CTRL_BASE+0x00A7)
#define WSA883X_SWR_PAD_CTL             (WSA883X_DIG_CTRL_BASE+0x00A8)
#define WSA883X_TADC_DETECT_DBG_CTL     (WSA883X_DIG_CTRL_BASE+0x00A9)
#define WSA883X_TADC_DEBUG_MSB          (WSA883X_DIG_CTRL_BASE+0x00AA)
#define WSA883X_TADC_DEBUG_LSB          (WSA883X_DIG_CTRL_BASE+0x00AB)
#define WSA883X_SAMPLE_EDGE_SEL         (WSA883X_DIG_CTRL_BASE+0x00AC)
#define WSA883X_SWR_EDGE_SEL            (WSA883X_DIG_CTRL_BASE+0x00AD)
#define WSA883X_TEST_MODE_CTL           (WSA883X_DIG_CTRL_BASE+0x00AE)
#define WSA883X_IOPAD_CTL               (WSA883X_DIG_CTRL_BASE+0x00AF)
#define WSA883X_ANA_CSR_DBG_ADD         (WSA883X_DIG_CTRL_BASE+0x00B0)
#define WSA883X_ANA_CSR_DBG_CTL         (WSA883X_DIG_CTRL_BASE+0x00B1)
#define WSA883X_SPARE_R                 (WSA883X_DIG_CTRL_BASE+0x00BC)
#define WSA883X_SPARE_0                 (WSA883X_DIG_CTRL_BASE+0x00BD)
#define WSA883X_SPARE_1                 (WSA883X_DIG_CTRL_BASE+0x00BE)
#define WSA883X_SPARE_2                 (WSA883X_DIG_CTRL_BASE+0x00BF)
#define WSA883X_SCODE                   (WSA883X_DIG_CTRL_BASE+0x00C0)

#define WSA883X_DIG_TRIM_BASE           (WSA883X_BASE+0x00000500)
#define WSA883X_OTP_REG_0               (WSA883X_DIG_TRIM_BASE+0x0080)
#define WSA883X_OTP_REG_1               (WSA883X_DIG_TRIM_BASE+0x0081)
#define WSA883X_OTP_REG_2               (WSA883X_DIG_TRIM_BASE+0x0082)
#define WSA883X_OTP_REG_3               (WSA883X_DIG_TRIM_BASE+0x0083)
#define WSA883X_OTP_REG_4               (WSA883X_DIG_TRIM_BASE+0x0084)
#define WSA883X_OTP_REG_5               (WSA883X_DIG_TRIM_BASE+0x0085)
#define WSA883X_OTP_REG_6               (WSA883X_DIG_TRIM_BASE+0x0086)
#define WSA883X_OTP_REG_7               (WSA883X_DIG_TRIM_BASE+0x0087)
#define WSA883X_OTP_REG_8               (WSA883X_DIG_TRIM_BASE+0x0088)
#define WSA883X_OTP_REG_9               (WSA883X_DIG_TRIM_BASE+0x0089)
#define WSA883X_OTP_REG_10              (WSA883X_DIG_TRIM_BASE+0x008A)
#define WSA883X_OTP_REG_11              (WSA883X_DIG_TRIM_BASE+0x008B)
#define WSA883X_OTP_REG_12              (WSA883X_DIG_TRIM_BASE+0x008C)
#define WSA883X_OTP_REG_13              (WSA883X_DIG_TRIM_BASE+0x008D)
#define WSA883X_OTP_REG_14              (WSA883X_DIG_TRIM_BASE+0x008E)
#define WSA883X_OTP_REG_15              (WSA883X_DIG_TRIM_BASE+0x008F)
#define WSA883X_OTP_REG_16              (WSA883X_DIG_TRIM_BASE+0x0090)
#define WSA883X_OTP_REG_17              (WSA883X_DIG_TRIM_BASE+0x0091)
#define WSA883X_OTP_REG_18              (WSA883X_DIG_TRIM_BASE+0x0092)
#define WSA883X_OTP_REG_19              (WSA883X_DIG_TRIM_BASE+0x0093)
#define WSA883X_OTP_REG_20              (WSA883X_DIG_TRIM_BASE+0x0094)
#define WSA883X_OTP_REG_21              (WSA883X_DIG_TRIM_BASE+0x0095)
#define WSA883X_OTP_REG_22              (WSA883X_DIG_TRIM_BASE+0x0096)
#define WSA883X_OTP_REG_23              (WSA883X_DIG_TRIM_BASE+0x0097)
#define WSA883X_OTP_REG_24              (WSA883X_DIG_TRIM_BASE+0x0098)
#define WSA883X_OTP_REG_25              (WSA883X_DIG_TRIM_BASE+0x0099)
#define WSA883X_OTP_REG_26              (WSA883X_DIG_TRIM_BASE+0x009A)
#define WSA883X_OTP_REG_27              (WSA883X_DIG_TRIM_BASE+0x009B)
#define WSA883X_OTP_REG_28              (WSA883X_DIG_TRIM_BASE+0x009C)
#define WSA883X_OTP_REG_29              (WSA883X_DIG_TRIM_BASE+0x009D)
#define WSA883X_OTP_REG_30              (WSA883X_DIG_TRIM_BASE+0x009E)
#define WSA883X_OTP_REG_31              (WSA883X_DIG_TRIM_BASE+0x009F)
#define WSA883X_OTP_REG_32              (WSA883X_DIG_TRIM_BASE+0x00A0)
#define WSA883X_OTP_REG_33              (WSA883X_DIG_TRIM_BASE+0x00A1)
#define WSA883X_OTP_REG_34              (WSA883X_DIG_TRIM_BASE+0x00A2)
#define WSA883X_OTP_REG_35              (WSA883X_DIG_TRIM_BASE+0x00A3)
#define WSA883X_OTP_REG_63              (WSA883X_DIG_TRIM_BASE+0x00BF)

#define WSA883X_DIG_EMEM_BASE           (WSA883X_BASE+0x000005C0)
#define WSA883X_EMEM_0                  (WSA883X_DIG_EMEM_BASE+0x0000)
#define WSA883X_EMEM_1                  (WSA883X_DIG_EMEM_BASE+0x0001)
#define WSA883X_EMEM_2                  (WSA883X_DIG_EMEM_BASE+0x0002)
#define WSA883X_EMEM_3                  (WSA883X_DIG_EMEM_BASE+0x0003)
#define WSA883X_EMEM_4                  (WSA883X_DIG_EMEM_BASE+0x0004)
#define WSA883X_EMEM_5                  (WSA883X_DIG_EMEM_BASE+0x0005)
#define WSA883X_EMEM_6                  (WSA883X_DIG_EMEM_BASE+0x0006)
#define WSA883X_EMEM_7                  (WSA883X_DIG_EMEM_BASE+0x0007)
#define WSA883X_EMEM_8                  (WSA883X_DIG_EMEM_BASE+0x0008)
#define WSA883X_EMEM_9                  (WSA883X_DIG_EMEM_BASE+0x0009)
#define WSA883X_EMEM_10                 (WSA883X_DIG_EMEM_BASE+0x000A)
#define WSA883X_EMEM_11                 (WSA883X_DIG_EMEM_BASE+0x000B)
#define WSA883X_EMEM_12                 (WSA883X_DIG_EMEM_BASE+0x000C)
#define WSA883X_EMEM_13                 (WSA883X_DIG_EMEM_BASE+0x000D)
#define WSA883X_EMEM_14                 (WSA883X_DIG_EMEM_BASE+0x000E)
#define WSA883X_EMEM_15                 (WSA883X_DIG_EMEM_BASE+0x000F)
#define WSA883X_EMEM_16                 (WSA883X_DIG_EMEM_BASE+0x0010)
#define WSA883X_EMEM_17                 (WSA883X_DIG_EMEM_BASE+0x0011)
#define WSA883X_EMEM_18                 (WSA883X_DIG_EMEM_BASE+0x0012)
#define WSA883X_EMEM_19                 (WSA883X_DIG_EMEM_BASE+0x0013)
#define WSA883X_EMEM_20                 (WSA883X_DIG_EMEM_BASE+0x0014)
#define WSA883X_EMEM_21                 (WSA883X_DIG_EMEM_BASE+0x0015)
#define WSA883X_EMEM_22                 (WSA883X_DIG_EMEM_BASE+0x0016)
#define WSA883X_EMEM_23                 (WSA883X_DIG_EMEM_BASE+0x0017)
#define WSA883X_EMEM_24                 (WSA883X_DIG_EMEM_BASE+0x0018)
#define WSA883X_EMEM_25                 (WSA883X_DIG_EMEM_BASE+0x0019)
#define WSA883X_EMEM_26                 (WSA883X_DIG_EMEM_BASE+0x001A)
#define WSA883X_EMEM_27                 (WSA883X_DIG_EMEM_BASE+0x001B)
#define WSA883X_EMEM_28                 (WSA883X_DIG_EMEM_BASE+0x001C)
#define WSA883X_EMEM_29                 (WSA883X_DIG_EMEM_BASE+0x001D)
#define WSA883X_EMEM_30                 (WSA883X_DIG_EMEM_BASE+0x001E)
#define WSA883X_EMEM_31                 (WSA883X_DIG_EMEM_BASE+0x001F)
#define WSA883X_EMEM_32                 (WSA883X_DIG_EMEM_BASE+0x0020)
#define WSA883X_EMEM_33                 (WSA883X_DIG_EMEM_BASE+0x0021)
#define WSA883X_EMEM_34                 (WSA883X_DIG_EMEM_BASE+0x0022)
#define WSA883X_EMEM_35                 (WSA883X_DIG_EMEM_BASE+0x0023)
#define WSA883X_EMEM_36                 (WSA883X_DIG_EMEM_BASE+0x0024)
#define WSA883X_EMEM_37                 (WSA883X_DIG_EMEM_BASE+0x0025)
#define WSA883X_EMEM_38                 (WSA883X_DIG_EMEM_BASE+0x0026)
#define WSA883X_EMEM_39                 (WSA883X_DIG_EMEM_BASE+0x0027)
#define WSA883X_EMEM_40                 (WSA883X_DIG_EMEM_BASE+0x0028)
#define WSA883X_EMEM_41                 (WSA883X_DIG_EMEM_BASE+0x0029)
#define WSA883X_EMEM_42                 (WSA883X_DIG_EMEM_BASE+0x002A)
#define WSA883X_EMEM_43                 (WSA883X_DIG_EMEM_BASE+0x002B)
#define WSA883X_EMEM_44                 (WSA883X_DIG_EMEM_BASE+0x002C)
#define WSA883X_EMEM_45                 (WSA883X_DIG_EMEM_BASE+0x002D)
#define WSA883X_EMEM_46                 (WSA883X_DIG_EMEM_BASE+0x002E)
#define WSA883X_EMEM_47                 (WSA883X_DIG_EMEM_BASE+0x002F)
#define WSA883X_EMEM_48                 (WSA883X_DIG_EMEM_BASE+0x0030)
#define WSA883X_EMEM_49                 (WSA883X_DIG_EMEM_BASE+0x0031)
#define WSA883X_EMEM_50                 (WSA883X_DIG_EMEM_BASE+0x0032)
#define WSA883X_EMEM_51                 (WSA883X_DIG_EMEM_BASE+0x0033)
#define WSA883X_EMEM_52                 (WSA883X_DIG_EMEM_BASE+0x0034)
#define WSA883X_EMEM_53                 (WSA883X_DIG_EMEM_BASE+0x0035)
#define WSA883X_EMEM_54                 (WSA883X_DIG_EMEM_BASE+0x0036)
#define WSA883X_EMEM_55                 (WSA883X_DIG_EMEM_BASE+0x0037)
#define WSA883X_EMEM_56                 (WSA883X_DIG_EMEM_BASE+0x0038)
#define WSA883X_EMEM_57                 (WSA883X_DIG_EMEM_BASE+0x0039)
#define WSA883X_EMEM_58                 (WSA883X_DIG_EMEM_BASE+0x003A)
#define WSA883X_EMEM_59                 (WSA883X_DIG_EMEM_BASE+0x003B)
#define WSA883X_EMEM_60                 (WSA883X_DIG_EMEM_BASE+0x003C)
#define WSA883X_EMEM_61                 (WSA883X_DIG_EMEM_BASE+0x003D)
#define WSA883X_EMEM_62                 (WSA883X_DIG_EMEM_BASE+0x003E)
#define WSA883X_EMEM_63                 (WSA883X_DIG_EMEM_BASE+0x003F)

#define WSA883X_NUM_REGISTERS           (WSA883X_EMEM_63+1)
#define WSA883X_MAX_REGISTER            (WSA883X_NUM_REGISTERS-1)

#endif /* WSA883X_REGISTERS_H */
