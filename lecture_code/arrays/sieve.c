#include <stdio.h>
#include <stdlib.h>

void primes(unsigned int n) {
  int len = n-2;
  int *arr = malloc(sizeof(int)*len);
  for (int i = 0; i < len; ++i) arr[i] = 1;
  for (int i = 0; i < len; ++i) {
    if (!arr[i]) continue;
    int prime = i+2;
    printf("%d ", prime);
    for (int j = i+prime; j < len; j = j + prime) arr[j] = 0;
  }
  printf("\n");
  free(arr);
}

int main() {
  int x = 0;
  scanf("%d", &x);
  primes(x);
}
