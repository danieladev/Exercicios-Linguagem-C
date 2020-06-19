#include <stdio.h>
#include <stdlib.h>

//estrutura Pessoa
struct Pessoa
{
  char Nome[20];
  int Idade;
  float Media;
  float MaiorNota;
  char Conceito;
};

//calcula media
float Media(float n1, float n2, float n3)
{
  float result;
  result = (n1 + n2 + n3) / 3;
  return result;
}

//verifica maior nota a partir de duas notas
int Maior(int valor1, int valor2)
{
  int result;
  if (valor1 >= valor2)
  {
    result = valor1;
  }
  else
  {
    result = valor2;
  }
  return result;
}

//verifica conceito a partir da media
char Conceito(float mediaPessoa)
{
  char conc;
  if (mediaPessoa <= 4.9)
  {
    conc = 'D';
  }
  else
  {
    if (mediaPessoa >= 5.0 && mediaPessoa <= 6.9)
    {
      conc = 'C';
    }
    else
    {
      if (mediaPessoa >= 7.0 && mediaPessoa <= 8.9)
      {
        conc = 'B';
      }
      else
      {
        if (mediaPessoa >= 9.0 && mediaPessoa <= 10.0)
        {
          conc = 'A';
        }
      }
    }
  }
  return conc;
}

//cadastra campos da estrutura Pessoa
struct Pessoa BuscarPessoa()
{
  struct Pessoa aPessoa;
  float n1, n2, n3;

  printf("\nDigite o seu nome: ");
  scanf("%s", aPessoa.Nome);
  printf("Digite a sua idade: ");
  scanf("%d", &aPessoa.Idade);
  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  printf("Digite a terceira nota: ");
  scanf("%f", &n3);

  aPessoa.Media = Media(n1, n2, n3);

  Maior(n1, n2);
  if (Maior(n1, n2) >= n3)
  {
    aPessoa.MaiorNota = Maior(n1, n2);
  }
  else
  {
    aPessoa.MaiorNota = n3;
  }

  aPessoa.Conceito = Conceito(aPessoa.Media);

  return aPessoa;
}

void ImprimePessoa(struct Pessoa individuo[], int x)
{
  printf("Pessoa(%d) > Nome: %s | Idade: %d | Media: %.2f | Maior Nota: %.2f | Conceito: %c", x, individuo[x].Nome, individuo[x].Idade, individuo[x].Media, individuo[x].MaiorNota, individuo[x].Conceito);
  printf("\n");
}

int main()
{
  struct Pessoa individuo[3];
  int op, i = 0;

  do
  {
    printf("\nEscolha uma opcao abaixo: ");
    printf("\n1 - Incluir pessoa");
    printf("\n2 - Imprimir cadastros de pessoas");
    printf("\n0 - Sair\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
      if (i != 3)
      {
        individuo[i] = BuscarPessoa();
        i++;
      }
      else
      {
        printf("\nVoce ja cadastrou as 3 pessoas abaixo:\n");
        for (int x = 0; x < i; x++)
        {
          ImprimePessoa(individuo, x);
        }
        printf("\nATENCAO Ao incluir novas pessoas, as anteriores serao deletadas.\n");
        i = 0;
      }
      break;
    case 2:
      if (i != 0)
      {
        for (int x = 0; x < i; x++)
        {
          ImprimePessoa(individuo, x);
        }
      }
      else
      {
        printf("\nVoce ainda nao cadastrou pessoas.\n");
      }
      break;
    case 0:
      printf("\nVoce escolheu 0 - Sair.\n");
      break;
    }
  } while (op != 0);
  return 0;
}
