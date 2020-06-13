#include <stdio.h>

int main(void)
{
  int cod;

  printf("Informe o código DDD: ");
  scanf("%d", &cod);

  if (cod == 61)
  {
    printf("Brasilia");
  }
  else
  {
    if (cod == 71)
    {
      printf("Salvador");
    }
    else
    {
      if (cod == 11)
      {
        printf("Sao Paulo");
      }
      else
      {
        if (cod == 21)
        {
          printf("Rio de Janeiro");
        }
        else
        {
          if (cod == 32)
          {
            printf("Juiz de Fora");
          }
          else
          {
            if (cod == 19)
            {
              printf("Campinas");
            }
            else
            {
              if (cod == 27)
              {
                printf("Vitoria");
              }
              else
              {
                if (cod == 31)
                {
                  printf("Belo Horizonte");
                }
                else
                {
                  printf("DDD nao cadastrado");
                }
              }
            }
          }
        }
      }
    }
  }
}
