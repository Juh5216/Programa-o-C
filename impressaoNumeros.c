#include <stdio.h>

int main(){

    int i = 0;                    // Declaração da variável

    while(i <= 10) {

        if(i % 2 ==0) {
            printf("O número %d é par! \n", i);

        /* if(i % 2 != 0) {          Impressão de números impares
            printf("O número %d é ímpar! \n", i); */

        }
        
        i++;                     // Evita o loop infinito

    }

return 0;
}