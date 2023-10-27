#!/bin/bash
gcc -Wall -pendantic -Werror -Wextra -c std=gnu89  *.c
ar -rc liball.a *.o
ranlib liball.a
