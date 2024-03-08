#include <iostream>
using namespace std;

int &larger(int &a, int &b) {
  return a > b ? a : b;
}

int main() {
  int x = 10, y = 5;
  while (x > 0 || y > 0) {
    cout << "Larger: " << larger(x,y) << endl;
    --larger(x,y);
  }
}
