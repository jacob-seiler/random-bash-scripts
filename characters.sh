if [ $# == 0 ]
then
    echo "No arguments" >&2
    exit 1
fi

file=temp.txt
touch $file

# Loop through arguments
for var in $*
do
    # Loop through characters
    for ((i=0; i < ${#var}; i++))
    do
        char=${var:i:1}

        if [[ $char != [a-zA-Z] ]]
        then
            echo "Illegal character $char" >&2
            rm $file
            exit 2
        fi

        echo $char >> $file
    done
done

# Print file sorted
sort -u $file

# Delete file
rm $file