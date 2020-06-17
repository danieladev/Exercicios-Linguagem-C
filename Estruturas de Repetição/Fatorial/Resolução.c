#include <stdio.h>

int main(void)
{
  int N, fat = 1;
  
  printf("Informe um número: ");
  scanf("%d", &N);

  for (int x = 1; x <= N; x++)
  {
    fat = fat * x;
  }
  printf("O fatorial de %d é %d", N, fat);
}
