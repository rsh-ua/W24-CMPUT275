#include <stdio.h>
#include <string.h>

int flagCheck(int argc, const char **argv, const char *flag) {
  // returns 1 if -l flag is present in argv
  // 0 otherwise
  for (int i = 1; i < argc; ++i) {
    // strcmp returns 0 if strings are equal
    if (!strcmp(flag, argv[i])) { // if these strings are equal
      return 1; // return true, -l does exist
    }
  }
  return 0;
}


int main(int argc, const char **argv) {
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
  if (argc == 1) {
    printf("%d %d %d\n", lc, wc, cc);
    return 0;
  }
  if (flagCheck(argc, argv, "-l")) {
    printf("%d ", lc);
  }
  if (flagCheck(argc, argv, "-w")) {
    printf("%d ", wc);
  }
  if (flagCheck(argc, argv, "-c")) {
    printf("%d", cc);
  }
  printf("\n");
}
