#include <unistd.h>
#include <stdio.h>
#include <errno.h>

ssize_t read(int fildes __attribute__((unused)),
             void *buf __attribute__((unused)),
             size_t nbyte __attribute__((unused)))
{
  printf("read\n");
  errno = EBADF;
  return -1;
}

