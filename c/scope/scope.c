#include <stdio.h>
int main(int argc, char **argv) {
  int x = 10;
  {
    int y = 5;
    int x = 15;
  }
  printf("%d\n", x);
  printf("%d\n", y);
}
