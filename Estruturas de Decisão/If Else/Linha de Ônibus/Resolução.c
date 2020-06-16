#include <stdio.h>

int main(void)
{
  int cod;

  printf("Informe o código da linha de ônibus: ");
  scanf("%d", &cod);
  
  if (cod == 1)
  {
    printf("Linha Bela Vista");
  }
  else
  {
    if (cod == 2)
    {
      printf("Linha Figueira");
    }
    else
    {
      if (cod == 3)
      {
        printf("Linha Sta Terezinha");
      }
      else
      {
        printf("Código inexistente");
      }
    }
  }
}
