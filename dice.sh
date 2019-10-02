#!/bin/bash

total=0
count=0

# while [[ $count -lt $1 ]]
while (( $count  < $1 ))
do
    ((total+=$(sh ./roll.sh)))
    ((count++))
done

echo $total