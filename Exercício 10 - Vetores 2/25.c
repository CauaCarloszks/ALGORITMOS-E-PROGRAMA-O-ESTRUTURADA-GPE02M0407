#include <stdio.h>

int main()
{
    int vetor[100];
    int contador = 0;

    for (int i = 1; contador < 100; i++)
    {
        if (i % 7 != 0 && i % 10 != 7)
        {
            vetor[contador] = i;
            contador++;
        }
    }

    printf("Vetor dos 100 primeiros naturais que nao sao multiplos de 7 ou terminam com 7: \n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}