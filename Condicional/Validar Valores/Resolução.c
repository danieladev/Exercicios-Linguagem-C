#include <stdio.h>

int main(void)
{
  int A, B, C, D;

  printf("Digite os valores de A, B, C e D: ");
  scanf("%d %d %d %d", &A, &B, &C, &D);

  if (B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0)
  {
    printf("Valores aceitos");
  }
  else
  {
    printf("Valores não aceitos");
  }
}
