#include <stdio.h>
#include <stdlib.h>

int main()
{
  float total, passagem, sobra, valorDia, hospedagem, lazer;
  int dias;

  printf("Digite o valor total destinado para a viagem: ");
  scanf("%f", &total);

  printf("Digite a quantidade de dias: ");
  scanf("%d", &dias);

  printf("Digite o valor da passagem: ");
  scanf("%f", &passagem);

  sobra = total - passagem;
  valorDia = sobra / dias;
  hospedagem = (0.4 * valorDia);
  lazer = (0.6 * valorDia);

  printf("\nO valor total para a viagem e de %.2f", total);
  printf("\nO valor da passagem e de %.2f", passagem);
  printf("\nO valor para cada dia da viagem e de %.2f", valorDia);
  printf("\nO valor para hospedagem e de %.2f", hospedagem);
  printf("\nO valor para o lazer e de %.2f", lazer);
  
  return 0;
}
