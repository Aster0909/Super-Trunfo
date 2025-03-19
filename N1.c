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

 switch (opcao) {
    case 1:
       compararAtributo("População", (float)populacao1, (float)populacao2, 0);
        break;
    case 2:
        compararAtributo("Área", area1, area2, 0);
    case 3:
        compararAtributo("PIB", PIB1, PIB2,0);
    case 4:
        compararAtributo("Pontos turisticos", (float)pontos_turisticos1, (float)pontos_turisticos2, 0);
    case 5:
        compararAtributo("Densidade Populacional", densidade1, densidade2, 1);
    case 6:
        compararAtributo("PIB per Capita", pib_capita1, pib_capita2, 0);
    case 7:
        compararAtributo("Super Poder", super_poder1, super_poder2, 0);        

    default:
        printf("Opção invalida!\n");
        break;
    }

    // Função Determinar quem ganha 
    void compararAtributo(char atributo, float valor1, float valor2, int invertido) {
         printf("%s: ",atributo);
         if ((valor1 > valor2 && !invertido) || (valor1 < valor2 && invertido)) {
            printf("Carta 1 venceu!! (1)\n");
         }else if ((valor2 > valor1 && !invertido) || (valor2 < valor1 &&invertido)) {
            printf("Carta 2 venceu!! (0)\n");
         }else {
            printf("Empate!\n");
        }
    }

    int atributo1, atributo2;
    float valor1, valor2, soma1 = 0, soma2 = 0;

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade Populacional\n6. PIB per Capita\n");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo, garantindo que seja diferente do primeiro
    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade Populacional\n6. PIB per Capita\n");
        scanf("%d", &atributo2);
    } while (atributo2 == atributo1);

    // Função Comparar Atributos
    float obterValor(int opcao, float v1, float v2) {
        switch (opcao) {
            case 1: return v1 > v2 ? 1 : (v1 < v2 ? -1 : 0);
            case 2: return v1 > v2 ? 1 : (v1 < v2 ? -1 : 0);
            case 3: return v1 > v2 ? 1 : (v1 < v2 ? -1 : 0);
            case 4: return v1 > v2 ? 1 : (v1 < v2 ? -1 : 0);
            case 5: return v1 < v2 ? 1 : (v1 > v2 ? -1 : 0); // Densidade vence o menor
            case 6: return v1 > v2 ? 1 : (v1 < v2 ? -1 : 0);
            default: return 0;
        }
    }

    // Obter valores dos atributos e somar
    switch (atributo1) {
        case 1: valor1 = populacao1; valor2 = populacao2; break;
        case 2: valor1 = area1; valor2 = area2; break;
        case 3: valor1 = PIB1; valor2 = PIB2; break;
        case 4: valor1 = pontos_turisticos1; valor2 = pontos_turisticos2; break;
        case 5: valor1 = densidade1; valor2 = densidade2; break;
        case 6: valor1 = pib_capita1; valor2 = pib_capita2; break;
    }
    soma1 += valor1;
    soma2 += valor2;

    switch (atributo2) {
        case 1: valor1 = populacao1; valor2 = populacao2; break;
        case 2: valor1 = area1; valor2 = area2; break;
        case 3: valor1 = PIB1; valor2 = PIB2; break;
        case 4: valor1 = pontos_turisticos1; valor2 = pontos_turisticos2; break;
        case 5: valor1 = densidade1; valor2 = densidade2; break;
        case 6: valor1 = pib_capita1; valor2 = pib_capita2; break;
    }
    soma1 += valor1;
    soma2 += valor2;

    printf("\nSoma dos Atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);
    if (soma1 > soma2) printf("Carta 1 venceu!\n");
    else if (soma2 > soma1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    return 0;

}    
