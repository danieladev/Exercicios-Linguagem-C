/* Faca um programa que simule a memoria de um computador: o usuario ira especificar
o tamanho da memoria, ou seja, quantos bytes serao alocados do tipo inteiro. Para tanto,
a memoria solicitada deve ser um valor multiplo do tamanho do tipo inteiro. Em seguida, o
usuario tera 2 opcoes: inserir um valor em uma determinada posiaoo ou consultar o valor
contido em uma determinada posicao. A memoria deve iniciar com todos os dados
zerados. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *memoria, qtd, num, op = 1, pInsere, pCons, erro = 0;

    printf("- Informe a quantidade de dados que serao armazenados. Deve ser multipla de 4: ");
    scanf("%d", &qtd);

    if(qtd % 4 == 0)
    {
        memoria = (int*) calloc(qtd, sizeof(int));
    }
    else
    {
        printf("\n- ERRO. A quantidade deve ser multipla de 4\n");
        erro = 1;
    }


    while(erro == 0 && op != 0)
    {
        printf("\nEscolha um opcao abaixo:");
        printf("\n0 - Sair");
        printf("\n1 - Inserir dado na memoria");
        printf("\n2- Consultar dado da memoria\n");
        scanf("%d", &op);


        switch(op)
        {
        case 1:
            printf("\nInforme em qual posicao deseja inserir o dado: ");
            scanf("%d", &pInsere);

            printf("\nInforme o dado: ");
            scanf("%d", &num);

            memoria[pInsere - 1] = num;
            printf("\n- Dado %d inserido com sucesso\n", num);
            break;

        case 2:
            printf("\nInforme qual posicao deseja consultar: ");
            scanf("%d", &pCons);

            printf("\n- Na posicao %d existe o dado: %d\n", pCons, memoria[pCons - 1]);
        }
    }

    free(memoria);

    return 0;
}
