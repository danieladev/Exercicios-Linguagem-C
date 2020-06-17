#include <stdio.h>
#include <math.h>

int main(void)
{
  int p;
  float A[p];
  
  printf("Informe a quantidade de pessoas: ");
  scanf("%d", &p);

  for (int x = 0; x < p; x++)
  {
    printf("Digite a altura da pessoa %d: ", x);
    scanf("%f", &A[x]);
  }

  float media = 0;
  for (int x = 0; x < p; x++)
  {
    media = media + A[x];
  }
  media = media / p;

  float desvio = 0;
  for (int x = 0; x < p; x++)
  {
    desvio = desvio + pow(A[x] - media, 2);
  }
  desvio = sqrt(desvio / (p - 1));
  printf("Desvio padrão %.2f", desvio);
}
