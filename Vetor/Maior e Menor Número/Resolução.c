#include <stdio.h>

int main(void)
{
  float maior, menor;
  int N;

  printf("Informe um número: ");
  scanf("%d", &N);
  float V[N];

  for (int x = 0; x < N; x++)
  {
    scanf("%f", &V[x]);
    if (x == 0)
    {
      maior = V[0];
      menor = V[0];
    }
    if (V[x] > maior)
    {
      maior = V[x];
    }
    if (V[x] < menor)
    {
      menor = V[x];
    }
  }
  printf("\nElemento %.2f é o MAIOR \nElemento %.2f é o MENOR", maior, menor);
}
