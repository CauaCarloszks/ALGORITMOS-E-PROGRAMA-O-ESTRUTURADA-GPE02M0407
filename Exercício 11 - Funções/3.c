#include <stdio.h>

float fahrenheit_para_celsius(float temperatura_fahrenheit) {

  float temperatura_celsius = (temperatura_fahrenheit - 32.0) * (5.0 / 9.0);

  return temperatura_celsius;
}

int main() {
  
  float temperatura_fahrenheit;

  printf("Digite uma temperatura em Fahrenheit: ");
  scanf("%f", &temperatura_fahrenheit);

  float temperatura_celsius = fahrenheit_para_celsius(temperatura_fahrenheit);

  printf("A temperatura em Celsius e de %.2f.\n", temperatura_celsius);

  return 0;
}
