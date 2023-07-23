#!/bin/bash
gcc -Wall -pendantic -Werror -Wextra -c .c
ar -rc liball.a *.c
ranlib liball.a
