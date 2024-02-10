#include <stdio.h>

struct Rect {
  int x;
  int y;
  int w;
  int h;
};

int main() {
  struct Rect r1;
  r1.x = 5;
  r1.y = 7;
  r1.w = 3;
  r1.h = 1;
  printf("Rect at (%d,%d), width: %d, height: %d\n", r1.x, r1.y, r1.w, r1.h);
  printf("sizeof(struct Rect): %lu\n", sizeof(r1));
}
