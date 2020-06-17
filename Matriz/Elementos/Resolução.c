#include <stdio.h>
#include <math.h>

int main(void)
{
  int m, n;
  int A[m][n];

  printf("Digite a qtde de linhas e colunas da matriz: ");
  scanf("%d %d", &m, &n);

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        A[i][j] = pow(i + j, 2);
      }
      else
      {
        A[i][j] = 2 * (i + j);
      }
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%3d", A[i][j]);
    }
    printf("\n");
  }
}
