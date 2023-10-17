#include <stdio.h>

    int main() {

        int mes;
        char *nome_mes;
        int dias;

        printf("Digite um mes entre 1 e 12: ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Mes invalido.");
            return 1;
        }

        switch (mes) {
            case 1:
            nome_mes = "janeiro";
            dias = 31;
            break;
            case 2:
            nome_mes = "fevereiro";
            dias = 28;
            break;
            case 3:
            nome_mes = "marco";
            dias = 31;
            break;
            case 4:
            nome_mes = "abril";
            dias = 30;
            break;
            case 5:
            nome_mes = "maio";
            dias = 31;
            break;
            case 6:
            nome_mes = "junho";
            dias = 30;
            break;
            case 7:
            nome_mes = "julho";
            dias = 31;
            break;
            case 8:
            nome_mes = "agosto";
            dias = 31;
            break;
            case 9:
            nome_mes = "setembro";
            dias = 30;
            break;
            case 10:
            nome_mes = "outubro";
            dias = 31;
            break;
            case 11:
            nome_mes = "novembro";
            dias = 30;
            break;
            case 12:
            nome_mes = "dezembro";
            dias = 31;
            break;
        }

        printf("O mes %s tem %d dias.\n", nome_mes, dias);

        return 0;
        }
