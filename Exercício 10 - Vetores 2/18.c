#include <stdio.h>

int main()
{
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite 10 numeros: ");
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        int multiplo = vetor[i] * i;
        printf("\nOs multiplos do vetor[%d] (%d) sao: %d", i, vetor[i], multiplo);
    }

    return 0;
}