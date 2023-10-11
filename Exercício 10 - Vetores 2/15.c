#include <stdio.h>

int main() {
    int vetor[20];

    printf("Digite 20 numeros inteiros: \n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (vetor[i] == vetor[j]) {
                vetor[j] = vetor[19];
                j--;
                vetor[19] = 0;
            }
        }
    }

    printf("Vetor sem numeros repetidos: \n");
    for (int i = 0; i < 20; i++) {
        if (vetor[i] != 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}