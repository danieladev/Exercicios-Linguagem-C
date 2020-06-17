#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int M[4][4];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      M[i][j] = rand() % 10;
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("% d", M[i][j]);
    }
    printf("\n");
  }

  int maior = M[0][0];
  int menor = M[0][0];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {

      if (M[i][j] > maior)
      {
        maior = M[i][j];
      }

      if (M[i][j] < menor)
      {
        menor = M[i][j];
      }
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (M[i][j] == maior)
      {
        printf("Maior - localização: %d , %d \n", i, j);
      }

      if (M[i][j] == menor)
      {
        printf("Menor - localização: %d , %d \n", i, j);
      }
    }
  }
}
