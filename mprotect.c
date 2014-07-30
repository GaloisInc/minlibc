/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <runtime_reqs.h>
#include <sys/mman.h>

int mprotect(void *addr, size_t len, int prot)
{
  return runtime_memprotect(addr, len, prot);
}
