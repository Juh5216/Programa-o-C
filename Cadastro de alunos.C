#include <stdio.h>

int main() {

    int idade, matricula;
    float altura;
    char nome[50];

    //Entrada de dado: Nome
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    
    //Entrada de dado: Idade
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    //Entrada de dado: Matricula
    printf("Digite a sua matricula: \n");
    scanf("%d", &matricula);
    
    //Entrada de dado: Altura
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);


    //Exibição dos dados recebidos
    printf("Nome: %s - Idade: %d \n", nome, idade);
    printf("Matricula: %d - Altura: %f",matricula, altura);

    return 0;

}