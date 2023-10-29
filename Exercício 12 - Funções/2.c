#include <stdio.h>

void calcula_locacoes_gratuitas(int *A, int *B, int n) {

  int i;

  for (i = 0; i < n; i++) {
    B[i] = 0;
  }

  for (i = 0; i < n; i++) {
    B[i] = A[i] / 15;

    if (A[i] % 15 > 0) {
      B[i]++;
    }
  }
}

int main() {

  int A[500];

  int B[500];

  for (int i = 0; i < 500; i++) {
    printf("Quantidade de filmes retirados pelo cliente %d: ", i + 1);
    scanf("%d", &A[i]);
  }

  calcula_locacoes_gratuitas(A, B, 500);

  for (int i = 0; i < 500; i++) {
    printf("Cliente %d: %d locações gratuitas\n", i + 1, B[i]);
  }

  return 0;
}
