
#include <stdio.h>
int maxInt(int a, int b) {
  return a > b ? a : b;
}

float maxFloat(float a, float b) {
  return a > b ? a : b;
}

int main() {
  printf("%d\n", maxInt(5, 10));
  printf("%d\n", maxFloat(22.5f, 13.7f));
}
