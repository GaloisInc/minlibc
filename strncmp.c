#include <string.h>

int strncmp(const char *str1, const char *str2, size_t count) 
{
  register signed char __res = 0;

  while(count--) {
    if ((__res = *str1 - *str2) != 0 || !*str1++ || !*str2++)
      break;
  }
  return __res;
}

