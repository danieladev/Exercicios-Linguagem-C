/* 4. Faca um programa que leia 2 valores inteiros e chame
uma funcao que receba estas 2 variaveis e troque o seu conteudo,
ou seja, esta funaco a chamada passando duas variaveis A e B por exemplo e,
apos a execucao da funcao, A contera o valor de B e B tera o valor de A. */

#include <stdio.h>
#include <stdlib.h>


void trocaAB(int A, int B)
{
    int *pontA = NULL, *pontB = NULL;
    pontA = &B;
    pontB = &A;

    printf("\n");
    printf("Valor de A: %d\n", *pontA);
    printf("Valor de B: %d\n", *pontB);
}

int main()
{
    int valorA, valorB;

    printf("Informe o valor de A: ");
    scanf("%d", &valorA);

    printf("Informe o valor de B: ");
    scanf("%d", &valorB);

    trocaAB(valorA, valorB);

    return 0;
}
