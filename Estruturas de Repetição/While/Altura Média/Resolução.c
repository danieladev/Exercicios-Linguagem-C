#include <stdio.h>

int main(void)
{
  int x = 0, sexoF = 0, sexoM = 0;
  char sexo;
  float altura, mediaF = 0, mediaM = 0;

  while (sexo != 'X')
  {
    printf("Informe o sexo e a altura: ");
    scanf("%c %f", &sexo, &altura);
    
    switch (sexo)
    {
    case 'F':
      sexoF = sexoF + 1;
      mediaF = mediaF + altura;
      break;
    case 'M':
      sexoM = sexoM + 1;
      mediaM = mediaM + altura;
      break;
    }
    x = x + 1;
  }
  printf("Média de Altura Sexo Feminino = %.2f \nMédia de Altura Sexo Masculino = %.2f", mediaF / sexoF, mediaM / sexoM);
}
