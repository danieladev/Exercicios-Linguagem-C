#include <stdio.h>

int main(void)
{
  float vcompra;

  printf("Informe o valor de compra: ");
  scanf("%f", &vcompra);

  if (vcompra < 100)
  {
    vcompra = vcompra + (vcompra * 40 / 100);
    printf("%f", vcompra);
  }
  else
  {
    vcompra = vcompra + (vcompra * 30 / 100);
    printf("%f", vcompra);
  }
}
