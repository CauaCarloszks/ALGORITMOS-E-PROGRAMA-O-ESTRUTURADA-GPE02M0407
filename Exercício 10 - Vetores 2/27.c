#include <stdio.h>

int ehPrimo(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int vetor[10];

    printf("Digite 10 numeros inteiros: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Numeros primos e suas posicoes: \n");
    for (int i = 0; i < 10; i++)
    {
        if (ehPrimo(vetor[i]))
        {
            printf("Posicao %d: %d\n", i, vetor[i]);
        }
    }

    return 0;
}