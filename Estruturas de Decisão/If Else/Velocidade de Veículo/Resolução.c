#include <stdio.h>

int main(void)
{
  float velocidade, valor;

  printf("Informe a velocidade do veículo: ");
  scanf("%f", &velocidade);
  
  if (velocidade > 60)
  {
    valor = (velocidade - 60) * 10;
    printf("Multado %f", valor);
  }
}
