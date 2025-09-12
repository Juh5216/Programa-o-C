#include <stdio.h>

int main() {

        int numero;

        do {
            
            printf("Digite um número par para sair do programa: ");
            scanf(" %d", &numero);

            if (numero % 2 ==0) {
                printf(" %d é par", numero);

            } else {
                printf(" %d é ímpar", numero);

            }


        } while(numero % 2 != 0);
            printf("Você digitou um número par, saindo do programa...");

    return (0);
}