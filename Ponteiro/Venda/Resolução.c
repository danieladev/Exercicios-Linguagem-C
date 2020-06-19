#include <stdio.h>

void buscar(int *cod, char *nomeProd, float *valorU)
{
  printf("Digite o codigo do produto: ");
  scanf("%d", cod);
  printf("Digite o nome do produto: ");
  scanf("%s", nomeProd);
  printf("Digite o valor unitario do produto: ");
  scanf("%f", valorU);
}

void calcular(float *valorU, float *valorT)
{
  int qtd;

  printf("Digite a quantidade desejada: ");
  scanf("%d", &qtd);

  *valorT = *valorU * qtd;
}

void imprimir(int *cod, char *nomeProd, float *valorU, float *valorT)
{
  printf("\n------VENDA------");
  printf("\nCodigo: %d", *cod);
  printf("\nValor: %.2f", *valorU);
  printf("\nNome: %s", nomeProd);
  printf("\nVALOR TOTAL: %.2f\n", *valorT);
}

int main(void)
{
  int codigo;
  char nome[20];
  float valorUni, valorTotal;

  buscar(&codigo, nome, &valorUni);

  calcular(&valorUni, &valorTotal);

  imprimir(&codigo, nome, &valorUni, &valorTotal);

  return 0;
}
