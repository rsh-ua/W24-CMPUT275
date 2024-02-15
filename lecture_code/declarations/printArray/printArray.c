#include <stdio.h>

void printArray(int *arr, size_t len) {
  for (size_t i = 0; i < len; ++i) printf("%d ", arr[i]);
  printf("\n");
}
