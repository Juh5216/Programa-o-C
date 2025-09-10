// Objetivo: Batalha com 2 atributos diferentes escolhidos para comparação de cartas

#include <stdio.h>


int main() {

    /* 1º Receber as informações das duas cartas.
        - As cartas devem conter os seguintes atributos:
            * Estado (string)
            * Código da carta (string)
            * Nome da cidade (string)
            * População (int)
            * Área (float)
            * PIB (float)
            * Número de pontos turísticos (int) */
    

    //Carta 1
    char pais1[10];
    char estado1;                          // Uma letra.
    char codigo1[3];                       // A letra do estado seguida de um número.
    char nomeCidade1[15]; 
    int populacao1;
    float area1;                           // Área em km quadrados
    float PIB1; 
    int pontosTuristicos1;
    float densidadePopulacional1;         // População/área
   
                                                                                                        
    //Receber informações da carta 1
    printf("Informações da primeira carta! \n");

    printf("Insira o país da primeira carta: ");
    scanf(" %s", pais1);
    while(getchar() != '\n'); // Limpa o buffer

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


    //Cálculo da densidade populacinal carta 1.
    densidadePopulacional1 = (populacao1/area1);
    

    //Carta 2
    char pais2[10]; 
    char estado2;                        // Uma letra
    char codigo2[3];                     // A letra do estado seguida de um número.
    char nomeCidade2[15]; 
    int populacao2;
    float area2;                         // Área em kilometros quadrados
    float PIB2; 
    int pontosTuristicos2;   
    float densidadePopulacional2;                     

    //Receber informações da carta 2
    printf("Informações da segunda carta! \n");

    printf("Insira o país da segunda carta:  ");
    scanf(" %s", pais2);

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


    // 2º Cálculo da densidade populacional
    densidadePopulacional2 = (populacao2/area2);


    // O jogador deve escolher 2 atributos numéricos DIFERENTES para a comparação de cartas, através de MENUS INTERATIVOS.
    // Escolha do 1º atributo
    int escolhaAtributo1;
    int escolhaAtributo2;

    printf("Jogadores, escolham o 1º atributo para batalhar! \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos turísticos \n");
    printf("5 - Densidade populacional \n");
    scanf(" %d", &escolhaAtributo1);


    /* Menu interativo - Switch e comparações dos atributos da primeira escolha
        - Comparar os atributos (Todos) 
        - Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base no atributo escolhido. 
        - Tratamento de Empates: Implemente a lógica para tratar empates. Se a comparação dos atributos das duas cartas for igual, exiba a mensagem "Empate!". */

    switch(escolhaAtributo1){
        case 1:
        printf("1º atributo escolhido para a batalha: População! \n");
        populacao1>populacao2 ? printf("Carta 1 venceu! \n") : populacao2>populacao1 ? printf("Carta 2 venceu! \n") : printf("Empate! \n");
        break;
        case 2:
        printf("1º atributo escolhido para a batalha: Área! \n");
        area1>area2 ? printf("Carta 1 venceu! \n") : area2>area1 ? printf("Carta 2 venceu! \n") : printf("Empate! \n");
        break;
        case 3:
        printf("1º atributo escolhido para a batalha: PIB! \n");
        PIB1>PIB2 ? printf("Carta 1 venceu! \n") : PIB2>PIB1 ? printf("Carta 2 venceu! \n") : printf("Empate! \n");
        break;
        case 4:
        printf("1º atributo escolhido para a batalha: Pontos turísticos! \n");
        pontosTuristicos1>pontosTuristicos2 ? printf("Carta 1 venceu! \n") : pontosTuristicos2>pontosTuristicos1 ? printf("Carta 2 venceu! \n") : printf("Empate! \n");
        break;
        case 5:
        printf("1º atributo escolhido para a batalha: Densidade populacional! \n");
        densidadePopulacional1<densidadePopulacional2 ? printf("Carta 1 venceu! \n") : densidadePopulacional2<densidadePopulacional1 ? printf("Carta 2 venceu! \n") : printf("Empate! \n");
        break;
        default:
        printf("Opção inválida! Escolham um número de 1 à 5 corresponde ao atributo que desejam para batalha! \n");
        break;
    }


    // Escolha do 2º Atributo

    printf("Jogadores, agora escolham o 2º atributo para batalhar! \n");
    printf("Atenção! O segundo atributo não pode ser igual ao primeiro. \n");    // Os jogadores NÃO podem selecionar o mesmo atributo 2 vezes
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos turísticos \n");
    printf("5 - Densidade populacional \n");
    scanf(" %d", &escolhaAtributo2);

    switch(escolhaAtributo2){
        case 1:
        printf("2º atributo escolhido para a batalha: População! \n");
        break;
        case 2:
        printf("2º atributo escolhido para a batalha: Área! \n");
        break;
        case 3:
        printf("2º atributo escolhido para a batalha: PIB! \n");
        break;
        case 4:
        printf("2º atributo escolhido para a batalha: Pontos turísticos! \n");
        break;
        case 5:
        printf("2º atributo escolhido para a batalha: Densidade populacional! \n");
        break;
        default:
        printf("Opção inválida! Escolham um número de 1 à 5 corresponde ao atributo que desejam para batalha! \n");
        break;
    }

    // Os jogadores NÃO podem selecionar o mesmo atributo 2 vezes
   if (escolhaAtributo2==escolhaAtributo1) {
    printf("Atenção!O segundo atributo não pode ser igual ao primeiro. Reinicie o jogo! \n");
    return(1);
    
   } else {
    switch(escolhaAtributo2){
        case 1:
        populacao2>populacao1 ? printf("Carta 2 venceu! \n") : populacao1>populacao2 ? printf("Carta 1 venceu! \n") : printf("Empate! \n");
        break;
        case 2:
        area2>area1 ? printf("Carta 2 venceu! \n") : area1>area2 ? printf("Carta 1 venceu! \n") : printf("Empate! \n");
        break;
        case 3:
        PIB2>PIB1 ? printf("Carta 2 venceu! \n") : PIB1>PIB2 ? printf("Carta 1 venceu! \n") : printf("Empate! \n");
        break;
        case 4:
        pontosTuristicos2>pontosTuristicos1 ? printf("Carta 2 venceu! \n") : pontosTuristicos1>pontosTuristicos2 ? printf("Carta 1 venceu! \n") : printf("Empate! \n");
        break;
        case 5:
        densidadePopulacional2<densidadePopulacional1 ? printf("Carta 2 venceu! \n") : densidadePopulacional1<densidadePopulacional2 ? printf("Carta 1 venceu! \n") : printf("Empate! \n");
        break;
        default:
        printf("Opção inválida! Escolham um número de 1 à 5 corresponde ao atributo que desejam ou cancelem a batalha! \n");
        break;
    }

   }
     
   /* Soma dos Atributos: 
        - Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. 
        - A carta com a maior soma vence a rodada. 
        - Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".*/



   /* - Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:
 
        * O nome dos dois países.
        * Os dois atributos usados na comparação. 
        * Os valores de cada atributo para cada carta.
        * A soma dos atributos para cada carta. 
        * Qual carta venceu (ou se houve empate). */

    
    
    return 0;
    
    }