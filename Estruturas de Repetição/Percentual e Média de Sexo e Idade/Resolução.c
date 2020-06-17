#include <stdio.h>

int main(void)
{
  int x = 0, qtdH = 0, qtdM = 0, idade, idadeM = 0, idadeH = 0;
  char sexo;
  float percM = 0, percH = 0, Hidoso = 0, Midosa = 0, mediaM = 0, mediaH = 0;

  printf("Informe a idade: ");
  scanf("%d", &idade);

  while (idade >= 0)
  {
    x = x + 1;

    printf("Informe o sexo: ");
    scanf("%c", &sexo);

    if (sexo == 'F')
    {
      qtdM = qtdM + 1;
      mediaM = mediaM + idade;

      if (idade >= 18 && idade <= 25)
      {
        idadeM = idadeM + 1;
      }
      if (idade > Midosa)
      {
        Midosa = idade;
      }
    }
    if (sexo == 'M')
    {
      qtdH = qtdH + 1;
      mediaH = mediaH + idade;
      if (idade >= 25 && idade <= 33)
      {
        idadeH = idadeH + 1;
      }
      if (idade > Hidoso)
      {
        Hidoso = idade;
      }
    }
    printf("Informe a idade: ");
    scanf("%d", &idade);
  }
  if (qtdH > 0)
  {
    percH = (float)(idadeH) / qtdH * 100;
    mediaH = mediaH / qtdH;
  }
  else
  {
    printf("Não houve registro de Homens\n");
  }
  if (qtdM > 0)
  {
    percM = (float)(idadeM) / qtdM * 100;
    mediaM = mediaM / qtdM;
  }
  else
  {
    printf("Não houve registro de Mulheres\n");
  }
  printf("Média de Idade dos Homens: %.2f \nMédia de Idade das Mulheres: %.2f \nPercentual de Homens entre 25 e 33 anos: %f \nPercentual de Mulheres entre 18 e 25 anos: %f \nIdade do Homem mais Idoso: %f \nIdade da Mulher mais Idosa: %f", mediaH, mediaM, percH, percM, Hidoso, Midosa);
}
