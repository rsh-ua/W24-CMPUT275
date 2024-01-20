#include <stdio.h>
int gcd(int a, int b) {
  while (b != 0) {
    int tmp = a%b;
    a = b;
    b = tmp;
  }
  return a;
}


int main() {
  printf("gcd(16,6) = %d\n", gcd(16,6));
}
