#ifndef MINLIBC_MMAN_H
#define MINLIBC_MMAN_H

#include <sys/types.h>

#define PROT_NONE               0x0
#define PROT_READ               0x1
#define PROT_WRITE              0x2
#define PROT_EXEC               0x4
#define PROT_NOCACHE            0x8
#define PROT_READWRITE          (PROT_READ | PROT_WRITE)

#define MAP_ANON                0x20
#define MAP_ANONYMOUS           0x20
#define MAP_PRIVATE             0x02
#define MAP_FAILED              ((void *) -1)

void *mmap(void *start, size_t length, int prot, int flags, int fd, off_t off);
int   munmap(void *start, size_t length);
void *mremap(void *old_address, size_t old_size, size_t new_size, int flags);
int   mprotect(void *addr, size_t len, int prot);

#endif
