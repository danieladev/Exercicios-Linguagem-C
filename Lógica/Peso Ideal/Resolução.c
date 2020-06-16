#include <stdio.h>

int main(void)
{
  float altura, peso;
  
  printf("Informe a altura: ");
  scanf("%f", &altura);

  peso = 72.7 * altura - 58;

  printf("Peo Ideal = %f", peso);
}