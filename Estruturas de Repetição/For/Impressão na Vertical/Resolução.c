#include <stdio.h>
#include <string.h>

int main(void)
{
  char nome[10];

  printf("Digite seu nome: ");
  scanf("%s", nome);

  for (int x = 0; x < 10; x++)
  {
    printf("\n");
    printf("%c", nome[x]);
  }
  
  return 0;
}
