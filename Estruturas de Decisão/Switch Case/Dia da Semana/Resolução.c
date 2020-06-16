#include <stdio.h>

int main(void)
{
  int dia;

  printf("Informe um dia: ");
  scanf("%d", &dia);
  
  switch (dia)
  {
  case 1:
    printf("Domingo");
    break;
  case 2:
    printf("Segunda");
    break;
  case 3:
    printf("Terça");
    break;
  case 4:
    printf("Quarta");
    break;
  case 5:
    printf("Quinta");
    break;
  case 6:
    printf("Sexta");
    break;
  case 7:
    printf("Sábado");
    break;
  default:
    printf("valor não corresponde a nenhum dia da semana");
  }
}
