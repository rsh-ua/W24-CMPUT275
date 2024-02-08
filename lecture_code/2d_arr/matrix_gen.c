#include <stdio.h>
#include <stdlib.h>

int **matrix_gen(int n, int m) {
  // allocate my array of pointers to rows
  // (effectively my matrix)
  int **matrix = malloc(sizeof(int*)*n);
  for (int i = 0; i < n; ++i) {
    // allocate space for this row
    int *row = malloc(sizeof(int)*m);
    for (int j = 0; j < m; ++j) {
      row[j] = (i == j ? 1 : 0);
    }
    matrix[i] = row;
  }
  return matrix;
}

int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int **matrix = matrix_gen(n, m);
  for (int r = 0; r < n; ++r) {
    printf("| ");
    for (int c = 0; c < m; ++c) {
      printf("%d ", matrix[r][c]);
    }
    printf("|\n");
  }
  for (int r = 0; r < n; ++r) {
    free(matrix[r]);
  }
  free(matrix);
}
