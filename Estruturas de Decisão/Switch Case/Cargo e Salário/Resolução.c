#include <stdio.h>

int main(void)
{
  int cod;
  float sal, Nsal;

  printf("Informe o código do cargo e o salário: ");
  scanf("%d %f", &cod, &sal);
  
  switch (cod)
  {
  case 21:
    Nsal = sal + (sal * 0.15);
    printf("Salário c/ reajuste = R$ %.2f", Nsal);
    break;
  case 31:
    Nsal = sal + (sal * 0.125);
    printf("Salário c/ reajuste = R$ %.2f", Nsal);
    break;
  case 41:
    Nsal = sal + (sal * 0.175);
    printf("Salário c/ reajuste = R$ %.2f", Nsal);
    break;
  case 51:
    Nsal = sal + (sal * 0.18);
    printf("Salário c/ reajuste = R$ %.2f", Nsal);
    break;
  case 61:
    Nsal = sal + (sal * 0.20);
    printf("Salário c/ reajuste = R$ %.2f", Nsal);
    break;
  default:
    printf("Código inválido");
  }
}
