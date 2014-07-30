/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <time.h>
#include <runtime_reqs.h>

time_t time(time_t *t)
{
  time_t retval = runtime_time();
  if(t) *t = retval;
  return retval;
}
