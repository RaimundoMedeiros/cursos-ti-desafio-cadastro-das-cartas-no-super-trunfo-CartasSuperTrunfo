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
    float superPoder1, superPoder2;

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

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Comparação dos atributos
    int vPopulacao = populacao1 > populacao2;
    int vArea = area1 > area2;
    int vPib = pib1 > pib2;
    int vPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int vDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    int vPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int vSuperPoder = superPoder1 > superPoder2;

    // Array para exibir vencedor
    const char *resultado[] = {"Carta 2 venceu (0)", "Carta 1 venceu (1)"};

    // Saída dos resultados:
    printf("\nComparação de Cartas:\n");
    printf("População: %s\n", resultado[vPopulacao]);
    printf("Área: %s\n", resultado[vArea]);
    printf("PIB: %s\n", resultado[vPib]);
    printf("Pontos Turísticos: %s\n", resultado[vPontosTuristicos]);
    printf("Densidade Populacional: %s\n", resultado[vDensidadePopulacional]);
    printf("PIB per Capita: %s\n", resultado[vPibPerCapita]);
    printf("Super Poder: %s\n", resultado[vSuperPoder]);
    printf("\n");

    return 0;
}
