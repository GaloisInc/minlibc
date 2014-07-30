/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <errno.h>
#include <string.h>
#include <stdio.h>

char  *strerror(int errnum)
{
  static char buf[1024];
  switch(errnum) {
    case EBADF: return "Bad file.\n";
    case EACCES: return "Access prohibited.\n";
  }
  sprintf(buf, "Unkown error: %d", errnum);
  return buf;
}

