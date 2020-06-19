#include <stdio.h>

int main(void)
{
  int N, cont = 0;
  float P[N], soma = 0, pesoM;

  printf("Informe a quantidade de crianças: ");
  scanf("%d", &N);

  for (int i = 0; i < N; i++)
  {
    printf("Informe o peso da criança %d: ", i + 1);
    scanf("%f", &P[i]);
  }

  for (int i = 0; i < N; i++)
  {
    soma = soma + P[i];
  }

  pesoM = soma / N;

  printf("Peso médio de %d crianças: %.2f\n", N, pesoM);

  for (int i = 0; i < N; i++)
  {
    if (P[i] > pesoM)
    {
      cont++;
    }
  }
  
  printf("Quantidade de crianças acima do peso médio: %d", cont);

  return 0;
}