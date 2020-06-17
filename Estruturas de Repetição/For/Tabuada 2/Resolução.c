#include <stdio.h>

int main(void)
{
  float resul, num;

  printf("Informe um número: ");
  scanf("%f", &num);

  while (num != -1)
  {

    for (int x = 1; x <= 10; x++)
    {
      resul = num * x;
      printf("%.2f * %d = %.2f\n", num, x, resul);
    }
    scanf("%f", &num);
  }
}
