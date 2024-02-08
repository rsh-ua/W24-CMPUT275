#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv) {
  // reminder, argv[0] is command itself
  int lhs = atoi(argv[1]); // argv[1] is string of first cmd line arg
  int rhs = atoi(argv[2]); // argv[2] is string of second cmd line arg
  // atoi take a string that represents an integer and returns an int
  printf("%d\n", lhs*rhs);
}
