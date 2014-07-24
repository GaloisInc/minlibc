# MinLibC

This repository contains an extremely minimal version of LibC, for use in
porting lightweight systems to bare metal. It intentionally errors on most file
operations, to reflect the fact that most bare metal systems do not have file
systems. Other routines are forwarded, as appropriate, to the underlying runtime
or operating system.

## Porting to a New System

All of the requirements for porting this library to a new system are defined in
the included file at [include/runtime_reqs.h](include/runtime_reqs.h).


