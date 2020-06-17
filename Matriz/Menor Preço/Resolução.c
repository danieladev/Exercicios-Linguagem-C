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
    float menor = precos[i][0];
    for (int j = 0; j < 3; j++)
    {

      if (precos[i][j] < menor)
      {
        menor = precos[i][j];
      }
    }
    printf("Produto: %d \n", i);
    printf("Menor preço: %.2f \n", menor);

    for (int j = 0; j < 3; j++)
    {
      if (precos[i][j] == menor)
      {
        printf("Loja: %d \n", j);
      }
    }
  }
}
