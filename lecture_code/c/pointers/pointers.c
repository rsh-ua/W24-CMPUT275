#include <stdio.h>

int main() {
  int x = 10;
  int *p = &x;
  printf("%p\n", p);
  printf("%d\n", *p);
  *p = -1;
  printf("%d\n", x);
}
