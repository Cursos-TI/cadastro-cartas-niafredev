#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[5]; char codigo1[5]; char cidade1[50];int populacao1; float area1; float PIB1; int pontos1;
  char estado2[5]; char codigo2[5]; char cidade2[50]; int populacao2; float area2; float PIB2; int pontos2;
  // Área para entrada de dados

  printf("BEM VINDO\n, insira dados da carta 1\\n");
  //INICIO CARTA 01
printf("Digite o estado da carta:\n");scanf("%s", estado1);printf("Digite o codigo da carta:\n");scanf("%s", codigo1);
printf("Digite a cidade da carta:\n");scanf("%s", &cidade1);printf("Digite a população da cidade:\n");scanf("%d", &populacao1);
printf("Digite a area da cidade:\n");scanf("%f", &area1);printf("Digite o PIB do estado:\n");scanf("%f", &PIB1);printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d", &pontos1);
 //FINAL CARTA 01
printf("Pronto, agora a carta 2\n")
 //INICIO CARTA 02
printf("Digite o estado da carta:\n");scanf("%s", estado2);printf("Digite o codigo da carta:\n");scanf("%s", codigo2);
printf("Digite a cidade da carta:\n");scanf("%s", cidade2);printf("Digite a população da cidade:\n");scanf("%d", &populacao2);
printf("Digite a area da cidade:\n");scanf("%f", &area2);printf("Digite o PIB do estado:\n");scanf("%f", &PIB2);
printf("Digite a quantidade de pontos turisticos:\n");scanf("%d", &pontos2);
 //FINAL CARTA 02

  // Área para exibição dos dados da cidade
printf("Carta 01:\n");
printf("Estado %s\n Codigo:%s\n Cidade:%s\n", estado1, codigo1, cidade1); 
printf("Populacao: %d\n Area: %.3f\n PIB: %.2f\n Pontos turisticos: %d\n", populacao1, area1 , PIB1, pontos1);

printf("Carta 02:\n");
printf("Estado %s\n Codigo:%s\n Cidade:%s", estado2, codigo2, cidade2); 
printf("Populacao: %d\n Area: %.3f\n PIB: %.2f\n Pontos turisticos: %d\n", populacao2, area2 , PIB2, pontos2); 
return 0;
} 
