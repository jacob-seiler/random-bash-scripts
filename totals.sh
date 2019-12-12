SUM=0
ERRORS=0

for var in $*; do
    OUTPUT=$(bash ./compute.sh $var)
    if [[ $? == 0 ]]; then
        ((SUM+=$OUTPUT))
    else
        ((ERRORS++))
    fi
done

echo "sum of all compute values: $SUM"
echo "number of failures: $ERRORS"