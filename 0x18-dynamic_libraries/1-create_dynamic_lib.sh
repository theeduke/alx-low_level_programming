#!/bin/bash
#compile *.c to *o
gcc *.c -c -fPIC
#create liball.so
gcc *.o -sharred -o liball.so
