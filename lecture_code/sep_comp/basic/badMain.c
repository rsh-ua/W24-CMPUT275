#include <stddef.h>
void printArray(int *, size_t);

int main() {
  float arr[] = {1.2, 1.3, 1.4};
  printArray(arr, sizeof(arr)/sizeof(arr[0]));
}
