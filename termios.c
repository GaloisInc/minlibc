/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdlib.h>

static void *saved_termios[3] = { NULL, NULL, NULL };

void *__hscore_get_saved_termios(int);
void  __hscore_set_saved_termios(int fd, void *ts);

void *__hscore_get_saved_termios(int fd)
{
  if(0 <= fd && fd < 3)
    return saved_termios[fd];
  else
    return NULL;
}

void  __hscore_set_saved_termios(int fd, void *ts)
{
  if(0 <= fd && fd < 3)
    saved_termios[fd] = ts;
}
