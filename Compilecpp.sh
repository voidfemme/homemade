#!/bin/sh
# a program to manage names and compilation.

# Flags:
while getopts p:c:c: flag

# OPTARG refers to corresponding values
do
	case "${flag}" in
		p) program=${OPTARG};;
		o) command_one=${OPTARG};;
		t) command_two=${OPTARG};;
	esac
done

echo "Program: $1";
echo "Command: $2";
