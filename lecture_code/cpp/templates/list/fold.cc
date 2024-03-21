#include <vector>
#include <functional>
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;

int main() {
  vector<int> v;
  int x;
  while (cin >> x) {
    v.emplace_back(x);
  }

  int huh = accumulate(v.begin(), v.end(), 1, [](int x, int y) -> int { return x*y; });
  int mySum = accumulate(v.begin(), v.end(), 0, [](int x, int y) -> int { return x+y; });
  cout << huh << endl;
  cout << mySum << endl;
  for (int &val : v) cout << val << " ";
  cout << endl;
}
