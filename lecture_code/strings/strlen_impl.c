#include <stdio.h>

int strlen(const char *s) {
  int i = 0;
  for (; *s != '\0'; ++i, ++s);
  return i;
}

int main() {
  const char *myS = "Hello there";
  printf("%d\n", strlen(myS));
}
