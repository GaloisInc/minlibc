/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <time.h>
#include <time.h>

static const int days_per_month[2][12] = {
  { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
  { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

static const int days_per_year[2] = { 365, 366 };

static int is_leap_year(int year)
{
  // A years is a leap year if it is divisible by 4 except when the year
  // is divisible by 100 but not 400.
  return (year % 4 == 0) && !( (year % 100 == 0) && (year % 400 != 0) );
}

/*                        sec  min  hr   days */
#define secs_per_year(x) (60 * 60 * 24 * days_per_year[is_leap_year(x)])
#define secs_per_mon(x,y)(60 * 60 * 24 * days_per_month[is_leap_year(x)][y])
#define secs_per_day     (60 * 60 * 24)
#define secs_per_hour    (60 * 60)
#define secs_per_min     (60)

// This code disregards leap seconds.
struct tm *localtime_r(const time_t *time, struct tm *result)
{
  int cur_year = 1970; /* Groovy, man */
  int cur_month = 0, cur_day = 0, cur_hour = 0, cur_min = 0;
  int weekday = 0, yearday = 0;
  int secs_left = *time;

  /* Then compute the weekday it is. Jan 1, 1970 was a Thursday. */
  weekday = (4 + (secs_left / secs_per_day)) % 7;

  /* Start pulling off years */
  while(secs_left >= secs_per_year(cur_year)) {
    ++cur_year;
    secs_left -= secs_per_year(cur_year);
  }

  yearday = secs_left / secs_per_day;

  /* Then pull off months */
  while(secs_left >= secs_per_mon(cur_year, cur_month)) {
    ++cur_month;
    secs_left -= secs_per_mon(cur_year, cur_month);
  }

  /* Then pull off days */
  while(secs_left >= secs_per_day) {
    ++cur_day;
    secs_left -= secs_per_day;
  }

  /* Then pull off hours */
  while(secs_left >= secs_per_hour) {
    ++cur_hour;
    secs_left -= secs_per_hour;
  }

  /* Then pull off minutes */
  while(secs_left >= secs_per_min) {
    ++cur_min;
    secs_left -= secs_per_min;
  }

  result->tm_sec = secs_left;
  result->tm_min = cur_min;
  result->tm_hour = cur_hour;
  result->tm_mday = cur_day;
  result->tm_mon = cur_month;
  result->tm_year = cur_year - 1900;
  result->tm_wday = weekday;
  result->tm_yday = yearday;
  result->tm_isdst = 0;
  result->tm_gmtoff = 0;
  result->tm_zone = "HALVMST"; /* HALVM Standard Time */

  return result;
}


