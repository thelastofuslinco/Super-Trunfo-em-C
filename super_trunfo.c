#include <stdio.h>
#include <string.h>

int main()
{
    char state1, state2;
    char code1[5], code2[5];
    char name1[20], name2[20];
    int population1, population2;
    float area1, area2;
    float gdp1, gdp2;
    int tourist_spots1, tourist_spots2;

    // Carta 1
    printf("Carta 1. Digite o estado da carta: ");
    scanf(" %c", &state1);

    printf("Carta 1. Digite o código da carta: ");
    scanf("%4s", code1);
    getchar();

    printf("Carta 1. Digite o nome da cidade: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = 0;

    printf("Carta 1. Digite o número de habitantes da cidade: ");
    scanf("%d", &population1);

    printf("Carta 1. Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Carta 1. Digite o produto interno bruto da cidade: ");
    scanf("%f", &gdp1);

    printf("Carta 1. Digite o número de pontos turísticos: ");
    scanf("%d", &tourist_spots1);

    // Carta 2
    printf("Carta 2. Digite o estado da carta: ");
    scanf(" %c", &state2);

    printf("Carta 2. Digite o código da carta: ");
    scanf("%4s", code2);
    getchar();

    printf("Carta 2. Digite o nome da cidade: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = 0;

    printf("Carta 2. Digite o número de habitantes da cidade: ");
    scanf("%d", &population2);

    printf("Carta 2. Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Carta 2. Digite o produto interno bruto da cidade: ");
    scanf("%f", &gdp2);

    printf("Carta 2. Digite o número de pontos turísticos: ");
    scanf("%d", &tourist_spots2);

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Nome da cidade: %s\n", name1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", gdp1);
    printf("Número de Pontos Turísticos: %d\n", tourist_spots1);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)population1 / area1);
    printf("PIB per Capita: %.2f reais\n", gdp1 / (float)population1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Nome da cidade: %s\n", name2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", gdp2);
    printf("Número de Pontos Turísticos: %d\n", tourist_spots2);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)population2 / area2);
    printf("PIB per Capita: %.2f reais\n", gdp2 / (float)population2);

    return 0;
}
