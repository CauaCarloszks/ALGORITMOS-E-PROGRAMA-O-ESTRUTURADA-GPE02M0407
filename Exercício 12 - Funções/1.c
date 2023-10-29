#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *opcoes[6] ={ "1. A vista com 10% de desconto",
                 "2. Em duas vezes (preco da etiqueta)",
                 "3. Parcelado de 3 ate 10 vezes com 3% de juros ao mes"
};
float valor =0;

void exibe_menu() {
  int i;
  printf("\nOpcoes de pagamento disponiveis\n");
  for (i=0;i<3;i++){
    printf("%s \n",opcoes[i]);
  };
};

void main() {
  int wopcao =1;
  float total;
  int wint;
  int n_prestacoes;
  float entrada;
  float prestacao;
  float w_valor;
  valor = 1;
  while (valor) { 
    printf("Informe o valor da compra ou digite 0 para terminar: ");
    scanf("%f",&valor);
    if (valor ==0) {
      break;
    };
    exibe_menu();
    do { 
      printf("Informe a opcao entre 1 e 3: ");
      scanf("%d",&wopcao);
    } while (wopcao < 1 || wopcao >3 );
    
    switch(wopcao) {
      case 1:
        n_prestacoes = 1;
        entrada = valor * 0.9; 
        prestacao = 0;
        break;
      case 2:
        n_prestacoes = 2;
        prestacao = ((int)valor/2);
        entrada = valor-prestacao;
        break;
      case 3:
        if (valor <= 100) {
          printf("Parcelo so disponivel para compras maiores que 100!\n");
          break;
        }
        do { 
          printf("Quantas parcelas ? entre 3 e 10: ");
          scanf("%d",&n_prestacoes);
        } while (n_prestacoes < 1 && n_prestacoes >10 );
        w_valor = valor * (1 + 0.03*n_prestacoes);
        prestacao = ((int)w_valor / n_prestacoes);
        entrada = w_valor - (prestacao * (n_prestacoes-1));
        break;
      default:
        printf("Opcao invalida!");
        break;
    };
    if (valor) {
      if (n_prestacoes == 1) {
        printf("O valor %7.2f vai ser pago a vista\n por apenas %7.2f\n",valor,entrada);
      }
      else {
        printf("O valor %7.2f vai ser pago em %d prestacoes\n",valor,n_prestacoes);
        printf("Entrada de %7.2f ",entrada);
        printf("Mais %d prestacoes de %7.2f\n",n_prestacoes-1,prestacao);
      };
    };
    
    
    }
}