#include <runtime_reqs.h>
#include <sys/mman.h>

void *mremap(void *old_address, size_t old_size, size_t new_size, int flags)
{
  return runtime_realloc(old_address, flags, old_size, new_size);
}
