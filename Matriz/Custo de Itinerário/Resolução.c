#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int custos[4][4] = {1, 4, 3, 6, 4, 1, 5, 7, 3, 5, 1, 8, 6, 7, 8, 1};

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf(" %d", custos[i][j]);
    }
    printf("\n");
  }

  int N;
  printf("Digite o número de cidades: \n");
  scanf("%d", &N);
  
  int itinerario[N];

  for (int x = 0; x < N; x++)
  {
    scanf("%d", &itinerario[x]);
  }

  int soma = 0;
  for (int x = 0; x < N - 1; x++)
  {
    soma = soma + custos[itinerario[x]][itinerario[x + 1]];
  }

  printf("Custo total: %d \n", soma);
}