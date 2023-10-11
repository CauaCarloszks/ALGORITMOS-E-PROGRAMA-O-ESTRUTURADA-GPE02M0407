#include <stdio.h>

int main()
{

    int vetor[10], igual;

    for (int i = 0; i < 10; i++)
    {

        printf("Insirir valor: ");
        scanf("%d", &vetor[i]);

        for (int j = 0; j < 10; j++)
    {
        if (vetor[i] == vetor[j])
        {
            igual = 1;
        }
        if (igual == 1)
        {
            printf("Possuem valores iguais: %d", vetor[i]);
        }
    }
    }

}