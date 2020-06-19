#include <stdio.h>
#include <stdlib.h>

int main()
{
  float num, soma = 0;

  printf("\nDigite um número: ");
  scanf("%f", &num);

  while (num >= 0)
  {
    soma = soma + num;
    
    printf("\nDigite um número: ");
    scanf("%f", &num);
  }

  printf("\nA soma dos números é %.2f", soma);

  return 0;
}
