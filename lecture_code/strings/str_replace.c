#include <stdio.h>

int str_replace(char *s, char tar, char repl) {
  int count = 0;
  for (; *s != '\0'; ++s) {
    if (*s == tar) {
      *s = repl;
      ++count;
    }
  }
  return count;
}

int main() {
  char myS[] = "abracadabra";
  int rc =str_replace(myS, 'a', '*');
  printf("%s, %d\n", myS, rc);
}
