#include <stdio.h>

int main(void)
{
  int a, b, produto = 0, x = 1;

  printf("Informe dois números: ");
  scanf("%d %d", &a, &b);

  while (x <= a)
  {
    produto = produto + b;
    x = x + 1;
  }
  printf("%d x %d = %d", a, b, produto);
}
