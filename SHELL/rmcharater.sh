#!/bin/bash

filepath="./file.txt"

echo "Start to deal with the file---$filepath! Please wait..."

if [ -e $filepath ] && [ -r filepath ]
then
	echo "ok"
elif [ -e $filepath ] 
then
	chmod +r $filepath
else
	echo "The file isn't exist!"
fi

touch ./file1.txt
sed "s/" />//" $filepath > ./file1.txt

echo "Progress end! Congratulation!"


