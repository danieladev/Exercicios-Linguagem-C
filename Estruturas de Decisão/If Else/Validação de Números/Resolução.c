#include <stdio.h>

int main(void)
{
  float num1, num2;

  printf("Informe dois números: ");
  scanf("%f %f", &num1, &num2);

  if (num1 > num2)
  {
    printf("%f é o maior", num1);
  }
  else
  {
    if (num1 < num2)
    {
      printf("%f é o menor", num1);
    }
    else
    {
      printf("Iguais");
    }
  }
}
