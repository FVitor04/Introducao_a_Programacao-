#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"Portuguese_Brazil");
//Carta1
 char estado1;
 char codigo1[4];
 char cidade1[50];
 unsigned long int populacao1;
 float area1,pib1;
 int pontosturisticos1;
 float densidadepopu1;
 float pibpercapital1;
 float superpoder1;
 
 //Carta2
 char estado2;
 char codigo2[4];
 char cidade2[50];
 unsigned long int populacao2;
 float area2,pib2;
 int pontosturisticos2;
 float densidadepopu2;
 float pibpercapital2;
 float superpoder2;
 
// Coletando os dados da Carta1
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  
  // EspaÃ§o antes de %c para consumir o caractere de nova linha pendente
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);  
  // Leitura de uma linha completa com espaços
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);
    //Calculos
    densidadepopu1 = (populacao1 / area1);
    pibpercapital1 = (pib1 * 1000000000/ populacao1 );
    //Resultos dos Calculos
    printf("Densidade Populacional: %.2f hab/km\n ", densidadepopu1 );
    printf("PIB per Capita: %.2f reais\n", pibpercapital1);
    //Calculo Super Poder Carta1
    float dendensidadepopu1_inverso = 1 / densidadepopu1;
    superpoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapital1 + dendensidadepopu1_inverso);
    printf("Super Poder: %.2f\n",superpoder1);
   
    

   

    // Coletando os dados da Carta2
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);  
  // Espaço antes de %c para consumir o caractere de nova linha pendente
    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);  
  // Leitura de uma linha completa com espaços
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);
    //Calculos
    densidadepopu2 = (populacao2 / area2);
    pibpercapital2 = (pib2 * 1000000000 / populacao2 );
    //Resultos dos Calculos
    printf("Densidade Populacional: %.2f hab/km\n ", densidadepopu2 );
    printf("PIB per Capita: %.2f reais\n", pibpercapital2);
    //Calculo Super Poder Carta2
    float dendensidadepopu2_inverso = 1 / densidadepopu2;
    superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapital2 + dendensidadepopu2_inverso);
    printf("Super Poder: %.2f\n",superpoder2);
    

    // Exibição dos dados da Carta1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km\n",area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n ", densidadepopu1 );
    printf("PIB per Capita: %.2f reais\n", pibpercapital1);
    printf("Super Poder: %.2f\n",superpoder1);
   
    // // Exibição dos dados da Carta2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidadepopu2);
    printf("PIB per Capita: %.2f reais\n", pibpercapital2);
    printf("Super Poder: %.2f\n",superpoder2);
    
    //Comparações e Resultados das Cartas
    printf("\nComparações de Cartas:\n");
        printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
        printf("Área: Carta 1 venceu (%d)\n",area1 > area2);
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n",pontosturisticos1 > pontosturisticos2);
        printf("Densidade Populacional: Carta 2 venceu (%d)\n",densidadepopu1 < densidadepopu2 );
        printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapital1 > pibpercapital2);
        printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);
        
    
    return 0;
}