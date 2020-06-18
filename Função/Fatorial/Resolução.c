#include <stdio.h>

//calcula fatorial
int fat(int num)
{
  int prod = num;
  if (prod == 0)
  {
    prod = 1;
    return prod;
  }
  else
  {
    for (int x = num; x > 1; x--)
    {
      prod = prod * (x - 1);
    }
  }
  return prod;
}
int main(void)
{
  int n, result;

  printf("Digite o número: ");
  scanf("%d", &n);
  
  result = fat(n);
  printf("\nO fatorial de %d é %d", n, result);
}
