#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USUARIOS 1000

struct Usuario {
    int id;
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
};

void incluirUsuario(struct Usuario usuarios[], int *totalUsuarios);
void editarUsuario(struct Usuario usuarios[], int totalUsuarios);
void excluirUsuario(struct Usuario usuarios[], int *totalUsuarios);
void buscarUsuarioPorEmail(struct Usuario usuarios[], int totalUsuarios);
void imprimirTodosUsuarios(struct Usuario usuarios[], int totalUsuarios);

int main() {
    struct Usuario usuarios[MAX_USUARIOS];
    int totalUsuarios = 0;

    char opcao;
    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Incluir usuario\n");
        printf("2 - Editar usuario\n");
        printf("3 - Excluir usuario\n");
        printf("4 - Buscar usuario por e-mail\n");
        printf("5 - Imprimir todos os usuarios\n");
        printf("0 - Sair\n");

        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario(usuarios, &totalUsuarios);
                break;
            case '2':
                editarUsuario(usuarios, totalUsuarios);
                break;
            case '3':
                excluirUsuario(usuarios, &totalUsuarios);
                break;
            case '4':
                buscarUsuarioPorEmail(usuarios, totalUsuarios);
                break;
            case '5':
                imprimirTodosUsuarios(usuarios, totalUsuarios);
                break;
            case '0':
                printf("Encerrando o programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != '0');

    return 0;
}

void incluirUsuario(struct Usuario usuarios[], int *totalUsuarios) {
    if (*totalUsuarios < MAX_USUARIOS) {
        srand(time(NULL));

        usuarios[*totalUsuarios].id = rand();
        scanf(" %[^\n]s", usuarios[*totalUsuarios].nome);
        scanf(" %s", usuarios[*totalUsuarios].email);
        if (strstr(usuarios[*totalUsuarios].email, "@") == NULL) {
            return;
        }
        scanf(" %s", usuarios[*totalUsuarios].sexo);
        if (strcmp(usuarios[*totalUsuarios].sexo, "Feminino") != 0 &&
            strcmp(usuarios[*totalUsuarios].sexo, "Masculino") != 0 &&
            strcmp(usuarios[*totalUsuarios].sexo, "Indiferente") != 0) {
            return;
        }
        scanf(" %[^\n]s", usuarios[*totalUsuarios].endereco);
        scanf("%lf", &usuarios[*totalUsuarios].altura);
        if (usuarios[*totalUsuarios].altura < 1.0 || usuarios[*totalUsuarios].altura > 2.0) {
            return;
        }
        scanf("%d", &usuarios[*totalUsuarios].vacina);

        (*totalUsuarios)++;
    }
}

void editarUsuario(struct Usuario usuarios[], int totalUsuarios) {
    int id;
    scanf("%d", &id);

    int i;
    for (i = 0; i < totalUsuarios; i++) {
        if (usuarios[i].id == id) {
            scanf(" %[^\n]s", usuarios[i].nome);
            scanf(" %s", usuarios[i].email);
            if (strstr(usuarios[i].email, "@") == NULL) {
                return;
            }
            scanf(" %s", usuarios[i].sexo);
            if (strcmp(usuarios[i].sexo, "Feminino") != 0 &&
                strcmp(usuarios[i].sexo, "Masculino") != 0 &&
                strcmp(usuarios[i].sexo, "Indiferente") != 0) {
                return;
            }
            scanf(" %[^\n]s", usuarios[i].endereco);
            scanf("%lf", &usuarios[i].altura);
            if (usuarios[i].altura < 1.0 || usuarios[i].altura > 2.0) {
                return;
            }
            scanf("%d", &usuarios[i].vacina);
        }
    }
}

void excluirUsuario(struct Usuario usuarios[], int *totalUsuarios) {
    int id;
    scanf("%d", &id);

    int i;
    for (i = 0; i < *totalUsuarios; i++) {
        if (usuarios[i].id == id) {
            usuarios[i] = usuarios[*totalUsuarios - 1];
            (*totalUsuarios)--;
        }
    }
}

void buscarUsuarioPorEmail(struct Usuario usuarios[], int totalUsuarios) {
    char email[50];
    scanf(" %s", email);

    int i;
    for (i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].email, email) == 0) {
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("E-mail: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2f\n", usuarios[i].altura);
            printf("Vacinado: %s\n", usuarios[i].vacina ? "Sim" : "Nao");
            return;
        }
    }
}

void imprimirTodosUsuarios(struct Usuario usuarios[], int totalUsuarios) {
    if (totalUsuarios > 0) {
        int i;
        for (i = 0; i < totalUsuarios; i++) {
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("E-mail: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2f\n", usuarios[i].altura);
            printf("Vacinado: %s\n", usuarios[i].vacina ? "Sim" : "Nao");
            printf("-----------------\n");
        }
    } else {
        printf("Nenhum usuario cadastrado.\n");
    }
}
