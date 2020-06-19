#include <stdio.h>

int main()
{
  int chocolate, quant, resto;

  printf("\nInforme a quantidade de chocolates: ");
  scanf("%d", &chocolate);

  quant = chocolate / 4;
  resto = chocolate % 4;

  printf("\n\nQuant. de chocolates para cada um dos filhos: %d", quant);
  printf("\nQuant. de chocolates para Estela: %d\n\n", resto);
  
  return 0;
}
