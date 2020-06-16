#include <stdio.h>

int main(void)
{
  float peso, alt, Mpeso = 0, Malt = 0;
  int x = 0;

  while (x < 1000)
  {
    printf("\nInforme o peso e a altura: ");
    scanf("%f %f", &peso, &alt);
    
    Mpeso = Mpeso + (peso / 1000);
    Malt = Malt + (alt / 1000);

    x = x + 1;
  }
  printf("Média de peso = %.2f \nMédia de altura = %.2f", Mpeso, Malt);
}
