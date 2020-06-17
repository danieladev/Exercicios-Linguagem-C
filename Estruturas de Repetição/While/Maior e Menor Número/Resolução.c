#include <stdio.h>

int main(void)
{
  int x, num, maior, menor;

  printf("Informe um número: ");
  scanf("%d", &num);

  maior = num;
  menor = num;

  while (x < 99)
  {
    printf("\nInforme um número: ");
    scanf("%d", &num);
    
    if (num > maior)
    {
      maior = num;
    }
    if (num < menor)
    {
      menor = num;
    }
    x = x + 1;
  }
  printf("Maior = %d \nMenor = %d", maior, menor);
}
