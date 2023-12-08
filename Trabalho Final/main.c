#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char proprietario[100];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[17];
    int ano;
    char placa[8];
} Veiculo;

typedef struct Node {
    Veiculo data;
    struct Node* next;
} Node;

void addVeiculo(Node** head, Veiculo veiculo) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = veiculo;
    newNode->next = *head;
    *head = newNode;
}

void listarProprietarios2010Diesel(Node* head) {
    printf("Proprietarios de carros do ano de 2010 ou posterior e movidos a diesel:\n");
    while (head != NULL) {
        if (head->data.ano >= 2010 && strcmp(head->data.combustivel, "diesel") == 0) {
            printf("%s\n", head->data.proprietario);
        }
        head = head->next;
    }
}

void listarPlacasJ(Node* head) {
    printf("Placas que comecam com 'J' e terminam com 0, 2, 4 ou 7, com seus respectivos proprietarios:\n");
    while (head != NULL) {
        if (head->data.placa[0] == 'J' && (head->data.placa[7] == '0' || head->data.placa[7] == '2' ||
                                           head->data.placa[7] == '4' || head->data.placa[7] == '7')) {
            printf("Placa: %s, Proprietario: %s\n", head->data.placa, head->data.proprietario);
        }
        head = head->next;
    }
}

void listarModeloCorPlacasVogalSomaPar(Node* head) {
    printf("Modelo e cor dos veiculos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numericos fornece um numero par:\n");
    while (head != NULL) {
        if (strchr("aeiouAEIOU", toupper(head->data.placa[1])) != NULL) {
            int somaNumeros = 0;
            for (int i = 0; i < 7; i++) {
                if (isdigit(head->data.placa[i])) {
                    somaNumeros += head->data.placa[i] - '0';
                }
            }
            if (somaNumeros % 2 == 0) {
                printf("Modelo: %s, Cor: %s\n", head->data.modelo, head->data.cor);
            }
        }
        head = head->next;
    }
}

void trocarProprietarioSemZero(Node** head, char chassi[17], char novoProprietario[100]) {
    Node* current = *head;
    while (current != NULL) {
        if (strcmp(current->data.chassi, chassi) == 0 && strpbrk(current->data.placa, "0") == NULL) {
            strcpy(current->data.proprietario, novoProprietario);
            printf("Proprietario atualizado com sucesso!\n");
            return;
        }
        current = current->next;
    }
    printf("Veiculo nao encontrado ou placa possui digito zero.\n");
}

void liberarLista(Node* head) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* listaVeiculos = NULL;

    // Adicionar veículos à lista a partir da entrada do usuário
    int numVeiculos;
    printf("Quantos veiculos deseja cadastrar? ");
    scanf("%d", &numVeiculos);

    for (int i = 0; i < numVeiculos; i++) {
        Veiculo novoVeiculo;
        printf("\nInforme os dados para o veiculo %d:\n", i + 1);
        printf("Proprietario: ");
        scanf(" %[^\n]s", novoVeiculo.proprietario);
        printf("Combustivel (alcool, diesel ou gasolina): ");
        scanf("%s", novoVeiculo.combustivel);
        printf("Modelo: ");
        scanf("%s", novoVeiculo.modelo);
        printf("Cor: ");
        scanf("%s", novoVeiculo.cor);
        printf("Chassi: ");
        scanf("%s", novoVeiculo.chassi);
        printf("Ano: ");
        scanf("%d", &novoVeiculo.ano);
        printf("Placa: ");
        scanf("%s", novoVeiculo.placa);

        addVeiculo(&listaVeiculos, novoVeiculo);
    }

    // Testar as funções
    listarProprietarios2010Diesel(listaVeiculos);
    listarPlacasJ(listaVeiculos);
    listarModeloCorPlacasVogalSomaPar(listaVeiculos);

    char chassiTroca[17];
    char novoProprietario[100];
    printf("\nInforme o chassi para troca de proprietario: ");
    scanf("%s", chassiTroca);
    printf("Informe o novo proprietario: ");
    scanf(" %[^\n]s", novoProprietario);
    trocarProprietarioSemZero(&listaVeiculos, chassiTroca, novoProprietario);

    // Liberar memória
    liberarLista(listaVeiculos);

    return 0;
}