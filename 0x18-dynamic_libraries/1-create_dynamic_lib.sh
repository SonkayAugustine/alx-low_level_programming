#!/bin/bash
gcc -fPIC -Wall -Wextra -pedantic -c *.c
gcc -shared -o liball.so *.o
