#include <stdio.h>

int main(void)
{
  char nome[3][15];
  float sal[3], percImp[3], percAum[2] = {10, 5}, salAum[3], desc[3], salLiq[3];

  for (int x = 0; x < 3; x++)
  {
    printf("Digite o seu nome: ");
    scanf("%s", nome[x]);

    printf("Digite o seu salario: ");
    scanf("%f", &sal[x]);

    printf("Digite o percentual do imposto de renda: ");
    scanf("%f", &percImp[x]);
    
    printf("\n");
  }

  for (int x = 0; x < 3; x++)
  {
    if (sal[x] <= 1999)
    {
      salAum[x] = sal[x] + (percAum[0] / 100 * sal[x]);
    }
    else
    {
      if (sal[x] > 1999)
      {
        salAum[x] = sal[x] + (percAum[1] / 100 * sal[x]);
      }
    }
    desc[x] = percImp[x] / 100 * salAum[x];
    salLiq[x] = salAum[x] - desc[x];

    printf("\nNome: %s", nome[x]);
    printf("\nSalario Anterior: R$ %.2f", sal[x]);
    printf("\n%% de Aumento: %.2f", percAum[x]);
    printf("\nSalario Atual: R$ %.2f", salAum[x]);
    printf("\nValor Desconto: R$ %.2f", desc[x]);
    printf("\nSalario Liquido: R$ %.2f\n", salLiq[x]);
  }
  return 0;
}
