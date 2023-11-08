#include <stdio.h>

char validaSexo() {
    char sexo;
    do {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo invalido. Digite M para masculino ou F para feminino.\n");
        }
    } while (sexo != 'M' && sexo != 'F');
    return sexo;
}

float validaSalario() {
    float salario;
    do {
        printf("Informe o salario em reais: R$");
        scanf("%f", &salario);
        if (salario <= 1.0) {
            printf("Salario invalido. Deve ser maior que R$1,00.\n");
        }
    } while (salario <= 1.0);
    return salario;
}

char* classificaSalario(float salario) {
    if (salario > 1400.0) {
        return "Acima do salario minimo";
    } else if (salario == 1400.0) {
        return "Igual ao salario minimo";
    } else {
        return "Abaixo do salario minimo";
    }
}

void mostraClassifica(char sexo, float salario) {
    printf("Salario: R$%.2f\n", salario);
    printf("Classificacao em relacao ao salario minimo: %s\n", classificaSalario(salario));
    printf("Sexo: %s\n", (sexo == 'M') ? "Masculino" : "Feminino");
    printf("\n");
}

int main() {
    int abaixo_salario_minimo = 0;
    int acima_salario_minimo = 0;
    
    while (1) {
        char sexo = validaSexo();
        float salario = validaSalario();
        
        if (salario < 1400.0) {
            abaixo_salario_minimo++;
        } else {
            acima_salario_minimo++;
        }
        
        mostraClassifica(sexo, salario);

        char continuar;
        printf("Deseja inserir dados para outro assalariado? (S/N): ");
        scanf(" %c", &continuar);
        if (continuar == 'N' || continuar == 'n') {
            break;
        }
    }
    
    printf("Quantidade de assalariados abaixo do salario minimo: %d\n", abaixo_salario_minimo);
    printf("Quantidade de assalariados acima do salario minimo: %d\n", acima_salario_minimo);
    
    return 0;
}
