#include <stdio.h>

int main(void)
{
  float num;
  int x = 0, qtdNum = 0;

  printf("Informe um número: ");
  scanf("%f", &num);

  while (num != 0)
  {
    x = x + 1;

    printf("\nInforme um número: ");
    scanf("%f", &num);

    if (num >= 100 && num <= 200)
    {
      qtdNum = qtdNum + 1;
    }
  }
  printf("Quantidade de Números entre 100 e 200 = %d", qtdNum);
}
