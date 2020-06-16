#include <stdio.h>

int main(void)
{
  float real, dolar, euro, peso;

  printf("Digite o valor em reais: ");
  scanf("%f", &real);

  dolar = real / 3.800;
  printf("Dolar = %.2f\n", dolar);

  euro = real / 4.210;
  printf("Euro = %.2f\n", euro);
  
  peso = real / 0.087;
  printf("Peso = %.2f\n", peso);
}