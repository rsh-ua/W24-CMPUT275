#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  char cArr[] = {'a', 'b', 'c', 'd', 'e'};
  for (unsigned int i = 0; i < 5; ++i) {
    printf("%p: %d\n", arr+i, *(arr+i));
  }
  for (unsigned int i = 0; i < 5; ++i) {
    printf("%p: %c\n", cArr+i, *(cArr+i));
  }
}
