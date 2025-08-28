#include <stdio.h>

int main(){

// Declarar variáveis - produtos em estoque.
char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

// Declarar variáveis - quantidade dos produtos que estão em estoque.
unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

//Declarar variáveis - valor de cada produto.
float valorA = 10.50;
float valorB = 20.40;

//Declarar variáveis - quantidade de estoque minimo para cada produto.
unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

//Declarar variáveis - valor total em estoque de cada produto.
double valorTotalA;
double valorTotalB;


//Exibir informações dos produtos.
printf("O produto %s possui em estoque %u. O valor unitário é de R$ %.2f \n ", produtoA, estoqueA, valorA);
printf("O produto %s possui em estoque %u. O valor unitário é de R$ %.2f \n ", produtoB, estoqueB, valorB);

//Declaração de variáveis - Armazenamento do valor do resultado da comparação do estoque e estoque minimo.
int resultadoA = estoqueA>estoqueMinimoA;
int resultadoB = estoqueB>estoqueMinimoB;

//Exibir informações do estoque.
printf("O produto %s tem estoque minimo %d \n ", produtoA, resultadoA);
printf("O produto %s tem estoque minimo %d \n ", produtoB, resultadoB);

//Comparação dos valores totais dos produtos.
printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)?: %d \n ",
                        estoqueA*valorA,
                        estoqueB*valorB,
                        (estoqueA*valorA) > (estoqueB*valorB));

}


