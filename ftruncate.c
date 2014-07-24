#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int ftruncate(int fd __attribute__ ((unused)),
              off_t length __attribute__ ((unused)))
{
  printf("ftruncate\n");
  errno = EPERM;
  return (-1);
}
