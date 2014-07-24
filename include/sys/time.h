#ifndef MINLIBC_SYS_TIME_H
#define MINLIBC_SYS_TIME_H

#include <time.h>

struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};

int gettimeofday(struct timeval *tv, struct timezone *tz);

#endif
