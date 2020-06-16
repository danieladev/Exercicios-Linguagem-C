#include <stdio.h>

int main(void)
{
  int num1, den1, num2, den2, numF, denF;
  char op;

  printf("Informe o numerador 1, denominador 1, operação, numerador 2 e denominador 2: ");
  scanf("%d %d %c %d %d", &num1, &den1, &op, &num2, &den2);

  switch (op)
  {
  case '+':
    numF = (den2 * num1) + (den1 * num2);
    denF = den1 * den2;
    printf("%d/%d %c %d/%d = %d/%d", num1, den1, op, num2, den2, numF, denF);
    break;
  case '-':
    numF = (den2 * num1) - (den1 * num2);
    denF = den1 * den2;
    printf("%d/%d %c %d/%d = %d/%d", num1, den1, op, num2, den2, numF, denF);
    break;
  case '*':
    numF = num1 * num2;
    denF = den1 * den2;
    printf("%d/%d %c %d/%d = %d/%d", num1, den1, op, num2, den2, numF, denF);
    break;
  case '/':
    numF = num1 * den2;
    denF = den1 * num2;
    printf("%d/%d %c %d/%d = %d/%d", num1, den1, op, num2, den2, numF, denF);
    break;
  }
}
