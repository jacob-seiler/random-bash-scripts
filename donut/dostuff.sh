echo "Coulson" > file1
ln file1 file2
ln -s file1 file3
echo "Skye" >| file1
cat file3
mv file1 file4
echo "Fitz" >| file4
cat file1
cat file2
cat file3
cat file3