/* Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros,
(b) Peca para o usuario digitar os 5 numeros no espaco alocado,
(c) Mostre na tela os 5 numeros,
(d) Libere a memoria alocada. */

#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int *vetor;

    vetor = (int*) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n- Numero %d = %d", i + 1, vetor[i]);
    }

    free(vetor);

    return 0;
}
