#!/bin/bash

# Compile each .c file into corresponding .o files
gcc -c *.c

# Create the static library
ar rcs liball.a *.o

# List the contents of the static library
ar -t liball.a

# Remove the .o files
rm *.o
