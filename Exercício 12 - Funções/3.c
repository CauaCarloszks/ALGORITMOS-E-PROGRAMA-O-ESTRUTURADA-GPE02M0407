#include <stdio.h>

void troca_linhas_colunas(int A[10][10], int m, int n) {

  int aux;

  for (int i = 0; i < n; i++) {
    aux = A[2][i];
    A[2][i] = A[8][i];
    A[8][i] = aux;
  }

  for (int i = 0; i < m; i++) {
    aux = A[i][4];
    A[i][4] = A[i][10];
    A[i][10] = aux;
  }

  for (int i = 0; i < m; i++) {
    aux = A[i][i];
    A[i][i] = A[i][m - i - 1];
    A[i][m - i - 1] = aux;
  }

  for (int i = 0; i < m; i++) {
    aux = A[5][i];
    A[5][i] = A[i][10];
    A[i][10] = aux;
  }
}

int main() {

  int A[10][10];

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  troca_linhas_colunas(A, 10, 10);

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
