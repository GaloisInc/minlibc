#include <unistd.h>
#include <stdio.h>
#include <errno.h>

pid_t getpid(void)
{
  printf("getpid\n");
  return 0xca5cad1a;
}
