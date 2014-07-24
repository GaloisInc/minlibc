#include <unistd.h>
#include <stdio.h>
#include <errno.h>

off_t lseek(int fildes __attribute__ ((unused)),
            off_t offset __attribute__ ((unused)),
            int whence __attribute__ ((unused)))
{
  printf("lseek\n");
  errno = EBADF;
  return -1;
}

