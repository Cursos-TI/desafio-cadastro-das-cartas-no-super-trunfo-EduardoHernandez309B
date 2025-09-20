#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este programa cadastra duas cartas do jogo Super Trunfo (cidades),
// lendo dados do usuário e exibindo-os de forma organizada.

int main()
{
    // -------------------------
    // Declaração das variáveis da Carta 1
    // -------------------------
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // -------------------------
    // Declaração das variáveis da Carta 2
    // -------------------------
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // -------------------------
    // Entrada de dados da Carta 1
    // -------------------------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // -------------------------
    // Entrada de dados da Carta 2
    // -------------------------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // -------------------------
    // Cálculo de Densidade demográfica, PIB per capita e super poder carta 1 e 2
    // -------------------------

    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;
    float inversoDensidade1 = 1.0 / densidadePopulacional1;
    float inversoDensidade2 = 1.0 / densidadePopulacional2;

    float pibPerCapita1 = pib1 / (float)populacao1;
    float pibPerCapita2 = pib2 / (float)populacao2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    // -------------------------
    // Exibição das Cartas
    // -------------------------
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Demográfica: %.2f Habitantes/Km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %.2f Habitantes/Km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // -------------------------
    // Comparação de cartas
    // -------------------------

    printf("\nComparação de cartas:\n");
    printf("\nCarta 1 - %s\n", cidade1);
    printf("Carta 2 - %s\n", cidade2);

    // -------------------------
    // População
    // -------------------------
    printf("\nPopulação: %s\n",
        (populacao1 > populacao2) ? "Carta 1 venceu (1)" :
        (populacao2 > populacao1) ? "Carta 2 venceu (0)" :
        "Empate!");

    // -------------------------
    // Área
    // -------------------------
    printf("\nÁrea: %s\n",
        (area1 > area2) ? "Carta 1 venceu (1)" :
        (area2 > area1) ? "Carta 2 venceu (0)" :
        "Empate!");

    // -------------------------
    // PIB
    // -------------------------
    printf("\nPIB: %s\n",
        (pib1 > pib2) ? "Carta 1 venceu (1)" :
        (pib2 > pib1) ? "Carta 2 venceu (0)" :
        "Empate!");

    // -------------------------
    // Pontos Turísticos
    // -------------------------
    printf("\nPontos Turísticos: %s\n",
        (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 venceu (1)" :
        (pontosTuristicos2 > pontosTuristicos1) ? "Carta 2 venceu (0)" :
        "Empate!");

    // -------------------------
    // Densidade Populacional
    // -------------------------
    printf("\nDensidade Populacional: %s\n",
        (inversoDensidade1 > inversoDensidade2) ? "Carta 1 venceu (1)" :
        (inversoDensidade2 > inversoDensidade1) ? "Carta 2 venceu (0)" :
        "Empate!");

    // -------------------------
    // PIB per Capita
    // -------------------------
    printf("\nPIB per Capita: %s\n",
        (pibPerCapita1 > pibPerCapita2) ? "Carta 1 venceu (1)" :
        (pibPerCapita2 > pibPerCapita1) ? "Carta 2 venceu (0)" :
        "Empate!");

    // -------------------------
    // Super poder
    // -------------------------
    printf("\nSuper Poder: %s\n",
        (superPoder1 > superPoder2) ? "Carta 1 venceu (1)" :
        (superPoder2 > superPoder1) ? "Carta 2 venceu (0)" :
        "Empate!");

    return 0;
}
