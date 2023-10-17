#include <stdio.h>
#include <math.h>

float volume_esfera(float raio) {

  float volume = (4.0 / 3.0) * 3.14159 * raio * raio * raio;

  return volume;
}

int main() {

  float raio;

  printf("Digite o raio da esfera: ");
  scanf("%f", &raio);

  float volume = volume_esfera(raio);

  printf("O volume da esfera e de %.2f.\n", volume);

  return 0;
}
