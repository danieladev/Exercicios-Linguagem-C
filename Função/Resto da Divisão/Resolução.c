#include <stdio.h>

//calcula resto da divisão
int restoDiv(int n1, int n2)
{
  int result;

  do
  {
    result = n1 - n2;
    n1 = result;
  } while (n1 >= n2);
  return result;
}

int main(void)
{
  int n1, n2, resto;

  printf("Digite o primeiro número positivo: ");
  scanf("%d", &n1);

  printf("Digite o segundo número positivo: ");
  scanf("%d", &n2);

  while (n2 > 0)
  {
    resto = restoDiv(n1, n2);

    printf("O resto da divisão de %d por %d é %d \n\n", n1, n2, resto);
    
    printf("Digite o primeiro número positivo: ");
    scanf("%d", &n1);

    printf("Digite o segundo número positivo: ");
    scanf("%d", &n2);
  }
}
