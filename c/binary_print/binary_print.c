#include <stdio.h>

void print_binary(unsigned int x) {
  unsigned int pow = 1;
  for (int i = 0; i < 31; ++i) pow = pow*2;
  while (pow > 0) {
    if (pow <= x) {
      printf("%d", 1);
      x = x - pow;
    } else {
      printf("%d", 0);
    }
    pow = pow/2;
  }
  printf("\n");
}

int main() {
  print_binary(179);
  print_binary(10);
}
