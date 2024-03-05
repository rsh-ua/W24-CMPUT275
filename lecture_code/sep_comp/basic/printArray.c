#include <stdio.h>
void printArray(int *arr, size_t len) {
  if (len == 0) return;
  for (size_t i = 0; i < len-1; ++i) {
    printf("%d ", arr[i]);
  }
  printf("%d\n", arr[len-1]);
}
