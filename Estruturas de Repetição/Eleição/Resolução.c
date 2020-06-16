#include <stdio.h>

int main(void)
{
  int x = 0, cod, cod1 = 0, cod2 = 0, cod3 = 0, cod4 = 0, cod5 = 0, venc;

  while (cod != 0)
  {
    x = x + 1;

    printf("\nInforme o código do candidato: ");
    scanf("%d", &cod);

    switch (cod)
    {
    case 1:
      cod1 = cod1 + 1;
      break;
    case 2:
      cod2 = cod2 + 1;
      break;
    case 3:
      cod3 = cod3 + 1;
      break;
    case 4:
      cod4 = cod4 + 1;
      break;
    case 5:
      cod5 = cod5 + 1;
      break;
    }
    if (cod1 > cod2 && cod1 > cod3)
    {
      venc = cod1;
    }
    else
    {
      if (cod2 > cod1 && cod2 > cod3)
      {
        venc = cod2;
      }
      else
      {
        venc = cod3;
      }
    }
  }
printf("Total de Votos: \n-Candidato 1: %d \n-Candidato 2: %d \n-Candidato 3: %d \nVotos Nulos: %d \nVotos em Branco: %d \nCandidato Vencedor: %d \nPercentual de Votos Brancos e Nulos: %d", cod1, cod2, cod3, cod4, cod5, venc, ((cod4 + cod5) * 100) / (cod1 + cod2 + cod3 + cod4 + cod5));
}
