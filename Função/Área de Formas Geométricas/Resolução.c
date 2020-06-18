#include <stdio.h>
#include <stdlib.h>

//calcula área do quadrado
void quadrado()
{
  float l;
  printf("Digite lado do quadrado \n");
  scanf("%f", &l);
  printf("Área = %f", l * l);
}

//calcula área retângulo
void retangulo()
{
  float a, b;
  printf("Digite o valor da altura e da base do retângulo \n");
  scanf("%f %f", &a, &b);
  printf("Área = %f", a * b);
}

//calcula área triângulo
void triangulo()
{
  float a, b;
  printf("Digite o valor da altura e da base do área \n");
  scanf("%f %f", &a, &b);
  printf("Área = %f", a * b / 2);
}

//menu
int menu()
{
  int op;

  printf("\nEscolha uma opção \n");
  printf("1 - quadrado \n");
  printf("2 - retângulo \n");
  printf("3 - triângulo \n");
  printf("4 - sair \n");

  scanf("%d", &op);

  return op;
}

int main(void)
{

  int opcao;

  opcao = menu();

  while (opcao != 4)
  {
    switch (opcao)
    {
    case 1:
      quadrado();
      break;

    case 2:
      retangulo();
      break;

    case 3:
      triangulo();
      break;

    default:
      printf("Opção inválida, digite outra \n");
    }

    system("@cls||clear");

    opcao = menu();
  }
}
