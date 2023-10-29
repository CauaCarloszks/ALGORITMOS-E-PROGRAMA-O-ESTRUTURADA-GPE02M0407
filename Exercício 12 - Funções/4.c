#include <stdio.h>

void soma_colunas(int A[61][10], int m, int n) {

  int soma;

  for (int j = 0; j < n; j++) {
    A[m - 1][j] = 0;
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      soma += A[i][j];
    }
    A[m - 1][j] = soma;
    soma = 0;
  }
}

int main() {

  int A[61][10];

  for (int i = 0; i < 61; i++) {
    for (int j = 0; j < 10; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  soma_colunas(A, 61, 10);

  for (int i = 0; i < 61; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
