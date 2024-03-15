#include "rect.h"

Rect::Rect(int x, int y, int w, int h) : x{x}, y{y},
  w{w > 0 ? w : 1}, h{h > 0 ? h : 1} {}

Rect::Rect() : x{0}, y{0}, w{1}, h{1} {}

int Rect::area() { return w*h; }
