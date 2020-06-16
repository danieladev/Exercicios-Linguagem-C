#include <stdio.h>

int main(void)
{
  char sexo;
  float x = 0, idade, porcSexoM = 0, porcSexoF = 0, mIdadeM = 0, mIdadeF = 0, qtdF = 0, qtdM = 0;

  while (x < 3)
  {
    printf("Informe o sexo e a idade: ");
    scanf(" %c %f", &sexo, &idade);
    
    if (sexo == 'M')
    {
      qtdM = qtdM + 1;
      mIdadeM = mIdadeM + idade;
    }
    if (sexo == 'F')
    {
      qtdF = qtdF + 1;
      mIdadeF = mIdadeF + idade;
    }
    x = x + 1;
  }
  porcSexoM = qtdM / x * 100;
  porcSexoF = qtdF / x * 100;
  if (qtdM > 0)
  {
    mIdadeM = mIdadeM / qtdM;
    printf("Média de idade sexo Masculino = %.2f\n", mIdadeM);
  }
  else
  {
    printf("Não existe registro do sexo Masculino\n");
  }
  if (qtdF > 0)
  {
    mIdadeF = mIdadeF / qtdF;
    printf("Média de idade sexo Feminino = %.2f\n", mIdadeF);
  }
  else
  {
    printf("Não existe registro do sexo Feminino\n");
  }
  printf("Porcentagem do sexo Masculino = %.2f \nPorcentagem do sexo Feminino = %.2f", porcSexoM, porcSexoF);
}
