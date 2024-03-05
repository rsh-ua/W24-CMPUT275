#include "list.h"

int main() {
  struct List *l = createList();
  addToFront(l, 1);
  l->len = 5;
}
