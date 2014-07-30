/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_TERMIOS_H
#define MINLIBC_TERMIOS_H

typedef unsigned int  tcflag_t;
typedef unsigned char cc_t;

struct termios {
  tcflag_t c_iflag;
  tcflag_t c_oflag;
  tcflag_t c_cflag;
  tcflag_t c_lflag;
  cc_t     c_line;
  cc_t     c_cc[32];
};

int tcgetattr(int fd, struct termios *termios_p);
int tcsetattr(int fd, int opts, const struct termios *termios_p);

#endif
