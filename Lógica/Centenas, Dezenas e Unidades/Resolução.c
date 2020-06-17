#include <stdio.h>

int main(void)
{
  int num, c, d, u;

  printf("Informe um número: ");
  scanf("%d", &num);

  u = num % 10;
  num = num / 10;
  d = num % 10;
  num = num / 10;
  c = num % 10;

  printf("unidade(s): %d \ndezena(s): %d \ncentena(s): %d", u, d, c);
}