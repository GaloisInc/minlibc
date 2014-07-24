#include <stdlib.h>
#include <stdio.h>
#include <mntent.h>

struct mntent *getmntent(FILE *fp __attribute__((unused)))
{
  return NULL;
}
