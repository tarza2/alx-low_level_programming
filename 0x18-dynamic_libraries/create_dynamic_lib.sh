#!/bin/bash
gcc -fptc -c *.c
gcc -shared *.o -o liball.o
