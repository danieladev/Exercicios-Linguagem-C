#include <stdio.h>

int main(void)
{
  char nomes[20][20];
  float notas[20][4];

  for (int i = 0; i < 2; i++)
  {
    printf("Digite nome %d: ", i);
    scanf("%s", nomes[i]);
    for (int j = 0; j < 3; j++)
    {
      printf("Digite nota %d:", j);
      scanf("%f", &notas[i][j]);
    }
  }

  for (int i = 0; i < 20; i++)
  {
    float soma = 0;
    int j;
    for (j = 0; j < 3; j++)
    {
      soma = soma + notas[i][j];
    }
    notas[i][j] = soma / 3;
  }

  printf("Nome      Nota1     Nota2     Nota3      Media \n");
  for (int i = 0; i < 20; i++)
  {
    printf("%-10s", nomes[i]);
    for (int j = 0; j < 4; j++)
    {
      printf("%-10.2f", notas[i][j]);
    }
    printf("\n");
  }
}