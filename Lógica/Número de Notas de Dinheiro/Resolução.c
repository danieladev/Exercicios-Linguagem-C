#include <stdio.h>

int main(void)
{
  int valor, n100, n50, n20, n10, n5, r;

  printf("Informe o valor: ");
  scanf("%d", &valor);

  n100 = valor / 100;
  r = valor % 100;
  n50 = r / 50;
  r = r % 50;
  n20 = r / 20;
  r = r % 20;
  n10 = r / 10;
  r = r % 10;
  n5 = r / 5;

  printf("%d nota(s) de R$ 100,0\n", n100);
  printf("%d nota(s) de R$ 50,0\n", n50);
  printf("%d nota(s) de R$ 20,0\n", n20);
  printf("%d nota(s) de R$ 10,0\n", n10);
  printf("%d nota(s) de R$ 5,0\n", n5);
}