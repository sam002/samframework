/*
 * Author: Semen Dubina <semen@sam002.net>
 * Created on 04 Nov 2015
 */
#include <libconfig.h>
#include <unistd.h>
#include "config.h"

void show_version()
{
	write(1, CONST_STR_LEN(
			SAMFRAMEWORK_DESC "\n"
		));
}

void show_help()
{
	write(1, CONST_STR_LEN(
		"Usage: samframework [options]\n"
		"\n"
		SAMFRAMEWORK_DESC
		"\n"
		"Options:\n"
		" -v             show version\n"
		" -?, -h         show this help\n"
		" -t             check configuration files\n"
		" -c             set configuration file (default: " SAMFRAMEWORK_PATH ")\n"
		"-d              run as daemon\n"
#ifdef SAMFRAMEWORK_PREFIX
		" -p <prefix>     : set prefix path (default: " SAMFRAMEWORK_PREFIX ")\n"
#else
		" -p <prefix>     : set prefix path (default: NONE)\n"
#endif
	));
}

int check_config()
{
	return parse_config();
}

int parse_config()
{
	//
	return 125;
}
