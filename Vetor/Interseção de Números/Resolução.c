#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int A[10], B[10], I[10];
  
  srand(time(NULL));

  for (int x = 0; x < 10; x++)
  {
    A[x] = rand() % 10;
    B[x] = rand() % 10;
  }

  printf("vetor A: ");
  for (int x = 0; x < 10; x++)
  {
    printf("%d ", A[x]);
  }

  printf("\nvetor B: ");
  for (int x = 0; x < 10; x++)
  {
    printf("%d ", B[x]);
  }
  printf("\n");

  int aux = 0;
  for (int x = 0; x < 10; x++)
  {
    for (int y = 0; y < 10; y++)
    {
      if (A[x] == B[y] && aux == 0)
      {
        I[aux] = A[x];
        aux++;
      }
      //verifica repetido
      int achou = 0;
      if (A[x] == B[y])
      {
        for (int z = 0; z < aux; z++)
        {
          if (A[x] == I[z])
          {
            achou = 1;
          }
        }
        if (achou == 0)
        {
          I[aux] = A[x];
          aux++;
        }
      }
    }
  }

  printf("\nvetor I: ");
  for (int x = 0; x < aux; x++)
  {
    printf("%d ", I[x]);
  }
}
