/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <time.h>
#include <stdio.h>

char *weekdays[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
char *months[12]  = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
                      "Aug", "Sep", "Oct", "Nov", "Dec" };

char *ctime_r(const time_t *timep, char *buf)
{
    struct tm tm;
    time_t now = time((time_t*)timep);
    localtime_r(&now, &tm);
    snprintf(buf, 26, "%s %s %02i %02i:%02i:%02i %i\n",
             weekdays[tm.tm_wday], months[tm.tm_mon], tm.tm_mday, tm.tm_hour,
             tm.tm_min, tm.tm_sec, tm.tm_year + 1900);
    return buf;
}
