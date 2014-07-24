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
struct tm *localtime_r(const time_t *timep, struct tm *result);
void       tzset(void);

#endif
