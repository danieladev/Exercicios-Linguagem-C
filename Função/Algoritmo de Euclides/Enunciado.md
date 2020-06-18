## Exercício Algoritmo de Euclides
Escreva um algoritmo que leia dois números inteiros e informe o MDC (máximo divisor comum) dos números lidos. Crie um módulo para calcular o MDC dos números lidos.
O MDC de dois números é o maior número que os divide.

Algoritmo de Euclides para calcular MDC(a, b):
1. Divide a por b;
2. Se o resto for igual a zero, o MDC será b.
3. Se o resto for diferente de zero, a recebe b e b recebe o resto;
4. Volte ao passo 1 até encontrar resto zero.