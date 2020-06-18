#include <stdio.h>

// calcula total a pagar
float total(int qtd, float valor)
{
  float pagar = qtd * valor;
  return pagar;
}

int main(void)
{
  char produto[20];
  int num;
  float preco, pagamento;

  printf("Digite o produto = ");
  scanf("%s", produto);

  printf("Digite o preço do produto = R$");
  scanf("%f", &preco);
  
  printf("Digite a quantidade de produto = ");
  scanf("%d", &num);
  
  pagamento = total(num, preco);
  printf("Valor total de %d %s = R$ %.2f", num, produto, pagamento);
}
