#!/bin/bash

sayArgs() {
  echo "fn arg1: $1"
  echo "fn arg2: $2"
}

sayArgs Hello Goodbye
sayArgs Goodbye Hello
sayArgs $2 $1
echo $1 $2
