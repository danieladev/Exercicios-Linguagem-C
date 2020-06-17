#include <stdio.h>

int main(void)
{
  float num, maior;
  int x = 0;
  maior = num;

  printf("Informe um número: ");
  scanf("%f", &num);

  while (num != 0)
  {
    x = x + 1;

    printf("\nInforme um número: ");
    scanf("%f", &num);
    
    if (num > maior)
    {
      maior = num;
    }
  }
  printf("O número maior é = %.2f", maior);
}
