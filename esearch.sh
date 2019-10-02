#!/bin/bash

echo "Hello $#"

count=0

for var in $@
do
    case $var in
        *e*)
            ((count++))
        ;;
    esac
done

echo $count