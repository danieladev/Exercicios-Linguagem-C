#include <stdio.h>

int main(void)
{
  int x = 0, impar = 1;
  float num, result;

  printf("Informe um número: ");
  scanf("%f", &num);
  
  result = num - impar;

  while (result >= (impar + 2))
  {
    impar = impar + 2;
    result = result - impar;
    x = x + 1;
  }
  printf("Raiz de %.2f = %d", num, x + 1);
}
