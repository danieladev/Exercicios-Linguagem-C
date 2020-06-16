#include <stdio.h>

int main(void)
{
  int x = 1, num, maior = 0;

  while (x >= 100)
  {
    printf("\nInforme um número: ");
    scanf("%d", &num);
    
    if (num > maior)
    {
      maior = num;
    }
    x = x + 1;
  }
  printf("Maior = %d", maior);
}
