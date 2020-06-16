#include <stdio.h>

int main(void)
{
  float altura, base, perimetro, area;

  printf("Informe a altura: ");
  scanf("%f", &altura);

  printf("Informe a base: ");
  scanf("%f", &base);

  perimetro = 2 * altura + base;
  printf("Perímetro = %f \n", perimetro);

  area = base * altura;
  printf("Área = %f \n", area);
}