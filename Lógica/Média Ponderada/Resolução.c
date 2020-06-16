#include <stdio.h>

int main(void)
{
  float N1, N2, N3, MEDIA;

  printf("Informe as três notas: ");
  scanf("%f %f %f", &N1, &N2, &N3);

  MEDIA = (N1 * 2) + (N2 * 3) + (N3 * 4) / 9;
  
  printf("%f", MEDIA);
}