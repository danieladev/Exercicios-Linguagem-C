#include <stdio.h>

//cadastra números
void cadastraNum(int Num[], int qtd)
{
  for (int i = 0; i < qtd; i++)
  {
    printf("Digite o número da posição %d: ", i);
    scanf("%d", &Num[i]);
  }
}
//verifica número cadastrado
void verifica(int Num[], int qtd, int numero)
{
  int achou = 0;

  for (int i = 0; i < qtd; i++)
  {
    if (numero == Num[i])
    {
      achou = 1;
    }
  }
  if (achou == 0)
  {
    printf("O número %d NÃO está cadastrado.", numero);
  }
  else
  {
    printf("O número %d está cadastrado.", numero);
  }
}

int main(void)
{
  int n, num;
  int numeros[n];

  printf("Digite a qtde de números: ");
  scanf("%d", &n);

  //cadastrar números
  cadastraNum(numeros, n);

  //verificar se número está cadastrado
  printf("Digite um número: ");
  scanf("%d", &num);
  
  verifica(numeros, n, num);
}
