#include <stdio.h>
#include <stdlib.h>

int main()
{
  float C[5], cod, achou = 0;

  for (int x = 0; x < 5; x++)
  {
    printf("Informe um código: ");
    scanf("%f", &C[x]);
  }

  printf("Informe o código: ");
  scanf("%f", &cod);

  for (int x = 0; x < 5; x++)
  {
    if (cod == C[x])
    {
      achou = 1;
      printf("Código %.2f está cadastrado na posição %f.", cod, C[x]);
    }
  }
  if (achou == 0)
  {
    printf("Código %.2f não está cadastrado.", cod);
  }
}
