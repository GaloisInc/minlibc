#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

mode_t umask(mode_t cmask)
{
  static mode_t mask = 0;
  int retval = mask;
  printf("umask\n");
  mask = cmask;
  return retval;
}
