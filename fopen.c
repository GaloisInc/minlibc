/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

FILE *fopen(const char *path, const char *mode)
{
#ifdef PROFILING
  return profile_fopen(path, mode);
#else
  errno = EACCES;
  return NULL;
#endif
}
