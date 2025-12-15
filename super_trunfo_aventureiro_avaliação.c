#include <stdio.h>

    int main(){

        char estado1[20];
        char codigo1[4]; //Ex: "A01", "B02"
        char nome_cidade1[50]; //tamanho suficiente
        int populacao1;
        float area1;
        float pib1;
        int pontos_turisticos1;
        float densidade_populacional1;
        float pib_per_capito1;

        char estado2[20];
        char codigo2[4]; //Ex: "A01", "B02"
        char nome_cidade2[50]; //tamanho suficiente
        int populacao2;
        float area2;
        float pib2;
        int pontos_turisticos2;
        float densidade_populacional2;
        float pib_per_capito2;
             

        //primeira carta
        printf("Entre com os dados da primeira carta \n");
        printf("Digite o Estado: \n");
        scanf("%s", &estado1);

        printf("Qual o Código (Ex: A01, B03): \n");
        scanf("%s", codigo1);

        printf("Nome da Cidade: \n");
        scanf("%s", &nome_cidade1);

        printf("Qual a População: \n");
        scanf("%d", &populacao1);        

        printf("Qual o Área: \n");
        scanf("%f", &area1);

        printf("Qual o PIB: \n");
        scanf("%f", &pib1);

        printf("Quantos Pontos turisticos: \n");
        scanf("%d", &pontos_turisticos1);

        printf("Qual a densidade Populacional: \n");
        scanf("%f", &densidade_populacional1);

        printf("Qual o PIB: \n");
        scanf("%f", &pib_per_capito1);

      
        //segunda carta

        printf("Entre com os dados da segunda carta \n");
        printf("Digite o Estado: \n");
        scanf("%s", &estado2);

        printf("Qual o Código (Ex: A01, B03): \n");
        scanf("%s", codigo2);

        printf("Nome da Cidade: \n");
        scanf("%s", &nome_cidade2);

        printf("Qual a População: \n");
        scanf("%d", &populacao2);  

        printf("Qual o Área: \n");
        scanf("%f", &area2);

        printf("Qual o PIB: \n");
        scanf("%f", &pib2);

        printf("Quantos Pontos turisticos: \n");
        scanf("%d", &pontos_turisticos2);

        printf("Qual a densidade Populacional: \n");
        scanf("%f", &densidade_populacional2);

        printf("Qual o PIB: \n");
        scanf("%f", &pib_per_capito2);


        printf("1 Carta \n");
        printf("Estado: %s\n", estado1); //string
        printf("Código: %s\n", codigo1); // codigo ou caractere
        printf("Nome da Cidade: %s \n", nome_cidade1); // String
        printf("A população é de: %d \n", populacao1); // Inteiro
        printf("Á área é de: %f \n", area1); // float
        printf("PIB é de: %f \n", pib1); // float format padrao
        printf("Pontos turisticos: %d \n", pontos_turisticos1); // Inteiro
 
         printf("---------------------------------------\n");
        
        printf("2 Carta \n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s \n", codigo2);
        printf("Nome da Cidade: %s \n", nome_cidade2);
        printf("A população é de: %d \n", populacao2);
        printf("Á área é de: %f \n", area2);
        printf("PIB é de: %f \n", pib2);
        printf("Pontos turisticos: %d \n", pontos_turisticos2);

        return 0;
    }
   
