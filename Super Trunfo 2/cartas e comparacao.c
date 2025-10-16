#include <stdio.h>

int main() {

    // Dados da primeira carta
    char estado[] = "A";
    char codigo_da_carta[] = "A01";
    char Nome_da_Cidade[] = "São Paulo";
    int Populacao = 12325000;
    float Area = 1521.0;
    float Pib = 699280000000.0;
    int Numero_de_pontos_Turisticos = 50;

    // Dados da segunda carta
    char estado2[] = "B";
    char codigo_da_carta2[] = "B02";
    char Nome_da_Cidade2[] = "Rio de Janeiro";
    int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float Pib2 = 300000000000.50;
    int Numero_de_pontos_Turisticos2 = 30;

    // Cálculo de Densidade Populacional e PIB per capita
    float Densidade_Populacional = Populacao / Area;
    float Pib_per_capita = Pib / Populacao;

    float Densidade_Populacional2 = Populacao2 / Area2;
    float Pib_per_capita2 = Pib2 / Populacao2;

    // Exibição dos dados das cartas
    printf("=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: R$ %.2f\n", Pib);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per capita: R$ %.2f\n", Pib_per_capita);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per capita: R$ %.2f\n", Pib_per_capita2);

    // Comparação das cartas
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", Nome_da_Cidade, Populacao);
    printf("Carta 2 - %s: %d\n", Nome_da_Cidade2, Populacao2);
    if (Populacao > Populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n", Nome_da_Cidade);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", Nome_da_Cidade2);

    printf("\nComparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s: %.2f km²\n", Nome_da_Cidade, Area);
    printf("Carta 2 - %s: %.2f km²\n", Nome_da_Cidade2, Area2);
    if (Area > Area2)
        printf("Resultado: Carta 1 (%s) venceu!\n", Nome_da_Cidade);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", Nome_da_Cidade2);

    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s: R$ %.2f\n", Nome_da_Cidade, Pib);
    printf("Carta 2 - %s: R$ %.2f\n", Nome_da_Cidade2, Pib2);
    if (Pib > Pib2)
        printf("Resultado: Carta 1 (%s) venceu!\n", Nome_da_Cidade);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", Nome_da_Cidade2);

    return 0;
}
