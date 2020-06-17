#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  srand(time(NULL));

  int numGerado = rand() % 100, sugestao, cont = 0;

  do
  {
    //solicita e lê sugestão do número
    printf("\nDigite uma sugestão para o número gerado pelo computador: ");
    scanf("%d", &sugestao);

    //verifica se a sugestão é maior ou menor que o número do computador e exibe dica
    if (sugestao > numGerado)
    {
      printf("> Seu número é MAIOR do que o meu\n");
    }
    else
    {
      if (sugestao < numGerado)
      {
        printf("> Seu número é MENOR do que o meu\n");
      }
    }

    //contabiliza qtde de tentativas
    cont++;
  } while (sugestao != numGerado);
  
  //exibe o número gerado e o número de tentativas
  printf("\n\nO número gerado pelo computador é %d e foi(foram) necessária(as) %d tentativa(as) para acertar!", numGerado, cont);
}
