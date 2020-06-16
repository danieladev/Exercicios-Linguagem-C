#include <stdio.h>

int main(void)
{
  int x = 0, N, idade, Midade = 0, percId_Menos = 0, percId_Entre = 0, percId_Mais = 0;

  printf("Informe a quantidade de idades: ");
  scanf("%d", &N);

  while (x < N)
  {
    printf("\nInforme a idade: ");
    scanf("%d", &idade);

    Midade = Midade + idade;
    
    if (idade < 18)
    {
      percId_Menos = percId_Menos + 1;
    }
    else
    {
      if (idade >= 18 && idade <= 22)
      {
        percId_Entre = percId_Entre + 1;
      }
      else
      {
        percId_Mais = percId_Mais + 1;
      }
    }
    x = x + 1;
  }
  printf("Média de Idades = %d \nPercentual de Pessoas com Menos de 18 Anos = %d \nPercentual de Pessoas entre 18 e 22 Anos = %d \nPercentual de Pessoas com mais de 22 Anos = %d", Midade / N, (percId_Menos * 100) / N, (percId_Entre * 100) / N, (percId_Mais * 100) / N);
}
