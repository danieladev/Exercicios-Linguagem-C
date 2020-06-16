#include <stdio.h>
#include <math.h>

int main(void)
{
float raio, area, perimetro;

printf("Informe o valor do raio do círculo: ");
scanf("%f", &raio);

area = 3.14 * pow(raio,2);
printf("Area = %.2f\n", area);

perimetro = 2 * 3.14 * raio;
printf("Perimetro = %.2f", perimetro);
}