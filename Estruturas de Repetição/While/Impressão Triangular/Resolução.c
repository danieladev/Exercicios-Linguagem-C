#include <stdio.h>

int main(void)
{
  int linha = 1, coluna = 1;

  while (linha <= 8)
  {
    if (coluna <= linha)
    {
      printf("*");
      coluna = coluna + 1;
    }
    else
    {
      printf("\n");
      coluna = 1;
      linha = linha + 1;
    }
  }
  return 0;
}
