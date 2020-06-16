#include <stdio.h>

int main(void)
{
  float vs, porc, va, ns;

  printf("Informe o valor do salário e a porcentagem de aumento: ");
  scanf("%f %f", &vs, &porc);

  va = vs * (porc / 100);
  ns = vs + va;
  
  printf("Aumento = %.2f\n", va);
  printf("Novo Salário = %.2f", ns);
}