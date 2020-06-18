#include <stdio.h>

//função transformar ºC em ºF
float transforma(float grauC)
{
  float grauF = 1.8 * grauC + 32;
  return grauF;
}

int main(void)
{
  float celsius, result;

  printf("Informe a temperatura em ºC: ");
  scanf("%f", &celsius);

  result = transforma(celsius);
  printf("%.1fºF", result);
}
