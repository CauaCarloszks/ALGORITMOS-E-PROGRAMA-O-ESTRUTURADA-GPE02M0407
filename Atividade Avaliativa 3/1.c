#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Produto {
    char nome[55];
    int quantidade;
    int id;
    int valor;
    struct Produto *prox;
} Produto;

Produto* criarlista1Vazia() {
    return NULL;
}

Produto* criarProduto() {
    Produto *novoProduto = (Produto*)malloc(sizeof(Produto));
    if (novoProduto == NULL) {
        printf("Erro de memoria");
        exit(EXIT_FAILURE);
    }
    novoProduto->prox = NULL;
    return novoProduto;
}

Produto* cadastrar(Produto *lista1) {
    srand(time(NULL));
    Produto *novoProduto = criarProduto();
    novoProduto->id = rand() % 200;
    printf("Digite o nome do produto: ");
    fflush(stdin);
    fgets(novoProduto->nome, sizeof(novoProduto->nome), stdin);
    printf("Digite a quantidade: ");
    scanf("%d", &novoProduto->quantidade);
    printf("Digite o valor:");
    scanf ("%d", &novoProduto->valor);

    if (lista1 == NULL) {
        return novoProduto;
    } else {
        Produto *atual = lista1;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novoProduto;
        return lista1;
    }
}

void mostrarlista1(Produto *lista1) {
    Produto *atual = lista1;
    if (lista1 == NULL) {
        printf("\nlista1 nula\n");
        return;
    } else {
        while (atual != NULL) {
            printf("\nNome: %s", atual->nome);
            printf("quantidade: %d", atual->quantidade);
            printf("\nID: %d", atual->id);
            printf("\nValor do produto: %d", atual->valor);
            printf("\n");
            atual = atual->prox;
        }
    }
}

Produto* buscarProduto(Produto *lista1, int buscaID) {
    Produto *atual = lista1;
    while (atual != NULL) {
        if (atual->id == buscaID) {
            printf("\nNome: %s", atual->nome);
            printf("quantidade: %d", atual->quantidade);
            printf("\nID: %d", atual->id);
            return atual;
        }
        atual = atual->prox;
    }
    printf("Produto nao encontrado");
    return NULL;
}

void alterar(Produto *Produto) {
    printf("Digite o novo nome");
    fflush(stdin);
    fgets(Produto->nome, sizeof(Produto->nome), stdin);
    fflush(stdin);
    printf("Digite a novo quantidade");
    fflush(stdin);
    scanf("%d", &Produto->quantidade);
}

Produto* excluir(Produto *lista1, int buscaID) {
    Produto *atual = lista1;
    Produto *precedente = NULL;

    while (atual != NULL && atual->id != buscaID) {
        precedente = atual;
        atual = atual->prox;
    }

    if (atual != NULL) {
        if (precedente != NULL) {
            precedente->prox = atual->prox;
        } else {
            lista1 = atual->prox;
        }
        free(atual);
        printf("Removido com sucesso");
    } else {
        printf("Produto nao encontrado");
    }
    return lista1;
}

void liberarlista1(Produto *lista1) {
    Produto *atual = lista1;
    Produto *prox;
    while (atual != NULL) {
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

int main() {
    int opcao;
    int buscaID;
    Produto *encontrado;
    Produto *lista1 = criarlista1Vazia();

    do {
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para mostrar");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 4 para alterar");
        printf("\nDigite 5 para excluir");
        printf("\nDigite 0 para sair");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lista1 = cadastrar(lista1);
                break;
            case 2:
                mostrarlista1(lista1);
                break;
            case 3:
                printf("Digite o id para busca");
                scanf("%d", &buscaID);
                encontrado = buscarProduto(lista1, buscaID);
                break;
            case 4:
                printf("\nDigite o id para alteracao");
                scanf("%d", &buscaID);
                encontrado = buscarProduto(lista1, buscaID);
                if (encontrado != NULL) {
                    alterar(encontrado);
                }
                break;
            case 5:
                printf("\nDigite o id para exclusao");
                scanf("%d", &buscaID);
                lista1 = excluir(lista1, buscaID);
                break;
        }
    } while (opcao != 0);

    liberarlista1(lista1);

    return 0;
}