#include <stdio.h>
#include <math.h>

int main()
{
    int n = 10;
    float vetor[10];
    float media = 0, soma = 0, desvioPadrao = 0;

    printf("Digite 10 numeros: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / n;

    for (int i = 0; i < n; i++)
    {
        desvioPadrao += pow(vetor[i] - media, 2);
    }
    desvioPadrao = sqrt(desvioPadrao / n);

    printf("Media: %.2f\n", media);
    printf("Desvio Padrao: %.2f\n", desvioPadrao);

    return 0;
}