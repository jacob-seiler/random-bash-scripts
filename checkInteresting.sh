DIR=$1
COUNT=0

for file in $DIR/*
do
    if [[ -f $file ]]
    then
        if [[ -r $file ]]
        then
            OUTPUT=$(bash ./interesting.sh $file)
            if [[ $OUTPUT == "Yes" ]]
            then
                ((COUNT++))
            fi
        else
            echo "ERROR: $file is not readable" >&2
        fi
    fi
done

echo $COUNT