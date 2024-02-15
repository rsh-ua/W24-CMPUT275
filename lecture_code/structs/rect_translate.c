#include <stdio.h>

struct Rect {
  int x;
  int y;
  int w;
  int h;
};

void printRect(struct Rect r) {
  printf("Rect at (%d,%d), width: %d, height: %d\n", r.x, r.y, r.w, r.h);
}

void translate(struct Rect *r, int xDelta, int yDelta) {
  //(*r).x = (*r).x + xDelta;
  // r->x short hand for (*r).x
  r->x = r->x + xDelta;
  //(*r).y = (*r).y + yDelta;
  r->y = r->y + yDelta;
}

int main() {
  struct Rect r1;
  r1.x = 5;
  r1.y = 7;
  r1.w = 3;
  r1.h = 1;
  printRect(r1);
  translate(&r1, 3, -2);
  printRect(r1);
}
