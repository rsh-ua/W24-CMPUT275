#include <string.h>
#include <stdio.h>


int main() {
  char s1[] = "abcd"; // Array is only 5 characters long, all used
  char s2[] = "xyz";
  strcat(s1, s2); // Error - trying to write more characters to s1, but its full
  // writing arbitrary stack memory
  printf("%s -- %s\n", s1, s2);
  char s3[10] = "abcd";
  strcat(s3, s2); // This is fine, s3 has space leftover in the array to add more chars.
}
