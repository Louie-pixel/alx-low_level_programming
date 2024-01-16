#!/bin/bash

# Compile each .c file (excluding _putchar.c) into individual object files
for file in *.c; do
  if [ "$file" != "_putchar.c" ]; then
    gcc -Wall -fPIC -c "$file"
  fi
done

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
