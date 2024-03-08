#include <iostream>

using namespace std;

int main() {
  char c;
  int x;
  // Read one character then one integer from the stream, first character
  // could be ws
  cin >> noskipws;
  cin >> c >> skipws >> x;
  cout << "Character: " << c << endl;
  cout << "Int: " << x << endl;
}
