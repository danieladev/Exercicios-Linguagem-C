#include <stdio.h>
#include <string.h>

float Media(float n1, float n2, float n3)
{
  float result;
  result = (n1 + n2 + n3) / 3;
  return result;
}

char Conceito(float mediaNotas)
{
  char conc;
  if (mediaNotas <= 4.9)
  {
    conc = 'D';
  }
  else
  {
    if (mediaNotas >= 5.0 && mediaNotas <= 6.9)
    {
      conc = 'C';
    }
    else
    {
      if (mediaNotas >= 7.0 && mediaNotas <= 8.9)
      {
        conc = 'B';
      }
      else
      {
        if (mediaNotas >= 9.0 && mediaNotas <= 10.0)
        {
          conc = 'A';
        }
      }
    }
  }
  return conc;
}

int main(void)
{
  float nota1, nota2, nota3, media;
  char nome[20], conct;
  int op;

  do
  {
    printf("\n");
    printf("Escolha uma opcao abaixo: ");
    printf("\n0 - Informar Nome");
    printf("\n1 - Informar Nota 1");
    printf("\n2 - Informar Nota 2");
    printf("\n3 - Informar Nota 3");
    printf("\n4 - Sair\n");
    scanf("%d", &op);
    
    switch (op)
    {
    case 0:
      printf("\nDigite seu nome: ");
      scanf("%s", nome);
      break;

    case 1:
      printf("\nDigite a Nota 1: ");
      scanf("%f", &nota1);
      break;

    case 2:
      printf("\nDigite a Nota 2: ");
      scanf("%f", &nota2);
      break;

    case 3:
      printf("\nDigite a Nota 3: ");
      scanf("%f", &nota3);

      media = Media(nota1, nota2, nota3);
      conct = Conceito(media);
      printf("\n\n> A media do aluno(a) %s e %.1f e seu conceito e %c.\n", nome, media, conct);
      break;

    case 4:
      printf("\n\nVoce escolheu 4 - Sair.\n");
    }
  } while (op != 4);

  return 0;
}
