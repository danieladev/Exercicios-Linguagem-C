/* Faca um programa que leia um numero N e:
1 Crie dinamicamente e leia um vetor de inteiro de N posicoes;
2 Leia um numero inteiro X e conte e mostre os multiplos
desse numero que existem no vetor. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, *numeros, *multiplos, qtdMult = 0;

    printf("- Informe o tamanho  do vetor: ");
    scanf("%d", &N);

    numeros = (int*) malloc(N * sizeof(int));
    multiplos = (int*) malloc(N * sizeof(int));

    for(int i = 0; i < N; i++)
    {
        printf("- Informe o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n- Informe um numero: ");
    scanf("%d", &X);

    for(int i = 0; i < N; i++)
    {
        if (numeros[i] % X == 0)
        {
            multiplos[qtdMult] = numeros[i];
            qtdMult++;
        }
    }

    printf("\n------------------\n");
    printf("-> Quantidade de numeros multiplos: %d\n", qtdMult);

    for(int i = 0; i < qtdMult; i++)
    {
        printf("- Numero(%d): %d\n", i + 1, multiplos[i]);
    }
    printf("------------------\n");

    free(numeros);
    free(multiplos);

    return 0;
}
