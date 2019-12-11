FILENAME=$1
EXT=""

for (( i=0; i<${#FILENAME}; i++ ))
do
    CHAR=${FILENAME:i:1}

    if [[ $CHAR == "." ]]
    then
        EXT="."
    else
        EXT+=$CHAR
    fi
done

echo $EXT