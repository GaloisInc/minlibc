#include <poll.h>
#include <runtime_reqs.h>
#include <stdio.h>

int poll(struct pollfd *fds __attribute__((unused)),
         nfds_t nfds,
         int timeout)
{
  printf("poll called with %ld fds and a timeout of %d\n", nfds, timeout);
  switch(timeout) {
    case -1:
      printf("  ... which will never wake up, so I'm giving up.\n");
      abort();
    case 0:
      return 0;
    default:
      runtime_block(timeout);
      return 0;
  }
}
