#include <stdio.h>

int main () {

    int vetor[5], maior, menor, soma, media;

    for (int i = 0; i < 5; i++) {

        printf ("Insira as notas: ");
        scanf ("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma/5;

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        } 
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
