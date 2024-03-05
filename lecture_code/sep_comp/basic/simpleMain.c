#include <stddef.h>
void printArray(int *, size_t);

int main() {
  int arr[] = {1, 2, 3, 4};
  printArray(arr, sizeof(arr)/sizeof(arr[0]));
}
