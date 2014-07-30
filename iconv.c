/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <iconv.h>
#include <errno.h>
#include <stdio.h>

size_t iconv(iconv_t cd __attribute__((unused)),
             char **inbuf, size_t *inbytesleft,
             char **outbuf, size_t *outbytesleft)
{
  /* The main case is when inbuf is not NULL and *inbuf is not NULL */
  if(inbuf && *inbuf) {
    size_t bytesConverted = 0;

    if(!outbuf || !(*outbuf)) {
      /* this case is not noted by the man page, which is sad */
      printf("bad iconv() case; (*)inbuf is good but (*)outbuf isn't\n");
      errno = EINVAL;
      return -1;
    }

    do {
      if(*inbytesleft == 0)
        return bytesConverted;
      if(*outbytesleft == 0) {
        errno = E2BIG;
        return -1;
      }

      **outbuf       = **inbuf;
      *outbuf       += 1;
      *inbuf        += 1;
      *outbytesleft -= 1;
      *inbytesleft  -= 1;
    } while(1);
  }

  /* the other two cases appear to not apply, or the appropriate return */
  /* value is zero in any case.                                         */
  return 0;
}
