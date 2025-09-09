/*  - O jogador deve escolher 2 atributos numéricos DIFERENTES para a comparação de cartas, através de MENUS INTERATIVOS (Switch)
        * O jogador não pode selecionar o mesmo atributo 2 vezes
    - Comparar os atributos (Todos) - Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos.
    - Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada.
    - Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".
    - Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.
    - Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:
 
O nome dos dois países.
 
Os dois atributos usados na comparação.
 
Os valores de cada atributo para cada carta.
 
A soma dos atributos para cada carta.
 
Qual carta venceu (ou se houve empate).
 */

 #include <stdio.h>


int main() {
    
    /* Objetivo: Comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if/else.
        - O Jogador deve escolher um atributo para batalhar.
            * Criar um menu para que o jogador possa escolher o atributo que irá batalhar (Switch).
        - Com o atributo selecionado, é necessário comparar as cartas para descobrir o vencedor (If/else).
            * Tratar excessões = Empate (Estruturas aninhadas)
        - Exibir o resultado
            * Carta vencedora
            * Pais
            * Atributo utilizado
            * Valor 
            * Se foi empate */
             
            


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
    char codigo1[3];                       // A letra do estado seguida de um número 01 á 04.
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

    printf("Insira o país da primeira carta: ");
    scanf(" %s", pais1);

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
    char pais2[10]; 
    char estado2;                        // Uma letra
    char codigo2[3];                     // A letra do estado seguida de um número 01 á 04.
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


     // 2º Cálculo e exibição da densidade populacional e PIB per capita.

    //Cálculo do PIB per capita carta 2.
    PIBPerCapita2 = (PIB2/populacao2);

    //Cálculo da densidade populacional carta 2.
    densidadePopulacional2 = (populacao2/area2);

    //Cálculo do super poder carta 2.
    SuperPoder2 = (float) (populacao2 + area2 + PIB2 + PIBPerCapita2 + pontosTuristicos2);


    //Exibição dos dados da carta 1
    printf("Carta 1 \n");

    printf("País: %s \n", pais1);
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n ", area1);
    printf("PIB: %.2f reais \n ", PIB1);
    printf("Números de pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/Km² \n ", densidadePopulacional1);
    printf("PIB per capita: %.2f reais \n ", PIBPerCapita1);
    printf("Super poder: %.2f \n", SuperPoder1);
    


    //Exibição dos dados da carta 2
    printf("Carta 2 \n");

    printf("País: %s \n", pais2);
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n ", area2);
    printf("PIB: %.2f reais \n ", PIB2);
    printf("Números de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %f hab/Km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", PIBPerCapita2);
    printf("Super poder: %.2f \n", SuperPoder2);


    /* - O jogador deve escolher 2 atributos numéricos DIFERENTES para a comparação de cartas, através de MENUS INTERATIVOS (Switch)
        - O jogador não pode selecionar o mesmo atributo 2 vezes */

    int escolhaAtributo1;
    int escolhaAtributo2;

    printf("Jogadores, escolham o 1º atributo para batalhar! \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos turísticos \n");
    printf("5 - Densidade populacional \n");
    scanf("%d", &escolhaAtributo1);

    switch(escolhaAtributo1){
        case 1:
        printf("Atributo escolhido para a batalha: População! \n");
        break;
        case 2:
        printf("Atributo escolhido para a batalha: Área! \n");
        break;
        case 3:
        printf("Atributo escolhido para a batalha: PIB! \n");
        break;
        case 4:
        printf("Atributo escolhido para a batalha: Pontos turísticos! \n");
        break;
        case 5:
        printf("Atributo escolhido para a batalha: Densidade populacional! \n");
        break;
        default:
        printf("Opção inválida! Escolham um número de 1 à 5 corresponde ao atributo que desejam para batalha! \n");
        break;
    }



    /* Comparação das cartas para descobrir o vencedor.
            * O nome dos dois países.
            * O atributo usado na comparação.
            * Os valores do atributo para cada carta.
            * Qual carta venceu.
            * Em caso de empate, exibir a mensagem "Empate!".
            * Tratar excessões = Empate (Estruturas aninhadas) */

    /* Comparação da população
    if (escolhaAtributo==1) {
        if (populacao1>populacao2){
            printf("A carta 1 venceu! \n");

        } else if (populacao2>populacao1) {
              printf("A carta 2 venceu! \n");

        } else {
            printf("Empate! \n");
        }
    }


    // Comparação da área
    if (escolhaAtributo==2){
        if  (area1>area2) {
            printf("Carta 1 venceu! \n");

        } else if (area2>area1) { 
               printf("Carta 2 venceu! \n");

        } else {
            printf("Empate! \n");
        }
    }


    // Comparação do PIB
    if (escolhaAtributo==3){
        if  (PIB1>PIB2) {
            printf("Carta 1 venceu! \n");

        } else if (PIB2>PIB1) { 
               printf("Carta 2 venceu! \n");

        } else {
            printf("Empate! \n");
        }
    }


    // Comparação dos números de pontos turísticos
    if (escolhaAtributo==4){
        if  (pontosTuristicos1>pontosTuristicos2) {
            printf("Carta 1 venceu!");

        } else if (pontosTuristicos2>pontosTuristicos1) {       
            printf("Carta 2 venceu!");

        } else {
            printf("Empate! \n");
        }
     }


    // Comparação da densidade populacional
    if (escolhaAtributo==5){
        if  (densidadePopulacional1<densidadePopulacional2) {
            printf("Carta 1 venceu!");

        } else if (densidadePopulacional2<densidadePopulacional1) { 
               printf("Carta 2 venceu!");

        } else {
            printf("Empate!");
        }
     }*/
    
    return 0;
    
    }