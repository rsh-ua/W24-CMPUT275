#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  vector<int> v{1,2,3,4,5,6,7,8};
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
  int x;
  while (cin >> x) {
    v.emplace_back(x);
  }
  for (int i = 0; i < v.size(); ++i ) {
    cout << v[i] << " ";
  }
  cout << endl;
}
