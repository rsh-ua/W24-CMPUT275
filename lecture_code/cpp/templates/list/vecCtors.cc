#include <vector>
#include <iostream>
using namespace std;


int main() {
  vector<int> v{10,20};
  vector<int> q(10,20);
  for (int i = 0 ; i < v.size(); ++i) cout << v[i] << " ";
  cout << endl;
  for (int i = 0; i < q.size(); ++i) cout << q[i] << " ";
}
