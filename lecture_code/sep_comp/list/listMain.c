#include <stdio.h>
#include "list.h"
#include <stddef.h>
int main() {
  struct List *l = createList();
  int x = 0;
  while (scanf("%d", &x) == 1) {
    addToFront(l, x);
  }
  int maxSoFar = ith(l,0);
  size_t maxInd = 0;
  for (size_t i = 0; i < len(l); ++i) {
    if (ith(l, i) > maxSoFar) {
      maxSoFar = ith(l, i);
      maxInd = i;
    }
  }
  printf("The maximal element was %d\n", maxSoFar);
  deleteList(l);
}
