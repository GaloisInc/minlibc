#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int isatty(int fd)
{
  if(fd >= 0 && fd <= 2)
    return 1;
  errno = EBADF;
  return 0;
}
