#ifndef MINLIBC_SYS_EVENTFD_H
#define MINLIBC_SYS_EVENTFD_H

typedef unsigned long long eventfd_t;

int eventfd(unsigned int initval, int flags);
int eventfd_write(int, eventfd_t val);

#endif
