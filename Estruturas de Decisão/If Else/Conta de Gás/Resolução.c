#include <stdio.h>

int main(void)
{
  float consumo, valor;

  printf("Informe a quantidade de gás consumido: ");
  scanf("%f", &consumo);
  
  if (consumo <= 10)
  {
    valor = 15 * consumo;
  }
  else
  {
    valor = 15 * consumo + 20;
  }
  printf("%f", valor);
}
