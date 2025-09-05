// if if/else / switch/ operador ternário
// gerenciar notas de estudandtes
// determinar estados 
// caculo media > digitar nota > exibir status
// determinar status > medi > status

#include<stdio.h>
int main() {

    int opcao;
    float nota1, nota2, nota3;

    printf("Menu de gerenciamento de estudadantes \n");
    printf("Escolha uma opção: \n");
    printf("1 - Calcular a média \n ");
    printf("2 - Determinar status \n ");    
    printf("3 - Sair \n ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("Calcular a média! \n");
        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        // Teste de condição: nota é >= 0 e <=10
            if (nota1 >= 0 && nota2 <= 10){
                printf("Entrada correta!");

            } else {
                printf("Entrada com valores errados");
            
            }

        break;
        case 2:
        printf("Determinar status \n");
        break;
        case 3:
        printf("Saindo do programa \n");
        break;
        default:
        printf("Opção inválida! \n");

        }
    
  
}
