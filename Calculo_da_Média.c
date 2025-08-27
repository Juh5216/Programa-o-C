#include <stdio.h>

int main(){

int    nota1, nota2, nota3, media;

//Inserção das  notas 
printf("Insira a primeira nota: ");
scanf(" %d", &nota1);

printf("Insira a segunda nota: ");
scanf(" %d", &nota2);

printf("Insira a terceira nota: ");
scanf(" %d", &nota3);

// Cálculo da média: somar e dividir por 2

media = (nota1 + nota2 + nota3) / 3;

//Exibir o resultado 

printf("A média é: %d", media);

return 0;

}