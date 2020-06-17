#include <stdio.h>

int main(void)
{
  float num, maior = 0;
  int x = 0;

  printf("Informe um número: ");
  scanf("%f", &num);

  while (num >= 0)
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
