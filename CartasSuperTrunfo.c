#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[5];
  char codigo1[5];
  char cidade1[50];
  int populacao1;
  float area1;
  float PIB1;
  int pontos1;
 
   char estado2[5];
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int pontos2;
  // Área para entrada de dados

  //INICIO CARTA 01
printf("Digite o estado da carta:\n");
scanf("%s", estado1);

printf("Digite o codigo da carta:\n)";
scanf("%s", codigo1);

printf("Digite a cidade da carta:\n");
scanf("%s", cidade1);

printf("Digite a população da cidade:\n)";
scanf("%s", populacao1);

printf("Digite a area da cidade:\n");
scanf("%s", area1);

printf("Digite o PIB do estado:\n");
scanf("%s", PIB1);

printf("Digite a quantidade de pontos turisticos:\n");
scanf("%s", pontos1);

 //FINAL CARTA 01
  // Área para exibição dos dados da cidade

return 0;
} 
