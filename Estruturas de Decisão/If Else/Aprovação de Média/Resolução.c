#include <stdio.h>

int main(void)
{
  float n1, n2, n3, media;

  printf("Informe as três notas: ");
  scanf("%f%f%f", &n1, &n2, &n3);

  media = (n1 + n2 + n3) / 3;
  
  if (media >= 6)
  {
    printf("Aprovado");
  }
  else
  {
    printf("Reprovado");
  }
}
