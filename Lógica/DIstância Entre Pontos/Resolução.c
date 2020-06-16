#include <stdio.h>
#include <math.h>

int main(void)
{
  float x1, y1, x2, y2, dist;

  printf("Informe os valores dos pontos das coordenadas (x1,y1) e (x2,y2): ");
  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

  dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  
  printf("%f", dist);
}
