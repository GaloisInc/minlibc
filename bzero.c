#include <strings.h>

void bzero(void *ptr, size_t size)
{
  unsigned long i;
  unsigned char *p = ptr;
  for(i = 0; i < size; ++i) p[i] = 0;
}

