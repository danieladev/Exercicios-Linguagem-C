#include <stdio.h>

int main(void)
{
  float sal, asal, dsal;

  printf("Informe o salário: ");
  scanf("%f", &sal);
  
  printf("Salario Inicial = R$ %.2f\n", sal);

  asal = sal + sal * 0.2;
  printf("Salario Reajustado = R$ %.2F\n", asal);

  dsal = asal - asal * 0.1;
  printf("Salario Liquido = R$ %.2f", dsal);
}