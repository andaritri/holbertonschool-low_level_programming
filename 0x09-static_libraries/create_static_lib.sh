#!/bin/sh
gcc -Wall -c *.c | ar rc liball.a *.o
