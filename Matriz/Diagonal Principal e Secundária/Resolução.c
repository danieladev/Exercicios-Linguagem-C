#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int A[5][5];

  srand(time(NULL));

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      A[i][j] = rand() % 10;
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%3d", A[i][j]);
    }
    printf("\n");
  }

  int somaDP = 0, somaDS = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {

      if (i == j)
      {
        somaDP = somaDP + A[i][j];
      }

      if (i + j == 4)
      {
        somaDS = somaDS + A[i][j];
      }
    }
  }
  printf("Soma diagonal principal: %d \n", somaDP);
  printf("Soma diagonal secundária: %d \n", somaDS);
}
