#include "list.h"
#include <iostream>
using namespace std;

template <typename T>
List<T> inc(List<T> l) {
  for (int i = 0; i < l.length(); ++i) {
    l.setIth(i, l.getIth(i)+1);
  }
  return l;
}

struct Point {
  int x, y;
};

ostream &operator<<(ostream &out, const Point &p) {
  return out << "(" << p.x << ", " << p.y << ")";
}

int main() {
  List<int> l1;
  l1.addToFront(3).addToFront(2).addToFront(1);
  List<int> l2 = inc(l1);
  l2 = inc(l2);
  cout << l1 << endl;
  cout << l2 << endl;
  List<Point> pl;
  pl.addToFront(Point{1,2}).addToFront(Point{3,4});
  cout << pl << endl;
}

