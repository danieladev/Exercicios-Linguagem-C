#include <stdio.h>

int main(void)
{
  float valor;
  int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

  printf("Digite o valor: R$ ");
  scanf("%f", &valor);

  while (valor >= 100)
  {
    n100 += 1;
    valor = valor - 100;
  }

  if (n100 > 0)
  {
    printf("\nQuantidade minima de notas de R$ 100.00: %d", n100);
  }

  while (valor >= 50)
  {
    n50 += 1;
    valor = valor - 50;
  }

  if (n50 > 0)
  {
    printf("\nQuantidade minima de notas de R$ 50.00: %d", n50);
  }

  while (valor >= 20)
  {
    n20 += 1;
    valor = valor - 20;
  }

  if (n20 > 0)
  {
    printf("\nQuantidade minima de notas de R$ 20.00: %d", n20);
  }

  while (valor >= 10)
  {
    n10 += 1;
    valor = valor - 10;
  }

  if (n10 > 0)
  {
    printf("\nQuantidade minima de notas de R$ 10.00: %d", n10);
  }

  while (valor >= 5)
  {
    n5 += 1;
    valor = valor - 5;
  }

  if (n5 > 0)
  {
    printf("\nQuantidade minima de notas de R$ 5.00: %d", n5);
  }

  while (valor >= 2)
  {
    n2 += 1;
    valor = valor - 2;
  }

  if (n2 > 0)
  {
    printf("\nQuantidade minima de notas de R$ 2.00: %d", n2);
  }

  while (valor >= 1)
  {
    n1 += 1;
    valor = valor - 1;
  }

  if (n1 > 0)
  {
    printf("\nQuantidade minima de notas de R$ 1.00: %d", n1);
  }

  return 0;
}
