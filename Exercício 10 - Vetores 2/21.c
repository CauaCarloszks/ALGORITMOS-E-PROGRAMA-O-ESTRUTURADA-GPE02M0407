#include <stdio.h>

int main()
{
    int vetorA[10], vetorB[10], vetorC[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite 10 numeros do vetor A: ");
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite 10 numeros do vetor B: ");
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] - vetorB[i]; 
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nO resultado de A - B = %d", vetorC[i]);
       
    }
}