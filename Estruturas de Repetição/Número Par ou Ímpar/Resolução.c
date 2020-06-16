#include <stdio.h>

int main(void)
{
  int x = 1, num;

  while (x <= 50)
  {
    printf("\nInforme um número: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
      printf("Par\n");
    }
    else
    {
      printf("Ímpar\n");
    }
  }
  x = x + 1;
}
