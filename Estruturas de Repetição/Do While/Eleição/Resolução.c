#include <stdio.h>

int main(void)
{
  int totalV = 0, VcandA = 0, VcandB = 0, VcandC = 0, Vbranco = 0, Vnulo = 0, vencedor, voto, cand;
  float somaV = 0, porcBranco = 0, porcNulo = 0;

  do
  {
    //exibe menu
    printf("\n");
    printf("1 - Candidato A \n");
    printf("2 - Candidato B \n");
    printf("3 - Candidato C \n");
    printf("4 - Voto Nulo \n");
    printf("5 - Voto em Branco \n");
    printf(">>> Digite o número de seu voto: ");
    scanf("%d", &voto);
    printf("\n");

    //realiza operação escolhida e contabiliza votos
    if (voto == 1)
    {
      VcandA = VcandA + 1;
    }
    else
    {
      if (voto == 2)
      {
        VcandB = VcandB + 1;
      }
      else
      {
        if (voto == 3)
        {
          VcandC = VcandC + 1;
        }
        else
        {
          if (voto == 4)
          {
            Vnulo = Vnulo + 1;
          }
          else
          {
            if (voto == 5)
            {
              Vbranco = Vbranco + 1;
            }
          }
        }
      }
    }
  } while (voto != 6);

  //soma e exibe total de votos
  somaV = VcandA + VcandB + VcandC + Vnulo + Vbranco;
  printf("Total de votos da eleição: %.0f \n", somaV);

  //exibe número de votos de cada candidato
  printf("\nNúmero de votos do candidato A: %d \n\nNúmero de votos do candidato B: %d \n\nNúmero de votos do candidato C: %d \n\n", VcandA, VcandB, VcandC);

  //verifica e exibe candidato vencedor ou empate
  if (VcandA > VcandB && VcandA > VcandC)
  {
    vencedor = 1;
  }
  else
  {
    if (VcandB > VcandA && VcandB > VcandC)
    {
      vencedor = 2;
    }
    else
    {
      if (VcandC > VcandA && VcandC > VcandB)
      {
        vencedor = 3;
      }
      else
      {
        if (VcandA == VcandB && VcandB == VcandC)
        {
          vencedor = 123;
        }
        else
        {
          if (VcandA == VcandB)
          {
            vencedor = 12;
          }
          else
          {
            if (VcandA == VcandC)
            {
              vencedor = 13;
            }
            else
            {
              if (VcandB == VcandC)
              {
                vencedor = 23;
              }
            }
          }
        }
      }
    }
  }
  if (vencedor == 1)
  {
    printf("Candidato vencedor: A");
  }
  else
  {
    if (vencedor == 2)
    {
      printf("Candidato vencedor: B");
    }
    else
    {
      if (vencedor == 3)
      {
        printf("Candidato vencedor: C");
      }
      else
      {
        if (vencedor == 123 && somaV != 0)
        {
          printf("Candidatos A, B e C empataram");
        }
        else
        {
          if (vencedor == 12 && somaV != 0)
          {
            printf("Candidatos A e B empataram");
          }
          else
          {
            if (vencedor == 13 && somaV != 0)
            {
              printf("Candidatos A e C empataram");
            }
            else
            {
              if (vencedor == 23 && somaV != 0)
              {
                printf("Candidatos B e C empataram");
              }
              else
              {
                printf("Não houve votos");
              }
            }
          }
        }
      }
    }
  }
  
  //verifica se há votos para calcular e exibir a porcentagem de votos brancos e nulos, ou exibe porcentagem 0
  if (somaV != 0)
  {
    porcBranco = (Vbranco * 100) / somaV;
    porcNulo = (Vnulo * 100) / somaV;
  }
  printf("\n\nPorcentagem de votos brancos: %.2f \n\nPorcentagem de votos nulos: %.2f\n", porcBranco, porcNulo);
}
