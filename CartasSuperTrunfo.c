#include <stdio.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct
{
    char estado;
    char codigo[4];
    char nome[30];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
} Cidade;

// Função para exibir o menu de escolha de atributos
int escolherAtributo(int atributoJaEscolhido)
{
    int opcao;
    printf("\nEscolha um atributo para comparação:\n");
    for (int i = 1; i <= 6; i++)
    {
        if (i != atributoJaEscolhido)
        { // Exibe apenas os atributos disponíveis
            printf("%d - ", i);
            switch (i)
            {
            case 1:
                printf("Nome da cidade\n");
                break;
            case 2:
                printf("População\n");
                break;
            case 3:
                printf("Área\n");
                break;
            case 4:
                printf("PIB\n");
                break;
            case 5:
                printf("Número de Pontos Turísticos\n");
                break;
            case 6:
                printf("Densidade Demográfica\n");
                break;
            }
        }
    }
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    return opcao;
}

void exibirAtributo(int opcao)
{
    switch (opcao)
    {
    case 1:
        printf("Nome da cidade\n");
        break;
    case 2:
        printf("População\n");
        break;
    case 3:
        printf("Área\n");
        break;
    case 4:
        printf("PIB\n");
        break;
    case 5:
        printf("Número de Pontos Turísticos\n");
        break;
    case 6:
        printf("Densidade Demográfica\n");
        break;
    }
}

// Função para acessar os valores dinamicamente
float acessarValor(Cidade cidade, int opcao)
{
    switch (opcao)
    {
    case 2:
        return (float)cidade.populacao;
    case 3:
        return cidade.area;
    case 4:
        return cidade.pib;
    case 5:
        return (float)cidade.pontosTuristicos;
    case 6:
        return cidade.densidadePopulacional;
    default:
        return -1;
    }
}

// Função para comparar atributos e exibir o resultado
void compararAtributos(Cidade c1, Cidade c2, int opcao)
{
    float valor1 = acessarValor(c1, opcao);
    float valor2 = acessarValor(c2, opcao);

    exibirAtributo(opcao);
    printf("Cidade 1 (%s): %.2f\n", c1.nome, valor1);
    printf("Cidade 2 (%s): %.2f\n", c2.nome, valor2);

    if (opcao == 6)
    { // Densidade Demográfica (menor valor vence)
        if (valor1 < valor2)
        {
            printf("Vencedor do confronto individual: %s\n", c1.nome);
        }
        else if (valor2 < valor1)
        {
            printf("Vencedor do confronto individual: %s\n", c2.nome);
        }
        else
        {
            printf("Empate!\n");
        }
    }
    else
    { // Outros atributos (maior valor vence)
        if (valor1 > valor2)
        {
            printf("Vencedor do confronto individual: %s\n", c1.nome);
        }
        else if (valor2 > valor1)
        {
            printf("Vencedor do confronto individual: %s\n", c2.nome);
        }
        else
        {
            printf("Empate!\n");
        }
    }
}

int main()
{
    // Declaração de um array de cidades
    Cidade cidades[2];

    // Variável para armazenar a opção escolhida pelo usuário
    int opcao[2];

    // Entrada de Dados para as cidades
    for (int i = 0; i < 2; i++)
    {
        printf("Digite os dados da carta %d:\n", i + 1);
        printf("Digite o estado da carta (A-H): ");
        scanf(" %c", &cidades[i].estado);
        printf("Digite o código da carta (ex: A01, B03): ");
        scanf(" %3s", cidades[i].codigo);
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]%*c", cidades[i].nome);
        printf("Digite a população da cidade: ");
        scanf("%lu", &cidades[i].populacao);
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &cidades[i].area);
        printf("Digite o PIB da cidade (em bilhões de reais): ");
        scanf("%f", &cidades[i].pib);
        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &cidades[i].pontosTuristicos);

        // Cálculo da densidade populacional
        cidades[i].densidadePopulacional = (float)cidades[i].populacao / cidades[i].area;
    }

    // Menu Interativo
    opcao[0] = escolherAtributo(0);
    opcao[1] = escolherAtributo(opcao[0]);

    // Comparação dos atributos
    for (int i = 0; i < 2; i++)
    {
        compararAtributos(cidades[0], cidades[1], opcao[i]);
    }

    // Exibição do vencedor final

    printf("\nVencedor Final:\n");
    printf("Cidade 1: %s\n", cidades[0].nome);
    printf("Cidade 2: %s\n", cidades[1].nome);
    printf("Atributos usados na comparação:\n");
    exibirAtributo(opcao[0]);
    exibirAtributo(opcao[1]);
    printf("Valores:\n");
    printf("Cidade 1 (%s): %.2f, %.2f\n", cidades[0].nome, acessarValor(cidades[0], opcao[0]), acessarValor(cidades[0], opcao[1]));
    printf("Cidade 2 (%s): %.2f, %.2f\n", cidades[1].nome, acessarValor(cidades[1], opcao[0]), acessarValor(cidades[1], opcao[1]));
    printf("Soma dos atributos:\n");
    printf("Cidade 1 (%s): %.2f\n", cidades[0].nome, acessarValor(cidades[0], opcao[0]) + acessarValor(cidades[0], opcao[1]));
    printf("Cidade 2 (%s): %.2f\n", cidades[1].nome, acessarValor(cidades[1], opcao[0]) + acessarValor(cidades[1], opcao[1]));
    if (acessarValor(cidades[0], opcao[0]) + acessarValor(cidades[0], opcao[1]) > acessarValor(cidades[1], opcao[0]) + acessarValor(cidades[1], opcao[1]))
    {
        printf("Vencedor da rodada: %s\n", cidades[0].nome);
    }
    else if (acessarValor(cidades[1], opcao[0]) + acessarValor(cidades[1], opcao[1]) > acessarValor(cidades[0], opcao[0]) + acessarValor(cidades[0], opcao[1]))
    {
        printf("Vencedor da rodada: %s\n", cidades[1].nome);
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}
