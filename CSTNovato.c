#include <stdio.h>

int main()
{
    // Cadastro do código das cartas
    char estados[2];
    int cidades[2];
    char cartas[2][4];

    // Cadastro dos atributos das cartas
    int populacao[2];
    float area[2];
    float pib[2];
    int pontos_turisticos[2];

    // Cadastro da carta 1
    printf("Escolha o estado da primeira carta de A até H: ");
    scanf(" %c", &estados[0]);
    printf("Escolha o código da primeira cidade de 1 a 4: ");
    scanf("%d", &cidades[0]);
    sprintf(cartas[0], "%c%02d", estados[0], cidades[0]);
    printf("Digite o tamanho da população da cidade: ");
    scanf("%d", &populacao[0]);
    printf("Digite a área da cidade: ");
    scanf("%f", &area[0]);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib[0]);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos[0]);

    // Cadastro da carta 2
    printf("Escolha o estado da segunda carta de A até H: ");
    scanf(" %c", &estados[1]);
    printf("Escolha o código da cidade de 1 a 4: ");
    scanf("%d", &cidades[1]);
    sprintf(cartas[1], "%c%02d", estados[1], cidades[1]);
    printf("Digite o tamanho da população da cidade: ");
    scanf("%d", &populacao[1]);
    printf("Digite a área da cidade: ");
    scanf("%f", &area[1]);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib[1]);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos[1]);

    // Exibição da Primeira Carta
    printf("\n=============================\n");
    printf("|         SUPER TRUNFO      |\n");
    printf("|---------------------------|\n");
    printf("| Código: %-20s\n", cartas[0]); 
    printf("| População: %-15d\n", populacao[0]); 
    printf("| Área: %-20.2f\n", area[0]); 
    printf("| PIB: %-21.2f\n", pib[0]); 
    printf("| Pontos Turísticos: %-8d\n", pontos_turisticos[0]); 
    printf("=============================\n");

    // Exibição da Segunda Carta
    printf("\n=============================\n");
    printf("|         SUPER TRUNFO      |\n");
    printf("|---------------------------|\n");
    printf("| Código: %-20s\n", cartas[1]); 
    printf("| População: %-15d\n", populacao[1]); 
    printf("| Área: %-20.2f\n", area[1]); 
    printf("| PIB: %-21.2f\n", pib[1]); 
    printf("| Pontos Turísticos: %-8d\n", pontos_turisticos[1]); 
    printf("=============================\n");

    // Não consegui deixar bonitinho com a lateral fechada sem desalinhar dependendo dos valores :C

    return 0;
}
