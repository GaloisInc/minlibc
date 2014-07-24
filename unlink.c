#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int unlink(const char *pathname __attribute__ ((unused)))
{
  printf("unlink\n");
  errno = ENOENT;
  return (-1);
}
