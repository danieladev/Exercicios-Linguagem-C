#include <stdio.h>

// calcula mdc
int mdc(int a, int b)
{
  int result, aux;
  if (a % b == 0)
  {
    result = b;
  }
  else
  {
    do
    {
      aux = a % b;
      a = b;
      b = aux;
    } while (aux != 0);
    result = a;
  }
  return result;
}

int main(void)
{
  int num1, num2, resposta;

  printf("Informe dois números: ");
  scanf("%d %d", &num1, &num2);
  
  resposta = mdc(num1, num2);
  printf("O MDC(%d,%d) é %d", num1, num2, resposta);
}
