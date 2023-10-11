#include <stdio.h>

int main()
{
    float vetor1[5], vetor2[5];
    float produtoEscalar = 0;

    printf("Digite 5 numeros reais para o primeiro vetor: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &vetor1[i]);
    }

    printf("Digite 5 numeros reais para o segundo vetor: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &vetor2[i]);
    }

    printf("Primeiro vetor: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f ", vetor1[i]);
    }

    printf("\nSegundo vetor: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f ", vetor2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        produtoEscalar += vetor1[i] * vetor2[i];
    }

    printf("\nProduto Escalar: %f\n", produtoEscalar);

    return 0;
}