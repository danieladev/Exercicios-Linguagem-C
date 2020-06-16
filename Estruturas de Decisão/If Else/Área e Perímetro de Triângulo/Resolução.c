#include <stdio.h>

int main(void)
{
  float A, B, C, perim, area;

  printf("Informe três valores reais: ");
  scanf("%f %f %f", &A, &B, &C);

  if ((A + B > C) && (B + A > C) && (A + C > B) && (C + A > B) && (C + B > A) && (B + C > A))
  {
    perim = A + B + C;
    printf("Perimetro = %.1f", perim);
  }
  else
  {
    area = (A + B) * C / 2;
    printf("Area = %.1f", area);
  }
}
