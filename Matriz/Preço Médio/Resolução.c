#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  float precos[15][3];

  for (int i = 0; i < 15; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      precos[i][j] = rand() % 20 / 10.0;
    }
  }

  for (int i = 0; i < 15; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%5.2f", precos[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 15; i++)
  {
    float soma = 0;
    for (int j = 0; j < 3; j++)
    {
      soma = soma + precos[i][j];
    }
    float precoMedio = soma / 3;
    printf("Produto: %d = preço médio: %.2f \n", i, precoMedio);
  }
}
