#include <stdio.h>

int main(void)
{
  int A[4][5] = {2, 3, 1, 4, 5, 1, -3, -5, 0, 8, 2, 5, 6, 3, -5, -1, 0, 1, 2, 3};
  int B[4][5] = {1, 2, 0, -1, 1, 0, 1, 3, 1, 0, 1, 2, -1, 4, 5, 2, 3, 4, 1, 2};

  int C[4][5];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  printf("\n A \n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%5d", A[i][j]);
    }
    printf("\n");
  }
  printf("\n B \n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%5d", B[i][j]);
    }
    printf("\n");
  }
  printf("\n C \n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%5d", C[i][j]);
    }
    printf("\n");
  }
}