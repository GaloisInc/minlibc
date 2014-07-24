#include <sys/select.h>
#include <runtime_reqs.h>
#include <stdio.h>
#include <stdlib.h>

int select(int nfds __attribute__((unused)),
           fd_set *reads __attribute__((unused)),
           fd_set *writes __attribute__((unused)),
           fd_set *excs __attribute__((unused)),
           struct timeval *timeout)
{
  printf("select\n");
  if(!timeout) {
    printf("select() called with endless wait. aborting.\n");
    abort();
  }

  runtime_block((timeout->tv_sec * 1000) + (timeout->tv_usec / 1000));
  return 0;
}
