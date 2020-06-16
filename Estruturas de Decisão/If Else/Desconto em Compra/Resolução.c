#include <stdio.h>

int main(void)
{
  float valorcompra, valorpagar;

  printf("Informe o valor da compra: ");
  scanf("%f", &valorcompra);
  
  valorpagar = valorcompra;
  if (valorcompra > 200)
  {
    valorpagar = valorcompra - (valorcompra * 15 / 100);
  }
  printf("%f", valorpagar);
}
