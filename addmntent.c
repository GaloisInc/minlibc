#include <stdlib.h>
#include <stdio.h>
#include <mntent.h>

int addmntent(FILE *fp __attribute__((unused)),
              const struct mntent *mnt __attribute__((unused)))
{
  return 1;
}
