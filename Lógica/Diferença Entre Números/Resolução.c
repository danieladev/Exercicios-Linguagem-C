#include <stdio.h>

int main(void)
{
  float num1, num2, resultado;
  
  printf("Informe o primeiro número: ");
  scanf("%f", &num1);

  printf("Informe o segundo número: ");
  scanf("%f", &num2);

  resultado = num1 - num2;

  printf("diferença = %f", resultado);
}