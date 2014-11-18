#include <time.h>
#include <runtime_reqs.h>
#include <errno.h>

int clock_gettime(clockid_t clk_id, struct timespec *tp)
{
  struct timeval tv;
  int res;

  if(!tp) {
    errno = EFAULT;
    return -1;
  }

  if(clk_id != CLOCK_REALTIME) {
    errno = EINVAL;
    return -1;
  }

  res = runtime_gettimeofday(&tv);
  if(res != 0) {
    errno = res;
    return -1;
  }

  tp->tv_sec = tv.tv_sec;
  tp->tv_nsec = tv.tv_usec * 1000;
  return 0;
}
