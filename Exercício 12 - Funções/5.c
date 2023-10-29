#include <stdio.h>
#include <time.h>

void calcula_idade(int dia_nascimento, int mes_nascimento, int ano_nascimento, int *dias, int *meses, int *anos) {
  struct tm data_atual;
  time_t tempo_atual;
  int dia_atual, mes_atual, ano_atual;

  time(&tempo_atual);
  localtime_r(&tempo_atual, &data_atual);
  dia_atual = data_atual.tm_mday;
  mes_atual = data_atual.tm_mon + 1;
  ano_atual = data_atual.tm_year + 1900;

  *dias = (ano_atual - ano_nascimento) * 365 + (mes_atual - mes_nascimento) * 30 + (dia_atual - dia_nascimento);
  *meses = *dias / 30;
  *dias = *dias % 30;
  *anos = *meses / 12;
  *meses = *meses % 12;

  printf("Idade: %d anos, %d meses e %d dias\n", *anos, *meses, *dias);
}

int main() {
  int dia_nascimento, mes_nascimento, ano_nascimento;

  printf("Dia de nascimento: ");
  scanf("%d", &dia_nascimento);
  printf("Mês de nascimento: ");
  scanf("%d", &mes_nascimento);
  printf("Ano de nascimento: ");
  scanf("%d", &ano_nascimento);

  int dias, meses, anos;

  calcula_idade(dia_nascimento, mes_nascimento, ano_nascimento, &dias, &meses, &anos);

  return 0;
}
