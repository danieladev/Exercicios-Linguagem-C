#include <stdio.h>

int main(void)
{
  float v1, v2, result;
  char op, op_v2, novoCalc;

  do
  {
    //solicita e lê valores e operações
    printf("\nDigite o valor 1: ");
    scanf("%f", &v1);
    printf("Digite a operação: ");
    scanf(" %c", &op);
    printf("Digite o valor 2: ");
    scanf("%f", &v2);
    printf("Se valor 2 for porcentagem digite %%, caso contrário digite =: ");
    scanf(" %c", &op_v2);

    //verifica op_v2, op, condições, calcula e exibe resultado
    if (op_v2 == '=')
    {
      switch (op)
      {
      case '+':
        result = v1 + v2;
        printf("\n%.2f %c %.2f = %.2f\n\n", v1, op, v2, result);
        break;
      case '-':
        result = v1 - v2;
        printf("\n%.2f %c %.2f = %.2f\n\n", v1, op, v2, result);
        break;
      case '*':
        result = v1 * v2;
        printf("\n%.2f %c %.2f = %.2f\n\n", v1, op, v2, result);
        break;
      case '/':
        if (v2 != 0)
        {
          result = v1 / v2;
          printf("\n%.2f %c %.2f = %.2f\n\n", v1, op, v2, result);
        }
        else
        {
          printf("\nErro: divisão por zero\n\n");
        }
        break;
      }
    }
    else
    {
      switch (op)
      {
      case '+':
        result = v1 + (v1 * v2 / 100);
        break;
      case '-':
        result = v1 - (v1 * v2 / 100);
        break;
      case '*':
        result = v1 * v2 / 100;
        break;
      case '/':
        result = v1 * 100 / v2;
        break;
      }
      printf("\n%.2f %c %.2f%% = %.2f\n\n", v1, op, v2, result);
    }

    //solicita para encerrar ou continuar a calcular
    printf("> Digite Y para novo cálculo ou N para sair: ");
    scanf(" %c", &novoCalc);
  } while (novoCalc != 'N');
}
