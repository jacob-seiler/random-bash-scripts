#!/bin/bash
count=0

for var in ./*; do
    case $var in
        *.c*)
            echo "C File - $var"
            ((count += $(sh ./grade.sh)))
        ;;
    esac
done

echo "Total score = $count"