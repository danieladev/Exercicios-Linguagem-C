#include <stdio.h>

// função verificar maior altura
float maior(float a1, float a2, float a3)
{
  float result;
  if (a1 > a2 && a1 > a3)
  {
    result = a1;
  }
  else
  {
    if (a2 > a1 && a2 > a3)
    {
      result = a2;
    }
    else
    {
      if (a3 > a1 && a3 > a2)
      {
        result = a3;
      }
      else
      {
        if (a1 == a2 && a2 == a3)
        {
          result = a1;
        }
      }
    }
  }
  return result;
}

int main(void)
{
  float altura1, altura2, altura3, maiorAltura;

  printf("Informe as três alturas: ");
  scanf("%f %f %f", &altura1, &altura2, &altura3);
  
  maiorAltura = maior(altura1, altura2, altura3);
  printf("Maior altura = %.2f", maiorAltura);
}
