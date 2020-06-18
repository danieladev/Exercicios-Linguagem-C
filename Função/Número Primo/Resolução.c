#include <stdio.h>

//verifica se o número é primo
void verificaPrimo(int n)
{
  int contDivisores = 0;

  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      contDivisores++;
      printf("divisor: %d \n", i);
    }
  }

  //verifica a quantidade de divisores
  if (contDivisores == 2)
  {
    printf("%d é primo", n);
  }
  else
  {
    printf("%d não é primo", n);
  }
}

int main(void)
{
  int num;

  printf("Digite um número \n");
  scanf("%d", &num);

  verificaPrimo(num);
}
