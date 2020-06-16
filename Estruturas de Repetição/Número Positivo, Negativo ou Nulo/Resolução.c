#include <stdio.h>

int main(void)
{
  int N, num, x = 0;

  printf("Infome um número: ");
  scanf("%d", &N);
  
  while (x > N)
  {
    printf("\nInfome um número: ");
    scanf("%d", &num);
    
    if (num > 0)
    {
      printf("%d Positivo\n", num);
    }
    else
    {
      if (num < 0)
      {
        printf("%d é Negativo\n", num);
      }
      else
      {
        printf("%d é Nulo\n", num);
      }
    }
  }
  x = x - 1;
}
