#include <sys/eventfd.h>
#include <stdio.h>
#include <errno.h>

int eventfd(unsigned int initval __attribute__((unused)),
            int flags __attribute__((unused)))
{
  printf("eventfd\n");
  errno = EINVAL;
  return -1;
}

