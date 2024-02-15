#include <stdio.h>


int main() {
  int x = 1;
  int y = 2000;
  while (x < y) {
    x = x *2;
    y = y + 50;
    #ifdef DEBUG
    printf("x is now: %d\n", x);
    printf("y is now: %d\n", y);
    #endif
    // does some other stuff
  }
}
