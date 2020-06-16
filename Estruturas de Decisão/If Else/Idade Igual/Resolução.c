#include <stdio.h>

int main(void)
{
  int ano1, ano2;

  printf("Informe os anos de nascimento das duas pessoas: ");
  scanf("%d %d", &ano1, &ano2);
  
  if (ano1 < ano2)
  {
    printf("A pessoa que nasceu em %d é a pessoa mais velha", ano1);
  }
  else
  {
    if (ano1 == ano2)
    {
      printf("As pessoas têm a mesma idade");
    }
  }
}
