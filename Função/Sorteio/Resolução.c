#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Sorteio()
{
  int num;

  num = 1 + (rand() % 10);
  return num;
}

int main(void)
{
  srand(time(NULL));
  int numSort, cont[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  for (int x = 1; x <= 100; x++)
  {
    numSort = Sorteio();
    printf("\nSorteio (%d): %d", x, numSort);

    switch (numSort)
    {
    case 1:
      cont[1]++;
      break;

    case 2:
      cont[2]++;
      break;

    case 3:
      cont[3]++;
      break;

    case 4:
      cont[4]++;
      break;

    case 5:
      cont[5]++;
      break;

    case 6:
      cont[6]++;
      break;

    case 7:
      cont[7]++;
      break;

    case 8:
      cont[8]++;
      break;

    case 9:
      cont[9]++;
      break;

    case 10:
      cont[10]++;
      break;
    }
  }
  printf("\n");
  for (int x = 1; x <= 10; x++)
  {
    printf("\nNumero de vezes que o numero %d foi sorteado: %d", x, cont[x]);
  }
  printf("\n");
  
  return 0;
}
