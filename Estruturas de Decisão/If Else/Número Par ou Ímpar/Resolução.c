#include <stdio.h>

int main(void)
{
  int num;

  printf("Informe um número: ");
  scanf("%d", &num);
  
  if (num % 2 == 0)
  {
    printf("Número Par");
  }
  else
  {
    printf("Número Ímpar");
  }
}
