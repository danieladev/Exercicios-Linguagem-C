/* 5. Faca um programa que leia dois valores inteiros e
chame uma funcao que receba estes 2 valores de entrada
e retorne o maior valor na primeira variavel e o menor valor
na segunda variavel. Escreva o conteudo das 2 variaveis na tela. */

#include <stdio.h>

void ordenaVar(int *A, int *B)
{
    if(*A <= *B)
    {
        int aux;

        aux = *A;
        *A = *B;
        *B = aux;
    }

}

int main()
{
    int valorA, valorB;

    printf("Informe o valor de A: ");
    scanf("%d", &valorA);
    printf("Informe o valor de B: ");
    scanf("%d", &valorB);

    ordenaVar(&valorA, &valorB);

    printf("\nVariavel A: %d", valorA);
    printf("\nVariavel B: %d\n", valorB);

    return 0;
}
