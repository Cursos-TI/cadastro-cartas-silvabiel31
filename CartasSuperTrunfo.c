#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char  estado[25];
  char carta[10];
  char cidade[25];
  int populacao;
  float area;
  float pib;
  int turismo;

  // Área para entrada de dados

printf("digite o Estado: \n");
scanf ("%s", estado);
printf("digite a Carta: \n");
scanf ("%s", carta);
printf("digite a Cidade: \n");
scanf ("%s", cidade);
printf("digite a População: \n");
scanf ("%d", &populacao);
printf("digite a Área: \n");
scanf ("%f", &area);
printf("digite o PIB: \n"); 
scanf ("%f", &pib);
printf("digite o Turismo: \n");
scanf ("%d", &turismo);

  // Área para exibição dos dados da cidade

printf("Estado: %s\n", estado);
printf("Carta: %s\n", carta);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área: %.2f\n", area);
printf("PIB: %.2f\n", pib);
printf("Turismo: %d\n", turismo);

return 0;
} 
