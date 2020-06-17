#include <stdio.h>

int main(void)
{
  int A[9] = {9, 8, 6, 7, 5, 9, 6, 4, 8};
  float media, soma = 0, cont = 0;

  for (int x = 0; x < 9; x++)
  {
    soma = soma + A[x];
  }
  media = soma / 9;
  for (int x = 0; x < 9; x++)
  {
    if (A[x] > media)
    {
      cont++;
    }
  }
  printf("Média = %f \nQtd acima da média = %f", media, cont);
}
