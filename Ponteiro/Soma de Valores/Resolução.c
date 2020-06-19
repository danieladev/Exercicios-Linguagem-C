#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void Carrega(int *vetorInteiro, int tamanho)
{
  int x;

  for (x = 0; x < tamanho; x++)
  {
    printf("Digite um numero inteiro: ");
    scanf("%d", &vetorInteiro[x]);
  }
}

int NovoVetor(int *vetor, int *vetor2, int *vetor3, int tam)
{
  int x, y, w, z = 0, achou = 0;

  for (x = 0; x < MAX; x++)
  {
    y = 0;
    for (y = 0; y < MAX; y++)
    {
      if (vetor[x] == vetor2[y])
      {
        if (z == 0)
        {
          vetor3[z] = vetor[x];
          z++;
        }
        else
        {
          for (w = 0; w < z; w++)
          {
            if (vetor[x] == vetor3[w])
            {
              achou = 1;
            }
          }
          if (achou == 0)
          {
            vetor3[z] = vetor[x];
            z++;
          }
        }
      }
    }
  }
  return z;
}

void SomaVetor(int *vetorInteiro, int tam, int *total)
{
  int x;
  for (x = 0; x < tam; x++)
  {
    *total = *total + vetorInteiro[x];
  }
}

void ImprimiVetores(int *vetor, int *vetor2, int *vetor3, int tam, int tamVetor3)
{
  int x;

  for (x = 0; x < tam; x++)
  {
    printf("\nVetor 1 [%d]: %d", x, vetor[x]);
  }

  printf("\n");

  for (x = 0; x < tam; x++)
  {
    printf("\nVetor 2 [%d]: %d", x, vetor2[x]);
  }

  printf("\n");

  for (x = 0; x < tamVetor3; x++)
  {
    printf("\nVetor 3 [%d]: %d", x, vetor3[x]);
  }
}

int main()
{
  int vet[MAX], vet2[MAX], vet3[MAX], x, tamVet3, total = 0;

  printf("VETOR 1\n");
  Carrega(vet, MAX);

  printf("\nVETOR 2\n");
  Carrega(vet2, MAX);

  tamVet3 = NovoVetor(vet, vet2, vet3, MAX);

  printf("\nVETOR 3");
  if (tamVet3 == 0)
  {
    printf("\nNao existem numeros semelhantes no Vetor 1 e 2.");
  }
  else
  {
    for (x = 0; x < tamVet3; x++)
    {
      printf("\n%d", vet3[x]);
    }
  }
  printf("\n");

  if (tamVet3 != 0)
  {
    SomaVetor(vet3, tamVet3, &total);
    ImprimiVetores(vet, vet2, vet3, MAX, tamVet3);
    printf("\n\n >>> Soma total do Vetor 3: %d\n", total);
  }
}
