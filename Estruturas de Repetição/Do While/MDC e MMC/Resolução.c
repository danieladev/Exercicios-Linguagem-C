#include <stdio.h>

int main(void)
{
  int a, b, aux1, aux2, aux3, mdc, mmc;

  //solicita e lê o número a maior que 0
  printf("\n");
  do
  {
    printf("Digite o valor de a maior que 0: ");
    scanf("%d", &a);
  } while (a <= 0);
  printf("\n");

  //solicita e lê o número b maior que 0
  do
  {
    printf("Digite o valor de b maior que 0: ");
    scanf("%d", &b);
  } while (b <= 0);
  printf("\n");

  //atribui valores de a e b às variáveis aux1 e aux2
  aux1 = a;
  aux2 = b;

  //calcula mdc(a,b)
  do
  {
    aux3 = aux1 % aux2;
    aux1 = aux2;
    aux2 = aux3;
    mdc = aux1;
  } while (aux3 != 0);

  //exibe mdc(a,b)
  printf("MDC(%d,%d): %d\n", a, b, mdc);

  //calcula e exibe mmc(a,b)
  mmc = a * b / mdc;
  printf("MMC(%d,%d): %d\n", a, b, mmc);
}
