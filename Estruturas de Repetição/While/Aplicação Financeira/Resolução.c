#include <stdio.h>
#include <stdlib.h>

int main()
{
  float valorIni, juros, valorFim;
  int meses = 0;

  printf("Digite o valor da aplicação inicial: ");
  scanf("%f", &valorIni);

  printf("Digite o percentual de juros: ");
  scanf("%f", &juros);
  
  printf("Digite o valor desejado: ");
  scanf("%f", &valorFim);

  juros = juros / 100;

  while (valorIni < valorFim)
  {
    valorIni = (valorIni * juros) + valorIni;
    meses = meses + 1;
  }
  printf("\nSerá(ão) necesário(s) %d mês(es) para atingir R$ %.2f", meses, valorFim);

  return 0;
}
