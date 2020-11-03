/* 2. Escreva um programa que contenha duas variaveis inteiras.
Compare seus enderecos e exiba o maior endereco. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int varX, varY;

    printf("Enderecos:\n");
    printf("varX = %d\n", &varX);
    printf("varY = %d\n", &varY);

    if (&varX > &varY)
    {
        printf("> A variavel varX possui o maior endereco.\n");
    }
    else
    {
        printf("> A variavel varY possui o maior endereco.\n");

    }
    return 0;
}
