#include <stdio.h>

int main(void)
{
  float preco, total, litros;

  printf("Informe o preço e o total pago: ");
  scanf("%f %f", &preco, &total);
  
  litros = total / preco;

  printf("Qtd de Litros = %.2f", litros);
}