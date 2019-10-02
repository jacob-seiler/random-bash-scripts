count=0

for var in $*
do
    if [[ $var =~ "e" ]]
    then
        ((count++))
    fi
done

echo $count