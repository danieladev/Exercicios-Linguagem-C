#include <stdio.h>

// função para calcular média do aluno
void media(float n1, float n2, float n3)
{
  float result = (n1 + n2 + n3) / 3;
  printf("\nMédia = %.2f", result);
}

int main(void)
{
  char aluno[20];
  float nota1, nota2, nota3;

  printf("Informe o nome do aluno: ");
  scanf("%s", aluno);

  printf("Informe as três notas do aluno: ");
  scanf("%f %f %f", &nota1, &nota2, &nota3);
  
  printf("Aluno = %s", aluno);
  media(nota1, nota2, nota3);
}
