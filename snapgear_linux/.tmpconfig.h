/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED

/*
 * Vendor/Product Selection
 */

/*
 * Select the Vendor you wish to target
 */
#define CONFIG_DEFAULTS_GAISLER 1

/*
 * Select the Product you wish to target
 */
#undef  CONFIG_DEFAULTS_GAISLER_LEON2MMU
#define CONFIG_DEFAULTS_GAISLER_LEON3MMU 1

/*
 * Select the options for a selected Product
 */

/*
 * Gaisler/Leon2/3 MMU options
 */
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_MV8
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_FPU
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_FREQ_20000
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_FREQ_25000
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_FREQ_30000
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_FREQ_40000
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_FREQ_50000
#define CONFIG_DEFAULTS_GAISLER_LEON2_FREQ_80000 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_FREQ_100000
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_FREQ_101000
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_BAUDRATE_9600
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_BAUDRATE_19200
#define CONFIG_DEFAULTS_GAISLER_LEON2_BAUDRATE_38400 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_LOOPBACK
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_UARTFLOWCTRL
#undef  CONFIG_KERNEL_ROOTMEM_ROMFS
#define CONFIG_KERNEL_ROOTMEM_INITRAMFS 1
#undef  CONFIG_KERNEL_ROOTMEM_NONE
#define CONFIG_KERNEL_INITRAMFS_SOURCE ""
#undef  CONFIG_KERNEL_INITRAMFS_SOURCE_EXCLUSIVE
#define CONFIG_KERNEL_INIT_PATH "/sbin/init"
#define CONFIG_KERNEL_COMMAND_LINE "console=ttyS0,38400"
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_8k
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_16k
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_32k
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_64k
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_128k
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_256k
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_512k
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_1mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_2mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_4mb
#define CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_8mb 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_16mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_32mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_64mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_128mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROMSIZE_256mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_0
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_1
#define CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_2 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_3
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_4
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_5
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_6
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_7
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_8
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_9
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_10
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_11
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_12
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_13
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_14
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_rws_15
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_0
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_1
#define CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_2 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_3
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_4
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_5
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_6
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_7
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_8
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_9
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_10
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_11
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_12
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_13
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_14
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_wws_15
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_ROM_WE
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_USE_SRAM
#define CONFIG_DEFAULTS_GAISLER_LEON2_USE_SDRAM 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_USE_DDRSDRAM
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_USE_DDR2SDRAM

/*
 * SDRam options
 */
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_4mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_8mb
#define CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_16mb 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_32mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_64mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_128mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_256mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_512mb
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMSIZE_1024mb
#define CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMBANKS_1 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMBANKS_2
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMBANKS_3
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMBANKS_4
#define CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMCOL_256 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMCOL_512
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMCOL_1024
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMCOL_2048
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMCOL_4096
#define CONFIG_DEFAULTS_GAISLER_LEON2_SDRAM_refresh "7.8"
#define CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMCAS_2 1
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAMCAS_3
#define CONFIG_DEFAULTS_GAISLER_LEON2_SDRAM_trfc (66)
#define CONFIG_DEFAULTS_GAISLER_LEON2_SDRAM_trp (20)
#undef  CONFIG_DEFAULTS_GAISLER_LEON2_SDRAM_SRAMKEEP

/*
 * Kernel image position
 */
#undef  CONFIG_KERNEL_PHYSICAL_ADDR_SET

/*
 * Kernel/Library/Defaults Selection
 */

/*
 * Kernel is linux-2.6.21.1
 */
#define CONFIG_DEFAULTS_KERNEL_2_6_21_1 1
#define CONFIG_DEFAULTS_LIBC_GLIBC_FROM_COMPILER 1
#undef  CONFIG_DEFAULTS_LIBC_UCLIBC_FROM_COMPILER
#undef  CONFIG_DEFAULTS_LIBC_NONE
#undef  CONFIG_DEFAULTS_OVERRIDE
#undef  CONFIG_DEFAULTS_KERNEL
#undef  CONFIG_DEFAULTS_VENDOR
#undef  CONFIG_DEFAULTS_VENDOR_UPDATE

/*
 * Template Configurations
 */
#define CONFIG_TEMPLATE_LEON3MMU_NONE 1
#undef  CONFIG_TEMPLATE_LEON3MMU_GR_XC3S_1500
#undef  CONFIG_TEMPLATE_LEON3MMU_HAPS_51
#undef  CONFIG_TEMPLATE_LEON3MMU_LEON3_ALTERA_EP2S60_DDR
#undef  CONFIG_TEMPLATE_LEON3MMU_NETFILTER
#undef  CONFIG_TEMPLATE_LEON3MMU_NFS_ROOT
#undef  CONFIG_TEMPLATE_LEON3MMU_VGA_PS2
#undef  CONFIG_TEMPLATES_UPDATE
