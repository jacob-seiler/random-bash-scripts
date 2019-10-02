#!/bin/bash

# Loop through current directory files
# If directory, call recursively
# If .txt file, read
    # If file contains "King", print file name and continue

for var in ./*; do
    case $var in
        *.*)
            echo "File - $var"
        ;;
        *)
            echo "Folder - $var"
        ;;
    esac
done