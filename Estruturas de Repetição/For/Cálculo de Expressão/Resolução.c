#include <stdio.h>

int main(void)
{
  float N, resul = 0;

  printf("Informe um número: ");
  scanf("%f", &N);
  
  for (int x = 1; x <= N; x++)
  {
    resul = resul + (N / x);
  }
  printf("Resultado: %.2f", resul);
}
