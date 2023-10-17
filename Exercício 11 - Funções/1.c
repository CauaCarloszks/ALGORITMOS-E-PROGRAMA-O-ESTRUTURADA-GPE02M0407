#include <stdio.h>

float maior_valor(float a, float b)
{
    if(a > b) return a;
    else return b;
}


int main()
{
       float  a, b;
      
       printf("Informe o primeiro numero: ");
       scanf("%f", &a);
      
       printf("Informe o segundo numero: ");
       scanf("%f", &b);
      
       printf("\nO maior valor e: %.3f", maior_valor(a,b));
      
    return 0;
}