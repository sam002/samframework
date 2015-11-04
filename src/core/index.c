/*
 * Author: Semen Dubina <semen@sam002.net>
 * Created on 04 Nov 2015
 */

//FIXME
#include <sys/utsname.h>	/* uname */
#include <getopt.h>
#include <fcgi_stdio.h>
#include <stdlib.h>
#include <sys/syslog.h>
#include <string.h>

#include "index.h"

/**************************** FUNCTION DECLARATION ****************************/

/* end ************************************************ FUNCTION DECLARATION  */



/**************************   MAIN PROGRAM CODE   *****************************/


int main(int argc, char **argv)
{
	int o;
    int check = 0;

	while (-1 != (o = getopt(argc, argv, "v:h:h:?:t"))) {
		switch(o) {
            case 't':
                check = 1;
            case 'c':
                parse_config(optarg);
            case 'v':
                show_version();
                break;
            case 'h':
            case '?':
            default:
                show_help();
		}
	}
    if(check){
        return check_config();
    }

#ifdef DEBUG
	syslog(LOG_DEBUG,"exit");
#endif
	return 0;
}

/* end ************************************************   MAIN PROGRAM CODE   */
