#include <stdio.h>

int main() {


    int index;

    char * nomeAluno [3][3] = {
        {"Ana", "Pt: 30", "Mt: 90"},
        {"Daniel", "Pt: 60", "Mt: 60"},
        {"Gabriel", "Pt: 90", "Mt: 30"}
    };

    printf("Digite o número do aluno que queira ver as notas \n");
    printf("0 - Ana \n");
    printf("1 - Daniel \n");
    printf("2 - Gabriel \n");
    scanf("%d", &index);

    printf("As notas do aluno %s são: %s e %s \n", nomeAluno[index][0], nomeAluno[index][1], nomeAluno[index][2]);


    return(0);
}