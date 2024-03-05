#include <stddef.h>
void printArray(int *, size_t);

int main() {
  int arr[] = {9,6,3,1,0,0,0,0};
  printArray(arr, sizeof(arr)/sizeof(arr[0]));
}
