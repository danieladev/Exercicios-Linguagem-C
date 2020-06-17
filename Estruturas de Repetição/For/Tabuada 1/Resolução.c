#include <stdio.h>

int main(void)
{
  float num, result;

  printf("Informe um número: ");
  scanf("%f", &num);
  
  for (int x = 1; x <= 10; x++)
  {
    result = num * x;
    printf("%.2f\n", result);
  }
}
