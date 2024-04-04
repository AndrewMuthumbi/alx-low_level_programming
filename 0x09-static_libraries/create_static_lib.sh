#!/bin/bash

# Compile all .c files in the current directory and create object files
gcc -c *.c

# Create a static library named liball.a from all the object files
ar -rcs liball.a *.o

# Coverts each archive library into a random library
ranlib liball.a

# Clean up by removing the object files
rm -f *.o
