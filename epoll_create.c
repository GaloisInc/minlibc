#include <sys/epoll.h>
#include <stdio.h>
#include <errno.h>

int epoll_create(int size __attribute__((unused)))
{
  printf("epoll_create\n");
  errno = ENOMEM;
  return -1;
}
