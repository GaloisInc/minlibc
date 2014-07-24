#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <runtime_reqs.h>

ssize_t write(int filedes, const void *buf, size_t nbyte)
{
  printf("write\n");
  if(filedes == 0 || filedes > 2) {
    errno = EBADF;
    return -1;
  }
  runtime_write(nbyte, (char*)buf);
  return nbyte;
}

