#include <stdio.h>
#include <string.h>

int main(void)
{
  float maior = 0, pop, mediaPop, qtdPop;
  char nomeCidade[10], cidadeMaior[10];

  printf("Informe o nome da cidade: ");
  scanf("%s", nomeCidade);

  while (nomeCidade[0] != 'X')
  {
    printf("\nInforme o número da população: ");
    scanf("%f", &pop);

    qtdPop = qtdPop + 1;
    mediaPop = mediaPop + pop;

    if (pop > maior)
    {
      maior = pop;
      strcpy(cidadeMaior, nomeCidade);
    }
    scanf("%s", nomeCidade);
  }
  mediaPop = mediaPop / qtdPop;
  printf("Média populacional = %f \nCidade maior: %s", mediaPop, cidadeMaior);
}
