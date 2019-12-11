TOTAL=0

for i in $*
do
    if (( $i % 2 ))
    then
        VAL=0
        ((VAL=$i*$i))
        ((TOTAL+=$VAL))
    fi
done

echo $TOTAL