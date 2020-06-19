#include <stdio.h>
#include <string.h>

int main(void)
{
  int dia, mes, ano;
  char data[11];

  printf("Digite o dia, mes e ano do seu nascimento (DD/MM/AAAA): ");
  scanf("%s", data);

  if (data[3] == '0')
  {
    switch (data[4])
    {
    case '1':
      printf("\nVoce nasceu em %c%c de Janeiro de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;
      
    case '2':
      printf("\nVoce nasceu em %c%c de Fevereiro de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;

    case '3':
      printf("\nVoce nasceu em %c%c de Marco de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;

    case '4':
      printf("\nVoce nasceu em %c%c de Abril de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;

    case '5':
      printf("\nVoce nasceu em %c%c de Maio de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;

    case '6':
      printf("\nVoce nasceu em %c%c de Junho de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;

    case '7':
      printf("\nVoce nasceu em %c%c de Julho de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;

    case '8':
      printf("\nVoce nasceu em %c%c de Agosto de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;

    case '9':
      printf("\nVoce nasceu em %c%c de Setembro de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
      break;
    }
  }
  else
  {
    if (data[4] == '1')
    {
      printf("\nVoce nasceu em %c%c de Novembro de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
    }
    else
    {
      printf("\nVoce nasceu em %c%c de Dezembro de %c%c%c%c.", data[0], data[1], data[6], data[7], data[8], data[9]);
    }

    return 0;
  }
}
