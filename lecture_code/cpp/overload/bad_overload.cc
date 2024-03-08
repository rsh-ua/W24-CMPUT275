#include <iostream>
using namespace std;

int doWork() {
  int x;
  cin >> x;
  cout << x*2 << endl;
  return x*2;
}

float doWork() {
  float y;
  cin >> y;
  cout << y*2 << endl;
  return y*2;
}

int main() {
  int x = doWork();
  float y = doWork();
  doWork(); // Which one to call????
}
