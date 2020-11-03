/* Crie uma funcao que receba como parametro
um array e o imprima. Nao utilize indices para percorrer o
array, apenas aritmetica de ponteiros. */

#include <stdio.h>
#include <stdlib.h>

void imprimir(int *vetor[3])
{
    for(int i = 0; i < 3; i++)
    {
        printf("- Vetor[%d]: %d\n", i, *vetor[i]);
    }
}

int main()
{
    int *vetor[3], vet[3] = {3, 5, 7};

    for(int i = 0; i < 3; i++)
    {
        vetor[i] = &vet[i];
    }

    imprimir(vetor);

    return 0;
}
