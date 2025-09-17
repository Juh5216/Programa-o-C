/* - Movimento do cavalo - 2 casas p cima e 1 para direita
 
*/

#include<stdio.h>

int main() {

    printf("Escolha a peça que deseja movimentar: \n");
    printf("1- Torre \n");
    printf("2- Bispo \n");
    printf("3- Rainha \n");
    printf("4- Cavalo \n");
    int peca;
    scanf("%d", &peca);

        switch (peca){
        case 1:

        // Torre
            for (int T = 1; T<=5; T++) 
                printf("Cima\n");
                printf("Movimento concluído!\n");
        break;
        case 2:

        //Bispo
            for (int B = 1; B<=5; B++) 
                printf("Cima e direita\n");
                printf("Movimento concluído!\n");
        break;
        case 3:

        // Rainha
            for (int R = 1; R<=8; R++) 
                 printf("Esquerda\n");
                 printf("Movimento concluído!\n");
        
        break;
        case 4:

        //Cavalo
             int movimentoCompleto = 1;

             while(movimentoCompleto--) {
                for(int i=0; i<2; i++) {
                    printf("Cima\n");
                }
                printf("Direita\n");

             }
        default:
            printf("Peça inválida, escolha novamente.\n");
            break;
        
}
        
return (0);

}