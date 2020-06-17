## Exercício Pagamento Energia Elétrica
Escreva um algoritmo que calcule e mostre o preço a pagar pelo fornecimento de energia elétrica. O algoritmo deve perguntar a quantidade de kWh consumida e o tipo de instalação: R para residencial, I para industrial e C para comercial. Caso o tipo de instalação informada seja diferente desses três tipos, imprima a mensagem "Tipo de instalação inexistente". Calcule o preço a pagar de acordo com a tabela a seguir:

Tipo | Faixa(kWh) | Preço
:--- | :--- | :---
Residencial | Até 500<br />Acima de 500 | R$ 0,40<br />R$ 0,60
Comercial | Até 1000<br />Acima de 1000 | R$ 0,55<br />R$ 0,60
Industrial | Até 5000<br />Acima de 5000 | R$ 0,60<br />R$ 0,65

Exemplos de entrada | Exemplos de saída
:--- | :---
600 R | Preço a pagar = R$ 360,00
400 X | Tipo de instalação inexistente
