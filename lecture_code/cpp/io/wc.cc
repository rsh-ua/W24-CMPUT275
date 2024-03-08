#include <iostream>
#include <iomanip>
using namespace std;

bool isWhitespace(char c) {
  return c == ' ' || c == '\n' || c == '\t';
}

int main() {
  int wc = 0, cc = 0, lc = 0;
  cin >> noskipws;
  char cur = '\0', prev = '\0';
  while (cin >> cur) {
    if (isWhitespace(cur) && !isWhitespace(prev)) ++wc;
    if (cur == '\n') ++lc;
    ++cc;
    prev = cur;
  }
  if (!isWhitespace(prev)) ++wc;
  cout << cc << " " << wc << " " << lc << endl;
}
