#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], estado2[50]; strcpy(estado1, "SP"); strcpy(estado2, "RJ");
    char código1[30], código2[50]; strcpy(código1, "A01"); strcpy(código2, "B02");
    char cidade1[50], cidade2[50]; strcpy(cidade1, "São Paulo"); strcpy(cidade2, "Rio de Janeiro");
    int população1, população2; população1 = 12325000; população2 = 6748000;
    float área1, área2; área1 = 1521.11; área2 =  1200.25;
    float pib1, pib2; pib1 =  699.28 ; pib2 = 300.50;
    int pontos_turísticos1, pontos_turísticos2; pontos_turísticos1 = 50; pontos_turísticos2 = 30;

//Carta 01

printf("Digite a sigla do Estado ( ex: SP):\n");
scanf(" %2s", strcpy(estado1, "SP"));

printf("Digite o código da carta (ex: A01):\n");
scanf(" %s", strcpy(código1, "A01"));

//saída de dados


printf("A cidade é: %s\n", cidade1);


printf("População:%d\n", população1);


printf("Área em km2:%f\n", área1);

printf("PIB:%f bilhões de reais\n", pib1);


printf("Pontos turísticos:%d\n", pontos_turísticos1);


//Carta 02

printf("Digite a sigla do Estado\n");
scanf(" %s", strcpy(estado2, "RJ"));

printf("Digite o código da carta\n");
scanf(" %s", strcpy(código2, "B02"));

// saída de dados
printf("A cidade é:%s\n", cidade2);

printf("População:%d\n", população2);


printf("Área em km2:%f\n", área2);

printf("PIB:%fbilhões de reais\n", pib2);


printf("Pontos Turísticos:%d\n", pontos_turísticos2);

//carta 1
printf("carta 1\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", código1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", população1);
printf("Área: %f\n", área1);
printf("PIB: %f\n", pib1);
printf("Pontos turísticos: %d\n", pontos_turísticos1);

//carta 2

printf("carta 2\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", código2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", população2);
printf("Área: %f\n", área2);
printf("PIB: %f\n", pib2);
printf("Pontos turísticos: %d\n", pontos_turísticos2);

	return 0;
}