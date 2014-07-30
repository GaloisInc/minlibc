/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_SIGNAL_H
#define MINLIBC_SIGNAL_H

#include <sys/types.h>

typedef signed int siginfo_t;
typedef unsigned long sigset_t;
typedef void (*__sighandler_t)(int);

struct sigaction {
  __sighandler_t sa_handler;
  unsigned long sa_flags;
  sigset_t sa_mask;
};

#define SIG_DFL ((__sighandler_t)0)
#define SIG_UNBLOCK 1

int sigemptyset(sigset_t *set);
int sigfillset(sigset_t *set);
int sigaddset(sigset_t *set, int signum);
int sigdelset(sigset_t *set, int signum);
int sigismember(const sigset_t *set, int signum);

int sigprocmask(int how, const sigset_t *set, sigset_t *oldset);
int sigaction(int signum, const struct sigaction *act,
		          struct sigaction *oldact);

int raise(int sig);
int kill(pid_t pid, int sig);

#define SIGCONT		18
#define SIGSTOP		19
#define SIGTSTP		20
#define SIGTTIN		21
#define SIGTTOU		22

#endif
