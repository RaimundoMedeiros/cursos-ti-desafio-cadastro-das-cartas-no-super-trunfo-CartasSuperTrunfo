#include <stdio.h>

#define BILHAO 1000000000 // Define 1 bilhão como constante

int main()
{
    // Declaração de Dados
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de Dados carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (ex: A01, B03): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]%*c", cidade1);
    printf("Digite a população da cidade da carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de Dados carta 2
    printf("Digite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (ex: A01, B03): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]%*c", cidade2);
    printf("Digite a população da cidade da carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da densidade e PIB per capita
    densidadePopulacional1 = (float)populacao1 / area1;

    densidadePopulacional2 = (float)populacao2 / area2;

    // Multiplica o PIB por 1 bilhão para converter para reais
    pibPerCapita1 = (pib1 * BILHAO) / (float)populacao1;

    pibPerCapita2 = (pib2 * BILHAO) / (float)populacao2;

    // Menu Interativo
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - Nome da cidade\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // Comparação do atributo selecionado
    switch(opcao)
    {
        case 1:
            printf("Comparando pelo Nome da cidade:\n");
            printf("Carta 1: %s\n", cidade1);
            printf("Carta 2: %s\n", cidade2);
            break;
        case 2:
            printf("Comparando pela População:\n");
            printf("Carta 1 (%s): %lu\n", cidade1, populacao1);
            printf("Carta 2 (%s): %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("A carta 1 (%s) vence!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("A carta 2 (%s) vence!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Comparando pela Área:\n");
            printf("Carta 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("A carta 1 (%s) vence!\n", cidade1);
            else if (area2 > area1)
                printf("A carta 2 (%s) vence!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Comparando pelo PIB:\n");
            printf("Carta 1 (%s): %.2f bilhões de reais\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("A carta 1 (%s) vence!\n", cidade1);
            else if (pib2 > pib1)
                printf("A carta 2 (%s) vence!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Comparando pelo Número de Pontos Turísticos:\n");
            printf("Carta 1 (%s): %d pontos turísticos\n", cidade1, pontosTuristicos1);
            printf("Carta 2 (%s): %d pontos turísticos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("A carta 1 (%s) vence!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("A carta 2 (%s) vence!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("Comparando pela Densidade Demográfica:\n");
            printf("Carta 1 (%s): %.2f habitantes/km²\n", cidade1, densidadePopulacional1);
            printf("Carta 2 (%s): %.2f habitantes/km²\n", cidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("A carta 1 (%s) vence!\n", cidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("A carta 2 (%s) vence!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }


    return 0;
}
