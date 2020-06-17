#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int M[5][4], MI[5][4];

  printf("\n  Matriz lida:\n");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      M[i][j] = rand() % 10;
      printf("%3d", M[i][j]);
    }
    printf("\n\n");
  }

  printf("  Matriz transposta:\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      MI[i][j] = M[j][i];
      printf("%3d", MI[i][j]);
    }
    printf("\n\n");
  }
}