#include <stdio.h>

int main(void)
{
  int ano;

  printf("Informe o ano de nascimento: ");
  scanf("%d", &ano);

  if ((ano >= 1990) && (ano <= 1999))
  {
    printf("Você nasceu na década de 90");
  }
}
