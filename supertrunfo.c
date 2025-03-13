#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], estado2[50];
    char codigo1[30], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    //Carta 01
    printf("Digite a sigla do Estado (ex: SP):\n");
    scanf(" %49s", estado1);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf(" %29s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %49s", cidade1);

    printf("Digite a populacao:\n");
    scanf(" %d", &populacao1);

    printf("Digite a area em km2:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhoes de reais:\n");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf(" %d", &pontos_turisticos1);


    //Carta 02
    printf("Digite a sigla do Estado:\n");
    scanf(" %49s", estado2);

    printf("Digite o codigo da carta:\n");
    scanf(" %49s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %49s", cidade2);

    printf("Digite a populacao:\n");
    scanf(" %d", &populacao2);

    printf("Digite a area em km2:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhoes de reais:\n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf(" %d", &pontos_turisticos2);


    //saída de dados - carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    //saída de dados - carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
 
    return 0;

}