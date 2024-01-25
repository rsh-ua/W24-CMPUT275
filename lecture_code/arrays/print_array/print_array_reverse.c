#include <stdio.h>

void printArray(int arr[], unsigned int len) {
  for (unsigned int i = 0; i < len; ++i) {
    printf("%d\n", arr[i]);
  }
}

void printArrayReversed(int arr[], unsigned int len) {
  // Problem! Be careful when iterating down with
  // unsigned integers!
  for (unsigned int i = len-1; i >= 0; --i) {
    printf("%d\n", arr[i]);
  }
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  printArray(arr, sizeof(arr)/sizeof(arr[0]));
  printArrayReversed(arr, 5);
}
