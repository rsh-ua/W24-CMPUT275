#include <stdio.h>


int main(int argc, const char *argv[]) {
  printf("%d args\n", argc);
  for (size_t i = 0; i < argc; ++i) {
    printf("argv[%lu][0]: %c\n", i, argv[i][0]);
  }
}
