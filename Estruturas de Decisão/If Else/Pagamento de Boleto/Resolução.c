#include <stdio.h>

int main(void)
{
  int dv, mv, da, ma, DA, DV, atraso;

  printf("Informe o dia e mês atual: ");
  scanf("%d %d", &da, &ma);

  printf("Informe o dia e o mês da data de vencimento do boleto: ");
  scanf("%d %d", &dv, &mv);

  DA = (ma - 1) * 30 + da;
  DV = (mv - 1) * 30 + dv;

  atraso = DV - DA;

  if (atraso > 0)
  {
    printf("Boleto em dia");
  }
  else
  {
    printf("Pagamento atrasado em %d dia(s)", abs(atraso));
  }

  return 0;
}