#include <stdio.h>

int main() {

    /* Representando o tabuleiro
        - O tabuleiro terá um tamanho fixo 10x10
        - Inicialize todas as posições do tabuleiro com o valor 0, representando água */

    int tabuleiro [10][10];
    int i, j;

    // Inicializando o tabuleiro com 0 (água)

    for (i = 0; i < 10; i++) {

        for (j = 0; j < 10; j++) {

            tabuleiro [i][j] = 0;
        }
    }
    

    /*Posicionamento dos navios
        - Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios
        - Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições)
        - Um navio será posicionado horizontalmente e o outro verticalmente
        - Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3
        - Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham
        - Dica: O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na matriz do tabuleiro, de acordo com a orientação (horizontal ou vertical) do navio. */

    int navio1 [3] = {3, 3, 3}; //Navio horizontal
    int navio2 [3] = {3, 3, 3}; //Navio vertical

    //Posicionando o navio1 (horizontal) na linha 2, colunas 4, 5 e 6
    int linha_n1 = 2;
    int coluna_n1 = 4;
    for (j = 0; j < 3; j++) {
        tabuleiro [linha_n1][coluna_n1 + j] = navio1 [j];
    }

    //Posicionando o navio2 (vertical) na coluna 7, linhas 5, 6 e 7
    int linha_n2 = 5;
    int coluna_n2 = 7;
    for (i = 0; i < 3; i++) {
        tabuleiro [linha_n2 + i][coluna_n2] = navio2 [i];
    }
    
    /*  Exibição do tabuleiro
        - Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. 
        - Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios */
        
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro [i][j]);
        }
        printf("\n");
    }

    return(0);

}