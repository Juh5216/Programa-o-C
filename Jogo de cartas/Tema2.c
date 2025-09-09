#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    //Carta 1
    char estado1;                           // Uma letra.
    char codigo1[5];                        // A letra do estado seguida de um número 01 á 04.
    char nomeCidade1[15]; 
    int populacao1;
    float area1;                           // Área em kilometros quadrados
    float PIB1; 
    int pontosTuristicos1;
    float PIBPerCapita1;                   // Pib / população
    float densidadePopulacional1;          // População/área
    float SuperPoder1;                     /* - Soma de : população, área, PiB, PiB per capita e densidade populacional invertida, numeros de pontos turíticos).
                                              - Conversão de tipos: O resultado da soma > tipo (float)  */
                                                                                                        
    //Receber informações da carta 1
    printf("Informações da primeira carta! \n");

    printf("Insira a letra inicial do estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Insira o código da primeira carta (Letra inicial do estado + 01): ");
    scanf(" %s", codigo1);

    printf("Insira o nome da cidade, correspondente ao estado da primeira carta: ");
    scanf(" %s", nomeCidade1);

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
    char estado2;                        // Uma letra.
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
    scanf(" %s", codigo2);

    printf("Insira o nome da cidade, correspondente ao estado da segunda carta: ");
    scanf(" %s", nomeCidade2);

    printf("Insira a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Insira a área da cidade (Km²): ");
    scanf(" %f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &PIB2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontosTuristicos2);

    //Cálculo do PIB per capita carta 2.
    PIBPerCapita2 = (PIB2/populacao2);

    //Cálculo da densidade populacional carta 2.
    densidadePopulacional2 = (populacao2/area2);

    //Cálculo do super poder carta 2.
    SuperPoder2 = (float) (populacao2 + area2 + PIB2 + PIBPerCapita2 + pontosTuristicos2);

    
    /*Exibição dos Dados das Cartas:
        - Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        - Exiba os valores inseridos para cada atributo da cidade, um por linha */


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
    

    /*Comparação das cartas: 
        - Comparar todos os atributos.
        - O atributo que tiver o maior valor ganha. Com excesão da densidade populacional. */
    
    printf("Comparação de cartas: \n");
        printf("Resultado 1 = Carta 1 venceu");
        printf("Resultado 0 = Carta2 venceu");

    //Comparação e exibição dos atributos vencedores
    printf("Comparação dos atributos: 1 = Carta 1 vencei e 0 = Carta 2 venceu. \n ");
    printf("População: %d \n ", (populacao1 > populacao2));                         // População
    printf("Área: %d \n ",(area1 > area2));                                         // Área
    printf("PIB:: %d \n ",(PIB1 > PIB2));                                           // PIB
    printf("Pontos turísticos: %d \n ",(pontosTuristicos1 > pontosTuristicos2));    // Pontos turísticos
    printf("Densidade: %d \n ", (densidadePopulacional1 < densidadePopulacional2)); // Densidade populacional
    printf("PIB per capita: %d \n ",(PIBPerCapita1 > PIBPerCapita2));               // PIB per capita
    printf("Super poder: %d ", (SuperPoder1 > SuperPoder2));                        // Super poder

    return 0;
}