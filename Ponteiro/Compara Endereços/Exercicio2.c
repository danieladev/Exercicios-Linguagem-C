/* 3. Escreva um programa que contenha duas variaveis inteiras.
Leia essas variaveis do teclado. Em seguida,
compare seus enderecos e exiba o conteudo do maior endereco. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int varX, varY;

    printf("Informe o valor da varX: ");
    scanf("%d", &varX);

    printf("Informe o valor da varY: ");
    scanf("%d", &varY);

    printf("\nEnderecos:\n");
    printf("varX: %d\n", &varX);
    printf("varY: %d\n", &varY);

    if (varX > varY)
    {
        printf("\nVariavel varX possui o maior endereco.\n");
        printf("Endereco: %d\n", &varX);
        printf("Conteudo: %d\n", varX);
    }
    else
    {
        printf("\nVariavel varY possui o maior endereco.\n");
        printf("Endereco: %d\n", &varY);
        printf("Conteudo: %d\n", varY);
    }
    return 0;
}
