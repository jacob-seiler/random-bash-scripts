FILENAME=$1

if [[ -f $FILENAME ]]
then
    if [[ -w $FILENAME ]]
    then
        echo "$FILENAME exists and is writable"
    else
        echo "$FILENAME exists but is not writable"
    fi
else
    echo "$FILENAME does not exist"
fi