#include <stdio.h>

int main() {
    // Ajuste de tipos: unsigned long int para populações grandes
    char estado1[25], codigo1[5], cidade1[50];
    unsigned long int populacao1; 
    float area1, PIB1, densidade1, PIBpercapita1, superPoder1;
    int pontos1;

    char estado2[25], codigo2[5], cidade2[50];
    unsigned long int populacao2; 
    float area2, PIB2, densidade2, PIBpercapita2, superPoder2;
    int pontos2;

    // --- ENTRADA DE DADOS (CARTA 1) ---
    printf("BEM VINDO, insira dados da carta 1\n");
    printf("Digite o estado (ex: A): "); scanf("%s", estado1);
    printf("Digite o codigo (ex: A01): "); scanf("%s", codigo1);
    printf("Digite a cidade: "); scanf("%s", cidade1);
    printf("Digite a população: "); scanf("%lu", &populacao1); // %lu para unsigned long
    printf("Digite a area: "); scanf("%f", &area1);
    printf("Digite o PIB: "); scanf("%f", &PIB1);
    printf("Digite pontos turisticos: "); scanf("%d", &pontos1);

    // --- ENTRADA DE DADOS (CARTA 2) ---
    printf("\nAgora os dados da carta 2\n");
    printf("Digite o estado: "); scanf("%s", estado2);
    printf("Digite o codigo: "); scanf("%s", codigo2);
    printf("Digite a cidade: "); scanf("%s", cidade2);
    printf("Digite a população: "); scanf("%lu", &populacao2);
    printf("Digite a area: "); scanf("%f", &area2);
    printf("Digite o PIB: "); scanf("%f", &PIB2);
    printf("Digite pontos turisticos: "); scanf("%d", &pontos2);

    // --- CÁLCULOS ---
    densidade1 = (float)populacao1 / area1;
    PIBpercapita1 = (PIB1 * 1000000000) / (float)populacao1; // Ajustado para PIB em bilhões

    densidade2 = (float)populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / (float)populacao2;

    superPoder1 = (float)populacao1 + area1 + PIB1 + (float)pontos1 + PIBpercapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + PIB2 + (float)pontos2 + PIBpercapita2 + (1.0f / densidade2);

    // --- EXIBIÇÃO E COMPARAÇÃO ---
    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpercapita1 > PIBpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}