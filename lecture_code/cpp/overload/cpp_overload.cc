#include <iostream>
using namespace std;
int max(int a, int b) {
  return a > b ? a : b;
}

float max (float a, float b) {
  return a > b ? a : b;
}

int main() {
  cout << max(10, 20) << endl;
  cout << max(0.5, 0.7) << endl;
}
