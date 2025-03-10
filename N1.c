#include <stdio.h>

int main() {
    // Variaveis Carta 1
    char estado1;
    char codigo1[5];
    char nome_cidade[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    //Variaveis Carta 2
    char estado2;
    char codigo2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    //Entrada de dados para Carta 1
    printf("Carta 1 \n");
    printf("Digite um estado de (A a H):  ");
    scanf(" %c", &estado1 );

    printf("DIgite a letra do estado seguido de um número de 01 a 04 (ex:B03):  ");
    scanf("%4s", codigo1);

    printf("Digite o nome da cidade:  ");
    scanf(" %[^\n]s", nome_cidade);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área em Km: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade:  ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos:  ");
    scanf("%d", &pontos_turisticos1);

    //Calculo populacional e do PIB
    float densidade1 = (float)populacao1 / area1;
    float pib_capita1 = PIB1 / (float)populacao1;

    //Calculo Super Poder
    float super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + pib_capita1;

    //Exibição dados Carta 1
    printf("\n Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", &populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_capita1);

    while (getchar() !='\n');

    //Entrada de dados Carta 2
    printf("Carta 2 \n");
    printf("Digite um estado de (A a H):  ");
    scanf(" %c", &estado2);

    printf("DIgite a letra do estado seguido de um número de 01 a 04 (ex:B03):  ");
    scanf(" %4s", codigo2);

    printf("Digite o nome da cidade:  ");
    scanf(" %[^\n]s", nome_cidade2);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Digite a área em Km: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade:  ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos:  ");
    scanf("%d", &pontos_turisticos2);

    //Calculo populacional e p PIB
    float densidade2 = (float)populacao2 / area2;
    float pib_capita2 = PIB2 / (float)populacao2;

    //Calculo Super Poder
    float super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + pib_capita2;

    //Eibição Carta 2
    printf("\n Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", &populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_capita2);
    printf("Super POder: Carta %d venceu\n", super_poder1 > super_poder2 ? 1 : 2);


    return 0;

}    