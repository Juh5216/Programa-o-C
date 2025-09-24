#include <stdio.h>

/*  Representando o tabuleiro
        - O tabuleiro terá um tamanho fixo 10x10
        - Inicialize todas as posições do tabuleiro com o valor 0, representando água

    Posicionamento dos navios
        - Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios
        - Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições)
        - Um navio será posicionado horizontalmente e o outro verticalmente
        - Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3
        - Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham
        - Dica: O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na matriz do tabuleiro, de acordo com a orientação (horizontal ou vertical) do navio.

    Exibição do tabuleiro
        - Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. 
        - Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios
*/

int main() {

    //Tabuleiro
    int tabuleiro [10][10]= 0;

    //Posicionamento dos navios


    //Exibição do tabuleiro

        printf("Tabuleiro \n");
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

    return(0);

}