#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//gera numero aleatorio
int gerador()
{
  int numGerado;
  srand(time(NULL));
  numGerado = rand() % 1000 + 1;
  return numGerado;
}

//solicita numero
int tentativa(gerado, opcao)
{
  int numDigitado;
  if (opcao == 1)
  {
    printf("\nDigite o numero correspondente ao gerado pelo computador: ");
    scanf("%d", &numDigitado);
  }
  else
  {
    printf("\nVoce solicitou para sair. O numero gerado pelo computador e o %d", gerado);
  }
  return numDigitado;
}

//verifica se numero digitado e igual ao gerado
int dicas(gerador, digitado)
{
  int result;
  if (digitado > gerador)
  {
    result = 1;
  }
  else
  {
    if (digitado < gerador)
    {
      result = 2;
    }
    else
    {
      if (digitado == gerador)
      {
        result = 3;
      }
    }
  }
  return result;
}

//imprime resultado
void imprime(cont, digitado, result)
{
  if (result == 1)
  {
    printf("\n> O numero digitado e MAIOR que o numero gerado");
  }
  else
  {
    if (result == 2)
    {
      printf("\n> O numero digitado e MENOR que o numero gerado");
    }
    else
    {
      if (result == 3)
      {
        printf("\n> Parabens! Voce ACERTOU o numero %d em %d tentativas", digitado, cont);
      }
    }
  }
}

int main(void)
{
  int continuar, gerado, digitado, verifica, cont = 0;

  gerado = gerador();

  do
  {
    printf("\nEscolha uma opcao abaixo:");
    printf("\n1 - Adivinhar Numero");
    printf("\n0 - Sair\n");
    scanf("%d", &continuar);
    cont++;
    digitado = tentativa(gerado, continuar);

    if (continuar != 0)
    {
      verifica = dicas(gerado, digitado);
      imprime(cont, digitado, verifica);
    }
    printf("\n");
  } while (continuar == 1 && digitado != gerado);
}
