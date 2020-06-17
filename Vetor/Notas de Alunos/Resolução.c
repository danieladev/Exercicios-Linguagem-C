#include <stdio.h>

int main(void)
{
  int N;

  printf("Informe o número de alunos da turma: ");
  scanf("%d", &N);

  float notas[N];

  for (int x = 0; x < N; x++)
  {
    printf("Digite a nota do aluno %d:", x);
    scanf("%f", &notas[x]);
  }

  for (int x = 0; x < N; x++)
  {
    printf("% .2f", notas[x]);
  }

  printf("\n");
  for (int x = 0; x < N; x++)
  {
    printf("% .2f", notas[N - 1 - x]);
  }

  float soma = 0, media;
  for (int x = 0; x < N; x++)
  {
    soma = soma + notas[x];
  }
  media = soma / N;
  printf("Média: %.2f \n", media);

  int cont = 0;
  for (int x = 0; x < N; x++)
  {
    if (notas[x] > media)
    {
      printf("%.2f \n", notas[x]);
      cont = cont + 1;
    }
  }
  printf("Total de notas acima da média: %d \n", cont);

  float maior = notas[0], menor = notas[0];
  for (int x = 0; x < N; x++)
  {
    if (notas[x] > maior)
    {
      maior = notas[x];
    }

    if (notas[x] < menor)
    {
      menor = notas[x];
    }
  }
  printf("Maior nota: %.2f - Menor nota: %.2f", maior, menor);
}
