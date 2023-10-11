#include <stdio.h>

int main()
{
    int vetor[5], codigo;

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite 5 numeros: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nAgora vamos dar seguimento:\n0 para cancelar\n1 para mostrar ordem crescente\n2 para mostrar ordem decrescente: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 0:
        printf("Cancelado");
        break;

    case 1:
        for (int i = 0; i < 5; i++)
        {
            printf("\nLista: %d", vetor[i]);
        };
        break;

    case 2:
        for (int i = 4; i >= 0; i--)
        {
            printf("\nLista: %d", vetor[i]);
        };
        break;

    default:
        break;
    }
}