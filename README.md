# inetd-microservices

## Project archived
Turns out bash scripts are actually fairly fast for *some* tasks, and I already have nginx running and it's way faster (and more secure) than both. Still, I did learn a bit about C++.

## Why?
C++ is so much faster than bash scripts, espescially on embedded systems (e.g. Raspberry Pi) where this matters.

## How to use
- Install gcc and g++ toolchain for your system
- Install libstdc++-6, copy .dll to the correct directory if needed
- `g++ [file]`
- Note: `-std=c++0x` may be needed for some installations
- Run it!
