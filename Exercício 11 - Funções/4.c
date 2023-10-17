#include <stdio.h>
#include <math.h>

float volume_cilindro(float altura, float raio) {

  float volume = 3.14159 * raio * raio * altura;

  return volume;
}

int main() {

  float altura;
  float raio;

  printf("Digite a altura do cilindro: ");
  scanf("%f", &altura);
  printf("Digite o raio do cilindro: ");
  scanf("%f", &raio);

  float volume = volume_cilindro(altura, raio);

  printf("O volume do cilindro e de %.2f.\n", volume);

  return 0;
}
