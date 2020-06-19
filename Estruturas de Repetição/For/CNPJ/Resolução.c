#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));

  int V[14];

  for (int x = 0; x < 14; x++)
  {
    V[x] = rand() % 9 + 0;
  }
  printf("O CNPJ é: ");

  for (int x = 0; x < 2; x++)
  {
    printf("%d", V[x]);
  }
  printf(".");

  for (int x = 2; x < 5; x++)
  {
    printf("%d", V[x]);
  }
  printf(".");

  for (int x = 5; x < 8; x++)
  {
    printf("%d", V[x]);
  }
  printf("/");

  for (int x = 8; x < 12; x++)
  {
    printf("%d", V[x]);
  }
  printf("-");

  for (int x = 12; x < 14; x++)
  {
    printf("%d", V[x]);
  }
  
  return 0;
}
