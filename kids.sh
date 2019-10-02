brother=$1
sister=$2

echo "My brother is $brother years old"
echo "My sister is $sister years old"

if [ $1 -gt $2 ]
then
    echo "My brother is older"
elif [ $2 -gt $1 ]
then
    echo "My sister is older"
else
    echo "They are twins"
fi