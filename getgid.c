#include <unistd.h>
#include <stdio.h>

gid_t getgid(void)
{
  printf("getgid\n");
  return 0xaffab1e;
}
