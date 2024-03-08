#include <iostream>

using namespace std;

int main() {
  int x = 3;
  int &y = x;
  int *p = &x;
  y = 10;
  cout << x << endl; // 10
  cout << "Address of x: " << &x << endl;
  cout << "Address of y: " << &y << endl;
  cout << "Address of p: " << &p << endl;
}
