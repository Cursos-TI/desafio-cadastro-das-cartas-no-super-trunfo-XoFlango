#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigoCarta1[3];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigoCarta2[3];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;

    // Variáveis para cálculos
    float densidadePopulacional1, pibPerCapita1;
    float densidadePopulacional2, pibPerCapita2;

    // Inserindo os dados da primeira carta
    printf("Insira os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);
    printf("------------------------------------------------------");
    
    // Inserindo os dados da segunda carta
    printf("\nInsira os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado2); // Adicionando um espaço antes do %c

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);
    printf("------------------------------------------------------");

    // Calculando a densidade populacional e o PIB per capita para a primeira cidade
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Calculando a densidade populacional e o PIB per capita para a segunda cidade
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibindo os dados das duas cartas com cálculos
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("------------------------------------------------------");

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}
