#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrutura Pizza
struct Pizza
{
  int CodigoPizza;
  char NomePizza[20];
};

//estrutura Preco
struct Preco
{
  int CodigoPizza;
  float Preco;
};

//funcao cadastra pizzas
struct Pizza cadastroPizza()
{
  struct Pizza cadPiz;

  printf("\nDigite o codigo da pizza: ");
  scanf("%d", &cadPiz.CodigoPizza);
  
  printf("Digite o nome da pizza: ");
  scanf("%s", cadPiz.NomePizza);

  return cadPiz;
}

//funcao cadastra precos
struct Preco cadastroPreco(struct Pizza pizzas[], int j)
{
  struct Preco cadPrec;

  cadPrec.CodigoPizza = pizzas[j].CodigoPizza;

  printf("\nDigite o preco da pizza %s: ", pizzas[j].NomePizza);
  scanf("%f", &cadPrec.Preco);

  return cadPrec;
}

//funcao localiza e imprimi pedido
void ImprimePedido(char nomePizPed[20], int qtde, struct Pizza pizzas[], struct Preco precos[])
{
  int achou;
  for (int x = 0; x < 2; x++)
  {
    achou = strcmp(nomePizPed, pizzas[x].NomePizza);
    if (achou == 0)
    {
      printf("\nPEDIDO \nCodigo: %d | Nome: %s | Quantidade: %d | Valor Total: %.2f\n", precos[x].CodigoPizza, nomePizPed, qtde, qtde * precos[x].Preco);
    }
  }
  if (achou != 0)
  {
    printf("\nPizza nao cadastrada.\n");
  }
}

int main()
{
  struct Preco precos[2];
  struct Pizza pizzas[2];
  char nomePizPed[20];
  int op, i = 0, j = 0, qtde;

  do
  {
    printf("\nEscolha uma opcao abaixo: ");
    printf("\n0 - Sair");
    printf("\n1 - Cadastro Pizza");
    printf("\n2 - Cadastro Preco");
    printf("\n3 - Pedido\n");
    scanf("%d", &op);

    switch (op)
    {
    case 0:
      printf("\nVoce escolheu 0 - Sair.\n");
      break;

    case 1:
      if (i != 2)
      {
        pizzas[i] = cadastroPizza();
        i++;
      }
      else
      {
        printf("\nVoce ja cadastrou as 2 pizzas.\n");
      }
      break;

    case 2:
      if (i == j)
      {
        printf("\nVoce deve antes cadastrar uma pizza.\n");
      }
      else
      {
        if (i > j)
        {
          precos[j] = cadastroPreco(pizzas, j);
          j++;
        }
        else
        {
          if (i == 2)
          {
            printf("\nVoce ja cadastrou os 2 precos.\n");
          }
        }
      }
      break;

    case 3:
      printf("\nDigite o nome da pizza: ");
      scanf("%s", nomePizPed);

      printf("Digite a quantidade: ");
      scanf("%d", &qtde);

      ImprimePedido(nomePizPed, qtde, pizzas, precos);

      //zera as posicoes de i e j para novos cadastrados de pizzas e precos
      i = 0;
      j = 0;
      break;
    }
  } while (op != 0);

  return 0;
}
