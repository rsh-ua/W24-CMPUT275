#include <iostream>
using namespace std;

int main() {
  int n;
  int total = 0;
  while (true) {
    if (cin >> n) {
      total += n;
      cout << "Read in: " << n << endl;
    } else {
      if (cin.eof()) break;
      cin.clear();
      cin.ignore();
    }
  }
  cout << "Total is: " << total << endl;
}
