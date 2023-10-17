#include <stdio.h>

float imc(float peso, float altura) {

  float imc = peso / (altura * altura);

  return imc;
}

int main() {

  float peso;
  float altura;

  printf("Digite o peso (em kg): ");
  scanf("%f", &peso);
  printf("Digite a altura (em m): ");
  scanf("%f", &altura);

  float imc = imc(peso, altura);

  printf("O IMC da pessoa e de %.2f.\n", imc);

  return 0;
}
