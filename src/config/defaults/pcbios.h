#ifndef CONFIG_DEFAULTS_PCBIOS_H
#define CONFIG_DEFAULTS_PCBIOS_H

/** @file
 *
 * Configuration defaults for PCBIOS
 *
 */

FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

#define UACCESS_LIBRM
#define IOAPI_X86
#define PCIAPI_PCBIOS
#define DMAAPI_FLAT
#define TIMER_PCBIOS
#define CONSOLE_PCBIOS
#define NAP_PCBIOS
#define UMALLOC_MEMTOP
#define SMBIOS_PCBIOS
#define SANBOOT_PCBIOS
#define ENTROPY_RTC
#define ENTROPY_RDRAND
#define TIME_RTC
#define REBOOT_PCBIOS
#define ACPI_RSDP
#define MPAPI_PCBIOS

#ifdef __x86_64__
#define IOMAP_PAGES
#else
#define IOMAP_VIRT
#endif

#undef	IMAGE_ELF		/* ELF image support */
#undef	IMAGE_MULTIBOOT		/* MultiBoot image support */
#undef	IMAGE_PXE		/* PXE image support */
#undef IMAGE_SCRIPT		/* iPXE script image support */
#undef IMAGE_BZIMAGE		/* Linux bzImage image support */

#undef PXE_STACK		/* PXE stack in iPXE - required for PXELINUX */
#undef PXE_MENU		/* PXE menu booting */

#undef	SANBOOT_PROTO_ISCSI	/* iSCSI protocol */
#undef	SANBOOT_PROTO_AOE	/* AoE protocol */
#undef	SANBOOT_PROTO_IB_SRP	/* Infiniband SCSI RDMA protocol */
#undef	SANBOOT_PROTO_FCP	/* Fibre Channel protocol */
#undef SANBOOT_PROTO_HTTP	/* HTTP SAN protocol */

#undef	USB_HCD_XHCI		/* xHCI USB host controller */
#undef	USB_HCD_EHCI		/* EHCI USB host controller */
#undef	USB_HCD_UHCI		/* UHCI USB host controller */
#undef	USB_KEYBOARD		/* USB keyboards */
#undef USB_BLOCK		/* USB block devices */

#undef	REBOOT_CMD		/* Reboot command */
#undef	CPUID_CMD		/* x86 CPU feature detection command */

#endif /* CONFIG_DEFAULTS_PCBIOS_H */
