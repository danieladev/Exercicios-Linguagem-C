#include <stdio.h>

int main(void)
{
  int V[20], aux = 0;

  for (int i = 0; i < 20; i++)
  {
    printf("Informe um número para a posição %d: ", i + 1);
    scanf("%d", &V[i]);
  }

  for (int i = 0; i < 19; i++)
  {
    for (int j = i; j < 20; j++)
    {
      if (V[i] < V[j + 1])
      {
        aux = V[i];
        V[i] = V[j + 1];
        V[j + 1] = aux;
      }
    }
  }
  for (int i = 0; i < 20; i++)
  {
    printf("%d ", V[i]);
  }
  
  return 0;
}