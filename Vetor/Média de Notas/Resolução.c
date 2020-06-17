#include <stdio.h>

int main(void)
{
  char nomes[30][20];
  float notas1[30], notas2[30], notas3[30], medias[30];

  for (int x = 0; x < 3; x++)
  {
    printf("Digite nome %d", x);
    scanf("%s", nomes[x]);
    printf("Digite nota 1, posição %d \n", x);
    scanf("%f", &notas1[x]);
    printf("Digite nota 2, posição %d \n", x);
    scanf("%f", &notas2[x]);
    printf("Digite nota 3, posição %d \n", x);
    scanf("%f", &notas3[x]);
  }

  for (int x = 0; x < 3; x++)
  {
    medias[x] = (notas1[x] + notas2[x] + notas3[x] / 3);
  }

  for (int x = 0; x < 3; x++)
  {
    printf("%s - %f \n", nomes[x], medias[x]);
  }
}
