## Exercício Jogo Acertar Número
Crie um jogo, em C, em que o COMPUTADOR sorteia um número entre 1 e mil e reserva esse número, sem mostrá-lo. O programa irá solicitar que o jogador informe um número na tela e tente acertar o número sorteado pelo computador. O jogador deve tentar acertar o número sorteado, informando um número na tela. Se ele errar, o programa deve dizer se o número sorteado é maior ou menor que o número que o jogador tentou. O programa continua até o jogador decidir SAIR. Ao acertar o número sorteado, o programa deverá informar em quantas tentativas o usuário acertou.

INSTRUÇÕES:
Usar um laço DO WHILE para controlar se o jogo deve começar novamente, ou não.

A condição será a variável 'continuar',:
* Zero para não
* UM  para sim

>> Usar uma Função para gerar o número randômico entre 1 e 1000.

>> Usar uma Função para chamar a impressão (printf).

>> Usar uma Função para solicitar na tela a digitação do número pelo jogador (essa função deve RETORNAR o número digitado).

>> O usuário informará um número e tentará adivinhar o número sorteado.

>> Criar uma Função chamada  dicas()

>> Essa função (dicas) recebe o número informado pelo jogador e deverá comparar o número sorteado com o número informado pelo usuário, e essa função deverá RETORNAR se o número informado é MAIOR ou MENOR, ou se ele acertou o número.

>> O processo continua até o usuário acertar o número sorteado ou informar que não quer mais continuar o jogo.