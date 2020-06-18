#include <stdio.h>

//procedimento para cadastrar
void cadastra(float C[], int N)
{
  for (int i = 0; i < N; i++)
  {
    printf("Digite o valor da posição %d: ", i);
    scanf("%f", &C[i]);
  }
}

//calcula média
float media(float M[], int N)
{
  int qtde;
  float soma = 0;

  for (int i = 0; i < N; i++)
  {
    soma = soma + M[i];
  }
  return soma / qtde;
}

int main(void)
{
  int qtd;

  printf("Informe o número de alunos: ");
  scanf("%d", &qtd);

  float pesos[qtd], altura[qtd], MP, MA;

  //cadastra pesos
  cadastra(pesos, qtd);

  //cadastra alturas
  cadastra(altura, qtd);

  //exibe médias
  printf("Média de pesos = %.2f \nMédia de alturas = %.2f", media(pesos, qtd), media(altura, qtd));
}
