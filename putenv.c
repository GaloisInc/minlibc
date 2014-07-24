#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

int putenv(char *str)
{
  printf("WARNING: putenv('%s')\n", str);
  return ENOMEM;
}
