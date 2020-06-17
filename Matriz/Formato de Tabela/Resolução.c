#include <stdio.h>

int main(void)
{
  int A[4][5] = {2, 3, 1, 4, 5, 1, -3, -5, 0, 8, 2, 5, 6, 3, -5, -1, 0, 1, 2, 3};

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%5d ", A[i][j]);
    }
    printf("\n");
  }
  int A[4][5] = {2, 3, 1, 4, 5, 1, -3, -5, 0, 8, 2, 5, 6, 3, -5, -1, 0, 1, 2, 3};

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%5d ", A[i][j]);
    }
    printf("\n");
  }
}