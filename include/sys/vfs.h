#ifndef MINLIBC_SYS_VFS_H
#define MINLIBC_SYS_VFS_H

struct statfs {};

int statfs(const char *path, struct statfs *buf);

#endif
