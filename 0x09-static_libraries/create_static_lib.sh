#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -ar liball.a *.o
ranlib liball.a
