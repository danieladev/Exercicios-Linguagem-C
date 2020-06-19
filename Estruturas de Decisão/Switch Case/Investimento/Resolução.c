#include <stdio.h>
#include <stdlib.h>

int main()
{
  float totalDiv, percAbat, valorInv_Inic, juros, valorAbat, valorInv_total;
  int mesesLiq = 0, mesesInv, valorInv_Men, opcao;

  do
  {
    printf("\nDigite uma opção abaixo:");
    printf("\n");
    printf("0 - Sair \n1 - Liquidar Dívida \n2 - Investir\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Digite o valor total da dívida: ");
      scanf("%f", &totalDiv);
      printf("Digite o percentual total da dívida a ser abatido: ");
      scanf("%f", &percAbat);

      percAbat = (percAbat / 100);
      valorAbat = percAbat * totalDiv;

      while (totalDiv > 0)
      {
        totalDiv = totalDiv - valorAbat;
        mesesLiq = mesesLiq + 1;
      }
      printf("\nA dívida será liquidada em %d meses\n", mesesLiq);
      break;

    case 2:
      printf("Digite o prazo de investimento em meses: ");
      scanf("%d", &mesesInv);

      printf("Digite o valor inicial do investimento: ");
      scanf("%f", &valorInv_Inic);

      printf("Digite o valor mensal a ser aportado: ");
      scanf("%d", &valorInv_Men);
      
      printf("Digite o percentual de juros mensais: ");
      scanf("%f", &juros);

      juros = juros / 100;

      valorInv_total = valorInv_Inic + valorInv_Men;
      valorInv_total = valorInv_total * juros + valorInv_total;

      while (mesesInv != 1)
      {
        valorInv_total = valorInv_total + valorInv_Men;
        valorInv_total = valorInv_total * juros + valorInv_total;
        mesesInv = mesesInv - 1;
      }
      printf("\nO valor total da aplicação será de R$ %.2f\n", valorInv_total);
      break;
    }
  } while (opcao != 0);
}
