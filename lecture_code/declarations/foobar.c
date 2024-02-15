#include <stdio.h>

void foo(int);

void bar(int x) {
  if (x == 1) return;
  x = 3*x + 1;
  printf("%d\n", x);
  if (x % 2) bar(x);
  else foo(x);
}


void foo(int x) {
  x = x/2;
  printf("%d\n", x);
  if ((x % 2) == 0) foo(x);
  else bar(x);
}

int main() {
  int x;
  scanf("%d", &x);
  x % 2 ? bar(x) : foo(x);
}
