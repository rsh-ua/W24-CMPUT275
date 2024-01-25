#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = arr;
  for (int i = 0; i < 10; ++i) {
    printf("%d\n", arr[i]);
    printf("%d\n", p[i]);
  }
  printf("%lu\n", sizeof(arr));
  printf("%lu\n", sizeof(p));
  printf("%p\n", p);
  printf("%p\n", &p);
  printf("%p\n", arr);
  printf("%p\n", &arr);
}
