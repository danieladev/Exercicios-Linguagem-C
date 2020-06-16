#include <stdio.h>

int main(void)
{
  float celsius, Fahrenheit;

  printf("digite a temperatura em celsius");
  scanf("%f", &celsius);

  Fahrenheit = 1.8 * celsius + 32;

  printf("%f", Fahrenheit);
}