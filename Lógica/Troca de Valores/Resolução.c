#include <stdio.h>

int main(void)
{
  int A, B, aux;

  printf("Informe o valor de A e B: ");
  scanf("%d %d", &A, &B);

  aux = A;
  A = B;
  B = aux;

  printf("A = %d \nB = %d", A, B);
}