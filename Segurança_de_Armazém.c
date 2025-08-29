/*Estruras de decisão vão permitir um ambiente seguro, verificando: 
    - Temperatura
    - Umidade
    - Nível de estoque

Irá emitir um alerta se estiver fora dos limites seguros */ 


#include <stdio.h>

int main(){

//1º Declaração de variáveis: Umidade (float) / Temperatura (float) / Estoque (unsigned int).
float umidade;
float temperatura;
unsigned int estoque, estoqueMinimo = 1000;

//Entrada de dados
printf("Entre com a temperatura: ");
scanf( "%f", &temperatura);

printf("Entre com a umidade: ");
scanf( "%f", &umidade);

printf("Entre com o estoque: ");
scanf( "%u", &estoque);

//Verificação da temperatura
if (temperatura > 30) {
    printf("A temperatura está alta! \n" );
} else {
    printf("A temperatura está dentro dos parâmetros! \n");
}

//Verificação da umidade
if (umidade > 50) {
    printf("A umidade está elevada! \n" );
} else {
    printf("A umidade está dentro dos parâmetros! \n");
}

//Verificação do estoque
if (estoque < estoqueMinimo) {
    printf("O estoque está abaixo do minimo! \n" );
} else {
    printf("Estoque normal! \n");
}

return 0;

}