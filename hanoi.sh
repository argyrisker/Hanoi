#! /bin/bash


g++ -std=c++11 htower.cc -o htower.exe
echo "number of disks: "
./htower.exe>./output.txt
tail -n +2 output.txt> output1.txt
rm ./output.txt
cat output1.txt
echo "moves: "
wc -l<output1.txt
rm ./output1.txt

