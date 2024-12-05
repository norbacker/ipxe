/**************************************************************************
iPXE -  Network Bootstrap Program

Literature dealing with the network protocols:
	ARP - RFC826
	RARP - RFC903
	UDP - RFC768
	BOOTP - RFC951, RFC2132 (vendor extensions)
	DHCP - RFC2131, RFC2132 (options)
	TFTP - RFC1350, RFC2347 (options), RFC2348 (blocksize), RFC2349 (tsize)
	RPC - RFC1831, RFC1832 (XDR), RFC1833 (rpcbind/portmapper)

**************************************************************************/

FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

#include <stddef.h>
#include <stdio.h>
#include <stdio.h>
#include <ipxe/init.h>
#include <ipxe/version.h>
#include <usr/autoboot.h>
#include <ipxe/dhcp.h>
#include <ipxe/settings.h>
#include <stdlib.h>

/** The "scriptlet" setting */
const struct setting scriptlet_setting __setting ( SETTING_MISC, scriptlet ) = {
	.name = "scriptlet",
	.description = "Boot scriptlet",
	.tag = DHCP_EB_SCRIPTLET,
	.type = &setting_type_string,
};

/**
 * Main entry point
 *
 * @ret rc		Return status code
 */
__asmcall int main ( void ) {
	char *scriptlet;
	int rc = 0;

	/* Perform one-time-only initialisation (e.g. heap) */
	initialise();

	/* Some devices take an unreasonably long time to initialise */
	printf ( "%s initialising devices...\n", product_short_name );
	startup();

	/* Attempt to boot */
	fetch_string_setting_copy ( NULL, &scriptlet_setting,
					&scriptlet );
	if ( scriptlet ) {
		/* User has defined a scriptlet; execute it */
		rc = system ( scriptlet );
		free ( scriptlet );
	}

	shutdown_exit();
	return rc;
}
