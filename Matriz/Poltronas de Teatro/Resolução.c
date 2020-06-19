#include <stdio.h>

int main()
{
  int op, i, j, P[10][5], cont = 0;
  
  do
  {
    printf("\n1 - Escolher poltrona");
    printf("\n2 - Sair");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
      printf("\nDigite o numero da fileira de 0 a 9: ");
      scanf("%d", &i);

      printf("Digite o numero da poltrona de 0 a 4: ");
      scanf("%d", &j);

      cont++;

      if (cont > 1)
      {
        if (P[i][j] == 2)
        {
          printf("\n> A poltrona P[%d][%d] ja foi vendida.\n", i, j);
        }
      }
      P[i][j] = 2;
      break;
    case 2:
      if (cont > 0)
      {
        printf("\n> As poltronas vendidas foram:");
        
        for (int x = 0; x < 10; x++)
        {
          for (int y = 0; y < 5; y++)
          {
            if (P[x][y] == 2)
            {
              printf("\nP[%d][%d]", x, y);
            }
          }
        }
      }
      else
      {
        printf("\n> Nenhuma poltrona foi vendida.");
      }
      break;
    }
  } while (op != 2);

  return 0;
}
