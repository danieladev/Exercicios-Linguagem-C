#include <stdio.h>

int main(void)
{
  int x = 0;
  float peso, alt, pesoM = 0, altM = 0;

  printf("Informe o peso: ");
  scanf("%f", &peso);

  while (peso > 0)
  {
    pesoM = pesoM + peso;

    printf("\nInforme a altura: ");
    scanf("%f", &alt);

    altM = altM + alt;

    printf("Informe o peso: ");
    scanf("%f", &peso);

    x = x + 1;
  }
  printf("Peso Médio = %.2f \nAltura Média = %.2f", pesoM / x, altM / x);
}
