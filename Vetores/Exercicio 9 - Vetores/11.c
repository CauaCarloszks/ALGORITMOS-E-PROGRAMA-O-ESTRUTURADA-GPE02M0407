#include <stdio.h>

int main()
{

    float valores[10], somaPositivos = 0, qtdNegativos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira as notas: ");
        scanf("%f", &valores[i]);
    }

    for (int i = 0; i <10; i++) {
        if (valores [i] >0) {
            somaPositivos += valores[i];
        }else {
            qtdNegativos++;
        }
    }

    printf ("Soma positivos: %f.\nQuantidade %f", somaPositivos, qtdNegativos);
}