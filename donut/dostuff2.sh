echo "Simmons" > fileA
ln fileA fileB
ln -s fileA fileC
rm fileA
echo "Ward" >| fileA
cat fileB
cat fileC
echo "Fury" >| fileA
cat fileA
cat fileB
cat fileC