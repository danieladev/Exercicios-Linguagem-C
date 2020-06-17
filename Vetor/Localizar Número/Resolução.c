#include <stdio.h>

int main(void)
{
  int B[8] = {12, 6, 8, 10, 15, 20, 17, 9};
  float num, achou = 0;

  printf("Informe um número: ");
  scanf("%f", &num);

  for (int x = 0; x < 8; x++)
  {
    if (num == B[x])
    {
      printf("Número %f na posição = %d\n", num, x);
      achou = 1;
    }
    if (achou == 0)
    {
      printf("%f não encontrado", num);
    }
  }
}