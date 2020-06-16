#include <stdio.h>

int main(void)
{
  float t, Qt;

  printf("Informe o tempo: ");
  scanf("%f", &t);

  Qt = 2048 * pow(2, -0.5 * t);
  printf("q = %f", Qt);
}