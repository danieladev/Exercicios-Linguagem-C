#include <stdio.h>

//módulo para cadastrar
void cadastra(int v[], int n)
{
  for (int x = 0; x < n; x++)
  {
    printf("Digite valor \n");
    scanf("%d", &v[x]);
  }
}

//módulo para ordenar vetor
void ordena(int v[], int n)
{
  int trocou = 1;

  while (trocou != 0)
  {
    trocou = 0;
    for (int x = 0; x < n - 1; x++)
    {
      if (v[x] > v[x + 1])
      {
        int aux = v[x];
        v[x] = v[x + 1];
        v[x + 1] = aux;
        trocou = 1;
      }
    }
  }
}

int main(void)
{

  int n;

  printf("Digite qtde de números a serem cadastrados: ");
  scanf("%d", &n);

  //Vetor para armazenar os números digitados
  int numeros[n];

  // cadastra números e imprime
  cadastra(numeros, n);

  printf("\n vetor original \n");

  for (int x = 0; x < n; x++)
  {
    printf("%d ", numeros[x]);
  }

  //ordena vetor e imprime
  ordena(numeros, n);

  printf("\n vetor ordenado \n");

  for (int x = 0; x < n; x++)
  {
    printf("%d ", numeros[x]);
  }
}
