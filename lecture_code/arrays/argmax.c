#include <stdio.h>
#include <limits.h>
// INT_MIN
// INT_MAX

unsigned int argmax(int *arr, unsigned int len) {
  // Returns index of maximal item in arr, assume len > 0
  int maxSoFar = arr[0];
  int maxIndex = 0;
  for (unsigned int i = 0; i < len; ++i) {
    if (arr[i] > maxSoFar) {
      maxSoFar = arr[i];
      maxIndex = i;
    }
  }
  return maxIndex;
}

int main() {
  int a1[] = {7, 42, 16, -200, 5}; // 1
  int a2[] = {200, 0, 0, 0, 0, -20, 10, 50}; // 0
  int a3[] = {-1, -2, -3, -4, -5, 1}; // 5
  int a4[] = {-50, -200, -10, -3, -700}; // 3
  printf("argmax(a1) == %d, should be 1\n", argmax(a1, sizeof(a1)/sizeof(int)));
  printf("argmax(a2) == %d, should be 0\n", argmax(a2, sizeof(a2)/sizeof(int)));
  printf("argmax(a3) == %d, should be 5\n", argmax(a3, sizeof(a3)/sizeof(int)));
  printf("argmax(a4) == %d, should be 3\n", argmax(a4, sizeof(a4)/sizeof(int)));
}
