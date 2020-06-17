#include <stdio.h>

int main(void)
{
  float A[30], media = 0;
  int qtdP = 0;

  for (int x = 0; x < 30; x++)
  {
    printf("Informe a altura: ");
    scanf("%f", &A[x]);
    
    media = media + A[x];
  }
  media = media / 30;
  for (int x = 0; x < 30; x++)
  {
    if (A[x] > media)
    {
      qtdP = qtdP + 1;
    }
  }
  printf("\nAltura média = %.2f \nQtd de pessoas acima da altura média = %d", media, qtdP);
}
