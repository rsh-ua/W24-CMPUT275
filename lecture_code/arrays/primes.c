#include <stdio.h>

void primes(unsigned int n) {
  for (int pPrime = 2; pPrime < n; ++pPrime) {
    int j = 2;
    int isPrime = 1;
    while (j*j <= pPrime) {
      if (pPrime%j == 0) {
        isPrime = 0;
        break;
      }
      j = j + 1;
    }
    if (isPrime) printf("%d ", pPrime);
  }
}

int main() {
  primes(100);
}
