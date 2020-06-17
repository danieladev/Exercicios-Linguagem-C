#include <stdio.h>

int main(void)
{
  int cont = 0, num1 = 1, num2 = 1, soma = 1;

  //exibe dois primeiros números
  printf("1 1");
  
  do
  {
    //calcula e exibe sequência
    num1 = num2;
    num2 = soma;
    soma = num1 + num2;
    printf(" %d", soma);

    //contabiliza qtde de sequências
    cont++;
  } while (cont != 28);
}
