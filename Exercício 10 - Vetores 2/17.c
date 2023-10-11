#include <stdio.h>

int main () {
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite 10 numeros: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nLista: %d", vetor[i]);
    }
}