#include <stdio.h>

int main(void)
{
  int x = 1, num, maior;

  printf("Informe um número: ");
  scanf("%d", &num);

  maior = num;
  
  while (x <= 99)
  {
    if (num > maior)
    {
      maior = num;
    }
    x = x + 1;
  }
  printf("Maior = %d\n", maior);
}
