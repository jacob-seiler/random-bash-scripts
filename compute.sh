FILENAME=$1

if [[ $FILENAME == "file1" ]]; then
    echo "11"
elif [[ $FILENAME == "file2" ]]; then
    echo "5"
else
    echo "99"
    exit 1
fi