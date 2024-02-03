#include <stdio.h>

int *multiples(int n) {
  int arr[4];
  for (int i = 0; i < 4; ++i) {
    arr[i] = (i+1)*n;
  }
  // Bad! Returning pointer to local stack
  // data, that data is deallocated when this
  // function returns. Undefined behaviour!
  return arr;
}

void printArray(int *arr, int len) {
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int *fives = multiples(5);
  printf("%p\n", fives);
  for (int i = 0; i < 4; ++i) {
    printf("%d ", fives[i]);
  }
  printf("\n");
  int *sevens = multiples(7);
  for (int i = 0; i < 4; ++i) {
    printf("%d ", sevens[i]);
  }
  printf("\n");
  for (int i = 0; i < 4; ++i) printf("%d ", fives[i]);
  printf("\n");
  printArray(fives, 4);
}
