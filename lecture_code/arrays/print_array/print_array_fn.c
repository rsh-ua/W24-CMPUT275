#include <stdio.h>

void printArray(int arr[]) {
  // Doesn't work! Array parameter decays to a pointer!
  int len = sizeof(arr)/sizeof(arr[0]);
  for (unsigned int i = 0; i < len; ++i) {
    printf("%d\n", arr[i]);
  }
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  printArray(arr);
}
