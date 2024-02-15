#include <stdio.h>
#include <stdlib.h>

struct IntArray {
  int *arr;
  size_t len, cap;
};

void push(struct IntArray *p, int val) {
  if (p->len == p->cap) {
    int *newArr = malloc(p->cap*sizeof(int)*2);
    for (size_t i = 0; i < p->len; ++i) newArr[i] = p->arr[i];
    free(p->arr);
    p->arr = newArr;
    p->cap = p->cap*2;
  }
  p->arr[(p->len)++] = val;
}

void pop(struct IntArray *p) {
  --p->len;
}

int main() {
  struct IntArray ia;
  ia.arr = malloc(sizeof(int)*4);
  ia.len = 0;
  ia.cap = 4;
  while (!feof(stdin)) {
    int x;
    if (1 == scanf("%d", &x)) {
      push(&ia, x); // pass pointer to my struct
    }
  }
  pop(&ia); pop(&ia);
  for (size_t i = 0; i < ia.len; ++i) {
    printf("%d ", ia.arr[i]);
  }
  printf("\n");
  free(ia.arr);
}
