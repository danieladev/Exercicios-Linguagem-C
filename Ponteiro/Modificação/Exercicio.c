/* 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros.
Imprima os valores das variaveis antes e apos a modificacao. */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int varInt = 3, *IntPont = NULL;
    float varFloat = 2.20, *FloatPont = NULL;
    char varChar = 'A', *CharPont = NULL;

    IntPont = &varInt;
    FloatPont = &varFloat;
    CharPont = &varChar;

    printf("Valores anteriores a modificacao:\n");
    printf("varInt = %d\n", varInt);
    printf("varFloat = %.2f\n", varFloat);
    printf("varChar = %c\n", varChar);

    *IntPont = 10;
    *FloatPont = 15.50;
    *CharPont = 'X';

    printf("\nValores posteriores a modificacao:\n");
    printf("varInt = %d\n", varInt);
    printf("varFloat = %.2f\n", varFloat);
    printf("varChar = %c\n", varChar);

    return 0;
}
