#include <stdio.h>

int main(void)
{
  float salBruto, qtdHoras_25, qtdHoras_50, valHoraNormal, valExtra_25, valExtra_50, soma;

  printf("Informe o salário bruto, a quantidade de horas trabalhadas com ganhode 25% e as com ganho de 50%, e o valor da hora normal: ");
  scanf("%f%f%f%f", &salBruto, &qtdHoras_25, &qtdHoras_50, &valHoraNormal);
  
  valExtra_25 = qtdHoras_25 * (25 / 100 * valHoraNormal + valHoraNormal);
  valExtra_50 = qtdHoras_50 * (25 / 100 * valHoraNormal + valHoraNormal);
  soma = salBruto + valExtra_25 + valExtra_50;

  printf("Salário Bruto = %.2f \nValor Horas Extras 25 = %.2f \nValor Horas Extra 50 = %.2f \nValor a ser Recebido = %.2f", salBruto, valExtra_25, valExtra_50, soma);
}