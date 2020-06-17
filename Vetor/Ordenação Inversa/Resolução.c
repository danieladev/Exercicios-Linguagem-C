#include <stdio.h>

int main(void)
{
  float N[20];

  for (int x = 0; x < 20; x++)
  {
    printf("Informe um número: ");
    scanf("%f", &N[x]);
  }
  for (int x = 0; x < 20; x++)
  { 
 printf("%f \n", N[2 - x]);
  }
}
