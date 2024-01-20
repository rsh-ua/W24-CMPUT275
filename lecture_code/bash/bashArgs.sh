#!/bin/bash
if [ $# -ne 3 ]; then
  echo "Usage: $0 arg1 arg2 arg3"
  exit
fi
echo "I was given $# total args"
echo "Zeroth arg: $0"
echo "First arg: $1"
echo "second arg: $2"
echo "Third arg: $3"
