#include <stdio.h>

int main(){


// 1º Declaração de variáveis
// 2º Informações do produto

char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

//Valor em estoque
unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

//Valores
float valorA = 10.50;
float valorB = 20.40;

//Estoque minímo
unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

//Valor total em estoque
double valorTotalA ;
double valorTotalB;

//Exibir informações do produto
printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", produtoB, estoqueB, valorB);

//Comparação do valor minimo do estoque

int resultadoA;
int resultadoB;

resultadoA = estoqueA>estoqueMinimoA;
resultadoA = estoqueB>estoqueMinimoB;

printf("O produto %s tem estoque minimo %d", produtoA, resultadoA);
printf("O produto %s tem estoque minimo %d", produtoB, resultadoB);

//Comparação dos valores totais


}


