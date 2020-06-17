#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int v[20];

  for (int x = 0; x < 20; x++)
  {
    v[x] = rand() % 10;
  }

  printf("Vetor original \n");
  for (int x = 0; x < 20; x++)
  {
    printf("% d", v[x]);
  }

  for (int y = 0; y < 20; y++)
  {
    for (int x = 0; x < 19; x++)
    {
      if (v[x] > v[x + 1])
      {
        int aux = v[x];
        v[x] = v[x + 1];
        v[x + 1] = aux;
      }
    }
  }
  printf("\n Vetor ordenado \n");
  for (int x = 0; x < 20; x++)
  {
    printf("% d", v[x]);
  }
