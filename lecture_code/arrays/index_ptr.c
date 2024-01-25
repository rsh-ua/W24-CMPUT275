#include <stdio.h>

int main() {
  int x = 0;
  int *p = &x;
  printf("x's address: %p\n", &x);
  printf("p's address: %p\n", &p);
  *p = 7;
  printf("%d\n", x);
  p[0] = 10;
  printf("%d\n", x);
  printf("%p - %p\n", &x, p);
  p[1] = 20; // UNDEFINED BEHAVIOUR
  printf("%p - %p\n", &x, p);
}
