#include <sys/resource.h>
#include <runtime_reqs.h>

int getrusage(int who, struct rusage *usage)
{
  return runtime_rusage(who, usage);
}
