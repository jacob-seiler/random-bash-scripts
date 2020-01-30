if [[ $# < 2 ]]
then
    echo "Error"
    exit
fi

CHECK=$1

for arg in $*
do
    if [[ $arg != $CHECK ]]
    then
        echo "They are different"
        exit
    fi
done

echo "They are the same"