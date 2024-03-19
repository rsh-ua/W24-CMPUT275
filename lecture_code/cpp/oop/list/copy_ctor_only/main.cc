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
  // list l is now: 4 3 2 1
  List p = l;
  // p is copy constructed from l
  // p also now 4 3 2 1
  // List p{l};
  // List p(l);
  // All the same, all initializing p with l
  l.setIth(0, 10);
  cout << l << endl;
  cout << p << endl;
  List t; // Default ctor
  t = l;
  t.setIth(0,-1);
  cout << t << endl;
  cout << l << endl;
  /*
  List q;
  q.addToFront(10).addToFront(9).addToFront(8);
  cout << q << endl;
  {
    List copy = q;
    // Equivalently
    // List copy{q};
    cout << copy << endl;
  } // Copy goes out of scope
  // Copy's destructor is ran. Which frees all the nodes
  // But copy was a SHALLOW COPY of q, so that means its also
  // freed q's nodes. How to fix
  cout << q << endl;
  */
}
