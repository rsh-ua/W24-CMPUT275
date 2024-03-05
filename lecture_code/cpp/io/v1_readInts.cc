#include <iostream>

using namespace std;

int main() {
  int n;
  int total = 0;
  cin >> n;
  while (!cin.fail()) {
    total += n;
    cin >> n;
  }
  cout << "Total was: " << total << endl;
}
