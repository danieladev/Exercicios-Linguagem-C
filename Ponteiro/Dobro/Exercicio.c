/* 10. Crie um programa que contenha um array
de inteiros contendo 5 elementos. Utilizando apenas aritmetica
de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5], *vetor[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Informe o valor da posicao [%d]: ", i);
        scanf("%d", &vet[i]);
        vetor[i] = &vet[i];
        *vetor[i] += *vetor[i];
    }

    for(int i = 0; i < 5; i++)
    {
        printf("\n- Posicao [%d] = %d", i, *vetor[i]);
    }
    printf("\n");
    return 0;
}
