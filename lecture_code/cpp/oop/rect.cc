#include <iostream>
using namespace std;

struct Rect {
  int x, y, w, h;
  int area() {
    return this->w*this->h;
  }
};

int main() {
  Rect r{1,2,3,4};
  Rect q{5,6,10,7};
  Rect z;
  Rect t{1,2};
  cout << r.area() << endl;
  cout << q.area() << endl;
}
