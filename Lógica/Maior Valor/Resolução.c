#include <stdio.h>

int main(void)
{
  float A, B, MaiorAB;

  printf("Informe o valor de A: ");
  scanf("%f", &A);

  printf("Informe o valor de B: ");
  scanf("%f", &B);
  
  MaiorAB = (A + B + abs(A - B)) / 2;
  printf("%f", MaiorAB);
}