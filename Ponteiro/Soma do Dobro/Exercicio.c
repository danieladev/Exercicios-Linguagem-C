/*Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida faca uma funcao que retorne a soma do dobro dos dois numeros lidos.
A funcao dever a armazenar o dobro de A na propria variavel A e o
dobro de B na propria variavel B.*/

#include <stdio.h>
#include <stdlib.h>

int somaDobro (int *A, int *B)
{
    *A += *A;
    *B += *B;

    return *A + *B;
}

int main()
{
    int valor1, valor2, result;

    printf("Informe o valor 1: ");
    scanf("%d", &valor1);

    printf("Informe o valor 2: ");
    scanf("%d", &valor2);

    result = somaDobro(&valor1, &valor2);

    printf("\n> (%d) + (%d) = %d\n", valor1, valor2, result);

    return 0;
}
