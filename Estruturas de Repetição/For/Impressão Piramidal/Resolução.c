#include <stdio.h>

int main(void)
{
  int num, j;
  printf("Digite um numero impar: ");
  scanf("%d", &num);

  printf("\n");

  for (int i = 0; i <= (num / 2) + 1; i++)
  {
    for (int j = i + 1; j <= num - i; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
    
    for (int j = 0; j < (i + 1) * 2; j++)
    {
      printf(" ");
    }
  }
  return 0;
}
