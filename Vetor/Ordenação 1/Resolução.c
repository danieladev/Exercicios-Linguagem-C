#include <stdio.h>

int main(void)
{
  int V[10];
  for (int x = 0; x < 5; x++)
  {
    printf("Informe um número: ");
    scanf("%d", &V[x]);
    
    V[9 - x] = V[x];
  }
  for (int x = 0; x < 10; x++)
  {
    printf("%d\n", V[x]);
  }
}
