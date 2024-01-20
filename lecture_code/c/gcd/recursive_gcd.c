#include <stdio.h>
int gcd(int a, int b) {
  if (b == 0) return a;
  retval = gcd(b, a%b);
  return retval;
}


int main() {
  printf("gcd(14,6)=%d\n", gcd(14, 6));
}
