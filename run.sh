#!/bin/bash

# Compile and run all .c files in the current directory
for file in src/*.c; do
    if [ -f "$file" ]; then
        /home/greeed/.local/bin/crun -H "$file"
        echo
    fi
done
