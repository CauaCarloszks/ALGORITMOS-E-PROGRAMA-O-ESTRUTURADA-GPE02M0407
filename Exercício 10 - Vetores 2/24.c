#include <stdio.h>

int main()
{
    int numeroAluno;
    float altura;
    int alunoMaisAlto, alunoMaisBaixo;
    float alturaMaisAlta = 0, alturaMaisBaixa = 100;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero do aluno e sua altura (em metros), separados por espaco: \n");
        scanf("%d %f", &numeroAluno, &altura);

        if (altura > alturaMaisAlta)
        {
            alunoMaisAlto = numeroAluno;
            alturaMaisAlta = altura;
        }

        if (altura < alturaMaisBaixa)
        {
            alunoMaisBaixo = numeroAluno;
            alturaMaisBaixa = altura;
        }
    }

    printf("Aluno mais alto:\nNumero: %d\nAltura: %.2f metros\n", alunoMaisAlto, alturaMaisAlta);
    printf("Aluno mais baixo:\nNumero: %d\nAltura: %.2f metros\n", alunoMaisBaixo, alturaMaisBaixa);

    return 0;
}