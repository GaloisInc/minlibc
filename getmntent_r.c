/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdlib.h>
#include <stdio.h>
#include <mntent.h>

struct mntent *getmntent_r(FILE *fp __attribute__((unused)),
                           struct mntent *mntbuf __attribute__((unused)),
                           char *buf __attribute__((unused)),
                           int buflen __attribute__((unused)))
{
  return NULL;
}
