#!/bin/bash
gg=$1
g++ $1.cpp -o ./out/$1.out
cd ./out
./$1.out
cd ../
