#include <stdio.h>

int main()
{
    int v[10], v1[10], v2[10];
    int contadorV1 = 0, contadorV2 = 0;

    printf("Digite 10 numeros inteiros: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (v[i] % 2 != 0)
        {
            v1[contadorV1] = v[i];
            contadorV1++;
        }
        else
        {
            v2[contadorV2] = v[i];
            contadorV2++;
        }
    }

    printf("Elementos utilizados de v1: \n");
    for (int i = 0; i < contadorV1; i++)
    {
        printf("%d ", v1[i]);
    }

    printf("\nElementos utilizados de v2: \n");
    for (int i = 0; i < contadorV2; i++)
    {
        printf("%d ", v2[i]);
    }

    return 0;
}