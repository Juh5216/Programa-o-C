/*  Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
 
Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa. O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
 
Bispo com Loops Aninhados: O Bispo deve ser implementado com recursividade, e também com loops aninhados, utilizando o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.

Requisitos funcionais


Entrada de Dados: Os valores para o número de casas a serem movidas (para recursão) e as condições dos loops (para o Cavalo) devem ser definidos diretamente no código, como variáveis ou constantes.
 
Recursividade (Torre, Bispo e Rainha): Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais.
 
Loops Complexos (Cavalo): Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
 
Loops Aninhados (Bispo): Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
 
Saída de Dados: O programa deverá imprimir no console, de forma clara e organizada, a direção do movimento a cada casa percorrida por cada peça. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Utilize linhas em branco para separar a saída de cada peça.

*/

#include<stdio.h>

// Procedimento para  movimentação da torre
void MovimentoTorre(int i) {
    if (i <= 5)
        printf("Cima\n");

        MovimentoTorre(i + 1);
}

// Procedimento para movimentação do bispo
void MovimentoBispo(int j) {
    if (j <= 5)
        printf("Cima e direita\n");

        MovimentoBispo(j + 1);
}

// Procedimento para movimentação da rainha
void MovimentoRainha(int k) {
    if (k <= 8)
        printf("Esquerda\n");

        MovimentoRainha(k + 1);
}

//Procedimento para movimentação do cavalo
void MovimentoCavalo(int l) {
    while(l--) {   
        for(int i=0; i<2; i++) {    
            printf("Cima\n");
        }
        printf("Direita\n");        

        MovimentoCavalo(l + 1);
    }
}
    

int main() {

    printf("Escolha a peça que deseja movimentar: \n");
    printf("1- Torre \n");
    printf("2- Bispo \n");
    printf("3- Rainha \n");
    printf("4- Cavalo \n");
    int peca;
    scanf("%d", &peca);

        switch (peca){
        case 1: {

        // Torre
            int i = 1;
            printf("Movimento da Torre:\n");
                MovimentoTorre(i);
        }
        break;
        case 2: {

        //Bispo
            int j = 1;
            printf("Movimento do Bispo:\n");
                MovimentoBispo(j);
        }
        break;
        case 3: {

        // Rainha
           int k = 1;
           printf("Movimento da Rainha:\n");
                MovimentoRainha(k);
        }
        break;
        case 4: {                           // Para declarar uma variável dentro de um switch, é necessário que ela esteja dentro de um bloco.

        //Cavalo
            int l = 0;
            printf("Movimento do Cavalo:\n");
                MovimentoCavalo(l);
            }
            break;
        
        default:
            printf("Peça inválida, escolha novamente.\n");
            break;
        
}
        
return (0);

}