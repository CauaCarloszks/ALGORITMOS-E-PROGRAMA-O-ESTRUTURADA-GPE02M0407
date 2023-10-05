#include <stdio.h>

int main()
{
    int vetor[6] = {1, 0, 5, -2, -5, 7};

    int soma = 0;

    for (int i = 0; i < 6; i++)
    {
        if (i == 0 || i == 1 || i == 5)
        {
            soma += vetor[i];
        }

        if (i == 4)
        {
            vetor[i] = 100;
        }

         printf("\n%d", vetor[i]);
    }

    printf("\n\n%d", soma);

    return 0;
}