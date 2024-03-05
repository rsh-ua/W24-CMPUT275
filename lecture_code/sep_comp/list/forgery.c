x#include "list.h"
#include <stdio.h>

int main() {
  struct List *l = createList();
  addToFront(l, 1);
  printf("len(l): %lu\n", len(l));
  int **p = (int **) l;
  p = p + 1;
  size_t *ohno = (size_t *) p;
  *ohno = 10;
  printf("len(l): %lu\n", len(l));
}
