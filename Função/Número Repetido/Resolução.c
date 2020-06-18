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

//módulo para verificar números repetidos
void verifica(int v[], int n)
{

  //conta quantas vezes se repete o(s) número(s) que mais aparece(m)
  int contG = 0;
  for (int x = 0; x < n; x++)
  {
    int contP = 0;
    for (int y = x + 1; y < n; y++)
    {
      if (v[x] == v[y])
      {
        contP++;
      }
    }
    if (contP > contG)
    {
      contG = contP;
    }
  }

  //exibe número(s) que mais se repete(m)
  for (int x = 0; x < n; x++)
  {
    int contP = 0;
    for (int y = x + 1; y < n; y++)
    {
      if (v[x] == v[y])
      {
        contP++;
      }
    }

    if (contP == contG && contG > 0)
    {
      printf("%d - se repete %d vez(es) \n", v[x], contG);
    }
  }

  if (contG == 0)
  {
    printf("Não há números repetidos \n");
  }
}

int main(void)
{

  int n;

  printf("Digite qtde de números a serem cadastrados \n");
  scanf("%d", &n);
  
  //Vetor para armazenar os números digitados
  int numeros[n];

  cadastra(numeros, n);
  verifica(numeros, n);
}
