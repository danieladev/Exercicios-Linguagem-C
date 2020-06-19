## Exercício Venda
Vamos procurar realizar um processo de venda de produtos, como se fosse a tela do caixa de uma conveniência por exemplo.

Se o nosso programa fosse realizar uma venda ele precisaria de informações como:

* Código do produto<br />
* Valor unitário<br />
* Descrição<br />
* Quantidade vendida<br />

Com essas informações o nosso programa deveria calcular o TOTAL da venda, e apresentar na tela um resumo dessa venda.

Vamos também utilizar o conceito de "ponteiros" para isso, enviando o endereço da variável para uma função que vai realizar uma tarefa específica.

Procure seguir as instruções abaixo e crie as duas versões do programa conforme a descrição.

1) Criar um programa que realiza a venda de um produto, utilizando o conceito de ponteiros.

Você dispõe SOMENTE de 4 variáveis no main: Código, Nome, Valor Unitário, Valor Total.

Criar 3 funções: (as funções NÃO utilizam return)

> *Uma para Buscar os dados na tela* (utilizando ponteiros - ela recebe o ponteiro das variáveis, solicita o preenchimento na tela e carrega os valores onde o ponteiro estiver apontando)

> *Uma para Calcular o valor total da venda* (utilizando ponteiros - ela recebe o ponteiro de variáveis, solicita quantas unidades serão vendidas, realiza o cálculo e carrega o valor onde o ponteiro estiver apontando)

> *Uma para Imprimir o resultado da venda* (conforme exemplo, abaixo - ela recebe as variáveis já preenchidas/calculadas e imprime o resultado da venda na tela)

Declarar as variáveis na função main() e utilizar funções que recebem ponteiros.

NÃO utilizar variáveis globais.

Nenhum cálculo deverá ser realizado na função main().

Ao final, mostrar todas as informações da venda na tela.