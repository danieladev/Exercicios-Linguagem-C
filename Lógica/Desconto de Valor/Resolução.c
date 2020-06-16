#include <stdio.h>

int main(void)
{
  float vprod, porc, desc, nvprod;

  printf("Informe o valor e porcentagem de desconto do produto: ");
  scanf("%f %f", &vprod, &porc);
  
  desc = vprod * (porc / 100);
  printf("Desconto = %.2f\n", desc);
  
  nvprod = vprod - desc;
  printf("Novo Valor = %.2f", nvprod);
}