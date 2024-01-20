#!/bin/bash

for x in one two three; do
  echo "Word - $x"
done

for x in "one two three"; do
  echo "Word - $x"
done


for x in *; do
  echo "What is * - $x"
done

for x in *.sh; do
  echo "What is *.sh - $x"
done

for x in $(ls | egrep ".*\.sh"); do
  echo "Regex example $x"
done
