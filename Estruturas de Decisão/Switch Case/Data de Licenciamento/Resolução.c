#include <stdio.h>

int main(void)
{
  int placa;

  printf("Informe a placa do veículo: ");
  scanf("%d", &placa);
  
  switch (placa % 10)
  {
  case 1:
    printf("Pagamento de licenciamento até 31 de Março");
    break;
  case 2:
    printf("Pagamento de licenciamento até 30 de Abril");
    break;
  case 3:
    printf("Pagamento de licenciamento até 31 de Maio");
    break;
  case 4:
    printf("Pagamento de licenciamento até 30 de Junho");
    break;
  case 5:
    printf("Pagamento de licenciamento até 31 de Julho");
    break;
  case 6:
    printf("Pagamento de licenciamento até 31 de Agosto");
    break;
  case 7:
    printf("Pagamento de licenciamento até 30 de Setembro");
    break;
  case 8:
    printf("Pagamento de licenciamento até 31 de Outubro");
    break;
  case 9:
    printf("Pagamento de licenciamento até 30 de Novembro");
    break;
  case 0:
    printf("Pagamento de licenciamento até 15 de Dezembro");
    break;
  }
}
