#include <stdlib.h>
#include <stdio.h>
#include <mntent.h>

char *hasmntopt(const struct mntent *mnt __attribute__((unused)),
                const char *opt __attribute__((unused)))
{
  return NULL;
}
