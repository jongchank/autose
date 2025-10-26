#!/bin/sh
gcc -I. -c cal_main.c
gcc -I. -c add.c
gcc -I. -c sub.c
gcc -I. -c mul.c
gcc -I. -c dur.c
gcc -o prog cal_main.o add.o sub.o mul.o dur.o

