#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int M[5][5];

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      M[i][j] = rand() % 11;
      printf("%5d", M[i][j]);
    }
    printf("\n\n\n");
  }

  int somaDS = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (i + j == 4)
      {
        somaDS = somaDS + M[i][j];
      }
    }
  }
  printf("\nA soma dos elementos da diagonal secundária é: %d\n\n", somaDS);

  int somaADS = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (i + j < 4)
      {
        somaADS = somaADS + M[i][j];
      }
    }
  }
  printf("\nA soma dos elementos acima da diagonal secundária é: %d\n\n", somaADS);
}