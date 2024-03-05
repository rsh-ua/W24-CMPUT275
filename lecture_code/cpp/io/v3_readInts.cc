#include <iostream>

using namespace std;

int main() {
  int n;
  int total = 0;
  while (cin >> n) {
    total += n;
  }
  cout << "Total was: " << total << endl;
}
