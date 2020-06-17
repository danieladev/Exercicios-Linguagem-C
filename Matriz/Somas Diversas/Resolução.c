#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int M[4][5];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {

      M[i][j] = rand() % 10;
    }
  }
  
  for (int i = 0; i < 4; i++)
  {
    for (int i = 0; i < 4; i++)
    {
      int somaL = 0;
      for (int j = 0; j < 5; j++)
      {
        somaL = somaL + M[i][j];
      }
      printf("Soma linha %d: %d \n", i, somaL);
    }

    for (int j = 0; j < 5; j++)
    {
      int somaC = 0;
      for (int i = 0; i < 4; i++)
      {
        somaC = somaC + M[i][j];
      }
      printf("Soma coluna %d: %d \n", j, somaC);
    }
  }
