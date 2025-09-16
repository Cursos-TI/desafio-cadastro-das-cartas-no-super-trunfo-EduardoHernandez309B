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

    float densidadeDemografica1 = populacao1 / area1;
    float densidadeDemografica2 = populacao2 / area2;
    float inversoDensidade1 = 1.0 / densidadeDemografica1;
    float inversoDensidade2 = 1.0 / densidadeDemografica2;

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
    printf("Densidade Demográfica: %.2f Habitantes/Km²\n", densidadeDemografica1);
    printf("PIB per capita: %f\n", pibPerCapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %.2f Habitantes/Km²\n", densidadeDemografica2);
    printf("PIB per capita: %f\n", pibPerCapita2);

    // -------------------------
    // Comparação de cartas
    // -------------------------

    printf("\nComparação de cartas (Atributo: População)\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1)
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else
    {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
