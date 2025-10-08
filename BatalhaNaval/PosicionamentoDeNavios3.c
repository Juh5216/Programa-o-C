#include <stdio.h>

// Cone
#define LinhaCone 3
#define ColunaCone 3

// Cruz
#define LinhaCruz 5
#define ColunaCruz 5

// Octaedro
#define LinhaOctaedro 5
#define ColunaOctaedro 5

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

    /* Matrizes de habilidade (Áreas de ataques especiais) : Criar 1 matriz para cada habilidade 
        - Cone : 1 ponto de origem no topo e expandindo-se em direção à base.
        - Cruz : Uma matriz que represente uma área em forma de cruz, com o ponto de origem no centro.
        - Octaedro : Resultando em um formato que se assemelha a um losango. 
        
        Deve indicar quais posições são afetadas pela habilidade com o valor 1, e quais não são afetadas com o valor 0 */

    int Cone [LinhaCone][ColunaCone]= {6,6,6,6,6};
    int Cruz [LinhaCruz][ColunaCruz] = {7,7,7,7,7};
    int Octaedro [LinhaOctaedro][ColunaOctaedro]= {8,8,8,8,8};

    /*Posicionamento dos navios
        - Declare e inicialize 4 vetores (arrays unidimensionais) para representar os navios
        - Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições)
        - Um navio será posicionado horizontalmente, outro verticalmente e 2 na diagonal
        - Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3
        - Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham*/
   /* int navio1 [3] = {3, 3, 3}; // Navio horizontal
    int navio2 [3] = {3, 3, 3}; // Navio vertical
    int navio3 [3] = {3, 3, 3}; // Navio diagonal
    int navio4 [3] = {3, 3, 3}; // Navio diagonal
    int k;
    int l;

    //Posicionando o navio1 (horizontal) na linha 2, colunas 4, 5 e 6
    int linha_n1 = 1;
    int coluna_n1 = 4;
    for (j = 0; j < 3; j++) {
        tabuleiro [linha_n1][coluna_n1 + j] = navio1 [j];
    }

    //Posicionando o navio2 (vertical) na coluna 9, linhas 5, 6 e 7
    int linha_n2 = 5;
    int coluna_n2 = 9;
    for (i = 0; i < 3; i++) {
        tabuleiro [linha_n2 + i][coluna_n2] = navio2 [i];

    }

    //Posicionamento do navio3 (diagonal da esquerda para a direita)
    int linha_n3 = 3;
    int coluna_n3 = 1;
    for (k = 0; k < 3; k++) {
        tabuleiro [linha_n3 + k][coluna_n3 + k] = navio3 [k];
    }

    // Posicionamento do navio4 (diagonal da direita para a esquerda)
    int coluna_n4 = 7;
    int linha_n4 = 5;
    for (l = 0; l < 3; l++) {
        tabuleiro [linha_n4 + l][coluna_n4 - l] = navio4 [l];
    }
*/
    // Cone

    int linhaCone= 0;
    int colunaCone = 5;

    for (i= 0; i< colunaCone; i++) {
        for (j=5; j>linhaCone; j--) {

            while (j<5) {
                j++;

            if (j==0  || i==5) {
                j++;
            } if (j==9|| i==5){
                j--;
            }
        }

            tabuleiro [i][j] = 6;
        }
    }

    // Cruz

    int linhaCruz= 6;
    int colunaCruz = 4;
    int k;



    // Octaedro

    int linhaOctaedro= 7;
    int colunaOctaedro = 3;
    


    /*  Exibição do tabuleiro
        - Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. 
        - Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios */
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro [i][j]);

        }
        printf("\n");
    }
}