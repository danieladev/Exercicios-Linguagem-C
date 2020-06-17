#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N[5], achou;

  for (int x = 0; x < 5; x++)
  {
    printf("Informe um número: ");
    scanf("%d", &N[x]);

    achou = 0;
    
    if (x > 0)
    {
      for (int y = 0; y < x; y++)
      {
        if (N[x] == N[y])
        {
          printf("Número repetido, digite outro:");
          x--;
        }
      }
    }
  }
  for (int x = 0; x < 5; x++)
  {
    printf("%d", N[5]);
  }
}
