#include <stdio.h>


int main() {
    
    /* Objetivo: Comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if/else.

        - 1º Receber as informações das duas cartas.
        - As cartas devem conter os seguintes atributos:
                * Estado (string)
                * Código da carta (string)
                * Nome da cidade (string)
                * População (int)
                * Área (float)
                * PIB (float)
                * Número de pontos turísticos (int) */ 
    

    //Carta 1
    char estado1[15];                      // Uma letra.
    char codigo1[5];                       // A letra do estado seguida de um número 01 á 04.
    char nomeCidade1[15]; 
    int populacao1;
    float area1;                           // Área em quadrados
    float PIB1; 
    int pontosTuristicos1;
    float PIBPerCapita1;                  // Pib / população
    float densidadePopulacional1;         // População/área
    float SuperPoder1;                    /* - Soma de : população, área, PiB, PiB per capita e densidade populacional invertida, numeros de pontos turíticos).
                                             - Conversão de tipos: O resultado da soma > tipo (float)  */
                                                                                                        
    //Receber informações da carta 1
    printf("Informações da primeira carta! \n");

    printf("Insira a letra inicial do estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Insira o código da primeira carta (Letra inicial do estado + 01): ");
    scanf(" %s", &codigo1);

    printf("Insira o nome da cidade, correspondente ao estado da primeira carta: ");
    scanf(" %s", &nomeCidade1);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Insira a área da cidade (Km²): ");
    scanf(" %f", &area1);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB1);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontosTuristicos1);


    //Cálculo do PIB per capita carta 1.
    PIBPerCapita1 = (PIB1/populacao1);

    //Cálculo da densidade populacinal carta 1.
    densidadePopulacional1 = (populacao1/area1);

    //Cálculo para super poder carta 2.
    SuperPoder1 = (float) (populacao1 + area1 + PIB1 + PIBPerCapita1 + pontosTuristicos1);

    
    //Carta 2
    char estado2[15];                    // Uma letra.
    char codigo2[5];                     // A letra do estado seguida de um número 01 á 04.
    char nomeCidade2[15]; 
    int populacao2;
    float area2;                         // Área em kilometros quadrados
    float PIB2; 
    int pontosTuristicos2;
    float PIBPerCapita2;                 // Pib / população
    float densidadePopulacional2;        // População/área
    float SuperPoder2;                   /* - Soma de : população, área, PiB, PiB per capita e densidade populacional invertida, numeros de pontos turíticos).
                                            - Conversão de tipos: O resultado da soma > tipo (float)  */

    //Receber informações da carta 2
    printf("Informações da segunda carta! \n");

    printf("Insira a letra inicial do estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Insira o código da segunda carta (Letra inicial do estado + 02): ");
    scanf(" %s", &codigo2);

    printf("Insira o nome da cidade, correspondente ao estado da segunda carta: ");
    scanf(" %s", &nomeCidade2);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Insira a área da cidade (Km²): ");
    scanf(" %f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontosTuristicos2);

     // 2º Cálculo e exibição da densidade populacional e PIB per capita.

    //Cálculo do PIB per capita carta 2.
    PIBPerCapita2 = (PIB2/populacao2);

    //Cálculo da densidade populacional carta 2.
    densidadePopulacional2 = (populacao2/area2);

    //Cálculo do super poder carta 2.
    SuperPoder2 = (float) (populacao2 + area2 + PIB2 + PIBPerCapita2 + pontosTuristicos2);


    //Exibição dos dados da carta 1
    printf("Carta 1 \n");

    printf("Estado: %c \n", estado1);
    printf("Código: %c \n", codigo1);
    printf("Cidade: %c \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f Km² \n ", area1);
    printf("PIB: %f reais \n ", PIB1);
    printf("Números de pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade populacional: %f hab/Km² \n ", densidadePopulacional1);
    printf("PIB per capita: %f reais \n ", PIBPerCapita1);
    


    //Exibição dos dados da carta 2
    printf("Carta 2 \n");

    printf("Estado: %c \n", estado2);
    printf("Código: %c \n", codigo2);
    printf("Cidade: %c \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f Km² \n ", area2);
    printf("PIB: %f reais \n ", PIB2);
    printf("Números de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %f hab/Km²\n", densidadePopulacional2);
    printf("PIB per capita: %f reais \n", PIBPerCapita2);


    /* 3º - Comparação de APENAS 1 atributo númerico. 
            * Essa escolha deve ser feita diretamente pelo código, não pela entrada do usuário.
            * Para determinar a carta vencedora, se aplica o mesmo conceito do primeiro nível do desafio, o maior valor vence .
        - Exibir o resultado de comparação. 
            * Qual carta venceu a comparação, incluindo:
            * O atributo utilizado na comparação.
            * Os valores das duas cartas para aquele atributo). */

    // Super poder
    if (SuperPoder1>SuperPoder2) {
        printf("Carta vencedora da rodada \n");
        printf("Carta 1 - %c: %f \n", estado1, SuperPoder1);
        printf("Carta 2 - %c: %f \n", estado2, SuperPoder2);
        printf("Resultado: Carta 1 %c venceu com o super poder %f!", estado1, SuperPoder1);
    } else{
        printf("Carta vencedora da rodada \n");
        printf("Carta 1 - %c: %f \n", estado1, SuperPoder1);
        printf("Carta 2 - %c: %f \n", estado2, SuperPoder2);
        printf("Resultado: Carta 2 %c venceu com o super poder %f!", estado2, SuperPoder2);
    } 

    
    return 0;
}