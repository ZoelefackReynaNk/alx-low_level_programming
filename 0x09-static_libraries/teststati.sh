#!/bin/bash
gcc -c *.h
ar rc libholberton.a *.o
ranlib libholberton.a

