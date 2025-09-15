/* Objetivo : Movimentação de peças no tabuleiro
    Controle de 3 peças:
        * Torre - Se movimenta em linha reta 
        * Bispo - Se movimenta na diagonal 
        * Rainha - Se mivimenta em todas as direções */

// Movimentação das peças:
// Torre - 5 casas para frente
// Bispo - 5 casas na diagonal (Direita)
// Rainha - 8 casas para esquerda

/* Saída de Dados: 
    O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. 
        - Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. 
        - Utilize o comando printf para exibir as informações. 
        - As saídas devem seguir o padrão: 
            * printf("Cima\n");
            * printf("Baixo\n");
            * printf("Esquerda\n"); 
            * printf("Direita\n"); 
            * printf("Cima Esquerda\n"); 
            * printf("Direita\n"); */

#include<stdio.h>

int main() {

    printf("Escolha a peça que deseja movimentar: \n");
    printf("1- Torre \n");
    printf("2- Bispo \n");
    printf("3- Rainha \n");
    int peca;
    scanf("%d", &peca);

        switch (peca){
        case 1:

        // Torre
            for (int T = 0; T<=5; T++) 
                printf("Cima\n");
                printf("Movimento concluído!\n");
        break;
        case 2:

        //Bispo
            for (int B = 0; B<=5; B++) 
                printf("Cima e direita\n");
                printf("Movimento concluído!\n");
        break;
        case 3:

        // Rainha
            for (int R = 0; R<=8; R++) 
                 printf("Esquerda\n");
                 printf("Movimento concluído!\n");
        
        break;
        default:
            printf("Peça inválida, escolha novamente.\n");
            break;
        
}
        
return (0);

}