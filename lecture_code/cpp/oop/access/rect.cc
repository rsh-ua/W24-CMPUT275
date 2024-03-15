#include <iostream>
using namespace std;

struct Rect {
 private:
  int x, y, w, h;
 public:
  Rect(int x, int y, int w, int h) : x{x}, y{y}, w{w > 0 ? w : 1}, h{h > 0 ? h : 1} {}
  Rect() : x{0}, y{0}, w{1}, h{1} {
    cout << "Default ctor called" << endl;
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
  //cout << "(" <<z.x << "," << z.y << ") " << z.w << "*" << z.h << endl;
  //r.w = -10;
  cout << r.area() << endl;
}
