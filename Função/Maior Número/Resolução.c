#include <stdio.h>

//cadastrar números
void cadastraNum(int Num[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    printf("Digite o número da posição %d: ", i);
    scanf("%d", &Num[i]);
  }
}

//verificar maior número
int maiorN(int Num[], int tam)
{
  int maior = Num[0];
  for (int i = 0; i < tam; i++)
  {
    if (Num[i] > maior)
    {
      maior = Num[i];
    }
  }
  return maior;
}

int main(void)
{
  int qtd;
  int N[qtd], maiorNum;

  printf("Digite a quantidade de números: ");
  scanf("%d", &qtd);

  //cadastra números
  cadastraNum(N, qtd);

  //verifica maior num e exibe
  maiorNum = maiorN(N, qtd);
  printf("O maior número do vetor é %d", maiorNum);
}
