#include <stdio.h>

int main(void)
{
  int V[30];

  for (int i = 10; i < 20; i++)
  {
    printf("Informe um número para a posição %d: ", i + 1);
    scanf("%d", &V[i]);

    V[19 - i] = V[i];
    V[39 - i] = V[i];
  }

  for (int i = 0; i < 30; i++)
  {
    printf("%d ", V[i]);
  }
}