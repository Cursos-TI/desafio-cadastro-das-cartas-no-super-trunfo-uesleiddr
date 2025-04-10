#include <stdio.h>

int main() {

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int pontoturistico1, pontoturistico2;
    float populacao1, populacao2; 
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;

    // Coleta da carta 1
    printf("Digite o estado (UF): ");
    scanf("%2s", estado1);
    
    printf("Digite o código: ");
    scanf("%3s", codigo1);

    printf("Digite a cidade (sem espaço): ");
    scanf("%19s", cidade1);

    printf("Digite o número de habitantes: ");
    scanf("%f", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico1);

    // Coleta da carta 2
    printf("\nAgora vamos registrar as informações da carta 2\n");

    printf("Digite o estado (UF): ");
    scanf("%2s", estado2);

    printf("Digite o código: ");
    scanf("%3s", codigo2);

    printf("Digite a cidade (sem espaço): ");
    scanf("%19s", cidade2);

    printf("Digite o número de habitantes: ");
    scanf("%f", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico2);

    // Saída formatada
    printf("\n================ CARTA 1 ================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontoturistico1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 * 1000000000 / populacao1; // Convertendo bilhões para reais

    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);

    printf("\n================ CARTA 2 ================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontoturistico2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000 / populacao2;

    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);

    return 0;
}
