#ifndef MINLIBC_POLL_H
#define MINLIBC_POLL_H

#include <stdlib.h>

typedef unsigned long int nfds_t;

struct pollfd {
  int       fd;
  short int events;
  short int revents;
};

#define POLLIN          0x001
#define POLLOUT         0x004
#define POLLERR         0x008
#define POLLHUP         0x010

int poll(struct pollfd *fds, nfds_t nfds, int timeout);

#endif
