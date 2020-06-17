#include <stdio.h>
#include <string.h>

int main(void)
{
  int n;
  char C[n][7];

  printf("Digite o número de códigos: ");
  scanf("%d", &n);

  for (int x = 0; x < n; x++)
  {
    printf("Digite o código da posição C[%d]: ", x);
    scanf("%s", C[x]);
  }

  char cod[7];
  printf("Digite um código: ");
  scanf("%s", cod);
  int achou = 0;
  for (int x = 0; x < n; x++)
  {
    if (strcmp(cod, C[x]) == 0)
    {
      printf("Posição do cód %s = C[%d]", cod, x);
      achou = 1;
    }
  }
  if (achou == 0)
  {
    printf("Código não cadastrado");
  }
}
