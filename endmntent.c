#include <stdlib.h>
#include <stdio.h>
#include <mntent.h>

int endmntent(FILE *fp __attribute__((unused)))
{
  return 1;
}
