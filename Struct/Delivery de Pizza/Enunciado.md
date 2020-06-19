## Exercício Delivery de Pizza
Vamos criar um programa para registrar o pedido de pizzas numa tele-entrega.
Utilizar uma estrutura chamada Pizza que irá conter as seguintes informações:

CodigoPizza (inteiro)<br />
NomePizza (caracter)<br />

Uma outra estrutura chamada Preco vai conter as seguintes informações:

CodigoPizza (inteiro)<br />
Preco ( float )<br />

Declarar um vetor na função main para cada uma das estruturas ( struct Preco precos[2], struct Pizza
pizzas[2] ), com 2 ocorrências cada.

O Menu do programa terá as seguintes opções:

0-Sair<br />
1-Cadastro Pizza<br />
2-Cadastro Preco<br />
3-Pedido

> Na opção 1, uma função que recebe uma estrutura do vetor e solicita os dados da pizza, RETORNANDO a estrutura preenchida, que será armazenada no vetor da função main.

> Na opção 2, uma função que recebe uma estrutura do vetor e solicita os dados de Preco, RETORNANDO a estrutura preenchida, que será armazenada no vetor da função main.

> A opção 3 vai solicitar na tela o NOME de uma pizza e a quantidade de pizzas, que devem ser enviados para uma OUTRA FUNÇÃO, como parâmetros.
Essa outra função também deve receber os dois vetores como parâmetros e procurar nos vetores, a pizza que tenha o mesmo nome informado na tela (utilize a função strcmp( ) para comparar os nomes).

Quando encontrar a pizza correta, procure pelo código dela no vetor de preços, e então poderá imprimir um resumo do pedido do cliente contendo:

* Nome da pizza<br />
* Quantidade<br />
* Valor Total

O programa só encerra quando o usuário escolher a opção “Sair” , caso contrário, pode fazer um novo pedido.