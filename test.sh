#!/bin/sh

g++ -g -Wall -Iinclude -Llib -std=c++14 test/test.cpp -o test/test.exe -lplaisio
./test/test.exe
rm test/test.exe
