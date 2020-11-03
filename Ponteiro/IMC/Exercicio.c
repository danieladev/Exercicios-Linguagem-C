/* Escreva um programa utilizando a linguagem C, que vai calcular o IMC de uma pessoa,
utilizando o conceito de ponteiros.
Criar uma Função que receba um ponteiro para float onde será calculado o IMC. Ela
solicita na tela a altura e o peso da pessoa. Realiza o cálculo do IMC da seguinte forma:
IMC = Peso dividido pela altura ao quadrado.
Esse resultado de IMC calculado será colocado no ponteiro que a função recebeu (Não
utilizar Return).
No programa principal, enquanto não for escolhida a opção de ENCERRAR O PROGRAMA,
chame a função de cálculo de IMC enviando o endereço de uma variável local e a seguir,
enviar o valor calculado (utilizando ponteiro) para a Função de impressão.
Criar uma Função de impressão do IMC que recebe o ponteiro do valor calculado do IMC e
imprime o resultado na tela, conforme a tabela a seguir: 
IMC                  Resultado
Menos do que 18,5    Abaixo do peso
Entre 18,5 e 24,9    Peso normal
Entre 25 e 29,9      Sobrepeso
Entre 30 e 34,9      Obesidade grau 1
Entre 35 e 39,9      Obesidade grau 2
Mais do que 40       Obesidade grau 3
*/

#include <stdio.h>

void calculaIMC (float *IMC)
{
    float altura, peso;

    printf("\nInforme a altura: ");
    scanf("%f", &altura);

    printf("Informe o peso: ");
    scanf("%f", &peso);

    *IMC = peso / (altura * altura);
}

void imprimeIMC (float calc)
{
    printf("\n> IMC = %.2f\n", calc);

    if (calc < 18.5)
    {
        printf("> Abaixo do Peso\n");
    }
    else if (calc >= 18.5 && calc <= 24.9)
    {
        printf("> Peso Normal\n");
    }
    else if (calc >= 25 && calc <= 29.9)
    {
        printf("> Sobrepeso\n");
    }
    else if (calc >= 30 && calc <= 34.9)
    {
        printf("> Obesidade Grau 1\n");
    }
    else if (calc >= 35 && calc <= 39.9)
    {
        printf("> Obesidade Grau 2\n");
    }
    else
    {
        printf("> Obesidade Grau 3\n");
    }
}

int main(void)
{
    float calculo;
    int op;

    do
    {
        calculaIMC(&calculo);
        imprimeIMC(calculo);

        printf("\nDigite 1 para Continuar ou Digite 0 para Encerrar o Programa.\n");
        scanf("%d", &op);

    }
    while (op != 0);

    return 0;
}
