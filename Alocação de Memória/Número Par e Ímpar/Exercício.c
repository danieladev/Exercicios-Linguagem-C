/* Faca um programa que leia do usuario
o tamanho de um vetor a ser lido e Faca a
alocacao dinamica de memoria. Em seguida,
leia do usuario seus valores e mostre
quantos dos numeros sao pares e quantos sao impares. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *vetor, tam, par = 0, impar = 0;

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
        if (vetor[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("\n- Numeros pares = %d", par);
    printf("\n- Numeros impares = %d", impar);

    free(vetor);

    return 0;
}
