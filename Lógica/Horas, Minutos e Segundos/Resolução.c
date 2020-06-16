#include <stdio.h>

int main(void)
{
  float vseg, hor, min, seg;

  printf("Informe o valor em segundos: ");
  scanf("%f", &vseg);

  hor = vseg / 3600;
  min = hor * 60;
  seg = min * 60;
  
  printf("horas = %f \nminutos = %f \nsegundos = %f", hor, min, seg);
}