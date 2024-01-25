#include <stdio.h>

int replace(int arr[], unsigned int len, int targ, int repl) {
  int *cur = arr;
  int count = 0;
  while (cur < arr + len) {
    if (*cur == targ) {
      *cur = repl;
      ++count;
    }
    ++cur; // Still pointer arithmetic
  }
  return count;
}

int main() {
  int a1[] = {1, 2, 3, 1, 2, 3, 1, 2, 3};
  for (int i = 0; i < 9; ++i) {
    printf("%d ", a1[i]);
  }
  printf("\n");
  replace(a1, 9, 2, -1);
  for (int i = 0; i < 9; ++i) {
    printf("%d ", a1[i]);
  }
  printf("\n");
}
