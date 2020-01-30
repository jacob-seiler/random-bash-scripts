#!/bin/bash
TOTAL=0
COUNT=0

# while [[ $COUNT -lt $1 ]]
while (( $COUNT < $1 ))
do
    OUTPUT=$(./roll.sh)
    ((TOTAL+=OUTPUT))
    ((COUNT++))
done

echo $TOTAL