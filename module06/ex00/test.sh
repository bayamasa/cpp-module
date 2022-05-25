#!/bin/bash

make 

while read line
do
    ./convert $line
done < cases.txt

make fclean
