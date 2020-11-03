/* Faca um programa que leia tres valores inteiros
e chame uma funcao que receba estes 3 valores de
entrada e retorne eles ordenados, ou seja, o menor
valor na primeira variavel, o segundo menor valor na
variavel do meio, e o maior valor na ultima variavel.
A funcao deve retornar o valor 1 se os tres valores
forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela. */

#include <stdio.h>
#include <stdlib.h>

int ordenar(int *v1, int *v2, int *v3)
{
    int aux;

    if (*v1 == *v2 && *v2 == *v3)
    {
        return 1;
    }
    if (*v1 <= *v3 && *v3 <= *v2)
    {
        aux = *v3;
        *v3 = *v2;
        *v2 = aux;
    }
    if (*v3 <= *v2 && *v2 <= *v1)
    {
        aux = *v3;
        *v3 = *v1;
        *v1 = aux;
    }
    if (*v2 <= *v3 && *v3 <= *v1)
    {
        aux = *v1;
        *v1 = *v2;
        *v2 = *v3;
        *v3 = aux;
    }
    if (*v2 <= *v1 && *v1 <= *v3)
    {
        aux = *v2;
        *v2 = *v1;
        *v1 = aux;
    }
    if (*v3 <= *v1 && *v1 <= *v2)
    {
        aux = *v1;
        *v1 = *v3;
        *v3 = *v2;
        *v2 = aux;
    }

    return 0;
}

int main()
{
    int valor1, valor2, valor3, result;

    printf("Informe o valor 1: ");
    scanf("%d", &valor1);
    printf("Informe o valor 2: ");
    scanf("%d", &valor2);
    printf("Informe o valor 3: ");
    scanf("%d", &valor3);

    result = ordenar(&valor1, &valor2, &valor3);

    if (result == 0)
    {
        printf("\n- Valor 1 = %d\n", valor1);
        printf("- Valor 2 = %d\n", valor2);
        printf("- Valor 3 = %d\n", valor3);
    }
    else
    {
        printf("\nOs tres valores sao iguais. ");
        printf("Valor 1, Valor 2 e Valor 3 = %d\n", valor1);
    }

    return 0;
}
