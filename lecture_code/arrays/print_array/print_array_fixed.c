#include <stdio.h>

void printArray(int arr[], unsigned int len) {
  for (unsigned int i = 0; i < len; ++i) {
    printf("%d\n", arr[i]);
  }
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  printArray(arr, sizeof(arr)/sizeof(arr[0]));
}
