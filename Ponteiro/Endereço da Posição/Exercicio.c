/* 8. Crie um programa que contenha um array de
float contendo 10 elementos. Imprima o endereco de cada
posicao desse array. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10];

    for(int x = 0; x < 10; x++)
    {
        printf("- Endereco da posicao %x: %d\n", x, &vetor[x]);
    }
    return 0;
}
