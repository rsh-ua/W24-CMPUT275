#include <iostream>
using namespace std;

void times2(int &n) {
  n = n*2;
}

int main() {
  int x = 5;
  int y = 7;
  times2(x); times2(y);
  cout << x << " " << y << endl;
}
