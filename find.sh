if [[ $# == 0 ]]
then
    DIR=*
else
    DIR=$1/*
fi

# TODO only print file if modified within day
for file in $DIR
do
    if [[ -d $file ]]
    then
        bash ./find.sh $file
    else
        EXT=${file: -4}
        if [[ $EXT == ".txt" ]]
        then
            echo $file
        fi
    fi
done