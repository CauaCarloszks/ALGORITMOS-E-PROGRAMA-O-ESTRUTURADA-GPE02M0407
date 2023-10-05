#include <stdio.h>

int main () {

    int vetor[5], maior, menor, pMaior, pMenor = 0;

    for (int i = 0; i < 5; i++) {

        printf ("Insira as notas: ");
        scanf ("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            pMaior = i;
        } 
        if (vetor[i] < menor) {
            menor = vetor[i];
            pMenor = i;
        }
    }

