#include <stdio.h>

int main() {
  char myS[] = "This is on the stack";
  char *p = "Not on the stack";
  printf("%p - address of myS, on stack\n", myS);
  printf("%p - string p points at - on text or data\n", p);
  printf("%p - address of p itself, on stack\n", &p);
  // This following line is fine, mutates the stack allocated
  // array of characters to change its first character to 'X'.
  // We're allowed to modify our stack!
  myS[0] = 'X';
  // following line crashes our program, p is a pointer to
  // a string literal, stored on the text or data section
  // of our program. It is marked readonly, and attempting to
  // write to that memory address causes a segmentation fault
  p[0] = 'X';
}
