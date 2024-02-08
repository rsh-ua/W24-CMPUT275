#include <stdio.h>
#include <stdlib.h>
int *identity_matrix(int n, int m) {
  int *matrix = malloc(n*m*sizeof(int));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      matrix[i*m + j] = i == j ? 1 : 0;
    }
  }
  return matrix;
}

int main() {
  int *matrix = identity_matrix(3,3);
  for (int i = 0; i < 3; ++i) {
    printf("| ");
    for (int j = 0; j <3; ++j) {
      printf("%d ", matrix[i*3+j]);
    }
    printf("|\n");
  }
  free(matrix);
}
