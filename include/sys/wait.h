#ifndef MINLIBC_SYS_WAIT_H
#define MINLIBC_SYS_WAIT_H

#include <sys/types.h>

pid_t waitpid(pid_t pid, int *stat_loc, int options);

#endif
