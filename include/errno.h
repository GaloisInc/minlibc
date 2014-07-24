#ifndef MINLIBC_ERRNO_H
#define MINLIBC_ERRNO_H

#define EPERM           1
#define ENOENT          2
#define ESRCH           3
#define EINTR           4
#define EIO             5
#define E2BIG           7
#define EBADF           9
#define ECHILD          10
#define EAGAIN          11
#define ENOMEM          12
#define EACCES          13
#define EFAULT          14
#define EBUSY           16
#define EEXIST          17
#define EISDIR          21
#define EINVAL          22
#define EMFILE          24
#define ENOSPC          28
#define EROFS           30
#define ERANGE          34
#define EDEADLK         35
#define ENOTEMPTY       39
#define EXFULL          54
#define ENOSYS          78
#define EISCONN         106

extern int errno;

int *__errno_location(void);

#endif
