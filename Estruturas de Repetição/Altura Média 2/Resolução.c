#include <stdio.h>

int main(void)
{
  char sexo;
  int qtdF = 0, qtdM = 0;
  float altura, mediaAltF = 0, mediaAltM = 0;

  for (int x = 0; x < 3; x++)
  {
    printf("\nInforme o sexo e a altura: ");
    scanf(" %c %f", &sexo, &altura);
    
    if (sexo == 'F')
    {
      qtdF = qtdF + 1;
      mediaAltF = mediaAltF + altura;
    }
    else
    {
      qtdM = qtdM + 1;
      mediaAltM = mediaAltM + altura;
    }
  }
  if (qtdF > 0)
  {
    mediaAltF = mediaAltF / qtdF;
    printf("Altura Média Sexo Feminino: %.2f \n", mediaAltF);
  }
  else
  {
    printf("Não houve registro de pessoas do sexo feminino");
  }
  if (qtdM > 0)
  {
    mediaAltM = mediaAltM / qtdM;
    printf("Altura Média Sexo Masculino: %.2f \n", mediaAltM);
  }
  else
  {
    printf("Não houve registro de pessoas do sexo masculino");
  }
}
