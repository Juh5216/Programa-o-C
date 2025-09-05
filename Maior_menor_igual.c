/* Objetivo : 
- Adivinhar se o número escolhdo é maior, menor ou igual ao número escolhido pelo computador.
    * Gerar números aleatórios entre 1 e 100.
    * Menu de opções : maior, menor ou igual.
        * Maior e maior
        * Maior e menor
        * igual e igual 
    * O jogador deve entrar com um número entre 1 e 100 (É o numero que vai ser comparado).
    * Comparação dos numeros: O número gerado pelo computador deve ser comparado com o número que o jogador inseriu
    * Exibir mensagem se o jogador ganhou ou perdeu.

*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() %100 + 1; // Número entre 1 e 100.

    // Inicio do jogo
    printf("Jogo de adivinhação de números! \n");
    printf("Regra do jogo: Você deveescolher um número entre 1 e 100 e um tipo de comparação. \n");
    printf("M - Maior \n ");
    printf("N - Menor \n ");
    printf("I - Igual \n ");


    // Escolha da comparação
    printf("Escolha uma comparação: ");
    scanf(" %c", &tipoComparacao);

    // Escolha do número 
    printf("Adivinhe o número entre 1 e 100 : ");
    scanf("%d", &numeroJogador);

    // Comparação dos números
    switch(tipoComparacao){
        case 'M': 
        case 'm':                       //Caso o usuário digite minúsculo, o bloco de cógido será executado, pois não há o break abaixo do 'case M'.
            printf("Você escolheu a opção maior \n");
            resultado = numeroJogador>numeroComputador ? 1 : 0;
        break;
        case 'N':
        case 'n':
            printf("Você escolheu a opção menor \n");
            resultado = numeroJogador<numeroComputador ? 1 : 0;
        break;
        case 'I':
        case 'i':
            printf("Você escolheu a opção igual \n");
            resultado = numeroJogador==numeroComputador ? 1 : 0;
        break;
        default:
        printf("Opção de jogo inválida, escolha novamente!");
    }

    // Exibição dos números do jogador e do computador
    printf("O número do computador é: %d e o do jogador é : %d \n", numeroComputador, numeroJogador);

    if (resultado==1) {
        printf("Parabéns! Você venceu!");

    } else {
        printf("Sinto muito, você perdeu!");
    }






    return(0);
}