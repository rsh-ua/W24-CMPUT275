#include <iostream>
using namespace std;

struct Rect {
  int x, y, w, h;
  Rect(int x, int y, int w, int h) {
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
  }
  int area() {
    return this->w*this->h;
  }
};

int main() {
  Rect r{1,2,3,4};
  Rect q{5,6,10,7};
  Rect z;
  //Rect t{1,2};
  cout << r.area() << endl;
  cout << q.area() << endl;
}
