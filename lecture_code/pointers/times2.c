#include <stdio.h>

void times2(int *p) {
  *p = *p*2;
}

int main() {
  int x = 5;
  times2(&x);
  printf("%d\n", x);
  times2(&x);
  printf("%d\n", x);
}
