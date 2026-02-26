#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int pontosTuristicos1, pontosTuristicos2, populacao1, populacao2;
  float area1, area2;
  double pib1, pib2;
  char codigoCarta1[4], codigoCarta2[4];
  char cidade1[20], cidade2[20];
  char estado1[3], estado2[3];

  // Área para entrada de dados

  printf("Vamos preparar a primeira carta!\nNão se preocupe com a veracidade dos dados, é só um jogo!\n");
  
  printf("Digite uma letra, de A a H, para representar o Estado:\n");
  scanf("%s", estado1);
  
  printf("Digite a mesma letra de antes, agora seguida de um número de 01 a 04, ex: H03\n");
  scanf("%s", codigoCarta1);
  
  printf("Digite o nome da cidade, evitando nomes compostos:\n");
  scanf("%s", cidade1);
  
  printf("Quantas pessoas compõe a população dessa cidade?\n");
  scanf("%i", &populacao1);
  
  printf("Qual é a área dessa cidade em quilometros quadrados?\n");
  scanf("%f", &area1);
  
  printf("Quanto é o PIB dessa cidade em reais?\n");
  scanf("%lf", &pib1);
  
  printf("E quantos pontos turisticos há nessa cidade?\n");
  scanf("%i", &pontosTuristicos1);

  printf("Agora para a segunda carta!\nNovamente, não precisa incluir dados verdadeiros!\n");
  
  printf("Digite uma letra, de A a H, para representar o Estado:\n");
  scanf("%s", estado2);
  
  printf("Digite a mesma letra de antes, agora seguida de um número de 01 a 04, ex: B02\n");
  scanf("%s", codigoCarta2);
  
  printf("Digite o nome da cidade, evitando nomes compostos:\n");
  scanf("%s", cidade2);
  
  printf("Quantas pessoas compõe a população dessa cidade?\n");
  scanf("%i", &populacao2);
  
  printf("Qual é a área dessa cidade em quilometros quadrados?\n");
  scanf("%f", &area2);
  
  printf("Quanto é o PIB dessa cidade em reais?\n");
  scanf("%lf", &pib2);
  
  printf("E quantos pontos turisticos há nessa cidade?\n");
  scanf("%i", &pontosTuristicos2);
  
  // Área para exibição dos dados da cidade

  printf("Carta 1:\nEstado: %1s\nCódigo: %3s\nNome da Cidade: %s\nPopulação: %i pessoas\nÁrea: %.2f km²\nPIB: R$ %.2f\nNúmero de Pontos Turísticos: %i \n", estado1, codigoCarta1, cidade1, populacao1, area1, pib1, pontosTuristicos1);

  printf("Carta 2:\nEstado: %1s\nCódigo: %3s\nNome da Cidade: %s\nPopulação: %i pessoas\nÁrea: %.2f km²\nPIB: R$ %.2f\nNúmero de Pontos Turísticos: %i \n", estado2, codigoCarta2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
  
return 0;
} 
