#include "list.h"
#include <iostream>
using namespace std;

List inc(List l) {
  for (int i = 0; i < l.length(); ++i) {
    l.setIth(i, l.getIth(i)+1);
  }
  return l;
}

int main() {
  List l1;
  l1.addToFront(3).addToFront(2).addToFront(1);
  List l2 = inc(l1);
  l2 = inc(l2);
}
