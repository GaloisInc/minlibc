#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int close(int fd __attribute__ ((unused)))
{
  printf("close\n");
  errno = EBADF;
  return (-1);
}
