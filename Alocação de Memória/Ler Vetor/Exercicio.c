/* Faca um programa que leia do usuario o tamanho
de um vetor a ser lido e faca a alocacao dinamica de memoria.
Em seguida, leia do usuario seus valores e imprima o vetor lido. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *vetor, tam;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    vetor = (int*) malloc(tam * sizeof(int));

    for (int i = 0; i < tam; i++)
    {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        printf("\n- Numero %d = %d", i + 1, vetor[i]);
    }

    free(vetor);

    return 0;
}
