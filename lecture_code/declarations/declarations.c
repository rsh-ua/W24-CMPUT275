#include <stdio.h>
// Declaring there exists a function named max
// which returns an int, and has two parameters
// both of which are ints.
int max(int, int);

int main() {
  int x = 0;
  int y = 0;
  scanf("%d", &x)
  scanf("%d", &y);
  int theBigger = max(x,y);
  printf("%d\n", theBigger);
}
