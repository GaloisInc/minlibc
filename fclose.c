/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

int fclose(FILE *fp)
{
#ifdef PROFILING
  if(fp) {
    profile_fclose(fp);
    return 0;
  }
#endif

  errno = EBADF;
  return EOF;
}
