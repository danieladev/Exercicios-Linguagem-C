#include <stdio.h>
#include <string.h>

int main(void)
{
  int x = 0, acertos, acertoMaior = 0, candMaisMetade = 0, candMaisAcertos;
  char nome[10], nomeMaior[10];

  while (x < 3)
  {
    printf("Informe o nome: ");
    scanf("%s", nome);

    printf("Informe a quantidade de acertos: ");
    scanf("%d", &acertos);
    
    if (acertos > 50)
    {
      candMaisMetade = candMaisMetade + 1;
    }
    if (acertos > acertoMaior)
    {
      acertoMaior = acertos;
      strcpy(nomeMaior, nome);
    }
    x = x + 1;
  }
  printf("Quantidade de candidatos que acertaram mais que 50 questões: %d \nCandidato que acertou mais questões: %s \nQuantidade de acertos do candidato(a) %s: %d", candMaisMetade, nomeMaior, nomeMaior, acertoMaior);
}
