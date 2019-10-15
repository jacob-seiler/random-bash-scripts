quizes=$1
evaluation=$2
len=${#quizes}
((len++))

# Remove file if it exists
if [ -f results.txt ]
then
    rm results.txt
fi

touch results.txt

# Loop through all quizes
for quiz in $quizes/*
do
    # Run eval script on quiz
    score=$(bash $evaluation $quiz)

    # Store result in results.txt
    echo ${quiz:len} $score >> results.txt
done
