#include <stdio.h>

int main()
{
    // Declaração de Dados
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de Dados carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (ex: A01, B03): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", cidade1); // Lê até o '\n', incluindo espaços
    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de Dados carta 2
    printf("Digite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (ex: A01, B03): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", cidade2); // Lê até o '\n', incluindo espaços
    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Saída de Dados carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Saída de Dados carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
