if [ $# -le 1 ]
then
    echo "Error"
    exit
fi

if [ $1 == $2 ]
then
    echo "They are the same"
else
    echo "They are different"
fi