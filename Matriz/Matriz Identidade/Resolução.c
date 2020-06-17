#include <stdio.h>

int main(void)
{
  int M[10][10];
  
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (i == j)
      {
        M[i][j] = 1;
      }
      if (i != j)
      {
        M[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%3d", M[i][j]);
    }
    printf("\n");
  }
}