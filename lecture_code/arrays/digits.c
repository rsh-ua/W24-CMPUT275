#include <stdio.h>
#include <stdlib.h>

int len(int x) {
  if (x == 0) return 1;
  int count = 0;
  while (x > 0) {
    x = x/10;
    ++count;
  }
  return count;
};

int *digits(int x) {
  int l = len(x)+1;
  int *arr = malloc(sizeof(int)*l);
  arr[l-1] = -1;
  int i = l-2;
  while (x > 0) {
    arr[i] = x%10;
    x = x/10;
    --i;
  }
  return arr;
}

void printDig(int *arr) {
  while (*arr >= 0) {
    printf("%d-", *arr);
    ++arr;
  }
  printf("\n");
}

int main() {
  int x;
  scanf("%d", &x);
  int *digArr = digits(x);
  printDig(digArr);
  free(digArr);
}
