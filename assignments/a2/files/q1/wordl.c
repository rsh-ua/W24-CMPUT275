#include <stdio.h>
#include <string.h>
const char * const GREEN = "\x1b[32m";
const char * const YELLOW = "\x1b[33m";
const char * const WHITE = "\x1b[0m";
const char * current = WHITE;

void setColour(const char *colour) {
  if (current == colour) return;
  printf("%s", colour);
  current = colour;
}
