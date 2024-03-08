#include <iostream>
using namespace std;

int &larger(int &a, int &b) {
  return a > b ? a : b;
}

int main() {
  int x = 10, y = 5;
  while (x > 0 || y > 0) {
    int l = larger(x, y);
    cout << "Larger: " << l << endl;
    --l;
  }
}
