#include <stdio.h>

void calcula(float valor, char moeda)
{
  float result;

  if (moeda == 'D')
  {
    result = valor / 4.25;
    printf("%.2f", result);
  }
  else
  {
    if (moeda == 'E')
    {
      result = valor / 4.89;
      printf("%.2f", result);
    }
    else
    {
      result = valor / 0.071;
      printf("%.2f", result);
    }
  }
}

int main(void)
{
  float valor;
  char moeda;

  printf("Informe o valor e a moeda: ");
  scanf("%f %c", &valor, &moeda);

  calcula(valor, moeda);
}