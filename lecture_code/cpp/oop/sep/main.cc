#include <iostream>
#include "rect.h"
using namespace std;

int main() {
  Rect r{1,2,3,4};
  Rect q{5,6,10,7};
  Rect z;
  cout << r.area() << endl;
  cout << q.area() << endl;
  cout << "(" <<z.x << "," << z.y << ") " << z.w << "*" << z.h << endl;
  cout << r.area() << endl;
}
