#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[20];
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;

    // Área para entrada de dados
    printf("Bem vindo ao SuperTrunfo\n");
    printf("Coloque as inforções abaixo\n");
    
    //Estado
    printf("Qual o Estado: \n");
    scanf("%s", &estado);
    
    //Código
    printf("Digite qual o Código (Ex: A01, A02, B01, B02: \n");
    scanf("%s", codigo);
    
    //Nome da Cidade
    printf("Qual a Cidade: \n");
    scanf("%s", &nome_cidade);
    
    //População
    printf("Qual a População: \n");
    scanf("%d", &populacao);

    //Área
    printf("Qual a área: \n");
    scanf("%f", &area);

    //PIB
    printf("Qual o PIB: \n");
    scanf("%f", &pib);

    //Pontos Turisticos
    printf("Quantos pontos turisticos tem a cidade: \n");
    scanf("%d", &numero_pontos_turisticos);


  // Área para exibição dos dados da cidade
    printf("------------------------------------------------");
    printf("Cadastro de Cartas\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", numero_pontos_turisticos);
        
return 0;
} 
