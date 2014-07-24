#include <unistd.h>
#include <stdio.h>

gid_t getegid(void)
{
  printf("getegid\n");
  return 0xaffab1e;
}
