#include <stdio.h>

int main(void)
{
  int num, x = 1;

  printf("Informe um número: ");
  scanf("%d", &num);

  while (x <= num)
  {
    if (num % x == 0)
    {
      printf("%d \n", x);
    }
    x = x + 1;
  }
}
