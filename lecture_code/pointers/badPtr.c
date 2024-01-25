#include <stdio.h>

int main() {
  int *p = 483284329;
  *p = 10;
  printf("I did it, I ruined my memory!");
}
