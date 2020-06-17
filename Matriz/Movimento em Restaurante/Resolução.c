#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int N;
  int clientes[N][6];
  
  printf("Digite número de semanas: \n");
  scanf("%d", &N);

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < 6; j++)
    {

      clientes[i][j] = rand() % 50;
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      printf(" %d", clientes[i][j]);
    }
    printf("\n");
  }

  float soma = 0, media;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      soma = soma + clientes[i][j];
    }
  }
  media = soma / (N * 6);
  printf("Média de clientes: %.2f \n", media);

  int cont = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      if (clientes[i][j] > media)
      {
        cont++;
      }
    }
  }
  printf("Número de dias acima da média: %d \n", cont);

  for (int i = 0; i < N; i++)
  {
    int menor = clientes[i][0];
    for (int j = 0; j < 6; j++)
    {
      if (clientes[i][j] < menor)
      {
        menor = clientes[i][j];
      }
    }
    printf("Semana: %d \n", i);
    printf("Menor movimento: %d \n", menor);

    for (int j = 0; j < 6; j++)
    {
      if (clientes[i][j] == menor)
      {
        printf("Dia: %d \n", j);
      }
    }
  }
}