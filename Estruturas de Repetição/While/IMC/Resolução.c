#include <stdio.h>

int main(void)
{
  int x = 1;
  float alt, peso, imc;

  while (x <= 100)
  {
    printf("\nInforme a altura e o peso: ");
    scanf("%f %f", &alt, &peso);

    imc = peso / (alt * alt);
    printf("IMC = %.2f\n", imc);
  }
  x = x + 1;
}
