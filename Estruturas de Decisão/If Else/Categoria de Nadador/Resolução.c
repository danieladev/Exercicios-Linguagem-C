#include <stdio.h>

int main(void)
{
  int idade;

  printf("Informe a idade do nadador: ");
  scanf("%d", &idade);
  
  if (idade <= 10)
  {
    printf("Categoria Infantil");
  }
  else
  {
    if ((idade >= 11) && (idade <= 17))
    {
      printf("Categoria Juvenil");
    }
    else
    {
      if ((idade >= 18) && (idade <= 64))
      {
        printf("Categoria Adulto");
      }
      else
      {
        printf("Categoria Sênior");
      }
    }
  }
