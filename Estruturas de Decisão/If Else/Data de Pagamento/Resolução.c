#include <stdio.h>
#include <math.h>

int main(void)
{
  int mat, digFinal;

  printf("Informe o número da matrícula: ");
  scanf("%d", &mat);

  digFinal = mat % 10;
  
  if (digFinal <= 2)
  {
    printf("Fevereiro");
  }
  else
  {
    if (digFinal <= 5)
    {
      printf("Abril");
    }
    else
    {
      if (digFinal <= 7)
      {
        printf("Junho");
      }
      else
      {
        printf("Agosto");
      }
    }
  }
}
