// Pedra
//Papel 
//Tesoura
//Numeros aleatorios
// pedra ganah de tesoura
// papel ganha de pedra
// tesoura ganha de papel
//Comparação de escolhas
// Se ambos os jogares escolherem o mesmo valor = empate

#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;

int main() {

int escolhaJogador, escolhaComputador;
srand(time(0));

printf("Jogo de jokenpô \n");
printf("Escolha uma opção:");
printf("1 - Pedra \n");
printf("1 - Papel\n");
printf("1 - Tesoura\n");
scanf("%d", &escolhaJogador);

escolhaComputador = rand() %3 + 1;

switch(escolhaJogador)
{
    case 1:
    printf("Jogador pedra");

}


    return 0;
}