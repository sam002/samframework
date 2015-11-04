/*
 * Author: Semen Dubina <semen@sam002.net>
 * Created on 04 Nov 2015
 */

#ifndef SAMFRAMEWORK_CONFIG_H
#define	SAMFRAMEWORK_CONFIG_H

/* CONFIGURE */
#define SAMFRAMEWORK_NAME	"samframework"
#define SAMFRAMEWORK_VERSION	"0.1(ALPHA)"
#define SAMFRAMEWORK_DESC	SAMFRAMEWORK_NAME "/" SAMFRAMEWORK_VERSION
#define SAMFRAMEWORK_PATH "/etc/samframework/sam.conf"

#define CONST_STR_LEN(s) s, sizeof(s) - 1

void show_version();
void show_help();
int check_config();
int parse_config();

#endif	/* SAMFRAMEWORK_CONFIG_H */