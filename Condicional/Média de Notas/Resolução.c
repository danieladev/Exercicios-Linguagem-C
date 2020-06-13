#include <stdio.h>

int main(void)
{
  float N1, N2, N3, N4, media, notaExame, mediaExame;
  
  printf("Informe as quatro notas: ");
  scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

  media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
  printf("Media: %.1f \n", media);

  if (media >= 7.0)
  {
    printf("Aluno aprovado. \n");
  }
  else
  {
    if (media < 5.0)
    {
      printf("Aluno reprovado. \n");
    }
    else
    {
      printf("Aluno em exame. \n");
      scanf("%f", &notaExame);
      printf("Nota do exame: %.1f \n", notaExame);
      mediaExame = (notaExame + media) / 2;
      if (mediaExame >= 5.0)
      {
        printf("Aluno aprovado. \n");
      }
      else
      {
        printf("Aluno reprovado. \n");
      }
      printf("Media final: %.1f \n", mediaExame);
    }
  }
}
