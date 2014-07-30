/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>
#include <runtime_reqs.h>

int gettimeofday(struct timeval *tv,
                 struct timezone *tz __attribute__((unused)))
{
  return runtime_gettimeofday(tv);
}
