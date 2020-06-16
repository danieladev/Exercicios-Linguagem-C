#include <stdio.h>

int main(void)
{
  int dia, mes, ano, qtdAnos, diasFev, diaSem;

  printf("Informe o dia, mês e ano do nascimento: ");
  scanf("%d %d %d", &dia, &mes, &ano);

  qtdAnos = ano - 1900;
  diasFev = qtdAnos / 4;
  
  switch (mes)
  {
  case 1:
    diaSem = (qtdAnos + diasFev + dia) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 2:
    diaSem = (qtdAnos + diasFev + dia + 3) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 3:
    diaSem = (qtdAnos + diasFev + dia + 3) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 4:
    diaSem = (qtdAnos + diasFev + dia + 6) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 5:
    diaSem = (qtdAnos + diasFev + dia + 1) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 6:
    diaSem = (qtdAnos + diasFev + dia + 4) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 7:
    diaSem = (qtdAnos + diasFev + dia + 6) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 8:
    diaSem = (qtdAnos + diasFev + dia + 2) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 9:
    diaSem = (qtdAnos + diasFev + dia + 5) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 10:
    diaSem = (qtdAnos + diasFev + dia) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 11:
    diaSem = (qtdAnos + diasFev + dia + 3) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
  switch (mes)
  {
  case 12:
    diaSem = (qtdAnos + diasFev + dia + 5) % 7;
    switch (diaSem)
    {
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda-feira");
      break;
    case 2:
      printf("Você nasceu na Terça-feira");
      break;
    case 3:
      printf("Você nasceu na Quarta-feira");
      break;
    case 4:
      printf("Você nasceu na Quinta-feira");
      break;
    case 5:
      printf("Você nasceu na Sexta-feira");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
    }
  }
}
