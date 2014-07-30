/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdlib.h>
#include <stdio.h>
#include <mntent.h>

int addmntent(FILE *fp __attribute__((unused)),
              const struct mntent *mnt __attribute__((unused)))
{
  return 1;
}
