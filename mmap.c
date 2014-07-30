/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/mman.h>
#include <runtime_reqs.h>
#include <stdlib.h>

void *mmap(void *start, size_t length, int prot,
           int flags __attribute__((unused)),
           int fd, off_t offset __attribute__((unused)))
{
  if(fd != -1)
    return NULL;

  return runtime_alloc(start, length, prot);
}
