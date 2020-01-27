#ifndef __CMUCAL_VCLK_H__
#define __CMUCAL_VCLK_H__

#include "../cmucal.h"

/*=================CMUCAL version: S5E9810================================*/

enum vclk_id {
/* DVFS TYPE */
	VCLK_VDDI = DFS_VCLK_TYPE,
	VCLK_VDD_MIF,
	VCLK_VDD_G3D,
	VCLK_VDD_CAM,
	end_of_dfs_vclk,
	num_of_dfs_vclk = end_of_dfs_vclk - DFS_VCLK_TYPE,

/* SPECIAL TYPE */
	VCLK_SPL_CLK_USI_CMGP02_BLK_APM = (MASK_OF_ID & end_of_dfs_vclk) | VCLK_TYPE,
	VCLK_SPL_CLK_USI_CMGP00_BLK_APM,
	VCLK_CLK_CMGP_ADC_BLK_APM,
	VCLK_SPL_CLK_USI_CMGP03_BLK_APM,
	VCLK_SPL_CLK_USI_CMGP01_BLK_APM,
	VCLK_SPL_CLK_AUD_UAIF0_BLK_AUD,
	VCLK_SPL_CLK_AUD_UAIF2_BLK_AUD,
	VCLK_SPL_CLK_AUD_CPU_PCLKDBG_BLK_AUD,
	VCLK_SPL_CLK_AUD_UAIF1_BLK_AUD,
	VCLK_SPL_CLK_AUD_UAIF3_BLK_AUD,
	VCLK_DIV_CLK_AUD_DMIC_BLK_AUD,
	VCLK_SPL_CLK_CHUB_USI01_BLK_CHUB,
	VCLK_SPL_CLK_CHUB_USI00_BLK_CHUB,
	VCLK_MUX_CLK_CHUB_TIMER_FCLK_BLK_CHUB,
	VCLK_SPL_CLK_USI_CMGP02_BLK_CMGP,
	VCLK_SPL_CLK_USI_CMGP00_BLK_CMGP,
	VCLK_CLK_CMGP_ADC_BLK_CMGP,
	VCLK_SPL_CLK_USI_CMGP01_BLK_CMGP,
	VCLK_SPL_CLK_USI_CMGP03_BLK_CMGP,
	VCLK_CLK_FSYS0_UFS_EMBD_BLK_CMU,
	VCLK_CLK_FSYS1_MMC_CARD_BLK_CMU,
	VCLK_CLKCMU_HPM_BLK_CMU,
	VCLK_SPL_CLK_CHUB_USI01_BLK_CMU,
	VCLK_CLKCMU_CIS_CLK0_BLK_CMU,
	VCLK_CLKCMU_CIS_CLK2_BLK_CMU,
	VCLK_CLK_FSYS0_DPGTC_BLK_CMU,
	VCLK_CLK_FSYS0_USB30DRD_BLK_CMU,
	VCLK_MUX_CLKCMU_FSYS0_USBDP_DEBUG_USER_BLK_CMU,
	VCLK_CLK_FSYS1_UFS_CARD_BLK_CMU,
	VCLK_OCC_MIF_CMUREF_BLK_CMU,
	VCLK_CLK_PERIC0_USI01_USI_BLK_CMU,
	VCLK_CLK_PERIC0_USI04_USI_BLK_CMU,
	VCLK_CLK_PERIC0_USI13_USI_BLK_CMU,
	VCLK_CLK_PERIC1_I2C_CAM1_BLK_CMU,
	VCLK_CLK_PERIC1_SPI_CAM0_BLK_CMU,
	VCLK_CLK_PERIC1_USI07_USI_BLK_CMU,
	VCLK_CLK_PERIC1_USI10_USI_BLK_CMU,
	VCLK_OCC_CMU_CMUREF_BLK_CMU,
	VCLK_SPL_CLK_CHUB_USI00_BLK_CMU,
	VCLK_CLKCMU_CIS_CLK1_BLK_CMU,
	VCLK_CLKCMU_CIS_CLK3_BLK_CMU,
	VCLK_CLK_PERIC0_USI00_USI_BLK_CMU,
	VCLK_CLK_PERIC0_USI05_USI_BLK_CMU,
	VCLK_CLK_PERIC1_I2C_CAM0_BLK_CMU,
	VCLK_CLK_PERIC1_UART_BT_BLK_CMU,
	VCLK_CLK_PERIC1_USI09_USI_BLK_CMU,
	VCLK_CLK_PERIC0_UART_DBG_BLK_CMU,
	VCLK_CLK_PERIC0_USI12_USI_BLK_CMU,
	VCLK_CLK_PERIC1_I2C_CAM3_BLK_CMU,
	VCLK_CLK_PERIC1_USI11_USI_BLK_CMU,
	VCLK_CLK_PERIC0_USI02_USI_BLK_CMU,
	VCLK_CLK_PERIC1_I2C_CAM2_BLK_CMU,
	VCLK_CLK_PERIC0_USI03_USI_BLK_CMU,
	VCLK_CLK_PERIC1_USI08_USI_BLK_CMU,
	VCLK_CLK_PERIC1_USI06_USI_BLK_CMU,
	VCLK_CLK_PERIC0_USI14_USI_BLK_CMU,
	VCLK_MUX_CLK_CLUSTER0_SCLK_BLK_CPUCL0,
	VCLK_SPL_CLK_CPUCL0_CMUREF_BLK_CPUCL0,
	VCLK_CLK_CLUSTER0_ACLKP_BLK_CPUCL0,
	VCLK_DIV_CLK_CLUSTER0_PERIPHCLK_BLK_CPUCL0,
	VCLK_CLK_CLUSTER0_ACLK_BLK_CPUCL0,
	VCLK_DIV_CLK_CLUSTER1_ACLK_BLK_CPUCL1,
	VCLK_DIV_CLK_CPUCL1_PCLKDBG_BLK_CPUCL1,
	VCLK_DIV_CLK_CLUSTER1_ATCLK_BLK_CPUCL1,
	VCLK_SPL_CLK_CPUCL1_CMUREF_BLK_CPUCL1,
	VCLK_OCC_MIF_CMUREF_BLK_MIF,
	VCLK_CLK_PERIC0_UART_DBG_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI01_USI_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI03_USI_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI05_USI_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI13_USI_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI04_USI_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI02_USI_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI12_USI_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI00_USI_BLK_PERIC0,
	VCLK_CLK_PERIC0_USI14_USI_BLK_PERIC0,
	VCLK_CLK_PERIC1_I2C_CAM0_BLK_PERIC1,
	VCLK_CLK_PERIC1_I2C_CAM2_BLK_PERIC1,
	VCLK_CLK_PERIC1_SPI_CAM0_BLK_PERIC1,
	VCLK_CLK_PERIC1_USI06_USI_BLK_PERIC1,
	VCLK_CLK_PERIC1_USI08_USI_BLK_PERIC1,
	VCLK_CLK_PERIC1_USI10_USI_BLK_PERIC1,
	VCLK_CLK_PERIC1_I2C_CAM1_BLK_PERIC1,
	VCLK_CLK_PERIC1_USI07_USI_BLK_PERIC1,
	VCLK_CLK_PERIC1_UART_BT_BLK_PERIC1,
	VCLK_CLK_PERIC1_USI09_USI_BLK_PERIC1,
	VCLK_CLK_PERIC1_I2C_CAM3_BLK_PERIC1,
	VCLK_CLK_PERIC1_USI11_USI_BLK_PERIC1,
	VCLK_SPL_CLK_VTS_DMIC_IF_DIV2_BLK_VTS,
	VCLK_DIV_CLK_VTS_DMIC_BLK_VTS,
	end_of_vclk,
	num_of_vclk = end_of_vclk - ((MASK_OF_ID & end_of_dfs_vclk) | VCLK_TYPE),

/* COMMON TYPE */
	VCLK_BLK_APM = (MASK_OF_ID & end_of_vclk) | COMMON_VCLK_TYPE,
	VCLK_BLK_AUD,
	VCLK_BLK_BUSC,
	VCLK_BLK_CHUB,
	VCLK_BLK_CMGP,
	VCLK_BLK_CMU,
	VCLK_BLK_CORE,
	VCLK_BLK_CPUCL0,
	VCLK_BLK_CPUCL1,
	VCLK_BLK_DCF,
	VCLK_BLK_DCPOST,
	VCLK_BLK_DCRD,
	VCLK_BLK_DPU,
	VCLK_BLK_DSPM,
	VCLK_BLK_DSPS,
	VCLK_BLK_G2D,
	VCLK_BLK_G3D,
	VCLK_BLK_ISPHQ,
	VCLK_BLK_ISPLP,
	VCLK_BLK_ISPPRE,
	VCLK_BLK_IVA,
	VCLK_BLK_MFC,
	VCLK_BLK_MIF,
	VCLK_BLK_PERIC0,
	VCLK_BLK_PERIC1,
	VCLK_BLK_S2D,
	VCLK_BLK_VTS,
	end_of_common_vclk,
	num_of_common_vclk = end_of_common_vclk - ((MASK_OF_ID & end_of_vclk) | COMMON_VCLK_TYPE),

/* GATING TYPE */
	VCLK_APBIF_GPIO_ALIVE = (MASK_OF_ID & end_of_common_vclk) | GATE_VCLK_TYPE,
	VCLK_APBIF_PMU_ALIVE,
	VCLK_APBIF_RTC,
	VCLK_APBIF_TOP_RTC,
	VCLK_APM_CMU_APM,
	VCLK_GREBEINTEGRATION,
	VCLK_INTMEM,
	VCLK_LHM_AXI_P_APM,
	VCLK_LHM_AXI_P_APM_CHUB,
	VCLK_LHM_AXI_P_APM_CP,
	VCLK_LHM_AXI_P_APM_GNSS,
	VCLK_LHS_AXI_D_APM,
	VCLK_LHS_AXI_G_SCAN2DRAM,
	VCLK_LHS_AXI_LP_CHUB,
	VCLK_LHS_AXI_P_APM2CMGP,
	VCLK_MAILBOX_AP2CHUB,
	VCLK_MAILBOX_AP2CP,
	VCLK_MAILBOX_AP2CP_S,
	VCLK_MAILBOX_AP2GNSS,
	VCLK_MAILBOX_AP2VTS,
	VCLK_MAILBOX_APM2AP,
	VCLK_MAILBOX_APM2CHUB,
	VCLK_MAILBOX_APM2CP,
	VCLK_MAILBOX_APM2GNSS,
	VCLK_MAILBOX_CHUB2CP,
	VCLK_MAILBOX_GNSS2CHUB,
	VCLK_MAILBOX_GNSS2CP,
	VCLK_PEM,
	VCLK_PGEN_APM,
	VCLK_PMU_INTR_GEN,
	VCLK_SPEEDY_APM,
	VCLK_SPEEDY_SUB_APM,
	VCLK_SYSREG_APM,
	VCLK_WDT_APM,
	VCLK_XIU_DP_APM,
	VCLK_ABOX,
	VCLK_ABOX_DAP,
	VCLK_AD_APB_SYSMMU_AUD,
	VCLK_AXI2APB_AUD,
	VCLK_DFTMUX_AUD,
	VCLK_DMIC,
	VCLK_LHM_AXI_P_AUD,
	VCLK_LHS_ATB_AUD,
	VCLK_PERI_AXI_ASB,
	VCLK_XIU_P_AUD,
	VCLK_AXI2APB_BUS1,
	VCLK_AXI2APB_BUS1_TREX,
	VCLK_BAAW_P_CHUB,
	VCLK_BAAW_P_GNSS,
	VCLK_BUS1_CMU_BUS1,
	VCLK_LHM_AXI_D_APM,
	VCLK_LHM_AXI_D_CHUB,
	VCLK_LHM_AXI_D_GNSS,
	VCLK_LHM_AXI_G_CSSYS,
	VCLK_LHS_AXI_D_BUS1,
	VCLK_LHS_AXI_P_CHUB,
	VCLK_LHS_AXI_P_CSSYS,
	VCLK_LHS_AXI_P_GNSS,
	VCLK_SYSREG_BUS1,
	VCLK_TREX_P_BUS1,
	VCLK_XIU_D_BUS1,
	VCLK_HPM_BUSC,
	VCLK_I2C_CHUB00,
	VCLK_I2C_CHUB01,
	VCLK_USI_CHUB00,
	VCLK_USI_CHUB01,
	VCLK_ADC_CMGP,
	VCLK_AXI2APB_CMGP0,
	VCLK_AXI2APB_CMGP1,
	VCLK_CMGP_CMU_CMGP,
	VCLK_GPIO_CMGP,
	VCLK_I2C_CMGP00,
	VCLK_I2C_CMGP01,
	VCLK_I2C_CMGP02,
	VCLK_I2C_CMGP03,
	VCLK_LHM_AXI_P_APM2CMGP,
	VCLK_SYSREG_CMGP,
	VCLK_SYSREG_CMGP2CHUB,
	VCLK_SYSREG_CMGP2CP,
	VCLK_SYSREG_CMGP2GNSS,
	VCLK_SYSREG_CMGP2PMU_AP,
	VCLK_SYSREG_CMGP2PMU_CHUB,
	VCLK_USI_CMGP00,
	VCLK_USI_CMGP01,
	VCLK_USI_CMGP02,
	VCLK_USI_CMGP03,
	VCLK_XIU_P_CMGP,
	VCLK_ADM_APB_G_BDU,
	VCLK_APB_ASYNC_PPFW_DP,
	VCLK_APB_ASYNC_PPFW_G3D,
	VCLK_APB_ASYNC_PPFW_IO,
	VCLK_AXI2APB_CORE,
	VCLK_AXI2APB_CORE_TP,
	VCLK_BAAW_CP,
	VCLK_BDU,
	VCLK_BPS_P_G3D,
	VCLK_BUSIF_HPMCORE,
	VCLK_CCI,
	VCLK_CORE_CMU_CORE,
	VCLK_HPM_CORE,
	VCLK_LHS_AXI_P_APM,
	VCLK_LHS_AXI_P_CP,
	VCLK_LHS_AXI_P_CPUCL0,
	VCLK_LHS_AXI_P_CPUCL1,
	VCLK_LHS_AXI_P_G3D,
	VCLK_PPCFW_G3D,
	VCLK_PPMUPPC_CCI,
	VCLK_PPMU_CPUCL0,
	VCLK_PPMU_CPUCL1,
	VCLK_PPMU_G3D0,
	VCLK_PPMU_G3D1,
	VCLK_PPMU_G3D2,
	VCLK_PPMU_G3D3,
	VCLK_SYSREG_CORE,
	VCLK_TREX_D_CORE,
	VCLK_TREX_P0_CORE,
	VCLK_TREX_P1_CORE,
	VCLK_ADM_APB_G_CLUSTER0,
	VCLK_ADS_AHB_G_SSS,
	VCLK_ADS_APB_G_BDU,
	VCLK_ADS_APB_G_CLUSTER0,
	VCLK_ADS_APB_G_CLUSTER1,
	VCLK_ADS_APB_G_DSPM,
	VCLK_ASB_APB_P_DUMPPC_CLUSTER0,
	VCLK_ASB_APB_P_DUMPPC_CLUSTER1,
	VCLK_AXI2APB_CPUCL0,
	VCLK_AXI2APB_P_CSSYS,
	VCLK_AXI_DS_64to32_G_CSSYS,
	VCLK_BUSIF_HPMCPUCL0,
	VCLK_CLUSTER0,
	VCLK_CPUCL0_CMU_CPUCL0,
	VCLK_CSSYS,
	VCLK_DUMPPC_CLUSTER0,
	VCLK_DUMPPC_CLUSTER1,
	VCLK_HPM_CPUCL0,
	VCLK_LHM_ATB_T0_CLUSTER0,
	VCLK_LHM_ATB_T0_CLUSTER1,
	VCLK_LHM_ATB_T1_CLUSTER0,
	VCLK_LHM_ATB_T1_CLUSTER1,
	VCLK_LHM_ATB_T2_CLUSTER0,
	VCLK_LHM_ATB_T2_CLUSTER1,
	VCLK_LHM_ATB_T3_CLUSTER0,
	VCLK_LHM_ATB_T3_CLUSTER1,
	VCLK_LHM_ATB_T_AUD,
	VCLK_LHM_ATB_T_BDU,
	VCLK_LHM_AXI_P_CPUCL0,
	VCLK_LHM_AXI_P_CSSYS,
	VCLK_LHS_ACE_D_CLUSTER0,
	VCLK_LHS_ATB_T0_CLUSTER0,
	VCLK_LHS_ATB_T1_CLUSTER0,
	VCLK_LHS_ATB_T2_CLUSTER0,
	VCLK_LHS_ATB_T3_CLUSTER0,
	VCLK_LHS_AXI_G_CSSYS,
	VCLK_LHS_AXI_G_ETR,
	VCLK_LHS_AXI_P_CLUSTER0,
	VCLK_SECJTAG,
	VCLK_SYSREG_CPUCL0,
	VCLK_AXI2APB_CPUCL1,
	VCLK_BUSIF_HPMCPUCL1,
	VCLK_CLUSTER1,
	VCLK_CPUCL1_CMU_CPUCL1,
	VCLK_HPM_CPUCL1_0,
	VCLK_HPM_CPUCL1_1,
	VCLK_HPM_CPUCL1_2,
	VCLK_LHM_AXI_P_CPUCL1,
	VCLK_SYSREG_CPUCL1,
	VCLK_DCPOST_CMU_DCPOST,
	VCLK_IS_DCPOST,
	VCLK_LHM_ATB_DCFDCPOST,
	VCLK_LHM_ATB_DCRDDCPOST,
	VCLK_LHM_AXI_P_DCFDCPOST,
	VCLK_LHS_ATB_DCPOSTDCF,
	VCLK_LHS_ATB_DCPOSTDCRD,
	VCLK_LHS_AXI_D_DCPOSTDCF,
	VCLK_AD_APB_DECON0,
	VCLK_AD_APB_DECON1,
	VCLK_AD_APB_DECON2,
	VCLK_AD_APB_DPP,
	VCLK_AD_APB_DPU_DMA,
	VCLK_AD_APB_DPU_DMA_PGEN,
	VCLK_AD_APB_DPU_WB_MUX,
	VCLK_AD_APB_MIPI_DSIM0,
	VCLK_AD_APB_MIPI_DSIM1,
	VCLK_AD_APB_SYSMMU_DPUD0,
	VCLK_AD_APB_SYSMMU_DPUD0_S,
	VCLK_AD_APB_SYSMMU_DPUD1,
	VCLK_AD_APB_SYSMMU_DPUD1_S,
	VCLK_AD_APB_SYSMMU_DPUD2,
	VCLK_AD_APB_SYSMMU_DPUD2_S,
	VCLK_AXI2APB_DPUP0,
	VCLK_AXI2APB_DPUP1,
	VCLK_BTM_DPUD0,
	VCLK_BTM_DPUD1,
	VCLK_BTM_DPUD2,
	VCLK_DPU_CMU_DPU,
	VCLK_LHM_AXI_P_DPU,
	VCLK_PPMU_DPUD0,
	VCLK_PPMU_DPUD1,
	VCLK_PPMU_DPUD2,
	VCLK_SYSREG_DPU,
	VCLK_XIU_P_DPU,
	VCLK_wrapper_for_s5i6211_hsi_dcphy_combo_top,
	VCLK_ADM_APB_DSPM,
	VCLK_AD_APB_DSPM0,
	VCLK_AD_APB_DSPM1,
	VCLK_AD_APB_DSPM3,
	VCLK_AD_APB_DSPM4,
	VCLK_AD_AXI_DSPM0,
	VCLK_AXI2APB_DSPM,
	VCLK_BTM_DSPM0,
	VCLK_BTM_DSPM1,
	VCLK_DSPM_CMU_DSPM,
	VCLK_LHM_AXI_D0_DSPSDSPM,
	VCLK_LHM_AXI_D1_DSPSDSPM,
	VCLK_LHM_AXI_P_DSPM,
	VCLK_LHM_AXI_P_IVADSPM,
	VCLK_LHS_ACEL_D0_DSPM,
	VCLK_LHS_ACEL_D1_DSPM,
	VCLK_LHS_ACEL_D2_DSPM,
	VCLK_LHS_AXI_P_DSPMDSPS,
	VCLK_LHS_AXI_P_DSPMIVA,
	VCLK_PGEN_lite_DSPM,
	VCLK_PPMU_DSPM0,
	VCLK_PPMU_DSPM1,
	VCLK_SCORE_MASTER,
	VCLK_SYSMMU_DSPM0,
	VCLK_SYSMMU_DSPM1,
	VCLK_SYSREG_DSPM,
	VCLK_WRAP2_CONV_DSPM,
	VCLK_XIU_P_DSPM,
	VCLK_AXI2APB_DSPS,
	VCLK_DSPS_CMU_DSPS,
	VCLK_LHM_AXI_P_DSPMDSPS,
	VCLK_SYSREG_DSPS,
	VCLK_DP_LINK,
	VCLK_UFS_EMBD,
	VCLK_USB30DRD,
	VCLK_ADM_AHB_SSS,
	VCLK_AHBBR_FSYS1,
	VCLK_AXI2AHB_FSYS1,
	VCLK_AXI2APB_FSYS1P0,
	VCLK_AXI2APB_FSYS1P1,
	VCLK_BTM_FSYS1,
	VCLK_FSYS1_CMU_FSYS1,
	VCLK_GPIO_FSYS1,
	VCLK_LHM_AXI_P_FSYS1,
	VCLK_LHS_ACEL_D_FSYS1,
	VCLK_MMC_CARD,
	VCLK_PCIE_GEN2,
	VCLK_PCIE_GEN3,
	VCLK_PCIE_IA_GEN2,
	VCLK_PCIE_IA_GEN3,
	VCLK_PGEN_LITE_FSYS1,
	VCLK_PPMU_FSYS1,
	VCLK_RTIC,
	VCLK_SSS,
	VCLK_SYSMMU_FSYS1,
	VCLK_SYSREG_FSYS1,
	VCLK_UFS_CARD,
	VCLK_XIU_D_FSYS1,
	VCLK_XIU_PCIE_GEN2_DBI,
	VCLK_XIU_PCIE_GEN2_SLV,
	VCLK_XIU_PCIE_GEN3_DBI,
	VCLK_XIU_PCIE_GEN3_SLV,
	VCLK_XIU_P_FSYS1,
	VCLK_AXI2APB_G3D,
	VCLK_BUSIF_HPMG3D,
	VCLK_G3D_CMU_G3D,
	VCLK_GPU,
	VCLK_GRAY2BIN_G3D,
	VCLK_HPM_G3D0,
	VCLK_LHM_AXI_G3DSFR,
	VCLK_LHM_AXI_P_G3D,
	VCLK_LHS_AXI_G3DSFR,
	VCLK_PGEN_LITE_G3D,
	VCLK_SYSREG_G3D,
	VCLK_XIU_P_G3D,
	VCLK_ADM_DAP_IVA,
	VCLK_AD_APB_IVA0,
	VCLK_AD_APB_IVA1,
	VCLK_AD_APB_IVA2,
	VCLK_AXI2APB_2M_IVA,
	VCLK_AXI2APB_IVA,
	VCLK_BTM_IVA,
	VCLK_IVA,
	VCLK_IVA_CMU_IVA,
	VCLK_LHM_AXI_P_IVA,
	VCLK_PGEN_lite_IVA,
	VCLK_PPMU_IVA,
	VCLK_SYSREG_IVA,
	VCLK_TREX_RB_IVA,
	VCLK_XIU_P_IVA,
	VCLK_HPM_MIF,
	VCLK_AXI2APB_PERIC0P0,
	VCLK_AXI2APB_PERIC0P1,
	VCLK_GPIO_PERIC0,
	VCLK_LHM_AXI_P_PERIC0,
	VCLK_PERIC0_CMU_PERIC0,
	VCLK_PWM,
	VCLK_SYSREG_PERIC0,
	VCLK_UART_DBG,
	VCLK_USI00_I2C,
	VCLK_USI00_USI,
	VCLK_USI01_I2C,
	VCLK_USI01_USI,
	VCLK_USI02_I2C,
	VCLK_USI02_USI,
	VCLK_USI03_I2C,
	VCLK_USI03_USI,
	VCLK_USI04_I2C,
	VCLK_USI04_USI,
	VCLK_USI05_I2C,
	VCLK_USI05_USI,
	VCLK_USI12_I2C,
	VCLK_USI12_USI,
	VCLK_USI13_I2C,
	VCLK_USI13_USI,
	VCLK_USI14_I2C,
	VCLK_USI14_USI,
	VCLK_XIU_P_PERIC0,
	VCLK_AXI2APB_PERIC1P0,
	VCLK_AXI2APB_PERIC1P1,
	VCLK_GPIO_PERIC1,
	VCLK_I2C_CAM0,
	VCLK_I2C_CAM1,
	VCLK_I2C_CAM2,
	VCLK_I2C_CAM3,
	VCLK_LHM_AXI_P_PERIC1,
	VCLK_PERIC1_CMU_PERIC1,
	VCLK_SPI_CAM0,
	VCLK_SYSREG_PERIC1,
	VCLK_UART_BT,
	VCLK_USI06_I2C,
	VCLK_USI06_USI,
	VCLK_USI07_I2C,
	VCLK_USI07_USI,
	VCLK_USI08_I2C,
	VCLK_USI08_USI,
	VCLK_USI09_I2C,
	VCLK_USI09_USI,
	VCLK_USI10_I2C,
	VCLK_USI10_USI,
	VCLK_USI11_I2C,
	VCLK_USI11_USI,
	VCLK_XIU_P_PERIC1,
	VCLK_AD_AXI_P_PERIS,
	VCLK_AXI2APB_PERISP,
	VCLK_BUSIF_TMU,
	VCLK_GIC,
	VCLK_LHM_AXI_P_PERIS,
	VCLK_MCT,
	VCLK_OTP_CON_BIRA,
	VCLK_OTP_CON_TOP,
	VCLK_PERIS_CMU_PERIS,
	VCLK_SYSREG_PERIS,
	VCLK_WDT_CLUSTER0,
	VCLK_WDT_CLUSTER1,
	VCLK_XIU_P_PERIS,
	VCLK_S2D_CMU_S2D,
	VCLK_DMIC_IF,
	VCLK_u_DMIC_CLK_MUX,
	end_of_gating_vclk,
	num_of_gating_vclk = end_of_gating_vclk - ((MASK_OF_ID & end_of_common_vclk) | GATE_VCLK_TYPE),

};
#endif
