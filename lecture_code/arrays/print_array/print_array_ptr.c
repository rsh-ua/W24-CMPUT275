#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  for (unsigned int i = 0; i < 5; ++i) {
    printf("%d\n", *(arr+i));
  }
}
