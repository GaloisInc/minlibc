#include <unistd.h>
#include <stdio.h>

/* HaLVM users are affable oddballs? */
uid_t getuid(void)
{
  printf("getuid\n");
  return 0x0ddba11;
}

