#include "list.h"
#include <iostream>
using namespace std;

List createN(int n) {
  // Given n creates the list n, n-1, n-2 ... 0
  List l;
  for (int i = 0; i < n+1; ++i) {
    l.addToFront(i);
  }
  return l;
}

int main() {
  List l;
  l.addToFront(1).addToFront(2).addToFront(3).addToFront(4);
  // list is now: 3 2 1
  cout << l << endl;
  List q;
  q.addToFront(10).addToFront(9).addToFront(8);
  cout << q << endl;
  int n;
  cin >> n;
  if (n > 0) {
    List copy = q;
    // Equivalently
    // List copy{q};
    cout << copy << endl;
  } // Copy goes out of scope
  // Copy's destructor is ran. Which frees all the nodes
  // But copy was a SHALLOW COPY of q, so that means its also
  // freed q's nodes. How to fix
  cout << q << endl;
}
