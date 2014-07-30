/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/resource.h>
#include <runtime_reqs.h>

int getrusage(int who, struct rusage *usage)
{
  return runtime_rusage(who, usage);
}
