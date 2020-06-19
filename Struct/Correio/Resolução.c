#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct volume
{
  float peso;
  float valorVolume;
};

struct estado
{
  char siglaEstado[4];
  float taxaEnvio;
};

struct tipo
{
  char tipoEnvio[20];
  float valorTipo;
};

void menu()
{
  printf("\n\nMenu:\n\n");
  printf("Escolha uma opcao abaixo:\n");
  printf("0 - Sair\n");
  printf("1 - Cadastro de Volume\n");
  printf("2 - Cadastro de Estado\n");
  printf("3 - Tipos\n");
  printf("4 - Envios\n");
}

struct volume preencheVolume()
{
  struct volume oVolume;
  printf("\nDigite o peso do volume:\n");
  scanf("%f", &oVolume.peso);
  printf("\nDigite o valor do volume:\n");
  scanf("%f", &oVolume.valorVolume);
  return oVolume;
}

struct estado preencheEstado()
{
  struct estado oEstado;
  printf("\nDigite a sigla do estado:\n");
  scanf(" %s", oEstado.siglaEstado);
  printf("\nDigite a taxa de envio:\n");
  scanf("%f", &oEstado.taxaEnvio);
  return oEstado;
}

struct tipo preencheTipo()
{
  struct tipo oTipo;
  printf("\nDigite o tipo de envio:\n");
  scanf(" %s", oTipo.tipoEnvio);
  printf("\nDigite o valor da taxa deste tipo:\n");
  scanf("%f", &oTipo.valorTipo);
  return oTipo;
}

float calculaPreco(float peso, struct volume oVolume[])
{
  int i = 0, a = 0;
  for (i = 0; i < 5; i++)
  {
    if (peso == oVolume[i].peso)
    {
      a = 1;
      return oVolume[i].valorVolume;
    }
  }
  if (a == 0)
  {
    printf("\nPeso nao encontrado. Tente novamente.\n");
    return 0;
  }
}

float calculaEstado(char estado[], struct estado oEstado[])
{
  int i = 0, a = 0;
  for (i = 0; i < 5; i++)
  {
    if (strcmp(estado, oEstado[i].siglaEstado) == 0)
    {
      a = 1;
      return oEstado[i].taxaEnvio;
    }
  }
  if (a == 0)
  {
    printf("\nEstado nao encontrado. Tente novamente.\n");
    return 0;
  }
}

float calculaTipo(char tipo[], struct tipo oTipo[])
{
  int i = 0, a = 0;
  for (i = 0; i < 5; i++)
  {
    if (strcmp(tipo, oTipo[i].tipoEnvio) == 0)
    {
      a = 1;
      return oTipo[i].valorTipo;
    }
  }
  if (a == 0)
  {
    printf("\nTipo nao encontrado. Tente novamente.\n");
    return 0;
  }
}

int main()
{
  struct volume volumeVetor[5] = {};
  struct estado estadoVetor[5] = {};
  struct tipo tipoVetor[5] = {};
  int op, auxv = 0, auxe = 0, auxt = 0, auxo;
  float peso = 0, precoTotal1 = 0, precoTotal2 = 0, precoTotal3 = 0, precoTotal = 0;
  char estado[2] = {}, tipochar[20] = {};

  do
  {
    menu();
    scanf("%d", &op);

    switch (op)
    {
    case 0:
      break;
    case 1:
      if (auxv < 5)
      {
        volumeVetor[auxv] = preencheVolume();
        auxv++;
      }
      else
      {
        printf("\nO vetor  atingiu o limite maximo.\n");
      }
      break;
    case 2:
      if (auxe < 5)
      {
        estadoVetor[auxe] = preencheEstado();
        auxe++;
      }
      else
      {
        printf("\nO vetor  atingiu o limite maximo. \n");
      }
      break;
    case 3:
      if (auxv < 5)
      {
        tipoVetor[auxt] = preencheTipo();
        auxt++;
      }
      else
      {
        printf("\nO vetor  atingiu o limite maximo. \n");
      }
      break;
    case 4:
      precoTotal1 = 0, precoTotal2 = 0, precoTotal3 = 0, precoTotal = 0;
      printf("\n\nEnvio de Produtos\n\n");
      printf("\nDigite o peso da encomenda:\n");
      scanf("%f", &peso);
      printf("\nDigite o estado de destino:\n");
      scanf(" %s", estado);
      printf("\nDigite o tipo de envio:\n");
      scanf(" %s", tipochar);
      precoTotal1 += calculaPreco(peso, volumeVetor);
      if (precoTotal1 == 0)
      {
        break;
      }
      precoTotal2 += calculaEstado(estado, estadoVetor);
      if (precoTotal2 == 0)
      {
        break;
      }
      precoTotal3 += calculaTipo(tipochar, tipoVetor);
      if (precoTotal3 == 0)
      {
        break;
      }
      precoTotal = precoTotal1 + precoTotal2 + precoTotal3;
      printf("\n\nEnvio:\n\n");
      printf("Peso: %.2f ----- Valor: %.2f reais\n", peso, precoTotal1);
      printf("Estado: %s ----- Valor: %.2f reais\n", estado, precoTotal2);
      printf("Tipo: %s ------- Valor: %.2f reais\n", tipochar, precoTotal3);
      printf("Total: %.2f reais", precoTotal);
      break;

    default:
      printf("\nOpcao Invalida!\n");
      break;
    }
  } while (op != 0);

  return 0;
}
