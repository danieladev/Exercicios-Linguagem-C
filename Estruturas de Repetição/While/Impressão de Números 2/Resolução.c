#include <stdio.h>

int main(void)
{
  int x = 10;
  
  while (x <= 1000)
  {
    printf("Número %d\n", x);
    x = x + 10;
  }
}
