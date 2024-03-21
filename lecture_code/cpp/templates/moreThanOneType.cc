#include <iostream>
using namespace std;

template <typename T, typename P>
void foo(T x, P y) {
  cout << x*y << endl;
}

struct Vec2D {
  int x, y;
  Vec2D operator*(int c) {
    return Vec2D{x*c, y*c};
  }
};

Vec2D operator*(int c, Vec2D v) {
  return v*c;
}

ostream &operator<<(ostream &out, const Vec2D &v) {
  return out << "[" << v.x << ", " << v.y << "]";
}

int main() {
  int x = 5;
  float z = 2.2;
  foo(x, z);
  foo(x, 20);
  Vec2D a{3,7};
  foo(a, 5);
  foo(3, a);
}
