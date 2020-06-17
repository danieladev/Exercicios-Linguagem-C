#include <stdio.h>

int main(void)
{
  float num1, num2, num3;

  printf("Informe três números: ");
  scanf("%f %f %f", &num1, &num2, &num3);

  if (num1 <= num2 && num2 <= num3)
  {
    printf("menor: %f \nmaior: %f", num1, num3);
  }
  else
  {
    if (num1 <= num3 && num3 <= num2)
    {
      printf("menor: %f \nmaior: %f", num1, num2);
    }
    else
    {
      if (num3 <= num1 && num1 <= num2)
      {
        printf("menor: %f \nmaior: %f", num3, num2);
      }
      else
      {
        if (num2 <= num1 && num1 <= num3)
        {
          printf("menor: %f \nmaior: %f", num2, num3);
        }
        else
        {
          if (num2 <= num3 && num3 <= num1)
          {
            printf("menor: %f \nmaior: %f", num2, num1);
          }
          else
          {
            printf("menor: %f \nmaior: %f", num3, num1);
          }
        }
      }
    }
  }
}
