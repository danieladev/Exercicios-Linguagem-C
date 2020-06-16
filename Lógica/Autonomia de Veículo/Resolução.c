#include <stdio.h>

int main(void)
{
  float km1, km2, litros, capTanque, consumo, kmTanqueCheio;

  printf("Informe a quilometragem inicial, final, a capacidade do tanque e o consumo de combustível: ");
  scanf("%f %f %f %f", &km1, &km2, &litros, &consumo);

  consumo = (km2 - km1) / litros;
  kmTanqueCheio = consumo * capTanque;
  
  printf("kmTanque = %f", kmTanqueCheio);
}