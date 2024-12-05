#ifndef _IPXE_ERRFILE_H
#define _IPXE_ERRFILE_H

/** @file
 *
 * Error file identifiers
 *
 */

FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

#include <bits/errfile.h>

/**
 * @defgroup errfilecat Error file identifier categories
 *
 * @{
 */

#define ERRFILE_CORE		0x00002000	/**< Core code */
#define ERRFILE_DRIVER		0x00004000	/**< Driver code */
#define ERRFILE_NET		0x00006000	/**< Networking code */
#define ERRFILE_IMAGE		0x00008000	/**< Image code */
#define ERRFILE_OTHER		0x0000e000	/**< Any other code */

/** @} */

/** Flag for architecture-dependent error files */
#define ERRFILE_ARCH		0x00800000

/**
 * @defgroup errfile Error file identifiers
 *
 * These values are automatically incorporated into the definitions
 * for error numbers such as EINVAL.
 *
 * @{
 */

#define ERRFILE_asprintf	       ( ERRFILE_CORE | 0x00000000 )
#define ERRFILE_downloader	       ( ERRFILE_CORE | 0x00010000 )
#define ERRFILE_exec		       ( ERRFILE_CORE | 0x00020000 )
#define ERRFILE_hw		       ( ERRFILE_CORE | 0x00030000 )
#define ERRFILE_iobuf		       ( ERRFILE_CORE | 0x00040000 )
#define ERRFILE_job		       ( ERRFILE_CORE | 0x00050000 )
#define ERRFILE_linebuf		       ( ERRFILE_CORE | 0x00060000 )
#define ERRFILE_monojob		       ( ERRFILE_CORE | 0x00070000 )
#define ERRFILE_nvo		       ( ERRFILE_CORE | 0x00080000 )
#define ERRFILE_open		       ( ERRFILE_CORE | 0x00090000 )
#define ERRFILE_posix_io	       ( ERRFILE_CORE | 0x000a0000 )
#define ERRFILE_resolv		       ( ERRFILE_CORE | 0x000b0000 )
#define ERRFILE_settings	       ( ERRFILE_CORE | 0x000c0000 )
#define ERRFILE_vsprintf	       ( ERRFILE_CORE | 0x000d0000 )
#define ERRFILE_xfer		       ( ERRFILE_CORE | 0x000e0000 )
#define ERRFILE_bitmap		       ( ERRFILE_CORE | 0x000f0000 )
#define ERRFILE_base64		       ( ERRFILE_CORE | 0x00100000 )
#define ERRFILE_base16		       ( ERRFILE_CORE | 0x00110000 )
#define ERRFILE_blockdev	       ( ERRFILE_CORE | 0x00120000 )
#define ERRFILE_acpi		       ( ERRFILE_CORE | 0x00130000 )
#define ERRFILE_null_sanboot	       ( ERRFILE_CORE | 0x00140000 )
#define ERRFILE_edd		       ( ERRFILE_CORE | 0x00150000 )
#define ERRFILE_parseopt	       ( ERRFILE_CORE | 0x00160000 )
#define ERRFILE_test		       ( ERRFILE_CORE | 0x00170000 )
#define ERRFILE_xferbuf		       ( ERRFILE_CORE | 0x00180000 )
#define ERRFILE_pending		       ( ERRFILE_CORE | 0x00190000 )
#define ERRFILE_null_reboot	       ( ERRFILE_CORE | 0x001a0000 )
#define ERRFILE_pinger		       ( ERRFILE_CORE | 0x001b0000 )
#define ERRFILE_fbcon		       ( ERRFILE_CORE | 0x001c0000 )
#define ERRFILE_ansicol		       ( ERRFILE_CORE | 0x001d0000 )
#define ERRFILE_ansicoldef	       ( ERRFILE_CORE | 0x001e0000 )
#define ERRFILE_fault		       ( ERRFILE_CORE | 0x001f0000 )
#define ERRFILE_blocktrans	       ( ERRFILE_CORE | 0x00200000 )
#define ERRFILE_pixbuf		       ( ERRFILE_CORE | 0x00210000 )
#define ERRFILE_efi_block	       ( ERRFILE_CORE | 0x00220000 )
#define ERRFILE_sanboot		       ( ERRFILE_CORE | 0x00230000 )
#define ERRFILE_dummy_sanboot	       ( ERRFILE_CORE | 0x00240000 )
#define ERRFILE_fdt		       ( ERRFILE_CORE | 0x00250000 )
#define ERRFILE_dma		       ( ERRFILE_CORE | 0x00260000 )
#define ERRFILE_cachedhcp	       ( ERRFILE_CORE | 0x00270000 )
#define ERRFILE_acpimac		       ( ERRFILE_CORE | 0x00280000 )
#define ERRFILE_efi_strings	       ( ERRFILE_CORE | 0x00290000 )
#define ERRFILE_uuid		       ( ERRFILE_CORE | 0x002a0000 )
#define ERRFILE_efi_path	       ( ERRFILE_CORE | 0x002b0000 )
#define ERRFILE_efi_mp		       ( ERRFILE_CORE | 0x002c0000 )
#define ERRFILE_efi_service	       ( ERRFILE_CORE | 0x002d0000 )
#define ERRFILE_null_smbios	       ( ERRFILE_CORE | 0x002e0000 )

#define ERRFILE_eisa		     ( ERRFILE_DRIVER | 0x00000000 )
#define ERRFILE_isa		     ( ERRFILE_DRIVER | 0x00010000 )
#define ERRFILE_isapnp		     ( ERRFILE_DRIVER | 0x00020000 )
#define ERRFILE_mca		     ( ERRFILE_DRIVER | 0x00030000 )
#define ERRFILE_pci		     ( ERRFILE_DRIVER | 0x00040000 )
#define ERRFILE_linux		     ( ERRFILE_DRIVER | 0x00050000 )
#define ERRFILE_pcivpd		     ( ERRFILE_DRIVER | 0x00060000 )
#define ERRFILE_usb		     ( ERRFILE_DRIVER | 0x00070000 )
#define ERRFILE_usbhub		     ( ERRFILE_DRIVER | 0x00080000 )
#define ERRFILE_xhci		     ( ERRFILE_DRIVER | 0x00090000 )
#define ERRFILE_ehci		     ( ERRFILE_DRIVER | 0x000a0000 )
#define ERRFILE_uhci		     ( ERRFILE_DRIVER | 0x000b0000 )
#define ERRFILE_usbhid		     ( ERRFILE_DRIVER | 0x000c0000 )
#define ERRFILE_usbkbd		     ( ERRFILE_DRIVER | 0x000d0000 )
#define ERRFILE_usbio		     ( ERRFILE_DRIVER | 0x000e0000 )

#define ERRFILE_nvs		     ( ERRFILE_DRIVER | 0x00100000 )
#define ERRFILE_spi		     ( ERRFILE_DRIVER | 0x00110000 )
#define ERRFILE_i2c_bit		     ( ERRFILE_DRIVER | 0x00120000 )
#define ERRFILE_spi_bit		     ( ERRFILE_DRIVER | 0x00130000 )
#define ERRFILE_nvsvpd		     ( ERRFILE_DRIVER | 0x00140000 )
#define ERRFILE_uart		     ( ERRFILE_DRIVER | 0x00150000 )

#define ERRFILE_3c509		     ( ERRFILE_DRIVER | 0x00200000 )
#define ERRFILE_bnx2		     ( ERRFILE_DRIVER | 0x00210000 )
#define ERRFILE_cs89x0		     ( ERRFILE_DRIVER | 0x00220000 )
#define ERRFILE_eepro		     ( ERRFILE_DRIVER | 0x00230000 )
#define ERRFILE_etherfabric	     ( ERRFILE_DRIVER | 0x00240000 )
#define ERRFILE_legacy		     ( ERRFILE_DRIVER | 0x00250000 )
#define ERRFILE_natsemi		     ( ERRFILE_DRIVER | 0x00260000 )
#define ERRFILE_pnic		     ( ERRFILE_DRIVER | 0x00270000 )
#define ERRFILE_prism2_pci	     ( ERRFILE_DRIVER | 0x00280000 )
#define ERRFILE_prism2_plx	     ( ERRFILE_DRIVER | 0x00290000 )
#define ERRFILE_rtl8139		     ( ERRFILE_DRIVER | 0x002a0000 )
#define ERRFILE_smc9000		     ( ERRFILE_DRIVER | 0x002b0000 )
#define ERRFILE_tg3		     ( ERRFILE_DRIVER | 0x002c0000 )
#define ERRFILE_3c509_eisa	     ( ERRFILE_DRIVER | 0x002d0000 )
#define ERRFILE_3c515		     ( ERRFILE_DRIVER | 0x002e0000 )
#define ERRFILE_3c529		     ( ERRFILE_DRIVER | 0x002f0000 )
#define ERRFILE_3c595		     ( ERRFILE_DRIVER | 0x00300000 )
#define ERRFILE_3c5x9		     ( ERRFILE_DRIVER | 0x00310000 )
#define ERRFILE_3c90x		     ( ERRFILE_DRIVER | 0x00320000 )
#define ERRFILE_amd8111e	     ( ERRFILE_DRIVER | 0x00330000 )
#define ERRFILE_davicom		     ( ERRFILE_DRIVER | 0x00340000 )
#define ERRFILE_depca		     ( ERRFILE_DRIVER | 0x00350000 )
#define ERRFILE_dmfe		     ( ERRFILE_DRIVER | 0x00360000 )
#define ERRFILE_eepro100	     ( ERRFILE_DRIVER | 0x00380000 )
#define ERRFILE_epic100		     ( ERRFILE_DRIVER | 0x00390000 )
#define ERRFILE_forcedeth	     ( ERRFILE_DRIVER | 0x003a0000 )
#define ERRFILE_mtd80x		     ( ERRFILE_DRIVER | 0x003b0000 )
#define ERRFILE_ns83820		     ( ERRFILE_DRIVER | 0x003c0000 )
#define ERRFILE_ns8390		     ( ERRFILE_DRIVER | 0x003d0000 )
#define ERRFILE_pcnet32		     ( ERRFILE_DRIVER | 0x003e0000 )
#define ERRFILE_r8169		     ( ERRFILE_DRIVER | 0x003f0000 )
#define ERRFILE_sis900		     ( ERRFILE_DRIVER | 0x00400000 )
#define ERRFILE_sundance	     ( ERRFILE_DRIVER | 0x00410000 )
#define ERRFILE_tlan		     ( ERRFILE_DRIVER | 0x00420000 )
#define ERRFILE_tulip		     ( ERRFILE_DRIVER | 0x00430000 )
#define ERRFILE_rhine		     ( ERRFILE_DRIVER | 0x00440000 )
#define ERRFILE_velocity	     ( ERRFILE_DRIVER | 0x00450000 )
#define ERRFILE_w89c840		     ( ERRFILE_DRIVER | 0x00460000 )
#define ERRFILE_ipoib		     ( ERRFILE_DRIVER | 0x00470000 )
#define ERRFILE_e1000_main	     ( ERRFILE_DRIVER | 0x00480000 )
#define ERRFILE_e1000e_main	     ( ERRFILE_DRIVER | 0x00490000 )
#define ERRFILE_mtnic		     ( ERRFILE_DRIVER | 0x004a0000 )
#define ERRFILE_phantom		     ( ERRFILE_DRIVER | 0x004b0000 )
#define ERRFILE_ne2k_isa	     ( ERRFILE_DRIVER | 0x004c0000 )
#define ERRFILE_b44		     ( ERRFILE_DRIVER | 0x004d0000 )
#define ERRFILE_rtl818x		     ( ERRFILE_DRIVER | 0x004e0000 )
#define ERRFILE_sky2                 ( ERRFILE_DRIVER | 0x004f0000 )
#define ERRFILE_ath5k		     ( ERRFILE_DRIVER | 0x00500000 )
#define ERRFILE_atl1e		     ( ERRFILE_DRIVER | 0x00510000 )
#define ERRFILE_sis190		     ( ERRFILE_DRIVER | 0x00520000 )
#define ERRFILE_myri10ge	     ( ERRFILE_DRIVER | 0x00530000 )
#define ERRFILE_skge		     ( ERRFILE_DRIVER | 0x00540000 )
#define ERRFILE_vxge_main	     ( ERRFILE_DRIVER | 0x00550000 )
#define ERRFILE_vxge_config	     ( ERRFILE_DRIVER | 0x00560000 )
#define ERRFILE_vxge_traffic	     ( ERRFILE_DRIVER | 0x00570000 )
#define ERRFILE_igb_main	     ( ERRFILE_DRIVER | 0x00580000 )
#define ERRFILE_snpnet		     ( ERRFILE_DRIVER | 0x00590000 )
#define ERRFILE_snponly		     ( ERRFILE_DRIVER | 0x005a0000 )
#define ERRFILE_jme		     ( ERRFILE_DRIVER | 0x005b0000 )
#define ERRFILE_virtio_net	     ( ERRFILE_DRIVER | 0x005c0000 )
#define ERRFILE_tap		     ( ERRFILE_DRIVER | 0x005d0000 )
#define ERRFILE_igbvf_main	     ( ERRFILE_DRIVER | 0x005e0000 )
#define ERRFILE_ath9k		     ( ERRFILE_DRIVER | 0x005f0000 )
#define ERRFILE_ath		     ( ERRFILE_DRIVER | 0x00600000 )
#define ERRFILE_vmxnet3		     ( ERRFILE_DRIVER | 0x00610000 )
#define ERRFILE_mii		     ( ERRFILE_DRIVER | 0x00620000 )
#define ERRFILE_realtek		     ( ERRFILE_DRIVER | 0x00630000 )
#define ERRFILE_skeleton	     ( ERRFILE_DRIVER | 0x00640000 )
#define ERRFILE_intel		     ( ERRFILE_DRIVER | 0x00650000 )
#define ERRFILE_myson		     ( ERRFILE_DRIVER | 0x00660000 )
#define ERRFILE_intelx		     ( ERRFILE_DRIVER | 0x00670000 )
#define ERRFILE_snp		     ( ERRFILE_DRIVER | 0x00680000 )
#define ERRFILE_netfront	     ( ERRFILE_DRIVER | 0x00690000 )
#define ERRFILE_nii		     ( ERRFILE_DRIVER | 0x006a0000 )
#define ERRFILE_netvsc		     ( ERRFILE_DRIVER | 0x006b0000 )
#define ERRFILE_ecm		     ( ERRFILE_DRIVER | 0x006c0000 )
#define ERRFILE_ncm		     ( ERRFILE_DRIVER | 0x006d0000 )
#define ERRFILE_usbnet		     ( ERRFILE_DRIVER | 0x006e0000 )
#define ERRFILE_dm96xx		     ( ERRFILE_DRIVER | 0x006f0000 )
#define ERRFILE_scsi		     ( ERRFILE_DRIVER | 0x00700000 )
#define ERRFILE_arbel		     ( ERRFILE_DRIVER | 0x00710000 )
#define ERRFILE_hermon		     ( ERRFILE_DRIVER | 0x00720000 )
#define ERRFILE_linda		     ( ERRFILE_DRIVER | 0x00730000 )
#define ERRFILE_ata		     ( ERRFILE_DRIVER | 0x00740000 )
#define ERRFILE_srp		     ( ERRFILE_DRIVER | 0x00750000 )
#define ERRFILE_qib7322		     ( ERRFILE_DRIVER | 0x00760000 )
#define ERRFILE_smsc75xx	     ( ERRFILE_DRIVER | 0x00770000 )
#define ERRFILE_intelvf		     ( ERRFILE_DRIVER | 0x00780000 )
#define ERRFILE_intelxvf	     ( ERRFILE_DRIVER | 0x00790000 )
#define ERRFILE_smsc95xx	     ( ERRFILE_DRIVER | 0x007a0000 )
#define ERRFILE_acm		     ( ERRFILE_DRIVER | 0x007b0000 )
#define ERRFILE_eoib		     ( ERRFILE_DRIVER | 0x007c0000 )
#define ERRFILE_golan		     ( ERRFILE_DRIVER | 0x007d0000 )
#define ERRFILE_flexboot_nodnic	     ( ERRFILE_DRIVER | 0x007e0000 )
#define ERRFILE_virtio_pci	     ( ERRFILE_DRIVER | 0x007f0000 )
#define ERRFILE_pciea		     ( ERRFILE_DRIVER | 0x00c00000 )
#define ERRFILE_axge		     ( ERRFILE_DRIVER | 0x00c10000 )
#define ERRFILE_thunderx	     ( ERRFILE_DRIVER | 0x00c20000 )
#define ERRFILE_af_packet	     ( ERRFILE_DRIVER | 0x00c30000 )
#define ERRFILE_sfc_hunt	     ( ERRFILE_DRIVER | 0x00c40000 )
#define ERRFILE_efx_hunt	     ( ERRFILE_DRIVER | 0x00c50000 )
#define ERRFILE_exanic		     ( ERRFILE_DRIVER | 0x00c60000 )
#define ERRFILE_smscusb		     ( ERRFILE_DRIVER | 0x00c70000 )
#define ERRFILE_lan78xx		     ( ERRFILE_DRIVER | 0x00c80000 )
#define ERRFILE_ena		     ( ERRFILE_DRIVER | 0x00c90000 )
#define ERRFILE_icplus		     ( ERRFILE_DRIVER | 0x00ca0000 )
#define ERRFILE_intelxl		     ( ERRFILE_DRIVER | 0x00cb0000 )
#define ERRFILE_pcimsix		     ( ERRFILE_DRIVER | 0x00cc0000 )
#define ERRFILE_intelxlvf	     ( ERRFILE_DRIVER | 0x00cd0000 )
#define ERRFILE_usbblk		     ( ERRFILE_DRIVER | 0x00ce0000 )
#define ERRFILE_iphone		     ( ERRFILE_DRIVER | 0x00cf0000 )
#define ERRFILE_slirp		     ( ERRFILE_DRIVER | 0x00d00000 )
#define ERRFILE_rdc		     ( ERRFILE_DRIVER | 0x00d10000 )
#define ERRFILE_ice		     ( ERRFILE_DRIVER | 0x00d20000 )
#define ERRFILE_ecam		     ( ERRFILE_DRIVER | 0x00d30000 )
#define ERRFILE_pcibridge	     ( ERRFILE_DRIVER | 0x00d40000 )
#define ERRFILE_mnpnet		     ( ERRFILE_DRIVER | 0x00d50000 )
#define ERRFILE_gve		     ( ERRFILE_DRIVER | 0x00d60000 )
#define ERRFILE_aqc1xx		     ( ERRFILE_DRIVER | 0x00d70000 )
#define ERRFILE_atl_hw		     ( ERRFILE_DRIVER | 0x00d80000 )
#define ERRFILE_atl2_hw		     ( ERRFILE_DRIVER | 0x00d90000 )

#define ERRFILE_aoe			( ERRFILE_NET | 0x00000000 )
#define ERRFILE_arp			( ERRFILE_NET | 0x00010000 )
#define ERRFILE_dhcpopts		( ERRFILE_NET | 0x00020000 )
#define ERRFILE_ethernet		( ERRFILE_NET | 0x00030000 )
#define ERRFILE_icmpv6			( ERRFILE_NET | 0x00040000 )
#define ERRFILE_ipv4			( ERRFILE_NET | 0x00050000 )
#define ERRFILE_ipv6			( ERRFILE_NET | 0x00060000 )
#define ERRFILE_ndp			( ERRFILE_NET | 0x00070000 )
#define ERRFILE_netdevice		( ERRFILE_NET | 0x00080000 )
#define ERRFILE_nullnet			( ERRFILE_NET | 0x00090000 )
#define ERRFILE_tcp			( ERRFILE_NET | 0x000a0000 )
#define ERRFILE_ftp			( ERRFILE_NET | 0x000b0000 )
#define ERRFILE_httpcore		( ERRFILE_NET | 0x000c0000 )
#define ERRFILE_iscsi			( ERRFILE_NET | 0x000d0000 )
#define ERRFILE_tcpip			( ERRFILE_NET | 0x000e0000 )
#define ERRFILE_udp			( ERRFILE_NET | 0x000f0000 )
#define ERRFILE_dhcp			( ERRFILE_NET | 0x00100000 )
#define ERRFILE_dns			( ERRFILE_NET | 0x00110000 )
#define ERRFILE_tftp			( ERRFILE_NET | 0x00120000 )
#define ERRFILE_infiniband		( ERRFILE_NET | 0x00130000 )
#define ERRFILE_netdev_settings		( ERRFILE_NET | 0x00140000 )
#define ERRFILE_dhcppkt			( ERRFILE_NET | 0x00150000 )
#define ERRFILE_slam			( ERRFILE_NET | 0x00160000 )
#define ERRFILE_ib_sma			( ERRFILE_NET | 0x00170000 )
#define ERRFILE_ib_packet		( ERRFILE_NET | 0x00180000 )
#define ERRFILE_icmpv4			( ERRFILE_NET | 0x00190000 )
#define ERRFILE_ib_qset			( ERRFILE_NET | 0x001a0000 )
#define ERRFILE_ib_gma			( ERRFILE_NET | 0x001b0000 )
#define ERRFILE_ib_pathrec		( ERRFILE_NET | 0x001c0000 )
#define ERRFILE_ib_mcast		( ERRFILE_NET | 0x001d0000 )
#define ERRFILE_ib_cm			( ERRFILE_NET | 0x001e0000 )
#define ERRFILE_net80211		( ERRFILE_NET | 0x001f0000 )
#define ERRFILE_ib_mi			( ERRFILE_NET | 0x00200000 )
#define ERRFILE_ib_cmrc			( ERRFILE_NET | 0x00210000 )
#define ERRFILE_ib_srp			( ERRFILE_NET | 0x00220000 )
#define ERRFILE_sec80211		( ERRFILE_NET | 0x00230000 )
#define ERRFILE_wep			( ERRFILE_NET | 0x00240000 )
#define ERRFILE_eapol			( ERRFILE_NET | 0x00250000 )
#define ERRFILE_wpa			( ERRFILE_NET | 0x00260000 )
#define ERRFILE_wpa_psk			( ERRFILE_NET | 0x00270000 )
#define ERRFILE_wpa_tkip		( ERRFILE_NET | 0x00280000 )
#define ERRFILE_wpa_ccmp		( ERRFILE_NET | 0x00290000 )
#define ERRFILE_eth_slow		( ERRFILE_NET | 0x002a0000 )
#define ERRFILE_fc			( ERRFILE_NET | 0x002b0000 )
#define ERRFILE_fcels			( ERRFILE_NET | 0x002c0000 )
#define ERRFILE_fcp			( ERRFILE_NET | 0x002d0000 )
#define ERRFILE_fcoe			( ERRFILE_NET | 0x002e0000 )
#define ERRFILE_fcns			( ERRFILE_NET | 0x002f0000 )
#define ERRFILE_vlan			( ERRFILE_NET | 0x00300000 )
#define ERRFILE_oncrpc			( ERRFILE_NET | 0x00310000 )
#define ERRFILE_portmap			( ERRFILE_NET | 0x00320000 )
#define ERRFILE_nfs			( ERRFILE_NET | 0x00330000 )
#define ERRFILE_nfs_open		( ERRFILE_NET | 0x00340000 )
#define ERRFILE_mount			( ERRFILE_NET | 0x00350000 )
#define ERRFILE_oncrpc_iob		( ERRFILE_NET | 0x00360000 )
#define ERRFILE_neighbour		( ERRFILE_NET | 0x00370000 )
#define ERRFILE_socket			( ERRFILE_NET | 0x00380000 )
#define ERRFILE_icmp			( ERRFILE_NET | 0x00390000 )
#define ERRFILE_ping			( ERRFILE_NET | 0x003a0000 )
#define ERRFILE_dhcpv6			( ERRFILE_NET | 0x003b0000 )
#define ERRFILE_nfs_uri			( ERRFILE_NET | 0x003c0000 )
#define ERRFILE_rndis			( ERRFILE_NET | 0x003d0000 )
#define ERRFILE_pccrc			( ERRFILE_NET | 0x003e0000 )
#define ERRFILE_stp			( ERRFILE_NET | 0x003f0000 )
#define ERRFILE_pccrd			( ERRFILE_NET | 0x00400000 )
#define ERRFILE_httpconn		( ERRFILE_NET | 0x00410000 )
#define ERRFILE_httpauth		( ERRFILE_NET | 0x00420000 )
#define ERRFILE_httpbasic		( ERRFILE_NET | 0x00430000 )
#define ERRFILE_httpdigest		( ERRFILE_NET | 0x00440000 )
#define ERRFILE_peerdisc		( ERRFILE_NET | 0x00450000 )
#define ERRFILE_peerblk			( ERRFILE_NET | 0x00460000 )
#define ERRFILE_peermux			( ERRFILE_NET | 0x00470000 )
#define ERRFILE_xsigo			( ERRFILE_NET | 0x00480000 )
#define ERRFILE_ntp			( ERRFILE_NET | 0x00490000 )
#define ERRFILE_httpntlm		( ERRFILE_NET | 0x004a0000 )
#define ERRFILE_eap			( ERRFILE_NET | 0x004b0000 )
#define ERRFILE_lldp			( ERRFILE_NET | 0x004c0000 )
#define ERRFILE_eap_md5			( ERRFILE_NET | 0x004d0000 )
#define ERRFILE_eap_mschapv2		( ERRFILE_NET | 0x004e0000 )

#define ERRFILE_image		      ( ERRFILE_IMAGE | 0x00000000 )
#define ERRFILE_elf		      ( ERRFILE_IMAGE | 0x00010000 )
#define ERRFILE_script		      ( ERRFILE_IMAGE | 0x00020000 )
#define ERRFILE_segment		      ( ERRFILE_IMAGE | 0x00030000 )
#define ERRFILE_efi_image	      ( ERRFILE_IMAGE | 0x00040000 )
#define ERRFILE_embedded	      ( ERRFILE_IMAGE | 0x00050000 )
#define ERRFILE_pnm		      ( ERRFILE_IMAGE | 0x00060000 )
#define ERRFILE_png		      ( ERRFILE_IMAGE | 0x00070000 )
#define ERRFILE_der		      ( ERRFILE_IMAGE | 0x00080000 )
#define ERRFILE_pem		      ( ERRFILE_IMAGE | 0x00090000 )
#define ERRFILE_archive		      ( ERRFILE_IMAGE | 0x000a0000 )
#define ERRFILE_zlib		      ( ERRFILE_IMAGE | 0x000b0000 )
#define ERRFILE_gzip		      ( ERRFILE_IMAGE | 0x000c0000 )

#define ERRFILE_asn1		      ( ERRFILE_OTHER | 0x00000000 )
#define ERRFILE_chap		      ( ERRFILE_OTHER | 0x00010000 )
#define ERRFILE_aoeboot		      ( ERRFILE_OTHER | 0x00020000 )
#define ERRFILE_autoboot	      ( ERRFILE_OTHER | 0x00030000 )
#define ERRFILE_dhcpmgmt	      ( ERRFILE_OTHER | 0x00040000 )
#define ERRFILE_imgmgmt		      ( ERRFILE_OTHER | 0x00050000 )
#define ERRFILE_pxe_tftp	      ( ERRFILE_OTHER | 0x00060000 )
#define ERRFILE_pxe_udp		      ( ERRFILE_OTHER | 0x00070000 )
#define ERRFILE_aes	 	      ( ERRFILE_OTHER | 0x00080000 )
#define ERRFILE_cipher		      ( ERRFILE_OTHER | 0x00090000 )
#define ERRFILE_image_cmd	      ( ERRFILE_OTHER | 0x000a0000 )
#define ERRFILE_uri_test	      ( ERRFILE_OTHER | 0x000b0000 )
#define ERRFILE_ibft		      ( ERRFILE_OTHER | 0x000c0000 )
#define ERRFILE_tls		      ( ERRFILE_OTHER | 0x000d0000 )
#define ERRFILE_ifmgmt		      ( ERRFILE_OTHER | 0x000e0000 )
#define ERRFILE_iscsiboot	      ( ERRFILE_OTHER | 0x000f0000 )
#define ERRFILE_efi_pci		      ( ERRFILE_OTHER | 0x00100000 )
#define ERRFILE_efi_snp		      ( ERRFILE_OTHER | 0x00110000 )
#define ERRFILE_smbios		      ( ERRFILE_OTHER | 0x00120000 )
#define ERRFILE_smbios_settings	      ( ERRFILE_OTHER | 0x00130000 )
#define ERRFILE_efi_smbios	      ( ERRFILE_OTHER | 0x00140000 )
#define ERRFILE_pxemenu		      ( ERRFILE_OTHER | 0x00150000 )
#define ERRFILE_x509		      ( ERRFILE_OTHER | 0x00160000 )
#define ERRFILE_login_ui	      ( ERRFILE_OTHER | 0x00170000 )
#define ERRFILE_ib_srpboot	      ( ERRFILE_OTHER | 0x00180000 )
#define ERRFILE_iwmgmt		      ( ERRFILE_OTHER | 0x00190000 )
#define ERRFILE_linux_smbios	      ( ERRFILE_OTHER | 0x001a0000 )
#define ERRFILE_lotest		      ( ERRFILE_OTHER | 0x001b0000 )
#define ERRFILE_config_cmd	      ( ERRFILE_OTHER | 0x001c0000 )
#define ERRFILE_ifmgmt_cmd	      ( ERRFILE_OTHER | 0x001d0000 )
#define ERRFILE_fcmgmt_cmd	      ( ERRFILE_OTHER | 0x001e0000 )
#define ERRFILE_gdbstub_cmd	      ( ERRFILE_OTHER | 0x001f0000 )
#define ERRFILE_sanboot_cmd	      ( ERRFILE_OTHER | 0x00200000 )
#define ERRFILE_bofm		      ( ERRFILE_OTHER | 0x00210000 )
#define ERRFILE_prompt		      ( ERRFILE_OTHER | 0x00220000 )
#define ERRFILE_nvo_cmd		      ( ERRFILE_OTHER | 0x00230000 )
#define ERRFILE_hmac_drbg	      ( ERRFILE_OTHER | 0x00240000 )
#define ERRFILE_drbg		      ( ERRFILE_OTHER | 0x00250000 )
#define ERRFILE_entropy		      ( ERRFILE_OTHER | 0x00260000 )
#define ERRFILE_rsa		      ( ERRFILE_OTHER | 0x00270000 )
#define ERRFILE_linux_entropy	      ( ERRFILE_OTHER | 0x00280000 )
#define ERRFILE_x509_test	      ( ERRFILE_OTHER | 0x00290000 )
#define ERRFILE_cms		      ( ERRFILE_OTHER | 0x002a0000 )
#define ERRFILE_imgtrust	      ( ERRFILE_OTHER | 0x002b0000 )
#define ERRFILE_menu_ui		      ( ERRFILE_OTHER | 0x002c0000 )
#define ERRFILE_dynui_cmd	      ( ERRFILE_OTHER | 0x002d0000 )
#define ERRFILE_validator	      ( ERRFILE_OTHER | 0x002e0000 )
#define ERRFILE_ocsp		      ( ERRFILE_OTHER | 0x002f0000 )
#define ERRFILE_nslookup	      ( ERRFILE_OTHER | 0x00300000 )
#define ERRFILE_efi_snp_hii	      ( ERRFILE_OTHER | 0x00310000 )
#define ERRFILE_readline	      ( ERRFILE_OTHER | 0x00320000 )
#define ERRFILE_efi_bofm	      ( ERRFILE_OTHER | 0x00330000 )
#define ERRFILE_efi_console	      ( ERRFILE_OTHER | 0x00340000 )
#define ERRFILE_efi_debug	      ( ERRFILE_OTHER | 0x00350000 )
#define ERRFILE_efi_download	      ( ERRFILE_OTHER | 0x00360000 )
#define ERRFILE_efi_driver	      ( ERRFILE_OTHER | 0x00370000 )
#define ERRFILE_efi_file	      ( ERRFILE_OTHER | 0x00380000 )
#define ERRFILE_efi_init	      ( ERRFILE_OTHER | 0x00390000 )
#define ERRFILE_efi_timer	      ( ERRFILE_OTHER | 0x003a0000 )
#define ERRFILE_efi_umalloc	      ( ERRFILE_OTHER | 0x003b0000 )
#define ERRFILE_linux_pci	      ( ERRFILE_OTHER | 0x003c0000 )
#define ERRFILE_pci_settings	      ( ERRFILE_OTHER | 0x003d0000 )
#define ERRFILE_efi_reboot	      ( ERRFILE_OTHER | 0x003e0000 )
#define ERRFILE_memmap_settings	      ( ERRFILE_OTHER | 0x003f0000 )
#define ERRFILE_param_cmd	      ( ERRFILE_OTHER | 0x00400000 )
#define ERRFILE_deflate		      ( ERRFILE_OTHER | 0x00410000 )
#define ERRFILE_xenstore	      ( ERRFILE_OTHER | 0x00420000 )
#define ERRFILE_xenbus		      ( ERRFILE_OTHER | 0x00430000 )
#define ERRFILE_xengrant	      ( ERRFILE_OTHER | 0x00440000 )
#define ERRFILE_efi_utils	      ( ERRFILE_OTHER | 0x00450000 )
#define ERRFILE_efi_wrap	      ( ERRFILE_OTHER | 0x00460000 )
#define ERRFILE_vmbus		      ( ERRFILE_OTHER | 0x00470000 )
#define ERRFILE_efi_time	      ( ERRFILE_OTHER | 0x00480000 )
#define ERRFILE_efi_watchdog	      ( ERRFILE_OTHER | 0x00490000 )
#define ERRFILE_efi_pxe		      ( ERRFILE_OTHER | 0x004a0000 )
#define ERRFILE_efi_usb		      ( ERRFILE_OTHER | 0x004b0000 )
#define ERRFILE_efi_fbcon	      ( ERRFILE_OTHER | 0x004c0000 )
#define ERRFILE_efi_local	      ( ERRFILE_OTHER | 0x004d0000 )
#define ERRFILE_efi_entropy	      ( ERRFILE_OTHER | 0x004e0000 )
#define ERRFILE_cert_cmd	      ( ERRFILE_OTHER | 0x004f0000 )
#define ERRFILE_acpi_settings	      ( ERRFILE_OTHER | 0x00500000 )
#define ERRFILE_ntlm		      ( ERRFILE_OTHER | 0x00510000 )
#define ERRFILE_efi_veto	      ( ERRFILE_OTHER | 0x00520000 )
#define ERRFILE_efi_autoboot	      ( ERRFILE_OTHER | 0x00530000 )
#define ERRFILE_efi_autoexec	      ( ERRFILE_OTHER | 0x00540000 )
#define ERRFILE_efi_cachedhcp	      ( ERRFILE_OTHER | 0x00550000 )
#define ERRFILE_linux_sysfs	      ( ERRFILE_OTHER | 0x00560000 )
#define ERRFILE_linux_acpi	      ( ERRFILE_OTHER | 0x00570000 )
#define ERRFILE_dynkeymap	      ( ERRFILE_OTHER | 0x00580000 )
#define ERRFILE_pci_cmd		      ( ERRFILE_OTHER | 0x00590000 )
#define ERRFILE_dhe		      ( ERRFILE_OTHER | 0x005a0000 )
#define ERRFILE_efi_cmdline	      ( ERRFILE_OTHER | 0x005b0000 )
#define ERRFILE_efi_rng		      ( ERRFILE_OTHER | 0x005c0000 )
#define ERRFILE_efi_shim	      ( ERRFILE_OTHER | 0x005d0000 )
#define ERRFILE_efi_settings	      ( ERRFILE_OTHER | 0x005e0000 )
#define ERRFILE_x25519		      ( ERRFILE_OTHER | 0x005f0000 )
#define ERRFILE_des		      ( ERRFILE_OTHER | 0x00600000 )
#define ERRFILE_editstring	      ( ERRFILE_OTHER | 0x00610000 )
#define ERRFILE_widget_ui	      ( ERRFILE_OTHER | 0x00620000 )
#define ERRFILE_form_ui		      ( ERRFILE_OTHER | 0x00630000 )
#define ERRFILE_usb_cmd		      ( ERRFILE_OTHER | 0x00640000 )
#define ERRFILE_usb_settings	      ( ERRFILE_OTHER | 0x00650000 )
#define ERRFILE_dynui   	      ( ERRFILE_OTHER | 0x00660000 )

/** @} */

#endif /* _IPXE_ERRFILE_H */
