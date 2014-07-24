#include <stdio.h>
#include <errno.h>

size_t fread(void *ptr    __attribute__((unused)),
             size_t size  __attribute__((unused)),
             size_t nmemb __attribute__((unused)),
             FILE *stream __attribute__((unused)))
{
  // XXX is this the right errno value?
  printf("fread\n");
  errno = EACCES;
  return 0;
}
