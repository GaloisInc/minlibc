/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

size_t fread(void *ptr    __attribute__((unused)),
             size_t size  __attribute__((unused)),
             size_t nmemb __attribute__((unused)),
             FILE *stream __attribute__((unused)))
{
  // XXX is this the right errno value?
  printf("fread\n");
  errno = EACCES;
  return 0;
}
