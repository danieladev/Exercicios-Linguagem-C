#include <stdio.h>

int main(void)
{
  int dia;

  printf("Informe um dia: ");
  scanf("%d", &dia);
  
  if ((dia >= 1) && (dia <= 5))
  {
    printf("Dia útil");
  }
  else
  {
    if ((dia == 6) || (dia == 7))
    {
      printf("Fim de semana");
    }
    else
    {
      printf("Número não corresponde a dia da semana");
    }
  }
}
