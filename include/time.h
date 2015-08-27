/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_TIME_H
#define MINLIBC_TIME_H

#include <stdlib.h>

#ifdef __x86_64__
typedef signed long      time_t;
#else
typedef signed long long time_t;
#endif

typedef signed long      suseconds_t;

struct timeval {
  time_t      tv_sec;
  suseconds_t tv_usec;
};

struct tm {
  int         tm_sec;
  int         tm_min;
  int         tm_hour;
  int         tm_mday;
  int         tm_mon;
  int         tm_year;
  int         tm_wday;
  int         tm_yday;
  int         tm_isdst;
  int         tm_gmtoff;
  const char *tm_zone;
};

time_t     time(time_t *tloc);
char      *ctime_r(const time_t *timep, char *buf);
struct tm *gmtime_r(const time_t *timep, struct tm *result);
struct tm *localtime_r(const time_t *timep, struct tm *result);
void       tzset(void);

typedef long int slong_t;

struct timespec {
  time_t tv_sec;
  slong_t tv_nsec;
};

typedef signed int clockid_t;

#define CLOCK_REALTIME 0
int        clock_gettime(clockid_t clk_id, struct timespec *tp);

#endif
