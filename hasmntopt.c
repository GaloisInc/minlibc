/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdlib.h>
#include <stdio.h>
#include <mntent.h>

char *hasmntopt(const struct mntent *mnt __attribute__((unused)),
                const char *opt __attribute__((unused)))
{
  return NULL;
}
