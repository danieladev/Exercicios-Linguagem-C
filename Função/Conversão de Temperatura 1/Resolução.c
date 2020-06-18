#include <stdio.h>

//função transformar ºC em ºF
void transforma(float grauC)
{
  float grauF = 1.8 * grauC + 32;
  printf("%.1fºF", grauF);
}

int main(void)
{
  float celsius, result;

  printf("Informe a temperatura em ºC: ");
  scanf("%f", &celsius);
  
  transforma(celsius);
}
