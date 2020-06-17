#include <stdio.h>

int main(void)
{
  int kWh;
  char tipo;
  float valor;

  printf("Informe a quantidade de kWh consumida e o tipo da instalação: ");
  scanf("%d %c", &kWh, &tipo);
  
  if (tipo != 'R' || tipo != 'I' || tipo != 'C')
  {
    printf("Tipo de instalação inexistente");
  }
  else
  {
    if (kWh <= 500 && tipo == 'R')
    {
      valor = kWh * 0.40;
      printf("Preço a pagar = R$ %f", valor);
    }
    else
    {
      if (kWh > 500 && tipo == 'R')
      {
        valor = kWh * 0.60;
        printf("Preço a pagar = R$ %f", valor);
      }
      else
      {
        if (kWh <= 1000 && tipo == 'C')
        {
          valor = kWh * 0.55;
          printf("Preço a pagar = R$ %f", valor);
        }
        else
        {
          if (kWh > 1000 && tipo == 'C')
          {
            valor = kWh * 0.60;
            printf("Preço a pagar = R$ %f", valor);
          }
          else
          {
            if (kWh <= 5000 && tipo == 'I')
            {
              valor = kWh * 0.60;
              printf("Preço a pagar = R$ %f", valor);
            }
            else
            {
              if (kWh > 5000 && tipo == 'I')
              {
                valor = kWh * 0.65;
                printf("Preço a pagar = R$ %f", valor);
              }
            }
          }
        }
      }
    }
  }
}