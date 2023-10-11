#include <stdio.h>

int main()
{
    int vetorA[10], vetorB[10], vetorC[20];

    printf("Digite 10 numeros para o vetor A: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 10 numeros para o vetor B: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetorC[2 * i] = vetorA[i];
        vetorC[2 * i + 1] = vetorB[i];
    }

    printf("Terceiro vetor: \n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vetorC[i]);
    }

    return 0;
}