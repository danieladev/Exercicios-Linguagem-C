#include <stdio.h>
#include <math.h>

//calcula e exibe raízes
void calcularRaizes(int a, int b, int c)
{
  int delta, raiz1, raiz2;
  delta = (b * b) - (4 * a * c);

  if (delta == 0)
  {
    raiz1 = -b / (2 * a);
    printf("A raiz da equação é %d\n", raiz1);
  }
  else
  {
    if (delta < 0)
    {
      printf("Não existe raiz real\n");
    }
    else
    {
      raiz1 = (-b + sqrt(delta)) / (2 * a);
      raiz2 = (-b - sqrt(delta)) / (2 * a);
      printf("Raiz 1 = %d \nRaiz 2 = %d\n", raiz1, raiz2);
    }
  }
}

//calcula e exibe coordenadas
void calcularCoordenadas(int a, int b, int c)
{
  int xv, yv;

  xv = -b / (2 * a);
  yv = -(b * b - 4 * a * c) / (4 * a);
  if (a > 0)
  {
    printf("XV = %d \nYV = %d \nPonto = Máximo", xv, yv);
  }
  if (a < 0)
  {
    printf("XV = %d \nYV = %d \nPonto = Mínimo", xv, yv);
  }
}

int main(void)
{
  int a, b, c;

  printf("Informe os valores de a, b e c: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a == 0)
  {
    printf("Não é equação do segundo grau");
  }
  else
  {
    calcularRaizes(a, b, c);
    calcularCoordenadas(a, b, c);
  }
}