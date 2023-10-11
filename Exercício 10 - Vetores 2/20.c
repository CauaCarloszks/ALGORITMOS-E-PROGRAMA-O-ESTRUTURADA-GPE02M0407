#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int contador = 0;

    for (int i = 0; i < 10; i++) {
        int numero;
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 50) {
            vetor1[i] = numero;

            if (numero % 2 != 0) {
                vetor2[contador] = numero;
                contador++;
            }
        } else {
            printf("Numero fora do intervalo. Insira novamente.\n");
            i--;
        }
    }

    printf("Vetor 1:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nVetor 2 (Apenas impares do Vetor 1): \n");
    for (int i = 0; i < contador; i++) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}