#include <stdio.h>

int validaQuantidade() {
    int quantidade;
    do {
        printf("Informe a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);
        if (quantidade < 0) {
            printf("Quantidade invalida. Digite um valor nao negativo.\n");
        }
    } while (quantidade < 0);
    return quantidade;
}

float calculaSalario(int quantidade) {
    float salario_base = 600.0;
    float adicional = 0.0;
    
    if (quantidade > 50) {
        adicional += (quantidade > 80) ? (30 * 0.5 + (quantidade - 80) * 0.75) : (quantidade - 50) * 0.5;
    }

    return salario_base + adicional;
}

void mostraFinal(int funcionario, float salario) {
    printf("Funcionario %d - Salario: R$ %.2f\n", funcionario, salario);
}

int main() {
    int funcionario = 1;
    while (1) {
        int quantidade = validaQuantidade();
        float salario = calculaSalario(quantidade);
        mostraFinal(funcionario, salario);

        char continuar;
        printf("Deseja inserir dados de outro funcionario? (S/N): ");
        scanf(" %c", &continuar);
        if (continuar == 'N' || continuar == 'n') {
            break;
        }
        
        funcionario++;
    }
    
    return 0;
}
