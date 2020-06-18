#include <stdio.h>

//calcula soma
int somaInter(int A, int B)
{
  int result, soma = 0;
  if (A < B)
  {
    for (int x = A; x <= B; x++)
    {
      soma = soma + x;
    }
  }
  if (A > B)
  {
    for (int x = A; x >= B; x--)
    {
      soma = soma + x;
    }
  }
  return soma;
}

int main(void)
{
  int X, Y, result;

  //solicita  e lê números
  printf("Digite o valor do primeiro número: ");
  scanf("%d", &X);

  printf("Digite o valor do segundo número: ");
  scanf("%d", &Y);

  //atribui função
  result = somaInter(X, Y);

  //exibe resultado da soma
  printf("\nA soma do intervalo de %d e %d é %d", X, Y, result);
}
