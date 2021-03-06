/*
 * Copyright 2018 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef IMX8QM_MEK_ANDROID_AUTO_XEN_H
#define IMX8QM_MEK_ANDROID_AUTO_XEN_H

#undef CONFIG_SYS_SDRAM_BASE
#undef CONFIG_NR_DRAM_BANKS
#undef PHYS_SDRAM_1
#undef PHYS_SDRAM_2
#undef PHYS_SDRAM_1_SIZE
#undef PHYS_SDRAM_2_SIZE

#define CONFIG_SYS_SDRAM_BASE		0x40000000
#define CONFIG_NR_DRAM_BANKS		2
#define PHYS_SDRAM_1			0x40000000
#define PHYS_SDRAM_2			0x200000000
#define PHYS_SDRAM_1_SIZE		0xC0000000	/* 3 GB */
#define PHYS_SDRAM_2_SIZE		0x20000000	/* 512 MB */

#undef CONFIG_LOADADDR
#define CONFIG_LOADADDR			0x40280000
#undef CONFIG_SYS_INIT_SP_ADDR
#define CONFIG_SYS_INIT_SP_ADDR		0x40200000
#undef CONFIG_SYS_TEXT_BASE
#define CONFIG_SYS_TEXT_BASE		0x40080000

#undef CONFIG_REQUIRE_SERIAL_CONSOLE
#undef CONFIG_IMX_SMMU

#undef CONFIG_FASTBOOT_USB_DEV
#define CONFIG_FASTBOOT_USB_DEV 0 /* Use OTG port, not typec port */

/* This needs to be stay same in iomem in domu.cfg */
#define SC_IPC_CH			0x15d1d0000

#define AVB_AB_I_UNDERSTAND_LIBAVB_AB_IS_DEPRECATED

#endif /* IMX8QM_MEK_ANDROID_AUTO_XEN_H */
