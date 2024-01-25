#include <stdio.h>

int main() {
  char myS[] = "This is on the stack";
  const char *p = "Not on the stack";
  printf("%p - address of myS, on stack\n", myS);
  printf("%p - string p points at - on text or data\n", p);
  printf("%p - address of p itself, on stack\n", &p);
  myS[0] = 'X';
  // Now, our attempt to modify the memory p points at is
  // caught by the compiler, since we promised p is a
  // pointer to a constant character.
  p[0] = 'X';
}
