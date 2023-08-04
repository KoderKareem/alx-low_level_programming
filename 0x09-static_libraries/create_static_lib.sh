#!/bin/bash

# Compile each .c file in the current directory into object files
for file in *.c; do
    gcc -c "$file"
done

# Create the static library by archiving the object files
ar rcs liball.a *.o

# Clean up the object files
rm -f *.o

echo "Static library liball.a created successfully."
