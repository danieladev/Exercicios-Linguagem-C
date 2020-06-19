#include <stdio.h>
#include <math.h>

int main(void)
{
  float a, b, c;

  printf("Informe os valores da hipotenusa, e de cada cateto: ");
  scanf("%f %f %f", &a, &b, &c);

  if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2))
  {
    printf("É triângulo retângulo");
  }
  else
  {
    printf("Não é triângulo retângulo");
  }
  return 0;
}