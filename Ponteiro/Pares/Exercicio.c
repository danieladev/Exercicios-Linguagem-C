/* 11. Crie um programa que contenha um array c
ontendo 5 elementos inteiros. Leia esse array do
teclado e imprima o endereco das posicoes contendo valores pares. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Informe o valor da posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("\n- Endereco do Vetor[%d]: %d", i, &vetor[i]);
        }
    }
    printf("\n");
    return 0;
}
