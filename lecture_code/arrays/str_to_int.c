#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int str_to_int(const char *s) {
  int len = strlen(s);
  int num = 0;
  for (int i = 0; i < len; ++i) {
    int digit = s[i] - '0';
    num = num*10 + digit;
  }
  return num;
}

int main() {
  const char *s = "1234";
  printf("%d\n", str_to_int(s)*2);
  printf("%d\n", atoi(s)*2);
}
