#!/bin/bash
gcc -fPIC -shared *.c -o liball.so
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
