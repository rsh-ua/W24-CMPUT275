#include <stdio.h>

int main() {
  int x = 10;
  int y = -1;
  char c = '^';
  float f = 25.537;
  printf("x: %d\ny: %u\nc: %c\nf: %f\n", x, y, c, f);
  printf("Two sig digs of f: %.2f", f);
}
