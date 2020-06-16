#include <stdio.h>
#include <math.h>

int main(void)
{
  int b, d0, d1, d2, d3, d4, dec, aux;

  printf("Informe o número binário: ");
  scanf("%d", &b);

  aux = b;
  d0 = b % 10;
  b = b / 10;
  d1 = b % 10;
  b = b / 10;
  d2 = b % 10;
  b = b / 10;
  d3 = b % 10;
  b = b / 10;
  d4 = b % 10;
  
  dec = d0 * pow(2, 0) + d1 * pow(2, 1) + d2 * pow(2, 2) + d3 * pow(2, 3) + d4 * pow(2, 4);

  printf("%d(2) = %d(10)", b, dec);
}