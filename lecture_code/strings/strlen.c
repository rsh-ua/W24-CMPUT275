#include <string.h>
#include <stdio.h>

int main() {
  char s[] = "abcd";
  printf("%lu\n", strlen(s));
  printf("%lu\n", sizeof(s)/sizeof(s[0]));
}
