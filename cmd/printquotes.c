/*
 * Copyright 2016
 * Muthukumar, Zilogic Systems Embedded Developer, muthukumar@zilogic.com
 */

/*
 * printquotes command
 */

#include <common.h>
#include <command.h>

#define Q1 "Quote-1: \nCommon sense is nothing more than a deposit of prejudices laid down in the mind before you reach eighteen.\n \t\t\t\t\t - Albert Einstein\n"
#define Q2 "Quote-2: \nThe scientists of today think deeply instead of clearly. One must be sane to think clearly, but one can think deeply and be quite insane.\n\t\t\t\t\t - Nikola Tesla\n"
#define Q3 "Quote-3: \nMy only desire is that India should be a good producer and no one should be hungry, shedding tears for food in the country.\n\t\t\t\t\t - Sardar Vallabhai Patel\n"
#define Q4 "Quote-4: \nRemember that the grossest crime is to compromise with injustice and wrong. Remember the eternal law: you must give, if you want to get. \n\t\t\t\t\t - Netaji Subhash Chandra Bose.\n"

int do_printquotes(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
    if ((argc == 2) && (argv[1][1] == '\0')) {
	    switch(argv[1][0]) {
		case '1':
			puts(Q1);
			break;
		case '2':
			puts(Q2);
			break;
		case '3':
			puts(Q3);
			break;
		case '4':
			puts(Q4);
			break;		
		default:
			puts("Try 'help printquotes'\n");
			break;
		}
	} else if (argc == 1)
		puts( Q1 Q2 Q3 Q4 );
	else
		puts("Try 'help printquotes'\n");

	return 0;	
}

U_BOOT_CMD(
	printquotes,                                    /* name        */
	2,                                              /* maxargs     */
	0,                                              /* repereatble */
	do_printquotes,                                 /* command     */
	"prints predefined quotes in console \n",       /* usage       */
	"[# of quotes] - printquotes [1 | 2 | 3 | 4]\n" /* help        */
	);


