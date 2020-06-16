#include <stdio.h>

int main(void)
{
  int A, B;

  printf("Informe dois números inteiros: ");
  scanf("%d %d", &A, &B);

  if (A % B == 0 || B % A == 0)
  {
    printf("Sao Multiplos");
  }
  else
  {
    printf("Nao sao Multiplos");
  }
}
