#include <stdio.h>

//calcula soma
void soma(float a, float b)
{
  printf("%f + %f = %f", a, b, a + b);
}

//calcula subtração
void sub(float a, float b)
{
  printf("%f - %f = %f", a, b, a - b);
}

//calcula divisão
void div(float a, float b)
{
  if (b == 0)
  {
    printf("Divisão por zero \n");
  }
  else
  {
    printf("%f / %f = %f", a, b, a / b);
  }
}

//calcula multiplicação
void mult(float a, float b)
{
  printf("%f * %f = %f", a, b, a * b);
}

int main(void)
{
  float n1, n2;
  char op;

  printf("Informe o número 1, a operação e o número 2: ");
  scanf("%f %c %f", &n1, &op, &n2);

  switch (op)
  {
  case '+':
    soma(n1, n2);
    break;

  case '-':
    sub(n1, n2);
    break;

  case '/':
    div(n1, n2);
    break;

  case '*':
    mult(n1, n2);
    break;

  default:
    printf("Operação não encontrada");
  }
}
