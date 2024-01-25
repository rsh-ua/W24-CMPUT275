#include <stdio.h>

int main() {
  int x = 0;
  while (!feof(stdin)) {
    int rc = scanf("%d", &x);
    if (1 == rc) {
      printf("%d\n", x*2);
    }
    char garbage;
    scanf("%c", &garbage);
  }
}
