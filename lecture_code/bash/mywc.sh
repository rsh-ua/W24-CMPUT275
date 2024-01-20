#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 fileToRead"
fi

x=0
for y in $(cat $1); do
  x=$((x+1))
done

echo $x
