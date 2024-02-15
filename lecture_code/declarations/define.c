#include <stdio.h>
// 1 is mac, 2 is windows, 3 is linux
#if OS == 1
unsigned int
#elif OS == 2
short int
#elif OS == 3
long long unsigned int
#endif
securityKey;

int main() {
  printf("%lu\n", sizeof(securityKey));
}
