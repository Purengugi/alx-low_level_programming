#!/bin/bash

# AUTHOR: Purengugi
# DATE:   12/05/2023
# NAME:   wyrmlin.sh


##########################################################################

mkdir 0x09-static_libraries
cd 0x09-static_libraries

read -p "Enter your readme text: " text
echo "$text" > README.md

cd ../0x02-functions_nested_loops
cp _putchar.c 3-islower.c 4-isalpha.c 6-abs.c ../0x09-static_libraries
cd ../0x04-more_functions_nested_loops
cp 1-isdigit.c 0-isupper.c ../0x09-static_libraries
cd ../0x05-pointers_arrays_strings
cp 100-atoi.c 2-strlen.c 3-puts.c 9-strcpy.c ../0x09-static_libraries
cd ../0x06-pointers_arrays_strings
cp 0-strcat.c 1-strncat.c 2-strncpy.c 3-strcmp.c ../0x09-static_libraries
cd ../0x07-pointers_arrays_strings
cp 0-memset.c 1-memcpy.c 2-strchr.c 5-strstr.c 4-strpbrk.c 3-strspn.c ../0x09-static_libraries

cd ../0x09-static_libraries


echo -e "######################################################\n"
echo -e "ALL source files successfully copied!!!\n"
echo -e "######################################################\n"


# END OF SCRIPT.
############################################################################
