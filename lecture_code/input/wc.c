#include <stdio.h>

int main() {
  int lc=0, wc=0, cc=0;
  int inWord = 0;
  while (1) {
    int rc = getchar();
    if (rc == EOF) break;
    ++cc;
    char c = rc;
    if (c == '\n') ++lc;
    if (inWord && (c == ' ' || c == '\n' || c == '\t')) {
      ++wc;
      inWord = 0;
    }
    if (!inWord && c != ' ' && c != '\n' && c != '\t') inWord = 1;
  }
  printf("%d %d %d\n", lc, wc, cc);
}
