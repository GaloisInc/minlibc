#include <sys/mman.h>
#include <runtime_reqs.h>

int munmap(void *start, size_t length)
{
  runtime_free(start, length);
  return 0;
}
