#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gabryella

int main() {
  //Carta 01
  
  char estado[20] = "A";
  char código[40] = "A01";
  char nome[20] = "São Paulo";
  int população = 12325000;
  float área = 1521.11; //Km²
  float pib =  699.28; // bilhões de reais
  int pontos_turisticos = 50;  

  printf("Estado: %s\n", estado);
  scanf("%s", estado);
 
  printf("Código da Carta: %s\n", código); 
 scanf("%s", código);
  
 printf("Nome: %s\n", nome);
 scanf("%s", nome);
 
 printf("População: %d\n", população);
  scanf("%d", &população);
 
  printf("Área em Km2: %.2f\n", área);
 scanf("%f", &área);
 
 printf("PIB: %.2f\n", pib);
 scanf("%f", &pib);

 printf("Pontos Turísticos: %d\n", pontos_turisticos);
 scanf("%d", &pontos_turisticos);

//Carta 02
{
char estado[20] = "B"; 
char codigo[40] = "B02"; 
char nome[20] = "Rio De Janeiro"; 
int populacao =  6748000; 
float área = 1200.25; 
float pib =   300.50; 
int pontos_turisticos = 30; 
  
printf("Estado: %s\n", estado);
scanf("%s", estado);

printf("Código da Carta: %s\n", codigo);
scanf("%s", codigo);

printf("Nome: %s\n", nome); 
scanf("%s", nome);

printf("População: %d\n", populacao);   
scanf("%d", &populacao);

printf("Área em Km2: %.2f\n", área);
scanf("%f", &área);

printf("PIB: %.2f\n", pib);
scanf("%f", &pib);

printf("Pontos Turísticos: %d\n", pontos_turisticos);
scanf("%d", &pontos_turisticos);
}
 
  return 0;

  

}
