#include <stdio.h>
int main()
{
  int M[3][3], soma, aux;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == 0 && j == 0)
      {
        printf("Digite um numero para a posicao M[0][0]: ");
        scanf("%d", &M[0][0]);

        aux = M[0][0];
        soma = aux;
      }
      else
      {
        M[i][j] = aux + 2;
        aux = M[i][j];
        soma = soma + aux;
      }
    }
  }
  printf("\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%5d", M[i][j]);
    }
    printf("\n");
  }
  printf("\nA soma de todos os valores da matriz e %d", soma);

  return 0;
}
