#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   char estado1,estado2, codigo[5],codigo2[5],nomedcidade2[20], nomedcidade[20], Carta1, Carta2;
   int turisticos2, turisticos;
   unsigned long int populacao,populacao2;
   float area,area2,pib2, pib, densidade1, densidade2,percapita,percapita2, superPoder1, superPoder2;
  // Área para entrada de dados

    printf("CARTA 1\n");
  printf(" Qual estado:  \n ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da sua carta:\n");
  scanf("%s", codigo);

   printf("Digite o nome da cidade:\n"); 
   scanf( "%s", nomedcidade);

  printf("Digite a populacao da cidade:\n");
  scanf("%lu", &populacao);

  printf("Digite a area da cidade:\n");
  scanf("%f", &area);

  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &turisticos);

   printf("CARTA 2\n");
  printf(" Qual estado:  \n ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da sua carta:\n");
  scanf("%s", codigo2);

   printf("Digite o nome da cidade:\n"); 
   scanf( "%s", nomedcidade2);

  printf("Digite a populacao da cidade:\n");
  scanf("%lu", &populacao2);

  printf("Digite a area da cidade:\n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &turisticos2);

  densidade1 = (float) (populacao / area);
  densidade2 = (float) (populacao2 / area2);

  percapita = (float) (pib / populacao);
  percapita2 = (float) (pib2 / populacao2);

   superPoder1 = populacao + area + pib + turisticos + percapita + (1 / densidade1);
   superPoder2 = populacao2 + area2 + pib2 + turisticos2 + percapita2 + (1 / densidade2);

  // Área para exibição dos dados da cidade
   printf("CARTA 1\n");
   printf("Estado: %c\n", estado1);
   printf("Codigo: %s\n", codigo);
   printf("Nome da Cidade: %s\n", nomedcidade);
   printf("Populacao: %lu\n", populacao);
   printf("Area: %.2f km\n", area);
   printf("PIB: %.2f Bilhoes\n", pib);
   printf("Numero de Pontos Turisticos: %d\n", turisticos);
   printf("Densidade Populacional: %.3f\n", densidade1);
   printf("PIB per Capita:%fReais\n", percapita);

  
   printf("CARTA 2\n");
   printf("Estado: %c\n", estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", nomedcidade2);
   printf("Populacao: %lu\n", populacao2);
   printf("Area: %.2f km\n", area2);
   printf("PIB: %.2f Bilhoes\n", pib2);
   printf("Numero de Pontos Turisticos: %d\n", turisticos2);
   printf("Densidade Populacional: %.3f\n", densidade2);
   printf("PIB per Capita:%f Reais\n", percapita2);


   printf("COMPARAÇÃO DE CARTAS\n:");
   printf("Populacao: %d\n", populacao > populacao2);
   printf("Area: %d\n", area > area2);
   printf("Pib: %d\n", pib > pib2);
   printf("Pontos Turisticos: %d\n", turisticos > turisticos2);
   printf("Densidade Populacional: %d\n", densidade1 > densidade2);
   printf("PIB per capita: %d\n", percapita > percapita2);
   printf("Super Poder: %d\n", superPoder1 > superPoder2);

return 0;
} 
