/*
 * Copyright 2016
 * Muthukumar, Zilogic Systems Embedded Developer, muthukumar@zilogic.com
 */

/*
 * clear screen command
 */

#include <common.h>
#include <command.h>

int do_clear(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	puts("\e[2J\e[H");
	return 0;
}

U_BOOT_CMD(
	clear,                          /* name              */
	1,                              /* maxargs           */
	0,                              /* repereatble       */
	do_clear,                       /* command           */
	"clear the screen\n",           /* usage             */
	""                              /* help              */
	);
