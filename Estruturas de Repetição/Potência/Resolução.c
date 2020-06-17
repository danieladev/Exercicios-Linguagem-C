#include <stdio.h>

int main(void)
{
  int a, b, pot = 1;

  printf("Informe a base e o expoente: ");
  scanf("%d %d", &a, &b);

  for (int x = 0; x < b; x++)
  {
    pot = pot * a;
  }
  printf("Resultado: %d", pot);
}
