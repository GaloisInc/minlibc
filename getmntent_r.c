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
