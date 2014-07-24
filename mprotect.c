#include <runtime_reqs.h>
#include <sys/mman.h>

int mprotect(void *addr, size_t len, int prot)
{
  return runtime_memprotect(addr, len, prot);
}
