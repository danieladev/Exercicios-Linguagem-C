#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));
  
  int V[10], qtd_1 = 0, qtd_2 = 0, qtd_3 = 0, qtd_4 = 0, qtd_5 = 0, qtd_6 = 0;

  for (int x = 0; x < 10; x++)
  {
    V[x] = rand() % 6 + 1;
    printf("%d\n", V[x]);
  }
  for (int x = 0; x < 10; x++)
  {
    if (V[x] == 1)
    {
      qtd_1 = qtd_1 + 1;
    }
    if (V[x] == 2)
    {
      qtd_2 = qtd_2 + 1;
    }
    if (V[x] == 3)
    {
      qtd_3 = qtd_3 + 1;
    }
    if (V[x] == 4)
    {
      qtd_4 = qtd_4 + 1;
    }
    if (V[x] == 5)
    {
      qtd_5 = qtd_5 + 1;
    }
    if (V[x] == 6)
    {
      qtd_6 = qtd_6 + 1;
    }
  }
  printf("O número 1 caiu %d vezes \nO número 2 caiu %d vezes \nO número 3 caiu %d vezes \nO número 4 caiu %d vezes \nO número 5 caiu %d vezes \nO número 6 caiu %d vezes", qtd_1, qtd_2, qtd_3, qtd_4, qtd_5, qtd_6);
}
