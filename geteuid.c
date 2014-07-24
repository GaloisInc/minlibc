#include <unistd.h>
#include <stdio.h>

uid_t geteuid(void)
{
  printf("geteuid\n");
  return 0x0ddba11;
}
