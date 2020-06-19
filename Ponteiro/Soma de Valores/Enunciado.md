## Exercício Soma de Valores
* Escreva uma função chamada Carrega( ), que recebe 2 parâmetros:
> o ponteiro de um vetor de números inteiros
> um inteiro que contém o tamanho do vetor.
Nessa função solicite ao usuário a entrada na tela de números inteiros e armazene-os no vetor que foi recebido por parâmetro.


* Vamos criar um programa que contém 3 vetores de inteiros (procure urilizar uma constante, com a diretiva #define, para  definir o tamanho dos 3  vetores em 5, por exemplo: #define MAX 5). Utilizando o conceito de Ponteiros, vamos fazer com que 2 destes vetores sejam preenchidos em outra função.
Para isso, utilize a função Carrega( ) que foi escrita inicialmente. Ela será chamada por duas vezes, uma vez para presencher cada um dos dois primeiros vetores.


* Crie uma outra função, NovoVetor(), que recebe como parâmetros os ponteiros dos 3 vetores, e também o tamanho dos vetores (os 3 vetores terão o mesmo tamanho).
Como os dois primeiros vetores já estarão preenchidos com números,  percorrer os 2 primeiros vetores  e identificar os numeros que são comuns a eles, ou seja, os números que estão nos dois vetores.
Preencha o vetor 3 somente com os números que aparecem simultaneamente nos dois primeiros vetores. Ao retornar dessa função, imprima na tela o conteúdo do vetor 3.


* Criar uma outra função, SomaVetor(), que recebe tres parâmetros:
> O PONTEIRO de um vetor de números inteiros
> Um inteiro que contém o tamanho do vetor.
> um PONTEIRO para um numero inteiro, chamado "total"
Essa função deverá percorrer o vetor e somar todos os números encontrados nele, e colocar essa soma no endereço recebido no ponteiro "total" que foi enviado pela função main.


Funcionamento geral do programa:

- Definir uma Constante de tamanho 5
- Declarar 3 vetores para numeros inteiros com o tamanho da Constante e um inteiro para a soma Total
- Chamar a função Carrega() para preencher os dois primeiros vetores
- Chamar a função NovoVetor() para montar o terceiro vetor
- Chamar a função SomaVetor() para calcular a soma do terceiro vetor
- Imprimir (usando uma outra função) o conteúdo dos 3 vetores para conferência
- Imprimir o valor da soma total do terceiro vetor